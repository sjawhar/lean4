// Lean compiler output
// Module: LeanIR
// Imports: public import Init public meta import Init import Lean.CoreM import Lean.Util.ForEachExpr import all Lean.Util.Path import all Lean.Environment import Lean.Compiler.Options import Lean.Compiler.IR.CompilerM import all Lean.Compiler.CSimpAttr import Lean.Compiler.LCNF.EmitC import Lean.Language.Lean import Lean.Compiler.LCNF.PhaseExt import Lean.Compiler.LCNF.Main
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
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Message_toString(lean_object*, uint8_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stderr();
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_importModulesCore(lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_initFn_00___x40_Lean_Compiler_CSimpAttr_309491121____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_instDecidableEqOLeanLevel(uint8_t, uint8_t);
lean_object* l_Lean_finalizeImport(lean_object*, lean_object*, lean_object*, uint32_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_instInhabited(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentEnvExtensionState___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_getOptionDecls();
lean_object* l_String_Slice_toName(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Language_Lean_setOption(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t l_String_instHashableRaw_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* lean_ir_export_entries(lean_object*);
lean_object* l_Lean_mkModuleData(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_get_ir_extra_const_names(lean_object*, uint8_t, uint8_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited(lean_object*);
lean_object* l_IO_println___at___00Lean_Environment_displayStats_spec__1(lean_object*);
lean_object* l_Lean_ModuleSetup_load(lean_object*);
lean_object* l_Lean_LeanOptions_toOptions(lean_object*);
lean_object* lean_init_search_path();
lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack_default(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedClassState_default;
extern lean_object* l_Lean_Meta_Match_Extension_instInhabitedState;
extern lean_object* l_Lean_Compiler_compiler_inLeanIR;
lean_object* l_Lean_Option_set___at___00Lean_Environment_realizeConst_spec__0(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_maxHeartbeats;
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
uint8_t l_Lean_MessageLog_hasErrors(lean_object*);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
lean_object* l_Lean_Environment_mainModule(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_saveModuleDataParts(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_io_get_num_heartbeats();
extern lean_object* l_Lean_diagnostics;
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Compiler_LCNF_emitC(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_io_prim_handle_write(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_display_cumulative_profiling_times();
lean_object* l_Lean_Environment_displayStats(lean_object*);
lean_object* l_Lean_Compiler_LCNF_resumeCompilation(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler_output;
extern lean_object* l_Lean_trace_profiler_serve;
uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object*);
double lean_float_of_nat(lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_Elab_mkMessageCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_Core_getAndEmptyMessageLog___redArg(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_isConstantReplacement_x3f_spec__0_spec__0_spec__1_spec__6_spec__10_spec__14_spec__16(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
extern lean_object* l_instInhabitedError;
lean_object* l_instInhabitedEIO___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_setState___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_EnvExtension_setState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_postponedCompileDeclsExt;
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
extern lean_object* l_Lean_inheritedTraceOptions;
extern lean_object* l_Lean_instInhabitedFileMap_default;
extern lean_object* l_Lean_IR_declMapExt;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_name(lean_object*);
uint8_t l_Lean_isExtern(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_initFn_00___x40_Lean_Compiler_CSimpAttr_309491121____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_setDeclPublic(lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_impureSigExt;
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedImportState_default;
lean_object* l_Lean_withImporting___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_CSimp_ext;
lean_object* l_Lean_Environment_setMainModule(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instanceExtension;
extern lean_object* l_Lean_classExtension;
extern lean_object* l_Lean_Meta_Match_Extension_extension;
lean_object* l_Lean_Environment_getModuleIdx_x3f(lean_object*, lean_object*);
uint8_t l_Lean_instOrdOLeanLevel_ord(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRSigData(lean_object*);
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRSigData___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanIR_0__mkIRData_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanIR_0__mkIRData_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_LeanIR_0__mkIRData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_LeanIR_0__mkIRData___closed__0 = (const lean_object*)&l___private_LeanIR_0__mkIRData___closed__0_value;
static const lean_array_object l___private_LeanIR_0__mkIRData___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_LeanIR_0__mkIRData___closed__1 = (const lean_object*)&l___private_LeanIR_0__mkIRData___closed__1_value;
static lean_once_cell_t l___private_LeanIR_0__mkIRData___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanIR_0__mkIRData___closed__2;
static const lean_array_object l___private_LeanIR_0__mkIRData___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_LeanIR_0__mkIRData___closed__3 = (const lean_object*)&l___private_LeanIR_0__mkIRData___closed__3_value;
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRData(lean_object*);
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRData___boxed(lean_object*, lean_object*);
static const lean_string_object l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-D"};
static const lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__0 = (const lean_object*)&l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanIR_0__setConfigOption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "unknown option '"};
static const lean_object* l___private_LeanIR_0__setConfigOption___closed__0 = (const lean_object*)&l___private_LeanIR_0__setConfigOption___closed__0_value;
static const lean_string_object l___private_LeanIR_0__setConfigOption___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_LeanIR_0__setConfigOption___closed__1 = (const lean_object*)&l___private_LeanIR_0__setConfigOption___closed__1_value;
static const lean_string_object l___private_LeanIR_0__setConfigOption___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "invalid -D parameter, argument must contain '='"};
static const lean_object* l___private_LeanIR_0__setConfigOption___closed__2 = (const lean_object*)&l___private_LeanIR_0__setConfigOption___closed__2_value;
static const lean_ctor_object l___private_LeanIR_0__setConfigOption___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanIR_0__setConfigOption___closed__2_value)}};
static const lean_object* l___private_LeanIR_0__setConfigOption___closed__3 = (const lean_object*)&l___private_LeanIR_0__setConfigOption___closed__3_value;
static const lean_string_object l___private_LeanIR_0__setConfigOption___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "invalid trailing argument `"};
static const lean_object* l___private_LeanIR_0__setConfigOption___closed__4 = (const lean_object*)&l___private_LeanIR_0__setConfigOption___closed__4_value;
static const lean_string_object l___private_LeanIR_0__setConfigOption___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "`, expected argument of the form `-Dopt=val`"};
static const lean_object* l___private_LeanIR_0__setConfigOption___closed__5 = (const lean_object*)&l___private_LeanIR_0__setConfigOption___closed__5_value;
LEAN_EXPORT lean_object* l___private_LeanIR_0__setConfigOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanIR_0__setConfigOption___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___elam__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___elam__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___elam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___elam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00main_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00main_spec__5___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00main_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00main_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00main_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00main_spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00main_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00main_spec__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_main___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_main___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "internal exception "};
static const lean_object* l_main___lam__1___closed__0 = (const lean_object*)&l_main___lam__1___closed__0_value;
static const lean_string_object l_main___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception #"};
static const lean_object* l_main___lam__1___closed__1 = (const lean_object*)&l_main___lam__1___closed__1_value;
static const lean_string_object l_main___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " (unknown)"};
static const lean_object* l_main___lam__1___closed__2 = (const lean_object*)&l_main___lam__1___closed__2_value;
LEAN_EXPORT lean_object* l_main___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_main___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00main_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00main_spec__6___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00main_spec__3(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_boxed"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "--stat"};
static const lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__37(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__37___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0(uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___closed__0;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__15___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17_spec__21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24_spec__35_spec__44___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24_spec__35___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__25___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__23___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__23___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18___redArg(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__39(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__39___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28_spec__42___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28_spec__42___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__22(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__22___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__23(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21_spec__31___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21_spec__31___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTraceAsMessages___at___00main_spec__10___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTraceAsMessages___at___00main_spec__10___closed__0;
static lean_once_cell_t l_Lean_addTraceAsMessages___at___00main_spec__10___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTraceAsMessages___at___00main_spec__10___closed__1;
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___at___00main_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___at___00main_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__11(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__13(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30_spec__44___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30_spec__44___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30_spec__44(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30_spec__44___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00main_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00main_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__19(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__14_spec__27(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__14_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__14(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__16(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__7___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "usage: leanir <setup.json> <output.ir> <output.c> [--stat] <-Dopt=val>..."};
static const lean_object* l_main___closed__0 = (const lean_object*)&l_main___closed__0_value;
static const lean_closure_object l_main___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_main___closed__1 = (const lean_object*)&l_main___closed__1_value;
static const lean_closure_object l_main___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_main___closed__2 = (const lean_object*)&l_main___closed__2_value;
static lean_once_cell_t l_main___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__3;
static lean_once_cell_t l_main___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__4;
static lean_once_cell_t l_main___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__5;
static lean_once_cell_t l_main___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__6;
static lean_once_cell_t l_main___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__7;
static lean_once_cell_t l_main___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__8;
static lean_once_cell_t l_main___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__9;
static const lean_ctor_object l_main___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_main___closed__10 = (const lean_object*)&l_main___closed__10_value;
static const lean_string_object l_main___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sig"};
static const lean_object* l_main___closed__11 = (const lean_object*)&l_main___closed__11_value;
static const lean_string_object l_main___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ir"};
static const lean_object* l_main___closed__12 = (const lean_object*)&l_main___closed__12_value;
static const lean_ctor_object l_main___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_main___closed__12_value),LEAN_SCALAR_PTR_LITERAL(157, 0, 67, 166, 172, 92, 38, 85)}};
static const lean_object* l_main___closed__13 = (const lean_object*)&l_main___closed__13_value;
static const lean_string_object l_main___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "C code generation"};
static const lean_object* l_main___closed__14 = (const lean_object*)&l_main___closed__14_value;
static lean_once_cell_t l_main___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__15;
static const lean_string_object l_main___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "failed to create '"};
static const lean_object* l_main___closed__16 = (const lean_object*)&l_main___closed__16_value;
static const lean_string_object l_main___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "LeanIR"};
static const lean_object* l_main___closed__17 = (const lean_object*)&l_main___closed__17_value;
static const lean_string_object l_main___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "main"};
static const lean_object* l_main___closed__18 = (const lean_object*)&l_main___closed__18_value;
static const lean_string_object l_main___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_main___closed__19 = (const lean_object*)&l_main___closed__19_value;
static lean_once_cell_t l_main___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__20;
static const lean_string_object l_main___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "import"};
static const lean_object* l_main___closed__21 = (const lean_object*)&l_main___closed__21_value;
static lean_once_cell_t l_main___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__22;
static lean_once_cell_t l_main___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__23;
static const lean_string_object l_main___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l_main___closed__24 = (const lean_object*)&l_main___closed__24_value;
static const lean_ctor_object l_main___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_main___closed__24_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l_main___closed__25 = (const lean_object*)&l_main___closed__25_value;
static const lean_ctor_object l_main___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_main___closed__25_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_main___closed__26 = (const lean_object*)&l_main___closed__26_value;
static lean_once_cell_t l_main___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__27;
static lean_once_cell_t l_main___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__28;
static lean_once_cell_t l_main___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__29;
static lean_once_cell_t l_main___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__30;
static lean_once_cell_t l_main___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__31;
static lean_once_cell_t l_main___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__32;
static const lean_array_object l_main___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_main___closed__33 = (const lean_object*)&l_main___closed__33_value;
static const lean_array_object l_main___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_main___closed__34 = (const lean_object*)&l_main___closed__34_value;
static const lean_string_object l_main___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "module '"};
static const lean_object* l_main___closed__35 = (const lean_object*)&l_main___closed__35_value;
static const lean_string_object l_main___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "' not found"};
static const lean_object* l_main___closed__36 = (const lean_object*)&l_main___closed__36_value;
static lean_once_cell_t l_main___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_main___closed__37;
LEAN_EXPORT lean_object* l_main___boxed__const__1;
LEAN_EXPORT lean_object* l_main___boxed__const__2;
LEAN_EXPORT lean_object* _lean_main(lean_object*);
LEAN_EXPORT lean_object* l_main___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17_spec__21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__23(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__23___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__25(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21_spec__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21_spec__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24_spec__35(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28_spec__42(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28_spec__42___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24_spec__35_spec__44(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRSigData(lean_object* v_env_1_){
_start:
{
uint8_t v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = 0;
v___x_4_ = lean_box(0);
lean_inc_ref(v_env_1_);
v___x_5_ = l_Lean_mkModuleData(v_env_1_, v___x_3_, v___x_4_);
if (lean_obj_tag(v___x_5_) == 0)
{
lean_object* v_a_6_; lean_object* v___x_8_; uint8_t v_isShared_9_; uint8_t v_isSharedCheck_30_; 
v_a_6_ = lean_ctor_get(v___x_5_, 0);
v_isSharedCheck_30_ = !lean_is_exclusive(v___x_5_);
if (v_isSharedCheck_30_ == 0)
{
v___x_8_ = v___x_5_;
v_isShared_9_ = v_isSharedCheck_30_;
goto v_resetjp_7_;
}
else
{
lean_inc(v_a_6_);
lean_dec(v___x_5_);
v___x_8_ = lean_box(0);
v_isShared_9_ = v_isSharedCheck_30_;
goto v_resetjp_7_;
}
v_resetjp_7_:
{
uint8_t v_isModule_10_; lean_object* v_imports_11_; lean_object* v_constNames_12_; lean_object* v_constants_13_; lean_object* v_entries_14_; lean_object* v_constTrie_15_; lean_object* v_extraConstTrie_16_; lean_object* v___x_18_; uint8_t v_isShared_19_; uint8_t v_isSharedCheck_28_; 
v_isModule_10_ = lean_ctor_get_uint8(v_a_6_, sizeof(void*)*7);
v_imports_11_ = lean_ctor_get(v_a_6_, 0);
v_constNames_12_ = lean_ctor_get(v_a_6_, 1);
v_constants_13_ = lean_ctor_get(v_a_6_, 2);
v_entries_14_ = lean_ctor_get(v_a_6_, 4);
v_constTrie_15_ = lean_ctor_get(v_a_6_, 5);
v_extraConstTrie_16_ = lean_ctor_get(v_a_6_, 6);
v_isSharedCheck_28_ = !lean_is_exclusive(v_a_6_);
if (v_isSharedCheck_28_ == 0)
{
lean_object* v_unused_29_; 
v_unused_29_ = lean_ctor_get(v_a_6_, 3);
lean_dec(v_unused_29_);
v___x_18_ = v_a_6_;
v_isShared_19_ = v_isSharedCheck_28_;
goto v_resetjp_17_;
}
else
{
lean_inc(v_extraConstTrie_16_);
lean_inc(v_constTrie_15_);
lean_inc(v_entries_14_);
lean_inc(v_constants_13_);
lean_inc(v_constNames_12_);
lean_inc(v_imports_11_);
lean_dec(v_a_6_);
v___x_18_ = lean_box(0);
v_isShared_19_ = v_isSharedCheck_28_;
goto v_resetjp_17_;
}
v_resetjp_17_:
{
uint8_t v___x_20_; lean_object* v___x_21_; lean_object* v___x_23_; 
v___x_20_ = 0;
v___x_21_ = lean_get_ir_extra_const_names(v_env_1_, v___x_3_, v___x_20_);
if (v_isShared_19_ == 0)
{
lean_ctor_set(v___x_18_, 3, v___x_21_);
v___x_23_ = v___x_18_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_imports_11_);
lean_ctor_set(v_reuseFailAlloc_27_, 1, v_constNames_12_);
lean_ctor_set(v_reuseFailAlloc_27_, 2, v_constants_13_);
lean_ctor_set(v_reuseFailAlloc_27_, 3, v___x_21_);
lean_ctor_set(v_reuseFailAlloc_27_, 4, v_entries_14_);
lean_ctor_set(v_reuseFailAlloc_27_, 5, v_constTrie_15_);
lean_ctor_set(v_reuseFailAlloc_27_, 6, v_extraConstTrie_16_);
lean_ctor_set_uint8(v_reuseFailAlloc_27_, sizeof(void*)*7, v_isModule_10_);
v___x_23_ = v_reuseFailAlloc_27_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
lean_object* v___x_25_; 
if (v_isShared_9_ == 0)
{
lean_ctor_set(v___x_8_, 0, v___x_23_);
v___x_25_ = v___x_8_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v___x_23_);
v___x_25_ = v_reuseFailAlloc_26_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
return v___x_25_;
}
}
}
}
}
else
{
lean_dec_ref(v_env_1_);
return v___x_5_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRSigData___boxed(lean_object* v_env_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l___private_LeanIR_0__mkIRSigData(v_env_31_);
return v_res_33_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1_spec__1(lean_object* v_a_34_, lean_object* v_as_35_, size_t v_i_36_, size_t v_stop_37_){
_start:
{
uint8_t v___x_38_; 
v___x_38_ = lean_usize_dec_eq(v_i_36_, v_stop_37_);
if (v___x_38_ == 0)
{
lean_object* v___x_39_; uint8_t v___x_40_; 
v___x_39_ = lean_array_uget_borrowed(v_as_35_, v_i_36_);
v___x_40_ = lean_name_eq(v_a_34_, v___x_39_);
if (v___x_40_ == 0)
{
size_t v___x_41_; size_t v___x_42_; 
v___x_41_ = ((size_t)1ULL);
v___x_42_ = lean_usize_add(v_i_36_, v___x_41_);
v_i_36_ = v___x_42_;
goto _start;
}
else
{
return v___x_40_;
}
}
else
{
uint8_t v___x_44_; 
v___x_44_ = 0;
return v___x_44_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1_spec__1___boxed(lean_object* v_a_45_, lean_object* v_as_46_, lean_object* v_i_47_, lean_object* v_stop_48_){
_start:
{
size_t v_i_boxed_49_; size_t v_stop_boxed_50_; uint8_t v_res_51_; lean_object* v_r_52_; 
v_i_boxed_49_ = lean_unbox_usize(v_i_47_);
lean_dec(v_i_47_);
v_stop_boxed_50_ = lean_unbox_usize(v_stop_48_);
lean_dec(v_stop_48_);
v_res_51_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1_spec__1(v_a_45_, v_as_46_, v_i_boxed_49_, v_stop_boxed_50_);
lean_dec_ref(v_as_46_);
lean_dec(v_a_45_);
v_r_52_ = lean_box(v_res_51_);
return v_r_52_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1(lean_object* v_as_53_, lean_object* v_a_54_){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; uint8_t v___x_57_; 
v___x_55_ = lean_unsigned_to_nat(0u);
v___x_56_ = lean_array_get_size(v_as_53_);
v___x_57_ = lean_nat_dec_lt(v___x_55_, v___x_56_);
if (v___x_57_ == 0)
{
return v___x_57_;
}
else
{
if (v___x_57_ == 0)
{
return v___x_57_;
}
else
{
size_t v___x_58_; size_t v___x_59_; uint8_t v___x_60_; 
v___x_58_ = ((size_t)0ULL);
v___x_59_ = lean_usize_of_nat(v___x_56_);
v___x_60_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1_spec__1(v_a_54_, v_as_53_, v___x_58_, v___x_59_);
return v___x_60_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1___boxed(lean_object* v_as_61_, lean_object* v_a_62_){
_start:
{
uint8_t v_res_63_; lean_object* v_r_64_; 
v_res_63_ = l_Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1(v_as_61_, v_a_62_);
lean_dec(v_a_62_);
lean_dec_ref(v_as_61_);
v_r_64_ = lean_box(v_res_63_);
return v_r_64_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2(lean_object* v_irExtNames_65_, lean_object* v_as_66_, size_t v_i_67_, size_t v_stop_68_, lean_object* v_b_69_){
_start:
{
lean_object* v___y_71_; uint8_t v___x_75_; 
v___x_75_ = lean_usize_dec_eq(v_i_67_, v_stop_68_);
if (v___x_75_ == 0)
{
lean_object* v___x_76_; lean_object* v_fst_77_; uint8_t v___x_78_; 
v___x_76_ = lean_array_uget_borrowed(v_as_66_, v_i_67_);
v_fst_77_ = lean_ctor_get(v___x_76_, 0);
v___x_78_ = l_Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1(v_irExtNames_65_, v_fst_77_);
if (v___x_78_ == 0)
{
lean_object* v___x_79_; 
lean_inc(v___x_76_);
v___x_79_ = lean_array_push(v_b_69_, v___x_76_);
v___y_71_ = v___x_79_;
goto v___jp_70_;
}
else
{
v___y_71_ = v_b_69_;
goto v___jp_70_;
}
}
else
{
return v_b_69_;
}
v___jp_70_:
{
size_t v___x_72_; size_t v___x_73_; 
v___x_72_ = ((size_t)1ULL);
v___x_73_ = lean_usize_add(v_i_67_, v___x_72_);
v_i_67_ = v___x_73_;
v_b_69_ = v___y_71_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2___boxed(lean_object* v_irExtNames_80_, lean_object* v_as_81_, lean_object* v_i_82_, lean_object* v_stop_83_, lean_object* v_b_84_){
_start:
{
size_t v_i_boxed_85_; size_t v_stop_boxed_86_; lean_object* v_res_87_; 
v_i_boxed_85_ = lean_unbox_usize(v_i_82_);
lean_dec(v_i_82_);
v_stop_boxed_86_ = lean_unbox_usize(v_stop_83_);
lean_dec(v_stop_83_);
v_res_87_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2(v_irExtNames_80_, v_as_81_, v_i_boxed_85_, v_stop_boxed_86_, v_b_84_);
lean_dec_ref(v_as_81_);
lean_dec_ref(v_irExtNames_80_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanIR_0__mkIRData_spec__0(size_t v_sz_88_, size_t v_i_89_, lean_object* v_bs_90_){
_start:
{
uint8_t v___x_91_; 
v___x_91_ = lean_usize_dec_lt(v_i_89_, v_sz_88_);
if (v___x_91_ == 0)
{
return v_bs_90_;
}
else
{
lean_object* v_v_92_; lean_object* v_fst_93_; lean_object* v___x_94_; lean_object* v_bs_x27_95_; size_t v___x_96_; size_t v___x_97_; lean_object* v___x_98_; 
v_v_92_ = lean_array_uget_borrowed(v_bs_90_, v_i_89_);
v_fst_93_ = lean_ctor_get(v_v_92_, 0);
lean_inc(v_fst_93_);
v___x_94_ = lean_unsigned_to_nat(0u);
v_bs_x27_95_ = lean_array_uset(v_bs_90_, v_i_89_, v___x_94_);
v___x_96_ = ((size_t)1ULL);
v___x_97_ = lean_usize_add(v_i_89_, v___x_96_);
v___x_98_ = lean_array_uset(v_bs_x27_95_, v_i_89_, v_fst_93_);
v_i_89_ = v___x_97_;
v_bs_90_ = v___x_98_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanIR_0__mkIRData_spec__0___boxed(lean_object* v_sz_100_, lean_object* v_i_101_, lean_object* v_bs_102_){
_start:
{
size_t v_sz_boxed_103_; size_t v_i_boxed_104_; lean_object* v_res_105_; 
v_sz_boxed_103_ = lean_unbox_usize(v_sz_100_);
lean_dec(v_sz_100_);
v_i_boxed_104_ = lean_unbox_usize(v_i_101_);
lean_dec(v_i_101_);
v_res_105_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanIR_0__mkIRData_spec__0(v_sz_boxed_103_, v_i_boxed_104_, v_bs_102_);
return v_res_105_;
}
}
static lean_object* _init_l___private_LeanIR_0__mkIRData___closed__2(void){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_110_ = l_ByteArray_empty;
v___x_111_ = ((lean_object*)(l___private_LeanIR_0__mkIRData___closed__1));
v___x_112_ = lean_box(0);
v___x_113_ = lean_box(0);
v___x_114_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_114_, 0, v___x_113_);
lean_ctor_set(v___x_114_, 1, v___x_112_);
lean_ctor_set(v___x_114_, 2, v___x_111_);
lean_ctor_set(v___x_114_, 3, v___x_110_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRData(lean_object* v_env_117_){
_start:
{
lean_object* v_irEntries_119_; uint8_t v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
lean_inc_ref_n(v_env_117_, 2);
v_irEntries_119_ = lean_ir_export_entries(v_env_117_);
v___x_120_ = 2;
v___x_121_ = lean_box(0);
v___x_122_ = l_Lean_mkModuleData(v_env_117_, v___x_120_, v___x_121_);
if (lean_obj_tag(v___x_122_) == 0)
{
lean_object* v_a_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_154_; 
v_a_123_ = lean_ctor_get(v___x_122_, 0);
v_isSharedCheck_154_ = !lean_is_exclusive(v___x_122_);
if (v_isSharedCheck_154_ == 0)
{
v___x_125_ = v___x_122_;
v_isShared_126_ = v_isSharedCheck_154_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_a_123_);
lean_dec(v___x_122_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_154_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___y_128_; lean_object* v_entries_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; uint8_t v___x_145_; 
v_entries_141_ = lean_ctor_get(v_a_123_, 4);
lean_inc_ref(v_entries_141_);
lean_dec(v_a_123_);
v___x_142_ = lean_unsigned_to_nat(0u);
v___x_143_ = lean_array_get_size(v_entries_141_);
v___x_144_ = ((lean_object*)(l___private_LeanIR_0__mkIRData___closed__3));
v___x_145_ = lean_nat_dec_lt(v___x_142_, v___x_143_);
if (v___x_145_ == 0)
{
lean_dec_ref(v_entries_141_);
v___y_128_ = v___x_144_;
goto v___jp_127_;
}
else
{
size_t v_sz_146_; size_t v___x_147_; lean_object* v_irExtNames_148_; uint8_t v___x_149_; 
v_sz_146_ = lean_array_size(v_irEntries_119_);
v___x_147_ = ((size_t)0ULL);
lean_inc_ref(v_irEntries_119_);
v_irExtNames_148_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanIR_0__mkIRData_spec__0(v_sz_146_, v___x_147_, v_irEntries_119_);
v___x_149_ = lean_nat_dec_le(v___x_143_, v___x_143_);
if (v___x_149_ == 0)
{
if (v___x_145_ == 0)
{
lean_dec_ref(v_irExtNames_148_);
lean_dec_ref(v_entries_141_);
v___y_128_ = v___x_144_;
goto v___jp_127_;
}
else
{
size_t v___x_150_; lean_object* v___x_151_; 
v___x_150_ = lean_usize_of_nat(v___x_143_);
v___x_151_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2(v_irExtNames_148_, v_entries_141_, v___x_147_, v___x_150_, v___x_144_);
lean_dec_ref(v_entries_141_);
lean_dec_ref(v_irExtNames_148_);
v___y_128_ = v___x_151_;
goto v___jp_127_;
}
}
else
{
size_t v___x_152_; lean_object* v___x_153_; 
v___x_152_ = lean_usize_of_nat(v___x_143_);
v___x_153_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2(v_irExtNames_148_, v_entries_141_, v___x_147_, v___x_152_, v___x_144_);
lean_dec_ref(v_entries_141_);
lean_dec_ref(v_irExtNames_148_);
v___y_128_ = v___x_153_;
goto v___jp_127_;
}
}
v___jp_127_:
{
lean_object* v___x_129_; uint8_t v_isModule_130_; lean_object* v_imports_131_; lean_object* v___x_132_; uint8_t v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_139_; 
v___x_129_ = l_Lean_Environment_header(v_env_117_);
v_isModule_130_ = lean_ctor_get_uint8(v___x_129_, sizeof(void*)*7 + 4);
v_imports_131_ = lean_ctor_get(v___x_129_, 1);
lean_inc_ref(v_imports_131_);
lean_dec_ref(v___x_129_);
v___x_132_ = ((lean_object*)(l___private_LeanIR_0__mkIRData___closed__0));
v___x_133_ = 1;
v___x_134_ = lean_get_ir_extra_const_names(v_env_117_, v___x_120_, v___x_133_);
v___x_135_ = l_Array_append___redArg(v_irEntries_119_, v___y_128_);
lean_dec_ref(v___y_128_);
v___x_136_ = lean_obj_once(&l___private_LeanIR_0__mkIRData___closed__2, &l___private_LeanIR_0__mkIRData___closed__2_once, _init_l___private_LeanIR_0__mkIRData___closed__2);
v___x_137_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v___x_137_, 0, v_imports_131_);
lean_ctor_set(v___x_137_, 1, v___x_132_);
lean_ctor_set(v___x_137_, 2, v___x_132_);
lean_ctor_set(v___x_137_, 3, v___x_134_);
lean_ctor_set(v___x_137_, 4, v___x_135_);
lean_ctor_set(v___x_137_, 5, v___x_136_);
lean_ctor_set(v___x_137_, 6, v___x_136_);
lean_ctor_set_uint8(v___x_137_, sizeof(void*)*7, v_isModule_130_);
if (v_isShared_126_ == 0)
{
lean_ctor_set(v___x_125_, 0, v___x_137_);
v___x_139_ = v___x_125_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v___x_137_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
}
}
else
{
lean_dec_ref(v_irEntries_119_);
lean_dec_ref(v_env_117_);
return v___x_122_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRData___boxed(lean_object* v_env_155_, lean_object* v_a_156_){
_start:
{
lean_object* v_res_157_; 
v_res_157_ = l___private_LeanIR_0__mkIRData(v_env_155_);
return v_res_157_;
}
}
static lean_object* _init_l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__0));
v___x_160_ = lean_string_utf8_byte_size(v___x_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg(lean_object* v_s_161_){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; uint8_t v___x_165_; 
v___x_162_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__0));
v___x_163_ = lean_string_utf8_byte_size(v_s_161_);
v___x_164_ = lean_obj_once(&l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__1, &l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__1_once, _init_l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__1);
v___x_165_ = lean_nat_dec_le(v___x_164_, v___x_163_);
if (v___x_165_ == 0)
{
lean_object* v___x_166_; 
lean_dec_ref(v_s_161_);
v___x_166_ = lean_box(0);
return v___x_166_;
}
else
{
lean_object* v___x_167_; uint8_t v___x_168_; 
v___x_167_ = lean_unsigned_to_nat(0u);
v___x_168_ = lean_string_memcmp(v_s_161_, v___x_162_, v___x_167_, v___x_167_, v___x_164_);
if (v___x_168_ == 0)
{
lean_object* v___x_169_; 
lean_dec_ref(v_s_161_);
v___x_169_ = lean_box(0);
return v___x_169_;
}
else
{
lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
lean_inc_ref(v_s_161_);
v___x_170_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_170_, 0, v_s_161_);
lean_ctor_set(v___x_170_, 1, v___x_167_);
lean_ctor_set(v___x_170_, 2, v___x_163_);
v___x_171_ = l_String_Slice_pos_x21(v___x_170_, v___x_164_);
lean_dec_ref_known(v___x_170_, 3);
v___x_172_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_172_, 0, v_s_161_);
lean_ctor_set(v___x_172_, 1, v___x_171_);
lean_ctor_set(v___x_172_, 2, v___x_163_);
v___x_173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_173_, 0, v___x_172_);
return v___x_173_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0(lean_object* v_s_174_, lean_object* v_pat_175_){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg(v_s_174_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___boxed(lean_object* v_s_177_, lean_object* v_pat_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0(v_s_177_, v_pat_178_);
lean_dec_ref(v_pat_178_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg(lean_object* v_val_180_, lean_object* v_a_181_, lean_object* v_b_182_){
_start:
{
lean_object* v_str_183_; lean_object* v_startInclusive_184_; lean_object* v_endExclusive_185_; lean_object* v___x_186_; uint8_t v___x_187_; 
v_str_183_ = lean_ctor_get(v_val_180_, 0);
v_startInclusive_184_ = lean_ctor_get(v_val_180_, 1);
v_endExclusive_185_ = lean_ctor_get(v_val_180_, 2);
v___x_186_ = lean_nat_sub(v_endExclusive_185_, v_startInclusive_184_);
v___x_187_ = lean_nat_dec_eq(v_a_181_, v___x_186_);
lean_dec(v___x_186_);
if (v___x_187_ == 0)
{
lean_object* v___x_188_; uint32_t v___x_189_; uint32_t v___x_190_; uint8_t v___x_191_; 
v___x_188_ = lean_nat_add(v_startInclusive_184_, v_a_181_);
v___x_189_ = lean_string_utf8_get_fast(v_str_183_, v___x_188_);
v___x_190_ = 61;
v___x_191_ = lean_uint32_dec_eq(v___x_189_, v___x_190_);
if (v___x_191_ == 0)
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
lean_dec(v_a_181_);
v___x_192_ = lean_box(0);
v___x_193_ = lean_string_utf8_next_fast(v_str_183_, v___x_188_);
lean_dec(v___x_188_);
v___x_194_ = lean_nat_sub(v___x_193_, v_startInclusive_184_);
v_a_181_ = v___x_194_;
v_b_182_ = v___x_192_;
goto _start;
}
else
{
lean_object* v___x_196_; 
lean_dec(v___x_188_);
v___x_196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_196_, 0, v_a_181_);
return v___x_196_;
}
}
else
{
lean_dec(v_a_181_);
lean_inc(v_b_182_);
return v_b_182_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg___boxed(lean_object* v_val_197_, lean_object* v_a_198_, lean_object* v_b_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg(v_val_197_, v_a_198_, v_b_199_);
lean_dec(v_b_199_);
lean_dec_ref(v_val_197_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l___private_LeanIR_0__setConfigOption(lean_object* v_opts_208_, lean_object* v_arg_209_){
_start:
{
lean_object* v___x_211_; 
lean_inc_ref(v_arg_209_);
v___x_211_ = l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg(v_arg_209_);
if (lean_obj_tag(v___x_211_) == 1)
{
lean_object* v_val_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_276_; 
lean_dec_ref(v_arg_209_);
v_val_212_ = lean_ctor_get(v___x_211_, 0);
v_isSharedCheck_276_ = !lean_is_exclusive(v___x_211_);
if (v_isSharedCheck_276_ == 0)
{
v___x_214_ = v___x_211_;
v_isShared_215_ = v_isSharedCheck_276_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_val_212_);
lean_dec(v___x_211_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_276_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
lean_object* v___y_217_; lean_object* v_searcher_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v_searcher_269_ = lean_unsigned_to_nat(0u);
v___x_270_ = lean_box(0);
v___x_271_ = l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg(v_val_212_, v_searcher_269_, v___x_270_);
if (lean_obj_tag(v___x_271_) == 0)
{
lean_object* v_startInclusive_272_; lean_object* v_endExclusive_273_; lean_object* v___x_274_; 
v_startInclusive_272_ = lean_ctor_get(v_val_212_, 1);
v_endExclusive_273_ = lean_ctor_get(v_val_212_, 2);
v___x_274_ = lean_nat_sub(v_endExclusive_273_, v_startInclusive_272_);
v___y_217_ = v___x_274_;
goto v___jp_216_;
}
else
{
lean_object* v_val_275_; 
v_val_275_ = lean_ctor_get(v___x_271_, 0);
lean_inc(v_val_275_);
lean_dec_ref_known(v___x_271_, 1);
v___y_217_ = v_val_275_;
goto v___jp_216_;
}
v___jp_216_:
{
lean_object* v_str_218_; lean_object* v_startInclusive_219_; lean_object* v_endExclusive_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_268_; 
v_str_218_ = lean_ctor_get(v_val_212_, 0);
v_startInclusive_219_ = lean_ctor_get(v_val_212_, 1);
v_endExclusive_220_ = lean_ctor_get(v_val_212_, 2);
v_isSharedCheck_268_ = !lean_is_exclusive(v_val_212_);
if (v_isSharedCheck_268_ == 0)
{
v___x_222_ = v_val_212_;
v_isShared_223_ = v_isSharedCheck_268_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_endExclusive_220_);
lean_inc(v_startInclusive_219_);
lean_inc(v_str_218_);
lean_dec(v_val_212_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_268_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v___x_224_; uint8_t v___x_225_; 
v___x_224_ = lean_nat_sub(v_endExclusive_220_, v_startInclusive_219_);
v___x_225_ = lean_nat_dec_eq(v___y_217_, v___x_224_);
lean_dec(v___x_224_);
if (v___x_225_ == 0)
{
lean_object* v___x_226_; 
v___x_226_ = l_Lean_getOptionDecls();
if (lean_obj_tag(v___x_226_) == 0)
{
lean_object* v_a_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_255_; 
v_a_227_ = lean_ctor_get(v___x_226_, 0);
v_isSharedCheck_255_ = !lean_is_exclusive(v___x_226_);
if (v_isSharedCheck_255_ == 0)
{
v___x_229_ = v___x_226_;
v_isShared_230_ = v_isSharedCheck_255_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_a_227_);
lean_dec(v___x_226_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_255_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___x_231_; lean_object* v___x_233_; 
v___x_231_ = lean_nat_add(v_startInclusive_219_, v___y_217_);
lean_dec(v___y_217_);
lean_inc(v___x_231_);
lean_inc(v_startInclusive_219_);
lean_inc_ref(v_str_218_);
if (v_isShared_223_ == 0)
{
lean_ctor_set(v___x_222_, 2, v___x_231_);
v___x_233_ = v___x_222_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v_str_218_);
lean_ctor_set(v_reuseFailAlloc_254_, 1, v_startInclusive_219_);
lean_ctor_set(v_reuseFailAlloc_254_, 2, v___x_231_);
v___x_233_ = v_reuseFailAlloc_254_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
lean_object* v_name_234_; lean_object* v___x_235_; 
v_name_234_ = l_String_Slice_toName(v___x_233_);
lean_dec_ref(v___x_233_);
v___x_235_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_a_227_, v_name_234_);
lean_dec(v_a_227_);
if (lean_obj_tag(v___x_235_) == 1)
{
lean_object* v_val_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v_val_240_; lean_object* v___x_241_; 
lean_del_object(v___x_229_);
lean_del_object(v___x_214_);
v_val_236_ = lean_ctor_get(v___x_235_, 0);
lean_inc(v_val_236_);
lean_dec_ref_known(v___x_235_, 1);
v___x_237_ = lean_string_utf8_next_fast(v_str_218_, v___x_231_);
lean_dec(v___x_231_);
v___x_238_ = lean_nat_sub(v___x_237_, v_startInclusive_219_);
v___x_239_ = lean_nat_add(v_startInclusive_219_, v___x_238_);
lean_dec(v___x_238_);
lean_dec(v_startInclusive_219_);
v_val_240_ = lean_string_utf8_extract_fast(v_str_218_, v___x_239_, v_endExclusive_220_);
lean_dec(v_endExclusive_220_);
lean_dec(v___x_239_);
lean_dec_ref(v_str_218_);
v___x_241_ = l_Lean_Language_Lean_setOption(v_opts_208_, v_val_236_, v_name_234_, v_val_240_);
return v___x_241_;
}
else
{
lean_object* v___x_242_; uint8_t v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_249_; 
lean_dec(v___x_235_);
lean_dec(v___x_231_);
lean_dec(v_endExclusive_220_);
lean_dec(v_startInclusive_219_);
lean_dec_ref(v_str_218_);
lean_dec_ref(v_opts_208_);
v___x_242_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__0));
v___x_243_ = 1;
v___x_244_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_234_, v___x_243_);
v___x_245_ = lean_string_append(v___x_242_, v___x_244_);
lean_dec_ref(v___x_244_);
v___x_246_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__1));
v___x_247_ = lean_string_append(v___x_245_, v___x_246_);
if (v_isShared_215_ == 0)
{
lean_ctor_set_tag(v___x_214_, 18);
lean_ctor_set(v___x_214_, 0, v___x_247_);
v___x_249_ = v___x_214_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v___x_247_);
v___x_249_ = v_reuseFailAlloc_253_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
lean_object* v___x_251_; 
if (v_isShared_230_ == 0)
{
lean_ctor_set_tag(v___x_229_, 1);
lean_ctor_set(v___x_229_, 0, v___x_249_);
v___x_251_ = v___x_229_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v___x_249_);
v___x_251_ = v_reuseFailAlloc_252_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
return v___x_251_;
}
}
}
}
}
}
else
{
lean_object* v_a_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_263_; 
lean_del_object(v___x_222_);
lean_dec(v_endExclusive_220_);
lean_dec(v_startInclusive_219_);
lean_dec_ref(v_str_218_);
lean_dec(v___y_217_);
lean_del_object(v___x_214_);
lean_dec_ref(v_opts_208_);
v_a_256_ = lean_ctor_get(v___x_226_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___x_226_);
if (v_isSharedCheck_263_ == 0)
{
v___x_258_ = v___x_226_;
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_a_256_);
lean_dec(v___x_226_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___x_261_; 
if (v_isShared_259_ == 0)
{
v___x_261_ = v___x_258_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v_a_256_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
}
}
else
{
lean_object* v___x_264_; lean_object* v___x_266_; 
lean_del_object(v___x_222_);
lean_dec(v_endExclusive_220_);
lean_dec(v_startInclusive_219_);
lean_dec_ref(v_str_218_);
lean_dec(v___y_217_);
lean_dec_ref(v_opts_208_);
v___x_264_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__3));
if (v_isShared_215_ == 0)
{
lean_ctor_set(v___x_214_, 0, v___x_264_);
v___x_266_ = v___x_214_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v___x_264_);
v___x_266_ = v_reuseFailAlloc_267_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
return v___x_266_;
}
}
}
}
}
}
else
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
lean_dec(v___x_211_);
lean_dec_ref(v_opts_208_);
v___x_277_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__4));
v___x_278_ = lean_string_append(v___x_277_, v_arg_209_);
lean_dec_ref(v_arg_209_);
v___x_279_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__5));
v___x_280_ = lean_string_append(v___x_278_, v___x_279_);
v___x_281_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_281_, 0, v___x_280_);
v___x_282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_282_, 0, v___x_281_);
return v___x_282_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanIR_0__setConfigOption___boxed(lean_object* v_opts_283_, lean_object* v_arg_284_, lean_object* v_a_285_){
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l___private_LeanIR_0__setConfigOption(v_opts_283_, v_arg_284_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1(lean_object* v_val_287_, lean_object* v_inst_288_, lean_object* v_R_289_, lean_object* v_a_290_, lean_object* v_b_291_, lean_object* v_c_292_){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg(v_val_287_, v_a_290_, v_b_291_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___boxed(lean_object* v_val_294_, lean_object* v_inst_295_, lean_object* v_R_296_, lean_object* v_a_297_, lean_object* v_b_298_, lean_object* v_c_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1(v_val_294_, v_inst_295_, v_R_296_, v_a_297_, v_b_298_, v_c_299_);
lean_dec(v_b_298_);
lean_dec_ref(v_val_294_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l_main___elam__0___redArg(lean_object* v___x_301_, lean_object* v_inst_302_, lean_object* v_ext_303_, lean_object* v_env_304_){
_start:
{
lean_object* v_toEnvExtension_306_; lean_object* v_addImportedFn_307_; lean_object* v_asyncMode_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v_importedEntries_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_339_; 
v_toEnvExtension_306_ = lean_ctor_get(v_ext_303_, 0);
lean_inc_ref(v_toEnvExtension_306_);
v_addImportedFn_307_ = lean_ctor_get(v_ext_303_, 2);
lean_inc_ref(v_addImportedFn_307_);
lean_dec_ref(v_ext_303_);
v_asyncMode_308_ = lean_ctor_get(v_toEnvExtension_306_, 2);
v___x_309_ = l_Lean_instInhabitedPersistentEnvExtensionState___redArg(v_inst_302_);
lean_inc_ref(v_env_304_);
v___x_310_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_309_, v_toEnvExtension_306_, v_env_304_, v_asyncMode_308_, v___x_301_);
lean_dec_ref(v___x_309_);
v_importedEntries_311_ = lean_ctor_get(v___x_310_, 0);
v_isSharedCheck_339_ = !lean_is_exclusive(v___x_310_);
if (v_isSharedCheck_339_ == 0)
{
lean_object* v_unused_340_; 
v_unused_340_ = lean_ctor_get(v___x_310_, 1);
lean_dec(v_unused_340_);
v___x_313_ = v___x_310_;
v_isShared_314_ = v_isSharedCheck_339_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_importedEntries_311_);
lean_dec(v___x_310_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_339_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_315_ = l_Lean_Options_empty;
lean_inc_ref(v_env_304_);
v___x_316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_316_, 0, v_env_304_);
lean_ctor_set(v___x_316_, 1, v___x_315_);
lean_inc_ref(v_importedEntries_311_);
v___x_317_ = lean_apply_3(v_addImportedFn_307_, v_importedEntries_311_, v___x_316_, lean_box(0));
if (lean_obj_tag(v___x_317_) == 0)
{
lean_object* v_a_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_330_; 
v_a_318_ = lean_ctor_get(v___x_317_, 0);
v_isSharedCheck_330_ = !lean_is_exclusive(v___x_317_);
if (v_isSharedCheck_330_ == 0)
{
v___x_320_ = v___x_317_;
v_isShared_321_ = v_isSharedCheck_330_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_a_318_);
lean_dec(v___x_317_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_330_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v___x_323_; 
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 1, v_a_318_);
v___x_323_ = v___x_313_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_importedEntries_311_);
lean_ctor_set(v_reuseFailAlloc_329_, 1, v_a_318_);
v___x_323_ = v_reuseFailAlloc_329_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_327_; 
v___x_324_ = lean_box(0);
v___x_325_ = l_Lean_EnvExtension_setState___redArg(v_toEnvExtension_306_, v_env_304_, v___x_323_, v___x_324_);
if (v_isShared_321_ == 0)
{
lean_ctor_set(v___x_320_, 0, v___x_325_);
v___x_327_ = v___x_320_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v___x_325_);
v___x_327_ = v_reuseFailAlloc_328_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
return v___x_327_;
}
}
}
}
else
{
lean_object* v_a_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_338_; 
lean_del_object(v___x_313_);
lean_dec_ref(v_importedEntries_311_);
lean_dec_ref(v_toEnvExtension_306_);
lean_dec_ref(v_env_304_);
v_a_331_ = lean_ctor_get(v___x_317_, 0);
v_isSharedCheck_338_ = !lean_is_exclusive(v___x_317_);
if (v_isSharedCheck_338_ == 0)
{
v___x_333_ = v___x_317_;
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_a_331_);
lean_dec(v___x_317_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v___x_336_; 
if (v_isShared_334_ == 0)
{
v___x_336_ = v___x_333_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v_a_331_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
return v___x_336_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_main___elam__0___redArg___boxed(lean_object* v___x_341_, lean_object* v_inst_342_, lean_object* v_ext_343_, lean_object* v_env_344_, lean_object* v___y_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l_main___elam__0___redArg(v___x_341_, v_inst_342_, v_ext_343_, v_env_344_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l_main___elam__0(lean_object* v___x_347_, lean_object* v_00_u03b1_348_, lean_object* v_00_u03b2_349_, lean_object* v_00_u03c3_350_, lean_object* v_inst_351_, lean_object* v_ext_352_, lean_object* v_env_353_){
_start:
{
lean_object* v___x_355_; 
v___x_355_ = l_main___elam__0___redArg(v___x_347_, v_inst_351_, v_ext_352_, v_env_353_);
return v___x_355_;
}
}
LEAN_EXPORT lean_object* l_main___elam__0___boxed(lean_object* v___x_356_, lean_object* v_00_u03b1_357_, lean_object* v_00_u03b2_358_, lean_object* v_00_u03c3_359_, lean_object* v_inst_360_, lean_object* v_ext_361_, lean_object* v_env_362_, lean_object* v___y_363_){
_start:
{
lean_object* v_res_364_; 
v_res_364_ = l_main___elam__0(v___x_356_, v_00_u03b1_357_, v_00_u03b2_358_, v_00_u03c3_359_, v_inst_360_, v_ext_361_, v_env_362_);
return v_res_364_;
}
}
static lean_object* _init_l_panic___at___00main_spec__5___closed__0(void){
_start:
{
lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_365_ = l_instInhabitedError;
v___x_366_ = lean_alloc_closure((void*)(l_instInhabitedEIO___aux__1___boxed), 4, 3);
lean_closure_set(v___x_366_, 0, lean_box(0));
lean_closure_set(v___x_366_, 1, lean_box(0));
lean_closure_set(v___x_366_, 2, v___x_365_);
return v___x_366_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00main_spec__5(lean_object* v_msg_367_){
_start:
{
lean_object* v___x_369_; lean_object* v___x_19559__overap_370_; lean_object* v___x_371_; 
v___x_369_ = lean_obj_once(&l_panic___at___00main_spec__5___closed__0, &l_panic___at___00main_spec__5___closed__0_once, _init_l_panic___at___00main_spec__5___closed__0);
v___x_19559__overap_370_ = lean_panic_fn_borrowed(v___x_369_, v_msg_367_);
v___x_371_ = lean_apply_1(v___x_19559__overap_370_, lean_box(0));
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00main_spec__5___boxed(lean_object* v_msg_372_, lean_object* v___y_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = l_panic___at___00main_spec__5(v_msg_372_);
return v_res_374_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00main_spec__8(lean_object* v_opts_375_, lean_object* v_opt_376_){
_start:
{
lean_object* v_name_377_; lean_object* v_defValue_378_; lean_object* v_map_379_; lean_object* v___x_380_; 
v_name_377_ = lean_ctor_get(v_opt_376_, 0);
v_defValue_378_ = lean_ctor_get(v_opt_376_, 1);
v_map_379_ = lean_ctor_get(v_opts_375_, 0);
v___x_380_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_379_, v_name_377_);
if (lean_obj_tag(v___x_380_) == 0)
{
uint8_t v___x_381_; 
v___x_381_ = lean_unbox(v_defValue_378_);
return v___x_381_;
}
else
{
lean_object* v_val_382_; 
v_val_382_ = lean_ctor_get(v___x_380_, 0);
lean_inc(v_val_382_);
lean_dec_ref_known(v___x_380_, 1);
if (lean_obj_tag(v_val_382_) == 1)
{
uint8_t v_v_383_; 
v_v_383_ = lean_ctor_get_uint8(v_val_382_, 0);
lean_dec_ref_known(v_val_382_, 0);
return v_v_383_;
}
else
{
uint8_t v___x_384_; 
lean_dec(v_val_382_);
v___x_384_ = lean_unbox(v_defValue_378_);
return v___x_384_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00main_spec__8___boxed(lean_object* v_opts_385_, lean_object* v_opt_386_){
_start:
{
uint8_t v_res_387_; lean_object* v_r_388_; 
v_res_387_ = l_Lean_Option_get___at___00main_spec__8(v_opts_385_, v_opt_386_);
lean_dec_ref(v_opt_386_);
lean_dec_ref(v_opts_385_);
v_r_388_ = lean_box(v_res_387_);
return v_r_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00main_spec__9(lean_object* v_opts_389_, lean_object* v_opt_390_){
_start:
{
lean_object* v_name_391_; lean_object* v_defValue_392_; lean_object* v_map_393_; lean_object* v___x_394_; 
v_name_391_ = lean_ctor_get(v_opt_390_, 0);
v_defValue_392_ = lean_ctor_get(v_opt_390_, 1);
v_map_393_ = lean_ctor_get(v_opts_389_, 0);
v___x_394_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_393_, v_name_391_);
if (lean_obj_tag(v___x_394_) == 0)
{
lean_inc(v_defValue_392_);
return v_defValue_392_;
}
else
{
lean_object* v_val_395_; 
v_val_395_ = lean_ctor_get(v___x_394_, 0);
lean_inc(v_val_395_);
lean_dec_ref_known(v___x_394_, 1);
if (lean_obj_tag(v_val_395_) == 3)
{
lean_object* v_v_396_; 
v_v_396_ = lean_ctor_get(v_val_395_, 0);
lean_inc(v_v_396_);
lean_dec_ref_known(v_val_395_, 1);
return v_v_396_;
}
else
{
lean_dec(v_val_395_);
lean_inc(v_defValue_392_);
return v_defValue_392_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00main_spec__9___boxed(lean_object* v_opts_397_, lean_object* v_opt_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l_Lean_Option_get___at___00main_spec__9(v_opts_397_, v_opt_398_);
lean_dec_ref(v_opt_398_);
lean_dec_ref(v_opts_397_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4_spec__5(lean_object* v_a_400_, lean_object* v_x_401_){
_start:
{
if (lean_obj_tag(v_x_401_) == 0)
{
lean_dec(v_a_400_);
return v_x_401_;
}
else
{
lean_object* v_key_402_; lean_object* v_value_403_; lean_object* v_tail_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_437_; 
v_key_402_ = lean_ctor_get(v_x_401_, 0);
v_value_403_ = lean_ctor_get(v_x_401_, 1);
v_tail_404_ = lean_ctor_get(v_x_401_, 2);
v_isSharedCheck_437_ = !lean_is_exclusive(v_x_401_);
if (v_isSharedCheck_437_ == 0)
{
v___x_406_ = v_x_401_;
v_isShared_407_ = v_isSharedCheck_437_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_tail_404_);
lean_inc(v_value_403_);
lean_inc(v_key_402_);
lean_dec(v_x_401_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_437_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
uint8_t v___x_408_; 
v___x_408_ = lean_name_eq(v_key_402_, v_a_400_);
if (v___x_408_ == 0)
{
lean_object* v___x_409_; lean_object* v___x_411_; 
v___x_409_ = l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4_spec__5(v_a_400_, v_tail_404_);
if (v_isShared_407_ == 0)
{
lean_ctor_set(v___x_406_, 2, v___x_409_);
v___x_411_ = v___x_406_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v_key_402_);
lean_ctor_set(v_reuseFailAlloc_412_, 1, v_value_403_);
lean_ctor_set(v_reuseFailAlloc_412_, 2, v___x_409_);
v___x_411_ = v_reuseFailAlloc_412_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
return v___x_411_;
}
}
else
{
lean_object* v_toEffectiveImport_413_; lean_object* v_parts_414_; lean_object* v_irParts_415_; uint8_t v_needsIRTrans_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_436_; 
lean_dec(v_key_402_);
v_toEffectiveImport_413_ = lean_ctor_get(v_value_403_, 0);
v_parts_414_ = lean_ctor_get(v_value_403_, 1);
v_irParts_415_ = lean_ctor_get(v_value_403_, 2);
v_needsIRTrans_416_ = lean_ctor_get_uint8(v_value_403_, sizeof(void*)*3);
v_isSharedCheck_436_ = !lean_is_exclusive(v_value_403_);
if (v_isSharedCheck_436_ == 0)
{
v___x_418_ = v_value_403_;
v_isShared_419_ = v_isSharedCheck_436_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_irParts_415_);
lean_inc(v_parts_414_);
lean_inc(v_toEffectiveImport_413_);
lean_dec(v_value_403_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_436_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v_toImport_420_; uint8_t v_hasData_421_; lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_435_; 
v_toImport_420_ = lean_ctor_get(v_toEffectiveImport_413_, 0);
v_hasData_421_ = lean_ctor_get_uint8(v_toEffectiveImport_413_, sizeof(void*)*1 + 1);
v_isSharedCheck_435_ = !lean_is_exclusive(v_toEffectiveImport_413_);
if (v_isSharedCheck_435_ == 0)
{
v___x_423_ = v_toEffectiveImport_413_;
v_isShared_424_ = v_isSharedCheck_435_;
goto v_resetjp_422_;
}
else
{
lean_inc(v_toImport_420_);
lean_dec(v_toEffectiveImport_413_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_435_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
uint8_t v___x_425_; lean_object* v___x_427_; 
v___x_425_ = 0;
if (v_isShared_424_ == 0)
{
v___x_427_ = v___x_423_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v_toImport_420_);
lean_ctor_set_uint8(v_reuseFailAlloc_434_, sizeof(void*)*1 + 1, v_hasData_421_);
v___x_427_ = v_reuseFailAlloc_434_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
lean_object* v___x_429_; 
lean_ctor_set_uint8(v___x_427_, sizeof(void*)*1, v___x_425_);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 0, v___x_427_);
v___x_429_ = v___x_418_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v___x_427_);
lean_ctor_set(v_reuseFailAlloc_433_, 1, v_parts_414_);
lean_ctor_set(v_reuseFailAlloc_433_, 2, v_irParts_415_);
lean_ctor_set_uint8(v_reuseFailAlloc_433_, sizeof(void*)*3, v_needsIRTrans_416_);
v___x_429_ = v_reuseFailAlloc_433_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
lean_object* v___x_431_; 
if (v_isShared_407_ == 0)
{
lean_ctor_set(v___x_406_, 1, v___x_429_);
lean_ctor_set(v___x_406_, 0, v_a_400_);
v___x_431_ = v___x_406_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v_a_400_);
lean_ctor_set(v_reuseFailAlloc_432_, 1, v___x_429_);
lean_ctor_set(v_reuseFailAlloc_432_, 2, v_tail_404_);
v___x_431_ = v_reuseFailAlloc_432_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
return v___x_431_;
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4(lean_object* v_m_438_, lean_object* v_a_439_){
_start:
{
lean_object* v_size_440_; lean_object* v_buckets_441_; lean_object* v___x_442_; uint64_t v___y_444_; 
v_size_440_ = lean_ctor_get(v_m_438_, 0);
v_buckets_441_ = lean_ctor_get(v_m_438_, 1);
v___x_442_ = lean_array_get_size(v_buckets_441_);
if (lean_obj_tag(v_a_439_) == 0)
{
uint64_t v___x_471_; 
v___x_471_ = 1723ULL;
v___y_444_ = v___x_471_;
goto v___jp_443_;
}
else
{
uint64_t v_hash_472_; 
v_hash_472_ = lean_ctor_get_uint64(v_a_439_, sizeof(void*)*2);
v___y_444_ = v_hash_472_;
goto v___jp_443_;
}
v___jp_443_:
{
uint64_t v___x_445_; uint64_t v___x_446_; uint64_t v_fold_447_; uint64_t v___x_448_; uint64_t v___x_449_; uint64_t v___x_450_; size_t v___x_451_; size_t v___x_452_; size_t v___x_453_; size_t v___x_454_; size_t v___x_455_; lean_object* v_bucket_456_; uint8_t v___x_457_; 
v___x_445_ = 32ULL;
v___x_446_ = lean_uint64_shift_right(v___y_444_, v___x_445_);
v_fold_447_ = lean_uint64_xor(v___y_444_, v___x_446_);
v___x_448_ = 16ULL;
v___x_449_ = lean_uint64_shift_right(v_fold_447_, v___x_448_);
v___x_450_ = lean_uint64_xor(v_fold_447_, v___x_449_);
v___x_451_ = lean_uint64_to_usize(v___x_450_);
v___x_452_ = lean_usize_of_nat(v___x_442_);
v___x_453_ = ((size_t)1ULL);
v___x_454_ = lean_usize_sub(v___x_452_, v___x_453_);
v___x_455_ = lean_usize_land(v___x_451_, v___x_454_);
v_bucket_456_ = lean_array_uget_borrowed(v_buckets_441_, v___x_455_);
v___x_457_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_initFn_00___x40_Lean_Compiler_CSimpAttr_309491121____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg(v_a_439_, v_bucket_456_);
if (v___x_457_ == 0)
{
lean_dec(v_a_439_);
return v_m_438_;
}
else
{
lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_468_; 
lean_inc(v_bucket_456_);
lean_inc_ref(v_buckets_441_);
lean_inc(v_size_440_);
v_isSharedCheck_468_ = !lean_is_exclusive(v_m_438_);
if (v_isSharedCheck_468_ == 0)
{
lean_object* v_unused_469_; lean_object* v_unused_470_; 
v_unused_469_ = lean_ctor_get(v_m_438_, 1);
lean_dec(v_unused_469_);
v_unused_470_ = lean_ctor_get(v_m_438_, 0);
lean_dec(v_unused_470_);
v___x_459_ = v_m_438_;
v_isShared_460_ = v_isSharedCheck_468_;
goto v_resetjp_458_;
}
else
{
lean_dec(v_m_438_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_468_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_461_; lean_object* v_buckets_462_; lean_object* v_bucket_463_; lean_object* v___x_464_; lean_object* v___x_466_; 
v___x_461_ = lean_box(0);
v_buckets_462_ = lean_array_uset(v_buckets_441_, v___x_455_, v___x_461_);
v_bucket_463_ = l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4_spec__5(v_a_439_, v_bucket_456_);
v___x_464_ = lean_array_uset(v_buckets_462_, v___x_455_, v_bucket_463_);
if (v_isShared_460_ == 0)
{
lean_ctor_set(v___x_459_, 1, v___x_464_);
v___x_466_ = v___x_459_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_size_440_);
lean_ctor_set(v_reuseFailAlloc_467_, 1, v___x_464_);
v___x_466_ = v_reuseFailAlloc_467_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
return v___x_466_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_main___lam__0(lean_object* v___x_473_, lean_object* v___x_474_, uint8_t v___x_475_, lean_object* v_importArts_476_, uint8_t v___y_477_, uint8_t v___x_478_, lean_object* v_name_479_, uint8_t v___x_480_, lean_object* v___x_481_, uint8_t v___x_482_){
_start:
{
lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_484_ = lean_st_mk_ref(v___x_473_);
v___x_485_ = l_Lean_importModulesCore(v___x_474_, v___x_475_, v_importArts_476_, v___y_477_, v___x_478_, v___x_484_);
if (lean_obj_tag(v___x_485_) == 0)
{
lean_object* v___x_486_; lean_object* v_moduleNameMap_487_; lean_object* v_moduleNames_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_500_; 
lean_dec_ref_known(v___x_485_, 1);
v___x_486_ = lean_st_ref_get(v___x_484_);
lean_dec(v___x_484_);
v_moduleNameMap_487_ = lean_ctor_get(v___x_486_, 0);
v_moduleNames_488_ = lean_ctor_get(v___x_486_, 1);
v_isSharedCheck_500_ = !lean_is_exclusive(v___x_486_);
if (v_isSharedCheck_500_ == 0)
{
v___x_490_ = v___x_486_;
v_isShared_491_ = v_isSharedCheck_500_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_moduleNames_488_);
lean_inc(v_moduleNameMap_487_);
lean_dec(v___x_486_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_500_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_492_; lean_object* v___x_494_; 
v___x_492_ = l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4(v_moduleNameMap_487_, v_name_479_);
if (v_isShared_491_ == 0)
{
lean_ctor_set(v___x_490_, 0, v___x_492_);
v___x_494_ = v___x_490_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v___x_492_);
lean_ctor_set(v_reuseFailAlloc_499_, 1, v_moduleNames_488_);
v___x_494_ = v_reuseFailAlloc_499_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
uint32_t v___x_495_; uint8_t v___x_496_; 
v___x_495_ = 0;
v___x_496_ = l_Lean_instDecidableEqOLeanLevel(v___x_475_, v___x_480_);
if (v___x_496_ == 0)
{
lean_object* v___x_497_; 
v___x_497_ = l_Lean_finalizeImport(v___x_494_, v___x_474_, v___x_481_, v___x_495_, v___x_478_, v___x_482_, v___x_475_, v___x_478_, v___x_478_);
return v___x_497_;
}
else
{
lean_object* v___x_498_; 
v___x_498_ = l_Lean_finalizeImport(v___x_494_, v___x_474_, v___x_481_, v___x_495_, v___x_478_, v___x_482_, v___x_475_, v___x_482_, v___x_478_);
return v___x_498_;
}
}
}
}
else
{
lean_object* v_a_501_; lean_object* v___x_503_; uint8_t v_isShared_504_; uint8_t v_isSharedCheck_508_; 
lean_dec(v___x_484_);
lean_dec_ref(v___x_481_);
lean_dec(v_name_479_);
lean_dec_ref(v___x_474_);
v_a_501_ = lean_ctor_get(v___x_485_, 0);
v_isSharedCheck_508_ = !lean_is_exclusive(v___x_485_);
if (v_isSharedCheck_508_ == 0)
{
v___x_503_ = v___x_485_;
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
else
{
lean_inc(v_a_501_);
lean_dec(v___x_485_);
v___x_503_ = lean_box(0);
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
v_resetjp_502_:
{
lean_object* v___x_506_; 
if (v_isShared_504_ == 0)
{
v___x_506_ = v___x_503_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v_a_501_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_main___lam__0___boxed(lean_object* v___x_509_, lean_object* v___x_510_, lean_object* v___x_511_, lean_object* v_importArts_512_, lean_object* v___y_513_, lean_object* v___x_514_, lean_object* v_name_515_, lean_object* v___x_516_, lean_object* v___x_517_, lean_object* v___x_518_, lean_object* v___y_519_){
_start:
{
uint8_t v___x_35668__boxed_520_; uint8_t v___y_35669__boxed_521_; uint8_t v___x_35670__boxed_522_; uint8_t v___x_35671__boxed_523_; uint8_t v___x_35673__boxed_524_; lean_object* v_res_525_; 
v___x_35668__boxed_520_ = lean_unbox(v___x_511_);
v___y_35669__boxed_521_ = lean_unbox(v___y_513_);
v___x_35670__boxed_522_ = lean_unbox(v___x_514_);
v___x_35671__boxed_523_ = lean_unbox(v___x_516_);
v___x_35673__boxed_524_ = lean_unbox(v___x_518_);
v_res_525_ = l_main___lam__0(v___x_509_, v___x_510_, v___x_35668__boxed_520_, v_importArts_512_, v___y_35669__boxed_521_, v___x_35670__boxed_522_, v_name_515_, v___x_35671__boxed_523_, v___x_517_, v___x_35673__boxed_524_);
return v_res_525_;
}
}
LEAN_EXPORT lean_object* l_main___lam__1(lean_object* v___x_529_, lean_object* v___x_530_, lean_object* v___x_531_, lean_object* v_name_532_, lean_object* v_a_533_, uint8_t v___x_534_, lean_object* v___x_535_, lean_object* v_head_536_, lean_object* v___x_537_, lean_object* v___x_538_, lean_object* v___x_539_, lean_object* v___x_540_, lean_object* v___x_541_, lean_object* v___x_542_, lean_object* v___x_543_, lean_object* v___x_544_, uint8_t v___x_545_, uint8_t v___x_546_){
_start:
{
lean_object* v_a_549_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v_env_556_; lean_object* v___x_557_; uint8_t v___x_558_; lean_object* v_fileName_560_; lean_object* v_fileMap_561_; lean_object* v_currRecDepth_562_; lean_object* v_ref_563_; lean_object* v_currNamespace_564_; lean_object* v_openDecls_565_; lean_object* v_initHeartbeats_566_; lean_object* v_maxHeartbeats_567_; lean_object* v_quotContext_568_; lean_object* v_currMacroScope_569_; lean_object* v_cancelTk_x3f_570_; uint8_t v_suppressElabErrors_571_; lean_object* v_inheritedTraceOptions_572_; lean_object* v___y_573_; uint8_t v___y_605_; uint8_t v___x_625_; 
v___x_552_ = lean_io_get_num_heartbeats();
v___x_553_ = lean_st_mk_ref(v___x_529_);
v___x_554_ = lean_st_ref_get(v___x_530_);
v___x_555_ = lean_st_ref_get(v___x_553_);
v_env_556_ = lean_ctor_get(v___x_555_, 0);
lean_inc_ref(v_env_556_);
lean_dec(v___x_555_);
v___x_557_ = l_Lean_diagnostics;
v___x_558_ = l_Lean_Option_get___at___00main_spec__8(v___x_531_, v___x_557_);
v___x_625_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_556_);
lean_dec_ref(v_env_556_);
if (v___x_625_ == 0)
{
if (v___x_558_ == 0)
{
v___y_605_ = v___x_546_;
goto v___jp_604_;
}
else
{
v___y_605_ = v___x_625_;
goto v___jp_604_;
}
}
else
{
v___y_605_ = v___x_558_;
goto v___jp_604_;
}
v___jp_548_:
{
lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_550_ = lean_mk_io_user_error(v_a_549_);
v___x_551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_551_, 0, v___x_550_);
return v___x_551_;
}
v___jp_559_:
{
lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_574_ = l_Lean_maxRecDepth;
v___x_575_ = l_Lean_Option_get___at___00main_spec__9(v___x_531_, v___x_574_);
v___x_576_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_576_, 0, v_fileName_560_);
lean_ctor_set(v___x_576_, 1, v_fileMap_561_);
lean_ctor_set(v___x_576_, 2, v___x_531_);
lean_ctor_set(v___x_576_, 3, v_currRecDepth_562_);
lean_ctor_set(v___x_576_, 4, v___x_575_);
lean_ctor_set(v___x_576_, 5, v_ref_563_);
lean_ctor_set(v___x_576_, 6, v_currNamespace_564_);
lean_ctor_set(v___x_576_, 7, v_openDecls_565_);
lean_ctor_set(v___x_576_, 8, v_initHeartbeats_566_);
lean_ctor_set(v___x_576_, 9, v_maxHeartbeats_567_);
lean_ctor_set(v___x_576_, 10, v_quotContext_568_);
lean_ctor_set(v___x_576_, 11, v_currMacroScope_569_);
lean_ctor_set(v___x_576_, 12, v_cancelTk_x3f_570_);
lean_ctor_set(v___x_576_, 13, v_inheritedTraceOptions_572_);
lean_ctor_set_uint8(v___x_576_, sizeof(void*)*14, v___x_558_);
lean_ctor_set_uint8(v___x_576_, sizeof(void*)*14 + 1, v_suppressElabErrors_571_);
v___x_577_ = l_Lean_Compiler_LCNF_emitC(v_name_532_, v___x_576_, v___y_573_);
lean_dec(v___y_573_);
lean_dec_ref_known(v___x_576_, 14);
if (lean_obj_tag(v___x_577_) == 0)
{
lean_object* v_a_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
v_a_578_ = lean_ctor_get(v___x_577_, 0);
lean_inc(v_a_578_);
lean_dec_ref_known(v___x_577_, 1);
v___x_579_ = lean_st_ref_get(v___x_553_);
lean_dec(v___x_553_);
lean_dec(v___x_579_);
v___x_580_ = lean_string_to_utf8(v_a_578_);
lean_dec(v_a_578_);
v___x_581_ = lean_io_prim_handle_write(v_a_533_, v___x_580_);
lean_dec_ref(v___x_580_);
return v___x_581_;
}
else
{
lean_object* v_a_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_603_; 
lean_dec(v___x_553_);
v_a_582_ = lean_ctor_get(v___x_577_, 0);
v_isSharedCheck_603_ = !lean_is_exclusive(v___x_577_);
if (v_isSharedCheck_603_ == 0)
{
v___x_584_ = v___x_577_;
v_isShared_585_ = v_isSharedCheck_603_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_a_582_);
lean_dec(v___x_577_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_603_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
if (lean_obj_tag(v_a_582_) == 0)
{
lean_object* v_msg_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_590_; 
v_msg_586_ = lean_ctor_get(v_a_582_, 1);
lean_inc_ref(v_msg_586_);
lean_dec_ref_known(v_a_582_, 2);
v___x_587_ = l_Lean_MessageData_toString(v_msg_586_);
v___x_588_ = lean_mk_io_user_error(v___x_587_);
if (v_isShared_585_ == 0)
{
lean_ctor_set(v___x_584_, 0, v___x_588_);
v___x_590_ = v___x_584_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v___x_588_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
else
{
lean_object* v_id_592_; lean_object* v___x_593_; 
lean_del_object(v___x_584_);
v_id_592_ = lean_ctor_get(v_a_582_, 0);
lean_inc(v_id_592_);
lean_dec_ref_known(v_a_582_, 2);
v___x_593_ = l_Lean_InternalExceptionId_getName(v_id_592_);
if (lean_obj_tag(v___x_593_) == 0)
{
lean_object* v_a_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
lean_dec(v_id_592_);
v_a_594_ = lean_ctor_get(v___x_593_, 0);
lean_inc(v_a_594_);
lean_dec_ref_known(v___x_593_, 1);
v___x_595_ = ((lean_object*)(l_main___lam__1___closed__0));
v___x_596_ = l_Lean_Name_toString(v_a_594_, v___x_534_);
v___x_597_ = lean_string_append(v___x_595_, v___x_596_);
lean_dec_ref(v___x_596_);
v_a_549_ = v___x_597_;
goto v___jp_548_;
}
else
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; 
lean_dec_ref_known(v___x_593_, 1);
v___x_598_ = ((lean_object*)(l_main___lam__1___closed__1));
v___x_599_ = l_Nat_reprFast(v_id_592_);
v___x_600_ = lean_string_append(v___x_598_, v___x_599_);
lean_dec_ref(v___x_599_);
v___x_601_ = ((lean_object*)(l_main___lam__1___closed__2));
v___x_602_ = lean_string_append(v___x_600_, v___x_601_);
v_a_549_ = v___x_602_;
goto v___jp_548_;
}
}
}
}
}
v___jp_604_:
{
if (v___y_605_ == 0)
{
lean_object* v___x_606_; lean_object* v_env_607_; lean_object* v_nextMacroScope_608_; lean_object* v_ngen_609_; lean_object* v_auxDeclNGen_610_; lean_object* v_traceState_611_; lean_object* v_messages_612_; lean_object* v_infoState_613_; lean_object* v_snapshotTasks_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_623_; 
v___x_606_ = lean_st_ref_take(v___x_553_);
v_env_607_ = lean_ctor_get(v___x_606_, 0);
v_nextMacroScope_608_ = lean_ctor_get(v___x_606_, 1);
v_ngen_609_ = lean_ctor_get(v___x_606_, 2);
v_auxDeclNGen_610_ = lean_ctor_get(v___x_606_, 3);
v_traceState_611_ = lean_ctor_get(v___x_606_, 4);
v_messages_612_ = lean_ctor_get(v___x_606_, 6);
v_infoState_613_ = lean_ctor_get(v___x_606_, 7);
v_snapshotTasks_614_ = lean_ctor_get(v___x_606_, 8);
v_isSharedCheck_623_ = !lean_is_exclusive(v___x_606_);
if (v_isSharedCheck_623_ == 0)
{
lean_object* v_unused_624_; 
v_unused_624_ = lean_ctor_get(v___x_606_, 5);
lean_dec(v_unused_624_);
v___x_616_ = v___x_606_;
v_isShared_617_ = v_isSharedCheck_623_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_snapshotTasks_614_);
lean_inc(v_infoState_613_);
lean_inc(v_messages_612_);
lean_inc(v_traceState_611_);
lean_inc(v_auxDeclNGen_610_);
lean_inc(v_ngen_609_);
lean_inc(v_nextMacroScope_608_);
lean_inc(v_env_607_);
lean_dec(v___x_606_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_623_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_618_; lean_object* v___x_620_; 
v___x_618_ = l_Lean_Kernel_enableDiag(v_env_607_, v___x_558_);
if (v_isShared_617_ == 0)
{
lean_ctor_set(v___x_616_, 5, v___x_535_);
lean_ctor_set(v___x_616_, 0, v___x_618_);
v___x_620_ = v___x_616_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v___x_618_);
lean_ctor_set(v_reuseFailAlloc_622_, 1, v_nextMacroScope_608_);
lean_ctor_set(v_reuseFailAlloc_622_, 2, v_ngen_609_);
lean_ctor_set(v_reuseFailAlloc_622_, 3, v_auxDeclNGen_610_);
lean_ctor_set(v_reuseFailAlloc_622_, 4, v_traceState_611_);
lean_ctor_set(v_reuseFailAlloc_622_, 5, v___x_535_);
lean_ctor_set(v_reuseFailAlloc_622_, 6, v_messages_612_);
lean_ctor_set(v_reuseFailAlloc_622_, 7, v_infoState_613_);
lean_ctor_set(v_reuseFailAlloc_622_, 8, v_snapshotTasks_614_);
v___x_620_ = v_reuseFailAlloc_622_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
lean_object* v___x_621_; 
v___x_621_ = lean_st_ref_set(v___x_553_, v___x_620_);
lean_inc(v___x_553_);
lean_inc(v___x_540_);
v_fileName_560_ = v_head_536_;
v_fileMap_561_ = v___x_537_;
v_currRecDepth_562_ = v___x_538_;
v_ref_563_ = v___x_539_;
v_currNamespace_564_ = v___x_540_;
v_openDecls_565_ = v___x_541_;
v_initHeartbeats_566_ = v___x_552_;
v_maxHeartbeats_567_ = v___x_542_;
v_quotContext_568_ = v___x_540_;
v_currMacroScope_569_ = v___x_543_;
v_cancelTk_x3f_570_ = v___x_544_;
v_suppressElabErrors_571_ = v___x_545_;
v_inheritedTraceOptions_572_ = v___x_554_;
v___y_573_ = v___x_553_;
goto v___jp_559_;
}
}
}
else
{
lean_dec_ref(v___x_535_);
lean_inc(v___x_553_);
lean_inc(v___x_540_);
v_fileName_560_ = v_head_536_;
v_fileMap_561_ = v___x_537_;
v_currRecDepth_562_ = v___x_538_;
v_ref_563_ = v___x_539_;
v_currNamespace_564_ = v___x_540_;
v_openDecls_565_ = v___x_541_;
v_initHeartbeats_566_ = v___x_552_;
v_maxHeartbeats_567_ = v___x_542_;
v_quotContext_568_ = v___x_540_;
v_currMacroScope_569_ = v___x_543_;
v_cancelTk_x3f_570_ = v___x_544_;
v_suppressElabErrors_571_ = v___x_545_;
v_inheritedTraceOptions_572_ = v___x_554_;
v___y_573_ = v___x_553_;
goto v___jp_559_;
}
}
}
}
LEAN_EXPORT lean_object* l_main___lam__1___boxed(lean_object** _args){
lean_object* v___x_626_ = _args[0];
lean_object* v___x_627_ = _args[1];
lean_object* v___x_628_ = _args[2];
lean_object* v_name_629_ = _args[3];
lean_object* v_a_630_ = _args[4];
lean_object* v___x_631_ = _args[5];
lean_object* v___x_632_ = _args[6];
lean_object* v_head_633_ = _args[7];
lean_object* v___x_634_ = _args[8];
lean_object* v___x_635_ = _args[9];
lean_object* v___x_636_ = _args[10];
lean_object* v___x_637_ = _args[11];
lean_object* v___x_638_ = _args[12];
lean_object* v___x_639_ = _args[13];
lean_object* v___x_640_ = _args[14];
lean_object* v___x_641_ = _args[15];
lean_object* v___x_642_ = _args[16];
lean_object* v___x_643_ = _args[17];
lean_object* v___y_644_ = _args[18];
_start:
{
uint8_t v___x_35750__boxed_645_; uint8_t v___x_35761__boxed_646_; uint8_t v___x_35762__boxed_647_; lean_object* v_res_648_; 
v___x_35750__boxed_645_ = lean_unbox(v___x_631_);
v___x_35761__boxed_646_ = lean_unbox(v___x_642_);
v___x_35762__boxed_647_ = lean_unbox(v___x_643_);
v_res_648_ = l_main___lam__1(v___x_626_, v___x_627_, v___x_628_, v_name_629_, v_a_630_, v___x_35750__boxed_645_, v___x_632_, v_head_633_, v___x_634_, v___x_635_, v___x_636_, v___x_637_, v___x_638_, v___x_639_, v___x_640_, v___x_641_, v___x_35761__boxed_646_, v___x_35762__boxed_647_);
lean_dec(v_a_630_);
lean_dec(v___x_627_);
return v_res_648_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8(lean_object* v_s_649_){
_start:
{
lean_object* v___x_651_; lean_object* v_putStr_652_; lean_object* v___x_653_; 
v___x_651_ = lean_get_stderr();
v_putStr_652_ = lean_ctor_get(v___x_651_, 4);
lean_inc_ref(v_putStr_652_);
lean_dec_ref(v___x_651_);
v___x_653_ = lean_apply_2(v_putStr_652_, v_s_649_, lean_box(0));
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8___boxed(lean_object* v_s_654_, lean_object* v_a_655_){
_start:
{
lean_object* v_res_656_; 
v_res_656_ = l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8(v_s_654_);
return v_res_656_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00main_spec__6(lean_object* v_s_657_){
_start:
{
uint32_t v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_659_ = 10;
v___x_660_ = lean_string_push(v_s_657_, v___x_659_);
v___x_661_ = l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8(v___x_660_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00main_spec__6___boxed(lean_object* v_s_662_, lean_object* v_a_663_){
_start:
{
lean_object* v_res_664_; 
v_res_664_ = l_IO_eprintln___at___00main_spec__6(v_s_662_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3(lean_object* v_o_668_, lean_object* v_k_669_, lean_object* v_v_670_){
_start:
{
lean_object* v_map_671_; uint8_t v_hasTrace_672_; lean_object* v___x_674_; uint8_t v_isShared_675_; uint8_t v_isSharedCheck_686_; 
v_map_671_ = lean_ctor_get(v_o_668_, 0);
v_hasTrace_672_ = lean_ctor_get_uint8(v_o_668_, sizeof(void*)*1);
v_isSharedCheck_686_ = !lean_is_exclusive(v_o_668_);
if (v_isSharedCheck_686_ == 0)
{
v___x_674_ = v_o_668_;
v_isShared_675_ = v_isSharedCheck_686_;
goto v_resetjp_673_;
}
else
{
lean_inc(v_map_671_);
lean_dec(v_o_668_);
v___x_674_ = lean_box(0);
v_isShared_675_ = v_isSharedCheck_686_;
goto v_resetjp_673_;
}
v_resetjp_673_:
{
lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_676_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_676_, 0, v_v_670_);
lean_inc(v_k_669_);
v___x_677_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_669_, v___x_676_, v_map_671_);
if (v_hasTrace_672_ == 0)
{
lean_object* v___x_678_; uint8_t v___x_679_; lean_object* v___x_681_; 
v___x_678_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__1));
v___x_679_ = l_Lean_Name_isPrefixOf(v___x_678_, v_k_669_);
lean_dec(v_k_669_);
if (v_isShared_675_ == 0)
{
lean_ctor_set(v___x_674_, 0, v___x_677_);
v___x_681_ = v___x_674_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v___x_677_);
v___x_681_ = v_reuseFailAlloc_682_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
lean_ctor_set_uint8(v___x_681_, sizeof(void*)*1, v___x_679_);
return v___x_681_;
}
}
else
{
lean_object* v___x_684_; 
lean_dec(v_k_669_);
if (v_isShared_675_ == 0)
{
lean_ctor_set(v___x_674_, 0, v___x_677_);
v___x_684_ = v___x_674_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v___x_677_);
lean_ctor_set_uint8(v_reuseFailAlloc_685_, sizeof(void*)*1, v_hasTrace_672_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
return v___x_684_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00main_spec__3(lean_object* v_opts_687_, lean_object* v_opt_688_, lean_object* v_val_689_){
_start:
{
lean_object* v_name_690_; lean_object* v___x_691_; 
v_name_690_ = lean_ctor_get(v_opt_688_, 0);
lean_inc(v_name_690_);
lean_dec_ref(v_opt_688_);
v___x_691_ = l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3(v_opts_687_, v_name_690_, v_val_689_);
return v___x_691_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16(lean_object* v___y_693_, lean_object* v_as_694_, size_t v_i_695_, size_t v_stop_696_, lean_object* v_b_697_){
_start:
{
lean_object* v___y_699_; uint8_t v___x_703_; 
v___x_703_ = lean_usize_dec_eq(v_i_695_, v_stop_696_);
if (v___x_703_ == 0)
{
lean_object* v_fst_704_; lean_object* v_snd_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___y_709_; 
v_fst_704_ = lean_ctor_get(v_b_697_, 0);
v_snd_705_ = lean_ctor_get(v_b_697_, 1);
v___x_706_ = lean_array_uget_borrowed(v_as_694_, v_i_695_);
v___x_707_ = l_Lean_IR_Decl_name(v___x_706_);
if (lean_obj_tag(v___x_707_) == 1)
{
lean_object* v_pre_722_; lean_object* v_str_723_; lean_object* v___x_724_; uint8_t v___x_725_; 
v_pre_722_ = lean_ctor_get(v___x_707_, 0);
lean_inc(v_pre_722_);
v_str_723_ = lean_ctor_get(v___x_707_, 1);
lean_inc_ref(v_str_723_);
v___x_724_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16___closed__0));
v___x_725_ = lean_string_dec_eq(v_str_723_, v___x_724_);
lean_dec_ref(v_str_723_);
if (v___x_725_ == 0)
{
lean_dec(v_pre_722_);
lean_inc_ref(v___x_707_);
v___y_709_ = v___x_707_;
goto v___jp_708_;
}
else
{
v___y_709_ = v_pre_722_;
goto v___jp_708_;
}
}
else
{
lean_inc(v___x_707_);
v___y_709_ = v___x_707_;
goto v___jp_708_;
}
v___jp_708_:
{
uint8_t v___x_710_; 
lean_inc_ref(v___y_693_);
v___x_710_ = l_Lean_isExtern(v___y_693_, v___y_709_);
if (v___x_710_ == 0)
{
lean_dec(v___x_707_);
v___y_699_ = v_b_697_;
goto v___jp_698_;
}
else
{
lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_719_; 
lean_inc(v_snd_705_);
lean_inc(v_fst_704_);
v_isSharedCheck_719_ = !lean_is_exclusive(v_b_697_);
if (v_isSharedCheck_719_ == 0)
{
lean_object* v_unused_720_; lean_object* v_unused_721_; 
v_unused_720_ = lean_ctor_get(v_b_697_, 1);
lean_dec(v_unused_720_);
v_unused_721_ = lean_ctor_get(v_b_697_, 0);
lean_dec(v_unused_721_);
v___x_712_ = v_b_697_;
v_isShared_713_ = v_isSharedCheck_719_;
goto v_resetjp_711_;
}
else
{
lean_dec(v_b_697_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_719_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_717_; 
lean_inc_n(v___x_706_, 2);
v___x_714_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_714_, 0, v___x_706_);
lean_ctor_set(v___x_714_, 1, v_fst_704_);
v___x_715_ = l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_initFn_00___x40_Lean_Compiler_CSimpAttr_309491121____hygCtx___hyg_2__spec__0_spec__0___redArg(v_snd_705_, v___x_707_, v___x_706_);
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 1, v___x_715_);
lean_ctor_set(v___x_712_, 0, v___x_714_);
v___x_717_ = v___x_712_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v___x_714_);
lean_ctor_set(v_reuseFailAlloc_718_, 1, v___x_715_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
v___y_699_ = v___x_717_;
goto v___jp_698_;
}
}
}
}
}
else
{
lean_dec_ref(v___y_693_);
return v_b_697_;
}
v___jp_698_:
{
size_t v___x_700_; size_t v___x_701_; 
v___x_700_ = ((size_t)1ULL);
v___x_701_ = lean_usize_add(v_i_695_, v___x_700_);
v_i_695_ = v___x_701_;
v_b_697_ = v___y_699_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16___boxed(lean_object* v___y_726_, lean_object* v_as_727_, lean_object* v_i_728_, lean_object* v_stop_729_, lean_object* v_b_730_){
_start:
{
size_t v_i_boxed_731_; size_t v_stop_boxed_732_; lean_object* v_res_733_; 
v_i_boxed_731_ = lean_unbox_usize(v_i_728_);
lean_dec(v_i_728_);
v_stop_boxed_732_ = lean_unbox_usize(v_stop_729_);
lean_dec(v_stop_729_);
v_res_733_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16(v___y_726_, v_as_727_, v_i_boxed_731_, v_stop_boxed_732_, v_b_730_);
lean_dec_ref(v_as_727_);
return v_res_733_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg(lean_object* v_as_x27_735_, lean_object* v_b_736_){
_start:
{
if (lean_obj_tag(v_as_x27_735_) == 0)
{
lean_object* v___x_738_; 
v___x_738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_738_, 0, v_b_736_);
return v___x_738_;
}
else
{
lean_object* v_head_739_; lean_object* v_tail_740_; lean_object* v_fst_741_; lean_object* v_snd_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_767_; 
v_head_739_ = lean_ctor_get(v_as_x27_735_, 0);
v_tail_740_ = lean_ctor_get(v_as_x27_735_, 1);
v_fst_741_ = lean_ctor_get(v_b_736_, 0);
v_snd_742_ = lean_ctor_get(v_b_736_, 1);
v_isSharedCheck_767_ = !lean_is_exclusive(v_b_736_);
if (v_isSharedCheck_767_ == 0)
{
v___x_744_ = v_b_736_;
v_isShared_745_ = v_isSharedCheck_767_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_snd_742_);
lean_inc(v_fst_741_);
lean_dec(v_b_736_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_767_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_746_; uint8_t v___x_747_; 
v___x_746_ = ((lean_object*)(l_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0));
v___x_747_ = lean_string_dec_eq(v_head_739_, v___x_746_);
if (v___x_747_ == 0)
{
lean_object* v___x_748_; 
lean_inc(v_head_739_);
v___x_748_ = l___private_LeanIR_0__setConfigOption(v_snd_742_, v_head_739_);
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v_a_749_; lean_object* v___x_751_; 
v_a_749_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v_a_749_);
lean_dec_ref_known(v___x_748_, 1);
if (v_isShared_745_ == 0)
{
lean_ctor_set(v___x_744_, 1, v_a_749_);
v___x_751_ = v___x_744_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_fst_741_);
lean_ctor_set(v_reuseFailAlloc_753_, 1, v_a_749_);
v___x_751_ = v_reuseFailAlloc_753_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
v_as_x27_735_ = v_tail_740_;
v_b_736_ = v___x_751_;
goto _start;
}
}
else
{
lean_object* v_a_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_761_; 
lean_del_object(v___x_744_);
lean_dec(v_fst_741_);
v_a_754_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_761_ == 0)
{
v___x_756_ = v___x_748_;
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_a_754_);
lean_dec(v___x_748_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_759_; 
if (v_isShared_757_ == 0)
{
v___x_759_ = v___x_756_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v_a_754_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
}
}
else
{
lean_object* v___x_762_; lean_object* v___x_764_; 
lean_dec(v_fst_741_);
v___x_762_ = lean_box(v___x_747_);
if (v_isShared_745_ == 0)
{
lean_ctor_set(v___x_744_, 0, v___x_762_);
v___x_764_ = v___x_744_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v___x_762_);
lean_ctor_set(v_reuseFailAlloc_766_, 1, v_snd_742_);
v___x_764_ = v_reuseFailAlloc_766_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
v_as_x27_735_ = v_tail_740_;
v_b_736_ = v___x_764_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg___boxed(lean_object* v_as_x27_768_, lean_object* v_b_769_, lean_object* v___y_770_){
_start:
{
lean_object* v_res_771_; 
v_res_771_ = l_List_forIn_x27_loop___at___00main_spec__1___redArg(v_as_x27_768_, v_b_769_);
lean_dec(v_as_x27_768_);
return v_res_771_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18(lean_object* v_as_772_, size_t v_i_773_, size_t v_stop_774_, lean_object* v_b_775_){
_start:
{
uint8_t v___x_776_; 
v___x_776_ = lean_usize_dec_eq(v_i_773_, v_stop_774_);
if (v___x_776_ == 0)
{
lean_object* v___x_777_; lean_object* v_toEnvExtension_778_; lean_object* v_asyncMode_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; size_t v___x_783_; size_t v___x_784_; 
v___x_777_ = l_Lean_Compiler_LCNF_impureSigExt;
v_toEnvExtension_778_ = lean_ctor_get(v___x_777_, 0);
v_asyncMode_779_ = lean_ctor_get(v_toEnvExtension_778_, 2);
v___x_780_ = lean_box(0);
v___x_781_ = lean_array_uget_borrowed(v_as_772_, v_i_773_);
lean_inc(v___x_781_);
v___x_782_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_777_, v_b_775_, v___x_781_, v_asyncMode_779_, v___x_780_);
v___x_783_ = ((size_t)1ULL);
v___x_784_ = lean_usize_add(v_i_773_, v___x_783_);
v_i_773_ = v___x_784_;
v_b_775_ = v___x_782_;
goto _start;
}
else
{
return v_b_775_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18___boxed(lean_object* v_as_786_, lean_object* v_i_787_, lean_object* v_stop_788_, lean_object* v_b_789_){
_start:
{
size_t v_i_boxed_790_; size_t v_stop_boxed_791_; lean_object* v_res_792_; 
v_i_boxed_790_ = lean_unbox_usize(v_i_787_);
lean_dec(v_i_787_);
v_stop_boxed_791_ = lean_unbox_usize(v_stop_788_);
lean_dec(v_stop_788_);
v_res_792_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18(v_as_786_, v_i_boxed_790_, v_stop_boxed_791_, v_b_789_);
lean_dec_ref(v_as_786_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg(lean_object* v_as_796_, size_t v_sz_797_, size_t v_i_798_, lean_object* v_b_799_, lean_object* v___y_800_){
_start:
{
uint8_t v___x_802_; 
v___x_802_ = lean_usize_dec_lt(v_i_798_, v_sz_797_);
if (v___x_802_ == 0)
{
lean_object* v___x_803_; 
v___x_803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_803_, 0, v_b_799_);
return v___x_803_;
}
else
{
uint8_t v___x_804_; lean_object* v_a_805_; lean_object* v___x_806_; lean_object* v___x_807_; 
lean_dec_ref(v_b_799_);
v___x_804_ = 0;
v_a_805_ = lean_array_uget_borrowed(v_as_796_, v_i_798_);
lean_inc(v_a_805_);
v___x_806_ = l_Lean_Message_toString(v_a_805_, v___x_804_);
v___x_807_ = l_IO_eprintln___at___00main_spec__6(v___x_806_);
if (lean_obj_tag(v___x_807_) == 0)
{
lean_object* v___x_808_; size_t v___x_809_; size_t v___x_810_; 
lean_dec_ref_known(v___x_807_, 1);
v___x_808_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg___closed__0));
v___x_809_ = ((size_t)1ULL);
v___x_810_ = lean_usize_add(v_i_798_, v___x_809_);
v_i_798_ = v___x_810_;
v_b_799_ = v___x_808_;
goto _start;
}
else
{
lean_object* v_a_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_824_; 
v_a_812_ = lean_ctor_get(v___x_807_, 0);
v_isSharedCheck_824_ = !lean_is_exclusive(v___x_807_);
if (v_isSharedCheck_824_ == 0)
{
v___x_814_ = v___x_807_;
v_isShared_815_ = v_isSharedCheck_824_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_a_812_);
lean_dec(v___x_807_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_824_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v_ref_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_822_; 
v_ref_816_ = lean_ctor_get(v___y_800_, 5);
v___x_817_ = lean_io_error_to_string(v_a_812_);
v___x_818_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_818_, 0, v___x_817_);
v___x_819_ = l_Lean_MessageData_ofFormat(v___x_818_);
lean_inc(v_ref_816_);
v___x_820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_820_, 0, v_ref_816_);
lean_ctor_set(v___x_820_, 1, v___x_819_);
if (v_isShared_815_ == 0)
{
lean_ctor_set(v___x_814_, 0, v___x_820_);
v___x_822_ = v___x_814_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v___x_820_);
v___x_822_ = v_reuseFailAlloc_823_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
return v___x_822_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg___boxed(lean_object* v_as_825_, lean_object* v_sz_826_, lean_object* v_i_827_, lean_object* v_b_828_, lean_object* v___y_829_, lean_object* v___y_830_){
_start:
{
size_t v_sz_boxed_831_; size_t v_i_boxed_832_; lean_object* v_res_833_; 
v_sz_boxed_831_ = lean_unbox_usize(v_sz_826_);
lean_dec(v_sz_826_);
v_i_boxed_832_ = lean_unbox_usize(v_i_827_);
lean_dec(v_i_827_);
v_res_833_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg(v_as_825_, v_sz_boxed_831_, v_i_boxed_832_, v_b_828_, v___y_829_);
lean_dec_ref(v___y_829_);
lean_dec_ref(v_as_825_);
return v_res_833_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27(lean_object* v_as_834_, size_t v_sz_835_, size_t v_i_836_, lean_object* v_b_837_, lean_object* v___y_838_, lean_object* v___y_839_){
_start:
{
uint8_t v___x_841_; 
v___x_841_ = lean_usize_dec_lt(v_i_836_, v_sz_835_);
if (v___x_841_ == 0)
{
lean_object* v___x_842_; 
v___x_842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_842_, 0, v_b_837_);
return v___x_842_;
}
else
{
uint8_t v___x_843_; lean_object* v_a_844_; lean_object* v___x_845_; lean_object* v___x_846_; 
lean_dec_ref(v_b_837_);
v___x_843_ = 0;
v_a_844_ = lean_array_uget_borrowed(v_as_834_, v_i_836_);
lean_inc(v_a_844_);
v___x_845_ = l_Lean_Message_toString(v_a_844_, v___x_843_);
v___x_846_ = l_IO_eprintln___at___00main_spec__6(v___x_845_);
if (lean_obj_tag(v___x_846_) == 0)
{
lean_object* v___x_847_; size_t v___x_848_; size_t v___x_849_; lean_object* v___x_850_; 
lean_dec_ref_known(v___x_846_, 1);
v___x_847_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg___closed__0));
v___x_848_ = ((size_t)1ULL);
v___x_849_ = lean_usize_add(v_i_836_, v___x_848_);
v___x_850_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg(v_as_834_, v_sz_835_, v___x_849_, v___x_847_, v___y_838_);
return v___x_850_;
}
else
{
lean_object* v_a_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_863_; 
v_a_851_ = lean_ctor_get(v___x_846_, 0);
v_isSharedCheck_863_ = !lean_is_exclusive(v___x_846_);
if (v_isSharedCheck_863_ == 0)
{
v___x_853_ = v___x_846_;
v_isShared_854_ = v_isSharedCheck_863_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_a_851_);
lean_dec(v___x_846_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_863_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v_ref_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_861_; 
v_ref_855_ = lean_ctor_get(v___y_838_, 5);
v___x_856_ = lean_io_error_to_string(v_a_851_);
v___x_857_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_857_, 0, v___x_856_);
v___x_858_ = l_Lean_MessageData_ofFormat(v___x_857_);
lean_inc(v_ref_855_);
v___x_859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_859_, 0, v_ref_855_);
lean_ctor_set(v___x_859_, 1, v___x_858_);
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 0, v___x_859_);
v___x_861_ = v___x_853_;
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27___boxed(lean_object* v_as_864_, lean_object* v_sz_865_, lean_object* v_i_866_, lean_object* v_b_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_){
_start:
{
size_t v_sz_boxed_871_; size_t v_i_boxed_872_; lean_object* v_res_873_; 
v_sz_boxed_871_ = lean_unbox_usize(v_sz_865_);
lean_dec(v_sz_865_);
v_i_boxed_872_ = lean_unbox_usize(v_i_866_);
lean_dec(v_i_866_);
v_res_873_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27(v_as_864_, v_sz_boxed_871_, v_i_boxed_872_, v_b_867_, v___y_868_, v___y_869_);
lean_dec(v___y_869_);
lean_dec_ref(v___y_868_);
lean_dec_ref(v_as_864_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg(lean_object* v_as_877_, size_t v_sz_878_, size_t v_i_879_, lean_object* v_b_880_, lean_object* v___y_881_){
_start:
{
uint8_t v___x_883_; 
v___x_883_ = lean_usize_dec_lt(v_i_879_, v_sz_878_);
if (v___x_883_ == 0)
{
lean_object* v___x_884_; 
v___x_884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_884_, 0, v_b_880_);
return v___x_884_;
}
else
{
uint8_t v___x_885_; lean_object* v_a_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
lean_dec_ref(v_b_880_);
v___x_885_ = 0;
v_a_886_ = lean_array_uget_borrowed(v_as_877_, v_i_879_);
lean_inc(v_a_886_);
v___x_887_ = l_Lean_Message_toString(v_a_886_, v___x_885_);
v___x_888_ = l_IO_eprintln___at___00main_spec__6(v___x_887_);
if (lean_obj_tag(v___x_888_) == 0)
{
lean_object* v___x_889_; size_t v___x_890_; size_t v___x_891_; 
lean_dec_ref_known(v___x_888_, 1);
v___x_889_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg___closed__0));
v___x_890_ = ((size_t)1ULL);
v___x_891_ = lean_usize_add(v_i_879_, v___x_890_);
v_i_879_ = v___x_891_;
v_b_880_ = v___x_889_;
goto _start;
}
else
{
lean_object* v_a_893_; lean_object* v___x_895_; uint8_t v_isShared_896_; uint8_t v_isSharedCheck_905_; 
v_a_893_ = lean_ctor_get(v___x_888_, 0);
v_isSharedCheck_905_ = !lean_is_exclusive(v___x_888_);
if (v_isSharedCheck_905_ == 0)
{
v___x_895_ = v___x_888_;
v_isShared_896_ = v_isSharedCheck_905_;
goto v_resetjp_894_;
}
else
{
lean_inc(v_a_893_);
lean_dec(v___x_888_);
v___x_895_ = lean_box(0);
v_isShared_896_ = v_isSharedCheck_905_;
goto v_resetjp_894_;
}
v_resetjp_894_:
{
lean_object* v_ref_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_903_; 
v_ref_897_ = lean_ctor_get(v___y_881_, 5);
v___x_898_ = lean_io_error_to_string(v_a_893_);
v___x_899_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_899_, 0, v___x_898_);
v___x_900_ = l_Lean_MessageData_ofFormat(v___x_899_);
lean_inc(v_ref_897_);
v___x_901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_901_, 0, v_ref_897_);
lean_ctor_set(v___x_901_, 1, v___x_900_);
if (v_isShared_896_ == 0)
{
lean_ctor_set(v___x_895_, 0, v___x_901_);
v___x_903_ = v___x_895_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v___x_901_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg___boxed(lean_object* v_as_906_, lean_object* v_sz_907_, lean_object* v_i_908_, lean_object* v_b_909_, lean_object* v___y_910_, lean_object* v___y_911_){
_start:
{
size_t v_sz_boxed_912_; size_t v_i_boxed_913_; lean_object* v_res_914_; 
v_sz_boxed_912_ = lean_unbox_usize(v_sz_907_);
lean_dec(v_sz_907_);
v_i_boxed_913_ = lean_unbox_usize(v_i_908_);
lean_dec(v_i_908_);
v_res_914_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg(v_as_906_, v_sz_boxed_912_, v_i_boxed_913_, v_b_909_, v___y_910_);
lean_dec_ref(v___y_910_);
lean_dec_ref(v_as_906_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38(lean_object* v_as_915_, size_t v_sz_916_, size_t v_i_917_, lean_object* v_b_918_, lean_object* v___y_919_, lean_object* v___y_920_){
_start:
{
uint8_t v___x_922_; 
v___x_922_ = lean_usize_dec_lt(v_i_917_, v_sz_916_);
if (v___x_922_ == 0)
{
lean_object* v___x_923_; 
v___x_923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_923_, 0, v_b_918_);
return v___x_923_;
}
else
{
uint8_t v___x_924_; lean_object* v_a_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
lean_dec_ref(v_b_918_);
v___x_924_ = 0;
v_a_925_ = lean_array_uget_borrowed(v_as_915_, v_i_917_);
lean_inc(v_a_925_);
v___x_926_ = l_Lean_Message_toString(v_a_925_, v___x_924_);
v___x_927_ = l_IO_eprintln___at___00main_spec__6(v___x_926_);
if (lean_obj_tag(v___x_927_) == 0)
{
lean_object* v___x_928_; size_t v___x_929_; size_t v___x_930_; lean_object* v___x_931_; 
lean_dec_ref_known(v___x_927_, 1);
v___x_928_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg___closed__0));
v___x_929_ = ((size_t)1ULL);
v___x_930_ = lean_usize_add(v_i_917_, v___x_929_);
v___x_931_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg(v_as_915_, v_sz_916_, v___x_930_, v___x_928_, v___y_919_);
return v___x_931_;
}
else
{
lean_object* v_a_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_944_; 
v_a_932_ = lean_ctor_get(v___x_927_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v___x_927_);
if (v_isSharedCheck_944_ == 0)
{
v___x_934_ = v___x_927_;
v_isShared_935_ = v_isSharedCheck_944_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_a_932_);
lean_dec(v___x_927_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_944_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
lean_object* v_ref_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_942_; 
v_ref_936_ = lean_ctor_get(v___y_919_, 5);
v___x_937_ = lean_io_error_to_string(v_a_932_);
v___x_938_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_938_, 0, v___x_937_);
v___x_939_ = l_Lean_MessageData_ofFormat(v___x_938_);
lean_inc(v_ref_936_);
v___x_940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_940_, 0, v_ref_936_);
lean_ctor_set(v___x_940_, 1, v___x_939_);
if (v_isShared_935_ == 0)
{
lean_ctor_set(v___x_934_, 0, v___x_940_);
v___x_942_ = v___x_934_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v___x_940_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38___boxed(lean_object* v_as_945_, lean_object* v_sz_946_, lean_object* v_i_947_, lean_object* v_b_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_){
_start:
{
size_t v_sz_boxed_952_; size_t v_i_boxed_953_; lean_object* v_res_954_; 
v_sz_boxed_952_ = lean_unbox_usize(v_sz_946_);
lean_dec(v_sz_946_);
v_i_boxed_953_ = lean_unbox_usize(v_i_947_);
lean_dec(v_i_947_);
v_res_954_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38(v_as_945_, v_sz_boxed_952_, v_i_boxed_953_, v_b_948_, v___y_949_, v___y_950_);
lean_dec(v___y_950_);
lean_dec_ref(v___y_949_);
lean_dec_ref(v_as_945_);
return v_res_954_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26(lean_object* v_init_955_, lean_object* v_n_956_, lean_object* v_b_957_, lean_object* v___y_958_, lean_object* v___y_959_){
_start:
{
if (lean_obj_tag(v_n_956_) == 0)
{
lean_object* v_cs_961_; lean_object* v___x_962_; lean_object* v___x_963_; size_t v_sz_964_; size_t v___x_965_; lean_object* v___x_966_; 
v_cs_961_ = lean_ctor_get(v_n_956_, 0);
v___x_962_ = lean_box(0);
v___x_963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_963_, 0, v___x_962_);
lean_ctor_set(v___x_963_, 1, v_b_957_);
v_sz_964_ = lean_array_size(v_cs_961_);
v___x_965_ = ((size_t)0ULL);
v___x_966_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__37(v_init_955_, v_cs_961_, v_sz_964_, v___x_965_, v___x_963_, v___y_958_, v___y_959_);
if (lean_obj_tag(v___x_966_) == 0)
{
lean_object* v_a_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_981_; 
v_a_967_ = lean_ctor_get(v___x_966_, 0);
v_isSharedCheck_981_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_981_ == 0)
{
v___x_969_ = v___x_966_;
v_isShared_970_ = v_isSharedCheck_981_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_a_967_);
lean_dec(v___x_966_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_981_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v_fst_971_; 
v_fst_971_ = lean_ctor_get(v_a_967_, 0);
if (lean_obj_tag(v_fst_971_) == 0)
{
lean_object* v_snd_972_; lean_object* v___x_973_; lean_object* v___x_975_; 
v_snd_972_ = lean_ctor_get(v_a_967_, 1);
lean_inc(v_snd_972_);
lean_dec(v_a_967_);
v___x_973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_973_, 0, v_snd_972_);
if (v_isShared_970_ == 0)
{
lean_ctor_set(v___x_969_, 0, v___x_973_);
v___x_975_ = v___x_969_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v___x_973_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
return v___x_975_;
}
}
else
{
lean_object* v_val_977_; lean_object* v___x_979_; 
lean_inc_ref(v_fst_971_);
lean_dec(v_a_967_);
v_val_977_ = lean_ctor_get(v_fst_971_, 0);
lean_inc(v_val_977_);
lean_dec_ref_known(v_fst_971_, 1);
if (v_isShared_970_ == 0)
{
lean_ctor_set(v___x_969_, 0, v_val_977_);
v___x_979_ = v___x_969_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v_val_977_);
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
else
{
lean_object* v_a_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_989_; 
v_a_982_ = lean_ctor_get(v___x_966_, 0);
v_isSharedCheck_989_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_989_ == 0)
{
v___x_984_ = v___x_966_;
v_isShared_985_ = v_isSharedCheck_989_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_a_982_);
lean_dec(v___x_966_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_989_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v___x_987_; 
if (v_isShared_985_ == 0)
{
v___x_987_ = v___x_984_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v_a_982_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
return v___x_987_;
}
}
}
}
else
{
lean_object* v_vs_990_; lean_object* v___x_991_; lean_object* v___x_992_; size_t v_sz_993_; size_t v___x_994_; lean_object* v___x_995_; 
v_vs_990_ = lean_ctor_get(v_n_956_, 0);
v___x_991_ = lean_box(0);
v___x_992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_992_, 0, v___x_991_);
lean_ctor_set(v___x_992_, 1, v_b_957_);
v_sz_993_ = lean_array_size(v_vs_990_);
v___x_994_ = ((size_t)0ULL);
v___x_995_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38(v_vs_990_, v_sz_993_, v___x_994_, v___x_992_, v___y_958_, v___y_959_);
if (lean_obj_tag(v___x_995_) == 0)
{
lean_object* v_a_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1010_; 
v_a_996_ = lean_ctor_get(v___x_995_, 0);
v_isSharedCheck_1010_ = !lean_is_exclusive(v___x_995_);
if (v_isSharedCheck_1010_ == 0)
{
v___x_998_ = v___x_995_;
v_isShared_999_ = v_isSharedCheck_1010_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_a_996_);
lean_dec(v___x_995_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1010_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v_fst_1000_; 
v_fst_1000_ = lean_ctor_get(v_a_996_, 0);
if (lean_obj_tag(v_fst_1000_) == 0)
{
lean_object* v_snd_1001_; lean_object* v___x_1002_; lean_object* v___x_1004_; 
v_snd_1001_ = lean_ctor_get(v_a_996_, 1);
lean_inc(v_snd_1001_);
lean_dec(v_a_996_);
v___x_1002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1002_, 0, v_snd_1001_);
if (v_isShared_999_ == 0)
{
lean_ctor_set(v___x_998_, 0, v___x_1002_);
v___x_1004_ = v___x_998_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v___x_1002_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
return v___x_1004_;
}
}
else
{
lean_object* v_val_1006_; lean_object* v___x_1008_; 
lean_inc_ref(v_fst_1000_);
lean_dec(v_a_996_);
v_val_1006_ = lean_ctor_get(v_fst_1000_, 0);
lean_inc(v_val_1006_);
lean_dec_ref_known(v_fst_1000_, 1);
if (v_isShared_999_ == 0)
{
lean_ctor_set(v___x_998_, 0, v_val_1006_);
v___x_1008_ = v___x_998_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v_val_1006_);
v___x_1008_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
return v___x_1008_;
}
}
}
}
else
{
lean_object* v_a_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1018_; 
v_a_1011_ = lean_ctor_get(v___x_995_, 0);
v_isSharedCheck_1018_ = !lean_is_exclusive(v___x_995_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_1013_ = v___x_995_;
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_a_1011_);
lean_dec(v___x_995_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___x_1016_; 
if (v_isShared_1014_ == 0)
{
v___x_1016_ = v___x_1013_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v_a_1011_);
v___x_1016_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
return v___x_1016_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__37(lean_object* v_init_1019_, lean_object* v_as_1020_, size_t v_sz_1021_, size_t v_i_1022_, lean_object* v_b_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_){
_start:
{
uint8_t v___x_1027_; 
v___x_1027_ = lean_usize_dec_lt(v_i_1022_, v_sz_1021_);
if (v___x_1027_ == 0)
{
lean_object* v___x_1028_; 
v___x_1028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1028_, 0, v_b_1023_);
return v___x_1028_;
}
else
{
lean_object* v_snd_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1063_; 
v_snd_1029_ = lean_ctor_get(v_b_1023_, 1);
v_isSharedCheck_1063_ = !lean_is_exclusive(v_b_1023_);
if (v_isSharedCheck_1063_ == 0)
{
lean_object* v_unused_1064_; 
v_unused_1064_ = lean_ctor_get(v_b_1023_, 0);
lean_dec(v_unused_1064_);
v___x_1031_ = v_b_1023_;
v_isShared_1032_ = v_isSharedCheck_1063_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_snd_1029_);
lean_dec(v_b_1023_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1063_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
lean_object* v_a_1033_; lean_object* v___x_1034_; 
v_a_1033_ = lean_array_uget_borrowed(v_as_1020_, v_i_1022_);
lean_inc(v_snd_1029_);
v___x_1034_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26(v_init_1019_, v_a_1033_, v_snd_1029_, v___y_1024_, v___y_1025_);
if (lean_obj_tag(v___x_1034_) == 0)
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1054_; 
v_a_1035_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1054_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1054_ == 0)
{
v___x_1037_ = v___x_1034_;
v_isShared_1038_ = v_isSharedCheck_1054_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1034_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1054_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
if (lean_obj_tag(v_a_1035_) == 0)
{
lean_object* v___x_1039_; lean_object* v___x_1041_; 
v___x_1039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1039_, 0, v_a_1035_);
if (v_isShared_1032_ == 0)
{
lean_ctor_set(v___x_1031_, 0, v___x_1039_);
v___x_1041_ = v___x_1031_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v___x_1039_);
lean_ctor_set(v_reuseFailAlloc_1045_, 1, v_snd_1029_);
v___x_1041_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1040_;
}
v_reusejp_1040_:
{
lean_object* v___x_1043_; 
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 0, v___x_1041_);
v___x_1043_ = v___x_1037_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v___x_1041_);
v___x_1043_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
return v___x_1043_;
}
}
}
else
{
lean_object* v_a_1046_; lean_object* v___x_1047_; lean_object* v___x_1049_; 
lean_del_object(v___x_1037_);
lean_dec(v_snd_1029_);
v_a_1046_ = lean_ctor_get(v_a_1035_, 0);
lean_inc(v_a_1046_);
lean_dec_ref_known(v_a_1035_, 1);
v___x_1047_ = lean_box(0);
if (v_isShared_1032_ == 0)
{
lean_ctor_set(v___x_1031_, 1, v_a_1046_);
lean_ctor_set(v___x_1031_, 0, v___x_1047_);
v___x_1049_ = v___x_1031_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v___x_1047_);
lean_ctor_set(v_reuseFailAlloc_1053_, 1, v_a_1046_);
v___x_1049_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1048_;
}
v_reusejp_1048_:
{
size_t v___x_1050_; size_t v___x_1051_; 
v___x_1050_ = ((size_t)1ULL);
v___x_1051_ = lean_usize_add(v_i_1022_, v___x_1050_);
v_i_1022_ = v___x_1051_;
v_b_1023_ = v___x_1049_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1062_; 
lean_del_object(v___x_1031_);
lean_dec(v_snd_1029_);
v_a_1055_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1062_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1057_ = v___x_1034_;
v_isShared_1058_ = v_isSharedCheck_1062_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_a_1055_);
lean_dec(v___x_1034_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1062_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1060_; 
if (v_isShared_1058_ == 0)
{
v___x_1060_ = v___x_1057_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v_a_1055_);
v___x_1060_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
return v___x_1060_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__37___boxed(lean_object* v_init_1065_, lean_object* v_as_1066_, lean_object* v_sz_1067_, lean_object* v_i_1068_, lean_object* v_b_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_){
_start:
{
size_t v_sz_boxed_1073_; size_t v_i_boxed_1074_; lean_object* v_res_1075_; 
v_sz_boxed_1073_ = lean_unbox_usize(v_sz_1067_);
lean_dec(v_sz_1067_);
v_i_boxed_1074_ = lean_unbox_usize(v_i_1068_);
lean_dec(v_i_1068_);
v_res_1075_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__37(v_init_1065_, v_as_1066_, v_sz_boxed_1073_, v_i_boxed_1074_, v_b_1069_, v___y_1070_, v___y_1071_);
lean_dec(v___y_1071_);
lean_dec_ref(v___y_1070_);
lean_dec_ref(v_as_1066_);
return v_res_1075_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26___boxed(lean_object* v_init_1076_, lean_object* v_n_1077_, lean_object* v_b_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_){
_start:
{
lean_object* v_res_1082_; 
v_res_1082_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26(v_init_1076_, v_n_1077_, v_b_1078_, v___y_1079_, v___y_1080_);
lean_dec(v___y_1080_);
lean_dec_ref(v___y_1079_);
lean_dec_ref(v_n_1077_);
return v_res_1082_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__12(lean_object* v_t_1083_, lean_object* v_init_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_){
_start:
{
lean_object* v_root_1088_; lean_object* v_tail_1089_; lean_object* v___x_1090_; 
v_root_1088_ = lean_ctor_get(v_t_1083_, 0);
v_tail_1089_ = lean_ctor_get(v_t_1083_, 1);
v___x_1090_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26(v_init_1084_, v_root_1088_, v_init_1084_, v___y_1085_, v___y_1086_);
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v_a_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1127_; 
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1127_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1093_ = v___x_1090_;
v_isShared_1094_ = v_isSharedCheck_1127_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_a_1091_);
lean_dec(v___x_1090_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1127_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
if (lean_obj_tag(v_a_1091_) == 0)
{
lean_object* v_a_1095_; lean_object* v___x_1097_; 
v_a_1095_ = lean_ctor_get(v_a_1091_, 0);
lean_inc(v_a_1095_);
lean_dec_ref_known(v_a_1091_, 1);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 0, v_a_1095_);
v___x_1097_ = v___x_1093_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v_a_1095_);
v___x_1097_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
return v___x_1097_;
}
}
else
{
lean_object* v_a_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; size_t v_sz_1102_; size_t v___x_1103_; lean_object* v___x_1104_; 
lean_del_object(v___x_1093_);
v_a_1099_ = lean_ctor_get(v_a_1091_, 0);
lean_inc(v_a_1099_);
lean_dec_ref_known(v_a_1091_, 1);
v___x_1100_ = lean_box(0);
v___x_1101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1100_);
lean_ctor_set(v___x_1101_, 1, v_a_1099_);
v_sz_1102_ = lean_array_size(v_tail_1089_);
v___x_1103_ = ((size_t)0ULL);
v___x_1104_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27(v_tail_1089_, v_sz_1102_, v___x_1103_, v___x_1101_, v___y_1085_, v___y_1086_);
if (lean_obj_tag(v___x_1104_) == 0)
{
lean_object* v_a_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1118_; 
v_a_1105_ = lean_ctor_get(v___x_1104_, 0);
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1104_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1107_ = v___x_1104_;
v_isShared_1108_ = v_isSharedCheck_1118_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_a_1105_);
lean_dec(v___x_1104_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1118_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v_fst_1109_; 
v_fst_1109_ = lean_ctor_get(v_a_1105_, 0);
if (lean_obj_tag(v_fst_1109_) == 0)
{
lean_object* v_snd_1110_; lean_object* v___x_1112_; 
v_snd_1110_ = lean_ctor_get(v_a_1105_, 1);
lean_inc(v_snd_1110_);
lean_dec(v_a_1105_);
if (v_isShared_1108_ == 0)
{
lean_ctor_set(v___x_1107_, 0, v_snd_1110_);
v___x_1112_ = v___x_1107_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v_snd_1110_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
return v___x_1112_;
}
}
else
{
lean_object* v_val_1114_; lean_object* v___x_1116_; 
lean_inc_ref(v_fst_1109_);
lean_dec(v_a_1105_);
v_val_1114_ = lean_ctor_get(v_fst_1109_, 0);
lean_inc(v_val_1114_);
lean_dec_ref_known(v_fst_1109_, 1);
if (v_isShared_1108_ == 0)
{
lean_ctor_set(v___x_1107_, 0, v_val_1114_);
v___x_1116_ = v___x_1107_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_val_1114_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
return v___x_1116_;
}
}
}
}
else
{
lean_object* v_a_1119_; lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1126_; 
v_a_1119_ = lean_ctor_get(v___x_1104_, 0);
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_1104_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1121_ = v___x_1104_;
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
else
{
lean_inc(v_a_1119_);
lean_dec(v___x_1104_);
v___x_1121_ = lean_box(0);
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
v_resetjp_1120_:
{
lean_object* v___x_1124_; 
if (v_isShared_1122_ == 0)
{
v___x_1124_ = v___x_1121_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v_a_1119_);
v___x_1124_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
return v___x_1124_;
}
}
}
}
}
}
else
{
lean_object* v_a_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1135_; 
v_a_1128_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1135_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1135_ == 0)
{
v___x_1130_ = v___x_1090_;
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_a_1128_);
lean_dec(v___x_1090_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v___x_1133_; 
if (v_isShared_1131_ == 0)
{
v___x_1133_ = v___x_1130_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v_a_1128_);
v___x_1133_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
return v___x_1133_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__12___boxed(lean_object* v_t_1136_, lean_object* v_init_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_){
_start:
{
lean_object* v_res_1141_; 
v_res_1141_ = l_Lean_PersistentArray_forIn___at___00main_spec__12(v_t_1136_, v_init_1137_, v___y_1138_, v___y_1139_);
lean_dec(v___y_1139_);
lean_dec_ref(v___y_1138_);
lean_dec_ref(v_t_1136_);
return v_res_1141_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0(uint8_t v___x_1149_, uint8_t v_suppressElabErrors_1150_, lean_object* v___x_1151_, lean_object* v_x_1152_){
_start:
{
if (lean_obj_tag(v_x_1152_) == 1)
{
lean_object* v_pre_1153_; 
v_pre_1153_ = lean_ctor_get(v_x_1152_, 0);
switch(lean_obj_tag(v_pre_1153_))
{
case 1:
{
lean_object* v_pre_1154_; 
v_pre_1154_ = lean_ctor_get(v_pre_1153_, 0);
switch(lean_obj_tag(v_pre_1154_))
{
case 0:
{
lean_object* v_str_1155_; lean_object* v_str_1156_; lean_object* v___x_1157_; uint8_t v___x_1158_; 
v_str_1155_ = lean_ctor_get(v_x_1152_, 1);
v_str_1156_ = lean_ctor_get(v_pre_1153_, 1);
v___x_1157_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__0));
v___x_1158_ = lean_string_dec_eq(v_str_1156_, v___x_1157_);
if (v___x_1158_ == 0)
{
lean_object* v___x_1159_; uint8_t v___x_1160_; 
v___x_1159_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__1));
v___x_1160_ = lean_string_dec_eq(v_str_1156_, v___x_1159_);
if (v___x_1160_ == 0)
{
return v___x_1149_;
}
else
{
lean_object* v___x_1161_; uint8_t v___x_1162_; 
v___x_1161_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__2));
v___x_1162_ = lean_string_dec_eq(v_str_1155_, v___x_1161_);
if (v___x_1162_ == 0)
{
return v___x_1149_;
}
else
{
return v_suppressElabErrors_1150_;
}
}
}
else
{
lean_object* v___x_1163_; uint8_t v___x_1164_; 
v___x_1163_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__3));
v___x_1164_ = lean_string_dec_eq(v_str_1155_, v___x_1163_);
if (v___x_1164_ == 0)
{
return v___x_1149_;
}
else
{
return v_suppressElabErrors_1150_;
}
}
}
case 1:
{
lean_object* v_pre_1165_; 
v_pre_1165_ = lean_ctor_get(v_pre_1154_, 0);
if (lean_obj_tag(v_pre_1165_) == 0)
{
lean_object* v_str_1166_; lean_object* v_str_1167_; lean_object* v_str_1168_; lean_object* v___x_1169_; uint8_t v___x_1170_; 
v_str_1166_ = lean_ctor_get(v_x_1152_, 1);
v_str_1167_ = lean_ctor_get(v_pre_1153_, 1);
v_str_1168_ = lean_ctor_get(v_pre_1154_, 1);
v___x_1169_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__4));
v___x_1170_ = lean_string_dec_eq(v_str_1168_, v___x_1169_);
if (v___x_1170_ == 0)
{
return v___x_1149_;
}
else
{
lean_object* v___x_1171_; uint8_t v___x_1172_; 
v___x_1171_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__5));
v___x_1172_ = lean_string_dec_eq(v_str_1167_, v___x_1171_);
if (v___x_1172_ == 0)
{
return v___x_1149_;
}
else
{
lean_object* v___x_1173_; uint8_t v___x_1174_; 
v___x_1173_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__6));
v___x_1174_ = lean_string_dec_eq(v_str_1166_, v___x_1173_);
if (v___x_1174_ == 0)
{
return v___x_1149_;
}
else
{
return v_suppressElabErrors_1150_;
}
}
}
}
else
{
return v___x_1149_;
}
}
default: 
{
return v___x_1149_;
}
}
}
case 0:
{
lean_object* v_str_1175_; uint8_t v___x_1176_; 
v_str_1175_ = lean_ctor_get(v_x_1152_, 1);
v___x_1176_ = lean_string_dec_eq(v_str_1175_, v___x_1151_);
if (v___x_1176_ == 0)
{
return v___x_1149_;
}
else
{
return v_suppressElabErrors_1150_;
}
}
default: 
{
return v___x_1149_;
}
}
}
else
{
return v___x_1149_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___boxed(lean_object* v___x_1177_, lean_object* v_suppressElabErrors_1178_, lean_object* v___x_1179_, lean_object* v_x_1180_){
_start:
{
uint8_t v___x_36647__boxed_1181_; uint8_t v_suppressElabErrors_boxed_1182_; uint8_t v_res_1183_; lean_object* v_r_1184_; 
v___x_36647__boxed_1181_ = lean_unbox(v___x_1177_);
v_suppressElabErrors_boxed_1182_ = lean_unbox(v_suppressElabErrors_1178_);
v_res_1183_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0(v___x_36647__boxed_1181_, v_suppressElabErrors_boxed_1182_, v___x_1179_, v_x_1180_);
lean_dec(v_x_1180_);
lean_dec_ref(v___x_1179_);
v_r_1184_ = lean_box(v_res_1183_);
return v_r_1184_;
}
}
static double _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___closed__0(void){
_start:
{
lean_object* v___x_1185_; double v___x_1186_; 
v___x_1185_ = lean_unsigned_to_nat(0u);
v___x_1186_ = lean_float_of_nat(v___x_1185_);
return v___x_1186_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20(uint8_t v___x_1188_, lean_object* v_as_1189_, size_t v_sz_1190_, size_t v_i_1191_, lean_object* v_b_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_){
_start:
{
lean_object* v_a_1197_; uint8_t v___x_1201_; 
v___x_1201_ = lean_usize_dec_lt(v_i_1191_, v_sz_1190_);
if (v___x_1201_ == 0)
{
lean_object* v___x_1202_; 
v___x_1202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1202_, 0, v_b_1192_);
return v___x_1202_;
}
else
{
lean_object* v_a_1203_; lean_object* v_fst_1204_; lean_object* v_snd_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1281_; 
v_a_1203_ = lean_array_uget(v_as_1189_, v_i_1191_);
v_fst_1204_ = lean_ctor_get(v_a_1203_, 0);
v_snd_1205_ = lean_ctor_get(v_a_1203_, 1);
v_isSharedCheck_1281_ = !lean_is_exclusive(v_a_1203_);
if (v_isSharedCheck_1281_ == 0)
{
v___x_1207_ = v_a_1203_;
v_isShared_1208_ = v_isSharedCheck_1281_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_snd_1205_);
lean_inc(v_fst_1204_);
lean_dec(v_a_1203_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1281_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v_fst_1209_; lean_object* v_snd_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1280_; 
v_fst_1209_ = lean_ctor_get(v_fst_1204_, 0);
v_snd_1210_ = lean_ctor_get(v_fst_1204_, 1);
v_isSharedCheck_1280_ = !lean_is_exclusive(v_fst_1204_);
if (v_isSharedCheck_1280_ == 0)
{
v___x_1212_ = v_fst_1204_;
v_isShared_1213_ = v_isSharedCheck_1280_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_snd_1210_);
lean_inc(v_fst_1209_);
lean_dec(v_fst_1204_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1280_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v___x_1214_; lean_object* v___x_1215_; double v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v_fileName_1219_; lean_object* v_fileMap_1220_; uint8_t v_suppressElabErrors_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1228_; 
v___x_1214_ = lean_box(0);
v___x_1215_ = lean_box(0);
v___x_1216_ = lean_float_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___closed__0);
v___x_1217_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___closed__1));
v___x_1218_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1218_, 0, v___x_1214_);
lean_ctor_set(v___x_1218_, 1, v___x_1215_);
lean_ctor_set(v___x_1218_, 2, v___x_1217_);
lean_ctor_set_float(v___x_1218_, sizeof(void*)*3, v___x_1216_);
lean_ctor_set_float(v___x_1218_, sizeof(void*)*3 + 8, v___x_1216_);
lean_ctor_set_uint8(v___x_1218_, sizeof(void*)*3 + 16, v___x_1201_);
v_fileName_1219_ = lean_ctor_get(v___y_1193_, 0);
v_fileMap_1220_ = lean_ctor_get(v___y_1193_, 1);
v_suppressElabErrors_1221_ = lean_ctor_get_uint8(v___y_1193_, sizeof(void*)*14 + 1);
v___x_1222_ = lean_box(0);
v___x_1223_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0));
v___x_1224_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__1));
v___x_1225_ = l_Lean_MessageData_nil;
v___x_1226_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1226_, 0, v___x_1218_);
lean_ctor_set(v___x_1226_, 1, v___x_1225_);
lean_ctor_set(v___x_1226_, 2, v_snd_1205_);
if (v_isShared_1213_ == 0)
{
lean_ctor_set_tag(v___x_1212_, 8);
lean_ctor_set(v___x_1212_, 1, v___x_1226_);
lean_ctor_set(v___x_1212_, 0, v___x_1224_);
v___x_1228_ = v___x_1212_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v___x_1224_);
lean_ctor_set(v_reuseFailAlloc_1279_, 1, v___x_1226_);
v___x_1228_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
uint8_t v___x_1229_; lean_object* v___x_1230_; lean_object* v___y_1232_; lean_object* v___y_1233_; 
v___x_1229_ = 0;
lean_inc_ref(v_fileMap_1220_);
lean_inc_ref(v_fileName_1219_);
v___x_1230_ = l_Lean_Elab_mkMessageCore(v_fileName_1219_, v_fileMap_1220_, v___x_1228_, v___x_1229_, v_fst_1209_, v_snd_1210_);
lean_dec(v_snd_1210_);
lean_dec(v_fst_1209_);
if (v_suppressElabErrors_1221_ == 0)
{
v___y_1232_ = v___y_1193_;
v___y_1233_ = v___y_1194_;
goto v___jp_1231_;
}
else
{
lean_object* v_data_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___f_1277_; uint8_t v___x_1278_; 
v_data_1274_ = lean_ctor_get(v___x_1230_, 4);
lean_inc(v_data_1274_);
v___x_1275_ = lean_box(v___x_1188_);
v___x_1276_ = lean_box(v_suppressElabErrors_1221_);
v___f_1277_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1277_, 0, v___x_1275_);
lean_closure_set(v___f_1277_, 1, v___x_1276_);
lean_closure_set(v___f_1277_, 2, v___x_1223_);
v___x_1278_ = l_Lean_MessageData_hasTag(v___f_1277_, v_data_1274_);
if (v___x_1278_ == 0)
{
lean_dec_ref(v___x_1230_);
lean_del_object(v___x_1207_);
v_a_1197_ = v___x_1222_;
goto v___jp_1196_;
}
else
{
v___y_1232_ = v___y_1193_;
v___y_1233_ = v___y_1194_;
goto v___jp_1231_;
}
}
v___jp_1231_:
{
lean_object* v___x_1234_; lean_object* v_fileName_1235_; lean_object* v_pos_1236_; lean_object* v_endPos_1237_; uint8_t v_keepFullRange_1238_; uint8_t v_severity_1239_; uint8_t v_isSilent_1240_; lean_object* v_caption_1241_; lean_object* v_data_1242_; lean_object* v___x_1244_; uint8_t v_isShared_1245_; uint8_t v_isSharedCheck_1273_; 
v___x_1234_ = lean_st_ref_take(v___y_1233_);
v_fileName_1235_ = lean_ctor_get(v___x_1230_, 0);
v_pos_1236_ = lean_ctor_get(v___x_1230_, 1);
v_endPos_1237_ = lean_ctor_get(v___x_1230_, 2);
v_keepFullRange_1238_ = lean_ctor_get_uint8(v___x_1230_, sizeof(void*)*5);
v_severity_1239_ = lean_ctor_get_uint8(v___x_1230_, sizeof(void*)*5 + 1);
v_isSilent_1240_ = lean_ctor_get_uint8(v___x_1230_, sizeof(void*)*5 + 2);
v_caption_1241_ = lean_ctor_get(v___x_1230_, 3);
v_data_1242_ = lean_ctor_get(v___x_1230_, 4);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___x_1230_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1244_ = v___x_1230_;
v_isShared_1245_ = v_isSharedCheck_1273_;
goto v_resetjp_1243_;
}
else
{
lean_inc(v_data_1242_);
lean_inc(v_caption_1241_);
lean_inc(v_endPos_1237_);
lean_inc(v_pos_1236_);
lean_inc(v_fileName_1235_);
lean_dec(v___x_1230_);
v___x_1244_ = lean_box(0);
v_isShared_1245_ = v_isSharedCheck_1273_;
goto v_resetjp_1243_;
}
v_resetjp_1243_:
{
lean_object* v_currNamespace_1246_; lean_object* v_openDecls_1247_; lean_object* v_env_1248_; lean_object* v_nextMacroScope_1249_; lean_object* v_ngen_1250_; lean_object* v_auxDeclNGen_1251_; lean_object* v_traceState_1252_; lean_object* v_cache_1253_; lean_object* v_messages_1254_; lean_object* v_infoState_1255_; lean_object* v_snapshotTasks_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1272_; 
v_currNamespace_1246_ = lean_ctor_get(v___y_1232_, 6);
v_openDecls_1247_ = lean_ctor_get(v___y_1232_, 7);
v_env_1248_ = lean_ctor_get(v___x_1234_, 0);
v_nextMacroScope_1249_ = lean_ctor_get(v___x_1234_, 1);
v_ngen_1250_ = lean_ctor_get(v___x_1234_, 2);
v_auxDeclNGen_1251_ = lean_ctor_get(v___x_1234_, 3);
v_traceState_1252_ = lean_ctor_get(v___x_1234_, 4);
v_cache_1253_ = lean_ctor_get(v___x_1234_, 5);
v_messages_1254_ = lean_ctor_get(v___x_1234_, 6);
v_infoState_1255_ = lean_ctor_get(v___x_1234_, 7);
v_snapshotTasks_1256_ = lean_ctor_get(v___x_1234_, 8);
v_isSharedCheck_1272_ = !lean_is_exclusive(v___x_1234_);
if (v_isSharedCheck_1272_ == 0)
{
v___x_1258_ = v___x_1234_;
v_isShared_1259_ = v_isSharedCheck_1272_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_snapshotTasks_1256_);
lean_inc(v_infoState_1255_);
lean_inc(v_messages_1254_);
lean_inc(v_cache_1253_);
lean_inc(v_traceState_1252_);
lean_inc(v_auxDeclNGen_1251_);
lean_inc(v_ngen_1250_);
lean_inc(v_nextMacroScope_1249_);
lean_inc(v_env_1248_);
lean_dec(v___x_1234_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1272_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
lean_object* v___x_1261_; 
lean_inc(v_openDecls_1247_);
lean_inc(v_currNamespace_1246_);
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 1, v_openDecls_1247_);
lean_ctor_set(v___x_1207_, 0, v_currNamespace_1246_);
v___x_1261_ = v___x_1207_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v_currNamespace_1246_);
lean_ctor_set(v_reuseFailAlloc_1271_, 1, v_openDecls_1247_);
v___x_1261_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
lean_object* v___x_1262_; lean_object* v___x_1264_; 
v___x_1262_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1262_, 0, v___x_1261_);
lean_ctor_set(v___x_1262_, 1, v_data_1242_);
if (v_isShared_1245_ == 0)
{
lean_ctor_set(v___x_1244_, 4, v___x_1262_);
v___x_1264_ = v___x_1244_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_fileName_1235_);
lean_ctor_set(v_reuseFailAlloc_1270_, 1, v_pos_1236_);
lean_ctor_set(v_reuseFailAlloc_1270_, 2, v_endPos_1237_);
lean_ctor_set(v_reuseFailAlloc_1270_, 3, v_caption_1241_);
lean_ctor_set(v_reuseFailAlloc_1270_, 4, v___x_1262_);
lean_ctor_set_uint8(v_reuseFailAlloc_1270_, sizeof(void*)*5, v_keepFullRange_1238_);
lean_ctor_set_uint8(v_reuseFailAlloc_1270_, sizeof(void*)*5 + 1, v_severity_1239_);
lean_ctor_set_uint8(v_reuseFailAlloc_1270_, sizeof(void*)*5 + 2, v_isSilent_1240_);
v___x_1264_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
lean_object* v___x_1265_; lean_object* v___x_1267_; 
v___x_1265_ = l_Lean_MessageLog_add(v___x_1264_, v_messages_1254_);
if (v_isShared_1259_ == 0)
{
lean_ctor_set(v___x_1258_, 6, v___x_1265_);
v___x_1267_ = v___x_1258_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v_env_1248_);
lean_ctor_set(v_reuseFailAlloc_1269_, 1, v_nextMacroScope_1249_);
lean_ctor_set(v_reuseFailAlloc_1269_, 2, v_ngen_1250_);
lean_ctor_set(v_reuseFailAlloc_1269_, 3, v_auxDeclNGen_1251_);
lean_ctor_set(v_reuseFailAlloc_1269_, 4, v_traceState_1252_);
lean_ctor_set(v_reuseFailAlloc_1269_, 5, v_cache_1253_);
lean_ctor_set(v_reuseFailAlloc_1269_, 6, v___x_1265_);
lean_ctor_set(v_reuseFailAlloc_1269_, 7, v_infoState_1255_);
lean_ctor_set(v_reuseFailAlloc_1269_, 8, v_snapshotTasks_1256_);
v___x_1267_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
lean_object* v___x_1268_; 
v___x_1268_ = lean_st_ref_set(v___y_1233_, v___x_1267_);
v_a_1197_ = v___x_1222_;
goto v___jp_1196_;
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
v___jp_1196_:
{
size_t v___x_1198_; size_t v___x_1199_; 
v___x_1198_ = ((size_t)1ULL);
v___x_1199_ = lean_usize_add(v_i_1191_, v___x_1198_);
v_i_1191_ = v___x_1199_;
v_b_1192_ = v_a_1197_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___boxed(lean_object* v___x_1282_, lean_object* v_as_1283_, lean_object* v_sz_1284_, lean_object* v_i_1285_, lean_object* v_b_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_){
_start:
{
uint8_t v___x_36720__boxed_1290_; size_t v_sz_boxed_1291_; size_t v_i_boxed_1292_; lean_object* v_res_1293_; 
v___x_36720__boxed_1290_ = lean_unbox(v___x_1282_);
v_sz_boxed_1291_ = lean_unbox_usize(v_sz_1284_);
lean_dec(v_sz_1284_);
v_i_boxed_1292_ = lean_unbox_usize(v_i_1285_);
lean_dec(v_i_1285_);
v_res_1293_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20(v___x_36720__boxed_1290_, v_as_1283_, v_sz_boxed_1291_, v_i_boxed_1292_, v_b_1286_, v___y_1287_, v___y_1288_);
lean_dec(v___y_1288_);
lean_dec_ref(v___y_1287_);
lean_dec_ref(v_as_1283_);
return v_res_1293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__15(lean_object* v_opts_1294_, lean_object* v_opt_1295_){
_start:
{
lean_object* v_name_1296_; lean_object* v_map_1297_; lean_object* v___x_1298_; 
v_name_1296_ = lean_ctor_get(v_opt_1295_, 0);
v_map_1297_ = lean_ctor_get(v_opts_1294_, 0);
v___x_1298_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1297_, v_name_1296_);
if (lean_obj_tag(v___x_1298_) == 0)
{
lean_object* v___x_1299_; 
v___x_1299_ = lean_box(0);
return v___x_1299_;
}
else
{
lean_object* v_val_1300_; lean_object* v___x_1302_; uint8_t v_isShared_1303_; uint8_t v_isSharedCheck_1309_; 
v_val_1300_ = lean_ctor_get(v___x_1298_, 0);
v_isSharedCheck_1309_ = !lean_is_exclusive(v___x_1298_);
if (v_isSharedCheck_1309_ == 0)
{
v___x_1302_ = v___x_1298_;
v_isShared_1303_ = v_isSharedCheck_1309_;
goto v_resetjp_1301_;
}
else
{
lean_inc(v_val_1300_);
lean_dec(v___x_1298_);
v___x_1302_ = lean_box(0);
v_isShared_1303_ = v_isSharedCheck_1309_;
goto v_resetjp_1301_;
}
v_resetjp_1301_:
{
if (lean_obj_tag(v_val_1300_) == 0)
{
lean_object* v_v_1304_; lean_object* v___x_1306_; 
v_v_1304_ = lean_ctor_get(v_val_1300_, 0);
lean_inc_ref(v_v_1304_);
lean_dec_ref_known(v_val_1300_, 1);
if (v_isShared_1303_ == 0)
{
lean_ctor_set(v___x_1302_, 0, v_v_1304_);
v___x_1306_ = v___x_1302_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v_v_1304_);
v___x_1306_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
return v___x_1306_;
}
}
else
{
lean_object* v___x_1308_; 
lean_del_object(v___x_1302_);
lean_dec(v_val_1300_);
v___x_1308_ = lean_box(0);
return v___x_1308_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__15___boxed(lean_object* v_opts_1310_, lean_object* v_opt_1311_){
_start:
{
lean_object* v_res_1312_; 
v_res_1312_ = l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__15(v_opts_1310_, v_opt_1311_);
lean_dec_ref(v_opt_1311_);
lean_dec_ref(v_opts_1310_);
return v_res_1312_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17_spec__21___redArg(lean_object* v_a_1313_, lean_object* v_fallback_1314_, lean_object* v_x_1315_){
_start:
{
if (lean_obj_tag(v_x_1315_) == 0)
{
lean_inc(v_fallback_1314_);
return v_fallback_1314_;
}
else
{
lean_object* v_key_1316_; lean_object* v_value_1317_; lean_object* v_tail_1318_; uint8_t v___y_1320_; lean_object* v_fst_1322_; lean_object* v_snd_1323_; lean_object* v_fst_1324_; lean_object* v_snd_1325_; uint8_t v___x_1326_; 
v_key_1316_ = lean_ctor_get(v_x_1315_, 0);
v_value_1317_ = lean_ctor_get(v_x_1315_, 1);
v_tail_1318_ = lean_ctor_get(v_x_1315_, 2);
v_fst_1322_ = lean_ctor_get(v_key_1316_, 0);
v_snd_1323_ = lean_ctor_get(v_key_1316_, 1);
v_fst_1324_ = lean_ctor_get(v_a_1313_, 0);
v_snd_1325_ = lean_ctor_get(v_a_1313_, 1);
v___x_1326_ = lean_nat_dec_eq(v_fst_1322_, v_fst_1324_);
if (v___x_1326_ == 0)
{
v___y_1320_ = v___x_1326_;
goto v___jp_1319_;
}
else
{
uint8_t v___x_1327_; 
v___x_1327_ = lean_nat_dec_eq(v_snd_1323_, v_snd_1325_);
v___y_1320_ = v___x_1327_;
goto v___jp_1319_;
}
v___jp_1319_:
{
if (v___y_1320_ == 0)
{
v_x_1315_ = v_tail_1318_;
goto _start;
}
else
{
lean_inc(v_value_1317_);
return v_value_1317_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17_spec__21___redArg___boxed(lean_object* v_a_1328_, lean_object* v_fallback_1329_, lean_object* v_x_1330_){
_start:
{
lean_object* v_res_1331_; 
v_res_1331_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17_spec__21___redArg(v_a_1328_, v_fallback_1329_, v_x_1330_);
lean_dec(v_x_1330_);
lean_dec(v_fallback_1329_);
lean_dec_ref(v_a_1328_);
return v_res_1331_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17___redArg(lean_object* v_m_1332_, lean_object* v_a_1333_, lean_object* v_fallback_1334_){
_start:
{
lean_object* v_buckets_1335_; lean_object* v_fst_1336_; lean_object* v_snd_1337_; lean_object* v___x_1338_; uint64_t v___x_1339_; uint64_t v___x_1340_; uint64_t v___x_1341_; uint64_t v___x_1342_; uint64_t v___x_1343_; uint64_t v_fold_1344_; uint64_t v___x_1345_; uint64_t v___x_1346_; uint64_t v___x_1347_; size_t v___x_1348_; size_t v___x_1349_; size_t v___x_1350_; size_t v___x_1351_; size_t v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; 
v_buckets_1335_ = lean_ctor_get(v_m_1332_, 1);
v_fst_1336_ = lean_ctor_get(v_a_1333_, 0);
v_snd_1337_ = lean_ctor_get(v_a_1333_, 1);
v___x_1338_ = lean_array_get_size(v_buckets_1335_);
v___x_1339_ = l_String_instHashableRaw_hash(v_fst_1336_);
v___x_1340_ = l_String_instHashableRaw_hash(v_snd_1337_);
v___x_1341_ = lean_uint64_mix_hash(v___x_1339_, v___x_1340_);
v___x_1342_ = 32ULL;
v___x_1343_ = lean_uint64_shift_right(v___x_1341_, v___x_1342_);
v_fold_1344_ = lean_uint64_xor(v___x_1341_, v___x_1343_);
v___x_1345_ = 16ULL;
v___x_1346_ = lean_uint64_shift_right(v_fold_1344_, v___x_1345_);
v___x_1347_ = lean_uint64_xor(v_fold_1344_, v___x_1346_);
v___x_1348_ = lean_uint64_to_usize(v___x_1347_);
v___x_1349_ = lean_usize_of_nat(v___x_1338_);
v___x_1350_ = ((size_t)1ULL);
v___x_1351_ = lean_usize_sub(v___x_1349_, v___x_1350_);
v___x_1352_ = lean_usize_land(v___x_1348_, v___x_1351_);
v___x_1353_ = lean_array_uget_borrowed(v_buckets_1335_, v___x_1352_);
v___x_1354_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17_spec__21___redArg(v_a_1333_, v_fallback_1334_, v___x_1353_);
return v___x_1354_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17___redArg___boxed(lean_object* v_m_1355_, lean_object* v_a_1356_, lean_object* v_fallback_1357_){
_start:
{
lean_object* v_res_1358_; 
v_res_1358_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17___redArg(v_m_1355_, v_a_1356_, v_fallback_1357_);
lean_dec(v_fallback_1357_);
lean_dec_ref(v_a_1356_);
lean_dec_ref(v_m_1355_);
return v_res_1358_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24_spec__35_spec__44___redArg(lean_object* v_x_1359_, lean_object* v_x_1360_){
_start:
{
if (lean_obj_tag(v_x_1360_) == 0)
{
return v_x_1359_;
}
else
{
lean_object* v_key_1361_; lean_object* v_value_1362_; lean_object* v_tail_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1390_; 
v_key_1361_ = lean_ctor_get(v_x_1360_, 0);
v_value_1362_ = lean_ctor_get(v_x_1360_, 1);
v_tail_1363_ = lean_ctor_get(v_x_1360_, 2);
v_isSharedCheck_1390_ = !lean_is_exclusive(v_x_1360_);
if (v_isSharedCheck_1390_ == 0)
{
v___x_1365_ = v_x_1360_;
v_isShared_1366_ = v_isSharedCheck_1390_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_tail_1363_);
lean_inc(v_value_1362_);
lean_inc(v_key_1361_);
lean_dec(v_x_1360_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1390_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v_fst_1367_; lean_object* v_snd_1368_; lean_object* v___x_1369_; uint64_t v___x_1370_; uint64_t v___x_1371_; uint64_t v___x_1372_; uint64_t v___x_1373_; uint64_t v___x_1374_; uint64_t v_fold_1375_; uint64_t v___x_1376_; uint64_t v___x_1377_; uint64_t v___x_1378_; size_t v___x_1379_; size_t v___x_1380_; size_t v___x_1381_; size_t v___x_1382_; size_t v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1386_; 
v_fst_1367_ = lean_ctor_get(v_key_1361_, 0);
v_snd_1368_ = lean_ctor_get(v_key_1361_, 1);
v___x_1369_ = lean_array_get_size(v_x_1359_);
v___x_1370_ = l_String_instHashableRaw_hash(v_fst_1367_);
v___x_1371_ = l_String_instHashableRaw_hash(v_snd_1368_);
v___x_1372_ = lean_uint64_mix_hash(v___x_1370_, v___x_1371_);
v___x_1373_ = 32ULL;
v___x_1374_ = lean_uint64_shift_right(v___x_1372_, v___x_1373_);
v_fold_1375_ = lean_uint64_xor(v___x_1372_, v___x_1374_);
v___x_1376_ = 16ULL;
v___x_1377_ = lean_uint64_shift_right(v_fold_1375_, v___x_1376_);
v___x_1378_ = lean_uint64_xor(v_fold_1375_, v___x_1377_);
v___x_1379_ = lean_uint64_to_usize(v___x_1378_);
v___x_1380_ = lean_usize_of_nat(v___x_1369_);
v___x_1381_ = ((size_t)1ULL);
v___x_1382_ = lean_usize_sub(v___x_1380_, v___x_1381_);
v___x_1383_ = lean_usize_land(v___x_1379_, v___x_1382_);
v___x_1384_ = lean_array_uget_borrowed(v_x_1359_, v___x_1383_);
lean_inc(v___x_1384_);
if (v_isShared_1366_ == 0)
{
lean_ctor_set(v___x_1365_, 2, v___x_1384_);
v___x_1386_ = v___x_1365_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v_key_1361_);
lean_ctor_set(v_reuseFailAlloc_1389_, 1, v_value_1362_);
lean_ctor_set(v_reuseFailAlloc_1389_, 2, v___x_1384_);
v___x_1386_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
lean_object* v___x_1387_; 
v___x_1387_ = lean_array_uset(v_x_1359_, v___x_1383_, v___x_1386_);
v_x_1359_ = v___x_1387_;
v_x_1360_ = v_tail_1363_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24_spec__35___redArg(lean_object* v_i_1391_, lean_object* v_source_1392_, lean_object* v_target_1393_){
_start:
{
lean_object* v___x_1394_; uint8_t v___x_1395_; 
v___x_1394_ = lean_array_get_size(v_source_1392_);
v___x_1395_ = lean_nat_dec_lt(v_i_1391_, v___x_1394_);
if (v___x_1395_ == 0)
{
lean_dec_ref(v_source_1392_);
lean_dec(v_i_1391_);
return v_target_1393_;
}
else
{
lean_object* v_es_1396_; lean_object* v___x_1397_; lean_object* v_source_1398_; lean_object* v_target_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; 
v_es_1396_ = lean_array_fget(v_source_1392_, v_i_1391_);
v___x_1397_ = lean_box(0);
v_source_1398_ = lean_array_fset(v_source_1392_, v_i_1391_, v___x_1397_);
v_target_1399_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24_spec__35_spec__44___redArg(v_target_1393_, v_es_1396_);
v___x_1400_ = lean_unsigned_to_nat(1u);
v___x_1401_ = lean_nat_add(v_i_1391_, v___x_1400_);
lean_dec(v_i_1391_);
v_i_1391_ = v___x_1401_;
v_source_1392_ = v_source_1398_;
v_target_1393_ = v_target_1399_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24___redArg(lean_object* v_data_1403_){
_start:
{
lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v_nbuckets_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; 
v___x_1404_ = lean_array_get_size(v_data_1403_);
v___x_1405_ = lean_unsigned_to_nat(2u);
v_nbuckets_1406_ = lean_nat_mul(v___x_1404_, v___x_1405_);
v___x_1407_ = lean_unsigned_to_nat(0u);
v___x_1408_ = lean_box(0);
v___x_1409_ = lean_mk_array(v_nbuckets_1406_, v___x_1408_);
v___x_1410_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24_spec__35___redArg(v___x_1407_, v_data_1403_, v___x_1409_);
return v___x_1410_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__25___redArg(lean_object* v_a_1411_, lean_object* v_b_1412_, lean_object* v_x_1413_){
_start:
{
if (lean_obj_tag(v_x_1413_) == 0)
{
lean_dec(v_b_1412_);
lean_dec_ref(v_a_1411_);
return v_x_1413_;
}
else
{
lean_object* v_key_1414_; lean_object* v_value_1415_; lean_object* v_tail_1416_; lean_object* v___x_1418_; uint8_t v_isShared_1419_; uint8_t v_isSharedCheck_1435_; 
v_key_1414_ = lean_ctor_get(v_x_1413_, 0);
v_value_1415_ = lean_ctor_get(v_x_1413_, 1);
v_tail_1416_ = lean_ctor_get(v_x_1413_, 2);
v_isSharedCheck_1435_ = !lean_is_exclusive(v_x_1413_);
if (v_isSharedCheck_1435_ == 0)
{
v___x_1418_ = v_x_1413_;
v_isShared_1419_ = v_isSharedCheck_1435_;
goto v_resetjp_1417_;
}
else
{
lean_inc(v_tail_1416_);
lean_inc(v_value_1415_);
lean_inc(v_key_1414_);
lean_dec(v_x_1413_);
v___x_1418_ = lean_box(0);
v_isShared_1419_ = v_isSharedCheck_1435_;
goto v_resetjp_1417_;
}
v_resetjp_1417_:
{
uint8_t v___y_1421_; lean_object* v_fst_1429_; lean_object* v_snd_1430_; lean_object* v_fst_1431_; lean_object* v_snd_1432_; uint8_t v___x_1433_; 
v_fst_1429_ = lean_ctor_get(v_key_1414_, 0);
v_snd_1430_ = lean_ctor_get(v_key_1414_, 1);
v_fst_1431_ = lean_ctor_get(v_a_1411_, 0);
v_snd_1432_ = lean_ctor_get(v_a_1411_, 1);
v___x_1433_ = lean_nat_dec_eq(v_fst_1429_, v_fst_1431_);
if (v___x_1433_ == 0)
{
v___y_1421_ = v___x_1433_;
goto v___jp_1420_;
}
else
{
uint8_t v___x_1434_; 
v___x_1434_ = lean_nat_dec_eq(v_snd_1430_, v_snd_1432_);
v___y_1421_ = v___x_1434_;
goto v___jp_1420_;
}
v___jp_1420_:
{
if (v___y_1421_ == 0)
{
lean_object* v___x_1422_; lean_object* v___x_1424_; 
v___x_1422_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__25___redArg(v_a_1411_, v_b_1412_, v_tail_1416_);
if (v_isShared_1419_ == 0)
{
lean_ctor_set(v___x_1418_, 2, v___x_1422_);
v___x_1424_ = v___x_1418_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v_key_1414_);
lean_ctor_set(v_reuseFailAlloc_1425_, 1, v_value_1415_);
lean_ctor_set(v_reuseFailAlloc_1425_, 2, v___x_1422_);
v___x_1424_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
return v___x_1424_;
}
}
else
{
lean_object* v___x_1427_; 
lean_dec(v_value_1415_);
lean_dec(v_key_1414_);
if (v_isShared_1419_ == 0)
{
lean_ctor_set(v___x_1418_, 1, v_b_1412_);
lean_ctor_set(v___x_1418_, 0, v_a_1411_);
v___x_1427_ = v___x_1418_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v_a_1411_);
lean_ctor_set(v_reuseFailAlloc_1428_, 1, v_b_1412_);
lean_ctor_set(v_reuseFailAlloc_1428_, 2, v_tail_1416_);
v___x_1427_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
return v___x_1427_;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__23___redArg(lean_object* v_a_1436_, lean_object* v_x_1437_){
_start:
{
if (lean_obj_tag(v_x_1437_) == 0)
{
uint8_t v___x_1438_; 
v___x_1438_ = 0;
return v___x_1438_;
}
else
{
lean_object* v_key_1439_; lean_object* v_tail_1440_; uint8_t v___y_1442_; lean_object* v_fst_1444_; lean_object* v_snd_1445_; lean_object* v_fst_1446_; lean_object* v_snd_1447_; uint8_t v___x_1448_; 
v_key_1439_ = lean_ctor_get(v_x_1437_, 0);
v_tail_1440_ = lean_ctor_get(v_x_1437_, 2);
v_fst_1444_ = lean_ctor_get(v_key_1439_, 0);
v_snd_1445_ = lean_ctor_get(v_key_1439_, 1);
v_fst_1446_ = lean_ctor_get(v_a_1436_, 0);
v_snd_1447_ = lean_ctor_get(v_a_1436_, 1);
v___x_1448_ = lean_nat_dec_eq(v_fst_1444_, v_fst_1446_);
if (v___x_1448_ == 0)
{
v___y_1442_ = v___x_1448_;
goto v___jp_1441_;
}
else
{
uint8_t v___x_1449_; 
v___x_1449_ = lean_nat_dec_eq(v_snd_1445_, v_snd_1447_);
v___y_1442_ = v___x_1449_;
goto v___jp_1441_;
}
v___jp_1441_:
{
if (v___y_1442_ == 0)
{
v_x_1437_ = v_tail_1440_;
goto _start;
}
else
{
return v___y_1442_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__23___redArg___boxed(lean_object* v_a_1450_, lean_object* v_x_1451_){
_start:
{
uint8_t v_res_1452_; lean_object* v_r_1453_; 
v_res_1452_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__23___redArg(v_a_1450_, v_x_1451_);
lean_dec(v_x_1451_);
lean_dec_ref(v_a_1450_);
v_r_1453_ = lean_box(v_res_1452_);
return v_r_1453_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18___redArg(lean_object* v_m_1454_, lean_object* v_a_1455_, lean_object* v_b_1456_){
_start:
{
lean_object* v_size_1457_; lean_object* v_buckets_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1505_; 
v_size_1457_ = lean_ctor_get(v_m_1454_, 0);
v_buckets_1458_ = lean_ctor_get(v_m_1454_, 1);
v_isSharedCheck_1505_ = !lean_is_exclusive(v_m_1454_);
if (v_isSharedCheck_1505_ == 0)
{
v___x_1460_ = v_m_1454_;
v_isShared_1461_ = v_isSharedCheck_1505_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_buckets_1458_);
lean_inc(v_size_1457_);
lean_dec(v_m_1454_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1505_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
lean_object* v_fst_1462_; lean_object* v_snd_1463_; lean_object* v___x_1464_; uint64_t v___x_1465_; uint64_t v___x_1466_; uint64_t v___x_1467_; uint64_t v___x_1468_; uint64_t v___x_1469_; uint64_t v_fold_1470_; uint64_t v___x_1471_; uint64_t v___x_1472_; uint64_t v___x_1473_; size_t v___x_1474_; size_t v___x_1475_; size_t v___x_1476_; size_t v___x_1477_; size_t v___x_1478_; lean_object* v_bkt_1479_; uint8_t v___x_1480_; 
v_fst_1462_ = lean_ctor_get(v_a_1455_, 0);
v_snd_1463_ = lean_ctor_get(v_a_1455_, 1);
v___x_1464_ = lean_array_get_size(v_buckets_1458_);
v___x_1465_ = l_String_instHashableRaw_hash(v_fst_1462_);
v___x_1466_ = l_String_instHashableRaw_hash(v_snd_1463_);
v___x_1467_ = lean_uint64_mix_hash(v___x_1465_, v___x_1466_);
v___x_1468_ = 32ULL;
v___x_1469_ = lean_uint64_shift_right(v___x_1467_, v___x_1468_);
v_fold_1470_ = lean_uint64_xor(v___x_1467_, v___x_1469_);
v___x_1471_ = 16ULL;
v___x_1472_ = lean_uint64_shift_right(v_fold_1470_, v___x_1471_);
v___x_1473_ = lean_uint64_xor(v_fold_1470_, v___x_1472_);
v___x_1474_ = lean_uint64_to_usize(v___x_1473_);
v___x_1475_ = lean_usize_of_nat(v___x_1464_);
v___x_1476_ = ((size_t)1ULL);
v___x_1477_ = lean_usize_sub(v___x_1475_, v___x_1476_);
v___x_1478_ = lean_usize_land(v___x_1474_, v___x_1477_);
v_bkt_1479_ = lean_array_uget_borrowed(v_buckets_1458_, v___x_1478_);
v___x_1480_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__23___redArg(v_a_1455_, v_bkt_1479_);
if (v___x_1480_ == 0)
{
lean_object* v___x_1481_; lean_object* v_size_x27_1482_; lean_object* v___x_1483_; lean_object* v_buckets_x27_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; uint8_t v___x_1490_; 
v___x_1481_ = lean_unsigned_to_nat(1u);
v_size_x27_1482_ = lean_nat_add(v_size_1457_, v___x_1481_);
lean_dec(v_size_1457_);
lean_inc(v_bkt_1479_);
v___x_1483_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1483_, 0, v_a_1455_);
lean_ctor_set(v___x_1483_, 1, v_b_1456_);
lean_ctor_set(v___x_1483_, 2, v_bkt_1479_);
v_buckets_x27_1484_ = lean_array_uset(v_buckets_1458_, v___x_1478_, v___x_1483_);
v___x_1485_ = lean_unsigned_to_nat(4u);
v___x_1486_ = lean_nat_mul(v_size_x27_1482_, v___x_1485_);
v___x_1487_ = lean_unsigned_to_nat(3u);
v___x_1488_ = lean_nat_div(v___x_1486_, v___x_1487_);
lean_dec(v___x_1486_);
v___x_1489_ = lean_array_get_size(v_buckets_x27_1484_);
v___x_1490_ = lean_nat_dec_le(v___x_1488_, v___x_1489_);
lean_dec(v___x_1488_);
if (v___x_1490_ == 0)
{
lean_object* v_val_1491_; lean_object* v___x_1493_; 
v_val_1491_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24___redArg(v_buckets_x27_1484_);
if (v_isShared_1461_ == 0)
{
lean_ctor_set(v___x_1460_, 1, v_val_1491_);
lean_ctor_set(v___x_1460_, 0, v_size_x27_1482_);
v___x_1493_ = v___x_1460_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v_size_x27_1482_);
lean_ctor_set(v_reuseFailAlloc_1494_, 1, v_val_1491_);
v___x_1493_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
return v___x_1493_;
}
}
else
{
lean_object* v___x_1496_; 
if (v_isShared_1461_ == 0)
{
lean_ctor_set(v___x_1460_, 1, v_buckets_x27_1484_);
lean_ctor_set(v___x_1460_, 0, v_size_x27_1482_);
v___x_1496_ = v___x_1460_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v_size_x27_1482_);
lean_ctor_set(v_reuseFailAlloc_1497_, 1, v_buckets_x27_1484_);
v___x_1496_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
return v___x_1496_;
}
}
}
else
{
lean_object* v___x_1498_; lean_object* v_buckets_x27_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1503_; 
lean_inc(v_bkt_1479_);
v___x_1498_ = lean_box(0);
v_buckets_x27_1499_ = lean_array_uset(v_buckets_1458_, v___x_1478_, v___x_1498_);
v___x_1500_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__25___redArg(v_a_1455_, v_b_1456_, v_bkt_1479_);
v___x_1501_ = lean_array_uset(v_buckets_x27_1499_, v___x_1478_, v___x_1500_);
if (v_isShared_1461_ == 0)
{
lean_ctor_set(v___x_1460_, 1, v___x_1501_);
v___x_1503_ = v___x_1460_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v_size_1457_);
lean_ctor_set(v_reuseFailAlloc_1504_, 1, v___x_1501_);
v___x_1503_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
return v___x_1503_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg(uint8_t v___x_1508_, lean_object* v_as_1509_, size_t v_sz_1510_, size_t v_i_1511_, lean_object* v_b_1512_, lean_object* v___y_1513_){
_start:
{
uint8_t v___x_1515_; 
v___x_1515_ = lean_usize_dec_lt(v_i_1511_, v_sz_1510_);
if (v___x_1515_ == 0)
{
lean_object* v___x_1516_; 
v___x_1516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1516_, 0, v_b_1512_);
return v___x_1516_;
}
else
{
lean_object* v_snd_1517_; lean_object* v___x_1519_; uint8_t v_isShared_1520_; uint8_t v_isSharedCheck_1554_; 
v_snd_1517_ = lean_ctor_get(v_b_1512_, 1);
v_isSharedCheck_1554_ = !lean_is_exclusive(v_b_1512_);
if (v_isSharedCheck_1554_ == 0)
{
lean_object* v_unused_1555_; 
v_unused_1555_ = lean_ctor_get(v_b_1512_, 0);
lean_dec(v_unused_1555_);
v___x_1519_ = v_b_1512_;
v_isShared_1520_ = v_isSharedCheck_1554_;
goto v_resetjp_1518_;
}
else
{
lean_inc(v_snd_1517_);
lean_dec(v_b_1512_);
v___x_1519_ = lean_box(0);
v_isShared_1520_ = v_isSharedCheck_1554_;
goto v_resetjp_1518_;
}
v_resetjp_1518_:
{
lean_object* v_ref_1521_; lean_object* v_a_1522_; lean_object* v_ref_1523_; lean_object* v_msg_1524_; lean_object* v___x_1526_; uint8_t v_isShared_1527_; uint8_t v_isSharedCheck_1553_; 
v_ref_1521_ = lean_ctor_get(v___y_1513_, 5);
v_a_1522_ = lean_array_uget(v_as_1509_, v_i_1511_);
v_ref_1523_ = lean_ctor_get(v_a_1522_, 0);
v_msg_1524_ = lean_ctor_get(v_a_1522_, 1);
v_isSharedCheck_1553_ = !lean_is_exclusive(v_a_1522_);
if (v_isSharedCheck_1553_ == 0)
{
v___x_1526_ = v_a_1522_;
v_isShared_1527_ = v_isSharedCheck_1553_;
goto v_resetjp_1525_;
}
else
{
lean_inc(v_msg_1524_);
lean_inc(v_ref_1523_);
lean_dec(v_a_1522_);
v___x_1526_ = lean_box(0);
v_isShared_1527_ = v_isSharedCheck_1553_;
goto v_resetjp_1525_;
}
v_resetjp_1525_:
{
lean_object* v___x_1528_; lean_object* v___y_1530_; lean_object* v___y_1531_; lean_object* v_ref_1545_; lean_object* v___y_1547_; lean_object* v___x_1550_; 
v___x_1528_ = lean_box(0);
v_ref_1545_ = l_Lean_replaceRef(v_ref_1523_, v_ref_1521_);
lean_dec(v_ref_1523_);
v___x_1550_ = l_Lean_Syntax_getPos_x3f(v_ref_1545_, v___x_1508_);
if (lean_obj_tag(v___x_1550_) == 0)
{
lean_object* v___x_1551_; 
v___x_1551_ = lean_unsigned_to_nat(0u);
v___y_1547_ = v___x_1551_;
goto v___jp_1546_;
}
else
{
lean_object* v_val_1552_; 
v_val_1552_ = lean_ctor_get(v___x_1550_, 0);
lean_inc(v_val_1552_);
lean_dec_ref_known(v___x_1550_, 1);
v___y_1547_ = v_val_1552_;
goto v___jp_1546_;
}
v___jp_1529_:
{
lean_object* v___x_1533_; 
if (v_isShared_1520_ == 0)
{
lean_ctor_set(v___x_1519_, 1, v___y_1531_);
lean_ctor_set(v___x_1519_, 0, v___y_1530_);
v___x_1533_ = v___x_1519_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v___y_1530_);
lean_ctor_set(v_reuseFailAlloc_1544_, 1, v___y_1531_);
v___x_1533_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v_pos2traces_1537_; lean_object* v___x_1539_; 
v___x_1534_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg___closed__0));
v___x_1535_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17___redArg(v_snd_1517_, v___x_1533_, v___x_1534_);
v___x_1536_ = lean_array_push(v___x_1535_, v_msg_1524_);
v_pos2traces_1537_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18___redArg(v_snd_1517_, v___x_1533_, v___x_1536_);
if (v_isShared_1527_ == 0)
{
lean_ctor_set(v___x_1526_, 1, v_pos2traces_1537_);
lean_ctor_set(v___x_1526_, 0, v___x_1528_);
v___x_1539_ = v___x_1526_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v___x_1528_);
lean_ctor_set(v_reuseFailAlloc_1543_, 1, v_pos2traces_1537_);
v___x_1539_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
size_t v___x_1540_; size_t v___x_1541_; 
v___x_1540_ = ((size_t)1ULL);
v___x_1541_ = lean_usize_add(v_i_1511_, v___x_1540_);
v_i_1511_ = v___x_1541_;
v_b_1512_ = v___x_1539_;
goto _start;
}
}
}
v___jp_1546_:
{
lean_object* v___x_1548_; 
v___x_1548_ = l_Lean_Syntax_getTailPos_x3f(v_ref_1545_, v___x_1508_);
lean_dec(v_ref_1545_);
if (lean_obj_tag(v___x_1548_) == 0)
{
lean_inc(v___y_1547_);
v___y_1530_ = v___y_1547_;
v___y_1531_ = v___y_1547_;
goto v___jp_1529_;
}
else
{
lean_object* v_val_1549_; 
v_val_1549_ = lean_ctor_get(v___x_1548_, 0);
lean_inc(v_val_1549_);
lean_dec_ref_known(v___x_1548_, 1);
v___y_1530_ = v___y_1547_;
v___y_1531_ = v_val_1549_;
goto v___jp_1529_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg___boxed(lean_object* v___x_1556_, lean_object* v_as_1557_, lean_object* v_sz_1558_, lean_object* v_i_1559_, lean_object* v_b_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_){
_start:
{
uint8_t v___x_37200__boxed_1563_; size_t v_sz_boxed_1564_; size_t v_i_boxed_1565_; lean_object* v_res_1566_; 
v___x_37200__boxed_1563_ = lean_unbox(v___x_1556_);
v_sz_boxed_1564_ = lean_unbox_usize(v_sz_1558_);
lean_dec(v_sz_1558_);
v_i_boxed_1565_ = lean_unbox_usize(v_i_1559_);
lean_dec(v_i_1559_);
v_res_1566_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg(v___x_37200__boxed_1563_, v_as_1557_, v_sz_boxed_1564_, v_i_boxed_1565_, v_b_1560_, v___y_1561_);
lean_dec_ref(v___y_1561_);
lean_dec_ref(v_as_1557_);
return v_res_1566_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40(uint8_t v___x_1567_, lean_object* v_as_1568_, size_t v_sz_1569_, size_t v_i_1570_, lean_object* v_b_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_){
_start:
{
uint8_t v___x_1575_; 
v___x_1575_ = lean_usize_dec_lt(v_i_1570_, v_sz_1569_);
if (v___x_1575_ == 0)
{
lean_object* v___x_1576_; 
v___x_1576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1576_, 0, v_b_1571_);
return v___x_1576_;
}
else
{
lean_object* v_snd_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1614_; 
v_snd_1577_ = lean_ctor_get(v_b_1571_, 1);
v_isSharedCheck_1614_ = !lean_is_exclusive(v_b_1571_);
if (v_isSharedCheck_1614_ == 0)
{
lean_object* v_unused_1615_; 
v_unused_1615_ = lean_ctor_get(v_b_1571_, 0);
lean_dec(v_unused_1615_);
v___x_1579_ = v_b_1571_;
v_isShared_1580_ = v_isSharedCheck_1614_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_snd_1577_);
lean_dec(v_b_1571_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1614_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
lean_object* v_ref_1581_; lean_object* v_a_1582_; lean_object* v_ref_1583_; lean_object* v_msg_1584_; lean_object* v___x_1586_; uint8_t v_isShared_1587_; uint8_t v_isSharedCheck_1613_; 
v_ref_1581_ = lean_ctor_get(v___y_1572_, 5);
v_a_1582_ = lean_array_uget(v_as_1568_, v_i_1570_);
v_ref_1583_ = lean_ctor_get(v_a_1582_, 0);
v_msg_1584_ = lean_ctor_get(v_a_1582_, 1);
v_isSharedCheck_1613_ = !lean_is_exclusive(v_a_1582_);
if (v_isSharedCheck_1613_ == 0)
{
v___x_1586_ = v_a_1582_;
v_isShared_1587_ = v_isSharedCheck_1613_;
goto v_resetjp_1585_;
}
else
{
lean_inc(v_msg_1584_);
lean_inc(v_ref_1583_);
lean_dec(v_a_1582_);
v___x_1586_ = lean_box(0);
v_isShared_1587_ = v_isSharedCheck_1613_;
goto v_resetjp_1585_;
}
v_resetjp_1585_:
{
lean_object* v___x_1588_; lean_object* v___y_1590_; lean_object* v___y_1591_; lean_object* v_ref_1605_; lean_object* v___y_1607_; lean_object* v___x_1610_; 
v___x_1588_ = lean_box(0);
v_ref_1605_ = l_Lean_replaceRef(v_ref_1583_, v_ref_1581_);
lean_dec(v_ref_1583_);
v___x_1610_ = l_Lean_Syntax_getPos_x3f(v_ref_1605_, v___x_1567_);
if (lean_obj_tag(v___x_1610_) == 0)
{
lean_object* v___x_1611_; 
v___x_1611_ = lean_unsigned_to_nat(0u);
v___y_1607_ = v___x_1611_;
goto v___jp_1606_;
}
else
{
lean_object* v_val_1612_; 
v_val_1612_ = lean_ctor_get(v___x_1610_, 0);
lean_inc(v_val_1612_);
lean_dec_ref_known(v___x_1610_, 1);
v___y_1607_ = v_val_1612_;
goto v___jp_1606_;
}
v___jp_1589_:
{
lean_object* v___x_1593_; 
if (v_isShared_1580_ == 0)
{
lean_ctor_set(v___x_1579_, 1, v___y_1591_);
lean_ctor_set(v___x_1579_, 0, v___y_1590_);
v___x_1593_ = v___x_1579_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v___y_1590_);
lean_ctor_set(v_reuseFailAlloc_1604_, 1, v___y_1591_);
v___x_1593_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v_pos2traces_1597_; lean_object* v___x_1599_; 
v___x_1594_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg___closed__0));
v___x_1595_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17___redArg(v_snd_1577_, v___x_1593_, v___x_1594_);
v___x_1596_ = lean_array_push(v___x_1595_, v_msg_1584_);
v_pos2traces_1597_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18___redArg(v_snd_1577_, v___x_1593_, v___x_1596_);
if (v_isShared_1587_ == 0)
{
lean_ctor_set(v___x_1586_, 1, v_pos2traces_1597_);
lean_ctor_set(v___x_1586_, 0, v___x_1588_);
v___x_1599_ = v___x_1586_;
goto v_reusejp_1598_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1603_, 0, v___x_1588_);
lean_ctor_set(v_reuseFailAlloc_1603_, 1, v_pos2traces_1597_);
v___x_1599_ = v_reuseFailAlloc_1603_;
goto v_reusejp_1598_;
}
v_reusejp_1598_:
{
size_t v___x_1600_; size_t v___x_1601_; lean_object* v___x_1602_; 
v___x_1600_ = ((size_t)1ULL);
v___x_1601_ = lean_usize_add(v_i_1570_, v___x_1600_);
v___x_1602_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg(v___x_1567_, v_as_1568_, v_sz_1569_, v___x_1601_, v___x_1599_, v___y_1572_);
return v___x_1602_;
}
}
}
v___jp_1606_:
{
lean_object* v___x_1608_; 
v___x_1608_ = l_Lean_Syntax_getTailPos_x3f(v_ref_1605_, v___x_1567_);
lean_dec(v_ref_1605_);
if (lean_obj_tag(v___x_1608_) == 0)
{
lean_inc(v___y_1607_);
v___y_1590_ = v___y_1607_;
v___y_1591_ = v___y_1607_;
goto v___jp_1589_;
}
else
{
lean_object* v_val_1609_; 
v_val_1609_ = lean_ctor_get(v___x_1608_, 0);
lean_inc(v_val_1609_);
lean_dec_ref_known(v___x_1608_, 1);
v___y_1590_ = v___y_1607_;
v___y_1591_ = v_val_1609_;
goto v___jp_1589_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40___boxed(lean_object* v___x_1616_, lean_object* v_as_1617_, lean_object* v_sz_1618_, lean_object* v_i_1619_, lean_object* v_b_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_){
_start:
{
uint8_t v___x_37281__boxed_1624_; size_t v_sz_boxed_1625_; size_t v_i_boxed_1626_; lean_object* v_res_1627_; 
v___x_37281__boxed_1624_ = lean_unbox(v___x_1616_);
v_sz_boxed_1625_ = lean_unbox_usize(v_sz_1618_);
lean_dec(v_sz_1618_);
v_i_boxed_1626_ = lean_unbox_usize(v_i_1619_);
lean_dec(v_i_1619_);
v_res_1627_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40(v___x_37281__boxed_1624_, v_as_1617_, v_sz_boxed_1625_, v_i_boxed_1626_, v_b_1620_, v___y_1621_, v___y_1622_);
lean_dec(v___y_1622_);
lean_dec_ref(v___y_1621_);
lean_dec_ref(v_as_1617_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27(lean_object* v_init_1628_, uint8_t v___x_1629_, lean_object* v_n_1630_, lean_object* v_b_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_){
_start:
{
if (lean_obj_tag(v_n_1630_) == 0)
{
lean_object* v_cs_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; size_t v_sz_1638_; size_t v___x_1639_; lean_object* v___x_1640_; 
v_cs_1635_ = lean_ctor_get(v_n_1630_, 0);
v___x_1636_ = lean_box(0);
v___x_1637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1637_, 0, v___x_1636_);
lean_ctor_set(v___x_1637_, 1, v_b_1631_);
v_sz_1638_ = lean_array_size(v_cs_1635_);
v___x_1639_ = ((size_t)0ULL);
v___x_1640_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__39(v_init_1628_, v___x_1629_, v_cs_1635_, v_sz_1638_, v___x_1639_, v___x_1637_, v___y_1632_, v___y_1633_);
if (lean_obj_tag(v___x_1640_) == 0)
{
lean_object* v_a_1641_; lean_object* v___x_1643_; uint8_t v_isShared_1644_; uint8_t v_isSharedCheck_1655_; 
v_a_1641_ = lean_ctor_get(v___x_1640_, 0);
v_isSharedCheck_1655_ = !lean_is_exclusive(v___x_1640_);
if (v_isSharedCheck_1655_ == 0)
{
v___x_1643_ = v___x_1640_;
v_isShared_1644_ = v_isSharedCheck_1655_;
goto v_resetjp_1642_;
}
else
{
lean_inc(v_a_1641_);
lean_dec(v___x_1640_);
v___x_1643_ = lean_box(0);
v_isShared_1644_ = v_isSharedCheck_1655_;
goto v_resetjp_1642_;
}
v_resetjp_1642_:
{
lean_object* v_fst_1645_; 
v_fst_1645_ = lean_ctor_get(v_a_1641_, 0);
if (lean_obj_tag(v_fst_1645_) == 0)
{
lean_object* v_snd_1646_; lean_object* v___x_1647_; lean_object* v___x_1649_; 
v_snd_1646_ = lean_ctor_get(v_a_1641_, 1);
lean_inc(v_snd_1646_);
lean_dec(v_a_1641_);
v___x_1647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1647_, 0, v_snd_1646_);
if (v_isShared_1644_ == 0)
{
lean_ctor_set(v___x_1643_, 0, v___x_1647_);
v___x_1649_ = v___x_1643_;
goto v_reusejp_1648_;
}
else
{
lean_object* v_reuseFailAlloc_1650_; 
v_reuseFailAlloc_1650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1650_, 0, v___x_1647_);
v___x_1649_ = v_reuseFailAlloc_1650_;
goto v_reusejp_1648_;
}
v_reusejp_1648_:
{
return v___x_1649_;
}
}
else
{
lean_object* v_val_1651_; lean_object* v___x_1653_; 
lean_inc_ref(v_fst_1645_);
lean_dec(v_a_1641_);
v_val_1651_ = lean_ctor_get(v_fst_1645_, 0);
lean_inc(v_val_1651_);
lean_dec_ref_known(v_fst_1645_, 1);
if (v_isShared_1644_ == 0)
{
lean_ctor_set(v___x_1643_, 0, v_val_1651_);
v___x_1653_ = v___x_1643_;
goto v_reusejp_1652_;
}
else
{
lean_object* v_reuseFailAlloc_1654_; 
v_reuseFailAlloc_1654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1654_, 0, v_val_1651_);
v___x_1653_ = v_reuseFailAlloc_1654_;
goto v_reusejp_1652_;
}
v_reusejp_1652_:
{
return v___x_1653_;
}
}
}
}
else
{
lean_object* v_a_1656_; lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1663_; 
v_a_1656_ = lean_ctor_get(v___x_1640_, 0);
v_isSharedCheck_1663_ = !lean_is_exclusive(v___x_1640_);
if (v_isSharedCheck_1663_ == 0)
{
v___x_1658_ = v___x_1640_;
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
else
{
lean_inc(v_a_1656_);
lean_dec(v___x_1640_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
lean_object* v___x_1661_; 
if (v_isShared_1659_ == 0)
{
v___x_1661_ = v___x_1658_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v_a_1656_);
v___x_1661_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
return v___x_1661_;
}
}
}
}
else
{
lean_object* v_vs_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; size_t v_sz_1667_; size_t v___x_1668_; lean_object* v___x_1669_; 
v_vs_1664_ = lean_ctor_get(v_n_1630_, 0);
v___x_1665_ = lean_box(0);
v___x_1666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1666_, 0, v___x_1665_);
lean_ctor_set(v___x_1666_, 1, v_b_1631_);
v_sz_1667_ = lean_array_size(v_vs_1664_);
v___x_1668_ = ((size_t)0ULL);
v___x_1669_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40(v___x_1629_, v_vs_1664_, v_sz_1667_, v___x_1668_, v___x_1666_, v___y_1632_, v___y_1633_);
if (lean_obj_tag(v___x_1669_) == 0)
{
lean_object* v_a_1670_; lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_1684_; 
v_a_1670_ = lean_ctor_get(v___x_1669_, 0);
v_isSharedCheck_1684_ = !lean_is_exclusive(v___x_1669_);
if (v_isSharedCheck_1684_ == 0)
{
v___x_1672_ = v___x_1669_;
v_isShared_1673_ = v_isSharedCheck_1684_;
goto v_resetjp_1671_;
}
else
{
lean_inc(v_a_1670_);
lean_dec(v___x_1669_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_1684_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
lean_object* v_fst_1674_; 
v_fst_1674_ = lean_ctor_get(v_a_1670_, 0);
if (lean_obj_tag(v_fst_1674_) == 0)
{
lean_object* v_snd_1675_; lean_object* v___x_1676_; lean_object* v___x_1678_; 
v_snd_1675_ = lean_ctor_get(v_a_1670_, 1);
lean_inc(v_snd_1675_);
lean_dec(v_a_1670_);
v___x_1676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1676_, 0, v_snd_1675_);
if (v_isShared_1673_ == 0)
{
lean_ctor_set(v___x_1672_, 0, v___x_1676_);
v___x_1678_ = v___x_1672_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1679_; 
v_reuseFailAlloc_1679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1679_, 0, v___x_1676_);
v___x_1678_ = v_reuseFailAlloc_1679_;
goto v_reusejp_1677_;
}
v_reusejp_1677_:
{
return v___x_1678_;
}
}
else
{
lean_object* v_val_1680_; lean_object* v___x_1682_; 
lean_inc_ref(v_fst_1674_);
lean_dec(v_a_1670_);
v_val_1680_ = lean_ctor_get(v_fst_1674_, 0);
lean_inc(v_val_1680_);
lean_dec_ref_known(v_fst_1674_, 1);
if (v_isShared_1673_ == 0)
{
lean_ctor_set(v___x_1672_, 0, v_val_1680_);
v___x_1682_ = v___x_1672_;
goto v_reusejp_1681_;
}
else
{
lean_object* v_reuseFailAlloc_1683_; 
v_reuseFailAlloc_1683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1683_, 0, v_val_1680_);
v___x_1682_ = v_reuseFailAlloc_1683_;
goto v_reusejp_1681_;
}
v_reusejp_1681_:
{
return v___x_1682_;
}
}
}
}
else
{
lean_object* v_a_1685_; lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1692_; 
v_a_1685_ = lean_ctor_get(v___x_1669_, 0);
v_isSharedCheck_1692_ = !lean_is_exclusive(v___x_1669_);
if (v_isSharedCheck_1692_ == 0)
{
v___x_1687_ = v___x_1669_;
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
else
{
lean_inc(v_a_1685_);
lean_dec(v___x_1669_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
lean_object* v___x_1690_; 
if (v_isShared_1688_ == 0)
{
v___x_1690_ = v___x_1687_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v_a_1685_);
v___x_1690_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
return v___x_1690_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__39(lean_object* v_init_1693_, uint8_t v___x_1694_, lean_object* v_as_1695_, size_t v_sz_1696_, size_t v_i_1697_, lean_object* v_b_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_){
_start:
{
uint8_t v___x_1702_; 
v___x_1702_ = lean_usize_dec_lt(v_i_1697_, v_sz_1696_);
if (v___x_1702_ == 0)
{
lean_object* v___x_1703_; 
v___x_1703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1703_, 0, v_b_1698_);
return v___x_1703_;
}
else
{
lean_object* v_snd_1704_; lean_object* v___x_1706_; uint8_t v_isShared_1707_; uint8_t v_isSharedCheck_1738_; 
v_snd_1704_ = lean_ctor_get(v_b_1698_, 1);
v_isSharedCheck_1738_ = !lean_is_exclusive(v_b_1698_);
if (v_isSharedCheck_1738_ == 0)
{
lean_object* v_unused_1739_; 
v_unused_1739_ = lean_ctor_get(v_b_1698_, 0);
lean_dec(v_unused_1739_);
v___x_1706_ = v_b_1698_;
v_isShared_1707_ = v_isSharedCheck_1738_;
goto v_resetjp_1705_;
}
else
{
lean_inc(v_snd_1704_);
lean_dec(v_b_1698_);
v___x_1706_ = lean_box(0);
v_isShared_1707_ = v_isSharedCheck_1738_;
goto v_resetjp_1705_;
}
v_resetjp_1705_:
{
lean_object* v_a_1708_; lean_object* v___x_1709_; 
v_a_1708_ = lean_array_uget_borrowed(v_as_1695_, v_i_1697_);
lean_inc(v_snd_1704_);
v___x_1709_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27(v_init_1693_, v___x_1694_, v_a_1708_, v_snd_1704_, v___y_1699_, v___y_1700_);
if (lean_obj_tag(v___x_1709_) == 0)
{
lean_object* v_a_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1729_; 
v_a_1710_ = lean_ctor_get(v___x_1709_, 0);
v_isSharedCheck_1729_ = !lean_is_exclusive(v___x_1709_);
if (v_isSharedCheck_1729_ == 0)
{
v___x_1712_ = v___x_1709_;
v_isShared_1713_ = v_isSharedCheck_1729_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_a_1710_);
lean_dec(v___x_1709_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1729_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
if (lean_obj_tag(v_a_1710_) == 0)
{
lean_object* v___x_1714_; lean_object* v___x_1716_; 
v___x_1714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1714_, 0, v_a_1710_);
if (v_isShared_1707_ == 0)
{
lean_ctor_set(v___x_1706_, 0, v___x_1714_);
v___x_1716_ = v___x_1706_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v___x_1714_);
lean_ctor_set(v_reuseFailAlloc_1720_, 1, v_snd_1704_);
v___x_1716_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
lean_object* v___x_1718_; 
if (v_isShared_1713_ == 0)
{
lean_ctor_set(v___x_1712_, 0, v___x_1716_);
v___x_1718_ = v___x_1712_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v___x_1716_);
v___x_1718_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
return v___x_1718_;
}
}
}
else
{
lean_object* v_a_1721_; lean_object* v___x_1722_; lean_object* v___x_1724_; 
lean_del_object(v___x_1712_);
lean_dec(v_snd_1704_);
v_a_1721_ = lean_ctor_get(v_a_1710_, 0);
lean_inc(v_a_1721_);
lean_dec_ref_known(v_a_1710_, 1);
v___x_1722_ = lean_box(0);
if (v_isShared_1707_ == 0)
{
lean_ctor_set(v___x_1706_, 1, v_a_1721_);
lean_ctor_set(v___x_1706_, 0, v___x_1722_);
v___x_1724_ = v___x_1706_;
goto v_reusejp_1723_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v___x_1722_);
lean_ctor_set(v_reuseFailAlloc_1728_, 1, v_a_1721_);
v___x_1724_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1723_;
}
v_reusejp_1723_:
{
size_t v___x_1725_; size_t v___x_1726_; 
v___x_1725_ = ((size_t)1ULL);
v___x_1726_ = lean_usize_add(v_i_1697_, v___x_1725_);
v_i_1697_ = v___x_1726_;
v_b_1698_ = v___x_1724_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1730_; lean_object* v___x_1732_; uint8_t v_isShared_1733_; uint8_t v_isSharedCheck_1737_; 
lean_del_object(v___x_1706_);
lean_dec(v_snd_1704_);
v_a_1730_ = lean_ctor_get(v___x_1709_, 0);
v_isSharedCheck_1737_ = !lean_is_exclusive(v___x_1709_);
if (v_isSharedCheck_1737_ == 0)
{
v___x_1732_ = v___x_1709_;
v_isShared_1733_ = v_isSharedCheck_1737_;
goto v_resetjp_1731_;
}
else
{
lean_inc(v_a_1730_);
lean_dec(v___x_1709_);
v___x_1732_ = lean_box(0);
v_isShared_1733_ = v_isSharedCheck_1737_;
goto v_resetjp_1731_;
}
v_resetjp_1731_:
{
lean_object* v___x_1735_; 
if (v_isShared_1733_ == 0)
{
v___x_1735_ = v___x_1732_;
goto v_reusejp_1734_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v_a_1730_);
v___x_1735_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1734_;
}
v_reusejp_1734_:
{
return v___x_1735_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__39___boxed(lean_object* v_init_1740_, lean_object* v___x_1741_, lean_object* v_as_1742_, lean_object* v_sz_1743_, lean_object* v_i_1744_, lean_object* v_b_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_){
_start:
{
uint8_t v___x_37362__boxed_1749_; size_t v_sz_boxed_1750_; size_t v_i_boxed_1751_; lean_object* v_res_1752_; 
v___x_37362__boxed_1749_ = lean_unbox(v___x_1741_);
v_sz_boxed_1750_ = lean_unbox_usize(v_sz_1743_);
lean_dec(v_sz_1743_);
v_i_boxed_1751_ = lean_unbox_usize(v_i_1744_);
lean_dec(v_i_1744_);
v_res_1752_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__39(v_init_1740_, v___x_37362__boxed_1749_, v_as_1742_, v_sz_boxed_1750_, v_i_boxed_1751_, v_b_1745_, v___y_1746_, v___y_1747_);
lean_dec(v___y_1747_);
lean_dec_ref(v___y_1746_);
lean_dec_ref(v_as_1742_);
lean_dec_ref(v_init_1740_);
return v_res_1752_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27___boxed(lean_object* v_init_1753_, lean_object* v___x_1754_, lean_object* v_n_1755_, lean_object* v_b_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_){
_start:
{
uint8_t v___x_37382__boxed_1760_; lean_object* v_res_1761_; 
v___x_37382__boxed_1760_ = lean_unbox(v___x_1754_);
v_res_1761_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27(v_init_1753_, v___x_37382__boxed_1760_, v_n_1755_, v_b_1756_, v___y_1757_, v___y_1758_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec_ref(v_n_1755_);
lean_dec_ref(v_init_1753_);
return v_res_1761_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28_spec__42___redArg(uint8_t v___x_1762_, lean_object* v_as_1763_, size_t v_sz_1764_, size_t v_i_1765_, lean_object* v_b_1766_, lean_object* v___y_1767_){
_start:
{
uint8_t v___x_1769_; 
v___x_1769_ = lean_usize_dec_lt(v_i_1765_, v_sz_1764_);
if (v___x_1769_ == 0)
{
lean_object* v___x_1770_; 
v___x_1770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1770_, 0, v_b_1766_);
return v___x_1770_;
}
else
{
lean_object* v_snd_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1808_; 
v_snd_1771_ = lean_ctor_get(v_b_1766_, 1);
v_isSharedCheck_1808_ = !lean_is_exclusive(v_b_1766_);
if (v_isSharedCheck_1808_ == 0)
{
lean_object* v_unused_1809_; 
v_unused_1809_ = lean_ctor_get(v_b_1766_, 0);
lean_dec(v_unused_1809_);
v___x_1773_ = v_b_1766_;
v_isShared_1774_ = v_isSharedCheck_1808_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_snd_1771_);
lean_dec(v_b_1766_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1808_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v_ref_1775_; lean_object* v_a_1776_; lean_object* v_ref_1777_; lean_object* v_msg_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1807_; 
v_ref_1775_ = lean_ctor_get(v___y_1767_, 5);
v_a_1776_ = lean_array_uget(v_as_1763_, v_i_1765_);
v_ref_1777_ = lean_ctor_get(v_a_1776_, 0);
v_msg_1778_ = lean_ctor_get(v_a_1776_, 1);
v_isSharedCheck_1807_ = !lean_is_exclusive(v_a_1776_);
if (v_isSharedCheck_1807_ == 0)
{
v___x_1780_ = v_a_1776_;
v_isShared_1781_ = v_isSharedCheck_1807_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_msg_1778_);
lean_inc(v_ref_1777_);
lean_dec(v_a_1776_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1807_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v___x_1782_; lean_object* v___y_1784_; lean_object* v___y_1785_; lean_object* v_ref_1799_; lean_object* v___y_1801_; lean_object* v___x_1804_; 
v___x_1782_ = lean_box(0);
v_ref_1799_ = l_Lean_replaceRef(v_ref_1777_, v_ref_1775_);
lean_dec(v_ref_1777_);
v___x_1804_ = l_Lean_Syntax_getPos_x3f(v_ref_1799_, v___x_1762_);
if (lean_obj_tag(v___x_1804_) == 0)
{
lean_object* v___x_1805_; 
v___x_1805_ = lean_unsigned_to_nat(0u);
v___y_1801_ = v___x_1805_;
goto v___jp_1800_;
}
else
{
lean_object* v_val_1806_; 
v_val_1806_ = lean_ctor_get(v___x_1804_, 0);
lean_inc(v_val_1806_);
lean_dec_ref_known(v___x_1804_, 1);
v___y_1801_ = v_val_1806_;
goto v___jp_1800_;
}
v___jp_1783_:
{
lean_object* v___x_1787_; 
if (v_isShared_1774_ == 0)
{
lean_ctor_set(v___x_1773_, 1, v___y_1785_);
lean_ctor_set(v___x_1773_, 0, v___y_1784_);
v___x_1787_ = v___x_1773_;
goto v_reusejp_1786_;
}
else
{
lean_object* v_reuseFailAlloc_1798_; 
v_reuseFailAlloc_1798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1798_, 0, v___y_1784_);
lean_ctor_set(v_reuseFailAlloc_1798_, 1, v___y_1785_);
v___x_1787_ = v_reuseFailAlloc_1798_;
goto v_reusejp_1786_;
}
v_reusejp_1786_:
{
lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v_pos2traces_1791_; lean_object* v___x_1793_; 
v___x_1788_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg___closed__0));
v___x_1789_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17___redArg(v_snd_1771_, v___x_1787_, v___x_1788_);
v___x_1790_ = lean_array_push(v___x_1789_, v_msg_1778_);
v_pos2traces_1791_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18___redArg(v_snd_1771_, v___x_1787_, v___x_1790_);
if (v_isShared_1781_ == 0)
{
lean_ctor_set(v___x_1780_, 1, v_pos2traces_1791_);
lean_ctor_set(v___x_1780_, 0, v___x_1782_);
v___x_1793_ = v___x_1780_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1797_; 
v_reuseFailAlloc_1797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1797_, 0, v___x_1782_);
lean_ctor_set(v_reuseFailAlloc_1797_, 1, v_pos2traces_1791_);
v___x_1793_ = v_reuseFailAlloc_1797_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
size_t v___x_1794_; size_t v___x_1795_; 
v___x_1794_ = ((size_t)1ULL);
v___x_1795_ = lean_usize_add(v_i_1765_, v___x_1794_);
v_i_1765_ = v___x_1795_;
v_b_1766_ = v___x_1793_;
goto _start;
}
}
}
v___jp_1800_:
{
lean_object* v___x_1802_; 
v___x_1802_ = l_Lean_Syntax_getTailPos_x3f(v_ref_1799_, v___x_1762_);
lean_dec(v_ref_1799_);
if (lean_obj_tag(v___x_1802_) == 0)
{
lean_inc(v___y_1801_);
v___y_1784_ = v___y_1801_;
v___y_1785_ = v___y_1801_;
goto v___jp_1783_;
}
else
{
lean_object* v_val_1803_; 
v_val_1803_ = lean_ctor_get(v___x_1802_, 0);
lean_inc(v_val_1803_);
lean_dec_ref_known(v___x_1802_, 1);
v___y_1784_ = v___y_1801_;
v___y_1785_ = v_val_1803_;
goto v___jp_1783_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28_spec__42___redArg___boxed(lean_object* v___x_1810_, lean_object* v_as_1811_, lean_object* v_sz_1812_, lean_object* v_i_1813_, lean_object* v_b_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_){
_start:
{
uint8_t v___x_37565__boxed_1817_; size_t v_sz_boxed_1818_; size_t v_i_boxed_1819_; lean_object* v_res_1820_; 
v___x_37565__boxed_1817_ = lean_unbox(v___x_1810_);
v_sz_boxed_1818_ = lean_unbox_usize(v_sz_1812_);
lean_dec(v_sz_1812_);
v_i_boxed_1819_ = lean_unbox_usize(v_i_1813_);
lean_dec(v_i_1813_);
v_res_1820_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28_spec__42___redArg(v___x_37565__boxed_1817_, v_as_1811_, v_sz_boxed_1818_, v_i_boxed_1819_, v_b_1814_, v___y_1815_);
lean_dec_ref(v___y_1815_);
lean_dec_ref(v_as_1811_);
return v_res_1820_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28(uint8_t v___x_1821_, lean_object* v_as_1822_, size_t v_sz_1823_, size_t v_i_1824_, lean_object* v_b_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_){
_start:
{
uint8_t v___x_1829_; 
v___x_1829_ = lean_usize_dec_lt(v_i_1824_, v_sz_1823_);
if (v___x_1829_ == 0)
{
lean_object* v___x_1830_; 
v___x_1830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1830_, 0, v_b_1825_);
return v___x_1830_;
}
else
{
lean_object* v_snd_1831_; lean_object* v___x_1833_; uint8_t v_isShared_1834_; uint8_t v_isSharedCheck_1868_; 
v_snd_1831_ = lean_ctor_get(v_b_1825_, 1);
v_isSharedCheck_1868_ = !lean_is_exclusive(v_b_1825_);
if (v_isSharedCheck_1868_ == 0)
{
lean_object* v_unused_1869_; 
v_unused_1869_ = lean_ctor_get(v_b_1825_, 0);
lean_dec(v_unused_1869_);
v___x_1833_ = v_b_1825_;
v_isShared_1834_ = v_isSharedCheck_1868_;
goto v_resetjp_1832_;
}
else
{
lean_inc(v_snd_1831_);
lean_dec(v_b_1825_);
v___x_1833_ = lean_box(0);
v_isShared_1834_ = v_isSharedCheck_1868_;
goto v_resetjp_1832_;
}
v_resetjp_1832_:
{
lean_object* v_ref_1835_; lean_object* v_a_1836_; lean_object* v_ref_1837_; lean_object* v_msg_1838_; lean_object* v___x_1840_; uint8_t v_isShared_1841_; uint8_t v_isSharedCheck_1867_; 
v_ref_1835_ = lean_ctor_get(v___y_1826_, 5);
v_a_1836_ = lean_array_uget(v_as_1822_, v_i_1824_);
v_ref_1837_ = lean_ctor_get(v_a_1836_, 0);
v_msg_1838_ = lean_ctor_get(v_a_1836_, 1);
v_isSharedCheck_1867_ = !lean_is_exclusive(v_a_1836_);
if (v_isSharedCheck_1867_ == 0)
{
v___x_1840_ = v_a_1836_;
v_isShared_1841_ = v_isSharedCheck_1867_;
goto v_resetjp_1839_;
}
else
{
lean_inc(v_msg_1838_);
lean_inc(v_ref_1837_);
lean_dec(v_a_1836_);
v___x_1840_ = lean_box(0);
v_isShared_1841_ = v_isSharedCheck_1867_;
goto v_resetjp_1839_;
}
v_resetjp_1839_:
{
lean_object* v___x_1842_; lean_object* v___y_1844_; lean_object* v___y_1845_; lean_object* v_ref_1859_; lean_object* v___y_1861_; lean_object* v___x_1864_; 
v___x_1842_ = lean_box(0);
v_ref_1859_ = l_Lean_replaceRef(v_ref_1837_, v_ref_1835_);
lean_dec(v_ref_1837_);
v___x_1864_ = l_Lean_Syntax_getPos_x3f(v_ref_1859_, v___x_1821_);
if (lean_obj_tag(v___x_1864_) == 0)
{
lean_object* v___x_1865_; 
v___x_1865_ = lean_unsigned_to_nat(0u);
v___y_1861_ = v___x_1865_;
goto v___jp_1860_;
}
else
{
lean_object* v_val_1866_; 
v_val_1866_ = lean_ctor_get(v___x_1864_, 0);
lean_inc(v_val_1866_);
lean_dec_ref_known(v___x_1864_, 1);
v___y_1861_ = v_val_1866_;
goto v___jp_1860_;
}
v___jp_1843_:
{
lean_object* v___x_1847_; 
if (v_isShared_1834_ == 0)
{
lean_ctor_set(v___x_1833_, 1, v___y_1845_);
lean_ctor_set(v___x_1833_, 0, v___y_1844_);
v___x_1847_ = v___x_1833_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1858_; 
v_reuseFailAlloc_1858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1858_, 0, v___y_1844_);
lean_ctor_set(v_reuseFailAlloc_1858_, 1, v___y_1845_);
v___x_1847_ = v_reuseFailAlloc_1858_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v_pos2traces_1851_; lean_object* v___x_1853_; 
v___x_1848_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg___closed__0));
v___x_1849_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17___redArg(v_snd_1831_, v___x_1847_, v___x_1848_);
v___x_1850_ = lean_array_push(v___x_1849_, v_msg_1838_);
v_pos2traces_1851_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18___redArg(v_snd_1831_, v___x_1847_, v___x_1850_);
if (v_isShared_1841_ == 0)
{
lean_ctor_set(v___x_1840_, 1, v_pos2traces_1851_);
lean_ctor_set(v___x_1840_, 0, v___x_1842_);
v___x_1853_ = v___x_1840_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1857_; 
v_reuseFailAlloc_1857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1857_, 0, v___x_1842_);
lean_ctor_set(v_reuseFailAlloc_1857_, 1, v_pos2traces_1851_);
v___x_1853_ = v_reuseFailAlloc_1857_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
size_t v___x_1854_; size_t v___x_1855_; lean_object* v___x_1856_; 
v___x_1854_ = ((size_t)1ULL);
v___x_1855_ = lean_usize_add(v_i_1824_, v___x_1854_);
v___x_1856_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28_spec__42___redArg(v___x_1821_, v_as_1822_, v_sz_1823_, v___x_1855_, v___x_1853_, v___y_1826_);
return v___x_1856_;
}
}
}
v___jp_1860_:
{
lean_object* v___x_1862_; 
v___x_1862_ = l_Lean_Syntax_getTailPos_x3f(v_ref_1859_, v___x_1821_);
lean_dec(v_ref_1859_);
if (lean_obj_tag(v___x_1862_) == 0)
{
lean_inc(v___y_1861_);
v___y_1844_ = v___y_1861_;
v___y_1845_ = v___y_1861_;
goto v___jp_1843_;
}
else
{
lean_object* v_val_1863_; 
v_val_1863_ = lean_ctor_get(v___x_1862_, 0);
lean_inc(v_val_1863_);
lean_dec_ref_known(v___x_1862_, 1);
v___y_1844_ = v___y_1861_;
v___y_1845_ = v_val_1863_;
goto v___jp_1843_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28___boxed(lean_object* v___x_1870_, lean_object* v_as_1871_, lean_object* v_sz_1872_, lean_object* v_i_1873_, lean_object* v_b_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_){
_start:
{
uint8_t v___x_37645__boxed_1878_; size_t v_sz_boxed_1879_; size_t v_i_boxed_1880_; lean_object* v_res_1881_; 
v___x_37645__boxed_1878_ = lean_unbox(v___x_1870_);
v_sz_boxed_1879_ = lean_unbox_usize(v_sz_1872_);
lean_dec(v_sz_1872_);
v_i_boxed_1880_ = lean_unbox_usize(v_i_1873_);
lean_dec(v_i_1873_);
v_res_1881_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28(v___x_37645__boxed_1878_, v_as_1871_, v_sz_boxed_1879_, v_i_boxed_1880_, v_b_1874_, v___y_1875_, v___y_1876_);
lean_dec(v___y_1876_);
lean_dec_ref(v___y_1875_);
lean_dec_ref(v_as_1871_);
return v_res_1881_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19(uint8_t v___x_1882_, lean_object* v_t_1883_, lean_object* v_init_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_){
_start:
{
lean_object* v_root_1888_; lean_object* v_tail_1889_; lean_object* v___x_1890_; 
v_root_1888_ = lean_ctor_get(v_t_1883_, 0);
v_tail_1889_ = lean_ctor_get(v_t_1883_, 1);
lean_inc_ref(v_init_1884_);
v___x_1890_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27(v_init_1884_, v___x_1882_, v_root_1888_, v_init_1884_, v___y_1885_, v___y_1886_);
lean_dec_ref(v_init_1884_);
if (lean_obj_tag(v___x_1890_) == 0)
{
lean_object* v_a_1891_; lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1927_; 
v_a_1891_ = lean_ctor_get(v___x_1890_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1890_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1893_ = v___x_1890_;
v_isShared_1894_ = v_isSharedCheck_1927_;
goto v_resetjp_1892_;
}
else
{
lean_inc(v_a_1891_);
lean_dec(v___x_1890_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1927_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
if (lean_obj_tag(v_a_1891_) == 0)
{
lean_object* v_a_1895_; lean_object* v___x_1897_; 
v_a_1895_ = lean_ctor_get(v_a_1891_, 0);
lean_inc(v_a_1895_);
lean_dec_ref_known(v_a_1891_, 1);
if (v_isShared_1894_ == 0)
{
lean_ctor_set(v___x_1893_, 0, v_a_1895_);
v___x_1897_ = v___x_1893_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v_a_1895_);
v___x_1897_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
return v___x_1897_;
}
}
else
{
lean_object* v_a_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; size_t v_sz_1902_; size_t v___x_1903_; lean_object* v___x_1904_; 
lean_del_object(v___x_1893_);
v_a_1899_ = lean_ctor_get(v_a_1891_, 0);
lean_inc(v_a_1899_);
lean_dec_ref_known(v_a_1891_, 1);
v___x_1900_ = lean_box(0);
v___x_1901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1901_, 0, v___x_1900_);
lean_ctor_set(v___x_1901_, 1, v_a_1899_);
v_sz_1902_ = lean_array_size(v_tail_1889_);
v___x_1903_ = ((size_t)0ULL);
v___x_1904_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28(v___x_1882_, v_tail_1889_, v_sz_1902_, v___x_1903_, v___x_1901_, v___y_1885_, v___y_1886_);
if (lean_obj_tag(v___x_1904_) == 0)
{
lean_object* v_a_1905_; lean_object* v___x_1907_; uint8_t v_isShared_1908_; uint8_t v_isSharedCheck_1918_; 
v_a_1905_ = lean_ctor_get(v___x_1904_, 0);
v_isSharedCheck_1918_ = !lean_is_exclusive(v___x_1904_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1907_ = v___x_1904_;
v_isShared_1908_ = v_isSharedCheck_1918_;
goto v_resetjp_1906_;
}
else
{
lean_inc(v_a_1905_);
lean_dec(v___x_1904_);
v___x_1907_ = lean_box(0);
v_isShared_1908_ = v_isSharedCheck_1918_;
goto v_resetjp_1906_;
}
v_resetjp_1906_:
{
lean_object* v_fst_1909_; 
v_fst_1909_ = lean_ctor_get(v_a_1905_, 0);
if (lean_obj_tag(v_fst_1909_) == 0)
{
lean_object* v_snd_1910_; lean_object* v___x_1912_; 
v_snd_1910_ = lean_ctor_get(v_a_1905_, 1);
lean_inc(v_snd_1910_);
lean_dec(v_a_1905_);
if (v_isShared_1908_ == 0)
{
lean_ctor_set(v___x_1907_, 0, v_snd_1910_);
v___x_1912_ = v___x_1907_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v_snd_1910_);
v___x_1912_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
return v___x_1912_;
}
}
else
{
lean_object* v_val_1914_; lean_object* v___x_1916_; 
lean_inc_ref(v_fst_1909_);
lean_dec(v_a_1905_);
v_val_1914_ = lean_ctor_get(v_fst_1909_, 0);
lean_inc(v_val_1914_);
lean_dec_ref_known(v_fst_1909_, 1);
if (v_isShared_1908_ == 0)
{
lean_ctor_set(v___x_1907_, 0, v_val_1914_);
v___x_1916_ = v___x_1907_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v_val_1914_);
v___x_1916_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
return v___x_1916_;
}
}
}
}
else
{
lean_object* v_a_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1926_; 
v_a_1919_ = lean_ctor_get(v___x_1904_, 0);
v_isSharedCheck_1926_ = !lean_is_exclusive(v___x_1904_);
if (v_isSharedCheck_1926_ == 0)
{
v___x_1921_ = v___x_1904_;
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_a_1919_);
lean_dec(v___x_1904_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___x_1924_; 
if (v_isShared_1922_ == 0)
{
v___x_1924_ = v___x_1921_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1925_; 
v_reuseFailAlloc_1925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1925_, 0, v_a_1919_);
v___x_1924_ = v_reuseFailAlloc_1925_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
return v___x_1924_;
}
}
}
}
}
}
else
{
lean_object* v_a_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1935_; 
v_a_1928_ = lean_ctor_get(v___x_1890_, 0);
v_isSharedCheck_1935_ = !lean_is_exclusive(v___x_1890_);
if (v_isSharedCheck_1935_ == 0)
{
v___x_1930_ = v___x_1890_;
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_a_1928_);
lean_dec(v___x_1890_);
v___x_1930_ = lean_box(0);
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
v_resetjp_1929_:
{
lean_object* v___x_1933_; 
if (v_isShared_1931_ == 0)
{
v___x_1933_ = v___x_1930_;
goto v_reusejp_1932_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v_a_1928_);
v___x_1933_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1932_;
}
v_reusejp_1932_:
{
return v___x_1933_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19___boxed(lean_object* v___x_1936_, lean_object* v_t_1937_, lean_object* v_init_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_){
_start:
{
uint8_t v___x_37726__boxed_1942_; lean_object* v_res_1943_; 
v___x_37726__boxed_1942_ = lean_unbox(v___x_1936_);
v_res_1943_ = l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19(v___x_37726__boxed_1942_, v_t_1937_, v_init_1938_, v___y_1939_, v___y_1940_);
lean_dec(v___y_1940_);
lean_dec_ref(v___y_1939_);
lean_dec_ref(v_t_1937_);
return v_res_1943_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__22(lean_object* v_x_1944_, lean_object* v_x_1945_){
_start:
{
if (lean_obj_tag(v_x_1945_) == 0)
{
return v_x_1944_;
}
else
{
lean_object* v_key_1946_; lean_object* v_value_1947_; lean_object* v_tail_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; 
v_key_1946_ = lean_ctor_get(v_x_1945_, 0);
v_value_1947_ = lean_ctor_get(v_x_1945_, 1);
v_tail_1948_ = lean_ctor_get(v_x_1945_, 2);
lean_inc(v_value_1947_);
lean_inc(v_key_1946_);
v___x_1949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1949_, 0, v_key_1946_);
lean_ctor_set(v___x_1949_, 1, v_value_1947_);
v___x_1950_ = lean_array_push(v_x_1944_, v___x_1949_);
v_x_1944_ = v___x_1950_;
v_x_1945_ = v_tail_1948_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__22___boxed(lean_object* v_x_1952_, lean_object* v_x_1953_){
_start:
{
lean_object* v_res_1954_; 
v_res_1954_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__22(v_x_1952_, v_x_1953_);
lean_dec(v_x_1953_);
return v_res_1954_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__23(lean_object* v_as_1955_, size_t v_i_1956_, size_t v_stop_1957_, lean_object* v_b_1958_){
_start:
{
uint8_t v___x_1959_; 
v___x_1959_ = lean_usize_dec_eq(v_i_1956_, v_stop_1957_);
if (v___x_1959_ == 0)
{
lean_object* v___x_1960_; lean_object* v___x_1961_; size_t v___x_1962_; size_t v___x_1963_; 
v___x_1960_ = lean_array_uget_borrowed(v_as_1955_, v_i_1956_);
v___x_1961_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__22(v_b_1958_, v___x_1960_);
v___x_1962_ = ((size_t)1ULL);
v___x_1963_ = lean_usize_add(v_i_1956_, v___x_1962_);
v_i_1956_ = v___x_1963_;
v_b_1958_ = v___x_1961_;
goto _start;
}
else
{
return v_b_1958_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__23___boxed(lean_object* v_as_1965_, lean_object* v_i_1966_, lean_object* v_stop_1967_, lean_object* v_b_1968_){
_start:
{
size_t v_i_boxed_1969_; size_t v_stop_boxed_1970_; lean_object* v_res_1971_; 
v_i_boxed_1969_ = lean_unbox_usize(v_i_1966_);
lean_dec(v_i_1966_);
v_stop_boxed_1970_ = lean_unbox_usize(v_stop_1967_);
lean_dec(v_stop_1967_);
v_res_1971_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__23(v_as_1965_, v_i_boxed_1969_, v_stop_boxed_1970_, v_b_1968_);
lean_dec_ref(v_as_1965_);
return v_res_1971_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__0(void){
_start:
{
lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; 
v___x_1972_ = lean_unsigned_to_nat(32u);
v___x_1973_ = lean_mk_empty_array_with_capacity(v___x_1972_);
v___x_1974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1974_, 0, v___x_1973_);
return v___x_1974_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1(void){
_start:
{
size_t v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; 
v___x_1975_ = ((size_t)5ULL);
v___x_1976_ = lean_unsigned_to_nat(0u);
v___x_1977_ = lean_unsigned_to_nat(32u);
v___x_1978_ = lean_mk_empty_array_with_capacity(v___x_1977_);
v___x_1979_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__0);
v___x_1980_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1980_, 0, v___x_1979_);
lean_ctor_set(v___x_1980_, 1, v___x_1978_);
lean_ctor_set(v___x_1980_, 2, v___x_1976_);
lean_ctor_set(v___x_1980_, 3, v___x_1976_);
lean_ctor_set_usize(v___x_1980_, 4, v___x_1975_);
return v___x_1980_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg(lean_object* v___y_1981_){
_start:
{
lean_object* v___x_1983_; lean_object* v_traceState_1984_; lean_object* v_traces_1985_; lean_object* v___x_1986_; lean_object* v_traceState_1987_; lean_object* v_env_1988_; lean_object* v_nextMacroScope_1989_; lean_object* v_ngen_1990_; lean_object* v_auxDeclNGen_1991_; lean_object* v_cache_1992_; lean_object* v_messages_1993_; lean_object* v_infoState_1994_; lean_object* v_snapshotTasks_1995_; lean_object* v___x_1997_; uint8_t v_isShared_1998_; uint8_t v_isSharedCheck_2014_; 
v___x_1983_ = lean_st_ref_get(v___y_1981_);
v_traceState_1984_ = lean_ctor_get(v___x_1983_, 4);
lean_inc_ref(v_traceState_1984_);
lean_dec(v___x_1983_);
v_traces_1985_ = lean_ctor_get(v_traceState_1984_, 0);
lean_inc_ref(v_traces_1985_);
lean_dec_ref(v_traceState_1984_);
v___x_1986_ = lean_st_ref_take(v___y_1981_);
v_traceState_1987_ = lean_ctor_get(v___x_1986_, 4);
v_env_1988_ = lean_ctor_get(v___x_1986_, 0);
v_nextMacroScope_1989_ = lean_ctor_get(v___x_1986_, 1);
v_ngen_1990_ = lean_ctor_get(v___x_1986_, 2);
v_auxDeclNGen_1991_ = lean_ctor_get(v___x_1986_, 3);
v_cache_1992_ = lean_ctor_get(v___x_1986_, 5);
v_messages_1993_ = lean_ctor_get(v___x_1986_, 6);
v_infoState_1994_ = lean_ctor_get(v___x_1986_, 7);
v_snapshotTasks_1995_ = lean_ctor_get(v___x_1986_, 8);
v_isSharedCheck_2014_ = !lean_is_exclusive(v___x_1986_);
if (v_isSharedCheck_2014_ == 0)
{
v___x_1997_ = v___x_1986_;
v_isShared_1998_ = v_isSharedCheck_2014_;
goto v_resetjp_1996_;
}
else
{
lean_inc(v_snapshotTasks_1995_);
lean_inc(v_infoState_1994_);
lean_inc(v_messages_1993_);
lean_inc(v_cache_1992_);
lean_inc(v_traceState_1987_);
lean_inc(v_auxDeclNGen_1991_);
lean_inc(v_ngen_1990_);
lean_inc(v_nextMacroScope_1989_);
lean_inc(v_env_1988_);
lean_dec(v___x_1986_);
v___x_1997_ = lean_box(0);
v_isShared_1998_ = v_isSharedCheck_2014_;
goto v_resetjp_1996_;
}
v_resetjp_1996_:
{
uint64_t v_tid_1999_; lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2012_; 
v_tid_1999_ = lean_ctor_get_uint64(v_traceState_1987_, sizeof(void*)*1);
v_isSharedCheck_2012_ = !lean_is_exclusive(v_traceState_1987_);
if (v_isSharedCheck_2012_ == 0)
{
lean_object* v_unused_2013_; 
v_unused_2013_ = lean_ctor_get(v_traceState_1987_, 0);
lean_dec(v_unused_2013_);
v___x_2001_ = v_traceState_1987_;
v_isShared_2002_ = v_isSharedCheck_2012_;
goto v_resetjp_2000_;
}
else
{
lean_dec(v_traceState_1987_);
v___x_2001_ = lean_box(0);
v_isShared_2002_ = v_isSharedCheck_2012_;
goto v_resetjp_2000_;
}
v_resetjp_2000_:
{
lean_object* v___x_2003_; lean_object* v___x_2005_; 
v___x_2003_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1);
if (v_isShared_2002_ == 0)
{
lean_ctor_set(v___x_2001_, 0, v___x_2003_);
v___x_2005_ = v___x_2001_;
goto v_reusejp_2004_;
}
else
{
lean_object* v_reuseFailAlloc_2011_; 
v_reuseFailAlloc_2011_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2011_, 0, v___x_2003_);
lean_ctor_set_uint64(v_reuseFailAlloc_2011_, sizeof(void*)*1, v_tid_1999_);
v___x_2005_ = v_reuseFailAlloc_2011_;
goto v_reusejp_2004_;
}
v_reusejp_2004_:
{
lean_object* v___x_2007_; 
if (v_isShared_1998_ == 0)
{
lean_ctor_set(v___x_1997_, 4, v___x_2005_);
v___x_2007_ = v___x_1997_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v_env_1988_);
lean_ctor_set(v_reuseFailAlloc_2010_, 1, v_nextMacroScope_1989_);
lean_ctor_set(v_reuseFailAlloc_2010_, 2, v_ngen_1990_);
lean_ctor_set(v_reuseFailAlloc_2010_, 3, v_auxDeclNGen_1991_);
lean_ctor_set(v_reuseFailAlloc_2010_, 4, v___x_2005_);
lean_ctor_set(v_reuseFailAlloc_2010_, 5, v_cache_1992_);
lean_ctor_set(v_reuseFailAlloc_2010_, 6, v_messages_1993_);
lean_ctor_set(v_reuseFailAlloc_2010_, 7, v_infoState_1994_);
lean_ctor_set(v_reuseFailAlloc_2010_, 8, v_snapshotTasks_1995_);
v___x_2007_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
lean_object* v___x_2008_; lean_object* v___x_2009_; 
v___x_2008_ = lean_st_ref_set(v___y_1981_, v___x_2007_);
v___x_2009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2009_, 0, v_traces_1985_);
return v___x_2009_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___boxed(lean_object* v___y_2015_, lean_object* v___y_2016_){
_start:
{
lean_object* v_res_2017_; 
v_res_2017_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg(v___y_2015_);
lean_dec(v___y_2015_);
return v_res_2017_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21_spec__31___redArg(lean_object* v_hi_2018_, lean_object* v_pivot_2019_, lean_object* v_as_2020_, lean_object* v_i_2021_, lean_object* v_k_2022_){
_start:
{
uint8_t v___x_2023_; 
v___x_2023_ = lean_nat_dec_lt(v_k_2022_, v_hi_2018_);
if (v___x_2023_ == 0)
{
lean_object* v___x_2024_; lean_object* v___x_2025_; 
lean_dec(v_k_2022_);
v___x_2024_ = lean_array_fswap(v_as_2020_, v_i_2021_, v_hi_2018_);
v___x_2025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2025_, 0, v_i_2021_);
lean_ctor_set(v___x_2025_, 1, v___x_2024_);
return v___x_2025_;
}
else
{
lean_object* v___x_2026_; lean_object* v_fst_2027_; lean_object* v_fst_2028_; lean_object* v_fst_2029_; lean_object* v_fst_2030_; uint8_t v___x_2031_; 
v___x_2026_ = lean_array_fget_borrowed(v_as_2020_, v_k_2022_);
v_fst_2027_ = lean_ctor_get(v___x_2026_, 0);
v_fst_2028_ = lean_ctor_get(v_pivot_2019_, 0);
v_fst_2029_ = lean_ctor_get(v_fst_2027_, 0);
v_fst_2030_ = lean_ctor_get(v_fst_2028_, 0);
v___x_2031_ = lean_nat_dec_lt(v_fst_2029_, v_fst_2030_);
if (v___x_2031_ == 0)
{
lean_object* v___x_2032_; lean_object* v___x_2033_; 
v___x_2032_ = lean_unsigned_to_nat(1u);
v___x_2033_ = lean_nat_add(v_k_2022_, v___x_2032_);
lean_dec(v_k_2022_);
v_k_2022_ = v___x_2033_;
goto _start;
}
else
{
lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; 
v___x_2035_ = lean_array_fswap(v_as_2020_, v_i_2021_, v_k_2022_);
v___x_2036_ = lean_unsigned_to_nat(1u);
v___x_2037_ = lean_nat_add(v_i_2021_, v___x_2036_);
lean_dec(v_i_2021_);
v___x_2038_ = lean_nat_add(v_k_2022_, v___x_2036_);
lean_dec(v_k_2022_);
v_as_2020_ = v___x_2035_;
v_i_2021_ = v___x_2037_;
v_k_2022_ = v___x_2038_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21_spec__31___redArg___boxed(lean_object* v_hi_2040_, lean_object* v_pivot_2041_, lean_object* v_as_2042_, lean_object* v_i_2043_, lean_object* v_k_2044_){
_start:
{
lean_object* v_res_2045_; 
v_res_2045_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21_spec__31___redArg(v_hi_2040_, v_pivot_2041_, v_as_2042_, v_i_2043_, v_k_2044_);
lean_dec_ref(v_pivot_2041_);
lean_dec(v_hi_2040_);
return v_res_2045_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg___lam__0(lean_object* v_x_2046_, lean_object* v_x_2047_){
_start:
{
lean_object* v_fst_2048_; lean_object* v_fst_2049_; lean_object* v_fst_2050_; lean_object* v_fst_2051_; uint8_t v___x_2052_; 
v_fst_2048_ = lean_ctor_get(v_x_2046_, 0);
v_fst_2049_ = lean_ctor_get(v_x_2047_, 0);
v_fst_2050_ = lean_ctor_get(v_fst_2048_, 0);
v_fst_2051_ = lean_ctor_get(v_fst_2049_, 0);
v___x_2052_ = lean_nat_dec_lt(v_fst_2050_, v_fst_2051_);
return v___x_2052_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg___lam__0___boxed(lean_object* v_x_2053_, lean_object* v_x_2054_){
_start:
{
uint8_t v_res_2055_; lean_object* v_r_2056_; 
v_res_2055_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg___lam__0(v_x_2053_, v_x_2054_);
lean_dec_ref(v_x_2054_);
lean_dec_ref(v_x_2053_);
v_r_2056_ = lean_box(v_res_2055_);
return v_r_2056_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg(lean_object* v_n_2057_, lean_object* v_as_2058_, lean_object* v_lo_2059_, lean_object* v_hi_2060_){
_start:
{
lean_object* v___y_2062_; uint8_t v___x_2072_; 
v___x_2072_ = lean_nat_dec_lt(v_lo_2059_, v_hi_2060_);
if (v___x_2072_ == 0)
{
lean_dec(v_lo_2059_);
return v_as_2058_;
}
else
{
lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v_mid_2075_; lean_object* v___y_2077_; lean_object* v___y_2083_; lean_object* v___x_2088_; lean_object* v___x_2089_; uint8_t v___x_2090_; 
v___x_2073_ = lean_nat_add(v_lo_2059_, v_hi_2060_);
v___x_2074_ = lean_unsigned_to_nat(1u);
v_mid_2075_ = lean_nat_shiftr(v___x_2073_, v___x_2074_);
lean_dec(v___x_2073_);
v___x_2088_ = lean_array_fget_borrowed(v_as_2058_, v_mid_2075_);
v___x_2089_ = lean_array_fget_borrowed(v_as_2058_, v_lo_2059_);
v___x_2090_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg___lam__0(v___x_2088_, v___x_2089_);
if (v___x_2090_ == 0)
{
v___y_2083_ = v_as_2058_;
goto v___jp_2082_;
}
else
{
lean_object* v___x_2091_; 
v___x_2091_ = lean_array_fswap(v_as_2058_, v_lo_2059_, v_mid_2075_);
v___y_2083_ = v___x_2091_;
goto v___jp_2082_;
}
v___jp_2076_:
{
lean_object* v___x_2078_; lean_object* v___x_2079_; uint8_t v___x_2080_; 
v___x_2078_ = lean_array_fget_borrowed(v___y_2077_, v_mid_2075_);
v___x_2079_ = lean_array_fget_borrowed(v___y_2077_, v_hi_2060_);
v___x_2080_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg___lam__0(v___x_2078_, v___x_2079_);
if (v___x_2080_ == 0)
{
lean_dec(v_mid_2075_);
v___y_2062_ = v___y_2077_;
goto v___jp_2061_;
}
else
{
lean_object* v___x_2081_; 
v___x_2081_ = lean_array_fswap(v___y_2077_, v_mid_2075_, v_hi_2060_);
lean_dec(v_mid_2075_);
v___y_2062_ = v___x_2081_;
goto v___jp_2061_;
}
}
v___jp_2082_:
{
lean_object* v___x_2084_; lean_object* v___x_2085_; uint8_t v___x_2086_; 
v___x_2084_ = lean_array_fget_borrowed(v___y_2083_, v_hi_2060_);
v___x_2085_ = lean_array_fget_borrowed(v___y_2083_, v_lo_2059_);
v___x_2086_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg___lam__0(v___x_2084_, v___x_2085_);
if (v___x_2086_ == 0)
{
v___y_2077_ = v___y_2083_;
goto v___jp_2076_;
}
else
{
lean_object* v___x_2087_; 
v___x_2087_ = lean_array_fswap(v___y_2083_, v_lo_2059_, v_hi_2060_);
v___y_2077_ = v___x_2087_;
goto v___jp_2076_;
}
}
}
v___jp_2061_:
{
lean_object* v_pivot_2063_; lean_object* v___x_2064_; lean_object* v_fst_2065_; lean_object* v_snd_2066_; uint8_t v___x_2067_; 
v_pivot_2063_ = lean_array_fget(v___y_2062_, v_hi_2060_);
lean_inc_n(v_lo_2059_, 2);
v___x_2064_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21_spec__31___redArg(v_hi_2060_, v_pivot_2063_, v___y_2062_, v_lo_2059_, v_lo_2059_);
lean_dec(v_pivot_2063_);
v_fst_2065_ = lean_ctor_get(v___x_2064_, 0);
lean_inc(v_fst_2065_);
v_snd_2066_ = lean_ctor_get(v___x_2064_, 1);
lean_inc(v_snd_2066_);
lean_dec_ref(v___x_2064_);
v___x_2067_ = lean_nat_dec_le(v_hi_2060_, v_fst_2065_);
if (v___x_2067_ == 0)
{
lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; 
v___x_2068_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg(v_n_2057_, v_snd_2066_, v_lo_2059_, v_fst_2065_);
v___x_2069_ = lean_unsigned_to_nat(1u);
v___x_2070_ = lean_nat_add(v_fst_2065_, v___x_2069_);
lean_dec(v_fst_2065_);
v_as_2058_ = v___x_2068_;
v_lo_2059_ = v___x_2070_;
goto _start;
}
else
{
lean_dec(v_fst_2065_);
lean_dec(v_lo_2059_);
return v_snd_2066_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg___boxed(lean_object* v_n_2092_, lean_object* v_as_2093_, lean_object* v_lo_2094_, lean_object* v_hi_2095_){
_start:
{
lean_object* v_res_2096_; 
v_res_2096_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg(v_n_2092_, v_as_2093_, v_lo_2094_, v_hi_2095_);
lean_dec(v_hi_2095_);
lean_dec(v_n_2092_);
return v_res_2096_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___at___00main_spec__10___closed__0(void){
_start:
{
lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; 
v___x_2097_ = lean_box(0);
v___x_2098_ = lean_unsigned_to_nat(16u);
v___x_2099_ = lean_mk_array(v___x_2098_, v___x_2097_);
return v___x_2099_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___at___00main_spec__10___closed__1(void){
_start:
{
lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v_pos2traces_2102_; 
v___x_2100_ = lean_obj_once(&l_Lean_addTraceAsMessages___at___00main_spec__10___closed__0, &l_Lean_addTraceAsMessages___at___00main_spec__10___closed__0_once, _init_l_Lean_addTraceAsMessages___at___00main_spec__10___closed__0);
v___x_2101_ = lean_unsigned_to_nat(0u);
v_pos2traces_2102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_pos2traces_2102_, 0, v___x_2101_);
lean_ctor_set(v_pos2traces_2102_, 1, v___x_2100_);
return v_pos2traces_2102_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___at___00main_spec__10(lean_object* v___y_2103_, lean_object* v___y_2104_){
_start:
{
lean_object* v_options_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; 
v_options_2109_ = lean_ctor_get(v___y_2103_, 2);
v___x_2110_ = l_Lean_trace_profiler_output;
v___x_2111_ = l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__15(v_options_2109_, v___x_2110_);
if (lean_obj_tag(v___x_2111_) == 0)
{
lean_object* v___x_2112_; uint8_t v___x_2113_; 
v___x_2112_ = l_Lean_trace_profiler_serve;
v___x_2113_ = l_Lean_Option_get___at___00main_spec__8(v_options_2109_, v___x_2112_);
if (v___x_2113_ == 0)
{
lean_object* v___x_2114_; lean_object* v_a_2115_; lean_object* v___x_2117_; uint8_t v_isShared_2118_; uint8_t v_isSharedCheck_2181_; 
v___x_2114_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg(v___y_2104_);
v_a_2115_ = lean_ctor_get(v___x_2114_, 0);
v_isSharedCheck_2181_ = !lean_is_exclusive(v___x_2114_);
if (v_isSharedCheck_2181_ == 0)
{
v___x_2117_ = v___x_2114_;
v_isShared_2118_ = v_isSharedCheck_2181_;
goto v_resetjp_2116_;
}
else
{
lean_inc(v_a_2115_);
lean_dec(v___x_2114_);
v___x_2117_ = lean_box(0);
v_isShared_2118_ = v_isSharedCheck_2181_;
goto v_resetjp_2116_;
}
v_resetjp_2116_:
{
uint8_t v___x_2119_; 
v___x_2119_ = l_Lean_PersistentArray_isEmpty___redArg(v_a_2115_);
if (v___x_2119_ == 0)
{
lean_object* v___x_2120_; lean_object* v_pos2traces_2121_; lean_object* v___x_2122_; 
lean_del_object(v___x_2117_);
v___x_2120_ = lean_unsigned_to_nat(0u);
v_pos2traces_2121_ = lean_obj_once(&l_Lean_addTraceAsMessages___at___00main_spec__10___closed__1, &l_Lean_addTraceAsMessages___at___00main_spec__10___closed__1_once, _init_l_Lean_addTraceAsMessages___at___00main_spec__10___closed__1);
v___x_2122_ = l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19(v___x_2119_, v_a_2115_, v_pos2traces_2121_, v___y_2103_, v___y_2104_);
lean_dec(v_a_2115_);
if (lean_obj_tag(v___x_2122_) == 0)
{
lean_object* v_a_2123_; lean_object* v___y_2125_; lean_object* v___y_2139_; lean_object* v___y_2140_; lean_object* v___y_2141_; lean_object* v___y_2142_; lean_object* v___y_2145_; lean_object* v___y_2146_; lean_object* v___y_2147_; lean_object* v___y_2148_; lean_object* v___y_2151_; lean_object* v_size_2157_; lean_object* v_buckets_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; uint8_t v___x_2161_; 
v_a_2123_ = lean_ctor_get(v___x_2122_, 0);
lean_inc(v_a_2123_);
lean_dec_ref_known(v___x_2122_, 1);
v_size_2157_ = lean_ctor_get(v_a_2123_, 0);
lean_inc(v_size_2157_);
v_buckets_2158_ = lean_ctor_get(v_a_2123_, 1);
lean_inc_ref(v_buckets_2158_);
lean_dec(v_a_2123_);
v___x_2159_ = lean_mk_empty_array_with_capacity(v_size_2157_);
lean_dec(v_size_2157_);
v___x_2160_ = lean_array_get_size(v_buckets_2158_);
v___x_2161_ = lean_nat_dec_lt(v___x_2120_, v___x_2160_);
if (v___x_2161_ == 0)
{
lean_dec_ref(v_buckets_2158_);
v___y_2151_ = v___x_2159_;
goto v___jp_2150_;
}
else
{
uint8_t v___x_2162_; 
v___x_2162_ = lean_nat_dec_le(v___x_2160_, v___x_2160_);
if (v___x_2162_ == 0)
{
if (v___x_2161_ == 0)
{
lean_dec_ref(v_buckets_2158_);
v___y_2151_ = v___x_2159_;
goto v___jp_2150_;
}
else
{
size_t v___x_2163_; size_t v___x_2164_; lean_object* v___x_2165_; 
v___x_2163_ = ((size_t)0ULL);
v___x_2164_ = lean_usize_of_nat(v___x_2160_);
v___x_2165_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__23(v_buckets_2158_, v___x_2163_, v___x_2164_, v___x_2159_);
lean_dec_ref(v_buckets_2158_);
v___y_2151_ = v___x_2165_;
goto v___jp_2150_;
}
}
else
{
size_t v___x_2166_; size_t v___x_2167_; lean_object* v___x_2168_; 
v___x_2166_ = ((size_t)0ULL);
v___x_2167_ = lean_usize_of_nat(v___x_2160_);
v___x_2168_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__23(v_buckets_2158_, v___x_2166_, v___x_2167_, v___x_2159_);
lean_dec_ref(v_buckets_2158_);
v___y_2151_ = v___x_2168_;
goto v___jp_2150_;
}
}
v___jp_2124_:
{
lean_object* v___x_2126_; size_t v_sz_2127_; size_t v___x_2128_; lean_object* v___x_2129_; 
v___x_2126_ = lean_box(0);
v_sz_2127_ = lean_array_size(v___y_2125_);
v___x_2128_ = ((size_t)0ULL);
v___x_2129_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20(v___x_2113_, v___y_2125_, v_sz_2127_, v___x_2128_, v___x_2126_, v___y_2103_, v___y_2104_);
lean_dec_ref(v___y_2125_);
if (lean_obj_tag(v___x_2129_) == 0)
{
lean_object* v___x_2131_; uint8_t v_isShared_2132_; uint8_t v_isSharedCheck_2136_; 
v_isSharedCheck_2136_ = !lean_is_exclusive(v___x_2129_);
if (v_isSharedCheck_2136_ == 0)
{
lean_object* v_unused_2137_; 
v_unused_2137_ = lean_ctor_get(v___x_2129_, 0);
lean_dec(v_unused_2137_);
v___x_2131_ = v___x_2129_;
v_isShared_2132_ = v_isSharedCheck_2136_;
goto v_resetjp_2130_;
}
else
{
lean_dec(v___x_2129_);
v___x_2131_ = lean_box(0);
v_isShared_2132_ = v_isSharedCheck_2136_;
goto v_resetjp_2130_;
}
v_resetjp_2130_:
{
lean_object* v___x_2134_; 
if (v_isShared_2132_ == 0)
{
lean_ctor_set(v___x_2131_, 0, v___x_2126_);
v___x_2134_ = v___x_2131_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v___x_2126_);
v___x_2134_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
return v___x_2134_;
}
}
}
else
{
return v___x_2129_;
}
}
v___jp_2138_:
{
lean_object* v___x_2143_; 
v___x_2143_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg(v___y_2141_, v___y_2139_, v___y_2140_, v___y_2142_);
lean_dec(v___y_2142_);
lean_dec(v___y_2141_);
v___y_2125_ = v___x_2143_;
goto v___jp_2124_;
}
v___jp_2144_:
{
uint8_t v___x_2149_; 
v___x_2149_ = lean_nat_dec_le(v___y_2148_, v___y_2146_);
if (v___x_2149_ == 0)
{
lean_dec(v___y_2146_);
lean_inc(v___y_2148_);
v___y_2139_ = v___y_2145_;
v___y_2140_ = v___y_2148_;
v___y_2141_ = v___y_2147_;
v___y_2142_ = v___y_2148_;
goto v___jp_2138_;
}
else
{
v___y_2139_ = v___y_2145_;
v___y_2140_ = v___y_2148_;
v___y_2141_ = v___y_2147_;
v___y_2142_ = v___y_2146_;
goto v___jp_2138_;
}
}
v___jp_2150_:
{
lean_object* v___x_2152_; uint8_t v___x_2153_; 
v___x_2152_ = lean_array_get_size(v___y_2151_);
v___x_2153_ = lean_nat_dec_eq(v___x_2152_, v___x_2120_);
if (v___x_2153_ == 0)
{
lean_object* v___x_2154_; lean_object* v___x_2155_; uint8_t v___x_2156_; 
v___x_2154_ = lean_unsigned_to_nat(1u);
v___x_2155_ = lean_nat_sub(v___x_2152_, v___x_2154_);
v___x_2156_ = lean_nat_dec_le(v___x_2120_, v___x_2155_);
if (v___x_2156_ == 0)
{
lean_inc(v___x_2155_);
v___y_2145_ = v___y_2151_;
v___y_2146_ = v___x_2155_;
v___y_2147_ = v___x_2152_;
v___y_2148_ = v___x_2155_;
goto v___jp_2144_;
}
else
{
v___y_2145_ = v___y_2151_;
v___y_2146_ = v___x_2155_;
v___y_2147_ = v___x_2152_;
v___y_2148_ = v___x_2120_;
goto v___jp_2144_;
}
}
else
{
v___y_2125_ = v___y_2151_;
goto v___jp_2124_;
}
}
}
else
{
lean_object* v_a_2169_; lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2176_; 
v_a_2169_ = lean_ctor_get(v___x_2122_, 0);
v_isSharedCheck_2176_ = !lean_is_exclusive(v___x_2122_);
if (v_isSharedCheck_2176_ == 0)
{
v___x_2171_ = v___x_2122_;
v_isShared_2172_ = v_isSharedCheck_2176_;
goto v_resetjp_2170_;
}
else
{
lean_inc(v_a_2169_);
lean_dec(v___x_2122_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2176_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
lean_object* v___x_2174_; 
if (v_isShared_2172_ == 0)
{
v___x_2174_ = v___x_2171_;
goto v_reusejp_2173_;
}
else
{
lean_object* v_reuseFailAlloc_2175_; 
v_reuseFailAlloc_2175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2175_, 0, v_a_2169_);
v___x_2174_ = v_reuseFailAlloc_2175_;
goto v_reusejp_2173_;
}
v_reusejp_2173_:
{
return v___x_2174_;
}
}
}
}
else
{
lean_object* v___x_2177_; lean_object* v___x_2179_; 
lean_dec(v_a_2115_);
v___x_2177_ = lean_box(0);
if (v_isShared_2118_ == 0)
{
lean_ctor_set(v___x_2117_, 0, v___x_2177_);
v___x_2179_ = v___x_2117_;
goto v_reusejp_2178_;
}
else
{
lean_object* v_reuseFailAlloc_2180_; 
v_reuseFailAlloc_2180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2180_, 0, v___x_2177_);
v___x_2179_ = v_reuseFailAlloc_2180_;
goto v_reusejp_2178_;
}
v_reusejp_2178_:
{
return v___x_2179_;
}
}
}
}
else
{
goto v___jp_2106_;
}
}
else
{
lean_dec_ref_known(v___x_2111_, 1);
goto v___jp_2106_;
}
v___jp_2106_:
{
lean_object* v___x_2107_; lean_object* v___x_2108_; 
v___x_2107_ = lean_box(0);
v___x_2108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2108_, 0, v___x_2107_);
return v___x_2108_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___at___00main_spec__10___boxed(lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_){
_start:
{
lean_object* v_res_2185_; 
v_res_2185_ = l_Lean_addTraceAsMessages___at___00main_spec__10(v___y_2182_, v___y_2183_);
lean_dec(v___y_2183_);
lean_dec_ref(v___y_2182_);
return v_res_2185_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__11(lean_object* v_as_2186_, size_t v_sz_2187_, size_t v_i_2188_, lean_object* v_b_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_){
_start:
{
uint8_t v___x_2193_; 
v___x_2193_ = lean_usize_dec_lt(v_i_2188_, v_sz_2187_);
if (v___x_2193_ == 0)
{
lean_object* v___x_2194_; 
v___x_2194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2194_, 0, v_b_2189_);
return v___x_2194_;
}
else
{
lean_object* v_options_2195_; lean_object* v_a_2196_; lean_object* v___x_2197_; 
v_options_2195_ = lean_ctor_get(v___y_2190_, 2);
v_a_2196_ = lean_array_uget_borrowed(v_as_2186_, v_i_2188_);
lean_inc_ref(v_options_2195_);
lean_inc(v_a_2196_);
v___x_2197_ = l_Lean_Compiler_LCNF_resumeCompilation(v_a_2196_, v_options_2195_, v___y_2190_, v___y_2191_);
if (lean_obj_tag(v___x_2197_) == 0)
{
lean_object* v___x_2198_; 
lean_dec_ref_known(v___x_2197_, 1);
v___x_2198_ = l_Lean_addTraceAsMessages___at___00main_spec__10(v___y_2190_, v___y_2191_);
if (lean_obj_tag(v___x_2198_) == 0)
{
lean_object* v___x_2199_; size_t v___x_2200_; size_t v___x_2201_; 
lean_dec_ref_known(v___x_2198_, 1);
v___x_2199_ = lean_box(0);
v___x_2200_ = ((size_t)1ULL);
v___x_2201_ = lean_usize_add(v_i_2188_, v___x_2200_);
v_i_2188_ = v___x_2201_;
v_b_2189_ = v___x_2199_;
goto _start;
}
else
{
return v___x_2198_;
}
}
else
{
lean_object* v_a_2203_; lean_object* v___x_2204_; 
v_a_2203_ = lean_ctor_get(v___x_2197_, 0);
lean_inc(v_a_2203_);
lean_dec_ref_known(v___x_2197_, 1);
v___x_2204_ = l_Lean_addTraceAsMessages___at___00main_spec__10(v___y_2190_, v___y_2191_);
if (lean_obj_tag(v___x_2204_) == 0)
{
lean_object* v___x_2206_; uint8_t v_isShared_2207_; uint8_t v_isSharedCheck_2211_; 
v_isSharedCheck_2211_ = !lean_is_exclusive(v___x_2204_);
if (v_isSharedCheck_2211_ == 0)
{
lean_object* v_unused_2212_; 
v_unused_2212_ = lean_ctor_get(v___x_2204_, 0);
lean_dec(v_unused_2212_);
v___x_2206_ = v___x_2204_;
v_isShared_2207_ = v_isSharedCheck_2211_;
goto v_resetjp_2205_;
}
else
{
lean_dec(v___x_2204_);
v___x_2206_ = lean_box(0);
v_isShared_2207_ = v_isSharedCheck_2211_;
goto v_resetjp_2205_;
}
v_resetjp_2205_:
{
lean_object* v___x_2209_; 
if (v_isShared_2207_ == 0)
{
lean_ctor_set_tag(v___x_2206_, 1);
lean_ctor_set(v___x_2206_, 0, v_a_2203_);
v___x_2209_ = v___x_2206_;
goto v_reusejp_2208_;
}
else
{
lean_object* v_reuseFailAlloc_2210_; 
v_reuseFailAlloc_2210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2210_, 0, v_a_2203_);
v___x_2209_ = v_reuseFailAlloc_2210_;
goto v_reusejp_2208_;
}
v_reusejp_2208_:
{
return v___x_2209_;
}
}
}
else
{
lean_dec(v_a_2203_);
return v___x_2204_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__11___boxed(lean_object* v_as_2213_, lean_object* v_sz_2214_, lean_object* v_i_2215_, lean_object* v_b_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_){
_start:
{
size_t v_sz_boxed_2220_; size_t v_i_boxed_2221_; lean_object* v_res_2222_; 
v_sz_boxed_2220_ = lean_unbox_usize(v_sz_2214_);
lean_dec(v_sz_2214_);
v_i_boxed_2221_ = lean_unbox_usize(v_i_2215_);
lean_dec(v_i_2215_);
v_res_2222_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__11(v_as_2213_, v_sz_boxed_2220_, v_i_boxed_2221_, v_b_2216_, v___y_2217_, v___y_2218_);
lean_dec(v___y_2218_);
lean_dec_ref(v___y_2217_);
lean_dec_ref(v_as_2213_);
return v_res_2222_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__13(lean_object* v_as_2223_, size_t v_sz_2224_, size_t v_i_2225_, lean_object* v_b_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_){
_start:
{
uint8_t v___x_2230_; 
v___x_2230_ = lean_usize_dec_lt(v_i_2225_, v_sz_2224_);
if (v___x_2230_ == 0)
{
lean_object* v___x_2231_; 
v___x_2231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2231_, 0, v_b_2226_);
return v___x_2231_;
}
else
{
lean_object* v_a_2232_; lean_object* v_declNames_2233_; lean_object* v___x_2234_; size_t v_sz_2235_; size_t v___x_2236_; lean_object* v___x_2237_; 
v_a_2232_ = lean_array_uget_borrowed(v_as_2223_, v_i_2225_);
v_declNames_2233_ = lean_ctor_get(v_a_2232_, 0);
v___x_2234_ = lean_box(0);
v_sz_2235_ = lean_array_size(v_declNames_2233_);
v___x_2236_ = ((size_t)0ULL);
v___x_2237_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__11(v_declNames_2233_, v_sz_2235_, v___x_2236_, v___x_2234_, v___y_2227_, v___y_2228_);
if (lean_obj_tag(v___x_2237_) == 0)
{
lean_object* v___x_2238_; 
lean_dec_ref_known(v___x_2237_, 1);
v___x_2238_ = l_Lean_Core_getAndEmptyMessageLog___redArg(v___y_2228_);
if (lean_obj_tag(v___x_2238_) == 0)
{
lean_object* v_a_2239_; lean_object* v_unreported_2240_; lean_object* v___x_2241_; 
v_a_2239_ = lean_ctor_get(v___x_2238_, 0);
lean_inc(v_a_2239_);
lean_dec_ref_known(v___x_2238_, 1);
v_unreported_2240_ = lean_ctor_get(v_a_2239_, 1);
lean_inc_ref(v_unreported_2240_);
lean_dec(v_a_2239_);
v___x_2241_ = l_Lean_PersistentArray_forIn___at___00main_spec__12(v_unreported_2240_, v___x_2234_, v___y_2227_, v___y_2228_);
lean_dec_ref(v_unreported_2240_);
if (lean_obj_tag(v___x_2241_) == 0)
{
size_t v___x_2242_; size_t v___x_2243_; 
lean_dec_ref_known(v___x_2241_, 1);
v___x_2242_ = ((size_t)1ULL);
v___x_2243_ = lean_usize_add(v_i_2225_, v___x_2242_);
v_i_2225_ = v___x_2243_;
v_b_2226_ = v___x_2234_;
goto _start;
}
else
{
return v___x_2241_;
}
}
else
{
lean_object* v_a_2245_; lean_object* v___x_2247_; uint8_t v_isShared_2248_; uint8_t v_isSharedCheck_2252_; 
v_a_2245_ = lean_ctor_get(v___x_2238_, 0);
v_isSharedCheck_2252_ = !lean_is_exclusive(v___x_2238_);
if (v_isSharedCheck_2252_ == 0)
{
v___x_2247_ = v___x_2238_;
v_isShared_2248_ = v_isSharedCheck_2252_;
goto v_resetjp_2246_;
}
else
{
lean_inc(v_a_2245_);
lean_dec(v___x_2238_);
v___x_2247_ = lean_box(0);
v_isShared_2248_ = v_isSharedCheck_2252_;
goto v_resetjp_2246_;
}
v_resetjp_2246_:
{
lean_object* v___x_2250_; 
if (v_isShared_2248_ == 0)
{
v___x_2250_ = v___x_2247_;
goto v_reusejp_2249_;
}
else
{
lean_object* v_reuseFailAlloc_2251_; 
v_reuseFailAlloc_2251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2251_, 0, v_a_2245_);
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
else
{
return v___x_2237_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__13___boxed(lean_object* v_as_2253_, lean_object* v_sz_2254_, lean_object* v_i_2255_, lean_object* v_b_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_){
_start:
{
size_t v_sz_boxed_2260_; size_t v_i_boxed_2261_; lean_object* v_res_2262_; 
v_sz_boxed_2260_ = lean_unbox_usize(v_sz_2254_);
lean_dec(v_sz_2254_);
v_i_boxed_2261_ = lean_unbox_usize(v_i_2255_);
lean_dec(v_i_2255_);
v_res_2262_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__13(v_as_2253_, v_sz_boxed_2260_, v_i_boxed_2261_, v_b_2256_, v___y_2257_, v___y_2258_);
lean_dec(v___y_2258_);
lean_dec_ref(v___y_2257_);
lean_dec_ref(v_as_2253_);
return v_res_2262_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17(lean_object* v_as_2263_, size_t v_i_2264_, size_t v_stop_2265_, lean_object* v_b_2266_){
_start:
{
uint8_t v___x_2267_; 
v___x_2267_ = lean_usize_dec_eq(v_i_2264_, v_stop_2265_);
if (v___x_2267_ == 0)
{
lean_object* v___x_2268_; lean_object* v_name_2269_; lean_object* v___x_2270_; size_t v___x_2271_; size_t v___x_2272_; 
v___x_2268_ = lean_array_uget_borrowed(v_as_2263_, v_i_2264_);
v_name_2269_ = lean_ctor_get(v___x_2268_, 0);
lean_inc(v_name_2269_);
v___x_2270_ = l_Lean_Compiler_LCNF_setDeclPublic(v_b_2266_, v_name_2269_);
v___x_2271_ = ((size_t)1ULL);
v___x_2272_ = lean_usize_add(v_i_2264_, v___x_2271_);
v_i_2264_ = v___x_2272_;
v_b_2266_ = v___x_2270_;
goto _start;
}
else
{
return v_b_2266_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17___boxed(lean_object* v_as_2274_, lean_object* v_i_2275_, lean_object* v_stop_2276_, lean_object* v_b_2277_){
_start:
{
size_t v_i_boxed_2278_; size_t v_stop_boxed_2279_; lean_object* v_res_2280_; 
v_i_boxed_2278_ = lean_unbox_usize(v_i_2275_);
lean_dec(v_i_2275_);
v_stop_boxed_2279_ = lean_unbox_usize(v_stop_2276_);
lean_dec(v_stop_2276_);
v_res_2280_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17(v_as_2274_, v_i_boxed_2278_, v_stop_boxed_2279_, v_b_2277_);
lean_dec_ref(v_as_2274_);
return v_res_2280_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30_spec__44___lam__0(uint8_t v___y_2281_, uint8_t v_suppressElabErrors_2282_, lean_object* v_x_2283_){
_start:
{
if (lean_obj_tag(v_x_2283_) == 1)
{
lean_object* v_pre_2284_; 
v_pre_2284_ = lean_ctor_get(v_x_2283_, 0);
switch(lean_obj_tag(v_pre_2284_))
{
case 1:
{
lean_object* v_pre_2285_; 
v_pre_2285_ = lean_ctor_get(v_pre_2284_, 0);
switch(lean_obj_tag(v_pre_2285_))
{
case 0:
{
lean_object* v_str_2286_; lean_object* v_str_2287_; lean_object* v___x_2288_; uint8_t v___x_2289_; 
v_str_2286_ = lean_ctor_get(v_x_2283_, 1);
v_str_2287_ = lean_ctor_get(v_pre_2284_, 1);
v___x_2288_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__0));
v___x_2289_ = lean_string_dec_eq(v_str_2287_, v___x_2288_);
if (v___x_2289_ == 0)
{
lean_object* v___x_2290_; uint8_t v___x_2291_; 
v___x_2290_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__1));
v___x_2291_ = lean_string_dec_eq(v_str_2287_, v___x_2290_);
if (v___x_2291_ == 0)
{
return v___y_2281_;
}
else
{
lean_object* v___x_2292_; uint8_t v___x_2293_; 
v___x_2292_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__2));
v___x_2293_ = lean_string_dec_eq(v_str_2286_, v___x_2292_);
if (v___x_2293_ == 0)
{
return v___y_2281_;
}
else
{
return v_suppressElabErrors_2282_;
}
}
}
else
{
lean_object* v___x_2294_; uint8_t v___x_2295_; 
v___x_2294_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__3));
v___x_2295_ = lean_string_dec_eq(v_str_2286_, v___x_2294_);
if (v___x_2295_ == 0)
{
return v___y_2281_;
}
else
{
return v_suppressElabErrors_2282_;
}
}
}
case 1:
{
lean_object* v_pre_2296_; 
v_pre_2296_ = lean_ctor_get(v_pre_2285_, 0);
if (lean_obj_tag(v_pre_2296_) == 0)
{
lean_object* v_str_2297_; lean_object* v_str_2298_; lean_object* v_str_2299_; lean_object* v___x_2300_; uint8_t v___x_2301_; 
v_str_2297_ = lean_ctor_get(v_x_2283_, 1);
v_str_2298_ = lean_ctor_get(v_pre_2284_, 1);
v_str_2299_ = lean_ctor_get(v_pre_2285_, 1);
v___x_2300_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__4));
v___x_2301_ = lean_string_dec_eq(v_str_2299_, v___x_2300_);
if (v___x_2301_ == 0)
{
return v___y_2281_;
}
else
{
lean_object* v___x_2302_; uint8_t v___x_2303_; 
v___x_2302_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__5));
v___x_2303_ = lean_string_dec_eq(v_str_2298_, v___x_2302_);
if (v___x_2303_ == 0)
{
return v___y_2281_;
}
else
{
lean_object* v___x_2304_; uint8_t v___x_2305_; 
v___x_2304_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___lam__0___closed__6));
v___x_2305_ = lean_string_dec_eq(v_str_2297_, v___x_2304_);
if (v___x_2305_ == 0)
{
return v___y_2281_;
}
else
{
return v_suppressElabErrors_2282_;
}
}
}
}
else
{
return v___y_2281_;
}
}
default: 
{
return v___y_2281_;
}
}
}
case 0:
{
lean_object* v_str_2306_; lean_object* v___x_2307_; uint8_t v___x_2308_; 
v_str_2306_ = lean_ctor_get(v_x_2283_, 1);
v___x_2307_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0));
v___x_2308_ = lean_string_dec_eq(v_str_2306_, v___x_2307_);
if (v___x_2308_ == 0)
{
return v___y_2281_;
}
else
{
return v_suppressElabErrors_2282_;
}
}
default: 
{
return v___y_2281_;
}
}
}
else
{
return v___y_2281_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30_spec__44___lam__0___boxed(lean_object* v___y_2309_, lean_object* v_suppressElabErrors_2310_, lean_object* v_x_2311_){
_start:
{
uint8_t v___y_38330__boxed_2312_; uint8_t v_suppressElabErrors_boxed_2313_; uint8_t v_res_2314_; lean_object* v_r_2315_; 
v___y_38330__boxed_2312_ = lean_unbox(v___y_2309_);
v_suppressElabErrors_boxed_2313_ = lean_unbox(v_suppressElabErrors_2310_);
v_res_2314_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30_spec__44___lam__0(v___y_38330__boxed_2312_, v_suppressElabErrors_boxed_2313_, v_x_2311_);
lean_dec(v_x_2311_);
v_r_2315_ = lean_box(v_res_2314_);
return v_r_2315_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30_spec__44(lean_object* v_ref_2316_, lean_object* v_msgData_2317_, uint8_t v_severity_2318_, uint8_t v_isSilent_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_){
_start:
{
lean_object* v___y_2324_; lean_object* v___y_2325_; lean_object* v___y_2326_; uint8_t v___y_2327_; lean_object* v___y_2328_; lean_object* v___y_2329_; uint8_t v___y_2330_; lean_object* v___y_2331_; lean_object* v___y_2332_; lean_object* v___y_2360_; lean_object* v___y_2361_; uint8_t v___y_2362_; uint8_t v___y_2363_; lean_object* v___y_2364_; lean_object* v___y_2365_; uint8_t v___y_2366_; lean_object* v___y_2367_; lean_object* v___y_2385_; lean_object* v___y_2386_; uint8_t v___y_2387_; lean_object* v___y_2388_; uint8_t v___y_2389_; lean_object* v___y_2390_; uint8_t v___y_2391_; lean_object* v___y_2392_; lean_object* v___y_2396_; lean_object* v___y_2397_; uint8_t v___y_2398_; lean_object* v___y_2399_; lean_object* v___y_2400_; uint8_t v___y_2401_; uint8_t v___y_2402_; uint8_t v___x_2407_; lean_object* v___y_2409_; lean_object* v___y_2410_; uint8_t v___y_2411_; lean_object* v___y_2412_; lean_object* v___y_2413_; uint8_t v___y_2414_; uint8_t v___y_2415_; uint8_t v___y_2417_; uint8_t v___x_2432_; 
v___x_2407_ = 2;
v___x_2432_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2318_, v___x_2407_);
if (v___x_2432_ == 0)
{
v___y_2417_ = v___x_2432_;
goto v___jp_2416_;
}
else
{
uint8_t v___x_2433_; 
lean_inc_ref(v_msgData_2317_);
v___x_2433_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_2317_);
v___y_2417_ = v___x_2433_;
goto v___jp_2416_;
}
v___jp_2323_:
{
lean_object* v___x_2333_; lean_object* v_currNamespace_2334_; lean_object* v_openDecls_2335_; lean_object* v_env_2336_; lean_object* v_nextMacroScope_2337_; lean_object* v_ngen_2338_; lean_object* v_auxDeclNGen_2339_; lean_object* v_traceState_2340_; lean_object* v_cache_2341_; lean_object* v_messages_2342_; lean_object* v_infoState_2343_; lean_object* v_snapshotTasks_2344_; lean_object* v___x_2346_; uint8_t v_isShared_2347_; uint8_t v_isSharedCheck_2358_; 
v___x_2333_ = lean_st_ref_take(v___y_2332_);
v_currNamespace_2334_ = lean_ctor_get(v___y_2331_, 6);
v_openDecls_2335_ = lean_ctor_get(v___y_2331_, 7);
v_env_2336_ = lean_ctor_get(v___x_2333_, 0);
v_nextMacroScope_2337_ = lean_ctor_get(v___x_2333_, 1);
v_ngen_2338_ = lean_ctor_get(v___x_2333_, 2);
v_auxDeclNGen_2339_ = lean_ctor_get(v___x_2333_, 3);
v_traceState_2340_ = lean_ctor_get(v___x_2333_, 4);
v_cache_2341_ = lean_ctor_get(v___x_2333_, 5);
v_messages_2342_ = lean_ctor_get(v___x_2333_, 6);
v_infoState_2343_ = lean_ctor_get(v___x_2333_, 7);
v_snapshotTasks_2344_ = lean_ctor_get(v___x_2333_, 8);
v_isSharedCheck_2358_ = !lean_is_exclusive(v___x_2333_);
if (v_isSharedCheck_2358_ == 0)
{
v___x_2346_ = v___x_2333_;
v_isShared_2347_ = v_isSharedCheck_2358_;
goto v_resetjp_2345_;
}
else
{
lean_inc(v_snapshotTasks_2344_);
lean_inc(v_infoState_2343_);
lean_inc(v_messages_2342_);
lean_inc(v_cache_2341_);
lean_inc(v_traceState_2340_);
lean_inc(v_auxDeclNGen_2339_);
lean_inc(v_ngen_2338_);
lean_inc(v_nextMacroScope_2337_);
lean_inc(v_env_2336_);
lean_dec(v___x_2333_);
v___x_2346_ = lean_box(0);
v_isShared_2347_ = v_isSharedCheck_2358_;
goto v_resetjp_2345_;
}
v_resetjp_2345_:
{
lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2353_; 
lean_inc(v_openDecls_2335_);
lean_inc(v_currNamespace_2334_);
v___x_2348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2348_, 0, v_currNamespace_2334_);
lean_ctor_set(v___x_2348_, 1, v_openDecls_2335_);
v___x_2349_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2349_, 0, v___x_2348_);
lean_ctor_set(v___x_2349_, 1, v___y_2326_);
lean_inc_ref(v___y_2328_);
lean_inc_ref(v___y_2324_);
v___x_2350_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2350_, 0, v___y_2324_);
lean_ctor_set(v___x_2350_, 1, v___y_2329_);
lean_ctor_set(v___x_2350_, 2, v___y_2325_);
lean_ctor_set(v___x_2350_, 3, v___y_2328_);
lean_ctor_set(v___x_2350_, 4, v___x_2349_);
lean_ctor_set_uint8(v___x_2350_, sizeof(void*)*5, v___y_2330_);
lean_ctor_set_uint8(v___x_2350_, sizeof(void*)*5 + 1, v___y_2327_);
lean_ctor_set_uint8(v___x_2350_, sizeof(void*)*5 + 2, v_isSilent_2319_);
v___x_2351_ = l_Lean_MessageLog_add(v___x_2350_, v_messages_2342_);
if (v_isShared_2347_ == 0)
{
lean_ctor_set(v___x_2346_, 6, v___x_2351_);
v___x_2353_ = v___x_2346_;
goto v_reusejp_2352_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v_env_2336_);
lean_ctor_set(v_reuseFailAlloc_2357_, 1, v_nextMacroScope_2337_);
lean_ctor_set(v_reuseFailAlloc_2357_, 2, v_ngen_2338_);
lean_ctor_set(v_reuseFailAlloc_2357_, 3, v_auxDeclNGen_2339_);
lean_ctor_set(v_reuseFailAlloc_2357_, 4, v_traceState_2340_);
lean_ctor_set(v_reuseFailAlloc_2357_, 5, v_cache_2341_);
lean_ctor_set(v_reuseFailAlloc_2357_, 6, v___x_2351_);
lean_ctor_set(v_reuseFailAlloc_2357_, 7, v_infoState_2343_);
lean_ctor_set(v_reuseFailAlloc_2357_, 8, v_snapshotTasks_2344_);
v___x_2353_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2352_;
}
v_reusejp_2352_:
{
lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; 
v___x_2354_ = lean_st_ref_set(v___y_2332_, v___x_2353_);
v___x_2355_ = lean_box(0);
v___x_2356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2356_, 0, v___x_2355_);
return v___x_2356_;
}
}
}
v___jp_2359_:
{
lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v_a_2370_; lean_object* v___x_2372_; uint8_t v_isShared_2373_; uint8_t v_isSharedCheck_2383_; 
v___x_2368_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_2317_);
v___x_2369_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_isConstantReplacement_x3f_spec__0_spec__0_spec__1_spec__6_spec__10_spec__14_spec__16(v___x_2368_, v___y_2320_, v___y_2321_);
v_a_2370_ = lean_ctor_get(v___x_2369_, 0);
v_isSharedCheck_2383_ = !lean_is_exclusive(v___x_2369_);
if (v_isSharedCheck_2383_ == 0)
{
v___x_2372_ = v___x_2369_;
v_isShared_2373_ = v_isSharedCheck_2383_;
goto v_resetjp_2371_;
}
else
{
lean_inc(v_a_2370_);
lean_dec(v___x_2369_);
v___x_2372_ = lean_box(0);
v_isShared_2373_ = v_isSharedCheck_2383_;
goto v_resetjp_2371_;
}
v_resetjp_2371_:
{
lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; 
lean_inc_ref_n(v___y_2364_, 2);
v___x_2374_ = l_Lean_FileMap_toPosition(v___y_2364_, v___y_2365_);
lean_dec(v___y_2365_);
v___x_2375_ = l_Lean_FileMap_toPosition(v___y_2364_, v___y_2367_);
lean_dec(v___y_2367_);
v___x_2376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2376_, 0, v___x_2375_);
v___x_2377_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__20___closed__1));
if (v___y_2362_ == 0)
{
lean_del_object(v___x_2372_);
lean_dec_ref(v___y_2360_);
v___y_2324_ = v___y_2361_;
v___y_2325_ = v___x_2376_;
v___y_2326_ = v_a_2370_;
v___y_2327_ = v___y_2363_;
v___y_2328_ = v___x_2377_;
v___y_2329_ = v___x_2374_;
v___y_2330_ = v___y_2366_;
v___y_2331_ = v___y_2320_;
v___y_2332_ = v___y_2321_;
goto v___jp_2323_;
}
else
{
uint8_t v___x_2378_; 
lean_inc(v_a_2370_);
v___x_2378_ = l_Lean_MessageData_hasTag(v___y_2360_, v_a_2370_);
if (v___x_2378_ == 0)
{
lean_object* v___x_2379_; lean_object* v___x_2381_; 
lean_dec_ref_known(v___x_2376_, 1);
lean_dec_ref(v___x_2374_);
lean_dec(v_a_2370_);
v___x_2379_ = lean_box(0);
if (v_isShared_2373_ == 0)
{
lean_ctor_set(v___x_2372_, 0, v___x_2379_);
v___x_2381_ = v___x_2372_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v___x_2379_);
v___x_2381_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
return v___x_2381_;
}
}
else
{
lean_del_object(v___x_2372_);
v___y_2324_ = v___y_2361_;
v___y_2325_ = v___x_2376_;
v___y_2326_ = v_a_2370_;
v___y_2327_ = v___y_2363_;
v___y_2328_ = v___x_2377_;
v___y_2329_ = v___x_2374_;
v___y_2330_ = v___y_2366_;
v___y_2331_ = v___y_2320_;
v___y_2332_ = v___y_2321_;
goto v___jp_2323_;
}
}
}
}
v___jp_2384_:
{
lean_object* v___x_2393_; 
v___x_2393_ = l_Lean_Syntax_getTailPos_x3f(v___y_2388_, v___y_2391_);
lean_dec(v___y_2388_);
if (lean_obj_tag(v___x_2393_) == 0)
{
lean_inc(v___y_2392_);
v___y_2360_ = v___y_2385_;
v___y_2361_ = v___y_2386_;
v___y_2362_ = v___y_2387_;
v___y_2363_ = v___y_2389_;
v___y_2364_ = v___y_2390_;
v___y_2365_ = v___y_2392_;
v___y_2366_ = v___y_2391_;
v___y_2367_ = v___y_2392_;
goto v___jp_2359_;
}
else
{
lean_object* v_val_2394_; 
v_val_2394_ = lean_ctor_get(v___x_2393_, 0);
lean_inc(v_val_2394_);
lean_dec_ref_known(v___x_2393_, 1);
v___y_2360_ = v___y_2385_;
v___y_2361_ = v___y_2386_;
v___y_2362_ = v___y_2387_;
v___y_2363_ = v___y_2389_;
v___y_2364_ = v___y_2390_;
v___y_2365_ = v___y_2392_;
v___y_2366_ = v___y_2391_;
v___y_2367_ = v_val_2394_;
goto v___jp_2359_;
}
}
v___jp_2395_:
{
lean_object* v_ref_2403_; lean_object* v___x_2404_; 
v_ref_2403_ = l_Lean_replaceRef(v_ref_2316_, v___y_2399_);
v___x_2404_ = l_Lean_Syntax_getPos_x3f(v_ref_2403_, v___y_2401_);
if (lean_obj_tag(v___x_2404_) == 0)
{
lean_object* v___x_2405_; 
v___x_2405_ = lean_unsigned_to_nat(0u);
v___y_2385_ = v___y_2396_;
v___y_2386_ = v___y_2397_;
v___y_2387_ = v___y_2398_;
v___y_2388_ = v_ref_2403_;
v___y_2389_ = v___y_2402_;
v___y_2390_ = v___y_2400_;
v___y_2391_ = v___y_2401_;
v___y_2392_ = v___x_2405_;
goto v___jp_2384_;
}
else
{
lean_object* v_val_2406_; 
v_val_2406_ = lean_ctor_get(v___x_2404_, 0);
lean_inc(v_val_2406_);
lean_dec_ref_known(v___x_2404_, 1);
v___y_2385_ = v___y_2396_;
v___y_2386_ = v___y_2397_;
v___y_2387_ = v___y_2398_;
v___y_2388_ = v_ref_2403_;
v___y_2389_ = v___y_2402_;
v___y_2390_ = v___y_2400_;
v___y_2391_ = v___y_2401_;
v___y_2392_ = v_val_2406_;
goto v___jp_2384_;
}
}
v___jp_2408_:
{
if (v___y_2415_ == 0)
{
v___y_2396_ = v___y_2410_;
v___y_2397_ = v___y_2409_;
v___y_2398_ = v___y_2411_;
v___y_2399_ = v___y_2412_;
v___y_2400_ = v___y_2413_;
v___y_2401_ = v___y_2414_;
v___y_2402_ = v_severity_2318_;
goto v___jp_2395_;
}
else
{
v___y_2396_ = v___y_2410_;
v___y_2397_ = v___y_2409_;
v___y_2398_ = v___y_2411_;
v___y_2399_ = v___y_2412_;
v___y_2400_ = v___y_2413_;
v___y_2401_ = v___y_2414_;
v___y_2402_ = v___x_2407_;
goto v___jp_2395_;
}
}
v___jp_2416_:
{
if (v___y_2417_ == 0)
{
lean_object* v_fileName_2418_; lean_object* v_fileMap_2419_; lean_object* v_options_2420_; lean_object* v_ref_2421_; uint8_t v_suppressElabErrors_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___f_2425_; uint8_t v___x_2426_; uint8_t v___x_2427_; 
v_fileName_2418_ = lean_ctor_get(v___y_2320_, 0);
v_fileMap_2419_ = lean_ctor_get(v___y_2320_, 1);
v_options_2420_ = lean_ctor_get(v___y_2320_, 2);
v_ref_2421_ = lean_ctor_get(v___y_2320_, 5);
v_suppressElabErrors_2422_ = lean_ctor_get_uint8(v___y_2320_, sizeof(void*)*14 + 1);
v___x_2423_ = lean_box(v___y_2417_);
v___x_2424_ = lean_box(v_suppressElabErrors_2422_);
v___f_2425_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30_spec__44___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2425_, 0, v___x_2423_);
lean_closure_set(v___f_2425_, 1, v___x_2424_);
v___x_2426_ = 1;
v___x_2427_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2318_, v___x_2426_);
if (v___x_2427_ == 0)
{
v___y_2409_ = v_fileName_2418_;
v___y_2410_ = v___f_2425_;
v___y_2411_ = v_suppressElabErrors_2422_;
v___y_2412_ = v_ref_2421_;
v___y_2413_ = v_fileMap_2419_;
v___y_2414_ = v___y_2417_;
v___y_2415_ = v___x_2427_;
goto v___jp_2408_;
}
else
{
lean_object* v___x_2428_; uint8_t v___x_2429_; 
v___x_2428_ = l_Lean_warningAsError;
v___x_2429_ = l_Lean_Option_get___at___00main_spec__8(v_options_2420_, v___x_2428_);
v___y_2409_ = v_fileName_2418_;
v___y_2410_ = v___f_2425_;
v___y_2411_ = v_suppressElabErrors_2422_;
v___y_2412_ = v_ref_2421_;
v___y_2413_ = v_fileMap_2419_;
v___y_2414_ = v___y_2417_;
v___y_2415_ = v___x_2429_;
goto v___jp_2408_;
}
}
else
{
lean_object* v___x_2430_; lean_object* v___x_2431_; 
lean_dec_ref(v_msgData_2317_);
v___x_2430_ = lean_box(0);
v___x_2431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2431_, 0, v___x_2430_);
return v___x_2431_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30_spec__44___boxed(lean_object* v_ref_2434_, lean_object* v_msgData_2435_, lean_object* v_severity_2436_, lean_object* v_isSilent_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_){
_start:
{
uint8_t v_severity_boxed_2441_; uint8_t v_isSilent_boxed_2442_; lean_object* v_res_2443_; 
v_severity_boxed_2441_ = lean_unbox(v_severity_2436_);
v_isSilent_boxed_2442_ = lean_unbox(v_isSilent_2437_);
v_res_2443_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30_spec__44(v_ref_2434_, v_msgData_2435_, v_severity_boxed_2441_, v_isSilent_boxed_2442_, v___y_2438_, v___y_2439_);
lean_dec(v___y_2439_);
lean_dec_ref(v___y_2438_);
lean_dec(v_ref_2434_);
return v_res_2443_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30(lean_object* v_msgData_2444_, uint8_t v_severity_2445_, uint8_t v_isSilent_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_){
_start:
{
lean_object* v_ref_2450_; lean_object* v___x_2451_; 
v_ref_2450_ = lean_ctor_get(v___y_2447_, 5);
v___x_2451_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30_spec__44(v_ref_2450_, v_msgData_2444_, v_severity_2445_, v_isSilent_2446_, v___y_2447_, v___y_2448_);
return v___x_2451_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30___boxed(lean_object* v_msgData_2452_, lean_object* v_severity_2453_, lean_object* v_isSilent_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_){
_start:
{
uint8_t v_severity_boxed_2458_; uint8_t v_isSilent_boxed_2459_; lean_object* v_res_2460_; 
v_severity_boxed_2458_ = lean_unbox(v_severity_2453_);
v_isSilent_boxed_2459_ = lean_unbox(v_isSilent_2454_);
v_res_2460_ = l_Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30(v_msgData_2452_, v_severity_boxed_2458_, v_isSilent_boxed_2459_, v___y_2455_, v___y_2456_);
lean_dec(v___y_2456_);
lean_dec_ref(v___y_2455_);
return v_res_2460_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00main_spec__14(lean_object* v_msgData_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_){
_start:
{
uint8_t v___x_2465_; uint8_t v___x_2466_; lean_object* v___x_2467_; 
v___x_2465_ = 2;
v___x_2466_ = 0;
v___x_2467_ = l_Lean_log___at___00Lean_logError___at___00main_spec__14_spec__30(v_msgData_2461_, v___x_2465_, v___x_2466_, v___y_2462_, v___y_2463_);
return v___x_2467_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00main_spec__14___boxed(lean_object* v_msgData_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_){
_start:
{
lean_object* v_res_2472_; 
v_res_2472_ = l_Lean_logError___at___00main_spec__14(v_msgData_2468_, v___y_2469_, v___y_2470_);
lean_dec(v___y_2470_);
lean_dec_ref(v___y_2469_);
return v_res_2472_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2(lean_object* v_x2_2473_, lean_object* v_as_2474_, size_t v_i_2475_, size_t v_stop_2476_, lean_object* v_b_2477_){
_start:
{
uint8_t v___x_2478_; 
v___x_2478_ = lean_usize_dec_eq(v_i_2475_, v_stop_2476_);
if (v___x_2478_ == 0)
{
lean_object* v___x_2479_; lean_object* v___x_2480_; size_t v___x_2481_; size_t v___x_2482_; 
v___x_2479_ = lean_array_uget_borrowed(v_as_2474_, v_i_2475_);
lean_inc_ref(v_x2_2473_);
lean_inc(v___x_2479_);
v___x_2480_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_2479_, v_x2_2473_, v_b_2477_);
v___x_2481_ = ((size_t)1ULL);
v___x_2482_ = lean_usize_add(v_i_2475_, v___x_2481_);
v_i_2475_ = v___x_2482_;
v_b_2477_ = v___x_2480_;
goto _start;
}
else
{
lean_dec_ref(v_x2_2473_);
return v_b_2477_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2___boxed(lean_object* v_x2_2484_, lean_object* v_as_2485_, lean_object* v_i_2486_, lean_object* v_stop_2487_, lean_object* v_b_2488_){
_start:
{
size_t v_i_boxed_2489_; size_t v_stop_boxed_2490_; lean_object* v_res_2491_; 
v_i_boxed_2489_ = lean_unbox_usize(v_i_2486_);
lean_dec(v_i_2486_);
v_stop_boxed_2490_ = lean_unbox_usize(v_stop_2487_);
lean_dec(v_stop_2487_);
v_res_2491_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2(v_x2_2484_, v_as_2485_, v_i_boxed_2489_, v_stop_boxed_2490_, v_b_2488_);
lean_dec_ref(v_as_2485_);
return v_res_2491_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15(lean_object* v_as_2492_, size_t v_i_2493_, size_t v_stop_2494_, lean_object* v_b_2495_){
_start:
{
lean_object* v___y_2497_; uint8_t v___x_2501_; 
v___x_2501_ = lean_usize_dec_eq(v_i_2493_, v_stop_2494_);
if (v___x_2501_ == 0)
{
lean_object* v___x_2502_; lean_object* v_declNames_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; uint8_t v___x_2506_; 
v___x_2502_ = lean_array_uget_borrowed(v_as_2492_, v_i_2493_);
v_declNames_2503_ = lean_ctor_get(v___x_2502_, 0);
v___x_2504_ = lean_unsigned_to_nat(0u);
v___x_2505_ = lean_array_get_size(v_declNames_2503_);
v___x_2506_ = lean_nat_dec_lt(v___x_2504_, v___x_2505_);
if (v___x_2506_ == 0)
{
v___y_2497_ = v_b_2495_;
goto v___jp_2496_;
}
else
{
uint8_t v___x_2507_; 
v___x_2507_ = lean_nat_dec_le(v___x_2505_, v___x_2505_);
if (v___x_2507_ == 0)
{
if (v___x_2506_ == 0)
{
v___y_2497_ = v_b_2495_;
goto v___jp_2496_;
}
else
{
size_t v___x_2508_; size_t v___x_2509_; lean_object* v___x_2510_; 
v___x_2508_ = ((size_t)0ULL);
v___x_2509_ = lean_usize_of_nat(v___x_2505_);
lean_inc(v___x_2502_);
v___x_2510_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2(v___x_2502_, v_declNames_2503_, v___x_2508_, v___x_2509_, v_b_2495_);
v___y_2497_ = v___x_2510_;
goto v___jp_2496_;
}
}
else
{
size_t v___x_2511_; size_t v___x_2512_; lean_object* v___x_2513_; 
v___x_2511_ = ((size_t)0ULL);
v___x_2512_ = lean_usize_of_nat(v___x_2505_);
lean_inc(v___x_2502_);
v___x_2513_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2(v___x_2502_, v_declNames_2503_, v___x_2511_, v___x_2512_, v_b_2495_);
v___y_2497_ = v___x_2513_;
goto v___jp_2496_;
}
}
}
else
{
return v_b_2495_;
}
v___jp_2496_:
{
size_t v___x_2498_; size_t v___x_2499_; 
v___x_2498_ = ((size_t)1ULL);
v___x_2499_ = lean_usize_add(v_i_2493_, v___x_2498_);
v_i_2493_ = v___x_2499_;
v_b_2495_ = v___y_2497_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15___boxed(lean_object* v_as_2514_, lean_object* v_i_2515_, lean_object* v_stop_2516_, lean_object* v_b_2517_){
_start:
{
size_t v_i_boxed_2518_; size_t v_stop_boxed_2519_; lean_object* v_res_2520_; 
v_i_boxed_2518_ = lean_unbox_usize(v_i_2515_);
lean_dec(v_i_2515_);
v_stop_boxed_2519_ = lean_unbox_usize(v_stop_2516_);
lean_dec(v_stop_2516_);
v_res_2520_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15(v_as_2514_, v_i_boxed_2518_, v_stop_boxed_2519_, v_b_2517_);
lean_dec_ref(v_as_2514_);
return v_res_2520_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__19(lean_object* v_a_2521_, lean_object* v_as_2522_, size_t v_i_2523_, size_t v_stop_2524_, lean_object* v_b_2525_){
_start:
{
lean_object* v___y_2527_; uint8_t v___x_2531_; 
v___x_2531_ = lean_usize_dec_eq(v_i_2523_, v_stop_2524_);
if (v___x_2531_ == 0)
{
lean_object* v___x_2532_; lean_object* v_name_2533_; uint8_t v___x_2534_; 
v___x_2532_ = lean_array_uget_borrowed(v_as_2522_, v_i_2523_);
v_name_2533_ = lean_ctor_get(v___x_2532_, 0);
lean_inc(v_name_2533_);
lean_inc_ref(v_a_2521_);
v___x_2534_ = l_Lean_isExtern(v_a_2521_, v_name_2533_);
if (v___x_2534_ == 0)
{
v___y_2527_ = v_b_2525_;
goto v___jp_2526_;
}
else
{
lean_object* v___x_2535_; 
lean_inc(v___x_2532_);
v___x_2535_ = lean_array_push(v_b_2525_, v___x_2532_);
v___y_2527_ = v___x_2535_;
goto v___jp_2526_;
}
}
else
{
lean_dec_ref(v_a_2521_);
return v_b_2525_;
}
v___jp_2526_:
{
size_t v___x_2528_; size_t v___x_2529_; 
v___x_2528_ = ((size_t)1ULL);
v___x_2529_ = lean_usize_add(v_i_2523_, v___x_2528_);
v_i_2523_ = v___x_2529_;
v_b_2525_ = v___y_2527_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__19___boxed(lean_object* v_a_2536_, lean_object* v_as_2537_, lean_object* v_i_2538_, lean_object* v_stop_2539_, lean_object* v_b_2540_){
_start:
{
size_t v_i_boxed_2541_; size_t v_stop_boxed_2542_; lean_object* v_res_2543_; 
v_i_boxed_2541_ = lean_unbox_usize(v_i_2538_);
lean_dec(v_i_2538_);
v_stop_boxed_2542_ = lean_unbox_usize(v_stop_2539_);
lean_dec(v_stop_2539_);
v_res_2543_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__19(v_a_2536_, v_as_2537_, v_i_boxed_2541_, v_stop_boxed_2542_, v_b_2540_);
lean_dec_ref(v_as_2537_);
return v_res_2543_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__14_spec__27(lean_object* v_as_2544_, size_t v_sz_2545_, size_t v_i_2546_, lean_object* v_b_2547_){
_start:
{
uint8_t v___x_2549_; 
v___x_2549_ = lean_usize_dec_lt(v_i_2546_, v_sz_2545_);
if (v___x_2549_ == 0)
{
lean_object* v___x_2550_; 
v___x_2550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2550_, 0, v_b_2547_);
return v___x_2550_;
}
else
{
uint8_t v___x_2551_; lean_object* v_a_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; 
lean_dec_ref(v_b_2547_);
v___x_2551_ = 0;
v_a_2552_ = lean_array_uget_borrowed(v_as_2544_, v_i_2546_);
lean_inc(v_a_2552_);
v___x_2553_ = l_Lean_Message_toString(v_a_2552_, v___x_2551_);
v___x_2554_ = l_IO_eprintln___at___00main_spec__6(v___x_2553_);
if (lean_obj_tag(v___x_2554_) == 0)
{
lean_object* v___x_2555_; size_t v___x_2556_; size_t v___x_2557_; 
lean_dec_ref_known(v___x_2554_, 1);
v___x_2555_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg___closed__0));
v___x_2556_ = ((size_t)1ULL);
v___x_2557_ = lean_usize_add(v_i_2546_, v___x_2556_);
v_i_2546_ = v___x_2557_;
v_b_2547_ = v___x_2555_;
goto _start;
}
else
{
lean_object* v_a_2559_; lean_object* v___x_2561_; uint8_t v_isShared_2562_; uint8_t v_isSharedCheck_2566_; 
v_a_2559_ = lean_ctor_get(v___x_2554_, 0);
v_isSharedCheck_2566_ = !lean_is_exclusive(v___x_2554_);
if (v_isSharedCheck_2566_ == 0)
{
v___x_2561_ = v___x_2554_;
v_isShared_2562_ = v_isSharedCheck_2566_;
goto v_resetjp_2560_;
}
else
{
lean_inc(v_a_2559_);
lean_dec(v___x_2554_);
v___x_2561_ = lean_box(0);
v_isShared_2562_ = v_isSharedCheck_2566_;
goto v_resetjp_2560_;
}
v_resetjp_2560_:
{
lean_object* v___x_2564_; 
if (v_isShared_2562_ == 0)
{
v___x_2564_ = v___x_2561_;
goto v_reusejp_2563_;
}
else
{
lean_object* v_reuseFailAlloc_2565_; 
v_reuseFailAlloc_2565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2565_, 0, v_a_2559_);
v___x_2564_ = v_reuseFailAlloc_2565_;
goto v_reusejp_2563_;
}
v_reusejp_2563_:
{
return v___x_2564_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__14_spec__27___boxed(lean_object* v_as_2567_, lean_object* v_sz_2568_, lean_object* v_i_2569_, lean_object* v_b_2570_, lean_object* v___y_2571_){
_start:
{
size_t v_sz_boxed_2572_; size_t v_i_boxed_2573_; lean_object* v_res_2574_; 
v_sz_boxed_2572_ = lean_unbox_usize(v_sz_2568_);
lean_dec(v_sz_2568_);
v_i_boxed_2573_ = lean_unbox_usize(v_i_2569_);
lean_dec(v_i_2569_);
v_res_2574_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__14_spec__27(v_as_2567_, v_sz_boxed_2572_, v_i_boxed_2573_, v_b_2570_);
lean_dec_ref(v_as_2567_);
return v_res_2574_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__14(lean_object* v_as_2575_, size_t v_sz_2576_, size_t v_i_2577_, lean_object* v_b_2578_){
_start:
{
uint8_t v___x_2580_; 
v___x_2580_ = lean_usize_dec_lt(v_i_2577_, v_sz_2576_);
if (v___x_2580_ == 0)
{
lean_object* v___x_2581_; 
v___x_2581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2581_, 0, v_b_2578_);
return v___x_2581_;
}
else
{
uint8_t v___x_2582_; lean_object* v_a_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; 
lean_dec_ref(v_b_2578_);
v___x_2582_ = 0;
v_a_2583_ = lean_array_uget_borrowed(v_as_2575_, v_i_2577_);
lean_inc(v_a_2583_);
v___x_2584_ = l_Lean_Message_toString(v_a_2583_, v___x_2582_);
v___x_2585_ = l_IO_eprintln___at___00main_spec__6(v___x_2584_);
if (lean_obj_tag(v___x_2585_) == 0)
{
lean_object* v___x_2586_; size_t v___x_2587_; size_t v___x_2588_; lean_object* v___x_2589_; 
lean_dec_ref_known(v___x_2585_, 1);
v___x_2586_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg___closed__0));
v___x_2587_ = ((size_t)1ULL);
v___x_2588_ = lean_usize_add(v_i_2577_, v___x_2587_);
v___x_2589_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__14_spec__27(v_as_2575_, v_sz_2576_, v___x_2588_, v___x_2586_);
return v___x_2589_;
}
else
{
lean_object* v_a_2590_; lean_object* v___x_2592_; uint8_t v_isShared_2593_; uint8_t v_isSharedCheck_2597_; 
v_a_2590_ = lean_ctor_get(v___x_2585_, 0);
v_isSharedCheck_2597_ = !lean_is_exclusive(v___x_2585_);
if (v_isSharedCheck_2597_ == 0)
{
v___x_2592_ = v___x_2585_;
v_isShared_2593_ = v_isSharedCheck_2597_;
goto v_resetjp_2591_;
}
else
{
lean_inc(v_a_2590_);
lean_dec(v___x_2585_);
v___x_2592_ = lean_box(0);
v_isShared_2593_ = v_isSharedCheck_2597_;
goto v_resetjp_2591_;
}
v_resetjp_2591_:
{
lean_object* v___x_2595_; 
if (v_isShared_2593_ == 0)
{
v___x_2595_ = v___x_2592_;
goto v_reusejp_2594_;
}
else
{
lean_object* v_reuseFailAlloc_2596_; 
v_reuseFailAlloc_2596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2596_, 0, v_a_2590_);
v___x_2595_ = v_reuseFailAlloc_2596_;
goto v_reusejp_2594_;
}
v_reusejp_2594_:
{
return v___x_2595_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__14___boxed(lean_object* v_as_2598_, lean_object* v_sz_2599_, lean_object* v_i_2600_, lean_object* v_b_2601_, lean_object* v___y_2602_){
_start:
{
size_t v_sz_boxed_2603_; size_t v_i_boxed_2604_; lean_object* v_res_2605_; 
v_sz_boxed_2603_ = lean_unbox_usize(v_sz_2599_);
lean_dec(v_sz_2599_);
v_i_boxed_2604_ = lean_unbox_usize(v_i_2600_);
lean_dec(v_i_2600_);
v_res_2605_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__14(v_as_2598_, v_sz_boxed_2603_, v_i_boxed_2604_, v_b_2601_);
lean_dec_ref(v_as_2598_);
return v_res_2605_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10(lean_object* v_init_2606_, lean_object* v_n_2607_, lean_object* v_b_2608_){
_start:
{
if (lean_obj_tag(v_n_2607_) == 0)
{
lean_object* v_cs_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; size_t v_sz_2613_; size_t v___x_2614_; lean_object* v___x_2615_; 
v_cs_2610_ = lean_ctor_get(v_n_2607_, 0);
v___x_2611_ = lean_box(0);
v___x_2612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2612_, 0, v___x_2611_);
lean_ctor_set(v___x_2612_, 1, v_b_2608_);
v_sz_2613_ = lean_array_size(v_cs_2610_);
v___x_2614_ = ((size_t)0ULL);
v___x_2615_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13(v_init_2606_, v_cs_2610_, v_sz_2613_, v___x_2614_, v___x_2612_);
if (lean_obj_tag(v___x_2615_) == 0)
{
lean_object* v_a_2616_; lean_object* v___x_2618_; uint8_t v_isShared_2619_; uint8_t v_isSharedCheck_2630_; 
v_a_2616_ = lean_ctor_get(v___x_2615_, 0);
v_isSharedCheck_2630_ = !lean_is_exclusive(v___x_2615_);
if (v_isSharedCheck_2630_ == 0)
{
v___x_2618_ = v___x_2615_;
v_isShared_2619_ = v_isSharedCheck_2630_;
goto v_resetjp_2617_;
}
else
{
lean_inc(v_a_2616_);
lean_dec(v___x_2615_);
v___x_2618_ = lean_box(0);
v_isShared_2619_ = v_isSharedCheck_2630_;
goto v_resetjp_2617_;
}
v_resetjp_2617_:
{
lean_object* v_fst_2620_; 
v_fst_2620_ = lean_ctor_get(v_a_2616_, 0);
if (lean_obj_tag(v_fst_2620_) == 0)
{
lean_object* v_snd_2621_; lean_object* v___x_2622_; lean_object* v___x_2624_; 
v_snd_2621_ = lean_ctor_get(v_a_2616_, 1);
lean_inc(v_snd_2621_);
lean_dec(v_a_2616_);
v___x_2622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2622_, 0, v_snd_2621_);
if (v_isShared_2619_ == 0)
{
lean_ctor_set(v___x_2618_, 0, v___x_2622_);
v___x_2624_ = v___x_2618_;
goto v_reusejp_2623_;
}
else
{
lean_object* v_reuseFailAlloc_2625_; 
v_reuseFailAlloc_2625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2625_, 0, v___x_2622_);
v___x_2624_ = v_reuseFailAlloc_2625_;
goto v_reusejp_2623_;
}
v_reusejp_2623_:
{
return v___x_2624_;
}
}
else
{
lean_object* v_val_2626_; lean_object* v___x_2628_; 
lean_inc_ref(v_fst_2620_);
lean_dec(v_a_2616_);
v_val_2626_ = lean_ctor_get(v_fst_2620_, 0);
lean_inc(v_val_2626_);
lean_dec_ref_known(v_fst_2620_, 1);
if (v_isShared_2619_ == 0)
{
lean_ctor_set(v___x_2618_, 0, v_val_2626_);
v___x_2628_ = v___x_2618_;
goto v_reusejp_2627_;
}
else
{
lean_object* v_reuseFailAlloc_2629_; 
v_reuseFailAlloc_2629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2629_, 0, v_val_2626_);
v___x_2628_ = v_reuseFailAlloc_2629_;
goto v_reusejp_2627_;
}
v_reusejp_2627_:
{
return v___x_2628_;
}
}
}
}
else
{
lean_object* v_a_2631_; lean_object* v___x_2633_; uint8_t v_isShared_2634_; uint8_t v_isSharedCheck_2638_; 
v_a_2631_ = lean_ctor_get(v___x_2615_, 0);
v_isSharedCheck_2638_ = !lean_is_exclusive(v___x_2615_);
if (v_isSharedCheck_2638_ == 0)
{
v___x_2633_ = v___x_2615_;
v_isShared_2634_ = v_isSharedCheck_2638_;
goto v_resetjp_2632_;
}
else
{
lean_inc(v_a_2631_);
lean_dec(v___x_2615_);
v___x_2633_ = lean_box(0);
v_isShared_2634_ = v_isSharedCheck_2638_;
goto v_resetjp_2632_;
}
v_resetjp_2632_:
{
lean_object* v___x_2636_; 
if (v_isShared_2634_ == 0)
{
v___x_2636_ = v___x_2633_;
goto v_reusejp_2635_;
}
else
{
lean_object* v_reuseFailAlloc_2637_; 
v_reuseFailAlloc_2637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2637_, 0, v_a_2631_);
v___x_2636_ = v_reuseFailAlloc_2637_;
goto v_reusejp_2635_;
}
v_reusejp_2635_:
{
return v___x_2636_;
}
}
}
}
else
{
lean_object* v_vs_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; size_t v_sz_2642_; size_t v___x_2643_; lean_object* v___x_2644_; 
v_vs_2639_ = lean_ctor_get(v_n_2607_, 0);
v___x_2640_ = lean_box(0);
v___x_2641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2640_);
lean_ctor_set(v___x_2641_, 1, v_b_2608_);
v_sz_2642_ = lean_array_size(v_vs_2639_);
v___x_2643_ = ((size_t)0ULL);
v___x_2644_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__14(v_vs_2639_, v_sz_2642_, v___x_2643_, v___x_2641_);
if (lean_obj_tag(v___x_2644_) == 0)
{
lean_object* v_a_2645_; lean_object* v___x_2647_; uint8_t v_isShared_2648_; uint8_t v_isSharedCheck_2659_; 
v_a_2645_ = lean_ctor_get(v___x_2644_, 0);
v_isSharedCheck_2659_ = !lean_is_exclusive(v___x_2644_);
if (v_isSharedCheck_2659_ == 0)
{
v___x_2647_ = v___x_2644_;
v_isShared_2648_ = v_isSharedCheck_2659_;
goto v_resetjp_2646_;
}
else
{
lean_inc(v_a_2645_);
lean_dec(v___x_2644_);
v___x_2647_ = lean_box(0);
v_isShared_2648_ = v_isSharedCheck_2659_;
goto v_resetjp_2646_;
}
v_resetjp_2646_:
{
lean_object* v_fst_2649_; 
v_fst_2649_ = lean_ctor_get(v_a_2645_, 0);
if (lean_obj_tag(v_fst_2649_) == 0)
{
lean_object* v_snd_2650_; lean_object* v___x_2651_; lean_object* v___x_2653_; 
v_snd_2650_ = lean_ctor_get(v_a_2645_, 1);
lean_inc(v_snd_2650_);
lean_dec(v_a_2645_);
v___x_2651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2651_, 0, v_snd_2650_);
if (v_isShared_2648_ == 0)
{
lean_ctor_set(v___x_2647_, 0, v___x_2651_);
v___x_2653_ = v___x_2647_;
goto v_reusejp_2652_;
}
else
{
lean_object* v_reuseFailAlloc_2654_; 
v_reuseFailAlloc_2654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2654_, 0, v___x_2651_);
v___x_2653_ = v_reuseFailAlloc_2654_;
goto v_reusejp_2652_;
}
v_reusejp_2652_:
{
return v___x_2653_;
}
}
else
{
lean_object* v_val_2655_; lean_object* v___x_2657_; 
lean_inc_ref(v_fst_2649_);
lean_dec(v_a_2645_);
v_val_2655_ = lean_ctor_get(v_fst_2649_, 0);
lean_inc(v_val_2655_);
lean_dec_ref_known(v_fst_2649_, 1);
if (v_isShared_2648_ == 0)
{
lean_ctor_set(v___x_2647_, 0, v_val_2655_);
v___x_2657_ = v___x_2647_;
goto v_reusejp_2656_;
}
else
{
lean_object* v_reuseFailAlloc_2658_; 
v_reuseFailAlloc_2658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2658_, 0, v_val_2655_);
v___x_2657_ = v_reuseFailAlloc_2658_;
goto v_reusejp_2656_;
}
v_reusejp_2656_:
{
return v___x_2657_;
}
}
}
}
else
{
lean_object* v_a_2660_; lean_object* v___x_2662_; uint8_t v_isShared_2663_; uint8_t v_isSharedCheck_2667_; 
v_a_2660_ = lean_ctor_get(v___x_2644_, 0);
v_isSharedCheck_2667_ = !lean_is_exclusive(v___x_2644_);
if (v_isSharedCheck_2667_ == 0)
{
v___x_2662_ = v___x_2644_;
v_isShared_2663_ = v_isSharedCheck_2667_;
goto v_resetjp_2661_;
}
else
{
lean_inc(v_a_2660_);
lean_dec(v___x_2644_);
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
v_reuseFailAlloc_2666_ = lean_alloc_ctor(1, 1, 0);
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
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13(lean_object* v_init_2668_, lean_object* v_as_2669_, size_t v_sz_2670_, size_t v_i_2671_, lean_object* v_b_2672_){
_start:
{
uint8_t v___x_2674_; 
v___x_2674_ = lean_usize_dec_lt(v_i_2671_, v_sz_2670_);
if (v___x_2674_ == 0)
{
lean_object* v___x_2675_; 
v___x_2675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2675_, 0, v_b_2672_);
return v___x_2675_;
}
else
{
lean_object* v_snd_2676_; lean_object* v___x_2678_; uint8_t v_isShared_2679_; uint8_t v_isSharedCheck_2710_; 
v_snd_2676_ = lean_ctor_get(v_b_2672_, 1);
v_isSharedCheck_2710_ = !lean_is_exclusive(v_b_2672_);
if (v_isSharedCheck_2710_ == 0)
{
lean_object* v_unused_2711_; 
v_unused_2711_ = lean_ctor_get(v_b_2672_, 0);
lean_dec(v_unused_2711_);
v___x_2678_ = v_b_2672_;
v_isShared_2679_ = v_isSharedCheck_2710_;
goto v_resetjp_2677_;
}
else
{
lean_inc(v_snd_2676_);
lean_dec(v_b_2672_);
v___x_2678_ = lean_box(0);
v_isShared_2679_ = v_isSharedCheck_2710_;
goto v_resetjp_2677_;
}
v_resetjp_2677_:
{
lean_object* v_a_2680_; lean_object* v___x_2681_; 
v_a_2680_ = lean_array_uget_borrowed(v_as_2669_, v_i_2671_);
lean_inc(v_snd_2676_);
v___x_2681_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10(v_init_2668_, v_a_2680_, v_snd_2676_);
if (lean_obj_tag(v___x_2681_) == 0)
{
lean_object* v_a_2682_; lean_object* v___x_2684_; uint8_t v_isShared_2685_; uint8_t v_isSharedCheck_2701_; 
v_a_2682_ = lean_ctor_get(v___x_2681_, 0);
v_isSharedCheck_2701_ = !lean_is_exclusive(v___x_2681_);
if (v_isSharedCheck_2701_ == 0)
{
v___x_2684_ = v___x_2681_;
v_isShared_2685_ = v_isSharedCheck_2701_;
goto v_resetjp_2683_;
}
else
{
lean_inc(v_a_2682_);
lean_dec(v___x_2681_);
v___x_2684_ = lean_box(0);
v_isShared_2685_ = v_isSharedCheck_2701_;
goto v_resetjp_2683_;
}
v_resetjp_2683_:
{
if (lean_obj_tag(v_a_2682_) == 0)
{
lean_object* v___x_2686_; lean_object* v___x_2688_; 
v___x_2686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2686_, 0, v_a_2682_);
if (v_isShared_2679_ == 0)
{
lean_ctor_set(v___x_2678_, 0, v___x_2686_);
v___x_2688_ = v___x_2678_;
goto v_reusejp_2687_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v___x_2686_);
lean_ctor_set(v_reuseFailAlloc_2692_, 1, v_snd_2676_);
v___x_2688_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2687_;
}
v_reusejp_2687_:
{
lean_object* v___x_2690_; 
if (v_isShared_2685_ == 0)
{
lean_ctor_set(v___x_2684_, 0, v___x_2688_);
v___x_2690_ = v___x_2684_;
goto v_reusejp_2689_;
}
else
{
lean_object* v_reuseFailAlloc_2691_; 
v_reuseFailAlloc_2691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2691_, 0, v___x_2688_);
v___x_2690_ = v_reuseFailAlloc_2691_;
goto v_reusejp_2689_;
}
v_reusejp_2689_:
{
return v___x_2690_;
}
}
}
else
{
lean_object* v_a_2693_; lean_object* v___x_2694_; lean_object* v___x_2696_; 
lean_del_object(v___x_2684_);
lean_dec(v_snd_2676_);
v_a_2693_ = lean_ctor_get(v_a_2682_, 0);
lean_inc(v_a_2693_);
lean_dec_ref_known(v_a_2682_, 1);
v___x_2694_ = lean_box(0);
if (v_isShared_2679_ == 0)
{
lean_ctor_set(v___x_2678_, 1, v_a_2693_);
lean_ctor_set(v___x_2678_, 0, v___x_2694_);
v___x_2696_ = v___x_2678_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v___x_2694_);
lean_ctor_set(v_reuseFailAlloc_2700_, 1, v_a_2693_);
v___x_2696_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
size_t v___x_2697_; size_t v___x_2698_; 
v___x_2697_ = ((size_t)1ULL);
v___x_2698_ = lean_usize_add(v_i_2671_, v___x_2697_);
v_i_2671_ = v___x_2698_;
v_b_2672_ = v___x_2696_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2702_; lean_object* v___x_2704_; uint8_t v_isShared_2705_; uint8_t v_isSharedCheck_2709_; 
lean_del_object(v___x_2678_);
lean_dec(v_snd_2676_);
v_a_2702_ = lean_ctor_get(v___x_2681_, 0);
v_isSharedCheck_2709_ = !lean_is_exclusive(v___x_2681_);
if (v_isSharedCheck_2709_ == 0)
{
v___x_2704_ = v___x_2681_;
v_isShared_2705_ = v_isSharedCheck_2709_;
goto v_resetjp_2703_;
}
else
{
lean_inc(v_a_2702_);
lean_dec(v___x_2681_);
v___x_2704_ = lean_box(0);
v_isShared_2705_ = v_isSharedCheck_2709_;
goto v_resetjp_2703_;
}
v_resetjp_2703_:
{
lean_object* v___x_2707_; 
if (v_isShared_2705_ == 0)
{
v___x_2707_ = v___x_2704_;
goto v_reusejp_2706_;
}
else
{
lean_object* v_reuseFailAlloc_2708_; 
v_reuseFailAlloc_2708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2708_, 0, v_a_2702_);
v___x_2707_ = v_reuseFailAlloc_2708_;
goto v_reusejp_2706_;
}
v_reusejp_2706_:
{
return v___x_2707_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13___boxed(lean_object* v_init_2712_, lean_object* v_as_2713_, lean_object* v_sz_2714_, lean_object* v_i_2715_, lean_object* v_b_2716_, lean_object* v___y_2717_){
_start:
{
size_t v_sz_boxed_2718_; size_t v_i_boxed_2719_; lean_object* v_res_2720_; 
v_sz_boxed_2718_ = lean_unbox_usize(v_sz_2714_);
lean_dec(v_sz_2714_);
v_i_boxed_2719_ = lean_unbox_usize(v_i_2715_);
lean_dec(v_i_2715_);
v_res_2720_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13(v_init_2712_, v_as_2713_, v_sz_boxed_2718_, v_i_boxed_2719_, v_b_2716_);
lean_dec_ref(v_as_2713_);
return v_res_2720_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10___boxed(lean_object* v_init_2721_, lean_object* v_n_2722_, lean_object* v_b_2723_, lean_object* v___y_2724_){
_start:
{
lean_object* v_res_2725_; 
v_res_2725_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10(v_init_2721_, v_n_2722_, v_b_2723_);
lean_dec_ref(v_n_2722_);
return v_res_2725_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__16(lean_object* v_as_2726_, size_t v_sz_2727_, size_t v_i_2728_, lean_object* v_b_2729_){
_start:
{
uint8_t v___x_2731_; 
v___x_2731_ = lean_usize_dec_lt(v_i_2728_, v_sz_2727_);
if (v___x_2731_ == 0)
{
lean_object* v___x_2732_; 
v___x_2732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2732_, 0, v_b_2729_);
return v___x_2732_;
}
else
{
uint8_t v___x_2733_; lean_object* v_a_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; 
lean_dec_ref(v_b_2729_);
v___x_2733_ = 0;
v_a_2734_ = lean_array_uget_borrowed(v_as_2726_, v_i_2728_);
lean_inc(v_a_2734_);
v___x_2735_ = l_Lean_Message_toString(v_a_2734_, v___x_2733_);
v___x_2736_ = l_IO_eprintln___at___00main_spec__6(v___x_2735_);
if (lean_obj_tag(v___x_2736_) == 0)
{
lean_object* v___x_2737_; size_t v___x_2738_; size_t v___x_2739_; 
lean_dec_ref_known(v___x_2736_, 1);
v___x_2737_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg___closed__0));
v___x_2738_ = ((size_t)1ULL);
v___x_2739_ = lean_usize_add(v_i_2728_, v___x_2738_);
v_i_2728_ = v___x_2739_;
v_b_2729_ = v___x_2737_;
goto _start;
}
else
{
lean_object* v_a_2741_; lean_object* v___x_2743_; uint8_t v_isShared_2744_; uint8_t v_isSharedCheck_2748_; 
v_a_2741_ = lean_ctor_get(v___x_2736_, 0);
v_isSharedCheck_2748_ = !lean_is_exclusive(v___x_2736_);
if (v_isSharedCheck_2748_ == 0)
{
v___x_2743_ = v___x_2736_;
v_isShared_2744_ = v_isSharedCheck_2748_;
goto v_resetjp_2742_;
}
else
{
lean_inc(v_a_2741_);
lean_dec(v___x_2736_);
v___x_2743_ = lean_box(0);
v_isShared_2744_ = v_isSharedCheck_2748_;
goto v_resetjp_2742_;
}
v_resetjp_2742_:
{
lean_object* v___x_2746_; 
if (v_isShared_2744_ == 0)
{
v___x_2746_ = v___x_2743_;
goto v_reusejp_2745_;
}
else
{
lean_object* v_reuseFailAlloc_2747_; 
v_reuseFailAlloc_2747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2747_, 0, v_a_2741_);
v___x_2746_ = v_reuseFailAlloc_2747_;
goto v_reusejp_2745_;
}
v_reusejp_2745_:
{
return v___x_2746_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__16___boxed(lean_object* v_as_2749_, lean_object* v_sz_2750_, lean_object* v_i_2751_, lean_object* v_b_2752_, lean_object* v___y_2753_){
_start:
{
size_t v_sz_boxed_2754_; size_t v_i_boxed_2755_; lean_object* v_res_2756_; 
v_sz_boxed_2754_ = lean_unbox_usize(v_sz_2750_);
lean_dec(v_sz_2750_);
v_i_boxed_2755_ = lean_unbox_usize(v_i_2751_);
lean_dec(v_i_2751_);
v_res_2756_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__16(v_as_2749_, v_sz_boxed_2754_, v_i_boxed_2755_, v_b_2752_);
lean_dec_ref(v_as_2749_);
return v_res_2756_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11(lean_object* v_as_2757_, size_t v_sz_2758_, size_t v_i_2759_, lean_object* v_b_2760_){
_start:
{
uint8_t v___x_2762_; 
v___x_2762_ = lean_usize_dec_lt(v_i_2759_, v_sz_2758_);
if (v___x_2762_ == 0)
{
lean_object* v___x_2763_; 
v___x_2763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2763_, 0, v_b_2760_);
return v___x_2763_;
}
else
{
uint8_t v___x_2764_; lean_object* v_a_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; 
lean_dec_ref(v_b_2760_);
v___x_2764_ = 0;
v_a_2765_ = lean_array_uget_borrowed(v_as_2757_, v_i_2759_);
lean_inc(v_a_2765_);
v___x_2766_ = l_Lean_Message_toString(v_a_2765_, v___x_2764_);
v___x_2767_ = l_IO_eprintln___at___00main_spec__6(v___x_2766_);
if (lean_obj_tag(v___x_2767_) == 0)
{
lean_object* v___x_2768_; size_t v___x_2769_; size_t v___x_2770_; lean_object* v___x_2771_; 
lean_dec_ref_known(v___x_2767_, 1);
v___x_2768_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg___closed__0));
v___x_2769_ = ((size_t)1ULL);
v___x_2770_ = lean_usize_add(v_i_2759_, v___x_2769_);
v___x_2771_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__16(v_as_2757_, v_sz_2758_, v___x_2770_, v___x_2768_);
return v___x_2771_;
}
else
{
lean_object* v_a_2772_; lean_object* v___x_2774_; uint8_t v_isShared_2775_; uint8_t v_isSharedCheck_2779_; 
v_a_2772_ = lean_ctor_get(v___x_2767_, 0);
v_isSharedCheck_2779_ = !lean_is_exclusive(v___x_2767_);
if (v_isSharedCheck_2779_ == 0)
{
v___x_2774_ = v___x_2767_;
v_isShared_2775_ = v_isSharedCheck_2779_;
goto v_resetjp_2773_;
}
else
{
lean_inc(v_a_2772_);
lean_dec(v___x_2767_);
v___x_2774_ = lean_box(0);
v_isShared_2775_ = v_isSharedCheck_2779_;
goto v_resetjp_2773_;
}
v_resetjp_2773_:
{
lean_object* v___x_2777_; 
if (v_isShared_2775_ == 0)
{
v___x_2777_ = v___x_2774_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2778_, 0, v_a_2772_);
v___x_2777_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
return v___x_2777_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11___boxed(lean_object* v_as_2780_, lean_object* v_sz_2781_, lean_object* v_i_2782_, lean_object* v_b_2783_, lean_object* v___y_2784_){
_start:
{
size_t v_sz_boxed_2785_; size_t v_i_boxed_2786_; lean_object* v_res_2787_; 
v_sz_boxed_2785_ = lean_unbox_usize(v_sz_2781_);
lean_dec(v_sz_2781_);
v_i_boxed_2786_ = lean_unbox_usize(v_i_2782_);
lean_dec(v_i_2782_);
v_res_2787_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11(v_as_2780_, v_sz_boxed_2785_, v_i_boxed_2786_, v_b_2783_);
lean_dec_ref(v_as_2780_);
return v_res_2787_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__7(lean_object* v_t_2788_, lean_object* v_init_2789_){
_start:
{
lean_object* v_root_2791_; lean_object* v_tail_2792_; lean_object* v___x_2793_; 
v_root_2791_ = lean_ctor_get(v_t_2788_, 0);
v_tail_2792_ = lean_ctor_get(v_t_2788_, 1);
v___x_2793_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10(v_init_2789_, v_root_2791_, v_init_2789_);
if (lean_obj_tag(v___x_2793_) == 0)
{
lean_object* v_a_2794_; lean_object* v___x_2796_; uint8_t v_isShared_2797_; uint8_t v_isSharedCheck_2830_; 
v_a_2794_ = lean_ctor_get(v___x_2793_, 0);
v_isSharedCheck_2830_ = !lean_is_exclusive(v___x_2793_);
if (v_isSharedCheck_2830_ == 0)
{
v___x_2796_ = v___x_2793_;
v_isShared_2797_ = v_isSharedCheck_2830_;
goto v_resetjp_2795_;
}
else
{
lean_inc(v_a_2794_);
lean_dec(v___x_2793_);
v___x_2796_ = lean_box(0);
v_isShared_2797_ = v_isSharedCheck_2830_;
goto v_resetjp_2795_;
}
v_resetjp_2795_:
{
if (lean_obj_tag(v_a_2794_) == 0)
{
lean_object* v_a_2798_; lean_object* v___x_2800_; 
v_a_2798_ = lean_ctor_get(v_a_2794_, 0);
lean_inc(v_a_2798_);
lean_dec_ref_known(v_a_2794_, 1);
if (v_isShared_2797_ == 0)
{
lean_ctor_set(v___x_2796_, 0, v_a_2798_);
v___x_2800_ = v___x_2796_;
goto v_reusejp_2799_;
}
else
{
lean_object* v_reuseFailAlloc_2801_; 
v_reuseFailAlloc_2801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2801_, 0, v_a_2798_);
v___x_2800_ = v_reuseFailAlloc_2801_;
goto v_reusejp_2799_;
}
v_reusejp_2799_:
{
return v___x_2800_;
}
}
else
{
lean_object* v_a_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; size_t v_sz_2805_; size_t v___x_2806_; lean_object* v___x_2807_; 
lean_del_object(v___x_2796_);
v_a_2802_ = lean_ctor_get(v_a_2794_, 0);
lean_inc(v_a_2802_);
lean_dec_ref_known(v_a_2794_, 1);
v___x_2803_ = lean_box(0);
v___x_2804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2804_, 0, v___x_2803_);
lean_ctor_set(v___x_2804_, 1, v_a_2802_);
v_sz_2805_ = lean_array_size(v_tail_2792_);
v___x_2806_ = ((size_t)0ULL);
v___x_2807_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11(v_tail_2792_, v_sz_2805_, v___x_2806_, v___x_2804_);
if (lean_obj_tag(v___x_2807_) == 0)
{
lean_object* v_a_2808_; lean_object* v___x_2810_; uint8_t v_isShared_2811_; uint8_t v_isSharedCheck_2821_; 
v_a_2808_ = lean_ctor_get(v___x_2807_, 0);
v_isSharedCheck_2821_ = !lean_is_exclusive(v___x_2807_);
if (v_isSharedCheck_2821_ == 0)
{
v___x_2810_ = v___x_2807_;
v_isShared_2811_ = v_isSharedCheck_2821_;
goto v_resetjp_2809_;
}
else
{
lean_inc(v_a_2808_);
lean_dec(v___x_2807_);
v___x_2810_ = lean_box(0);
v_isShared_2811_ = v_isSharedCheck_2821_;
goto v_resetjp_2809_;
}
v_resetjp_2809_:
{
lean_object* v_fst_2812_; 
v_fst_2812_ = lean_ctor_get(v_a_2808_, 0);
if (lean_obj_tag(v_fst_2812_) == 0)
{
lean_object* v_snd_2813_; lean_object* v___x_2815_; 
v_snd_2813_ = lean_ctor_get(v_a_2808_, 1);
lean_inc(v_snd_2813_);
lean_dec(v_a_2808_);
if (v_isShared_2811_ == 0)
{
lean_ctor_set(v___x_2810_, 0, v_snd_2813_);
v___x_2815_ = v___x_2810_;
goto v_reusejp_2814_;
}
else
{
lean_object* v_reuseFailAlloc_2816_; 
v_reuseFailAlloc_2816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2816_, 0, v_snd_2813_);
v___x_2815_ = v_reuseFailAlloc_2816_;
goto v_reusejp_2814_;
}
v_reusejp_2814_:
{
return v___x_2815_;
}
}
else
{
lean_object* v_val_2817_; lean_object* v___x_2819_; 
lean_inc_ref(v_fst_2812_);
lean_dec(v_a_2808_);
v_val_2817_ = lean_ctor_get(v_fst_2812_, 0);
lean_inc(v_val_2817_);
lean_dec_ref_known(v_fst_2812_, 1);
if (v_isShared_2811_ == 0)
{
lean_ctor_set(v___x_2810_, 0, v_val_2817_);
v___x_2819_ = v___x_2810_;
goto v_reusejp_2818_;
}
else
{
lean_object* v_reuseFailAlloc_2820_; 
v_reuseFailAlloc_2820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2820_, 0, v_val_2817_);
v___x_2819_ = v_reuseFailAlloc_2820_;
goto v_reusejp_2818_;
}
v_reusejp_2818_:
{
return v___x_2819_;
}
}
}
}
else
{
lean_object* v_a_2822_; lean_object* v___x_2824_; uint8_t v_isShared_2825_; uint8_t v_isSharedCheck_2829_; 
v_a_2822_ = lean_ctor_get(v___x_2807_, 0);
v_isSharedCheck_2829_ = !lean_is_exclusive(v___x_2807_);
if (v_isSharedCheck_2829_ == 0)
{
v___x_2824_ = v___x_2807_;
v_isShared_2825_ = v_isSharedCheck_2829_;
goto v_resetjp_2823_;
}
else
{
lean_inc(v_a_2822_);
lean_dec(v___x_2807_);
v___x_2824_ = lean_box(0);
v_isShared_2825_ = v_isSharedCheck_2829_;
goto v_resetjp_2823_;
}
v_resetjp_2823_:
{
lean_object* v___x_2827_; 
if (v_isShared_2825_ == 0)
{
v___x_2827_ = v___x_2824_;
goto v_reusejp_2826_;
}
else
{
lean_object* v_reuseFailAlloc_2828_; 
v_reuseFailAlloc_2828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2828_, 0, v_a_2822_);
v___x_2827_ = v_reuseFailAlloc_2828_;
goto v_reusejp_2826_;
}
v_reusejp_2826_:
{
return v___x_2827_;
}
}
}
}
}
}
else
{
lean_object* v_a_2831_; lean_object* v___x_2833_; uint8_t v_isShared_2834_; uint8_t v_isSharedCheck_2838_; 
v_a_2831_ = lean_ctor_get(v___x_2793_, 0);
v_isSharedCheck_2838_ = !lean_is_exclusive(v___x_2793_);
if (v_isSharedCheck_2838_ == 0)
{
v___x_2833_ = v___x_2793_;
v_isShared_2834_ = v_isSharedCheck_2838_;
goto v_resetjp_2832_;
}
else
{
lean_inc(v_a_2831_);
lean_dec(v___x_2793_);
v___x_2833_ = lean_box(0);
v_isShared_2834_ = v_isSharedCheck_2838_;
goto v_resetjp_2832_;
}
v_resetjp_2832_:
{
lean_object* v___x_2836_; 
if (v_isShared_2834_ == 0)
{
v___x_2836_ = v___x_2833_;
goto v_reusejp_2835_;
}
else
{
lean_object* v_reuseFailAlloc_2837_; 
v_reuseFailAlloc_2837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2837_, 0, v_a_2831_);
v___x_2836_ = v_reuseFailAlloc_2837_;
goto v_reusejp_2835_;
}
v_reusejp_2835_:
{
return v___x_2836_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__7___boxed(lean_object* v_t_2839_, lean_object* v_init_2840_, lean_object* v___y_2841_){
_start:
{
lean_object* v_res_2842_; 
v_res_2842_ = l_Lean_PersistentArray_forIn___at___00main_spec__7(v_t_2839_, v_init_2840_);
lean_dec_ref(v_t_2839_);
return v_res_2842_;
}
}
static lean_object* _init_l_main___closed__3(void){
_start:
{
lean_object* v___x_2846_; 
v___x_2846_ = l_Lean_ScopedEnvExtension_instInhabitedStateStack_default(lean_box(0), lean_box(0), lean_box(0));
return v___x_2846_;
}
}
static lean_object* _init_l_main___closed__4(void){
_start:
{
lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; 
v___x_2847_ = l_Lean_instInhabitedClassState_default;
v___x_2848_ = lean_box(0);
v___x_2849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2849_, 0, v___x_2848_);
lean_ctor_set(v___x_2849_, 1, v___x_2847_);
return v___x_2849_;
}
}
static lean_object* _init_l_main___closed__5(void){
_start:
{
lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; 
v___x_2850_ = l_Lean_Meta_Match_Extension_instInhabitedState;
v___x_2851_ = lean_box(0);
v___x_2852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2852_, 0, v___x_2851_);
lean_ctor_set(v___x_2852_, 1, v___x_2850_);
return v___x_2852_;
}
}
static lean_object* _init_l_main___closed__6(void){
_start:
{
lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; 
v___x_2853_ = ((lean_object*)(l_main___closed__2));
v___x_2854_ = ((lean_object*)(l_main___closed__1));
v___x_2855_ = l_Lean_PersistentHashMap_instInhabited(lean_box(0), lean_box(0), v___x_2854_, v___x_2853_);
return v___x_2855_;
}
}
static lean_object* _init_l_main___closed__7(void){
_start:
{
lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; 
v___x_2856_ = lean_obj_once(&l_main___closed__6, &l_main___closed__6_once, _init_l_main___closed__6);
v___x_2857_ = lean_box(0);
v___x_2858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2858_, 0, v___x_2857_);
lean_ctor_set(v___x_2858_, 1, v___x_2856_);
return v___x_2858_;
}
}
static lean_object* _init_l_main___closed__8(void){
_start:
{
lean_object* v___x_2859_; lean_object* v___x_2860_; 
v___x_2859_ = lean_obj_once(&l_main___closed__7, &l_main___closed__7_once, _init_l_main___closed__7);
v___x_2860_ = l_Lean_instInhabitedPersistentEnvExtensionState___redArg(v___x_2859_);
return v___x_2860_;
}
}
static lean_object* _init_l_main___closed__9(void){
_start:
{
lean_object* v___x_2861_; 
v___x_2861_ = l_Array_instInhabited(lean_box(0));
return v___x_2861_;
}
}
static lean_object* _init_l_main___closed__15(void){
_start:
{
lean_object* v___x_2870_; lean_object* v___x_2871_; 
v___x_2870_ = l_Lean_Options_empty;
v___x_2871_ = l_Lean_Core_getMaxHeartbeats(v___x_2870_);
return v___x_2871_;
}
}
static lean_object* _init_l_main___closed__20(void){
_start:
{
lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; 
v___x_2876_ = ((lean_object*)(l_main___closed__19));
v___x_2877_ = lean_unsigned_to_nat(27u);
v___x_2878_ = lean_unsigned_to_nat(149u);
v___x_2879_ = ((lean_object*)(l_main___closed__18));
v___x_2880_ = ((lean_object*)(l_main___closed__17));
v___x_2881_ = l_mkPanicMessageWithDecl(v___x_2880_, v___x_2879_, v___x_2878_, v___x_2877_, v___x_2876_);
return v___x_2881_;
}
}
static lean_object* _init_l_main___closed__22(void){
_start:
{
lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; 
v___x_2883_ = ((lean_object*)(l_main___closed__19));
v___x_2884_ = lean_unsigned_to_nat(51u);
v___x_2885_ = lean_unsigned_to_nat(122u);
v___x_2886_ = ((lean_object*)(l_main___closed__18));
v___x_2887_ = ((lean_object*)(l_main___closed__17));
v___x_2888_ = l_mkPanicMessageWithDecl(v___x_2887_, v___x_2886_, v___x_2885_, v___x_2884_, v___x_2883_);
return v___x_2888_;
}
}
static lean_object* _init_l_main___closed__23(void){
_start:
{
lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; 
v___x_2889_ = lean_unsigned_to_nat(1u);
v___x_2890_ = l_Lean_firstFrontendMacroScope;
v___x_2891_ = lean_nat_add(v___x_2890_, v___x_2889_);
return v___x_2891_;
}
}
static lean_object* _init_l_main___closed__27(void){
_start:
{
lean_object* v___x_2898_; uint64_t v___x_2899_; lean_object* v___x_2900_; 
v___x_2898_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1);
v___x_2899_ = 0ULL;
v___x_2900_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2900_, 0, v___x_2898_);
lean_ctor_set_uint64(v___x_2900_, sizeof(void*)*1, v___x_2899_);
return v___x_2900_;
}
}
static lean_object* _init_l_main___closed__28(void){
_start:
{
lean_object* v___x_2901_; 
v___x_2901_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2901_;
}
}
static lean_object* _init_l_main___closed__29(void){
_start:
{
lean_object* v___x_2902_; lean_object* v___x_2903_; 
v___x_2902_ = lean_obj_once(&l_main___closed__28, &l_main___closed__28_once, _init_l_main___closed__28);
v___x_2903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2903_, 0, v___x_2902_);
return v___x_2903_;
}
}
static lean_object* _init_l_main___closed__30(void){
_start:
{
lean_object* v___x_2904_; lean_object* v___x_2905_; 
v___x_2904_ = lean_obj_once(&l_main___closed__29, &l_main___closed__29_once, _init_l_main___closed__29);
v___x_2905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2905_, 0, v___x_2904_);
lean_ctor_set(v___x_2905_, 1, v___x_2904_);
return v___x_2905_;
}
}
static lean_object* _init_l_main___closed__31(void){
_start:
{
lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; 
v___x_2906_ = l_Lean_NameSet_empty;
v___x_2907_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1);
v___x_2908_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2908_, 0, v___x_2907_);
lean_ctor_set(v___x_2908_, 1, v___x_2907_);
lean_ctor_set(v___x_2908_, 2, v___x_2906_);
return v___x_2908_;
}
}
static lean_object* _init_l_main___closed__32(void){
_start:
{
lean_object* v___x_2909_; lean_object* v___x_2910_; uint8_t v___x_2911_; lean_object* v___x_2912_; 
v___x_2909_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg___closed__1);
v___x_2910_ = lean_obj_once(&l_main___closed__29, &l_main___closed__29_once, _init_l_main___closed__29);
v___x_2911_ = 1;
v___x_2912_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2912_, 0, v___x_2910_);
lean_ctor_set(v___x_2912_, 1, v___x_2910_);
lean_ctor_set(v___x_2912_, 2, v___x_2909_);
lean_ctor_set_uint8(v___x_2912_, sizeof(void*)*3, v___x_2911_);
return v___x_2912_;
}
}
static uint8_t _init_l_main___closed__37(void){
_start:
{
uint8_t v___x_2919_; uint8_t v___x_2920_; uint8_t v___x_2921_; 
v___x_2919_ = 2;
v___x_2920_ = 0;
v___x_2921_ = l_Lean_instOrdOLeanLevel_ord(v___x_2920_, v___x_2919_);
return v___x_2921_;
}
}
static lean_object* _init_l_main___boxed__const__1(void){
_start:
{
uint32_t v___x_2922_; lean_object* v___x_2923_; 
v___x_2922_ = 1;
v___x_2923_ = lean_box_uint32(v___x_2922_);
return v___x_2923_;
}
}
static lean_object* _init_l_main___boxed__const__2(void){
_start:
{
uint32_t v___x_2924_; lean_object* v___x_2925_; 
v___x_2924_ = 0;
v___x_2925_ = lean_box_uint32(v___x_2924_);
return v___x_2925_;
}
}
LEAN_EXPORT lean_object* _lean_main(lean_object* v_args_2926_){
_start:
{
if (lean_obj_tag(v_args_2926_) == 1)
{
lean_object* v_tail_2951_; 
v_tail_2951_ = lean_ctor_get(v_args_2926_, 1);
lean_inc(v_tail_2951_);
if (lean_obj_tag(v_tail_2951_) == 1)
{
lean_object* v_tail_2952_; 
v_tail_2952_ = lean_ctor_get(v_tail_2951_, 1);
lean_inc(v_tail_2952_);
if (lean_obj_tag(v_tail_2952_) == 1)
{
lean_object* v_head_2953_; lean_object* v___x_2955_; uint8_t v_isShared_2956_; uint8_t v_isSharedCheck_3600_; 
v_head_2953_ = lean_ctor_get(v_args_2926_, 0);
v_isSharedCheck_3600_ = !lean_is_exclusive(v_args_2926_);
if (v_isSharedCheck_3600_ == 0)
{
lean_object* v_unused_3601_; 
v_unused_3601_ = lean_ctor_get(v_args_2926_, 1);
lean_dec(v_unused_3601_);
v___x_2955_ = v_args_2926_;
v_isShared_2956_ = v_isSharedCheck_3600_;
goto v_resetjp_2954_;
}
else
{
lean_inc(v_head_2953_);
lean_dec(v_args_2926_);
v___x_2955_ = lean_box(0);
v_isShared_2956_ = v_isSharedCheck_3600_;
goto v_resetjp_2954_;
}
v_resetjp_2954_:
{
lean_object* v_head_2957_; lean_object* v___x_2959_; uint8_t v_isShared_2960_; uint8_t v_isSharedCheck_3598_; 
v_head_2957_ = lean_ctor_get(v_tail_2951_, 0);
v_isSharedCheck_3598_ = !lean_is_exclusive(v_tail_2951_);
if (v_isSharedCheck_3598_ == 0)
{
lean_object* v_unused_3599_; 
v_unused_3599_ = lean_ctor_get(v_tail_2951_, 1);
lean_dec(v_unused_3599_);
v___x_2959_ = v_tail_2951_;
v_isShared_2960_ = v_isSharedCheck_3598_;
goto v_resetjp_2958_;
}
else
{
lean_inc(v_head_2957_);
lean_dec(v_tail_2951_);
v___x_2959_ = lean_box(0);
v_isShared_2960_ = v_isSharedCheck_3598_;
goto v_resetjp_2958_;
}
v_resetjp_2958_:
{
lean_object* v_head_2961_; lean_object* v_tail_2962_; lean_object* v___x_2964_; uint8_t v_isShared_2965_; uint8_t v_isSharedCheck_3597_; 
v_head_2961_ = lean_ctor_get(v_tail_2952_, 0);
v_tail_2962_ = lean_ctor_get(v_tail_2952_, 1);
v_isSharedCheck_3597_ = !lean_is_exclusive(v_tail_2952_);
if (v_isSharedCheck_3597_ == 0)
{
v___x_2964_ = v_tail_2952_;
v_isShared_2965_ = v_isSharedCheck_3597_;
goto v_resetjp_2963_;
}
else
{
lean_inc(v_tail_2962_);
lean_inc(v_head_2961_);
lean_dec(v_tail_2952_);
v___x_2964_ = lean_box(0);
v_isShared_2965_ = v_isSharedCheck_3597_;
goto v_resetjp_2963_;
}
v_resetjp_2963_:
{
lean_object* v___x_2966_; 
v___x_2966_ = l_Lean_ModuleSetup_load(v_head_2953_);
lean_dec(v_head_2953_);
if (lean_obj_tag(v___x_2966_) == 0)
{
lean_object* v_a_2967_; lean_object* v_name_2968_; lean_object* v_importArts_2969_; lean_object* v_options_2970_; uint8_t v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2975_; 
v_a_2967_ = lean_ctor_get(v___x_2966_, 0);
lean_inc(v_a_2967_);
lean_dec_ref_known(v___x_2966_, 1);
v_name_2968_ = lean_ctor_get(v_a_2967_, 0);
lean_inc(v_name_2968_);
v_importArts_2969_ = lean_ctor_get(v_a_2967_, 3);
lean_inc(v_importArts_2969_);
v_options_2970_ = lean_ctor_get(v_a_2967_, 6);
lean_inc(v_options_2970_);
lean_dec(v_a_2967_);
v___x_2971_ = 0;
v___x_2972_ = l_Lean_LeanOptions_toOptions(v_options_2970_);
v___x_2973_ = lean_box(v___x_2971_);
if (v_isShared_2965_ == 0)
{
lean_ctor_set_tag(v___x_2964_, 0);
lean_ctor_set(v___x_2964_, 1, v___x_2972_);
lean_ctor_set(v___x_2964_, 0, v___x_2973_);
v___x_2975_ = v___x_2964_;
goto v_reusejp_2974_;
}
else
{
lean_object* v_reuseFailAlloc_3588_; 
v_reuseFailAlloc_3588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3588_, 0, v___x_2973_);
lean_ctor_set(v_reuseFailAlloc_3588_, 1, v___x_2972_);
v___x_2975_ = v_reuseFailAlloc_3588_;
goto v_reusejp_2974_;
}
v_reusejp_2974_:
{
lean_object* v___x_2976_; 
v___x_2976_ = l_List_forIn_x27_loop___at___00main_spec__1___redArg(v_tail_2962_, v___x_2975_);
lean_dec(v_tail_2962_);
if (lean_obj_tag(v___x_2976_) == 0)
{
lean_object* v_a_2977_; lean_object* v___x_2978_; 
v_a_2977_ = lean_ctor_get(v___x_2976_, 0);
lean_inc(v_a_2977_);
lean_dec_ref_known(v___x_2976_, 1);
v___x_2978_ = lean_init_search_path();
if (lean_obj_tag(v___x_2978_) == 0)
{
lean_object* v_fst_2979_; lean_object* v_snd_2980_; lean_object* v___x_2982_; uint8_t v_isShared_2983_; uint8_t v_isSharedCheck_3571_; 
lean_dec_ref_known(v___x_2978_, 1);
v_fst_2979_ = lean_ctor_get(v_a_2977_, 0);
v_snd_2980_ = lean_ctor_get(v_a_2977_, 1);
v_isSharedCheck_3571_ = !lean_is_exclusive(v_a_2977_);
if (v_isSharedCheck_3571_ == 0)
{
v___x_2982_ = v_a_2977_;
v_isShared_2983_ = v_isSharedCheck_3571_;
goto v_resetjp_2981_;
}
else
{
lean_inc(v_snd_2980_);
lean_inc(v_fst_2979_);
lean_dec(v_a_2977_);
v___x_2982_ = lean_box(0);
v_isShared_2983_ = v_isSharedCheck_3571_;
goto v_resetjp_2981_;
}
v_resetjp_2981_:
{
lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; uint8_t v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___y_3000_; lean_object* v___y_3001_; lean_object* v___y_3002_; lean_object* v___y_3003_; uint8_t v___y_3004_; lean_object* v___y_3005_; lean_object* v___y_3006_; lean_object* v___y_3007_; lean_object* v___y_3008_; lean_object* v___y_3009_; lean_object* v___y_3010_; lean_object* v___y_3011_; lean_object* v___y_3012_; lean_object* v___y_3013_; lean_object* v___y_3014_; lean_object* v___y_3015_; lean_object* v___y_3016_; lean_object* v___y_3017_; lean_object* v___y_3018_; lean_object* v___y_3154_; lean_object* v___y_3155_; lean_object* v___y_3156_; lean_object* v___y_3157_; lean_object* v___y_3158_; uint8_t v___y_3159_; lean_object* v___y_3160_; lean_object* v___y_3161_; lean_object* v___y_3162_; lean_object* v_nextMacroScope_3163_; lean_object* v_ngen_3164_; lean_object* v_auxDeclNGen_3165_; lean_object* v_traceState_3166_; lean_object* v_messages_3167_; lean_object* v_infoState_3168_; lean_object* v_snapshotTasks_3169_; lean_object* v___y_3170_; lean_object* v___y_3171_; lean_object* v___y_3172_; lean_object* v___y_3173_; lean_object* v___y_3174_; lean_object* v___y_3175_; lean_object* v___y_3176_; lean_object* v___y_3177_; lean_object* v___y_3178_; lean_object* v___y_3179_; lean_object* v___y_3180_; lean_object* v___y_3181_; lean_object* v___y_3182_; lean_object* v___y_3183_; lean_object* v___y_3197_; lean_object* v___y_3198_; lean_object* v___y_3199_; lean_object* v___y_3200_; uint8_t v___y_3201_; lean_object* v___y_3202_; lean_object* v___y_3203_; lean_object* v___y_3204_; lean_object* v___y_3205_; lean_object* v___y_3206_; lean_object* v___y_3207_; lean_object* v___y_3208_; lean_object* v___y_3209_; lean_object* v___y_3210_; lean_object* v___y_3211_; lean_object* v___y_3212_; lean_object* v___y_3213_; lean_object* v___y_3214_; lean_object* v___y_3215_; lean_object* v___y_3216_; lean_object* v___y_3217_; uint8_t v___y_3218_; lean_object* v___y_3219_; lean_object* v___y_3220_; lean_object* v___y_3268_; lean_object* v___y_3269_; lean_object* v___y_3270_; lean_object* v___y_3271_; lean_object* v___y_3272_; uint8_t v___y_3273_; lean_object* v___y_3274_; lean_object* v___y_3275_; lean_object* v___y_3276_; lean_object* v___y_3277_; lean_object* v___y_3278_; lean_object* v___y_3279_; lean_object* v___y_3280_; lean_object* v___y_3281_; lean_object* v___y_3282_; lean_object* v___y_3283_; lean_object* v___y_3284_; lean_object* v___y_3285_; lean_object* v___y_3286_; lean_object* v___y_3287_; lean_object* v___y_3288_; lean_object* v___y_3289_; uint8_t v___y_3290_; uint8_t v___y_3291_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; uint8_t v___x_3316_; lean_object* v___y_3318_; lean_object* v___y_3319_; lean_object* v___y_3320_; lean_object* v___y_3321_; lean_object* v___y_3322_; lean_object* v___y_3323_; lean_object* v___y_3324_; lean_object* v___y_3424_; lean_object* v___y_3425_; lean_object* v___y_3426_; lean_object* v___y_3427_; lean_object* v___y_3445_; lean_object* v___y_3446_; lean_object* v___y_3447_; lean_object* v___y_3448_; lean_object* v___y_3449_; lean_object* v___y_3450_; lean_object* v___y_3460_; lean_object* v___y_3461_; lean_object* v___y_3462_; lean_object* v___y_3463_; lean_object* v___y_3464_; uint8_t v___x_3474_; uint8_t v___y_3476_; uint8_t v___x_3570_; 
v___x_2984_ = lean_obj_once(&l_main___closed__3, &l_main___closed__3_once, _init_l_main___closed__3);
v___x_2985_ = lean_box(0);
v___x_2986_ = lean_obj_once(&l_main___closed__4, &l_main___closed__4_once, _init_l_main___closed__4);
v___x_2987_ = lean_obj_once(&l_main___closed__5, &l_main___closed__5_once, _init_l_main___closed__5);
v___x_2988_ = lean_obj_once(&l_main___closed__6, &l_main___closed__6_once, _init_l_main___closed__6);
v___x_2989_ = lean_obj_once(&l_main___closed__8, &l_main___closed__8_once, _init_l_main___closed__8);
v___x_2990_ = lean_obj_once(&l_main___closed__9, &l_main___closed__9_once, _init_l_main___closed__9);
v___x_2991_ = lean_box(1);
v___x_2992_ = ((lean_object*)(l_main___closed__10));
v___x_2993_ = l_Lean_Compiler_compiler_inLeanIR;
v___x_2994_ = 1;
v___x_2995_ = l_Lean_Option_set___at___00Lean_Environment_realizeConst_spec__0(v_snd_2980_, v___x_2993_, v___x_2994_);
v___x_2996_ = l_Lean_maxHeartbeats;
v___x_2997_ = lean_unsigned_to_nat(0u);
v___x_2998_ = l_Lean_Option_set___at___00main_spec__3(v___x_2995_, v___x_2996_, v___x_2997_);
v___x_3311_ = ((lean_object*)(l_main___closed__21));
lean_inc(v_name_2968_);
v___x_3312_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_3312_, 0, v_name_2968_);
lean_ctor_set_uint8(v___x_3312_, sizeof(void*)*1, v___x_2994_);
lean_ctor_set_uint8(v___x_3312_, sizeof(void*)*1 + 1, v___x_2994_);
lean_ctor_set_uint8(v___x_3312_, sizeof(void*)*1 + 2, v___x_2971_);
v___x_3313_ = lean_unsigned_to_nat(1u);
v___x_3314_ = lean_mk_empty_array_with_capacity(v___x_3313_);
v___x_3315_ = lean_array_push(v___x_3314_, v___x_3312_);
v___x_3316_ = 0;
v___x_3474_ = 2;
v___x_3570_ = lean_uint8_once(&l_main___closed__37, &l_main___closed__37_once, _init_l_main___closed__37);
if (v___x_3570_ == 0)
{
v___y_3476_ = v___x_2994_;
goto v___jp_3475_;
}
else
{
v___y_3476_ = v___x_2971_;
goto v___jp_3475_;
}
v___jp_2999_:
{
lean_object* v___x_3019_; lean_object* v_messages_3020_; lean_object* v_env_3021_; lean_object* v___x_3023_; uint8_t v_isShared_3024_; uint8_t v_isSharedCheck_3145_; 
v___x_3019_ = lean_st_ref_get(v___y_3009_);
lean_dec(v___y_3009_);
v_messages_3020_ = lean_ctor_get(v___x_3019_, 6);
v_env_3021_ = lean_ctor_get(v___x_3019_, 0);
v_isSharedCheck_3145_ = !lean_is_exclusive(v___x_3019_);
if (v_isSharedCheck_3145_ == 0)
{
lean_object* v_unused_3146_; lean_object* v_unused_3147_; lean_object* v_unused_3148_; lean_object* v_unused_3149_; lean_object* v_unused_3150_; lean_object* v_unused_3151_; lean_object* v_unused_3152_; 
v_unused_3146_ = lean_ctor_get(v___x_3019_, 8);
lean_dec(v_unused_3146_);
v_unused_3147_ = lean_ctor_get(v___x_3019_, 7);
lean_dec(v_unused_3147_);
v_unused_3148_ = lean_ctor_get(v___x_3019_, 5);
lean_dec(v_unused_3148_);
v_unused_3149_ = lean_ctor_get(v___x_3019_, 4);
lean_dec(v_unused_3149_);
v_unused_3150_ = lean_ctor_get(v___x_3019_, 3);
lean_dec(v_unused_3150_);
v_unused_3151_ = lean_ctor_get(v___x_3019_, 2);
lean_dec(v_unused_3151_);
v_unused_3152_ = lean_ctor_get(v___x_3019_, 1);
lean_dec(v_unused_3152_);
v___x_3023_ = v___x_3019_;
v_isShared_3024_ = v_isSharedCheck_3145_;
goto v_resetjp_3022_;
}
else
{
lean_inc(v_messages_3020_);
lean_inc(v_env_3021_);
lean_dec(v___x_3019_);
v___x_3023_ = lean_box(0);
v_isShared_3024_ = v_isSharedCheck_3145_;
goto v_resetjp_3022_;
}
v_resetjp_3022_:
{
lean_object* v_unreported_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; 
v_unreported_3025_ = lean_ctor_get(v_messages_3020_, 1);
v___x_3026_ = lean_box(0);
v___x_3027_ = l_Lean_PersistentArray_forIn___at___00main_spec__7(v_unreported_3025_, v___x_3026_);
if (lean_obj_tag(v___x_3027_) == 0)
{
lean_object* v___x_3029_; uint8_t v_isShared_3030_; uint8_t v_isSharedCheck_3135_; 
v_isSharedCheck_3135_ = !lean_is_exclusive(v___x_3027_);
if (v_isSharedCheck_3135_ == 0)
{
lean_object* v_unused_3136_; 
v_unused_3136_ = lean_ctor_get(v___x_3027_, 0);
lean_dec(v_unused_3136_);
v___x_3029_ = v___x_3027_;
v_isShared_3030_ = v_isSharedCheck_3135_;
goto v_resetjp_3028_;
}
else
{
lean_dec(v___x_3027_);
v___x_3029_ = lean_box(0);
v_isShared_3030_ = v_isSharedCheck_3135_;
goto v_resetjp_3028_;
}
v_resetjp_3028_:
{
uint8_t v___x_3031_; 
v___x_3031_ = l_Lean_MessageLog_hasErrors(v_messages_3020_);
lean_dec_ref(v_messages_3020_);
if (v___x_3031_ == 0)
{
lean_object* v___x_3032_; 
lean_del_object(v___x_3029_);
lean_inc_ref(v_env_3021_);
v___x_3032_ = l___private_LeanIR_0__mkIRSigData(v_env_3021_);
if (lean_obj_tag(v___x_3032_) == 0)
{
lean_object* v_a_3033_; lean_object* v___x_3034_; 
v_a_3033_ = lean_ctor_get(v___x_3032_, 0);
lean_inc(v_a_3033_);
lean_dec_ref_known(v___x_3032_, 1);
lean_inc_ref(v_env_3021_);
v___x_3034_ = l___private_LeanIR_0__mkIRData(v_env_3021_);
if (lean_obj_tag(v___x_3034_) == 0)
{
lean_object* v_a_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3042_; 
v_a_3035_ = lean_ctor_get(v___x_3034_, 0);
lean_inc(v_a_3035_);
lean_dec_ref_known(v___x_3034_, 1);
v___x_3036_ = ((lean_object*)(l_main___closed__11));
lean_inc(v_head_2957_);
v___x_3037_ = l_System_FilePath_addExtension(v_head_2957_, v___x_3036_);
v___x_3038_ = l_Lean_Environment_mainModule(v_env_3021_);
v___x_3039_ = ((lean_object*)(l_main___closed__13));
v___x_3040_ = l_Lean_Name_append(v___x_3038_, v___x_3039_);
if (v_isShared_2983_ == 0)
{
lean_ctor_set(v___x_2982_, 1, v_a_3033_);
lean_ctor_set(v___x_2982_, 0, v___x_3037_);
v___x_3042_ = v___x_2982_;
goto v_reusejp_3041_;
}
else
{
lean_object* v_reuseFailAlloc_3114_; 
v_reuseFailAlloc_3114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3114_, 0, v___x_3037_);
lean_ctor_set(v_reuseFailAlloc_3114_, 1, v_a_3033_);
v___x_3042_ = v_reuseFailAlloc_3114_;
goto v_reusejp_3041_;
}
v_reusejp_3041_:
{
lean_object* v___x_3044_; 
lean_inc(v_head_2957_);
if (v_isShared_2960_ == 0)
{
lean_ctor_set_tag(v___x_2959_, 0);
lean_ctor_set(v___x_2959_, 1, v_a_3035_);
v___x_3044_ = v___x_2959_;
goto v_reusejp_3043_;
}
else
{
lean_object* v_reuseFailAlloc_3113_; 
v_reuseFailAlloc_3113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3113_, 0, v_head_2957_);
lean_ctor_set(v_reuseFailAlloc_3113_, 1, v_a_3035_);
v___x_3044_ = v_reuseFailAlloc_3113_;
goto v_reusejp_3043_;
}
v_reusejp_3043_:
{
lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; 
v___x_3045_ = lean_unsigned_to_nat(2u);
v___x_3046_ = lean_mk_empty_array_with_capacity(v___x_3045_);
v___x_3047_ = lean_array_push(v___x_3046_, v___x_3042_);
v___x_3048_ = lean_array_push(v___x_3047_, v___x_3044_);
v___x_3049_ = l_Lean_saveModuleDataParts(v___x_3040_, v___x_3048_);
lean_dec(v___x_3040_);
if (lean_obj_tag(v___x_3049_) == 0)
{
uint8_t v___x_3050_; lean_object* v___x_3051_; 
lean_dec_ref_known(v___x_3049_, 1);
v___x_3050_ = 1;
v___x_3051_ = lean_io_prim_handle_mk(v_head_2961_, v___x_3050_);
if (lean_obj_tag(v___x_3051_) == 0)
{
lean_object* v_a_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3057_; 
lean_dec(v_head_2961_);
v_a_3052_ = lean_ctor_get(v___x_3051_, 0);
lean_inc(v_a_3052_);
lean_dec_ref_known(v___x_3051_, 1);
v___x_3053_ = ((lean_object*)(l_main___closed__14));
v___x_3054_ = l_Lean_Options_empty;
v___x_3055_ = lean_obj_once(&l_main___closed__15, &l_main___closed__15_once, _init_l_main___closed__15);
lean_inc_ref(v___y_3017_);
lean_inc_ref(v___y_3015_);
lean_inc_ref(v___y_3016_);
lean_inc_ref(v___y_3012_);
lean_inc_ref(v___y_3010_);
lean_inc_ref(v___y_3018_);
lean_inc(v___y_3011_);
lean_inc_ref(v_env_3021_);
if (v_isShared_3024_ == 0)
{
lean_ctor_set(v___x_3023_, 8, v___y_3017_);
lean_ctor_set(v___x_3023_, 7, v___y_3015_);
lean_ctor_set(v___x_3023_, 6, v___y_3016_);
lean_ctor_set(v___x_3023_, 5, v___y_3012_);
lean_ctor_set(v___x_3023_, 4, v___y_3010_);
lean_ctor_set(v___x_3023_, 3, v___y_3014_);
lean_ctor_set(v___x_3023_, 2, v___y_3018_);
lean_ctor_set(v___x_3023_, 1, v___y_3011_);
v___x_3057_ = v___x_3023_;
goto v_reusejp_3056_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v_env_3021_);
lean_ctor_set(v_reuseFailAlloc_3082_, 1, v___y_3011_);
lean_ctor_set(v_reuseFailAlloc_3082_, 2, v___y_3018_);
lean_ctor_set(v_reuseFailAlloc_3082_, 3, v___y_3014_);
lean_ctor_set(v_reuseFailAlloc_3082_, 4, v___y_3010_);
lean_ctor_set(v_reuseFailAlloc_3082_, 5, v___y_3012_);
lean_ctor_set(v_reuseFailAlloc_3082_, 6, v___y_3016_);
lean_ctor_set(v_reuseFailAlloc_3082_, 7, v___y_3015_);
lean_ctor_set(v_reuseFailAlloc_3082_, 8, v___y_3017_);
v___x_3057_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3056_;
}
v_reusejp_3056_:
{
lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___f_3061_; lean_object* v___x_3062_; 
v___x_3058_ = lean_box(v___x_2994_);
v___x_3059_ = lean_box(v___x_2971_);
v___x_3060_ = lean_box(v___y_3004_);
lean_inc(v___y_3002_);
lean_inc(v___y_3000_);
lean_inc(v___y_3008_);
lean_inc(v___y_3006_);
lean_inc_ref(v___y_3007_);
lean_inc_ref(v___y_3003_);
lean_inc(v___y_3001_);
v___f_3061_ = lean_alloc_closure((void*)(l_main___lam__1___boxed), 19, 18);
lean_closure_set(v___f_3061_, 0, v___x_3057_);
lean_closure_set(v___f_3061_, 1, v___y_3001_);
lean_closure_set(v___f_3061_, 2, v___x_3054_);
lean_closure_set(v___f_3061_, 3, v_name_2968_);
lean_closure_set(v___f_3061_, 4, v_a_3052_);
lean_closure_set(v___f_3061_, 5, v___x_3058_);
lean_closure_set(v___f_3061_, 6, v___y_3003_);
lean_closure_set(v___f_3061_, 7, v_head_2957_);
lean_closure_set(v___f_3061_, 8, v___y_3007_);
lean_closure_set(v___f_3061_, 9, v___x_2997_);
lean_closure_set(v___f_3061_, 10, v___y_3006_);
lean_closure_set(v___f_3061_, 11, v___y_3005_);
lean_closure_set(v___f_3061_, 12, v___y_3008_);
lean_closure_set(v___f_3061_, 13, v___x_3055_);
lean_closure_set(v___f_3061_, 14, v___y_3000_);
lean_closure_set(v___f_3061_, 15, v___y_3002_);
lean_closure_set(v___f_3061_, 16, v___x_3059_);
lean_closure_set(v___f_3061_, 17, v___x_3060_);
v___x_3062_ = l_Lean_profileitIOUnsafe___redArg(v___x_3053_, v___x_2998_, v___f_3061_, v___y_3013_);
lean_dec_ref(v___x_2998_);
if (lean_obj_tag(v___x_3062_) == 0)
{
lean_object* v___x_3063_; uint8_t v___x_3064_; 
lean_dec_ref_known(v___x_3062_, 1);
v___x_3063_ = lean_display_cumulative_profiling_times();
v___x_3064_ = lean_unbox(v_fst_2979_);
lean_dec(v_fst_2979_);
if (v___x_3064_ == 0)
{
lean_dec_ref(v_env_3021_);
goto v___jp_2948_;
}
else
{
lean_object* v___x_3065_; 
v___x_3065_ = l_Lean_Environment_displayStats(v_env_3021_);
if (lean_obj_tag(v___x_3065_) == 0)
{
lean_dec_ref_known(v___x_3065_, 1);
goto v___jp_2948_;
}
else
{
lean_object* v_a_3066_; lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3073_; 
v_a_3066_ = lean_ctor_get(v___x_3065_, 0);
v_isSharedCheck_3073_ = !lean_is_exclusive(v___x_3065_);
if (v_isSharedCheck_3073_ == 0)
{
v___x_3068_ = v___x_3065_;
v_isShared_3069_ = v_isSharedCheck_3073_;
goto v_resetjp_3067_;
}
else
{
lean_inc(v_a_3066_);
lean_dec(v___x_3065_);
v___x_3068_ = lean_box(0);
v_isShared_3069_ = v_isSharedCheck_3073_;
goto v_resetjp_3067_;
}
v_resetjp_3067_:
{
lean_object* v___x_3071_; 
if (v_isShared_3069_ == 0)
{
v___x_3071_ = v___x_3068_;
goto v_reusejp_3070_;
}
else
{
lean_object* v_reuseFailAlloc_3072_; 
v_reuseFailAlloc_3072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3072_, 0, v_a_3066_);
v___x_3071_ = v_reuseFailAlloc_3072_;
goto v_reusejp_3070_;
}
v_reusejp_3070_:
{
return v___x_3071_;
}
}
}
}
}
else
{
lean_object* v_a_3074_; lean_object* v___x_3076_; uint8_t v_isShared_3077_; uint8_t v_isSharedCheck_3081_; 
lean_dec_ref(v_env_3021_);
lean_dec(v_fst_2979_);
v_a_3074_ = lean_ctor_get(v___x_3062_, 0);
v_isSharedCheck_3081_ = !lean_is_exclusive(v___x_3062_);
if (v_isSharedCheck_3081_ == 0)
{
v___x_3076_ = v___x_3062_;
v_isShared_3077_ = v_isSharedCheck_3081_;
goto v_resetjp_3075_;
}
else
{
lean_inc(v_a_3074_);
lean_dec(v___x_3062_);
v___x_3076_ = lean_box(0);
v_isShared_3077_ = v_isSharedCheck_3081_;
goto v_resetjp_3075_;
}
v_resetjp_3075_:
{
lean_object* v___x_3079_; 
if (v_isShared_3077_ == 0)
{
v___x_3079_ = v___x_3076_;
goto v_reusejp_3078_;
}
else
{
lean_object* v_reuseFailAlloc_3080_; 
v_reuseFailAlloc_3080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3080_, 0, v_a_3074_);
v___x_3079_ = v_reuseFailAlloc_3080_;
goto v_reusejp_3078_;
}
v_reusejp_3078_:
{
return v___x_3079_;
}
}
}
}
}
else
{
lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; 
lean_dec_ref_known(v___x_3051_, 1);
lean_del_object(v___x_3023_);
lean_dec_ref(v_env_3021_);
lean_dec_ref(v___y_3014_);
lean_dec(v___y_3013_);
lean_dec(v___y_3005_);
lean_dec_ref(v___x_2998_);
lean_dec(v_fst_2979_);
lean_dec(v_name_2968_);
lean_dec(v_head_2957_);
v___x_3083_ = ((lean_object*)(l_main___closed__16));
v___x_3084_ = lean_string_append(v___x_3083_, v_head_2961_);
lean_dec(v_head_2961_);
v___x_3085_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__1));
v___x_3086_ = lean_string_append(v___x_3084_, v___x_3085_);
v___x_3087_ = l_IO_eprintln___at___00main_spec__6(v___x_3086_);
if (lean_obj_tag(v___x_3087_) == 0)
{
lean_object* v___x_3089_; uint8_t v_isShared_3090_; uint8_t v_isSharedCheck_3095_; 
v_isSharedCheck_3095_ = !lean_is_exclusive(v___x_3087_);
if (v_isSharedCheck_3095_ == 0)
{
lean_object* v_unused_3096_; 
v_unused_3096_ = lean_ctor_get(v___x_3087_, 0);
lean_dec(v_unused_3096_);
v___x_3089_ = v___x_3087_;
v_isShared_3090_ = v_isSharedCheck_3095_;
goto v_resetjp_3088_;
}
else
{
lean_dec(v___x_3087_);
v___x_3089_ = lean_box(0);
v_isShared_3090_ = v_isSharedCheck_3095_;
goto v_resetjp_3088_;
}
v_resetjp_3088_:
{
lean_object* v___x_3091_; lean_object* v___x_3093_; 
v___x_3091_ = l_main___boxed__const__1;
if (v_isShared_3090_ == 0)
{
lean_ctor_set(v___x_3089_, 0, v___x_3091_);
v___x_3093_ = v___x_3089_;
goto v_reusejp_3092_;
}
else
{
lean_object* v_reuseFailAlloc_3094_; 
v_reuseFailAlloc_3094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3094_, 0, v___x_3091_);
v___x_3093_ = v_reuseFailAlloc_3094_;
goto v_reusejp_3092_;
}
v_reusejp_3092_:
{
return v___x_3093_;
}
}
}
else
{
lean_object* v_a_3097_; lean_object* v___x_3099_; uint8_t v_isShared_3100_; uint8_t v_isSharedCheck_3104_; 
v_a_3097_ = lean_ctor_get(v___x_3087_, 0);
v_isSharedCheck_3104_ = !lean_is_exclusive(v___x_3087_);
if (v_isSharedCheck_3104_ == 0)
{
v___x_3099_ = v___x_3087_;
v_isShared_3100_ = v_isSharedCheck_3104_;
goto v_resetjp_3098_;
}
else
{
lean_inc(v_a_3097_);
lean_dec(v___x_3087_);
v___x_3099_ = lean_box(0);
v_isShared_3100_ = v_isSharedCheck_3104_;
goto v_resetjp_3098_;
}
v_resetjp_3098_:
{
lean_object* v___x_3102_; 
if (v_isShared_3100_ == 0)
{
v___x_3102_ = v___x_3099_;
goto v_reusejp_3101_;
}
else
{
lean_object* v_reuseFailAlloc_3103_; 
v_reuseFailAlloc_3103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3103_, 0, v_a_3097_);
v___x_3102_ = v_reuseFailAlloc_3103_;
goto v_reusejp_3101_;
}
v_reusejp_3101_:
{
return v___x_3102_;
}
}
}
}
}
else
{
lean_object* v_a_3105_; lean_object* v___x_3107_; uint8_t v_isShared_3108_; uint8_t v_isSharedCheck_3112_; 
lean_del_object(v___x_3023_);
lean_dec_ref(v_env_3021_);
lean_dec_ref(v___y_3014_);
lean_dec(v___y_3013_);
lean_dec(v___y_3005_);
lean_dec_ref(v___x_2998_);
lean_dec(v_fst_2979_);
lean_dec(v_name_2968_);
lean_dec(v_head_2961_);
lean_dec(v_head_2957_);
v_a_3105_ = lean_ctor_get(v___x_3049_, 0);
v_isSharedCheck_3112_ = !lean_is_exclusive(v___x_3049_);
if (v_isSharedCheck_3112_ == 0)
{
v___x_3107_ = v___x_3049_;
v_isShared_3108_ = v_isSharedCheck_3112_;
goto v_resetjp_3106_;
}
else
{
lean_inc(v_a_3105_);
lean_dec(v___x_3049_);
v___x_3107_ = lean_box(0);
v_isShared_3108_ = v_isSharedCheck_3112_;
goto v_resetjp_3106_;
}
v_resetjp_3106_:
{
lean_object* v___x_3110_; 
if (v_isShared_3108_ == 0)
{
v___x_3110_ = v___x_3107_;
goto v_reusejp_3109_;
}
else
{
lean_object* v_reuseFailAlloc_3111_; 
v_reuseFailAlloc_3111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3111_, 0, v_a_3105_);
v___x_3110_ = v_reuseFailAlloc_3111_;
goto v_reusejp_3109_;
}
v_reusejp_3109_:
{
return v___x_3110_;
}
}
}
}
}
}
else
{
lean_object* v_a_3115_; lean_object* v___x_3117_; uint8_t v_isShared_3118_; uint8_t v_isSharedCheck_3122_; 
lean_dec(v_a_3033_);
lean_del_object(v___x_3023_);
lean_dec_ref(v_env_3021_);
lean_dec_ref(v___y_3014_);
lean_dec(v___y_3013_);
lean_dec(v___y_3005_);
lean_dec_ref(v___x_2998_);
lean_del_object(v___x_2982_);
lean_dec(v_fst_2979_);
lean_dec(v_name_2968_);
lean_dec(v_head_2961_);
lean_del_object(v___x_2959_);
lean_dec(v_head_2957_);
v_a_3115_ = lean_ctor_get(v___x_3034_, 0);
v_isSharedCheck_3122_ = !lean_is_exclusive(v___x_3034_);
if (v_isSharedCheck_3122_ == 0)
{
v___x_3117_ = v___x_3034_;
v_isShared_3118_ = v_isSharedCheck_3122_;
goto v_resetjp_3116_;
}
else
{
lean_inc(v_a_3115_);
lean_dec(v___x_3034_);
v___x_3117_ = lean_box(0);
v_isShared_3118_ = v_isSharedCheck_3122_;
goto v_resetjp_3116_;
}
v_resetjp_3116_:
{
lean_object* v___x_3120_; 
if (v_isShared_3118_ == 0)
{
v___x_3120_ = v___x_3117_;
goto v_reusejp_3119_;
}
else
{
lean_object* v_reuseFailAlloc_3121_; 
v_reuseFailAlloc_3121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3121_, 0, v_a_3115_);
v___x_3120_ = v_reuseFailAlloc_3121_;
goto v_reusejp_3119_;
}
v_reusejp_3119_:
{
return v___x_3120_;
}
}
}
}
else
{
lean_object* v_a_3123_; lean_object* v___x_3125_; uint8_t v_isShared_3126_; uint8_t v_isSharedCheck_3130_; 
lean_del_object(v___x_3023_);
lean_dec_ref(v_env_3021_);
lean_dec_ref(v___y_3014_);
lean_dec(v___y_3013_);
lean_dec(v___y_3005_);
lean_dec_ref(v___x_2998_);
lean_del_object(v___x_2982_);
lean_dec(v_fst_2979_);
lean_dec(v_name_2968_);
lean_dec(v_head_2961_);
lean_del_object(v___x_2959_);
lean_dec(v_head_2957_);
v_a_3123_ = lean_ctor_get(v___x_3032_, 0);
v_isSharedCheck_3130_ = !lean_is_exclusive(v___x_3032_);
if (v_isSharedCheck_3130_ == 0)
{
v___x_3125_ = v___x_3032_;
v_isShared_3126_ = v_isSharedCheck_3130_;
goto v_resetjp_3124_;
}
else
{
lean_inc(v_a_3123_);
lean_dec(v___x_3032_);
v___x_3125_ = lean_box(0);
v_isShared_3126_ = v_isSharedCheck_3130_;
goto v_resetjp_3124_;
}
v_resetjp_3124_:
{
lean_object* v___x_3128_; 
if (v_isShared_3126_ == 0)
{
v___x_3128_ = v___x_3125_;
goto v_reusejp_3127_;
}
else
{
lean_object* v_reuseFailAlloc_3129_; 
v_reuseFailAlloc_3129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3129_, 0, v_a_3123_);
v___x_3128_ = v_reuseFailAlloc_3129_;
goto v_reusejp_3127_;
}
v_reusejp_3127_:
{
return v___x_3128_;
}
}
}
}
else
{
lean_object* v___x_3131_; lean_object* v___x_3133_; 
lean_del_object(v___x_3023_);
lean_dec_ref(v_env_3021_);
lean_dec_ref(v___y_3014_);
lean_dec(v___y_3013_);
lean_dec(v___y_3005_);
lean_dec_ref(v___x_2998_);
lean_del_object(v___x_2982_);
lean_dec(v_fst_2979_);
lean_dec(v_name_2968_);
lean_dec(v_head_2961_);
lean_del_object(v___x_2959_);
lean_dec(v_head_2957_);
v___x_3131_ = l_main___boxed__const__1;
if (v_isShared_3030_ == 0)
{
lean_ctor_set(v___x_3029_, 0, v___x_3131_);
v___x_3133_ = v___x_3029_;
goto v_reusejp_3132_;
}
else
{
lean_object* v_reuseFailAlloc_3134_; 
v_reuseFailAlloc_3134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3134_, 0, v___x_3131_);
v___x_3133_ = v_reuseFailAlloc_3134_;
goto v_reusejp_3132_;
}
v_reusejp_3132_:
{
return v___x_3133_;
}
}
}
}
else
{
lean_object* v_a_3137_; lean_object* v___x_3139_; uint8_t v_isShared_3140_; uint8_t v_isSharedCheck_3144_; 
lean_del_object(v___x_3023_);
lean_dec_ref(v_env_3021_);
lean_dec_ref(v_messages_3020_);
lean_dec_ref(v___y_3014_);
lean_dec(v___y_3013_);
lean_dec(v___y_3005_);
lean_dec_ref(v___x_2998_);
lean_del_object(v___x_2982_);
lean_dec(v_fst_2979_);
lean_dec(v_name_2968_);
lean_dec(v_head_2961_);
lean_del_object(v___x_2959_);
lean_dec(v_head_2957_);
v_a_3137_ = lean_ctor_get(v___x_3027_, 0);
v_isSharedCheck_3144_ = !lean_is_exclusive(v___x_3027_);
if (v_isSharedCheck_3144_ == 0)
{
v___x_3139_ = v___x_3027_;
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
else
{
lean_inc(v_a_3137_);
lean_dec(v___x_3027_);
v___x_3139_ = lean_box(0);
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
v_resetjp_3138_:
{
lean_object* v___x_3142_; 
if (v_isShared_3140_ == 0)
{
v___x_3142_ = v___x_3139_;
goto v_reusejp_3141_;
}
else
{
lean_object* v_reuseFailAlloc_3143_; 
v_reuseFailAlloc_3143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3143_, 0, v_a_3137_);
v___x_3142_ = v_reuseFailAlloc_3143_;
goto v_reusejp_3141_;
}
v_reusejp_3141_:
{
return v___x_3142_;
}
}
}
}
}
v___jp_3153_:
{
lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; size_t v_sz_3187_; size_t v___x_3188_; lean_object* v___x_3189_; 
lean_inc_ref(v___y_3174_);
v___x_3184_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3184_, 0, v___y_3183_);
lean_ctor_set(v___x_3184_, 1, v_nextMacroScope_3163_);
lean_ctor_set(v___x_3184_, 2, v_ngen_3164_);
lean_ctor_set(v___x_3184_, 3, v_auxDeclNGen_3165_);
lean_ctor_set(v___x_3184_, 4, v_traceState_3166_);
lean_ctor_set(v___x_3184_, 5, v___y_3174_);
lean_ctor_set(v___x_3184_, 6, v_messages_3167_);
lean_ctor_set(v___x_3184_, 7, v_infoState_3168_);
lean_ctor_set(v___x_3184_, 8, v_snapshotTasks_3169_);
v___x_3185_ = lean_st_ref_set(v___y_3173_, v___x_3184_);
v___x_3186_ = lean_box(0);
v_sz_3187_ = lean_array_size(v___y_3171_);
v___x_3188_ = ((size_t)0ULL);
v___x_3189_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__13(v___y_3171_, v_sz_3187_, v___x_3188_, v___x_3186_, v___y_3180_, v___y_3173_);
lean_dec_ref(v___y_3171_);
if (lean_obj_tag(v___x_3189_) == 0)
{
lean_dec_ref_known(v___x_3189_, 1);
lean_dec_ref(v___y_3180_);
lean_dec(v___y_3173_);
v___y_3000_ = v___y_3154_;
v___y_3001_ = v___y_3155_;
v___y_3002_ = v___y_3156_;
v___y_3003_ = v___y_3157_;
v___y_3004_ = v___y_3159_;
v___y_3005_ = v___y_3158_;
v___y_3006_ = v___y_3160_;
v___y_3007_ = v___y_3161_;
v___y_3008_ = v___y_3162_;
v___y_3009_ = v___y_3170_;
v___y_3010_ = v___y_3172_;
v___y_3011_ = v___y_3181_;
v___y_3012_ = v___y_3174_;
v___y_3013_ = v___y_3175_;
v___y_3014_ = v___y_3182_;
v___y_3015_ = v___y_3176_;
v___y_3016_ = v___y_3177_;
v___y_3017_ = v___y_3179_;
v___y_3018_ = v___y_3178_;
goto v___jp_2999_;
}
else
{
if (lean_obj_tag(v___x_3189_) == 0)
{
lean_dec_ref_known(v___x_3189_, 1);
lean_dec_ref(v___y_3180_);
lean_dec(v___y_3173_);
v___y_3000_ = v___y_3154_;
v___y_3001_ = v___y_3155_;
v___y_3002_ = v___y_3156_;
v___y_3003_ = v___y_3157_;
v___y_3004_ = v___y_3159_;
v___y_3005_ = v___y_3158_;
v___y_3006_ = v___y_3160_;
v___y_3007_ = v___y_3161_;
v___y_3008_ = v___y_3162_;
v___y_3009_ = v___y_3170_;
v___y_3010_ = v___y_3172_;
v___y_3011_ = v___y_3181_;
v___y_3012_ = v___y_3174_;
v___y_3013_ = v___y_3175_;
v___y_3014_ = v___y_3182_;
v___y_3015_ = v___y_3176_;
v___y_3016_ = v___y_3177_;
v___y_3017_ = v___y_3179_;
v___y_3018_ = v___y_3178_;
goto v___jp_2999_;
}
else
{
lean_object* v_a_3190_; uint8_t v___x_3191_; 
v_a_3190_ = lean_ctor_get(v___x_3189_, 0);
lean_inc(v_a_3190_);
lean_dec_ref_known(v___x_3189_, 1);
v___x_3191_ = l_Lean_Exception_isInterrupt(v_a_3190_);
if (v___x_3191_ == 0)
{
lean_object* v___x_3192_; lean_object* v___x_3193_; 
v___x_3192_ = l_Lean_Exception_toMessageData(v_a_3190_);
v___x_3193_ = l_Lean_logError___at___00main_spec__14(v___x_3192_, v___y_3180_, v___y_3173_);
lean_dec(v___y_3173_);
lean_dec_ref(v___y_3180_);
if (lean_obj_tag(v___x_3193_) == 0)
{
lean_dec_ref_known(v___x_3193_, 1);
v___y_3000_ = v___y_3154_;
v___y_3001_ = v___y_3155_;
v___y_3002_ = v___y_3156_;
v___y_3003_ = v___y_3157_;
v___y_3004_ = v___y_3159_;
v___y_3005_ = v___y_3158_;
v___y_3006_ = v___y_3160_;
v___y_3007_ = v___y_3161_;
v___y_3008_ = v___y_3162_;
v___y_3009_ = v___y_3170_;
v___y_3010_ = v___y_3172_;
v___y_3011_ = v___y_3181_;
v___y_3012_ = v___y_3174_;
v___y_3013_ = v___y_3175_;
v___y_3014_ = v___y_3182_;
v___y_3015_ = v___y_3176_;
v___y_3016_ = v___y_3177_;
v___y_3017_ = v___y_3179_;
v___y_3018_ = v___y_3178_;
goto v___jp_2999_;
}
else
{
lean_object* v___x_3194_; lean_object* v___x_3195_; 
lean_dec_ref_known(v___x_3193_, 1);
lean_dec_ref(v___y_3182_);
lean_dec(v___y_3175_);
lean_dec(v___y_3170_);
lean_dec(v___y_3158_);
lean_dec_ref(v___x_2998_);
lean_del_object(v___x_2982_);
lean_dec(v_fst_2979_);
lean_dec(v_name_2968_);
lean_dec(v_head_2961_);
lean_del_object(v___x_2959_);
lean_dec(v_head_2957_);
v___x_3194_ = lean_obj_once(&l_main___closed__20, &l_main___closed__20_once, _init_l_main___closed__20);
v___x_3195_ = l_panic___at___00main_spec__5(v___x_3194_);
return v___x_3195_;
}
}
else
{
lean_dec(v_a_3190_);
lean_dec_ref(v___y_3180_);
lean_dec(v___y_3173_);
v___y_3000_ = v___y_3154_;
v___y_3001_ = v___y_3155_;
v___y_3002_ = v___y_3156_;
v___y_3003_ = v___y_3157_;
v___y_3004_ = v___y_3159_;
v___y_3005_ = v___y_3158_;
v___y_3006_ = v___y_3160_;
v___y_3007_ = v___y_3161_;
v___y_3008_ = v___y_3162_;
v___y_3009_ = v___y_3170_;
v___y_3010_ = v___y_3172_;
v___y_3011_ = v___y_3181_;
v___y_3012_ = v___y_3174_;
v___y_3013_ = v___y_3175_;
v___y_3014_ = v___y_3182_;
v___y_3015_ = v___y_3176_;
v___y_3016_ = v___y_3177_;
v___y_3017_ = v___y_3179_;
v___y_3018_ = v___y_3178_;
goto v___jp_2999_;
}
}
}
}
v___jp_3196_:
{
lean_object* v___x_3221_; lean_object* v_fileName_3222_; lean_object* v_fileMap_3223_; lean_object* v_currRecDepth_3224_; lean_object* v_ref_3225_; lean_object* v_currNamespace_3226_; lean_object* v_openDecls_3227_; lean_object* v_initHeartbeats_3228_; lean_object* v_maxHeartbeats_3229_; lean_object* v_quotContext_3230_; lean_object* v_currMacroScope_3231_; lean_object* v_cancelTk_x3f_3232_; uint8_t v_suppressElabErrors_3233_; lean_object* v_inheritedTraceOptions_3234_; lean_object* v___x_3236_; uint8_t v_isShared_3237_; uint8_t v_isSharedCheck_3264_; 
v___x_3221_ = lean_st_ref_take(v___y_3220_);
v_fileName_3222_ = lean_ctor_get(v___y_3219_, 0);
v_fileMap_3223_ = lean_ctor_get(v___y_3219_, 1);
v_currRecDepth_3224_ = lean_ctor_get(v___y_3219_, 3);
v_ref_3225_ = lean_ctor_get(v___y_3219_, 5);
v_currNamespace_3226_ = lean_ctor_get(v___y_3219_, 6);
v_openDecls_3227_ = lean_ctor_get(v___y_3219_, 7);
v_initHeartbeats_3228_ = lean_ctor_get(v___y_3219_, 8);
v_maxHeartbeats_3229_ = lean_ctor_get(v___y_3219_, 9);
v_quotContext_3230_ = lean_ctor_get(v___y_3219_, 10);
v_currMacroScope_3231_ = lean_ctor_get(v___y_3219_, 11);
v_cancelTk_x3f_3232_ = lean_ctor_get(v___y_3219_, 12);
v_suppressElabErrors_3233_ = lean_ctor_get_uint8(v___y_3219_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_3234_ = lean_ctor_get(v___y_3219_, 13);
v_isSharedCheck_3264_ = !lean_is_exclusive(v___y_3219_);
if (v_isSharedCheck_3264_ == 0)
{
lean_object* v_unused_3265_; lean_object* v_unused_3266_; 
v_unused_3265_ = lean_ctor_get(v___y_3219_, 4);
lean_dec(v_unused_3265_);
v_unused_3266_ = lean_ctor_get(v___y_3219_, 2);
lean_dec(v_unused_3266_);
v___x_3236_ = v___y_3219_;
v_isShared_3237_ = v_isSharedCheck_3264_;
goto v_resetjp_3235_;
}
else
{
lean_inc(v_inheritedTraceOptions_3234_);
lean_inc(v_cancelTk_x3f_3232_);
lean_inc(v_currMacroScope_3231_);
lean_inc(v_quotContext_3230_);
lean_inc(v_maxHeartbeats_3229_);
lean_inc(v_initHeartbeats_3228_);
lean_inc(v_openDecls_3227_);
lean_inc(v_currNamespace_3226_);
lean_inc(v_ref_3225_);
lean_inc(v_currRecDepth_3224_);
lean_inc(v_fileMap_3223_);
lean_inc(v_fileName_3222_);
lean_dec(v___y_3219_);
v___x_3236_ = lean_box(0);
v_isShared_3237_ = v_isSharedCheck_3264_;
goto v_resetjp_3235_;
}
v_resetjp_3235_:
{
lean_object* v_env_3238_; lean_object* v_nextMacroScope_3239_; lean_object* v_ngen_3240_; lean_object* v_auxDeclNGen_3241_; lean_object* v_traceState_3242_; lean_object* v_messages_3243_; lean_object* v_infoState_3244_; lean_object* v_snapshotTasks_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3249_; 
v_env_3238_ = lean_ctor_get(v___x_3221_, 0);
lean_inc_ref(v_env_3238_);
v_nextMacroScope_3239_ = lean_ctor_get(v___x_3221_, 1);
lean_inc(v_nextMacroScope_3239_);
v_ngen_3240_ = lean_ctor_get(v___x_3221_, 2);
lean_inc_ref(v_ngen_3240_);
v_auxDeclNGen_3241_ = lean_ctor_get(v___x_3221_, 3);
lean_inc_ref(v_auxDeclNGen_3241_);
v_traceState_3242_ = lean_ctor_get(v___x_3221_, 4);
lean_inc_ref(v_traceState_3242_);
v_messages_3243_ = lean_ctor_get(v___x_3221_, 6);
lean_inc_ref(v_messages_3243_);
v_infoState_3244_ = lean_ctor_get(v___x_3221_, 7);
lean_inc_ref(v_infoState_3244_);
v_snapshotTasks_3245_ = lean_ctor_get(v___x_3221_, 8);
lean_inc_ref(v_snapshotTasks_3245_);
lean_dec(v___x_3221_);
v___x_3246_ = l_Lean_maxRecDepth;
v___x_3247_ = l_Lean_Option_get___at___00main_spec__9(v___x_2998_, v___x_3246_);
lean_inc_ref(v___x_2998_);
if (v_isShared_3237_ == 0)
{
lean_ctor_set(v___x_3236_, 4, v___x_3247_);
lean_ctor_set(v___x_3236_, 2, v___x_2998_);
v___x_3249_ = v___x_3236_;
goto v_reusejp_3248_;
}
else
{
lean_object* v_reuseFailAlloc_3263_; 
v_reuseFailAlloc_3263_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_3263_, 0, v_fileName_3222_);
lean_ctor_set(v_reuseFailAlloc_3263_, 1, v_fileMap_3223_);
lean_ctor_set(v_reuseFailAlloc_3263_, 2, v___x_2998_);
lean_ctor_set(v_reuseFailAlloc_3263_, 3, v_currRecDepth_3224_);
lean_ctor_set(v_reuseFailAlloc_3263_, 4, v___x_3247_);
lean_ctor_set(v_reuseFailAlloc_3263_, 5, v_ref_3225_);
lean_ctor_set(v_reuseFailAlloc_3263_, 6, v_currNamespace_3226_);
lean_ctor_set(v_reuseFailAlloc_3263_, 7, v_openDecls_3227_);
lean_ctor_set(v_reuseFailAlloc_3263_, 8, v_initHeartbeats_3228_);
lean_ctor_set(v_reuseFailAlloc_3263_, 9, v_maxHeartbeats_3229_);
lean_ctor_set(v_reuseFailAlloc_3263_, 10, v_quotContext_3230_);
lean_ctor_set(v_reuseFailAlloc_3263_, 11, v_currMacroScope_3231_);
lean_ctor_set(v_reuseFailAlloc_3263_, 12, v_cancelTk_x3f_3232_);
lean_ctor_set(v_reuseFailAlloc_3263_, 13, v_inheritedTraceOptions_3234_);
lean_ctor_set_uint8(v_reuseFailAlloc_3263_, sizeof(void*)*14 + 1, v_suppressElabErrors_3233_);
v___x_3249_ = v_reuseFailAlloc_3263_;
goto v_reusejp_3248_;
}
v_reusejp_3248_:
{
lean_object* v___x_3250_; uint8_t v___x_3251_; 
lean_ctor_set_uint8(v___x_3249_, sizeof(void*)*14, v___y_3218_);
v___x_3250_ = lean_array_get_size(v___y_3207_);
v___x_3251_ = lean_nat_dec_lt(v___x_2997_, v___x_3250_);
if (v___x_3251_ == 0)
{
lean_object* v___x_3252_; 
lean_inc_ref(v___y_3216_);
v___x_3252_ = l_Lean_SimplePersistentEnvExtension_setState___redArg(v___y_3216_, v_env_3238_, v___x_2991_);
v___y_3154_ = v___y_3197_;
v___y_3155_ = v___y_3198_;
v___y_3156_ = v___y_3199_;
v___y_3157_ = v___y_3200_;
v___y_3158_ = v___y_3202_;
v___y_3159_ = v___y_3201_;
v___y_3160_ = v___y_3203_;
v___y_3161_ = v___y_3204_;
v___y_3162_ = v___y_3205_;
v_nextMacroScope_3163_ = v_nextMacroScope_3239_;
v_ngen_3164_ = v_ngen_3240_;
v_auxDeclNGen_3165_ = v_auxDeclNGen_3241_;
v_traceState_3166_ = v_traceState_3242_;
v_messages_3167_ = v_messages_3243_;
v_infoState_3168_ = v_infoState_3244_;
v_snapshotTasks_3169_ = v_snapshotTasks_3245_;
v___y_3170_ = v___y_3206_;
v___y_3171_ = v___y_3207_;
v___y_3172_ = v___y_3208_;
v___y_3173_ = v___y_3220_;
v___y_3174_ = v___y_3209_;
v___y_3175_ = v___y_3210_;
v___y_3176_ = v___y_3211_;
v___y_3177_ = v___y_3212_;
v___y_3178_ = v___y_3213_;
v___y_3179_ = v___y_3214_;
v___y_3180_ = v___x_3249_;
v___y_3181_ = v___y_3215_;
v___y_3182_ = v___y_3217_;
v___y_3183_ = v___x_3252_;
goto v___jp_3153_;
}
else
{
uint8_t v___x_3253_; 
v___x_3253_ = lean_nat_dec_le(v___x_3250_, v___x_3250_);
if (v___x_3253_ == 0)
{
if (v___x_3251_ == 0)
{
lean_object* v___x_3254_; 
lean_inc_ref(v___y_3216_);
v___x_3254_ = l_Lean_SimplePersistentEnvExtension_setState___redArg(v___y_3216_, v_env_3238_, v___x_2991_);
v___y_3154_ = v___y_3197_;
v___y_3155_ = v___y_3198_;
v___y_3156_ = v___y_3199_;
v___y_3157_ = v___y_3200_;
v___y_3158_ = v___y_3202_;
v___y_3159_ = v___y_3201_;
v___y_3160_ = v___y_3203_;
v___y_3161_ = v___y_3204_;
v___y_3162_ = v___y_3205_;
v_nextMacroScope_3163_ = v_nextMacroScope_3239_;
v_ngen_3164_ = v_ngen_3240_;
v_auxDeclNGen_3165_ = v_auxDeclNGen_3241_;
v_traceState_3166_ = v_traceState_3242_;
v_messages_3167_ = v_messages_3243_;
v_infoState_3168_ = v_infoState_3244_;
v_snapshotTasks_3169_ = v_snapshotTasks_3245_;
v___y_3170_ = v___y_3206_;
v___y_3171_ = v___y_3207_;
v___y_3172_ = v___y_3208_;
v___y_3173_ = v___y_3220_;
v___y_3174_ = v___y_3209_;
v___y_3175_ = v___y_3210_;
v___y_3176_ = v___y_3211_;
v___y_3177_ = v___y_3212_;
v___y_3178_ = v___y_3213_;
v___y_3179_ = v___y_3214_;
v___y_3180_ = v___x_3249_;
v___y_3181_ = v___y_3215_;
v___y_3182_ = v___y_3217_;
v___y_3183_ = v___x_3254_;
goto v___jp_3153_;
}
else
{
size_t v___x_3255_; size_t v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; 
v___x_3255_ = ((size_t)0ULL);
v___x_3256_ = lean_usize_of_nat(v___x_3250_);
v___x_3257_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15(v___y_3207_, v___x_3255_, v___x_3256_, v___x_2991_);
lean_inc_ref(v___y_3216_);
v___x_3258_ = l_Lean_SimplePersistentEnvExtension_setState___redArg(v___y_3216_, v_env_3238_, v___x_3257_);
v___y_3154_ = v___y_3197_;
v___y_3155_ = v___y_3198_;
v___y_3156_ = v___y_3199_;
v___y_3157_ = v___y_3200_;
v___y_3158_ = v___y_3202_;
v___y_3159_ = v___y_3201_;
v___y_3160_ = v___y_3203_;
v___y_3161_ = v___y_3204_;
v___y_3162_ = v___y_3205_;
v_nextMacroScope_3163_ = v_nextMacroScope_3239_;
v_ngen_3164_ = v_ngen_3240_;
v_auxDeclNGen_3165_ = v_auxDeclNGen_3241_;
v_traceState_3166_ = v_traceState_3242_;
v_messages_3167_ = v_messages_3243_;
v_infoState_3168_ = v_infoState_3244_;
v_snapshotTasks_3169_ = v_snapshotTasks_3245_;
v___y_3170_ = v___y_3206_;
v___y_3171_ = v___y_3207_;
v___y_3172_ = v___y_3208_;
v___y_3173_ = v___y_3220_;
v___y_3174_ = v___y_3209_;
v___y_3175_ = v___y_3210_;
v___y_3176_ = v___y_3211_;
v___y_3177_ = v___y_3212_;
v___y_3178_ = v___y_3213_;
v___y_3179_ = v___y_3214_;
v___y_3180_ = v___x_3249_;
v___y_3181_ = v___y_3215_;
v___y_3182_ = v___y_3217_;
v___y_3183_ = v___x_3258_;
goto v___jp_3153_;
}
}
else
{
size_t v___x_3259_; size_t v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; 
v___x_3259_ = ((size_t)0ULL);
v___x_3260_ = lean_usize_of_nat(v___x_3250_);
v___x_3261_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15(v___y_3207_, v___x_3259_, v___x_3260_, v___x_2991_);
lean_inc_ref(v___y_3216_);
v___x_3262_ = l_Lean_SimplePersistentEnvExtension_setState___redArg(v___y_3216_, v_env_3238_, v___x_3261_);
v___y_3154_ = v___y_3197_;
v___y_3155_ = v___y_3198_;
v___y_3156_ = v___y_3199_;
v___y_3157_ = v___y_3200_;
v___y_3158_ = v___y_3202_;
v___y_3159_ = v___y_3201_;
v___y_3160_ = v___y_3203_;
v___y_3161_ = v___y_3204_;
v___y_3162_ = v___y_3205_;
v_nextMacroScope_3163_ = v_nextMacroScope_3239_;
v_ngen_3164_ = v_ngen_3240_;
v_auxDeclNGen_3165_ = v_auxDeclNGen_3241_;
v_traceState_3166_ = v_traceState_3242_;
v_messages_3167_ = v_messages_3243_;
v_infoState_3168_ = v_infoState_3244_;
v_snapshotTasks_3169_ = v_snapshotTasks_3245_;
v___y_3170_ = v___y_3206_;
v___y_3171_ = v___y_3207_;
v___y_3172_ = v___y_3208_;
v___y_3173_ = v___y_3220_;
v___y_3174_ = v___y_3209_;
v___y_3175_ = v___y_3210_;
v___y_3176_ = v___y_3211_;
v___y_3177_ = v___y_3212_;
v___y_3178_ = v___y_3213_;
v___y_3179_ = v___y_3214_;
v___y_3180_ = v___x_3249_;
v___y_3181_ = v___y_3215_;
v___y_3182_ = v___y_3217_;
v___y_3183_ = v___x_3262_;
goto v___jp_3153_;
}
}
}
}
}
v___jp_3267_:
{
if (v___y_3291_ == 0)
{
lean_object* v___x_3292_; lean_object* v_env_3293_; lean_object* v_nextMacroScope_3294_; lean_object* v_ngen_3295_; lean_object* v_auxDeclNGen_3296_; lean_object* v_traceState_3297_; lean_object* v_messages_3298_; lean_object* v_infoState_3299_; lean_object* v_snapshotTasks_3300_; lean_object* v___x_3302_; uint8_t v_isShared_3303_; uint8_t v_isSharedCheck_3309_; 
v___x_3292_ = lean_st_ref_take(v___y_3277_);
v_env_3293_ = lean_ctor_get(v___x_3292_, 0);
v_nextMacroScope_3294_ = lean_ctor_get(v___x_3292_, 1);
v_ngen_3295_ = lean_ctor_get(v___x_3292_, 2);
v_auxDeclNGen_3296_ = lean_ctor_get(v___x_3292_, 3);
v_traceState_3297_ = lean_ctor_get(v___x_3292_, 4);
v_messages_3298_ = lean_ctor_get(v___x_3292_, 6);
v_infoState_3299_ = lean_ctor_get(v___x_3292_, 7);
v_snapshotTasks_3300_ = lean_ctor_get(v___x_3292_, 8);
v_isSharedCheck_3309_ = !lean_is_exclusive(v___x_3292_);
if (v_isSharedCheck_3309_ == 0)
{
lean_object* v_unused_3310_; 
v_unused_3310_ = lean_ctor_get(v___x_3292_, 5);
lean_dec(v_unused_3310_);
v___x_3302_ = v___x_3292_;
v_isShared_3303_ = v_isSharedCheck_3309_;
goto v_resetjp_3301_;
}
else
{
lean_inc(v_snapshotTasks_3300_);
lean_inc(v_infoState_3299_);
lean_inc(v_messages_3298_);
lean_inc(v_traceState_3297_);
lean_inc(v_auxDeclNGen_3296_);
lean_inc(v_ngen_3295_);
lean_inc(v_nextMacroScope_3294_);
lean_inc(v_env_3293_);
lean_dec(v___x_3292_);
v___x_3302_ = lean_box(0);
v_isShared_3303_ = v_isSharedCheck_3309_;
goto v_resetjp_3301_;
}
v_resetjp_3301_:
{
lean_object* v___x_3304_; lean_object* v___x_3306_; 
v___x_3304_ = l_Lean_Kernel_enableDiag(v_env_3293_, v___y_3290_);
lean_inc_ref(v___y_3280_);
if (v_isShared_3303_ == 0)
{
lean_ctor_set(v___x_3302_, 5, v___y_3280_);
lean_ctor_set(v___x_3302_, 0, v___x_3304_);
v___x_3306_ = v___x_3302_;
goto v_reusejp_3305_;
}
else
{
lean_object* v_reuseFailAlloc_3308_; 
v_reuseFailAlloc_3308_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3308_, 0, v___x_3304_);
lean_ctor_set(v_reuseFailAlloc_3308_, 1, v_nextMacroScope_3294_);
lean_ctor_set(v_reuseFailAlloc_3308_, 2, v_ngen_3295_);
lean_ctor_set(v_reuseFailAlloc_3308_, 3, v_auxDeclNGen_3296_);
lean_ctor_set(v_reuseFailAlloc_3308_, 4, v_traceState_3297_);
lean_ctor_set(v_reuseFailAlloc_3308_, 5, v___y_3280_);
lean_ctor_set(v_reuseFailAlloc_3308_, 6, v_messages_3298_);
lean_ctor_set(v_reuseFailAlloc_3308_, 7, v_infoState_3299_);
lean_ctor_set(v_reuseFailAlloc_3308_, 8, v_snapshotTasks_3300_);
v___x_3306_ = v_reuseFailAlloc_3308_;
goto v_reusejp_3305_;
}
v_reusejp_3305_:
{
lean_object* v___x_3307_; 
v___x_3307_ = lean_st_ref_set(v___y_3277_, v___x_3306_);
lean_inc(v___y_3277_);
v___y_3197_ = v___y_3268_;
v___y_3198_ = v___y_3269_;
v___y_3199_ = v___y_3270_;
v___y_3200_ = v___y_3271_;
v___y_3201_ = v___y_3273_;
v___y_3202_ = v___y_3272_;
v___y_3203_ = v___y_3274_;
v___y_3204_ = v___y_3275_;
v___y_3205_ = v___y_3276_;
v___y_3206_ = v___y_3277_;
v___y_3207_ = v___y_3278_;
v___y_3208_ = v___y_3279_;
v___y_3209_ = v___y_3280_;
v___y_3210_ = v___y_3281_;
v___y_3211_ = v___y_3282_;
v___y_3212_ = v___y_3283_;
v___y_3213_ = v___y_3284_;
v___y_3214_ = v___y_3285_;
v___y_3215_ = v___y_3287_;
v___y_3216_ = v___y_3286_;
v___y_3217_ = v___y_3288_;
v___y_3218_ = v___y_3290_;
v___y_3219_ = v___y_3289_;
v___y_3220_ = v___y_3277_;
goto v___jp_3196_;
}
}
}
else
{
lean_inc(v___y_3277_);
v___y_3197_ = v___y_3268_;
v___y_3198_ = v___y_3269_;
v___y_3199_ = v___y_3270_;
v___y_3200_ = v___y_3271_;
v___y_3201_ = v___y_3273_;
v___y_3202_ = v___y_3272_;
v___y_3203_ = v___y_3274_;
v___y_3204_ = v___y_3275_;
v___y_3205_ = v___y_3276_;
v___y_3206_ = v___y_3277_;
v___y_3207_ = v___y_3278_;
v___y_3208_ = v___y_3279_;
v___y_3209_ = v___y_3280_;
v___y_3210_ = v___y_3281_;
v___y_3211_ = v___y_3282_;
v___y_3212_ = v___y_3283_;
v___y_3213_ = v___y_3284_;
v___y_3214_ = v___y_3285_;
v___y_3215_ = v___y_3287_;
v___y_3216_ = v___y_3286_;
v___y_3217_ = v___y_3288_;
v___y_3218_ = v___y_3290_;
v___y_3219_ = v___y_3289_;
v___y_3220_ = v___y_3277_;
goto v___jp_3196_;
}
}
v___jp_3317_:
{
lean_object* v___x_3326_; 
if (v_isShared_2956_ == 0)
{
lean_ctor_set_tag(v___x_2955_, 0);
lean_ctor_set(v___x_2955_, 1, v___y_3324_);
lean_ctor_set(v___x_2955_, 0, v___y_3319_);
v___x_3326_ = v___x_2955_;
goto v_reusejp_3325_;
}
else
{
lean_object* v_reuseFailAlloc_3422_; 
v_reuseFailAlloc_3422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3422_, 0, v___y_3319_);
lean_ctor_set(v_reuseFailAlloc_3422_, 1, v___y_3324_);
v___x_3326_ = v_reuseFailAlloc_3422_;
goto v_reusejp_3325_;
}
v_reusejp_3325_:
{
lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v_moduleData_3330_; lean_object* v___x_3331_; uint8_t v___x_3332_; 
v___x_3327_ = lean_box(0);
lean_inc_ref(v___y_3321_);
v___x_3328_ = l_Lean_EnvExtension_setState___redArg(v___y_3321_, v___y_3320_, v___x_3326_, v___x_3327_);
v___x_3329_ = l_Lean_Environment_header(v___x_3328_);
v_moduleData_3330_ = lean_ctor_get(v___x_3329_, 6);
lean_inc_ref(v_moduleData_3330_);
lean_dec_ref(v___x_3329_);
v___x_3331_ = lean_array_get_size(v_moduleData_3330_);
v___x_3332_ = lean_nat_dec_lt(v___y_3323_, v___x_3331_);
if (v___x_3332_ == 0)
{
lean_object* v___x_3333_; lean_object* v___x_3334_; 
lean_dec_ref(v_moduleData_3330_);
lean_dec_ref(v___x_3328_);
lean_dec(v___y_3323_);
lean_dec(v___y_3322_);
lean_dec(v___y_3318_);
lean_dec_ref(v___x_2998_);
lean_del_object(v___x_2982_);
lean_dec(v_fst_2979_);
lean_dec(v_name_2968_);
lean_dec(v_head_2961_);
lean_del_object(v___x_2959_);
lean_dec(v_head_2957_);
v___x_3333_ = lean_obj_once(&l_main___closed__22, &l_main___closed__22_once, _init_l_main___closed__22);
v___x_3334_ = l_panic___at___00main_spec__5(v___x_3333_);
return v___x_3334_;
}
else
{
lean_object* v_base_3335_; lean_object* v_private_3336_; lean_object* v_header_3337_; lean_object* v_serverBaseExts_3338_; lean_object* v_checked_3339_; lean_object* v_asyncConstsMap_3340_; lean_object* v_asyncCtx_x3f_3341_; lean_object* v_importRealizationCtx_x3f_3342_; lean_object* v_localRealizationCtxMap_3343_; lean_object* v_allRealizations_3344_; uint8_t v_isExporting_3345_; lean_object* v___x_3347_; uint8_t v_isShared_3348_; uint8_t v_isSharedCheck_3420_; 
v_base_3335_ = lean_ctor_get(v___x_3328_, 0);
lean_inc_ref(v_base_3335_);
v_private_3336_ = lean_ctor_get(v_base_3335_, 0);
lean_inc(v_private_3336_);
v_header_3337_ = lean_ctor_get(v_private_3336_, 6);
lean_inc_ref(v_header_3337_);
v_serverBaseExts_3338_ = lean_ctor_get(v___x_3328_, 1);
v_checked_3339_ = lean_ctor_get(v___x_3328_, 2);
v_asyncConstsMap_3340_ = lean_ctor_get(v___x_3328_, 3);
v_asyncCtx_x3f_3341_ = lean_ctor_get(v___x_3328_, 4);
v_importRealizationCtx_x3f_3342_ = lean_ctor_get(v___x_3328_, 5);
v_localRealizationCtxMap_3343_ = lean_ctor_get(v___x_3328_, 6);
v_allRealizations_3344_ = lean_ctor_get(v___x_3328_, 7);
v_isExporting_3345_ = lean_ctor_get_uint8(v___x_3328_, sizeof(void*)*8);
v_isSharedCheck_3420_ = !lean_is_exclusive(v___x_3328_);
if (v_isSharedCheck_3420_ == 0)
{
lean_object* v_unused_3421_; 
v_unused_3421_ = lean_ctor_get(v___x_3328_, 0);
lean_dec(v_unused_3421_);
v___x_3347_ = v___x_3328_;
v_isShared_3348_ = v_isSharedCheck_3420_;
goto v_resetjp_3346_;
}
else
{
lean_inc(v_allRealizations_3344_);
lean_inc(v_localRealizationCtxMap_3343_);
lean_inc(v_importRealizationCtx_x3f_3342_);
lean_inc(v_asyncCtx_x3f_3341_);
lean_inc(v_asyncConstsMap_3340_);
lean_inc(v_checked_3339_);
lean_inc(v_serverBaseExts_3338_);
lean_dec(v___x_3328_);
v___x_3347_ = lean_box(0);
v_isShared_3348_ = v_isSharedCheck_3420_;
goto v_resetjp_3346_;
}
v_resetjp_3346_:
{
lean_object* v_public_3349_; lean_object* v___x_3351_; uint8_t v_isShared_3352_; uint8_t v_isSharedCheck_3418_; 
v_public_3349_ = lean_ctor_get(v_base_3335_, 1);
v_isSharedCheck_3418_ = !lean_is_exclusive(v_base_3335_);
if (v_isSharedCheck_3418_ == 0)
{
lean_object* v_unused_3419_; 
v_unused_3419_ = lean_ctor_get(v_base_3335_, 0);
lean_dec(v_unused_3419_);
v___x_3351_ = v_base_3335_;
v_isShared_3352_ = v_isSharedCheck_3418_;
goto v_resetjp_3350_;
}
else
{
lean_inc(v_public_3349_);
lean_dec(v_base_3335_);
v___x_3351_ = lean_box(0);
v_isShared_3352_ = v_isSharedCheck_3418_;
goto v_resetjp_3350_;
}
v_resetjp_3350_:
{
lean_object* v_constants_3353_; uint8_t v_quotInit_3354_; lean_object* v_diagnostics_3355_; lean_object* v_allImportedConsts_3356_; lean_object* v_importedExtraConsts_3357_; lean_object* v_extensions_3358_; lean_object* v_irBaseExts_3359_; lean_object* v___x_3361_; uint8_t v_isShared_3362_; uint8_t v_isSharedCheck_3416_; 
v_constants_3353_ = lean_ctor_get(v_private_3336_, 0);
v_quotInit_3354_ = lean_ctor_get_uint8(v_private_3336_, sizeof(void*)*7);
v_diagnostics_3355_ = lean_ctor_get(v_private_3336_, 1);
v_allImportedConsts_3356_ = lean_ctor_get(v_private_3336_, 2);
v_importedExtraConsts_3357_ = lean_ctor_get(v_private_3336_, 3);
v_extensions_3358_ = lean_ctor_get(v_private_3336_, 4);
v_irBaseExts_3359_ = lean_ctor_get(v_private_3336_, 5);
v_isSharedCheck_3416_ = !lean_is_exclusive(v_private_3336_);
if (v_isSharedCheck_3416_ == 0)
{
lean_object* v_unused_3417_; 
v_unused_3417_ = lean_ctor_get(v_private_3336_, 6);
lean_dec(v_unused_3417_);
v___x_3361_ = v_private_3336_;
v_isShared_3362_ = v_isSharedCheck_3416_;
goto v_resetjp_3360_;
}
else
{
lean_inc(v_irBaseExts_3359_);
lean_inc(v_extensions_3358_);
lean_inc(v_importedExtraConsts_3357_);
lean_inc(v_allImportedConsts_3356_);
lean_inc(v_diagnostics_3355_);
lean_inc(v_constants_3353_);
lean_dec(v_private_3336_);
v___x_3361_ = lean_box(0);
v_isShared_3362_ = v_isSharedCheck_3416_;
goto v_resetjp_3360_;
}
v_resetjp_3360_:
{
uint32_t v_trustLevel_3363_; lean_object* v_mainModule_3364_; uint8_t v_isModule_3365_; lean_object* v_regions_3366_; lean_object* v_modules_3367_; lean_object* v_moduleName2Idx_3368_; lean_object* v_importAllModules_3369_; lean_object* v_moduleData_3370_; lean_object* v___x_3372_; uint8_t v_isShared_3373_; uint8_t v_isSharedCheck_3414_; 
v_trustLevel_3363_ = lean_ctor_get_uint32(v_header_3337_, sizeof(void*)*7);
v_mainModule_3364_ = lean_ctor_get(v_header_3337_, 0);
v_isModule_3365_ = lean_ctor_get_uint8(v_header_3337_, sizeof(void*)*7 + 4);
v_regions_3366_ = lean_ctor_get(v_header_3337_, 2);
v_modules_3367_ = lean_ctor_get(v_header_3337_, 3);
v_moduleName2Idx_3368_ = lean_ctor_get(v_header_3337_, 4);
v_importAllModules_3369_ = lean_ctor_get(v_header_3337_, 5);
v_moduleData_3370_ = lean_ctor_get(v_header_3337_, 6);
v_isSharedCheck_3414_ = !lean_is_exclusive(v_header_3337_);
if (v_isSharedCheck_3414_ == 0)
{
lean_object* v_unused_3415_; 
v_unused_3415_ = lean_ctor_get(v_header_3337_, 1);
lean_dec(v_unused_3415_);
v___x_3372_ = v_header_3337_;
v_isShared_3373_ = v_isSharedCheck_3414_;
goto v_resetjp_3371_;
}
else
{
lean_inc(v_moduleData_3370_);
lean_inc(v_importAllModules_3369_);
lean_inc(v_moduleName2Idx_3368_);
lean_inc(v_modules_3367_);
lean_inc(v_regions_3366_);
lean_inc(v_mainModule_3364_);
lean_dec(v_header_3337_);
v___x_3372_ = lean_box(0);
v_isShared_3373_ = v_isSharedCheck_3414_;
goto v_resetjp_3371_;
}
v_resetjp_3371_:
{
lean_object* v___x_3374_; lean_object* v_imports_3375_; lean_object* v___x_3377_; 
v___x_3374_ = lean_array_fget(v_moduleData_3330_, v___y_3323_);
lean_dec_ref(v_moduleData_3330_);
v_imports_3375_ = lean_ctor_get(v___x_3374_, 0);
lean_inc_ref(v_imports_3375_);
lean_dec(v___x_3374_);
if (v_isShared_3373_ == 0)
{
lean_ctor_set(v___x_3372_, 1, v_imports_3375_);
v___x_3377_ = v___x_3372_;
goto v_reusejp_3376_;
}
else
{
lean_object* v_reuseFailAlloc_3413_; 
v_reuseFailAlloc_3413_ = lean_alloc_ctor(0, 7, 5);
lean_ctor_set(v_reuseFailAlloc_3413_, 0, v_mainModule_3364_);
lean_ctor_set(v_reuseFailAlloc_3413_, 1, v_imports_3375_);
lean_ctor_set(v_reuseFailAlloc_3413_, 2, v_regions_3366_);
lean_ctor_set(v_reuseFailAlloc_3413_, 3, v_modules_3367_);
lean_ctor_set(v_reuseFailAlloc_3413_, 4, v_moduleName2Idx_3368_);
lean_ctor_set(v_reuseFailAlloc_3413_, 5, v_importAllModules_3369_);
lean_ctor_set(v_reuseFailAlloc_3413_, 6, v_moduleData_3370_);
lean_ctor_set_uint32(v_reuseFailAlloc_3413_, sizeof(void*)*7, v_trustLevel_3363_);
lean_ctor_set_uint8(v_reuseFailAlloc_3413_, sizeof(void*)*7 + 4, v_isModule_3365_);
v___x_3377_ = v_reuseFailAlloc_3413_;
goto v_reusejp_3376_;
}
v_reusejp_3376_:
{
lean_object* v___x_3379_; 
if (v_isShared_3362_ == 0)
{
lean_ctor_set(v___x_3361_, 6, v___x_3377_);
v___x_3379_ = v___x_3361_;
goto v_reusejp_3378_;
}
else
{
lean_object* v_reuseFailAlloc_3412_; 
v_reuseFailAlloc_3412_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_3412_, 0, v_constants_3353_);
lean_ctor_set(v_reuseFailAlloc_3412_, 1, v_diagnostics_3355_);
lean_ctor_set(v_reuseFailAlloc_3412_, 2, v_allImportedConsts_3356_);
lean_ctor_set(v_reuseFailAlloc_3412_, 3, v_importedExtraConsts_3357_);
lean_ctor_set(v_reuseFailAlloc_3412_, 4, v_extensions_3358_);
lean_ctor_set(v_reuseFailAlloc_3412_, 5, v_irBaseExts_3359_);
lean_ctor_set(v_reuseFailAlloc_3412_, 6, v___x_3377_);
lean_ctor_set_uint8(v_reuseFailAlloc_3412_, sizeof(void*)*7, v_quotInit_3354_);
v___x_3379_ = v_reuseFailAlloc_3412_;
goto v_reusejp_3378_;
}
v_reusejp_3378_:
{
lean_object* v___x_3381_; 
if (v_isShared_3352_ == 0)
{
lean_ctor_set(v___x_3351_, 0, v___x_3379_);
v___x_3381_ = v___x_3351_;
goto v_reusejp_3380_;
}
else
{
lean_object* v_reuseFailAlloc_3411_; 
v_reuseFailAlloc_3411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3411_, 0, v___x_3379_);
lean_ctor_set(v_reuseFailAlloc_3411_, 1, v_public_3349_);
v___x_3381_ = v_reuseFailAlloc_3411_;
goto v_reusejp_3380_;
}
v_reusejp_3380_:
{
lean_object* v___x_3383_; 
if (v_isShared_3348_ == 0)
{
lean_ctor_set(v___x_3347_, 0, v___x_3381_);
v___x_3383_ = v___x_3347_;
goto v_reusejp_3382_;
}
else
{
lean_object* v_reuseFailAlloc_3410_; 
v_reuseFailAlloc_3410_ = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(v_reuseFailAlloc_3410_, 0, v___x_3381_);
lean_ctor_set(v_reuseFailAlloc_3410_, 1, v_serverBaseExts_3338_);
lean_ctor_set(v_reuseFailAlloc_3410_, 2, v_checked_3339_);
lean_ctor_set(v_reuseFailAlloc_3410_, 3, v_asyncConstsMap_3340_);
lean_ctor_set(v_reuseFailAlloc_3410_, 4, v_asyncCtx_x3f_3341_);
lean_ctor_set(v_reuseFailAlloc_3410_, 5, v_importRealizationCtx_x3f_3342_);
lean_ctor_set(v_reuseFailAlloc_3410_, 6, v_localRealizationCtxMap_3343_);
lean_ctor_set(v_reuseFailAlloc_3410_, 7, v_allRealizations_3344_);
lean_ctor_set_uint8(v_reuseFailAlloc_3410_, sizeof(void*)*8, v_isExporting_3345_);
v___x_3383_ = v_reuseFailAlloc_3410_;
goto v_reusejp_3382_;
}
v_reusejp_3382_:
{
lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v_env_3406_; lean_object* v___x_3407_; uint8_t v___x_3408_; uint8_t v___x_3409_; 
v___x_3384_ = l_Lean_Compiler_LCNF_postponedCompileDeclsExt;
v___x_3385_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_2992_, v___x_3384_, v___x_3383_, v___y_3323_, v___x_3316_);
lean_dec(v___y_3323_);
v___x_3386_ = l_Lean_firstFrontendMacroScope;
v___x_3387_ = lean_obj_once(&l_main___closed__23, &l_main___closed__23_once, _init_l_main___closed__23);
v___x_3388_ = ((lean_object*)(l_main___closed__26));
lean_inc_n(v___y_3322_, 3);
v___x_3389_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3389_, 0, v___y_3322_);
lean_ctor_set(v___x_3389_, 1, v___x_3313_);
lean_ctor_set(v___x_3389_, 2, v___x_2985_);
v___x_3390_ = lean_obj_once(&l_main___closed__27, &l_main___closed__27_once, _init_l_main___closed__27);
v___x_3391_ = lean_obj_once(&l_main___closed__30, &l_main___closed__30_once, _init_l_main___closed__30);
v___x_3392_ = lean_obj_once(&l_main___closed__31, &l_main___closed__31_once, _init_l_main___closed__31);
v___x_3393_ = lean_obj_once(&l_main___closed__32, &l_main___closed__32_once, _init_l_main___closed__32);
v___x_3394_ = ((lean_object*)(l_main___closed__33));
lean_inc_ref(v___x_3389_);
v___x_3395_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3395_, 0, v___x_3383_);
lean_ctor_set(v___x_3395_, 1, v___x_3387_);
lean_ctor_set(v___x_3395_, 2, v___x_3388_);
lean_ctor_set(v___x_3395_, 3, v___x_3389_);
lean_ctor_set(v___x_3395_, 4, v___x_3390_);
lean_ctor_set(v___x_3395_, 5, v___x_3391_);
lean_ctor_set(v___x_3395_, 6, v___x_3392_);
lean_ctor_set(v___x_3395_, 7, v___x_3393_);
lean_ctor_set(v___x_3395_, 8, v___x_3394_);
v___x_3396_ = lean_st_mk_ref(v___x_3395_);
v___x_3397_ = l_Lean_inheritedTraceOptions;
v___x_3398_ = lean_st_ref_get(v___x_3397_);
v___x_3399_ = lean_st_ref_get(v___x_3396_);
v___x_3400_ = l_Lean_instInhabitedFileMap_default;
v___x_3401_ = lean_unsigned_to_nat(1000u);
v___x_3402_ = lean_box(0);
v___x_3403_ = l_Lean_Core_getMaxHeartbeats(v___x_2998_);
v___x_3404_ = lean_box(0);
lean_inc_ref(v___x_2998_);
lean_inc(v_head_2957_);
v___x_3405_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_3405_, 0, v_head_2957_);
lean_ctor_set(v___x_3405_, 1, v___x_3400_);
lean_ctor_set(v___x_3405_, 2, v___x_2998_);
lean_ctor_set(v___x_3405_, 3, v___x_2997_);
lean_ctor_set(v___x_3405_, 4, v___x_3401_);
lean_ctor_set(v___x_3405_, 5, v___x_3402_);
lean_ctor_set(v___x_3405_, 6, v___y_3322_);
lean_ctor_set(v___x_3405_, 7, v___x_2985_);
lean_ctor_set(v___x_3405_, 8, v___x_2997_);
lean_ctor_set(v___x_3405_, 9, v___x_3403_);
lean_ctor_set(v___x_3405_, 10, v___y_3322_);
lean_ctor_set(v___x_3405_, 11, v___x_3386_);
lean_ctor_set(v___x_3405_, 12, v___x_3404_);
lean_ctor_set(v___x_3405_, 13, v___x_3398_);
lean_ctor_set_uint8(v___x_3405_, sizeof(void*)*14, v___x_2971_);
lean_ctor_set_uint8(v___x_3405_, sizeof(void*)*14 + 1, v___x_2971_);
v_env_3406_ = lean_ctor_get(v___x_3399_, 0);
lean_inc_ref(v_env_3406_);
lean_dec(v___x_3399_);
v___x_3407_ = l_Lean_diagnostics;
v___x_3408_ = l_Lean_Option_get___at___00main_spec__8(v___x_2998_, v___x_3407_);
v___x_3409_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_3406_);
lean_dec_ref(v_env_3406_);
if (v___x_3409_ == 0)
{
if (v___x_3408_ == 0)
{
v___y_3268_ = v___x_3386_;
v___y_3269_ = v___x_3397_;
v___y_3270_ = v___x_3404_;
v___y_3271_ = v___x_3391_;
v___y_3272_ = v___y_3318_;
v___y_3273_ = v___x_3332_;
v___y_3274_ = v___x_3402_;
v___y_3275_ = v___x_3400_;
v___y_3276_ = v___x_2985_;
v___y_3277_ = v___x_3396_;
v___y_3278_ = v___x_3385_;
v___y_3279_ = v___x_3390_;
v___y_3280_ = v___x_3391_;
v___y_3281_ = v___y_3322_;
v___y_3282_ = v___x_3393_;
v___y_3283_ = v___x_3392_;
v___y_3284_ = v___x_3388_;
v___y_3285_ = v___x_3394_;
v___y_3286_ = v___x_3384_;
v___y_3287_ = v___x_3387_;
v___y_3288_ = v___x_3389_;
v___y_3289_ = v___x_3405_;
v___y_3290_ = v___x_3408_;
v___y_3291_ = v___x_3332_;
goto v___jp_3267_;
}
else
{
v___y_3268_ = v___x_3386_;
v___y_3269_ = v___x_3397_;
v___y_3270_ = v___x_3404_;
v___y_3271_ = v___x_3391_;
v___y_3272_ = v___y_3318_;
v___y_3273_ = v___x_3332_;
v___y_3274_ = v___x_3402_;
v___y_3275_ = v___x_3400_;
v___y_3276_ = v___x_2985_;
v___y_3277_ = v___x_3396_;
v___y_3278_ = v___x_3385_;
v___y_3279_ = v___x_3390_;
v___y_3280_ = v___x_3391_;
v___y_3281_ = v___y_3322_;
v___y_3282_ = v___x_3393_;
v___y_3283_ = v___x_3392_;
v___y_3284_ = v___x_3388_;
v___y_3285_ = v___x_3394_;
v___y_3286_ = v___x_3384_;
v___y_3287_ = v___x_3387_;
v___y_3288_ = v___x_3389_;
v___y_3289_ = v___x_3405_;
v___y_3290_ = v___x_3408_;
v___y_3291_ = v___x_3409_;
goto v___jp_3267_;
}
}
else
{
v___y_3268_ = v___x_3386_;
v___y_3269_ = v___x_3397_;
v___y_3270_ = v___x_3404_;
v___y_3271_ = v___x_3391_;
v___y_3272_ = v___y_3318_;
v___y_3273_ = v___x_3332_;
v___y_3274_ = v___x_3402_;
v___y_3275_ = v___x_3400_;
v___y_3276_ = v___x_2985_;
v___y_3277_ = v___x_3396_;
v___y_3278_ = v___x_3385_;
v___y_3279_ = v___x_3390_;
v___y_3280_ = v___x_3391_;
v___y_3281_ = v___y_3322_;
v___y_3282_ = v___x_3393_;
v___y_3283_ = v___x_3392_;
v___y_3284_ = v___x_3388_;
v___y_3285_ = v___x_3394_;
v___y_3286_ = v___x_3384_;
v___y_3287_ = v___x_3387_;
v___y_3288_ = v___x_3389_;
v___y_3289_ = v___x_3405_;
v___y_3290_ = v___x_3408_;
v___y_3291_ = v___x_3408_;
goto v___jp_3267_;
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
v___jp_3423_:
{
lean_object* v___x_3428_; lean_object* v_toEnvExtension_3429_; lean_object* v_asyncMode_3430_; lean_object* v___x_3431_; lean_object* v_importedEntries_3432_; lean_object* v_state_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; uint8_t v___x_3436_; 
v___x_3428_ = l_Lean_IR_declMapExt;
v_toEnvExtension_3429_ = lean_ctor_get(v___x_3428_, 0);
v_asyncMode_3430_ = lean_ctor_get(v_toEnvExtension_3429_, 2);
lean_inc(v___y_3425_);
lean_inc_ref(v___y_3427_);
v___x_3431_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_2989_, v_toEnvExtension_3429_, v___y_3427_, v_asyncMode_3430_, v___y_3425_);
v_importedEntries_3432_ = lean_ctor_get(v___x_3431_, 0);
lean_inc_ref(v_importedEntries_3432_);
v_state_3433_ = lean_ctor_get(v___x_3431_, 1);
lean_inc(v_state_3433_);
lean_dec(v___x_3431_);
v___x_3434_ = lean_array_get_borrowed(v___x_2990_, v_importedEntries_3432_, v___y_3426_);
v___x_3435_ = lean_array_get_size(v___x_3434_);
v___x_3436_ = lean_nat_dec_lt(v___x_2997_, v___x_3435_);
if (v___x_3436_ == 0)
{
v___y_3318_ = v___y_3424_;
v___y_3319_ = v_importedEntries_3432_;
v___y_3320_ = v___y_3427_;
v___y_3321_ = v_toEnvExtension_3429_;
v___y_3322_ = v___y_3425_;
v___y_3323_ = v___y_3426_;
v___y_3324_ = v_state_3433_;
goto v___jp_3317_;
}
else
{
uint8_t v___x_3437_; 
v___x_3437_ = lean_nat_dec_le(v___x_3435_, v___x_3435_);
if (v___x_3437_ == 0)
{
if (v___x_3436_ == 0)
{
v___y_3318_ = v___y_3424_;
v___y_3319_ = v_importedEntries_3432_;
v___y_3320_ = v___y_3427_;
v___y_3321_ = v_toEnvExtension_3429_;
v___y_3322_ = v___y_3425_;
v___y_3323_ = v___y_3426_;
v___y_3324_ = v_state_3433_;
goto v___jp_3317_;
}
else
{
size_t v___x_3438_; size_t v___x_3439_; lean_object* v___x_3440_; 
v___x_3438_ = ((size_t)0ULL);
v___x_3439_ = lean_usize_of_nat(v___x_3435_);
lean_inc_ref(v___y_3427_);
v___x_3440_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16(v___y_3427_, v___x_3434_, v___x_3438_, v___x_3439_, v_state_3433_);
v___y_3318_ = v___y_3424_;
v___y_3319_ = v_importedEntries_3432_;
v___y_3320_ = v___y_3427_;
v___y_3321_ = v_toEnvExtension_3429_;
v___y_3322_ = v___y_3425_;
v___y_3323_ = v___y_3426_;
v___y_3324_ = v___x_3440_;
goto v___jp_3317_;
}
}
else
{
size_t v___x_3441_; size_t v___x_3442_; lean_object* v___x_3443_; 
v___x_3441_ = ((size_t)0ULL);
v___x_3442_ = lean_usize_of_nat(v___x_3435_);
lean_inc_ref(v___y_3427_);
v___x_3443_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16(v___y_3427_, v___x_3434_, v___x_3441_, v___x_3442_, v_state_3433_);
v___y_3318_ = v___y_3424_;
v___y_3319_ = v_importedEntries_3432_;
v___y_3320_ = v___y_3427_;
v___y_3321_ = v_toEnvExtension_3429_;
v___y_3322_ = v___y_3425_;
v___y_3323_ = v___y_3426_;
v___y_3324_ = v___x_3443_;
goto v___jp_3317_;
}
}
}
v___jp_3444_:
{
uint8_t v___x_3451_; 
v___x_3451_ = lean_nat_dec_lt(v___x_2997_, v___y_3447_);
if (v___x_3451_ == 0)
{
lean_dec_ref(v___y_3449_);
lean_dec(v___y_3447_);
v___y_3424_ = v___y_3445_;
v___y_3425_ = v___y_3446_;
v___y_3426_ = v___y_3448_;
v___y_3427_ = v___y_3450_;
goto v___jp_3423_;
}
else
{
uint8_t v___x_3452_; 
v___x_3452_ = lean_nat_dec_le(v___y_3447_, v___y_3447_);
if (v___x_3452_ == 0)
{
if (v___x_3451_ == 0)
{
lean_dec_ref(v___y_3449_);
lean_dec(v___y_3447_);
v___y_3424_ = v___y_3445_;
v___y_3425_ = v___y_3446_;
v___y_3426_ = v___y_3448_;
v___y_3427_ = v___y_3450_;
goto v___jp_3423_;
}
else
{
size_t v___x_3453_; size_t v___x_3454_; lean_object* v___x_3455_; 
v___x_3453_ = ((size_t)0ULL);
v___x_3454_ = lean_usize_of_nat(v___y_3447_);
lean_dec(v___y_3447_);
v___x_3455_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17(v___y_3449_, v___x_3453_, v___x_3454_, v___y_3450_);
lean_dec_ref(v___y_3449_);
v___y_3424_ = v___y_3445_;
v___y_3425_ = v___y_3446_;
v___y_3426_ = v___y_3448_;
v___y_3427_ = v___x_3455_;
goto v___jp_3423_;
}
}
else
{
size_t v___x_3456_; size_t v___x_3457_; lean_object* v___x_3458_; 
v___x_3456_ = ((size_t)0ULL);
v___x_3457_ = lean_usize_of_nat(v___y_3447_);
lean_dec(v___y_3447_);
v___x_3458_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17(v___y_3449_, v___x_3456_, v___x_3457_, v___y_3450_);
lean_dec_ref(v___y_3449_);
v___y_3424_ = v___y_3445_;
v___y_3425_ = v___y_3446_;
v___y_3426_ = v___y_3448_;
v___y_3427_ = v___x_3458_;
goto v___jp_3423_;
}
}
}
v___jp_3459_:
{
lean_object* v___x_3465_; uint8_t v___x_3466_; 
v___x_3465_ = lean_array_get_size(v___y_3464_);
v___x_3466_ = lean_nat_dec_lt(v___x_2997_, v___x_3465_);
if (v___x_3466_ == 0)
{
v___y_3445_ = v___y_3460_;
v___y_3446_ = v___y_3462_;
v___y_3447_ = v___x_3465_;
v___y_3448_ = v___y_3461_;
v___y_3449_ = v___y_3464_;
v___y_3450_ = v___y_3463_;
goto v___jp_3444_;
}
else
{
uint8_t v___x_3467_; 
v___x_3467_ = lean_nat_dec_le(v___x_3465_, v___x_3465_);
if (v___x_3467_ == 0)
{
if (v___x_3466_ == 0)
{
v___y_3445_ = v___y_3460_;
v___y_3446_ = v___y_3462_;
v___y_3447_ = v___x_3465_;
v___y_3448_ = v___y_3461_;
v___y_3449_ = v___y_3464_;
v___y_3450_ = v___y_3463_;
goto v___jp_3444_;
}
else
{
size_t v___x_3468_; size_t v___x_3469_; lean_object* v___x_3470_; 
v___x_3468_ = ((size_t)0ULL);
v___x_3469_ = lean_usize_of_nat(v___x_3465_);
v___x_3470_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18(v___y_3464_, v___x_3468_, v___x_3469_, v___y_3463_);
v___y_3445_ = v___y_3460_;
v___y_3446_ = v___y_3462_;
v___y_3447_ = v___x_3465_;
v___y_3448_ = v___y_3461_;
v___y_3449_ = v___y_3464_;
v___y_3450_ = v___x_3470_;
goto v___jp_3444_;
}
}
else
{
size_t v___x_3471_; size_t v___x_3472_; lean_object* v___x_3473_; 
v___x_3471_ = ((size_t)0ULL);
v___x_3472_ = lean_usize_of_nat(v___x_3465_);
v___x_3473_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18(v___y_3464_, v___x_3471_, v___x_3472_, v___y_3463_);
v___y_3445_ = v___y_3460_;
v___y_3446_ = v___y_3462_;
v___y_3447_ = v___x_3465_;
v___y_3448_ = v___y_3461_;
v___y_3449_ = v___y_3464_;
v___y_3450_ = v___x_3473_;
goto v___jp_3444_;
}
}
}
v___jp_3475_:
{
lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___f_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; 
v___x_3477_ = l_Lean_instInhabitedImportState_default;
v___x_3478_ = lean_box(v___x_3316_);
v___x_3479_ = lean_box(v___y_3476_);
v___x_3480_ = lean_box(v___x_2994_);
v___x_3481_ = lean_box(v___x_3474_);
v___x_3482_ = lean_box(v___x_2971_);
lean_inc_ref(v___x_2998_);
lean_inc(v_name_2968_);
v___f_3483_ = lean_alloc_closure((void*)(l_main___lam__0___boxed), 11, 10);
lean_closure_set(v___f_3483_, 0, v___x_3477_);
lean_closure_set(v___f_3483_, 1, v___x_3315_);
lean_closure_set(v___f_3483_, 2, v___x_3478_);
lean_closure_set(v___f_3483_, 3, v_importArts_2969_);
lean_closure_set(v___f_3483_, 4, v___x_3479_);
lean_closure_set(v___f_3483_, 5, v___x_3480_);
lean_closure_set(v___f_3483_, 6, v_name_2968_);
lean_closure_set(v___f_3483_, 7, v___x_3481_);
lean_closure_set(v___f_3483_, 8, v___x_2998_);
lean_closure_set(v___f_3483_, 9, v___x_3482_);
v___x_3484_ = lean_alloc_closure((void*)(l_Lean_withImporting___boxed), 3, 2);
lean_closure_set(v___x_3484_, 0, lean_box(0));
lean_closure_set(v___x_3484_, 1, v___f_3483_);
v___x_3485_ = lean_box(0);
v___x_3486_ = l_Lean_profileitIOUnsafe___redArg(v___x_3311_, v___x_2998_, v___x_3484_, v___x_3485_);
if (lean_obj_tag(v___x_3486_) == 0)
{
lean_object* v_a_3487_; lean_object* v___x_3488_; lean_object* v_ext_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; 
v_a_3487_ = lean_ctor_get(v___x_3486_, 0);
lean_inc(v_a_3487_);
lean_dec_ref_known(v___x_3486_, 1);
v___x_3488_ = l_Lean_Compiler_CSimp_ext;
v_ext_3489_ = lean_ctor_get(v___x_3488_, 1);
lean_inc(v_name_2968_);
v___x_3490_ = l_Lean_Environment_setMainModule(v_a_3487_, v_name_2968_);
lean_inc_ref(v_ext_3489_);
v___x_3491_ = l_main___elam__0___redArg(v___x_3485_, v___x_2984_, v_ext_3489_, v___x_3490_);
if (lean_obj_tag(v___x_3491_) == 0)
{
lean_object* v_a_3492_; lean_object* v___x_3493_; lean_object* v_ext_3494_; lean_object* v___x_3495_; 
v_a_3492_ = lean_ctor_get(v___x_3491_, 0);
lean_inc(v_a_3492_);
lean_dec_ref_known(v___x_3491_, 1);
v___x_3493_ = l_Lean_Meta_instanceExtension;
v_ext_3494_ = lean_ctor_get(v___x_3493_, 1);
lean_inc_ref(v_ext_3494_);
v___x_3495_ = l_main___elam__0___redArg(v___x_3485_, v___x_2984_, v_ext_3494_, v_a_3492_);
if (lean_obj_tag(v___x_3495_) == 0)
{
lean_object* v_a_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; 
v_a_3496_ = lean_ctor_get(v___x_3495_, 0);
lean_inc(v_a_3496_);
lean_dec_ref_known(v___x_3495_, 1);
v___x_3497_ = l_Lean_classExtension;
v___x_3498_ = l_main___elam__0___redArg(v___x_3485_, v___x_2986_, v___x_3497_, v_a_3496_);
if (lean_obj_tag(v___x_3498_) == 0)
{
lean_object* v_a_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; 
v_a_3499_ = lean_ctor_get(v___x_3498_, 0);
lean_inc(v_a_3499_);
lean_dec_ref_known(v___x_3498_, 1);
v___x_3500_ = l_Lean_Meta_Match_Extension_extension;
v___x_3501_ = l_main___elam__0___redArg(v___x_3485_, v___x_2987_, v___x_3500_, v_a_3499_);
if (lean_obj_tag(v___x_3501_) == 0)
{
lean_object* v_a_3502_; lean_object* v___x_3504_; uint8_t v_isShared_3505_; uint8_t v_isSharedCheck_3529_; 
v_a_3502_ = lean_ctor_get(v___x_3501_, 0);
v_isSharedCheck_3529_ = !lean_is_exclusive(v___x_3501_);
if (v_isSharedCheck_3529_ == 0)
{
v___x_3504_ = v___x_3501_;
v_isShared_3505_ = v_isSharedCheck_3529_;
goto v_resetjp_3503_;
}
else
{
lean_inc(v_a_3502_);
lean_dec(v___x_3501_);
v___x_3504_ = lean_box(0);
v_isShared_3505_ = v_isSharedCheck_3529_;
goto v_resetjp_3503_;
}
v_resetjp_3503_:
{
lean_object* v___x_3506_; 
v___x_3506_ = l_Lean_Environment_getModuleIdx_x3f(v_a_3502_, v_name_2968_);
if (lean_obj_tag(v___x_3506_) == 1)
{
lean_object* v_val_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; uint8_t v___x_3512_; 
lean_del_object(v___x_3504_);
v_val_3507_ = lean_ctor_get(v___x_3506_, 0);
lean_inc(v_val_3507_);
lean_dec_ref_known(v___x_3506_, 1);
v___x_3508_ = l_Lean_Compiler_LCNF_impureSigExt;
v___x_3509_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_2988_, v___x_3508_, v_a_3502_, v_val_3507_, v___x_3316_);
v___x_3510_ = lean_array_get_size(v___x_3509_);
v___x_3511_ = ((lean_object*)(l_main___closed__34));
v___x_3512_ = lean_nat_dec_lt(v___x_2997_, v___x_3510_);
if (v___x_3512_ == 0)
{
lean_dec_ref(v___x_3509_);
v___y_3460_ = v___x_3485_;
v___y_3461_ = v_val_3507_;
v___y_3462_ = v___x_3485_;
v___y_3463_ = v_a_3502_;
v___y_3464_ = v___x_3511_;
goto v___jp_3459_;
}
else
{
uint8_t v___x_3513_; 
v___x_3513_ = lean_nat_dec_le(v___x_3510_, v___x_3510_);
if (v___x_3513_ == 0)
{
if (v___x_3512_ == 0)
{
lean_dec_ref(v___x_3509_);
v___y_3460_ = v___x_3485_;
v___y_3461_ = v_val_3507_;
v___y_3462_ = v___x_3485_;
v___y_3463_ = v_a_3502_;
v___y_3464_ = v___x_3511_;
goto v___jp_3459_;
}
else
{
size_t v___x_3514_; size_t v___x_3515_; lean_object* v___x_3516_; 
v___x_3514_ = ((size_t)0ULL);
v___x_3515_ = lean_usize_of_nat(v___x_3510_);
lean_inc(v_a_3502_);
v___x_3516_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__19(v_a_3502_, v___x_3509_, v___x_3514_, v___x_3515_, v___x_3511_);
lean_dec_ref(v___x_3509_);
v___y_3460_ = v___x_3485_;
v___y_3461_ = v_val_3507_;
v___y_3462_ = v___x_3485_;
v___y_3463_ = v_a_3502_;
v___y_3464_ = v___x_3516_;
goto v___jp_3459_;
}
}
else
{
size_t v___x_3517_; size_t v___x_3518_; lean_object* v___x_3519_; 
v___x_3517_ = ((size_t)0ULL);
v___x_3518_ = lean_usize_of_nat(v___x_3510_);
lean_inc(v_a_3502_);
v___x_3519_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__19(v_a_3502_, v___x_3509_, v___x_3517_, v___x_3518_, v___x_3511_);
lean_dec_ref(v___x_3509_);
v___y_3460_ = v___x_3485_;
v___y_3461_ = v_val_3507_;
v___y_3462_ = v___x_3485_;
v___y_3463_ = v_a_3502_;
v___y_3464_ = v___x_3519_;
goto v___jp_3459_;
}
}
}
else
{
lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3527_; 
lean_dec(v___x_3506_);
lean_dec(v_a_3502_);
lean_dec_ref(v___x_2998_);
lean_del_object(v___x_2982_);
lean_dec(v_fst_2979_);
lean_dec(v_head_2961_);
lean_del_object(v___x_2959_);
lean_dec(v_head_2957_);
lean_del_object(v___x_2955_);
v___x_3520_ = ((lean_object*)(l_main___closed__35));
v___x_3521_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2968_, v___x_2994_);
v___x_3522_ = lean_string_append(v___x_3520_, v___x_3521_);
lean_dec_ref(v___x_3521_);
v___x_3523_ = ((lean_object*)(l_main___closed__36));
v___x_3524_ = lean_string_append(v___x_3522_, v___x_3523_);
v___x_3525_ = lean_mk_io_user_error(v___x_3524_);
if (v_isShared_3505_ == 0)
{
lean_ctor_set_tag(v___x_3504_, 1);
lean_ctor_set(v___x_3504_, 0, v___x_3525_);
v___x_3527_ = v___x_3504_;
goto v_reusejp_3526_;
}
else
{
lean_object* v_reuseFailAlloc_3528_; 
v_reuseFailAlloc_3528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3528_, 0, v___x_3525_);
v___x_3527_ = v_reuseFailAlloc_3528_;
goto v_reusejp_3526_;
}
v_reusejp_3526_:
{
return v___x_3527_;
}
}
}
}
else
{
lean_object* v_a_3530_; lean_object* v___x_3532_; uint8_t v_isShared_3533_; uint8_t v_isSharedCheck_3537_; 
lean_dec_ref(v___x_2998_);
lean_del_object(v___x_2982_);
lean_dec(v_fst_2979_);
lean_dec(v_name_2968_);
lean_dec(v_head_2961_);
lean_del_object(v___x_2959_);
lean_dec(v_head_2957_);
lean_del_object(v___x_2955_);
v_a_3530_ = lean_ctor_get(v___x_3501_, 0);
v_isSharedCheck_3537_ = !lean_is_exclusive(v___x_3501_);
if (v_isSharedCheck_3537_ == 0)
{
v___x_3532_ = v___x_3501_;
v_isShared_3533_ = v_isSharedCheck_3537_;
goto v_resetjp_3531_;
}
else
{
lean_inc(v_a_3530_);
lean_dec(v___x_3501_);
v___x_3532_ = lean_box(0);
v_isShared_3533_ = v_isSharedCheck_3537_;
goto v_resetjp_3531_;
}
v_resetjp_3531_:
{
lean_object* v___x_3535_; 
if (v_isShared_3533_ == 0)
{
v___x_3535_ = v___x_3532_;
goto v_reusejp_3534_;
}
else
{
lean_object* v_reuseFailAlloc_3536_; 
v_reuseFailAlloc_3536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3536_, 0, v_a_3530_);
v___x_3535_ = v_reuseFailAlloc_3536_;
goto v_reusejp_3534_;
}
v_reusejp_3534_:
{
return v___x_3535_;
}
}
}
}
else
{
lean_object* v_a_3538_; lean_object* v___x_3540_; uint8_t v_isShared_3541_; uint8_t v_isSharedCheck_3545_; 
lean_dec_ref(v___x_2998_);
lean_del_object(v___x_2982_);
lean_dec(v_fst_2979_);
lean_dec(v_name_2968_);
lean_dec(v_head_2961_);
lean_del_object(v___x_2959_);
lean_dec(v_head_2957_);
lean_del_object(v___x_2955_);
v_a_3538_ = lean_ctor_get(v___x_3498_, 0);
v_isSharedCheck_3545_ = !lean_is_exclusive(v___x_3498_);
if (v_isSharedCheck_3545_ == 0)
{
v___x_3540_ = v___x_3498_;
v_isShared_3541_ = v_isSharedCheck_3545_;
goto v_resetjp_3539_;
}
else
{
lean_inc(v_a_3538_);
lean_dec(v___x_3498_);
v___x_3540_ = lean_box(0);
v_isShared_3541_ = v_isSharedCheck_3545_;
goto v_resetjp_3539_;
}
v_resetjp_3539_:
{
lean_object* v___x_3543_; 
if (v_isShared_3541_ == 0)
{
v___x_3543_ = v___x_3540_;
goto v_reusejp_3542_;
}
else
{
lean_object* v_reuseFailAlloc_3544_; 
v_reuseFailAlloc_3544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3544_, 0, v_a_3538_);
v___x_3543_ = v_reuseFailAlloc_3544_;
goto v_reusejp_3542_;
}
v_reusejp_3542_:
{
return v___x_3543_;
}
}
}
}
else
{
lean_object* v_a_3546_; lean_object* v___x_3548_; uint8_t v_isShared_3549_; uint8_t v_isSharedCheck_3553_; 
lean_dec_ref(v___x_2998_);
lean_del_object(v___x_2982_);
lean_dec(v_fst_2979_);
lean_dec(v_name_2968_);
lean_dec(v_head_2961_);
lean_del_object(v___x_2959_);
lean_dec(v_head_2957_);
lean_del_object(v___x_2955_);
v_a_3546_ = lean_ctor_get(v___x_3495_, 0);
v_isSharedCheck_3553_ = !lean_is_exclusive(v___x_3495_);
if (v_isSharedCheck_3553_ == 0)
{
v___x_3548_ = v___x_3495_;
v_isShared_3549_ = v_isSharedCheck_3553_;
goto v_resetjp_3547_;
}
else
{
lean_inc(v_a_3546_);
lean_dec(v___x_3495_);
v___x_3548_ = lean_box(0);
v_isShared_3549_ = v_isSharedCheck_3553_;
goto v_resetjp_3547_;
}
v_resetjp_3547_:
{
lean_object* v___x_3551_; 
if (v_isShared_3549_ == 0)
{
v___x_3551_ = v___x_3548_;
goto v_reusejp_3550_;
}
else
{
lean_object* v_reuseFailAlloc_3552_; 
v_reuseFailAlloc_3552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3552_, 0, v_a_3546_);
v___x_3551_ = v_reuseFailAlloc_3552_;
goto v_reusejp_3550_;
}
v_reusejp_3550_:
{
return v___x_3551_;
}
}
}
}
else
{
lean_object* v_a_3554_; lean_object* v___x_3556_; uint8_t v_isShared_3557_; uint8_t v_isSharedCheck_3561_; 
lean_dec_ref(v___x_2998_);
lean_del_object(v___x_2982_);
lean_dec(v_fst_2979_);
lean_dec(v_name_2968_);
lean_dec(v_head_2961_);
lean_del_object(v___x_2959_);
lean_dec(v_head_2957_);
lean_del_object(v___x_2955_);
v_a_3554_ = lean_ctor_get(v___x_3491_, 0);
v_isSharedCheck_3561_ = !lean_is_exclusive(v___x_3491_);
if (v_isSharedCheck_3561_ == 0)
{
v___x_3556_ = v___x_3491_;
v_isShared_3557_ = v_isSharedCheck_3561_;
goto v_resetjp_3555_;
}
else
{
lean_inc(v_a_3554_);
lean_dec(v___x_3491_);
v___x_3556_ = lean_box(0);
v_isShared_3557_ = v_isSharedCheck_3561_;
goto v_resetjp_3555_;
}
v_resetjp_3555_:
{
lean_object* v___x_3559_; 
if (v_isShared_3557_ == 0)
{
v___x_3559_ = v___x_3556_;
goto v_reusejp_3558_;
}
else
{
lean_object* v_reuseFailAlloc_3560_; 
v_reuseFailAlloc_3560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3560_, 0, v_a_3554_);
v___x_3559_ = v_reuseFailAlloc_3560_;
goto v_reusejp_3558_;
}
v_reusejp_3558_:
{
return v___x_3559_;
}
}
}
}
else
{
lean_object* v_a_3562_; lean_object* v___x_3564_; uint8_t v_isShared_3565_; uint8_t v_isSharedCheck_3569_; 
lean_dec_ref(v___x_2998_);
lean_del_object(v___x_2982_);
lean_dec(v_fst_2979_);
lean_dec(v_name_2968_);
lean_dec(v_head_2961_);
lean_del_object(v___x_2959_);
lean_dec(v_head_2957_);
lean_del_object(v___x_2955_);
v_a_3562_ = lean_ctor_get(v___x_3486_, 0);
v_isSharedCheck_3569_ = !lean_is_exclusive(v___x_3486_);
if (v_isSharedCheck_3569_ == 0)
{
v___x_3564_ = v___x_3486_;
v_isShared_3565_ = v_isSharedCheck_3569_;
goto v_resetjp_3563_;
}
else
{
lean_inc(v_a_3562_);
lean_dec(v___x_3486_);
v___x_3564_ = lean_box(0);
v_isShared_3565_ = v_isSharedCheck_3569_;
goto v_resetjp_3563_;
}
v_resetjp_3563_:
{
lean_object* v___x_3567_; 
if (v_isShared_3565_ == 0)
{
v___x_3567_ = v___x_3564_;
goto v_reusejp_3566_;
}
else
{
lean_object* v_reuseFailAlloc_3568_; 
v_reuseFailAlloc_3568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3568_, 0, v_a_3562_);
v___x_3567_ = v_reuseFailAlloc_3568_;
goto v_reusejp_3566_;
}
v_reusejp_3566_:
{
return v___x_3567_;
}
}
}
}
}
}
else
{
lean_object* v_a_3572_; lean_object* v___x_3574_; uint8_t v_isShared_3575_; uint8_t v_isSharedCheck_3579_; 
lean_dec(v_a_2977_);
lean_dec(v_importArts_2969_);
lean_dec(v_name_2968_);
lean_dec(v_head_2961_);
lean_del_object(v___x_2959_);
lean_dec(v_head_2957_);
lean_del_object(v___x_2955_);
v_a_3572_ = lean_ctor_get(v___x_2978_, 0);
v_isSharedCheck_3579_ = !lean_is_exclusive(v___x_2978_);
if (v_isSharedCheck_3579_ == 0)
{
v___x_3574_ = v___x_2978_;
v_isShared_3575_ = v_isSharedCheck_3579_;
goto v_resetjp_3573_;
}
else
{
lean_inc(v_a_3572_);
lean_dec(v___x_2978_);
v___x_3574_ = lean_box(0);
v_isShared_3575_ = v_isSharedCheck_3579_;
goto v_resetjp_3573_;
}
v_resetjp_3573_:
{
lean_object* v___x_3577_; 
if (v_isShared_3575_ == 0)
{
v___x_3577_ = v___x_3574_;
goto v_reusejp_3576_;
}
else
{
lean_object* v_reuseFailAlloc_3578_; 
v_reuseFailAlloc_3578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3578_, 0, v_a_3572_);
v___x_3577_ = v_reuseFailAlloc_3578_;
goto v_reusejp_3576_;
}
v_reusejp_3576_:
{
return v___x_3577_;
}
}
}
}
else
{
lean_object* v_a_3580_; lean_object* v___x_3582_; uint8_t v_isShared_3583_; uint8_t v_isSharedCheck_3587_; 
lean_dec(v_importArts_2969_);
lean_dec(v_name_2968_);
lean_dec(v_head_2961_);
lean_del_object(v___x_2959_);
lean_dec(v_head_2957_);
lean_del_object(v___x_2955_);
v_a_3580_ = lean_ctor_get(v___x_2976_, 0);
v_isSharedCheck_3587_ = !lean_is_exclusive(v___x_2976_);
if (v_isSharedCheck_3587_ == 0)
{
v___x_3582_ = v___x_2976_;
v_isShared_3583_ = v_isSharedCheck_3587_;
goto v_resetjp_3581_;
}
else
{
lean_inc(v_a_3580_);
lean_dec(v___x_2976_);
v___x_3582_ = lean_box(0);
v_isShared_3583_ = v_isSharedCheck_3587_;
goto v_resetjp_3581_;
}
v_resetjp_3581_:
{
lean_object* v___x_3585_; 
if (v_isShared_3583_ == 0)
{
v___x_3585_ = v___x_3582_;
goto v_reusejp_3584_;
}
else
{
lean_object* v_reuseFailAlloc_3586_; 
v_reuseFailAlloc_3586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3586_, 0, v_a_3580_);
v___x_3585_ = v_reuseFailAlloc_3586_;
goto v_reusejp_3584_;
}
v_reusejp_3584_:
{
return v___x_3585_;
}
}
}
}
}
else
{
lean_object* v_a_3589_; lean_object* v___x_3591_; uint8_t v_isShared_3592_; uint8_t v_isSharedCheck_3596_; 
lean_del_object(v___x_2964_);
lean_dec(v_tail_2962_);
lean_dec(v_head_2961_);
lean_del_object(v___x_2959_);
lean_dec(v_head_2957_);
lean_del_object(v___x_2955_);
v_a_3589_ = lean_ctor_get(v___x_2966_, 0);
v_isSharedCheck_3596_ = !lean_is_exclusive(v___x_2966_);
if (v_isSharedCheck_3596_ == 0)
{
v___x_3591_ = v___x_2966_;
v_isShared_3592_ = v_isSharedCheck_3596_;
goto v_resetjp_3590_;
}
else
{
lean_inc(v_a_3589_);
lean_dec(v___x_2966_);
v___x_3591_ = lean_box(0);
v_isShared_3592_ = v_isSharedCheck_3596_;
goto v_resetjp_3590_;
}
v_resetjp_3590_:
{
lean_object* v___x_3594_; 
if (v_isShared_3592_ == 0)
{
v___x_3594_ = v___x_3591_;
goto v_reusejp_3593_;
}
else
{
lean_object* v_reuseFailAlloc_3595_; 
v_reuseFailAlloc_3595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3595_, 0, v_a_3589_);
v___x_3594_ = v_reuseFailAlloc_3595_;
goto v_reusejp_3593_;
}
v_reusejp_3593_:
{
return v___x_3594_;
}
}
}
}
}
}
}
else
{
lean_dec(v_tail_2952_);
lean_dec_ref_known(v_tail_2951_, 2);
lean_dec_ref_known(v_args_2926_, 2);
goto v___jp_2928_;
}
}
else
{
lean_dec_ref_known(v_args_2926_, 2);
lean_dec(v_tail_2951_);
goto v___jp_2928_;
}
}
else
{
lean_dec(v_args_2926_);
goto v___jp_2928_;
}
v___jp_2928_:
{
lean_object* v___x_2929_; lean_object* v___x_2930_; 
v___x_2929_ = ((lean_object*)(l_main___closed__0));
v___x_2930_ = l_IO_println___at___00Lean_Environment_displayStats_spec__1(v___x_2929_);
if (lean_obj_tag(v___x_2930_) == 0)
{
lean_object* v___x_2932_; uint8_t v_isShared_2933_; uint8_t v_isSharedCheck_2938_; 
v_isSharedCheck_2938_ = !lean_is_exclusive(v___x_2930_);
if (v_isSharedCheck_2938_ == 0)
{
lean_object* v_unused_2939_; 
v_unused_2939_ = lean_ctor_get(v___x_2930_, 0);
lean_dec(v_unused_2939_);
v___x_2932_ = v___x_2930_;
v_isShared_2933_ = v_isSharedCheck_2938_;
goto v_resetjp_2931_;
}
else
{
lean_dec(v___x_2930_);
v___x_2932_ = lean_box(0);
v_isShared_2933_ = v_isSharedCheck_2938_;
goto v_resetjp_2931_;
}
v_resetjp_2931_:
{
lean_object* v___x_2934_; lean_object* v___x_2936_; 
v___x_2934_ = l_main___boxed__const__1;
if (v_isShared_2933_ == 0)
{
lean_ctor_set(v___x_2932_, 0, v___x_2934_);
v___x_2936_ = v___x_2932_;
goto v_reusejp_2935_;
}
else
{
lean_object* v_reuseFailAlloc_2937_; 
v_reuseFailAlloc_2937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2937_, 0, v___x_2934_);
v___x_2936_ = v_reuseFailAlloc_2937_;
goto v_reusejp_2935_;
}
v_reusejp_2935_:
{
return v___x_2936_;
}
}
}
else
{
lean_object* v_a_2940_; lean_object* v___x_2942_; uint8_t v_isShared_2943_; uint8_t v_isSharedCheck_2947_; 
v_a_2940_ = lean_ctor_get(v___x_2930_, 0);
v_isSharedCheck_2947_ = !lean_is_exclusive(v___x_2930_);
if (v_isSharedCheck_2947_ == 0)
{
v___x_2942_ = v___x_2930_;
v_isShared_2943_ = v_isSharedCheck_2947_;
goto v_resetjp_2941_;
}
else
{
lean_inc(v_a_2940_);
lean_dec(v___x_2930_);
v___x_2942_ = lean_box(0);
v_isShared_2943_ = v_isSharedCheck_2947_;
goto v_resetjp_2941_;
}
v_resetjp_2941_:
{
lean_object* v___x_2945_; 
if (v_isShared_2943_ == 0)
{
v___x_2945_ = v___x_2942_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2946_; 
v_reuseFailAlloc_2946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2946_, 0, v_a_2940_);
v___x_2945_ = v_reuseFailAlloc_2946_;
goto v_reusejp_2944_;
}
v_reusejp_2944_:
{
return v___x_2945_;
}
}
}
}
v___jp_2948_:
{
lean_object* v___x_2949_; lean_object* v___x_2950_; 
v___x_2949_ = l_main___boxed__const__2;
v___x_2950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2950_, 0, v___x_2949_);
return v___x_2950_;
}
}
}
LEAN_EXPORT lean_object* l_main___boxed(lean_object* v_args_3602_, lean_object* v_a_3603_){
_start:
{
lean_object* v_res_3604_; 
v_res_3604_ = _lean_main(v_args_3602_);
return v_res_3604_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1(lean_object* v_as_3605_, lean_object* v_as_x27_3606_, lean_object* v_b_3607_, lean_object* v_a_3608_){
_start:
{
lean_object* v___x_3610_; 
v___x_3610_ = l_List_forIn_x27_loop___at___00main_spec__1___redArg(v_as_x27_3606_, v_b_3607_);
return v___x_3610_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___boxed(lean_object* v_as_3611_, lean_object* v_as_x27_3612_, lean_object* v_b_3613_, lean_object* v_a_3614_, lean_object* v___y_3615_){
_start:
{
lean_object* v_res_3616_; 
v_res_3616_ = l_List_forIn_x27_loop___at___00main_spec__1(v_as_3611_, v_as_x27_3612_, v_b_3613_, v_a_3614_);
lean_dec(v_as_x27_3612_);
lean_dec(v_as_3611_);
return v_res_3616_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16(lean_object* v___y_3617_, lean_object* v___y_3618_){
_start:
{
lean_object* v___x_3620_; 
v___x_3620_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___redArg(v___y_3618_);
return v___x_3620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16___boxed(lean_object* v___y_3621_, lean_object* v___y_3622_, lean_object* v___y_3623_){
_start:
{
lean_object* v_res_3624_; 
v_res_3624_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__16(v___y_3621_, v___y_3622_);
lean_dec(v___y_3622_);
lean_dec_ref(v___y_3621_);
return v_res_3624_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17(lean_object* v_00_u03b2_3625_, lean_object* v_m_3626_, lean_object* v_a_3627_, lean_object* v_fallback_3628_){
_start:
{
lean_object* v___x_3629_; 
v___x_3629_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17___redArg(v_m_3626_, v_a_3627_, v_fallback_3628_);
return v___x_3629_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17___boxed(lean_object* v_00_u03b2_3630_, lean_object* v_m_3631_, lean_object* v_a_3632_, lean_object* v_fallback_3633_){
_start:
{
lean_object* v_res_3634_; 
v_res_3634_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17(v_00_u03b2_3630_, v_m_3631_, v_a_3632_, v_fallback_3633_);
lean_dec(v_fallback_3633_);
lean_dec_ref(v_a_3632_);
lean_dec_ref(v_m_3631_);
return v_res_3634_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18(lean_object* v_00_u03b2_3635_, lean_object* v_m_3636_, lean_object* v_a_3637_, lean_object* v_b_3638_){
_start:
{
lean_object* v___x_3639_; 
v___x_3639_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18___redArg(v_m_3636_, v_a_3637_, v_b_3638_);
return v___x_3639_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21(lean_object* v_n_3640_, lean_object* v_as_3641_, lean_object* v_lo_3642_, lean_object* v_hi_3643_, lean_object* v_w_3644_, lean_object* v_hlo_3645_, lean_object* v_hhi_3646_){
_start:
{
lean_object* v___x_3647_; 
v___x_3647_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___redArg(v_n_3640_, v_as_3641_, v_lo_3642_, v_hi_3643_);
return v___x_3647_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21___boxed(lean_object* v_n_3648_, lean_object* v_as_3649_, lean_object* v_lo_3650_, lean_object* v_hi_3651_, lean_object* v_w_3652_, lean_object* v_hlo_3653_, lean_object* v_hhi_3654_){
_start:
{
lean_object* v_res_3655_; 
v_res_3655_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21(v_n_3648_, v_as_3649_, v_lo_3650_, v_hi_3651_, v_w_3652_, v_hlo_3653_, v_hhi_3654_);
lean_dec(v_hi_3651_);
lean_dec(v_n_3648_);
return v_res_3655_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17_spec__21(lean_object* v_00_u03b2_3656_, lean_object* v_a_3657_, lean_object* v_fallback_3658_, lean_object* v_x_3659_){
_start:
{
lean_object* v___x_3660_; 
v___x_3660_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17_spec__21___redArg(v_a_3657_, v_fallback_3658_, v_x_3659_);
return v___x_3660_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17_spec__21___boxed(lean_object* v_00_u03b2_3661_, lean_object* v_a_3662_, lean_object* v_fallback_3663_, lean_object* v_x_3664_){
_start:
{
lean_object* v_res_3665_; 
v_res_3665_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__17_spec__21(v_00_u03b2_3661_, v_a_3662_, v_fallback_3663_, v_x_3664_);
lean_dec(v_x_3664_);
lean_dec(v_fallback_3663_);
lean_dec_ref(v_a_3662_);
return v_res_3665_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__23(lean_object* v_00_u03b2_3666_, lean_object* v_a_3667_, lean_object* v_x_3668_){
_start:
{
uint8_t v___x_3669_; 
v___x_3669_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__23___redArg(v_a_3667_, v_x_3668_);
return v___x_3669_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__23___boxed(lean_object* v_00_u03b2_3670_, lean_object* v_a_3671_, lean_object* v_x_3672_){
_start:
{
uint8_t v_res_3673_; lean_object* v_r_3674_; 
v_res_3673_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__23(v_00_u03b2_3670_, v_a_3671_, v_x_3672_);
lean_dec(v_x_3672_);
lean_dec_ref(v_a_3671_);
v_r_3674_ = lean_box(v_res_3673_);
return v_r_3674_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24(lean_object* v_00_u03b2_3675_, lean_object* v_data_3676_){
_start:
{
lean_object* v___x_3677_; 
v___x_3677_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24___redArg(v_data_3676_);
return v___x_3677_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__25(lean_object* v_00_u03b2_3678_, lean_object* v_a_3679_, lean_object* v_b_3680_, lean_object* v_x_3681_){
_start:
{
lean_object* v___x_3682_; 
v___x_3682_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__25___redArg(v_a_3679_, v_b_3680_, v_x_3681_);
return v___x_3682_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21_spec__31(lean_object* v_n_3683_, lean_object* v_lo_3684_, lean_object* v_hi_3685_, lean_object* v_hhi_3686_, lean_object* v_pivot_3687_, lean_object* v_as_3688_, lean_object* v_i_3689_, lean_object* v_k_3690_, lean_object* v_ilo_3691_, lean_object* v_ik_3692_, lean_object* v_w_3693_){
_start:
{
lean_object* v___x_3694_; 
v___x_3694_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21_spec__31___redArg(v_hi_3685_, v_pivot_3687_, v_as_3688_, v_i_3689_, v_k_3690_);
return v___x_3694_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21_spec__31___boxed(lean_object* v_n_3695_, lean_object* v_lo_3696_, lean_object* v_hi_3697_, lean_object* v_hhi_3698_, lean_object* v_pivot_3699_, lean_object* v_as_3700_, lean_object* v_i_3701_, lean_object* v_k_3702_, lean_object* v_ilo_3703_, lean_object* v_ik_3704_, lean_object* v_w_3705_){
_start:
{
lean_object* v_res_3706_; 
v_res_3706_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__21_spec__31(v_n_3695_, v_lo_3696_, v_hi_3697_, v_hhi_3698_, v_pivot_3699_, v_as_3700_, v_i_3701_, v_k_3702_, v_ilo_3703_, v_ik_3704_, v_w_3705_);
lean_dec_ref(v_pivot_3699_);
lean_dec(v_hi_3697_);
lean_dec(v_lo_3696_);
lean_dec(v_n_3695_);
return v_res_3706_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40(lean_object* v_as_3707_, size_t v_sz_3708_, size_t v_i_3709_, lean_object* v_b_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_){
_start:
{
lean_object* v___x_3714_; 
v___x_3714_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___redArg(v_as_3707_, v_sz_3708_, v_i_3709_, v_b_3710_, v___y_3711_);
return v___x_3714_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40___boxed(lean_object* v_as_3715_, lean_object* v_sz_3716_, lean_object* v_i_3717_, lean_object* v_b_3718_, lean_object* v___y_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_){
_start:
{
size_t v_sz_boxed_3722_; size_t v_i_boxed_3723_; lean_object* v_res_3724_; 
v_sz_boxed_3722_ = lean_unbox_usize(v_sz_3716_);
lean_dec(v_sz_3716_);
v_i_boxed_3723_ = lean_unbox_usize(v_i_3717_);
lean_dec(v_i_3717_);
v_res_3724_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__27_spec__40(v_as_3715_, v_sz_boxed_3722_, v_i_boxed_3723_, v_b_3718_, v___y_3719_, v___y_3720_);
lean_dec(v___y_3720_);
lean_dec_ref(v___y_3719_);
lean_dec_ref(v_as_3715_);
return v_res_3724_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24_spec__35(lean_object* v_00_u03b2_3725_, lean_object* v_i_3726_, lean_object* v_source_3727_, lean_object* v_target_3728_){
_start:
{
lean_object* v___x_3729_; 
v___x_3729_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24_spec__35___redArg(v_i_3726_, v_source_3727_, v_target_3728_);
return v___x_3729_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28_spec__42(uint8_t v___x_3730_, lean_object* v_as_3731_, size_t v_sz_3732_, size_t v_i_3733_, lean_object* v_b_3734_, lean_object* v___y_3735_, lean_object* v___y_3736_){
_start:
{
lean_object* v___x_3738_; 
v___x_3738_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28_spec__42___redArg(v___x_3730_, v_as_3731_, v_sz_3732_, v_i_3733_, v_b_3734_, v___y_3735_);
return v___x_3738_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28_spec__42___boxed(lean_object* v___x_3739_, lean_object* v_as_3740_, lean_object* v_sz_3741_, lean_object* v_i_3742_, lean_object* v_b_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_){
_start:
{
uint8_t v___x_40703__boxed_3747_; size_t v_sz_boxed_3748_; size_t v_i_boxed_3749_; lean_object* v_res_3750_; 
v___x_40703__boxed_3747_ = lean_unbox(v___x_3739_);
v_sz_boxed_3748_ = lean_unbox_usize(v_sz_3741_);
lean_dec(v_sz_3741_);
v_i_boxed_3749_ = lean_unbox_usize(v_i_3742_);
lean_dec(v_i_3742_);
v_res_3750_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__28_spec__42(v___x_40703__boxed_3747_, v_as_3740_, v_sz_boxed_3748_, v_i_boxed_3749_, v_b_3743_, v___y_3744_, v___y_3745_);
lean_dec(v___y_3745_);
lean_dec_ref(v___y_3744_);
lean_dec_ref(v_as_3740_);
return v_res_3750_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51(lean_object* v_as_3751_, size_t v_sz_3752_, size_t v_i_3753_, lean_object* v_b_3754_, lean_object* v___y_3755_, lean_object* v___y_3756_){
_start:
{
lean_object* v___x_3758_; 
v___x_3758_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___redArg(v_as_3751_, v_sz_3752_, v_i_3753_, v_b_3754_, v___y_3755_);
return v___x_3758_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51___boxed(lean_object* v_as_3759_, lean_object* v_sz_3760_, lean_object* v_i_3761_, lean_object* v_b_3762_, lean_object* v___y_3763_, lean_object* v___y_3764_, lean_object* v___y_3765_){
_start:
{
size_t v_sz_boxed_3766_; size_t v_i_boxed_3767_; lean_object* v_res_3768_; 
v_sz_boxed_3766_ = lean_unbox_usize(v_sz_3760_);
lean_dec(v_sz_3760_);
v_i_boxed_3767_ = lean_unbox_usize(v_i_3761_);
lean_dec(v_i_3761_);
v_res_3768_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__12_spec__26_spec__38_spec__51(v_as_3759_, v_sz_boxed_3766_, v_i_boxed_3767_, v_b_3762_, v___y_3763_, v___y_3764_);
lean_dec(v___y_3764_);
lean_dec_ref(v___y_3763_);
lean_dec_ref(v_as_3759_);
return v_res_3768_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24_spec__35_spec__44(lean_object* v_00_u03b2_3769_, lean_object* v_x_3770_, lean_object* v_x_3771_){
_start:
{
lean_object* v___x_3772_; 
v___x_3772_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__18_spec__24_spec__35_spec__44___redArg(v_x_3770_, v_x_3771_);
return v___x_3772_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49(uint8_t v___x_3773_, lean_object* v_as_3774_, size_t v_sz_3775_, size_t v_i_3776_, lean_object* v_b_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_){
_start:
{
lean_object* v___x_3781_; 
v___x_3781_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___redArg(v___x_3773_, v_as_3774_, v_sz_3775_, v_i_3776_, v_b_3777_, v___y_3778_);
return v___x_3781_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49___boxed(lean_object* v___x_3782_, lean_object* v_as_3783_, lean_object* v_sz_3784_, lean_object* v_i_3785_, lean_object* v_b_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_){
_start:
{
uint8_t v___x_40734__boxed_3790_; size_t v_sz_boxed_3791_; size_t v_i_boxed_3792_; lean_object* v_res_3793_; 
v___x_40734__boxed_3790_ = lean_unbox(v___x_3782_);
v_sz_boxed_3791_ = lean_unbox_usize(v_sz_3784_);
lean_dec(v_sz_3784_);
v_i_boxed_3792_ = lean_unbox_usize(v_i_3785_);
lean_dec(v_i_3785_);
v_res_3793_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__10_spec__19_spec__27_spec__40_spec__49(v___x_40734__boxed_3790_, v_as_3783_, v_sz_boxed_3791_, v_i_boxed_3792_, v_b_3786_, v___y_3787_, v___y_3788_);
lean_dec(v___y_3788_);
lean_dec_ref(v___y_3787_);
lean_dec_ref(v_as_3783_);
return v_res_3793_;
}
}
lean_object* runtime_initialize_Init(uint8_t builtin);
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_ForEachExpr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_Path(uint8_t builtin);
lean_object* runtime_initialize_Lean_Environment(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Options(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_CSimpAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_EmitC(uint8_t builtin);
lean_object* runtime_initialize_Lean_Language_Lean(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Main(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_LeanIR(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_Path(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_CSimpAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_EmitC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Language_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_main___boxed__const__1 = _init_l_main___boxed__const__1();
lean_mark_persistent(l_main___boxed__const__1);
l_main___boxed__const__2 = _init_l_main___boxed__const__2();
lean_mark_persistent(l_main___boxed__const__2);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_LeanIR(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lean_CoreM(uint8_t builtin);
lean_object* initialize_Lean_Util_ForEachExpr(uint8_t builtin);
lean_object* initialize_Lean_Util_Path(uint8_t builtin);
lean_object* initialize_Lean_Environment(uint8_t builtin);
lean_object* initialize_Lean_Compiler_Options(uint8_t builtin);
lean_object* initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_CSimpAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_EmitC(uint8_t builtin);
lean_object* initialize_Lean_Language_Lean(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Main(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanIR(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Path(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_CSimpAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_EmitC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Language_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_LeanIR(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_LeanIR(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_LeanIR(builtin);
}
char ** lean_setup_args(int argc, char ** argv);
#if defined(WIN32) || defined(_WIN32)
#include <windows.h>
#endif
lean_object* run_main(int argc, char ** argv) {
    lean_object* in = lean_box(0);
    int i = argc;
    while (i > 1) {
      lean_object* n;
      i--;
      n = lean_alloc_ctor(1,2,0); lean_ctor_set(n, 0, lean_mk_string(argv[i])); lean_ctor_set(n, 1, in);
      in = n;
    }
    return _lean_main(in);
}
int main(int argc, char ** argv) {
#if defined(WIN32) || defined(_WIN32)
  SetErrorMode(SEM_FAILCRITICALERRORS);
  SetConsoleOutputCP(CP_UTF8);
#endif
  lean_object* res;
  argv = lean_setup_args(argc, argv);
  res = runtime_initialize_LeanIR(1 /* builtin */);
  lean_io_mark_end_initialization();
  if (lean_io_result_is_ok(res)) {
    lean_dec_ref(res);
    lean_init_task_manager();
    res = lean_run_main(&run_main, argc, argv);
  }
  lean_finalize_task_manager();
  if (lean_io_result_is_ok(res)) {
    int ret = lean_unbox_uint32(lean_io_result_get_value(res));
    lean_dec_ref(res);
    return ret;
  } else {
    lean_io_result_show_error(res);
    lean_dec_ref(res);
    return 1;
  }
}
#ifdef __cplusplus
}
#endif
