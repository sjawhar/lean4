// Lean compiler output
// Module: LeanIR
// Imports: public import Init public meta import Init import Lean.CoreM import Lean.Util.ForEachExpr import all Lean.Util.Path import all Lean.Environment import Lean.Compiler.Options import Lean.Compiler.IR.CompilerM import Lean.Compiler.ModPkgExt import all Lean.Compiler.CSimpAttr import Lean.Compiler.LCNF.EmitC import Lean.Language.Lean import Lean.Compiler.LCNF.PhaseExt import Lean.Compiler.LCNF.Main import Lean.Meta.ExprDefEq import Lean.Meta.LevelDefEq import Lean.Meta.Match.MatchEqs import Lean.Elab.PreDefinition.Structural.Eqns import Lean.Parser
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
lean_object* lean_array_uget(lean_object*, size_t);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_Elab_mkMessageCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
uint8_t l_Lean_instOrdOLeanLevel_ord(uint8_t, uint8_t);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_Compiler_LCNF_resumeCompilation(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler_output;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler_serve;
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_String_instHashableRaw_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* l_String_Slice_toName(lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getOptionDecls();
lean_object* l_Lean_Language_Lean_setOption(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_isConstantReplacement_x3f_spec__0_spec__0_spec__1_spec__6_spec__10_spec__14_spec__16(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_ir_export_entries(lean_object*);
lean_object* l_Lean_mkModuleData(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_get_ir_extra_const_names(lean_object*, uint8_t, uint8_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_io_get_num_heartbeats();
lean_object* lean_st_mk_ref(lean_object*);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Compiler_LCNF_emitC(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_io_prim_handle_write(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_println___at___00Lean_Environment_displayStats_spec__1(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg();
extern lean_object* l_Lean_instInhabitedClassState_default;
extern lean_object* l_Lean_Meta_Match_Extension_instInhabitedState;
lean_object* l_Lean_PersistentHashMap_instInhabited___redArg();
lean_object* l_Lean_instInhabitedPersistentEnvExtensionState___redArg(lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* l_Lean_ModuleSetup_load(lean_object*);
lean_object* l_Lean_LeanOptions_toOptions(lean_object*);
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
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_display_cumulative_profiling_times();
lean_object* l_Lean_Environment_displayStats(lean_object*);
lean_object* l_Lean_Core_getAndEmptyMessageLog___redArg(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
extern lean_object* l_instInhabitedError;
lean_object* l_instInhabitedEIO___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_setState___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_init_search_path();
extern lean_object* l_Lean_Compiler_LCNF_postponedCompileDeclsExt;
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedFileMap_default;
extern lean_object* l_Lean_Options_empty;
extern lean_object* l_Lean_NameSet_empty;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_IR_declMapExt;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_name(lean_object*);
uint8_t l_Lean_isExtern(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_initFn_00___x40_Lean_Compiler_CSimpAttr_309491121____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_setDeclPublic(lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_impureSigExt;
extern lean_object* l_Lean_Compiler_CSimp_ext;
extern lean_object* l_Lean_Meta_instanceExtension;
extern lean_object* l_Lean_classExtension;
extern lean_object* l_Lean_Meta_Match_Extension_extension;
lean_object* l_Lean_Environment_getModuleIdx_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedImportState_default;
lean_object* l_Lean_importModulesCore(lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*);
uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_initFn_00___x40_Lean_Compiler_CSimpAttr_309491121____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*);
lean_object* l_Lean_finalizeImport(lean_object*, lean_object*, lean_object*, uint32_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);
lean_object* l_Lean_withImporting___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_modPkgExt;
lean_object* l_Lean_Environment_setMainModule(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_main___elam__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___elam__0___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___elam__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___elam__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___elam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___elam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00main_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00main_spec__5___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00main_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00main_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00main_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00main_spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_main___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_main___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "internal exception "};
static const lean_object* l_main___lam__2___closed__0 = (const lean_object*)&l_main___lam__2___closed__0_value;
static const lean_string_object l_main___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception #"};
static const lean_object* l_main___lam__2___closed__1 = (const lean_object*)&l_main___lam__2___closed__1_value;
static const lean_string_object l_main___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " (unknown)"};
static const lean_object* l_main___lam__2___closed__2 = (const lean_object*)&l_main___lam__2___closed__2_value;
LEAN_EXPORT lean_object* l_main___lam__2(lean_object*, lean_object*, uint16_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_main___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_main___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__14(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "--stat"};
static const lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_boxed"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__12(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__7___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__15___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00main_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00main_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__14___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__22(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__22___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__23(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___lam__0(uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35_spec__44___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__25___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18___redArg(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__39(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__39___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTraceAsMessages___at___00main_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTraceAsMessages___at___00main_spec__9___closed__0;
static lean_once_cell_t l_Lean_addTraceAsMessages___at___00main_spec__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTraceAsMessages___at___00main_spec__9___closed__1;
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___at___00main_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___at___00main_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__10(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__37(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__37___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__12(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "usage: leanir <setup.json> <output.ir> <output.c> [--stat] <-Dopt=val>..."};
static const lean_object* l_main___closed__0 = (const lean_object*)&l_main___closed__0_value;
static lean_once_cell_t l_main___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__1;
static lean_once_cell_t l_main___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__2;
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
static const lean_ctor_object l_main___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_main___closed__8 = (const lean_object*)&l_main___closed__8_value;
static const lean_string_object l_main___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sig"};
static const lean_object* l_main___closed__9 = (const lean_object*)&l_main___closed__9_value;
static const lean_string_object l_main___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ir"};
static const lean_object* l_main___closed__10 = (const lean_object*)&l_main___closed__10_value;
static const lean_ctor_object l_main___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_main___closed__10_value),LEAN_SCALAR_PTR_LITERAL(157, 0, 67, 166, 172, 92, 38, 85)}};
static const lean_object* l_main___closed__11 = (const lean_object*)&l_main___closed__11_value;
static const lean_string_object l_main___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "C code generation"};
static const lean_object* l_main___closed__12 = (const lean_object*)&l_main___closed__12_value;
static const lean_string_object l_main___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "failed to create '"};
static const lean_object* l_main___closed__13 = (const lean_object*)&l_main___closed__13_value;
static const lean_string_object l_main___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "LeanIR"};
static const lean_object* l_main___closed__14 = (const lean_object*)&l_main___closed__14_value;
static const lean_string_object l_main___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "main"};
static const lean_object* l_main___closed__15 = (const lean_object*)&l_main___closed__15_value;
static const lean_string_object l_main___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_main___closed__16 = (const lean_object*)&l_main___closed__16_value;
static lean_once_cell_t l_main___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__17;
static const lean_string_object l_main___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "import"};
static const lean_object* l_main___closed__18 = (const lean_object*)&l_main___closed__18_value;
static lean_once_cell_t l_main___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__19;
static lean_once_cell_t l_main___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__20;
static const lean_string_object l_main___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l_main___closed__21 = (const lean_object*)&l_main___closed__21_value;
static const lean_ctor_object l_main___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_main___closed__21_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l_main___closed__22 = (const lean_object*)&l_main___closed__22_value;
static const lean_ctor_object l_main___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_main___closed__22_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_main___closed__23 = (const lean_object*)&l_main___closed__23_value;
static lean_once_cell_t l_main___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__24;
static lean_once_cell_t l_main___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__25;
static lean_once_cell_t l_main___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__26;
static lean_once_cell_t l_main___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__27;
static const lean_array_object l_main___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_main___closed__28 = (const lean_object*)&l_main___closed__28_value;
static lean_once_cell_t l_main___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__29;
static lean_once_cell_t l_main___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__30;
static lean_once_cell_t l_main___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__31;
static const lean_array_object l_main___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_main___closed__32 = (const lean_object*)&l_main___closed__32_value;
static const lean_string_object l_main___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "module '"};
static const lean_object* l_main___closed__33 = (const lean_object*)&l_main___closed__33_value;
static const lean_string_object l_main___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "' not found"};
static const lean_object* l_main___closed__34 = (const lean_object*)&l_main___closed__34_value;
static lean_once_cell_t l_main___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_main___closed__35;
LEAN_EXPORT lean_object* l_main___boxed__const__1;
LEAN_EXPORT lean_object* l_main___boxed__const__2;
LEAN_EXPORT lean_object* _lean_main(lean_object*);
LEAN_EXPORT lean_object* l_main___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__25(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35_spec__44(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
size_t v___x_58_; size_t v___x_59_; uint8_t v___x_60_; 
v___x_58_ = ((size_t)0ULL);
v___x_59_ = lean_usize_of_nat(v___x_56_);
v___x_60_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1_spec__1(v_a_54_, v_as_53_, v___x_58_, v___x_59_);
return v___x_60_;
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
lean_object* v_irEntries_119_; size_t v_sz_120_; size_t v___x_121_; lean_object* v_irExtNames_122_; uint8_t v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
lean_inc_ref_n(v_env_117_, 2);
v_irEntries_119_ = lean_ir_export_entries(v_env_117_);
v_sz_120_ = lean_array_size(v_irEntries_119_);
v___x_121_ = ((size_t)0ULL);
lean_inc_ref(v_irEntries_119_);
v_irExtNames_122_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanIR_0__mkIRData_spec__0(v_sz_120_, v___x_121_, v_irEntries_119_);
v___x_123_ = 2;
v___x_124_ = lean_box(0);
v___x_125_ = l_Lean_mkModuleData(v_env_117_, v___x_123_, v___x_124_);
if (lean_obj_tag(v___x_125_) == 0)
{
lean_object* v_a_126_; lean_object* v___x_128_; uint8_t v_isShared_129_; uint8_t v_isSharedCheck_151_; 
v_a_126_ = lean_ctor_get(v___x_125_, 0);
v_isSharedCheck_151_ = !lean_is_exclusive(v___x_125_);
if (v_isSharedCheck_151_ == 0)
{
v___x_128_ = v___x_125_;
v_isShared_129_ = v_isSharedCheck_151_;
goto v_resetjp_127_;
}
else
{
lean_inc(v_a_126_);
lean_dec(v___x_125_);
v___x_128_ = lean_box(0);
v_isShared_129_ = v_isSharedCheck_151_;
goto v_resetjp_127_;
}
v_resetjp_127_:
{
lean_object* v___y_131_; lean_object* v_entries_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; uint8_t v___x_148_; 
v_entries_144_ = lean_ctor_get(v_a_126_, 4);
lean_inc_ref(v_entries_144_);
lean_dec(v_a_126_);
v___x_145_ = lean_unsigned_to_nat(0u);
v___x_146_ = lean_array_get_size(v_entries_144_);
v___x_147_ = ((lean_object*)(l___private_LeanIR_0__mkIRData___closed__3));
v___x_148_ = lean_nat_dec_lt(v___x_145_, v___x_146_);
if (v___x_148_ == 0)
{
lean_dec_ref(v_entries_144_);
lean_dec_ref(v_irExtNames_122_);
v___y_131_ = v___x_147_;
goto v___jp_130_;
}
else
{
size_t v___x_149_; lean_object* v___x_150_; 
v___x_149_ = lean_usize_of_nat(v___x_146_);
v___x_150_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2(v_irExtNames_122_, v_entries_144_, v___x_121_, v___x_149_, v___x_147_);
lean_dec_ref(v_entries_144_);
lean_dec_ref(v_irExtNames_122_);
v___y_131_ = v___x_150_;
goto v___jp_130_;
}
v___jp_130_:
{
lean_object* v___x_132_; uint8_t v_isModule_133_; lean_object* v_imports_134_; lean_object* v___x_135_; uint8_t v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_142_; 
v___x_132_ = l_Lean_Environment_header(v_env_117_);
v_isModule_133_ = lean_ctor_get_uint8(v___x_132_, sizeof(void*)*8 + 4);
v_imports_134_ = lean_ctor_get(v___x_132_, 1);
lean_inc_ref(v_imports_134_);
lean_dec_ref(v___x_132_);
v___x_135_ = ((lean_object*)(l___private_LeanIR_0__mkIRData___closed__0));
v___x_136_ = 1;
v___x_137_ = lean_get_ir_extra_const_names(v_env_117_, v___x_123_, v___x_136_);
v___x_138_ = l_Array_append___redArg(v_irEntries_119_, v___y_131_);
lean_dec_ref(v___y_131_);
v___x_139_ = lean_obj_once(&l___private_LeanIR_0__mkIRData___closed__2, &l___private_LeanIR_0__mkIRData___closed__2_once, _init_l___private_LeanIR_0__mkIRData___closed__2);
v___x_140_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v___x_140_, 0, v_imports_134_);
lean_ctor_set(v___x_140_, 1, v___x_135_);
lean_ctor_set(v___x_140_, 2, v___x_135_);
lean_ctor_set(v___x_140_, 3, v___x_137_);
lean_ctor_set(v___x_140_, 4, v___x_138_);
lean_ctor_set(v___x_140_, 5, v___x_139_);
lean_ctor_set(v___x_140_, 6, v___x_139_);
lean_ctor_set_uint8(v___x_140_, sizeof(void*)*7, v_isModule_133_);
if (v_isShared_129_ == 0)
{
lean_ctor_set(v___x_128_, 0, v___x_140_);
v___x_142_ = v___x_128_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_143_; 
v_reuseFailAlloc_143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_143_, 0, v___x_140_);
v___x_142_ = v_reuseFailAlloc_143_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
return v___x_142_;
}
}
}
}
else
{
lean_dec_ref(v_irExtNames_122_);
lean_dec_ref(v_irEntries_119_);
lean_dec_ref(v_env_117_);
return v___x_125_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRData___boxed(lean_object* v_env_152_, lean_object* v_a_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l___private_LeanIR_0__mkIRData(v_env_152_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg(lean_object* v_s_156_){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; uint8_t v___x_159_; 
v___x_157_ = lean_string_utf8_byte_size(v_s_156_);
v___x_158_ = lean_unsigned_to_nat(2u);
v___x_159_ = lean_nat_dec_le(v___x_158_, v___x_157_);
if (v___x_159_ == 0)
{
lean_object* v___x_160_; 
lean_dec_ref(v_s_156_);
v___x_160_ = lean_box(0);
return v___x_160_;
}
else
{
lean_object* v___x_161_; lean_object* v___x_162_; uint8_t v___x_163_; 
v___x_161_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__0));
v___x_162_ = lean_unsigned_to_nat(0u);
v___x_163_ = lean_string_memcmp(v_s_156_, v___x_161_, v___x_162_, v___x_162_, v___x_158_);
if (v___x_163_ == 0)
{
lean_object* v___x_164_; 
lean_dec_ref(v_s_156_);
v___x_164_ = lean_box(0);
return v___x_164_;
}
else
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
lean_inc_ref(v_s_156_);
v___x_165_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_165_, 0, v_s_156_);
lean_ctor_set(v___x_165_, 1, v___x_162_);
lean_ctor_set(v___x_165_, 2, v___x_157_);
v___x_166_ = l_String_Slice_pos_x21(v___x_165_, v___x_158_);
lean_dec_ref_known(v___x_165_, 3);
v___x_167_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_167_, 0, v_s_156_);
lean_ctor_set(v___x_167_, 1, v___x_166_);
lean_ctor_set(v___x_167_, 2, v___x_157_);
v___x_168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_168_, 0, v___x_167_);
return v___x_168_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0(lean_object* v_s_169_, lean_object* v_pat_170_){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg(v_s_169_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___boxed(lean_object* v_s_172_, lean_object* v_pat_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0(v_s_172_, v_pat_173_);
lean_dec_ref(v_pat_173_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg(lean_object* v_val_175_, lean_object* v_a_176_, lean_object* v_b_177_){
_start:
{
lean_object* v_str_178_; lean_object* v_startInclusive_179_; lean_object* v_endExclusive_180_; lean_object* v___x_181_; uint8_t v_decide_182_; 
v_str_178_ = lean_ctor_get(v_val_175_, 0);
v_startInclusive_179_ = lean_ctor_get(v_val_175_, 1);
v_endExclusive_180_ = lean_ctor_get(v_val_175_, 2);
v___x_181_ = lean_nat_sub(v_endExclusive_180_, v_startInclusive_179_);
v_decide_182_ = lean_nat_dec_eq(v_a_176_, v___x_181_);
lean_dec(v___x_181_);
if (v_decide_182_ == 0)
{
lean_object* v___x_183_; uint32_t v___x_184_; uint32_t v___x_185_; uint8_t v___x_186_; 
v___x_183_ = lean_nat_add(v_startInclusive_179_, v_a_176_);
v___x_184_ = lean_string_utf8_get_fast(v_str_178_, v___x_183_);
v___x_185_ = 61;
v___x_186_ = lean_uint32_dec_eq(v___x_184_, v___x_185_);
if (v___x_186_ == 0)
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
lean_dec(v_a_176_);
v___x_187_ = lean_box(0);
v___x_188_ = lean_string_utf8_next_fast(v_str_178_, v___x_183_);
lean_dec(v___x_183_);
v___x_189_ = lean_nat_sub(v___x_188_, v_startInclusive_179_);
v_a_176_ = v___x_189_;
v_b_177_ = v___x_187_;
goto _start;
}
else
{
lean_object* v___x_191_; 
lean_dec(v___x_183_);
v___x_191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_191_, 0, v_a_176_);
return v___x_191_;
}
}
else
{
lean_dec(v_a_176_);
lean_inc(v_b_177_);
return v_b_177_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg___boxed(lean_object* v_val_192_, lean_object* v_a_193_, lean_object* v_b_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg(v_val_192_, v_a_193_, v_b_194_);
lean_dec(v_b_194_);
lean_dec_ref(v_val_192_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* l___private_LeanIR_0__setConfigOption(lean_object* v_opts_203_, lean_object* v_arg_204_){
_start:
{
lean_object* v___x_206_; 
lean_inc_ref(v_arg_204_);
v___x_206_ = l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg(v_arg_204_);
if (lean_obj_tag(v___x_206_) == 1)
{
lean_object* v_val_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_271_; 
lean_dec_ref(v_arg_204_);
v_val_207_ = lean_ctor_get(v___x_206_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v___x_206_);
if (v_isSharedCheck_271_ == 0)
{
v___x_209_ = v___x_206_;
v_isShared_210_ = v_isSharedCheck_271_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_val_207_);
lean_dec(v___x_206_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_271_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v___y_212_; lean_object* v_searcher_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
v_searcher_264_ = lean_unsigned_to_nat(0u);
v___x_265_ = lean_box(0);
v___x_266_ = l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg(v_val_207_, v_searcher_264_, v___x_265_);
if (lean_obj_tag(v___x_266_) == 0)
{
lean_object* v_startInclusive_267_; lean_object* v_endExclusive_268_; lean_object* v___x_269_; 
v_startInclusive_267_ = lean_ctor_get(v_val_207_, 1);
v_endExclusive_268_ = lean_ctor_get(v_val_207_, 2);
v___x_269_ = lean_nat_sub(v_endExclusive_268_, v_startInclusive_267_);
v___y_212_ = v___x_269_;
goto v___jp_211_;
}
else
{
lean_object* v_val_270_; 
v_val_270_ = lean_ctor_get(v___x_266_, 0);
lean_inc(v_val_270_);
lean_dec_ref_known(v___x_266_, 1);
v___y_212_ = v_val_270_;
goto v___jp_211_;
}
v___jp_211_:
{
lean_object* v_str_213_; lean_object* v_startInclusive_214_; lean_object* v_endExclusive_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_263_; 
v_str_213_ = lean_ctor_get(v_val_207_, 0);
v_startInclusive_214_ = lean_ctor_get(v_val_207_, 1);
v_endExclusive_215_ = lean_ctor_get(v_val_207_, 2);
v_isSharedCheck_263_ = !lean_is_exclusive(v_val_207_);
if (v_isSharedCheck_263_ == 0)
{
v___x_217_ = v_val_207_;
v_isShared_218_ = v_isSharedCheck_263_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_endExclusive_215_);
lean_inc(v_startInclusive_214_);
lean_inc(v_str_213_);
lean_dec(v_val_207_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_263_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
lean_object* v___x_219_; uint8_t v_decide_220_; 
v___x_219_ = lean_nat_sub(v_endExclusive_215_, v_startInclusive_214_);
v_decide_220_ = lean_nat_dec_eq(v___y_212_, v___x_219_);
lean_dec(v___x_219_);
if (v_decide_220_ == 0)
{
lean_object* v___x_221_; lean_object* v___x_223_; 
v___x_221_ = lean_nat_add(v_startInclusive_214_, v___y_212_);
lean_dec(v___y_212_);
lean_inc(v___x_221_);
lean_inc(v_startInclusive_214_);
lean_inc_ref(v_str_213_);
if (v_isShared_218_ == 0)
{
lean_ctor_set(v___x_217_, 2, v___x_221_);
v___x_223_ = v___x_217_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v_str_213_);
lean_ctor_set(v_reuseFailAlloc_258_, 1, v_startInclusive_214_);
lean_ctor_set(v_reuseFailAlloc_258_, 2, v___x_221_);
v___x_223_ = v_reuseFailAlloc_258_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
lean_object* v_name_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v_val_228_; lean_object* v___x_229_; 
v_name_224_ = l_String_Slice_toName(v___x_223_);
lean_dec_ref(v___x_223_);
v___x_225_ = lean_string_utf8_next_fast(v_str_213_, v___x_221_);
lean_dec(v___x_221_);
v___x_226_ = lean_nat_sub(v___x_225_, v_startInclusive_214_);
v___x_227_ = lean_nat_add(v_startInclusive_214_, v___x_226_);
lean_dec(v___x_226_);
lean_dec(v_startInclusive_214_);
v_val_228_ = lean_string_utf8_extract_fast(v_str_213_, v___x_227_, v_endExclusive_215_);
lean_dec(v_endExclusive_215_);
lean_dec(v___x_227_);
lean_dec_ref(v_str_213_);
v___x_229_ = l_Lean_getOptionDecls();
if (lean_obj_tag(v___x_229_) == 0)
{
lean_object* v_a_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_249_; 
v_a_230_ = lean_ctor_get(v___x_229_, 0);
v_isSharedCheck_249_ = !lean_is_exclusive(v___x_229_);
if (v_isSharedCheck_249_ == 0)
{
v___x_232_ = v___x_229_;
v_isShared_233_ = v_isSharedCheck_249_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_a_230_);
lean_dec(v___x_229_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_249_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___x_234_; 
v___x_234_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_a_230_, v_name_224_);
lean_dec(v_a_230_);
if (lean_obj_tag(v___x_234_) == 1)
{
lean_object* v_val_235_; lean_object* v___x_236_; 
lean_del_object(v___x_232_);
lean_del_object(v___x_209_);
v_val_235_ = lean_ctor_get(v___x_234_, 0);
lean_inc(v_val_235_);
lean_dec_ref_known(v___x_234_, 1);
v___x_236_ = l_Lean_Language_Lean_setOption(v_opts_203_, v_val_235_, v_name_224_, v_val_228_);
return v___x_236_;
}
else
{
lean_object* v___x_237_; uint8_t v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_244_; 
lean_dec(v___x_234_);
lean_dec_ref(v_val_228_);
lean_dec_ref(v_opts_203_);
v___x_237_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__0));
v___x_238_ = 1;
v___x_239_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_224_, v___x_238_);
v___x_240_ = lean_string_append(v___x_237_, v___x_239_);
lean_dec_ref(v___x_239_);
v___x_241_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__1));
v___x_242_ = lean_string_append(v___x_240_, v___x_241_);
if (v_isShared_210_ == 0)
{
lean_ctor_set_tag(v___x_209_, 18);
lean_ctor_set(v___x_209_, 0, v___x_242_);
v___x_244_ = v___x_209_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v___x_242_);
v___x_244_ = v_reuseFailAlloc_248_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
lean_object* v___x_246_; 
if (v_isShared_233_ == 0)
{
lean_ctor_set_tag(v___x_232_, 1);
lean_ctor_set(v___x_232_, 0, v___x_244_);
v___x_246_ = v___x_232_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v___x_244_);
v___x_246_ = v_reuseFailAlloc_247_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
return v___x_246_;
}
}
}
}
}
else
{
lean_object* v_a_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_257_; 
lean_dec_ref(v_val_228_);
lean_dec(v_name_224_);
lean_del_object(v___x_209_);
lean_dec_ref(v_opts_203_);
v_a_250_ = lean_ctor_get(v___x_229_, 0);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_229_);
if (v_isSharedCheck_257_ == 0)
{
v___x_252_ = v___x_229_;
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_a_250_);
lean_dec(v___x_229_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
lean_object* v___x_255_; 
if (v_isShared_253_ == 0)
{
v___x_255_ = v___x_252_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v_a_250_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
return v___x_255_;
}
}
}
}
}
else
{
lean_object* v___x_259_; lean_object* v___x_261_; 
lean_del_object(v___x_217_);
lean_dec(v_endExclusive_215_);
lean_dec(v_startInclusive_214_);
lean_dec_ref(v_str_213_);
lean_dec(v___y_212_);
lean_dec_ref(v_opts_203_);
v___x_259_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__3));
if (v_isShared_210_ == 0)
{
lean_ctor_set(v___x_209_, 0, v___x_259_);
v___x_261_ = v___x_209_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v___x_259_);
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
}
}
else
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
lean_dec(v___x_206_);
lean_dec_ref(v_opts_203_);
v___x_272_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__4));
v___x_273_ = lean_string_append(v___x_272_, v_arg_204_);
lean_dec_ref(v_arg_204_);
v___x_274_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__5));
v___x_275_ = lean_string_append(v___x_273_, v___x_274_);
v___x_276_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
v___x_277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
return v___x_277_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanIR_0__setConfigOption___boxed(lean_object* v_opts_278_, lean_object* v_arg_279_, lean_object* v_a_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l___private_LeanIR_0__setConfigOption(v_opts_278_, v_arg_279_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1(lean_object* v_val_282_, lean_object* v_inst_283_, lean_object* v_R_284_, lean_object* v_a_285_, lean_object* v_b_286_, lean_object* v_c_287_){
_start:
{
lean_object* v___x_288_; 
v___x_288_ = l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg(v_val_282_, v_a_285_, v_b_286_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___boxed(lean_object* v_val_289_, lean_object* v_inst_290_, lean_object* v_R_291_, lean_object* v_a_292_, lean_object* v_b_293_, lean_object* v_c_294_){
_start:
{
lean_object* v_res_295_; 
v_res_295_ = l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1(v_val_289_, v_inst_290_, v_R_291_, v_a_292_, v_b_293_, v_c_294_);
lean_dec(v_b_293_);
lean_dec_ref(v_val_289_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l_main___elam__0___redArg___lam__0(lean_object* v___x_296_, lean_object* v_x_297_){
_start:
{
lean_inc_ref(v___x_296_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l_main___elam__0___redArg___lam__0___boxed(lean_object* v___x_298_, lean_object* v_x_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l_main___elam__0___redArg___lam__0(v___x_298_, v_x_299_);
lean_dec_ref(v_x_299_);
lean_dec_ref(v___x_298_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l_main___elam__0___redArg(lean_object* v___x_301_, uint8_t v___x_302_, lean_object* v_inst_303_, lean_object* v_ext_304_, lean_object* v_env_305_){
_start:
{
lean_object* v_toEnvExtension_307_; lean_object* v_addImportedFn_308_; lean_object* v_asyncMode_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v_importedEntries_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_343_; 
v_toEnvExtension_307_ = lean_ctor_get(v_ext_304_, 0);
lean_inc_ref(v_toEnvExtension_307_);
v_addImportedFn_308_ = lean_ctor_get(v_ext_304_, 2);
lean_inc_ref(v_addImportedFn_308_);
lean_dec_ref(v_ext_304_);
v_asyncMode_309_ = lean_ctor_get(v_toEnvExtension_307_, 2);
v___x_310_ = l_Lean_instInhabitedPersistentEnvExtensionState___redArg(v_inst_303_);
lean_inc_ref(v_env_305_);
v___x_311_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_310_, v_toEnvExtension_307_, v_env_305_, v_asyncMode_309_, v___x_301_, v___x_302_);
lean_dec_ref(v___x_310_);
v_importedEntries_312_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_343_ == 0)
{
lean_object* v_unused_344_; 
v_unused_344_ = lean_ctor_get(v___x_311_, 1);
lean_dec(v_unused_344_);
v___x_314_ = v___x_311_;
v_isShared_315_ = v_isSharedCheck_343_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_importedEntries_312_);
lean_dec(v___x_311_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_343_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_316_ = l_Lean_Options_empty;
lean_inc_ref(v_env_305_);
v___x_317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_317_, 0, v_env_305_);
lean_ctor_set(v___x_317_, 1, v___x_316_);
lean_inc_ref(v_importedEntries_312_);
v___x_318_ = lean_apply_3(v_addImportedFn_308_, v_importedEntries_312_, v___x_317_, lean_box(0));
if (lean_obj_tag(v___x_318_) == 0)
{
lean_object* v_a_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_334_; 
v_a_319_ = lean_ctor_get(v___x_318_, 0);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_318_);
if (v_isSharedCheck_334_ == 0)
{
v___x_321_ = v___x_318_;
v_isShared_322_ = v_isSharedCheck_334_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_a_319_);
lean_dec(v___x_318_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_334_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
lean_object* v___x_324_; 
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 1, v_a_319_);
v___x_324_ = v___x_314_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v_importedEntries_312_);
lean_ctor_set(v_reuseFailAlloc_333_, 1, v_a_319_);
v___x_324_ = v_reuseFailAlloc_333_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
lean_object* v___f_325_; lean_object* v___x_326_; lean_object* v___x_327_; uint8_t v___x_328_; lean_object* v___x_329_; lean_object* v___x_331_; 
v___f_325_ = lean_alloc_closure((void*)(l_main___elam__0___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_325_, 0, v___x_324_);
v___x_326_ = lean_box(0);
v___x_327_ = lean_box(0);
v___x_328_ = 1;
v___x_329_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(v_toEnvExtension_307_, v_env_305_, v___f_325_, v___x_326_, v___x_327_, v___x_328_);
if (v_isShared_322_ == 0)
{
lean_ctor_set(v___x_321_, 0, v___x_329_);
v___x_331_ = v___x_321_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v___x_329_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
return v___x_331_;
}
}
}
}
else
{
lean_object* v_a_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_342_; 
lean_del_object(v___x_314_);
lean_dec_ref(v_importedEntries_312_);
lean_dec_ref(v_toEnvExtension_307_);
lean_dec_ref(v_env_305_);
v_a_335_ = lean_ctor_get(v___x_318_, 0);
v_isSharedCheck_342_ = !lean_is_exclusive(v___x_318_);
if (v_isSharedCheck_342_ == 0)
{
v___x_337_ = v___x_318_;
v_isShared_338_ = v_isSharedCheck_342_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_a_335_);
lean_dec(v___x_318_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_342_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_340_; 
if (v_isShared_338_ == 0)
{
v___x_340_ = v___x_337_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v_a_335_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
return v___x_340_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_main___elam__0___redArg___boxed(lean_object* v___x_345_, lean_object* v___x_346_, lean_object* v_inst_347_, lean_object* v_ext_348_, lean_object* v_env_349_, lean_object* v___y_350_){
_start:
{
uint8_t v___x_36997__boxed_351_; lean_object* v_res_352_; 
v___x_36997__boxed_351_ = lean_unbox(v___x_346_);
v_res_352_ = l_main___elam__0___redArg(v___x_345_, v___x_36997__boxed_351_, v_inst_347_, v_ext_348_, v_env_349_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l_main___elam__0(lean_object* v___x_353_, uint8_t v___x_354_, lean_object* v_00_u03b1_355_, lean_object* v_00_u03b2_356_, lean_object* v_00_u03c3_357_, lean_object* v_inst_358_, lean_object* v_ext_359_, lean_object* v_env_360_){
_start:
{
lean_object* v___x_362_; 
v___x_362_ = l_main___elam__0___redArg(v___x_353_, v___x_354_, v_inst_358_, v_ext_359_, v_env_360_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_main___elam__0___boxed(lean_object* v___x_363_, lean_object* v___x_364_, lean_object* v_00_u03b1_365_, lean_object* v_00_u03b2_366_, lean_object* v_00_u03c3_367_, lean_object* v_inst_368_, lean_object* v_ext_369_, lean_object* v_env_370_, lean_object* v___y_371_){
_start:
{
uint8_t v___x_37077__boxed_372_; lean_object* v_res_373_; 
v___x_37077__boxed_372_ = lean_unbox(v___x_364_);
v_res_373_ = l_main___elam__0(v___x_363_, v___x_37077__boxed_372_, v_00_u03b1_365_, v_00_u03b2_366_, v_00_u03c3_367_, v_inst_368_, v_ext_369_, v_env_370_);
return v_res_373_;
}
}
static lean_object* _init_l_panic___at___00main_spec__5___closed__0(void){
_start:
{
lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_374_ = l_instInhabitedError;
v___x_375_ = lean_alloc_closure((void*)(l_instInhabitedEIO___aux__1___boxed), 4, 3);
lean_closure_set(v___x_375_, 0, lean_box(0));
lean_closure_set(v___x_375_, 1, lean_box(0));
lean_closure_set(v___x_375_, 2, v___x_374_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00main_spec__5(lean_object* v_msg_376_){
_start:
{
lean_object* v___x_378_; lean_object* v___x_20036__overap_379_; lean_object* v___x_380_; 
v___x_378_ = lean_obj_once(&l_panic___at___00main_spec__5___closed__0, &l_panic___at___00main_spec__5___closed__0_once, _init_l_panic___at___00main_spec__5___closed__0);
v___x_20036__overap_379_ = lean_panic_fn_borrowed(v___x_378_, v_msg_376_);
v___x_380_ = lean_apply_1(v___x_20036__overap_379_, lean_box(0));
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00main_spec__5___boxed(lean_object* v_msg_381_, lean_object* v___y_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_panic___at___00main_spec__5(v_msg_381_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00main_spec__8(lean_object* v_opts_384_, lean_object* v_opt_385_){
_start:
{
lean_object* v_name_386_; lean_object* v_defValue_387_; lean_object* v_map_388_; lean_object* v___x_389_; 
v_name_386_ = lean_ctor_get(v_opt_385_, 0);
v_defValue_387_ = lean_ctor_get(v_opt_385_, 1);
v_map_388_ = lean_ctor_get(v_opts_384_, 0);
v___x_389_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_388_, v_name_386_);
if (lean_obj_tag(v___x_389_) == 0)
{
lean_inc(v_defValue_387_);
return v_defValue_387_;
}
else
{
lean_object* v_val_390_; 
v_val_390_ = lean_ctor_get(v___x_389_, 0);
lean_inc(v_val_390_);
lean_dec_ref_known(v___x_389_, 1);
if (lean_obj_tag(v_val_390_) == 3)
{
lean_object* v_v_391_; 
v_v_391_ = lean_ctor_get(v_val_390_, 0);
lean_inc(v_v_391_);
lean_dec_ref_known(v_val_390_, 1);
return v_v_391_;
}
else
{
lean_dec(v_val_390_);
lean_inc(v_defValue_387_);
return v_defValue_387_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00main_spec__8___boxed(lean_object* v_opts_392_, lean_object* v_opt_393_){
_start:
{
lean_object* v_res_394_; 
v_res_394_ = l_Lean_Option_get___at___00main_spec__8(v_opts_392_, v_opt_393_);
lean_dec_ref(v_opt_393_);
lean_dec_ref(v_opts_392_);
return v_res_394_;
}
}
LEAN_EXPORT lean_object* l_main___lam__0(lean_object* v_package_x3f_395_, lean_object* v_ps_396_){
_start:
{
lean_object* v_importedEntries_397_; lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_404_; 
v_importedEntries_397_ = lean_ctor_get(v_ps_396_, 0);
v_isSharedCheck_404_ = !lean_is_exclusive(v_ps_396_);
if (v_isSharedCheck_404_ == 0)
{
lean_object* v_unused_405_; 
v_unused_405_ = lean_ctor_get(v_ps_396_, 1);
lean_dec(v_unused_405_);
v___x_399_ = v_ps_396_;
v_isShared_400_ = v_isSharedCheck_404_;
goto v_resetjp_398_;
}
else
{
lean_inc(v_importedEntries_397_);
lean_dec(v_ps_396_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_404_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
lean_object* v___x_402_; 
if (v_isShared_400_ == 0)
{
lean_ctor_set(v___x_399_, 1, v_package_x3f_395_);
v___x_402_ = v___x_399_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v_importedEntries_397_);
lean_ctor_set(v_reuseFailAlloc_403_, 1, v_package_x3f_395_);
v___x_402_ = v_reuseFailAlloc_403_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
return v___x_402_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4_spec__5(lean_object* v_a_406_, lean_object* v_x_407_){
_start:
{
if (lean_obj_tag(v_x_407_) == 0)
{
lean_dec(v_a_406_);
return v_x_407_;
}
else
{
lean_object* v_key_408_; lean_object* v_value_409_; lean_object* v_tail_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_443_; 
v_key_408_ = lean_ctor_get(v_x_407_, 0);
v_value_409_ = lean_ctor_get(v_x_407_, 1);
v_tail_410_ = lean_ctor_get(v_x_407_, 2);
v_isSharedCheck_443_ = !lean_is_exclusive(v_x_407_);
if (v_isSharedCheck_443_ == 0)
{
v___x_412_ = v_x_407_;
v_isShared_413_ = v_isSharedCheck_443_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_tail_410_);
lean_inc(v_value_409_);
lean_inc(v_key_408_);
lean_dec(v_x_407_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_443_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
uint8_t v___x_414_; 
v___x_414_ = lean_name_eq(v_key_408_, v_a_406_);
if (v___x_414_ == 0)
{
lean_object* v___x_415_; lean_object* v___x_417_; 
v___x_415_ = l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4_spec__5(v_a_406_, v_tail_410_);
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 2, v___x_415_);
v___x_417_ = v___x_412_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v_key_408_);
lean_ctor_set(v_reuseFailAlloc_418_, 1, v_value_409_);
lean_ctor_set(v_reuseFailAlloc_418_, 2, v___x_415_);
v___x_417_ = v_reuseFailAlloc_418_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
return v___x_417_;
}
}
else
{
lean_object* v_toEffectiveImport_419_; lean_object* v_parts_420_; lean_object* v_irParts_421_; uint8_t v_needsIRTrans_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_442_; 
lean_dec(v_key_408_);
v_toEffectiveImport_419_ = lean_ctor_get(v_value_409_, 0);
v_parts_420_ = lean_ctor_get(v_value_409_, 1);
v_irParts_421_ = lean_ctor_get(v_value_409_, 2);
v_needsIRTrans_422_ = lean_ctor_get_uint8(v_value_409_, sizeof(void*)*3);
v_isSharedCheck_442_ = !lean_is_exclusive(v_value_409_);
if (v_isSharedCheck_442_ == 0)
{
v___x_424_ = v_value_409_;
v_isShared_425_ = v_isSharedCheck_442_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_irParts_421_);
lean_inc(v_parts_420_);
lean_inc(v_toEffectiveImport_419_);
lean_dec(v_value_409_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_442_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v_toImport_426_; uint8_t v_hasData_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_441_; 
v_toImport_426_ = lean_ctor_get(v_toEffectiveImport_419_, 0);
v_hasData_427_ = lean_ctor_get_uint8(v_toEffectiveImport_419_, sizeof(void*)*1 + 1);
v_isSharedCheck_441_ = !lean_is_exclusive(v_toEffectiveImport_419_);
if (v_isSharedCheck_441_ == 0)
{
v___x_429_ = v_toEffectiveImport_419_;
v_isShared_430_ = v_isSharedCheck_441_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_toImport_426_);
lean_dec(v_toEffectiveImport_419_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_441_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
uint8_t v___x_431_; lean_object* v___x_433_; 
v___x_431_ = 0;
if (v_isShared_430_ == 0)
{
v___x_433_ = v___x_429_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_toImport_426_);
lean_ctor_set_uint8(v_reuseFailAlloc_440_, sizeof(void*)*1 + 1, v_hasData_427_);
v___x_433_ = v_reuseFailAlloc_440_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
lean_object* v___x_435_; 
lean_ctor_set_uint8(v___x_433_, sizeof(void*)*1, v___x_431_);
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 0, v___x_433_);
v___x_435_ = v___x_424_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v___x_433_);
lean_ctor_set(v_reuseFailAlloc_439_, 1, v_parts_420_);
lean_ctor_set(v_reuseFailAlloc_439_, 2, v_irParts_421_);
lean_ctor_set_uint8(v_reuseFailAlloc_439_, sizeof(void*)*3, v_needsIRTrans_422_);
v___x_435_ = v_reuseFailAlloc_439_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
lean_object* v___x_437_; 
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 1, v___x_435_);
lean_ctor_set(v___x_412_, 0, v_a_406_);
v___x_437_ = v___x_412_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_a_406_);
lean_ctor_set(v_reuseFailAlloc_438_, 1, v___x_435_);
lean_ctor_set(v_reuseFailAlloc_438_, 2, v_tail_410_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
return v___x_437_;
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4(lean_object* v_m_444_, lean_object* v_a_445_){
_start:
{
lean_object* v_size_446_; lean_object* v_buckets_447_; lean_object* v___x_448_; uint64_t v___y_450_; 
v_size_446_ = lean_ctor_get(v_m_444_, 0);
v_buckets_447_ = lean_ctor_get(v_m_444_, 1);
v___x_448_ = lean_array_get_size(v_buckets_447_);
if (lean_obj_tag(v_a_445_) == 0)
{
uint64_t v___x_477_; 
v___x_477_ = 1723ULL;
v___y_450_ = v___x_477_;
goto v___jp_449_;
}
else
{
uint64_t v_hash_478_; 
v_hash_478_ = lean_ctor_get_uint64(v_a_445_, sizeof(void*)*2);
v___y_450_ = v_hash_478_;
goto v___jp_449_;
}
v___jp_449_:
{
uint64_t v___x_451_; uint64_t v___x_452_; uint64_t v_fold_453_; uint64_t v___x_454_; uint64_t v___x_455_; uint64_t v___x_456_; size_t v___x_457_; size_t v___x_458_; size_t v___x_459_; size_t v___x_460_; size_t v___x_461_; lean_object* v_bucket_462_; uint8_t v___x_463_; 
v___x_451_ = 32ULL;
v___x_452_ = lean_uint64_shift_right(v___y_450_, v___x_451_);
v_fold_453_ = lean_uint64_xor(v___y_450_, v___x_452_);
v___x_454_ = 16ULL;
v___x_455_ = lean_uint64_shift_right(v_fold_453_, v___x_454_);
v___x_456_ = lean_uint64_xor(v_fold_453_, v___x_455_);
v___x_457_ = lean_uint64_to_usize(v___x_456_);
v___x_458_ = lean_usize_of_nat(v___x_448_);
v___x_459_ = ((size_t)1ULL);
v___x_460_ = lean_usize_sub(v___x_458_, v___x_459_);
v___x_461_ = lean_usize_land(v___x_457_, v___x_460_);
v_bucket_462_ = lean_array_uget_borrowed(v_buckets_447_, v___x_461_);
v___x_463_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_initFn_00___x40_Lean_Compiler_CSimpAttr_309491121____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg(v_a_445_, v_bucket_462_);
if (v___x_463_ == 0)
{
lean_dec(v_a_445_);
return v_m_444_;
}
else
{
lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_474_; 
lean_inc(v_bucket_462_);
lean_inc_ref(v_buckets_447_);
lean_inc(v_size_446_);
v_isSharedCheck_474_ = !lean_is_exclusive(v_m_444_);
if (v_isSharedCheck_474_ == 0)
{
lean_object* v_unused_475_; lean_object* v_unused_476_; 
v_unused_475_ = lean_ctor_get(v_m_444_, 1);
lean_dec(v_unused_475_);
v_unused_476_ = lean_ctor_get(v_m_444_, 0);
lean_dec(v_unused_476_);
v___x_465_ = v_m_444_;
v_isShared_466_ = v_isSharedCheck_474_;
goto v_resetjp_464_;
}
else
{
lean_dec(v_m_444_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_474_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v___x_467_; lean_object* v_buckets_468_; lean_object* v_bucket_469_; lean_object* v___x_470_; lean_object* v___x_472_; 
v___x_467_ = lean_box(0);
v_buckets_468_ = lean_array_uset(v_buckets_447_, v___x_461_, v___x_467_);
v_bucket_469_ = l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4_spec__5(v_a_445_, v_bucket_462_);
v___x_470_ = lean_array_uset(v_buckets_468_, v___x_461_, v_bucket_469_);
if (v_isShared_466_ == 0)
{
lean_ctor_set(v___x_465_, 1, v___x_470_);
v___x_472_ = v___x_465_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v_size_446_);
lean_ctor_set(v_reuseFailAlloc_473_, 1, v___x_470_);
v___x_472_ = v_reuseFailAlloc_473_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
return v___x_472_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_main___lam__1(lean_object* v___x_479_, lean_object* v___x_480_, uint8_t v___x_481_, lean_object* v_importArts_482_, uint8_t v___y_483_, uint8_t v___x_484_, lean_object* v_name_485_, lean_object* v___x_486_, uint8_t v___x_487_){
_start:
{
lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_489_ = lean_st_mk_ref(v___x_479_);
v___x_490_ = l_Lean_importModulesCore(v___x_480_, v___x_481_, v_importArts_482_, v___y_483_, v___x_484_, v___x_489_);
if (lean_obj_tag(v___x_490_) == 0)
{
lean_object* v___x_491_; lean_object* v_moduleNameMap_492_; lean_object* v_moduleNames_493_; lean_object* v___x_495_; uint8_t v_isShared_496_; uint8_t v_isSharedCheck_503_; 
lean_dec_ref_known(v___x_490_, 1);
v___x_491_ = lean_st_ref_get(v___x_489_);
lean_dec(v___x_489_);
v_moduleNameMap_492_ = lean_ctor_get(v___x_491_, 0);
v_moduleNames_493_ = lean_ctor_get(v___x_491_, 1);
v_isSharedCheck_503_ = !lean_is_exclusive(v___x_491_);
if (v_isSharedCheck_503_ == 0)
{
v___x_495_ = v___x_491_;
v_isShared_496_ = v_isSharedCheck_503_;
goto v_resetjp_494_;
}
else
{
lean_inc(v_moduleNames_493_);
lean_inc(v_moduleNameMap_492_);
lean_dec(v___x_491_);
v___x_495_ = lean_box(0);
v_isShared_496_ = v_isSharedCheck_503_;
goto v_resetjp_494_;
}
v_resetjp_494_:
{
lean_object* v___x_497_; lean_object* v___x_499_; 
v___x_497_ = l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4(v_moduleNameMap_492_, v_name_485_);
if (v_isShared_496_ == 0)
{
lean_ctor_set(v___x_495_, 0, v___x_497_);
v___x_499_ = v___x_495_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v___x_497_);
lean_ctor_set(v_reuseFailAlloc_502_, 1, v_moduleNames_493_);
v___x_499_ = v_reuseFailAlloc_502_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
uint32_t v___x_500_; lean_object* v___x_501_; 
v___x_500_ = 0;
v___x_501_ = l_Lean_finalizeImport(v___x_499_, v___x_480_, v___x_486_, v___x_500_, v___x_484_, v___x_487_, v___x_481_, v___x_484_, v___x_484_);
return v___x_501_;
}
}
}
else
{
lean_object* v_a_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_511_; 
lean_dec(v___x_489_);
lean_dec_ref(v___x_486_);
lean_dec(v_name_485_);
lean_dec_ref(v___x_480_);
v_a_504_ = lean_ctor_get(v___x_490_, 0);
v_isSharedCheck_511_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_511_ == 0)
{
v___x_506_ = v___x_490_;
v_isShared_507_ = v_isSharedCheck_511_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_a_504_);
lean_dec(v___x_490_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_511_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
lean_object* v___x_509_; 
if (v_isShared_507_ == 0)
{
v___x_509_ = v___x_506_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v_a_504_);
v___x_509_ = v_reuseFailAlloc_510_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
return v___x_509_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_main___lam__1___boxed(lean_object* v___x_512_, lean_object* v___x_513_, lean_object* v___x_514_, lean_object* v_importArts_515_, lean_object* v___y_516_, lean_object* v___x_517_, lean_object* v_name_518_, lean_object* v___x_519_, lean_object* v___x_520_, lean_object* v___y_521_){
_start:
{
uint8_t v___x_37245__boxed_522_; uint8_t v___y_37246__boxed_523_; uint8_t v___x_37247__boxed_524_; uint8_t v___x_37249__boxed_525_; lean_object* v_res_526_; 
v___x_37245__boxed_522_ = lean_unbox(v___x_514_);
v___y_37246__boxed_523_ = lean_unbox(v___y_516_);
v___x_37247__boxed_524_ = lean_unbox(v___x_517_);
v___x_37249__boxed_525_ = lean_unbox(v___x_520_);
v_res_526_ = l_main___lam__1(v___x_512_, v___x_513_, v___x_37245__boxed_522_, v_importArts_515_, v___y_37246__boxed_523_, v___x_37247__boxed_524_, v_name_518_, v___x_519_, v___x_37249__boxed_525_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l_main___lam__2(lean_object* v___x_530_, lean_object* v___x_531_, uint16_t v___x_532_, lean_object* v_name_533_, lean_object* v_a_534_, uint8_t v___x_535_, lean_object* v___x_536_, lean_object* v_head_537_, lean_object* v___x_538_, lean_object* v___x_539_, lean_object* v___x_540_, lean_object* v___x_541_, lean_object* v___x_542_, lean_object* v___x_543_, lean_object* v___x_544_, lean_object* v___x_545_, uint8_t v___x_546_, uint8_t v___x_547_){
_start:
{
lean_object* v_a_550_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v_fileName_556_; lean_object* v_fileMap_557_; lean_object* v_currNamespace_558_; lean_object* v_openDecls_559_; lean_object* v_initHeartbeats_560_; lean_object* v_maxHeartbeats_561_; lean_object* v_quotContext_562_; lean_object* v_currMacroScope_563_; lean_object* v_cancelTk_x3f_564_; lean_object* v_inheritedTraceOptions_565_; lean_object* v_currRecDepth_566_; lean_object* v_ref_567_; uint8_t v_suppressElabErrors_568_; uint8_t v_isRecordingDeps_569_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; uint8_t v___y_605_; lean_object* v_env_626_; uint8_t v___x_627_; uint16_t v___x_628_; uint16_t v___x_629_; uint16_t v___x_630_; uint8_t v___x_631_; 
v___x_553_ = lean_io_get_num_heartbeats();
v___x_554_ = lean_st_mk_ref(v___x_530_);
v___x_601_ = l_Lean_inheritedTraceOptions;
v___x_602_ = lean_st_ref_get(v___x_601_);
v___x_603_ = lean_st_ref_get(v___x_554_);
v_env_626_ = lean_ctor_get(v___x_603_, 0);
lean_inc_ref(v_env_626_);
lean_dec(v___x_603_);
v___x_627_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_626_);
lean_dec_ref(v_env_626_);
v___x_628_ = 512;
v___x_629_ = lean_uint16_land(v___x_532_, v___x_628_);
v___x_630_ = 0;
v___x_631_ = lean_uint16_dec_eq(v___x_629_, v___x_630_);
if (v___x_631_ == 0)
{
if (v___x_627_ == 0)
{
v___y_605_ = v___x_535_;
goto v___jp_604_;
}
else
{
lean_dec_ref(v___x_536_);
lean_inc(v___x_539_);
v_fileName_556_ = v_head_537_;
v_fileMap_557_ = v___x_538_;
v_currNamespace_558_ = v___x_539_;
v_openDecls_559_ = v___x_540_;
v_initHeartbeats_560_ = v___x_553_;
v_maxHeartbeats_561_ = v___x_541_;
v_quotContext_562_ = v___x_539_;
v_currMacroScope_563_ = v___x_542_;
v_cancelTk_x3f_564_ = v___x_543_;
v_inheritedTraceOptions_565_ = v___x_602_;
v_currRecDepth_566_ = v___x_544_;
v_ref_567_ = v___x_545_;
v_suppressElabErrors_568_ = v___x_546_;
v_isRecordingDeps_569_ = v___x_546_;
goto v___jp_555_;
}
}
else
{
if (v___x_627_ == 0)
{
lean_dec_ref(v___x_536_);
lean_inc(v___x_539_);
v_fileName_556_ = v_head_537_;
v_fileMap_557_ = v___x_538_;
v_currNamespace_558_ = v___x_539_;
v_openDecls_559_ = v___x_540_;
v_initHeartbeats_560_ = v___x_553_;
v_maxHeartbeats_561_ = v___x_541_;
v_quotContext_562_ = v___x_539_;
v_currMacroScope_563_ = v___x_542_;
v_cancelTk_x3f_564_ = v___x_543_;
v_inheritedTraceOptions_565_ = v___x_602_;
v_currRecDepth_566_ = v___x_544_;
v_ref_567_ = v___x_545_;
v_suppressElabErrors_568_ = v___x_546_;
v_isRecordingDeps_569_ = v___x_546_;
goto v___jp_555_;
}
else
{
v___y_605_ = v___x_547_;
goto v___jp_604_;
}
}
v___jp_549_:
{
lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_551_ = lean_mk_io_user_error(v_a_550_);
v___x_552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_552_, 0, v___x_551_);
return v___x_552_;
}
v___jp_555_:
{
lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_570_ = l_Lean_maxRecDepth;
v___x_571_ = l_Lean_Option_get___at___00main_spec__8(v___x_531_, v___x_570_);
v___x_572_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_572_, 0, v_fileName_556_);
lean_ctor_set(v___x_572_, 1, v_fileMap_557_);
lean_ctor_set(v___x_572_, 2, v___x_531_);
lean_ctor_set(v___x_572_, 3, v___x_571_);
lean_ctor_set(v___x_572_, 4, v_currNamespace_558_);
lean_ctor_set(v___x_572_, 5, v_openDecls_559_);
lean_ctor_set(v___x_572_, 6, v_initHeartbeats_560_);
lean_ctor_set(v___x_572_, 7, v_maxHeartbeats_561_);
lean_ctor_set(v___x_572_, 8, v_quotContext_562_);
lean_ctor_set(v___x_572_, 9, v_currMacroScope_563_);
lean_ctor_set(v___x_572_, 10, v_cancelTk_x3f_564_);
lean_ctor_set(v___x_572_, 11, v_inheritedTraceOptions_565_);
v___x_573_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_573_, 0, v___x_572_);
lean_ctor_set(v___x_573_, 1, v_currRecDepth_566_);
lean_ctor_set(v___x_573_, 2, v_ref_567_);
lean_ctor_set_uint16(v___x_573_, sizeof(void*)*3, v___x_532_);
lean_ctor_set_uint8(v___x_573_, sizeof(void*)*3 + 2, v_suppressElabErrors_568_);
lean_ctor_set_uint8(v___x_573_, sizeof(void*)*3 + 3, v_isRecordingDeps_569_);
v___x_574_ = l_Lean_Compiler_LCNF_emitC(v_name_533_, v___x_573_, v___x_554_);
lean_dec_ref_known(v___x_573_, 3);
if (lean_obj_tag(v___x_574_) == 0)
{
lean_object* v_a_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v_a_575_ = lean_ctor_get(v___x_574_, 0);
lean_inc(v_a_575_);
lean_dec_ref_known(v___x_574_, 1);
v___x_576_ = lean_st_ref_get(v___x_554_);
lean_dec(v___x_554_);
lean_dec(v___x_576_);
v___x_577_ = lean_string_to_utf8(v_a_575_);
v___x_578_ = lean_io_prim_handle_write(v_a_534_, v___x_577_);
lean_dec_ref(v___x_577_);
return v___x_578_;
}
else
{
lean_object* v_a_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_600_; 
lean_dec(v___x_554_);
v_a_579_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_600_ == 0)
{
v___x_581_ = v___x_574_;
v_isShared_582_ = v_isSharedCheck_600_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_a_579_);
lean_dec(v___x_574_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_600_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
if (lean_obj_tag(v_a_579_) == 0)
{
lean_object* v_msg_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_587_; 
v_msg_583_ = lean_ctor_get(v_a_579_, 1);
lean_inc_ref(v_msg_583_);
lean_dec_ref_known(v_a_579_, 2);
v___x_584_ = l_Lean_MessageData_toString(v_msg_583_);
v___x_585_ = lean_mk_io_user_error(v___x_584_);
if (v_isShared_582_ == 0)
{
lean_ctor_set(v___x_581_, 0, v___x_585_);
v___x_587_ = v___x_581_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v___x_585_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
else
{
lean_object* v_id_589_; lean_object* v___x_590_; 
lean_del_object(v___x_581_);
v_id_589_ = lean_ctor_get(v_a_579_, 0);
lean_inc(v_id_589_);
lean_dec_ref_known(v_a_579_, 2);
v___x_590_ = l_Lean_InternalExceptionId_getName(v_id_589_);
if (lean_obj_tag(v___x_590_) == 0)
{
lean_object* v_a_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; 
lean_dec(v_id_589_);
v_a_591_ = lean_ctor_get(v___x_590_, 0);
lean_inc(v_a_591_);
lean_dec_ref_known(v___x_590_, 1);
v___x_592_ = ((lean_object*)(l_main___lam__2___closed__0));
v___x_593_ = l_Lean_Name_toString(v_a_591_, v___x_535_);
v___x_594_ = lean_string_append(v___x_592_, v___x_593_);
lean_dec_ref(v___x_593_);
v_a_550_ = v___x_594_;
goto v___jp_549_;
}
else
{
lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; 
lean_dec_ref_known(v___x_590_, 1);
v___x_595_ = ((lean_object*)(l_main___lam__2___closed__1));
v___x_596_ = l_Nat_reprFast(v_id_589_);
v___x_597_ = lean_string_append(v___x_595_, v___x_596_);
lean_dec_ref(v___x_596_);
v___x_598_ = ((lean_object*)(l_main___lam__2___closed__2));
v___x_599_ = lean_string_append(v___x_597_, v___x_598_);
v_a_550_ = v___x_599_;
goto v___jp_549_;
}
}
}
}
}
v___jp_604_:
{
lean_object* v___x_606_; lean_object* v_env_607_; lean_object* v_nextMacroScope_608_; lean_object* v_ngen_609_; lean_object* v_auxDeclNGen_610_; lean_object* v_traceState_611_; lean_object* v_recordedDeps_612_; lean_object* v_messages_613_; lean_object* v_infoState_614_; lean_object* v_snapshotTasks_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_624_; 
v___x_606_ = lean_st_ref_take(v___x_554_);
v_env_607_ = lean_ctor_get(v___x_606_, 0);
v_nextMacroScope_608_ = lean_ctor_get(v___x_606_, 1);
v_ngen_609_ = lean_ctor_get(v___x_606_, 2);
v_auxDeclNGen_610_ = lean_ctor_get(v___x_606_, 3);
v_traceState_611_ = lean_ctor_get(v___x_606_, 4);
v_recordedDeps_612_ = lean_ctor_get(v___x_606_, 6);
v_messages_613_ = lean_ctor_get(v___x_606_, 7);
v_infoState_614_ = lean_ctor_get(v___x_606_, 8);
v_snapshotTasks_615_ = lean_ctor_get(v___x_606_, 9);
v_isSharedCheck_624_ = !lean_is_exclusive(v___x_606_);
if (v_isSharedCheck_624_ == 0)
{
lean_object* v_unused_625_; 
v_unused_625_ = lean_ctor_get(v___x_606_, 5);
lean_dec(v_unused_625_);
v___x_617_ = v___x_606_;
v_isShared_618_ = v_isSharedCheck_624_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_snapshotTasks_615_);
lean_inc(v_infoState_614_);
lean_inc(v_messages_613_);
lean_inc(v_recordedDeps_612_);
lean_inc(v_traceState_611_);
lean_inc(v_auxDeclNGen_610_);
lean_inc(v_ngen_609_);
lean_inc(v_nextMacroScope_608_);
lean_inc(v_env_607_);
lean_dec(v___x_606_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_624_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v___x_619_; lean_object* v___x_621_; 
v___x_619_ = l_Lean_Kernel_enableDiag(v_env_607_, v___y_605_);
if (v_isShared_618_ == 0)
{
lean_ctor_set(v___x_617_, 5, v___x_536_);
lean_ctor_set(v___x_617_, 0, v___x_619_);
v___x_621_ = v___x_617_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v___x_619_);
lean_ctor_set(v_reuseFailAlloc_623_, 1, v_nextMacroScope_608_);
lean_ctor_set(v_reuseFailAlloc_623_, 2, v_ngen_609_);
lean_ctor_set(v_reuseFailAlloc_623_, 3, v_auxDeclNGen_610_);
lean_ctor_set(v_reuseFailAlloc_623_, 4, v_traceState_611_);
lean_ctor_set(v_reuseFailAlloc_623_, 5, v___x_536_);
lean_ctor_set(v_reuseFailAlloc_623_, 6, v_recordedDeps_612_);
lean_ctor_set(v_reuseFailAlloc_623_, 7, v_messages_613_);
lean_ctor_set(v_reuseFailAlloc_623_, 8, v_infoState_614_);
lean_ctor_set(v_reuseFailAlloc_623_, 9, v_snapshotTasks_615_);
v___x_621_ = v_reuseFailAlloc_623_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
lean_object* v___x_622_; 
v___x_622_ = lean_st_ref_put(v___x_554_, v___x_621_);
lean_inc(v___x_539_);
v_fileName_556_ = v_head_537_;
v_fileMap_557_ = v___x_538_;
v_currNamespace_558_ = v___x_539_;
v_openDecls_559_ = v___x_540_;
v_initHeartbeats_560_ = v___x_553_;
v_maxHeartbeats_561_ = v___x_541_;
v_quotContext_562_ = v___x_539_;
v_currMacroScope_563_ = v___x_542_;
v_cancelTk_x3f_564_ = v___x_543_;
v_inheritedTraceOptions_565_ = v___x_602_;
v_currRecDepth_566_ = v___x_544_;
v_ref_567_ = v___x_545_;
v_suppressElabErrors_568_ = v___x_546_;
v_isRecordingDeps_569_ = v___x_546_;
goto v___jp_555_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_main___lam__2___boxed(lean_object** _args){
lean_object* v___x_632_ = _args[0];
lean_object* v___x_633_ = _args[1];
lean_object* v___x_634_ = _args[2];
lean_object* v_name_635_ = _args[3];
lean_object* v_a_636_ = _args[4];
lean_object* v___x_637_ = _args[5];
lean_object* v___x_638_ = _args[6];
lean_object* v_head_639_ = _args[7];
lean_object* v___x_640_ = _args[8];
lean_object* v___x_641_ = _args[9];
lean_object* v___x_642_ = _args[10];
lean_object* v___x_643_ = _args[11];
lean_object* v___x_644_ = _args[12];
lean_object* v___x_645_ = _args[13];
lean_object* v___x_646_ = _args[14];
lean_object* v___x_647_ = _args[15];
lean_object* v___x_648_ = _args[16];
lean_object* v___x_649_ = _args[17];
lean_object* v___y_650_ = _args[18];
_start:
{
uint16_t v___x_37318__boxed_651_; uint8_t v___x_37320__boxed_652_; uint8_t v___x_37331__boxed_653_; uint8_t v___x_37332__boxed_654_; lean_object* v_res_655_; 
v___x_37318__boxed_651_ = lean_unbox(v___x_634_);
v___x_37320__boxed_652_ = lean_unbox(v___x_637_);
v___x_37331__boxed_653_ = lean_unbox(v___x_648_);
v___x_37332__boxed_654_ = lean_unbox(v___x_649_);
v_res_655_ = l_main___lam__2(v___x_632_, v___x_633_, v___x_37318__boxed_651_, v_name_635_, v_a_636_, v___x_37320__boxed_652_, v___x_638_, v_head_639_, v___x_640_, v___x_641_, v___x_642_, v___x_643_, v___x_644_, v___x_645_, v___x_646_, v___x_647_, v___x_37331__boxed_653_, v___x_37332__boxed_654_);
lean_dec(v_a_636_);
return v_res_655_;
}
}
LEAN_EXPORT lean_object* l_main___lam__3(lean_object* v___x_656_, lean_object* v_x_657_){
_start:
{
lean_inc_ref(v___x_656_);
return v___x_656_;
}
}
LEAN_EXPORT lean_object* l_main___lam__3___boxed(lean_object* v___x_658_, lean_object* v_x_659_){
_start:
{
lean_object* v_res_660_; 
v_res_660_ = l_main___lam__3(v___x_658_, v_x_659_);
lean_dec_ref(v_x_659_);
lean_dec_ref(v___x_658_);
return v_res_660_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2(lean_object* v_x2_661_, lean_object* v_as_662_, size_t v_i_663_, size_t v_stop_664_, lean_object* v_b_665_){
_start:
{
uint8_t v___x_666_; 
v___x_666_ = lean_usize_dec_eq(v_i_663_, v_stop_664_);
if (v___x_666_ == 0)
{
lean_object* v___x_667_; lean_object* v___x_668_; size_t v___x_669_; size_t v___x_670_; 
v___x_667_ = lean_array_uget_borrowed(v_as_662_, v_i_663_);
lean_inc_ref(v_x2_661_);
lean_inc(v___x_667_);
v___x_668_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_667_, v_x2_661_, v_b_665_);
v___x_669_ = ((size_t)1ULL);
v___x_670_ = lean_usize_add(v_i_663_, v___x_669_);
v_i_663_ = v___x_670_;
v_b_665_ = v___x_668_;
goto _start;
}
else
{
lean_dec_ref(v_x2_661_);
return v_b_665_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2___boxed(lean_object* v_x2_672_, lean_object* v_as_673_, lean_object* v_i_674_, lean_object* v_stop_675_, lean_object* v_b_676_){
_start:
{
size_t v_i_boxed_677_; size_t v_stop_boxed_678_; lean_object* v_res_679_; 
v_i_boxed_677_ = lean_unbox_usize(v_i_674_);
lean_dec(v_i_674_);
v_stop_boxed_678_ = lean_unbox_usize(v_stop_675_);
lean_dec(v_stop_675_);
v_res_679_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2(v_x2_672_, v_as_673_, v_i_boxed_677_, v_stop_boxed_678_, v_b_676_);
lean_dec_ref(v_as_673_);
return v_res_679_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__14(lean_object* v_as_680_, size_t v_i_681_, size_t v_stop_682_, lean_object* v_b_683_){
_start:
{
lean_object* v___y_685_; uint8_t v___x_689_; 
v___x_689_ = lean_usize_dec_eq(v_i_681_, v_stop_682_);
if (v___x_689_ == 0)
{
lean_object* v___x_690_; lean_object* v_declNames_691_; lean_object* v___x_692_; lean_object* v___x_693_; uint8_t v___x_694_; 
v___x_690_ = lean_array_uget_borrowed(v_as_680_, v_i_681_);
v_declNames_691_ = lean_ctor_get(v___x_690_, 0);
v___x_692_ = lean_unsigned_to_nat(0u);
v___x_693_ = lean_array_get_size(v_declNames_691_);
v___x_694_ = lean_nat_dec_lt(v___x_692_, v___x_693_);
if (v___x_694_ == 0)
{
v___y_685_ = v_b_683_;
goto v___jp_684_;
}
else
{
size_t v___x_695_; size_t v___x_696_; lean_object* v___x_697_; 
v___x_695_ = ((size_t)0ULL);
v___x_696_ = lean_usize_of_nat(v___x_693_);
lean_inc(v___x_690_);
v___x_697_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2(v___x_690_, v_declNames_691_, v___x_695_, v___x_696_, v_b_683_);
v___y_685_ = v___x_697_;
goto v___jp_684_;
}
}
else
{
return v_b_683_;
}
v___jp_684_:
{
size_t v___x_686_; size_t v___x_687_; 
v___x_686_ = ((size_t)1ULL);
v___x_687_ = lean_usize_add(v_i_681_, v___x_686_);
v_i_681_ = v___x_687_;
v_b_683_ = v___y_685_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__14___boxed(lean_object* v_as_698_, lean_object* v_i_699_, lean_object* v_stop_700_, lean_object* v_b_701_){
_start:
{
size_t v_i_boxed_702_; size_t v_stop_boxed_703_; lean_object* v_res_704_; 
v_i_boxed_702_ = lean_unbox_usize(v_i_699_);
lean_dec(v_i_699_);
v_stop_boxed_703_ = lean_unbox_usize(v_stop_700_);
lean_dec(v_stop_700_);
v_res_704_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__14(v_as_698_, v_i_boxed_702_, v_stop_boxed_703_, v_b_701_);
lean_dec_ref(v_as_698_);
return v_res_704_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8(lean_object* v_s_705_){
_start:
{
lean_object* v___x_707_; lean_object* v_putStr_708_; lean_object* v___x_709_; 
v___x_707_ = lean_get_stderr();
v_putStr_708_ = lean_ctor_get(v___x_707_, 4);
lean_inc_ref(v_putStr_708_);
lean_dec_ref(v___x_707_);
v___x_709_ = lean_apply_2(v_putStr_708_, v_s_705_, lean_box(0));
return v___x_709_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8___boxed(lean_object* v_s_710_, lean_object* v_a_711_){
_start:
{
lean_object* v_res_712_; 
v_res_712_ = l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8(v_s_710_);
return v_res_712_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00main_spec__6(lean_object* v_s_713_){
_start:
{
uint32_t v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_715_ = 10;
v___x_716_ = lean_string_push(v_s_713_, v___x_715_);
v___x_717_ = l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8(v___x_716_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00main_spec__6___boxed(lean_object* v_s_718_, lean_object* v_a_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = l_IO_eprintln___at___00main_spec__6(v_s_718_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3(lean_object* v_o_724_, lean_object* v_k_725_, lean_object* v_v_726_){
_start:
{
lean_object* v_map_727_; uint8_t v_hasTrace_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_742_; 
v_map_727_ = lean_ctor_get(v_o_724_, 0);
v_hasTrace_728_ = lean_ctor_get_uint8(v_o_724_, sizeof(void*)*1);
v_isSharedCheck_742_ = !lean_is_exclusive(v_o_724_);
if (v_isSharedCheck_742_ == 0)
{
v___x_730_ = v_o_724_;
v_isShared_731_ = v_isSharedCheck_742_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_map_727_);
lean_dec(v_o_724_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_742_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_732_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_732_, 0, v_v_726_);
lean_inc(v_k_725_);
v___x_733_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_725_, v___x_732_, v_map_727_);
if (v_hasTrace_728_ == 0)
{
lean_object* v___x_734_; uint8_t v___x_735_; lean_object* v___x_737_; 
v___x_734_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__1));
v___x_735_ = l_Lean_Name_isPrefixOf(v___x_734_, v_k_725_);
lean_dec(v_k_725_);
if (v_isShared_731_ == 0)
{
lean_ctor_set(v___x_730_, 0, v___x_733_);
v___x_737_ = v___x_730_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v___x_733_);
v___x_737_ = v_reuseFailAlloc_738_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
lean_ctor_set_uint8(v___x_737_, sizeof(void*)*1, v___x_735_);
return v___x_737_;
}
}
else
{
lean_object* v___x_740_; 
lean_dec(v_k_725_);
if (v_isShared_731_ == 0)
{
lean_ctor_set(v___x_730_, 0, v___x_733_);
v___x_740_ = v___x_730_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v___x_733_);
lean_ctor_set_uint8(v_reuseFailAlloc_741_, sizeof(void*)*1, v_hasTrace_728_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00main_spec__3(lean_object* v_opts_743_, lean_object* v_opt_744_, lean_object* v_val_745_){
_start:
{
lean_object* v_name_746_; lean_object* v___x_747_; 
v_name_746_ = lean_ctor_get(v_opt_744_, 0);
lean_inc(v_name_746_);
lean_dec_ref(v_opt_744_);
v___x_747_ = l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3(v_opts_743_, v_name_746_, v_val_745_);
return v___x_747_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16(lean_object* v_as_748_, size_t v_i_749_, size_t v_stop_750_, lean_object* v_b_751_){
_start:
{
uint8_t v___x_752_; 
v___x_752_ = lean_usize_dec_eq(v_i_749_, v_stop_750_);
if (v___x_752_ == 0)
{
lean_object* v___x_753_; lean_object* v_name_754_; lean_object* v___x_755_; size_t v___x_756_; size_t v___x_757_; 
v___x_753_ = lean_array_uget_borrowed(v_as_748_, v_i_749_);
v_name_754_ = lean_ctor_get(v___x_753_, 0);
lean_inc(v_name_754_);
v___x_755_ = l_Lean_Compiler_LCNF_setDeclPublic(v_b_751_, v_name_754_);
v___x_756_ = ((size_t)1ULL);
v___x_757_ = lean_usize_add(v_i_749_, v___x_756_);
v_i_749_ = v___x_757_;
v_b_751_ = v___x_755_;
goto _start;
}
else
{
return v_b_751_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16___boxed(lean_object* v_as_759_, lean_object* v_i_760_, lean_object* v_stop_761_, lean_object* v_b_762_){
_start:
{
size_t v_i_boxed_763_; size_t v_stop_boxed_764_; lean_object* v_res_765_; 
v_i_boxed_763_ = lean_unbox_usize(v_i_760_);
lean_dec(v_i_760_);
v_stop_boxed_764_ = lean_unbox_usize(v_stop_761_);
lean_dec(v_stop_761_);
v_res_765_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16(v_as_759_, v_i_boxed_763_, v_stop_boxed_764_, v_b_762_);
lean_dec_ref(v_as_759_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg(lean_object* v_as_x27_767_, lean_object* v_b_768_){
_start:
{
if (lean_obj_tag(v_as_x27_767_) == 0)
{
lean_object* v___x_770_; 
v___x_770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_770_, 0, v_b_768_);
return v___x_770_;
}
else
{
lean_object* v_head_771_; lean_object* v_tail_772_; lean_object* v_fst_773_; lean_object* v_snd_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_799_; 
v_head_771_ = lean_ctor_get(v_as_x27_767_, 0);
v_tail_772_ = lean_ctor_get(v_as_x27_767_, 1);
v_fst_773_ = lean_ctor_get(v_b_768_, 0);
v_snd_774_ = lean_ctor_get(v_b_768_, 1);
v_isSharedCheck_799_ = !lean_is_exclusive(v_b_768_);
if (v_isSharedCheck_799_ == 0)
{
v___x_776_ = v_b_768_;
v_isShared_777_ = v_isSharedCheck_799_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_snd_774_);
lean_inc(v_fst_773_);
lean_dec(v_b_768_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_799_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_778_; uint8_t v___x_779_; 
v___x_778_ = ((lean_object*)(l_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0));
v___x_779_ = lean_string_dec_eq(v_head_771_, v___x_778_);
if (v___x_779_ == 0)
{
lean_object* v___x_780_; 
lean_inc(v_head_771_);
v___x_780_ = l___private_LeanIR_0__setConfigOption(v_snd_774_, v_head_771_);
if (lean_obj_tag(v___x_780_) == 0)
{
lean_object* v_a_781_; lean_object* v___x_783_; 
v_a_781_ = lean_ctor_get(v___x_780_, 0);
lean_inc(v_a_781_);
lean_dec_ref_known(v___x_780_, 1);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 1, v_a_781_);
v___x_783_ = v___x_776_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_fst_773_);
lean_ctor_set(v_reuseFailAlloc_785_, 1, v_a_781_);
v___x_783_ = v_reuseFailAlloc_785_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
v_as_x27_767_ = v_tail_772_;
v_b_768_ = v___x_783_;
goto _start;
}
}
else
{
lean_object* v_a_786_; lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_793_; 
lean_del_object(v___x_776_);
lean_dec(v_fst_773_);
v_a_786_ = lean_ctor_get(v___x_780_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v___x_780_);
if (v_isSharedCheck_793_ == 0)
{
v___x_788_ = v___x_780_;
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
else
{
lean_inc(v_a_786_);
lean_dec(v___x_780_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
lean_object* v___x_791_; 
if (v_isShared_789_ == 0)
{
v___x_791_ = v___x_788_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_a_786_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
}
else
{
lean_object* v___x_794_; lean_object* v___x_796_; 
lean_dec(v_fst_773_);
v___x_794_ = lean_box(v___x_779_);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 0, v___x_794_);
v___x_796_ = v___x_776_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_798_; 
v_reuseFailAlloc_798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_798_, 0, v___x_794_);
lean_ctor_set(v_reuseFailAlloc_798_, 1, v_snd_774_);
v___x_796_ = v_reuseFailAlloc_798_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
v_as_x27_767_ = v_tail_772_;
v_b_768_ = v___x_796_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg___boxed(lean_object* v_as_x27_800_, lean_object* v_b_801_, lean_object* v___y_802_){
_start:
{
lean_object* v_res_803_; 
v_res_803_ = l_List_forIn_x27_loop___at___00main_spec__1___redArg(v_as_x27_800_, v_b_801_);
lean_dec(v_as_x27_800_);
return v_res_803_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18(lean_object* v_a_804_, lean_object* v_as_805_, size_t v_i_806_, size_t v_stop_807_, lean_object* v_b_808_){
_start:
{
lean_object* v___y_810_; uint8_t v___x_814_; 
v___x_814_ = lean_usize_dec_eq(v_i_806_, v_stop_807_);
if (v___x_814_ == 0)
{
lean_object* v___x_815_; lean_object* v_name_816_; uint8_t v___x_817_; 
v___x_815_ = lean_array_uget_borrowed(v_as_805_, v_i_806_);
v_name_816_ = lean_ctor_get(v___x_815_, 0);
lean_inc(v_name_816_);
lean_inc_ref(v_a_804_);
v___x_817_ = l_Lean_isExtern(v_a_804_, v_name_816_);
if (v___x_817_ == 0)
{
v___y_810_ = v_b_808_;
goto v___jp_809_;
}
else
{
lean_object* v___x_818_; 
lean_inc(v___x_815_);
v___x_818_ = lean_array_push(v_b_808_, v___x_815_);
v___y_810_ = v___x_818_;
goto v___jp_809_;
}
}
else
{
lean_dec_ref(v_a_804_);
return v_b_808_;
}
v___jp_809_:
{
size_t v___x_811_; size_t v___x_812_; 
v___x_811_ = ((size_t)1ULL);
v___x_812_ = lean_usize_add(v_i_806_, v___x_811_);
v_i_806_ = v___x_812_;
v_b_808_ = v___y_810_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18___boxed(lean_object* v_a_819_, lean_object* v_as_820_, lean_object* v_i_821_, lean_object* v_stop_822_, lean_object* v_b_823_){
_start:
{
size_t v_i_boxed_824_; size_t v_stop_boxed_825_; lean_object* v_res_826_; 
v_i_boxed_824_ = lean_unbox_usize(v_i_821_);
lean_dec(v_i_821_);
v_stop_boxed_825_ = lean_unbox_usize(v_stop_822_);
lean_dec(v_stop_822_);
v_res_826_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18(v_a_819_, v_as_820_, v_i_boxed_824_, v_stop_boxed_825_, v_b_823_);
lean_dec_ref(v_as_820_);
return v_res_826_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17___lam__0(lean_object* v_addEntryFn_827_, lean_object* v___x_828_, lean_object* v_s_829_){
_start:
{
lean_object* v_importedEntries_830_; lean_object* v_state_831_; lean_object* v___x_833_; uint8_t v_isShared_834_; uint8_t v_isSharedCheck_839_; 
v_importedEntries_830_ = lean_ctor_get(v_s_829_, 0);
v_state_831_ = lean_ctor_get(v_s_829_, 1);
v_isSharedCheck_839_ = !lean_is_exclusive(v_s_829_);
if (v_isSharedCheck_839_ == 0)
{
v___x_833_ = v_s_829_;
v_isShared_834_ = v_isSharedCheck_839_;
goto v_resetjp_832_;
}
else
{
lean_inc(v_state_831_);
lean_inc(v_importedEntries_830_);
lean_dec(v_s_829_);
v___x_833_ = lean_box(0);
v_isShared_834_ = v_isSharedCheck_839_;
goto v_resetjp_832_;
}
v_resetjp_832_:
{
lean_object* v_state_835_; lean_object* v___x_837_; 
v_state_835_ = lean_apply_2(v_addEntryFn_827_, v_state_831_, v___x_828_);
if (v_isShared_834_ == 0)
{
lean_ctor_set(v___x_833_, 1, v_state_835_);
v___x_837_ = v___x_833_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v_importedEntries_830_);
lean_ctor_set(v_reuseFailAlloc_838_, 1, v_state_835_);
v___x_837_ = v_reuseFailAlloc_838_;
goto v_reusejp_836_;
}
v_reusejp_836_:
{
return v___x_837_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17(lean_object* v_as_840_, size_t v_i_841_, size_t v_stop_842_, lean_object* v_b_843_){
_start:
{
lean_object* v___y_845_; uint8_t v___x_849_; 
v___x_849_ = lean_usize_dec_eq(v_i_841_, v_stop_842_);
if (v___x_849_ == 0)
{
lean_object* v___x_850_; lean_object* v_toEnvExtension_851_; lean_object* v_addEntryFn_852_; lean_object* v_asyncMode_853_; uint8_t v_logWrites_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___f_857_; uint8_t v___x_858_; 
v___x_850_ = l_Lean_Compiler_LCNF_impureSigExt;
v_toEnvExtension_851_ = lean_ctor_get(v___x_850_, 0);
v_addEntryFn_852_ = lean_ctor_get(v___x_850_, 3);
v_asyncMode_853_ = lean_ctor_get(v_toEnvExtension_851_, 2);
v_logWrites_854_ = lean_ctor_get_uint8(v_toEnvExtension_851_, sizeof(void*)*6);
v___x_855_ = lean_box(0);
v___x_856_ = lean_array_uget_borrowed(v_as_840_, v_i_841_);
lean_inc(v___x_856_);
lean_inc(v_addEntryFn_852_);
v___f_857_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17___lam__0), 3, 2);
lean_closure_set(v___f_857_, 0, v_addEntryFn_852_);
lean_closure_set(v___f_857_, 1, v___x_856_);
v___x_858_ = 1;
if (v_logWrites_854_ == 0)
{
lean_object* v___x_859_; 
lean_inc_ref(v_toEnvExtension_851_);
v___x_859_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(v_toEnvExtension_851_, v_b_843_, v___f_857_, v_asyncMode_853_, v___x_855_, v___x_858_);
v___y_845_ = v___x_859_;
goto v___jp_844_;
}
else
{
lean_object* v___x_860_; lean_object* v___x_861_; 
lean_inc_ref_n(v_toEnvExtension_851_, 2);
v___x_860_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite___redArg(v_toEnvExtension_851_, v_b_843_);
lean_dec_ref(v_b_843_);
v___x_861_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(v_toEnvExtension_851_, v___x_860_, v___f_857_, v_asyncMode_853_, v___x_855_, v___x_858_);
v___y_845_ = v___x_861_;
goto v___jp_844_;
}
}
else
{
return v_b_843_;
}
v___jp_844_:
{
size_t v___x_846_; size_t v___x_847_; 
v___x_846_ = ((size_t)1ULL);
v___x_847_ = lean_usize_add(v_i_841_, v___x_846_);
v_i_841_ = v___x_847_;
v_b_843_ = v___y_845_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17___boxed(lean_object* v_as_862_, lean_object* v_i_863_, lean_object* v_stop_864_, lean_object* v_b_865_){
_start:
{
size_t v_i_boxed_866_; size_t v_stop_boxed_867_; lean_object* v_res_868_; 
v_i_boxed_866_ = lean_unbox_usize(v_i_863_);
lean_dec(v_i_863_);
v_stop_boxed_867_ = lean_unbox_usize(v_stop_864_);
lean_dec(v_stop_864_);
v_res_868_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17(v_as_862_, v_i_boxed_866_, v_stop_boxed_867_, v_b_865_);
lean_dec_ref(v_as_862_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15(lean_object* v___y_870_, lean_object* v_as_871_, size_t v_i_872_, size_t v_stop_873_, lean_object* v_b_874_){
_start:
{
lean_object* v___y_876_; uint8_t v___x_880_; 
v___x_880_ = lean_usize_dec_eq(v_i_872_, v_stop_873_);
if (v___x_880_ == 0)
{
lean_object* v_fst_881_; lean_object* v_snd_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___y_886_; 
v_fst_881_ = lean_ctor_get(v_b_874_, 0);
v_snd_882_ = lean_ctor_get(v_b_874_, 1);
v___x_883_ = lean_array_uget_borrowed(v_as_871_, v_i_872_);
v___x_884_ = l_Lean_IR_Decl_name(v___x_883_);
if (lean_obj_tag(v___x_884_) == 1)
{
lean_object* v_pre_899_; lean_object* v_str_900_; lean_object* v___x_901_; uint8_t v___x_902_; 
v_pre_899_ = lean_ctor_get(v___x_884_, 0);
v_str_900_ = lean_ctor_get(v___x_884_, 1);
v___x_901_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15___closed__0));
v___x_902_ = lean_string_dec_eq(v_str_900_, v___x_901_);
if (v___x_902_ == 0)
{
lean_inc_ref(v___x_884_);
v___y_886_ = v___x_884_;
goto v___jp_885_;
}
else
{
lean_inc(v_pre_899_);
v___y_886_ = v_pre_899_;
goto v___jp_885_;
}
}
else
{
lean_inc(v___x_884_);
v___y_886_ = v___x_884_;
goto v___jp_885_;
}
v___jp_885_:
{
uint8_t v___x_887_; 
lean_inc_ref(v___y_870_);
v___x_887_ = l_Lean_isExtern(v___y_870_, v___y_886_);
if (v___x_887_ == 0)
{
lean_dec(v___x_884_);
v___y_876_ = v_b_874_;
goto v___jp_875_;
}
else
{
lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_896_; 
lean_inc(v_snd_882_);
lean_inc(v_fst_881_);
v_isSharedCheck_896_ = !lean_is_exclusive(v_b_874_);
if (v_isSharedCheck_896_ == 0)
{
lean_object* v_unused_897_; lean_object* v_unused_898_; 
v_unused_897_ = lean_ctor_get(v_b_874_, 1);
lean_dec(v_unused_897_);
v_unused_898_ = lean_ctor_get(v_b_874_, 0);
lean_dec(v_unused_898_);
v___x_889_ = v_b_874_;
v_isShared_890_ = v_isSharedCheck_896_;
goto v_resetjp_888_;
}
else
{
lean_dec(v_b_874_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_896_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_894_; 
lean_inc_n(v___x_883_, 2);
v___x_891_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_891_, 0, v___x_883_);
lean_ctor_set(v___x_891_, 1, v_fst_881_);
v___x_892_ = l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_initFn_00___x40_Lean_Compiler_CSimpAttr_309491121____hygCtx___hyg_2__spec__0_spec__0___redArg(v_snd_882_, v___x_884_, v___x_883_);
if (v_isShared_890_ == 0)
{
lean_ctor_set(v___x_889_, 1, v___x_892_);
lean_ctor_set(v___x_889_, 0, v___x_891_);
v___x_894_ = v___x_889_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v___x_891_);
lean_ctor_set(v_reuseFailAlloc_895_, 1, v___x_892_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
v___y_876_ = v___x_894_;
goto v___jp_875_;
}
}
}
}
}
else
{
lean_dec_ref(v___y_870_);
return v_b_874_;
}
v___jp_875_:
{
size_t v___x_877_; size_t v___x_878_; 
v___x_877_ = ((size_t)1ULL);
v___x_878_ = lean_usize_add(v_i_872_, v___x_877_);
v_i_872_ = v___x_878_;
v_b_874_ = v___y_876_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15___boxed(lean_object* v___y_903_, lean_object* v_as_904_, lean_object* v_i_905_, lean_object* v_stop_906_, lean_object* v_b_907_){
_start:
{
size_t v_i_boxed_908_; size_t v_stop_boxed_909_; lean_object* v_res_910_; 
v_i_boxed_908_ = lean_unbox_usize(v_i_905_);
lean_dec(v_i_905_);
v_stop_boxed_909_ = lean_unbox_usize(v_stop_906_);
lean_dec(v_stop_906_);
v_res_910_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15(v___y_903_, v_as_904_, v_i_boxed_908_, v_stop_boxed_909_, v_b_907_);
lean_dec_ref(v_as_904_);
return v_res_910_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27(lean_object* v_as_914_, size_t v_sz_915_, size_t v_i_916_, lean_object* v_b_917_){
_start:
{
uint8_t v___x_919_; 
v___x_919_ = lean_usize_dec_lt(v_i_916_, v_sz_915_);
if (v___x_919_ == 0)
{
lean_object* v___x_920_; 
v___x_920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_920_, 0, v_b_917_);
return v___x_920_;
}
else
{
uint8_t v___x_921_; lean_object* v_a_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
lean_dec_ref(v_b_917_);
v___x_921_ = 0;
v_a_922_ = lean_array_uget_borrowed(v_as_914_, v_i_916_);
lean_inc(v_a_922_);
v___x_923_ = l_Lean_Message_toString(v_a_922_, v___x_921_);
v___x_924_ = l_IO_eprintln___at___00main_spec__6(v___x_923_);
if (lean_obj_tag(v___x_924_) == 0)
{
lean_object* v___x_925_; size_t v___x_926_; size_t v___x_927_; 
lean_dec_ref_known(v___x_924_, 1);
v___x_925_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___closed__0));
v___x_926_ = ((size_t)1ULL);
v___x_927_ = lean_usize_add(v_i_916_, v___x_926_);
v_i_916_ = v___x_927_;
v_b_917_ = v___x_925_;
goto _start;
}
else
{
lean_object* v_a_929_; lean_object* v___x_931_; uint8_t v_isShared_932_; uint8_t v_isSharedCheck_936_; 
v_a_929_ = lean_ctor_get(v___x_924_, 0);
v_isSharedCheck_936_ = !lean_is_exclusive(v___x_924_);
if (v_isSharedCheck_936_ == 0)
{
v___x_931_ = v___x_924_;
v_isShared_932_ = v_isSharedCheck_936_;
goto v_resetjp_930_;
}
else
{
lean_inc(v_a_929_);
lean_dec(v___x_924_);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___boxed(lean_object* v_as_937_, lean_object* v_sz_938_, lean_object* v_i_939_, lean_object* v_b_940_, lean_object* v___y_941_){
_start:
{
size_t v_sz_boxed_942_; size_t v_i_boxed_943_; lean_object* v_res_944_; 
v_sz_boxed_942_ = lean_unbox_usize(v_sz_938_);
lean_dec(v_sz_938_);
v_i_boxed_943_ = lean_unbox_usize(v_i_939_);
lean_dec(v_i_939_);
v_res_944_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27(v_as_937_, v_sz_boxed_942_, v_i_boxed_943_, v_b_940_);
lean_dec_ref(v_as_937_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13(lean_object* v_as_945_, size_t v_sz_946_, size_t v_i_947_, lean_object* v_b_948_){
_start:
{
uint8_t v___x_950_; 
v___x_950_ = lean_usize_dec_lt(v_i_947_, v_sz_946_);
if (v___x_950_ == 0)
{
lean_object* v___x_951_; 
v___x_951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_951_, 0, v_b_948_);
return v___x_951_;
}
else
{
uint8_t v___x_952_; lean_object* v_a_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
lean_dec_ref(v_b_948_);
v___x_952_ = 0;
v_a_953_ = lean_array_uget_borrowed(v_as_945_, v_i_947_);
lean_inc(v_a_953_);
v___x_954_ = l_Lean_Message_toString(v_a_953_, v___x_952_);
v___x_955_ = l_IO_eprintln___at___00main_spec__6(v___x_954_);
if (lean_obj_tag(v___x_955_) == 0)
{
lean_object* v___x_956_; size_t v___x_957_; size_t v___x_958_; lean_object* v___x_959_; 
lean_dec_ref_known(v___x_955_, 1);
v___x_956_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___closed__0));
v___x_957_ = ((size_t)1ULL);
v___x_958_ = lean_usize_add(v_i_947_, v___x_957_);
v___x_959_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27(v_as_945_, v_sz_946_, v___x_958_, v___x_956_);
return v___x_959_;
}
else
{
lean_object* v_a_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_967_; 
v_a_960_ = lean_ctor_get(v___x_955_, 0);
v_isSharedCheck_967_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_967_ == 0)
{
v___x_962_ = v___x_955_;
v_isShared_963_ = v_isSharedCheck_967_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_a_960_);
lean_dec(v___x_955_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_967_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_965_; 
if (v_isShared_963_ == 0)
{
v___x_965_ = v___x_962_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v_a_960_);
v___x_965_ = v_reuseFailAlloc_966_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
return v___x_965_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13___boxed(lean_object* v_as_968_, lean_object* v_sz_969_, lean_object* v_i_970_, lean_object* v_b_971_, lean_object* v___y_972_){
_start:
{
size_t v_sz_boxed_973_; size_t v_i_boxed_974_; lean_object* v_res_975_; 
v_sz_boxed_973_ = lean_unbox_usize(v_sz_969_);
lean_dec(v_sz_969_);
v_i_boxed_974_ = lean_unbox_usize(v_i_970_);
lean_dec(v_i_970_);
v_res_975_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13(v_as_968_, v_sz_boxed_973_, v_i_boxed_974_, v_b_971_);
lean_dec_ref(v_as_968_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10(lean_object* v_init_976_, lean_object* v_n_977_, lean_object* v_b_978_){
_start:
{
if (lean_obj_tag(v_n_977_) == 0)
{
lean_object* v_cs_980_; lean_object* v___x_981_; lean_object* v___x_982_; size_t v_sz_983_; size_t v___x_984_; lean_object* v___x_985_; 
v_cs_980_ = lean_ctor_get(v_n_977_, 0);
v___x_981_ = lean_box(0);
v___x_982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_982_, 0, v___x_981_);
lean_ctor_set(v___x_982_, 1, v_b_978_);
v_sz_983_ = lean_array_size(v_cs_980_);
v___x_984_ = ((size_t)0ULL);
v___x_985_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__12(v_init_976_, v_cs_980_, v_sz_983_, v___x_984_, v___x_982_);
if (lean_obj_tag(v___x_985_) == 0)
{
lean_object* v_a_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_1000_; 
v_a_986_ = lean_ctor_get(v___x_985_, 0);
v_isSharedCheck_1000_ = !lean_is_exclusive(v___x_985_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_988_ = v___x_985_;
v_isShared_989_ = v_isSharedCheck_1000_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_a_986_);
lean_dec(v___x_985_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_1000_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v_fst_990_; 
v_fst_990_ = lean_ctor_get(v_a_986_, 0);
if (lean_obj_tag(v_fst_990_) == 0)
{
lean_object* v_snd_991_; lean_object* v___x_992_; lean_object* v___x_994_; 
v_snd_991_ = lean_ctor_get(v_a_986_, 1);
lean_inc(v_snd_991_);
lean_dec(v_a_986_);
v___x_992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_992_, 0, v_snd_991_);
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 0, v___x_992_);
v___x_994_ = v___x_988_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v___x_992_);
v___x_994_ = v_reuseFailAlloc_995_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
return v___x_994_;
}
}
else
{
lean_object* v_val_996_; lean_object* v___x_998_; 
lean_inc_ref(v_fst_990_);
lean_dec(v_a_986_);
v_val_996_ = lean_ctor_get(v_fst_990_, 0);
lean_inc(v_val_996_);
lean_dec_ref_known(v_fst_990_, 1);
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 0, v_val_996_);
v___x_998_ = v___x_988_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v_val_996_);
v___x_998_ = v_reuseFailAlloc_999_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
return v___x_998_;
}
}
}
}
else
{
lean_object* v_a_1001_; lean_object* v___x_1003_; uint8_t v_isShared_1004_; uint8_t v_isSharedCheck_1008_; 
v_a_1001_ = lean_ctor_get(v___x_985_, 0);
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_985_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_1003_ = v___x_985_;
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
else
{
lean_inc(v_a_1001_);
lean_dec(v___x_985_);
v___x_1003_ = lean_box(0);
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
v_resetjp_1002_:
{
lean_object* v___x_1006_; 
if (v_isShared_1004_ == 0)
{
v___x_1006_ = v___x_1003_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_a_1001_);
v___x_1006_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
return v___x_1006_;
}
}
}
}
else
{
lean_object* v_vs_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; size_t v_sz_1012_; size_t v___x_1013_; lean_object* v___x_1014_; 
v_vs_1009_ = lean_ctor_get(v_n_977_, 0);
v___x_1010_ = lean_box(0);
v___x_1011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1010_);
lean_ctor_set(v___x_1011_, 1, v_b_978_);
v_sz_1012_ = lean_array_size(v_vs_1009_);
v___x_1013_ = ((size_t)0ULL);
v___x_1014_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13(v_vs_1009_, v_sz_1012_, v___x_1013_, v___x_1011_);
if (lean_obj_tag(v___x_1014_) == 0)
{
lean_object* v_a_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1029_; 
v_a_1015_ = lean_ctor_get(v___x_1014_, 0);
v_isSharedCheck_1029_ = !lean_is_exclusive(v___x_1014_);
if (v_isSharedCheck_1029_ == 0)
{
v___x_1017_ = v___x_1014_;
v_isShared_1018_ = v_isSharedCheck_1029_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_a_1015_);
lean_dec(v___x_1014_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1029_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
lean_object* v_fst_1019_; 
v_fst_1019_ = lean_ctor_get(v_a_1015_, 0);
if (lean_obj_tag(v_fst_1019_) == 0)
{
lean_object* v_snd_1020_; lean_object* v___x_1021_; lean_object* v___x_1023_; 
v_snd_1020_ = lean_ctor_get(v_a_1015_, 1);
lean_inc(v_snd_1020_);
lean_dec(v_a_1015_);
v___x_1021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1021_, 0, v_snd_1020_);
if (v_isShared_1018_ == 0)
{
lean_ctor_set(v___x_1017_, 0, v___x_1021_);
v___x_1023_ = v___x_1017_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v___x_1021_);
v___x_1023_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
return v___x_1023_;
}
}
else
{
lean_object* v_val_1025_; lean_object* v___x_1027_; 
lean_inc_ref(v_fst_1019_);
lean_dec(v_a_1015_);
v_val_1025_ = lean_ctor_get(v_fst_1019_, 0);
lean_inc(v_val_1025_);
lean_dec_ref_known(v_fst_1019_, 1);
if (v_isShared_1018_ == 0)
{
lean_ctor_set(v___x_1017_, 0, v_val_1025_);
v___x_1027_ = v___x_1017_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v_val_1025_);
v___x_1027_ = v_reuseFailAlloc_1028_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
return v___x_1027_;
}
}
}
}
else
{
lean_object* v_a_1030_; lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1037_; 
v_a_1030_ = lean_ctor_get(v___x_1014_, 0);
v_isSharedCheck_1037_ = !lean_is_exclusive(v___x_1014_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1032_ = v___x_1014_;
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
else
{
lean_inc(v_a_1030_);
lean_dec(v___x_1014_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
lean_object* v___x_1035_; 
if (v_isShared_1033_ == 0)
{
v___x_1035_ = v___x_1032_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v_a_1030_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__12(lean_object* v_init_1038_, lean_object* v_as_1039_, size_t v_sz_1040_, size_t v_i_1041_, lean_object* v_b_1042_){
_start:
{
uint8_t v___x_1044_; 
v___x_1044_ = lean_usize_dec_lt(v_i_1041_, v_sz_1040_);
if (v___x_1044_ == 0)
{
lean_object* v___x_1045_; 
v___x_1045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1045_, 0, v_b_1042_);
return v___x_1045_;
}
else
{
lean_object* v_snd_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1080_; 
v_snd_1046_ = lean_ctor_get(v_b_1042_, 1);
v_isSharedCheck_1080_ = !lean_is_exclusive(v_b_1042_);
if (v_isSharedCheck_1080_ == 0)
{
lean_object* v_unused_1081_; 
v_unused_1081_ = lean_ctor_get(v_b_1042_, 0);
lean_dec(v_unused_1081_);
v___x_1048_ = v_b_1042_;
v_isShared_1049_ = v_isSharedCheck_1080_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_snd_1046_);
lean_dec(v_b_1042_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1080_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v___x_1050_; lean_object* v_a_1051_; lean_object* v___x_1052_; 
v___x_1050_ = lean_box(0);
v_a_1051_ = lean_array_uget_borrowed(v_as_1039_, v_i_1041_);
lean_inc(v_snd_1046_);
v___x_1052_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10(v_init_1038_, v_a_1051_, v_snd_1046_);
if (lean_obj_tag(v___x_1052_) == 0)
{
lean_object* v_a_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1071_; 
v_a_1053_ = lean_ctor_get(v___x_1052_, 0);
v_isSharedCheck_1071_ = !lean_is_exclusive(v___x_1052_);
if (v_isSharedCheck_1071_ == 0)
{
v___x_1055_ = v___x_1052_;
v_isShared_1056_ = v_isSharedCheck_1071_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_a_1053_);
lean_dec(v___x_1052_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1071_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
if (lean_obj_tag(v_a_1053_) == 0)
{
lean_object* v___x_1057_; lean_object* v___x_1059_; 
v___x_1057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1057_, 0, v_a_1053_);
if (v_isShared_1049_ == 0)
{
lean_ctor_set(v___x_1048_, 0, v___x_1057_);
v___x_1059_ = v___x_1048_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v___x_1057_);
lean_ctor_set(v_reuseFailAlloc_1063_, 1, v_snd_1046_);
v___x_1059_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
lean_object* v___x_1061_; 
if (v_isShared_1056_ == 0)
{
lean_ctor_set(v___x_1055_, 0, v___x_1059_);
v___x_1061_ = v___x_1055_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v___x_1059_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
return v___x_1061_;
}
}
}
else
{
lean_object* v_a_1064_; lean_object* v___x_1066_; 
lean_del_object(v___x_1055_);
lean_dec(v_snd_1046_);
v_a_1064_ = lean_ctor_get(v_a_1053_, 0);
lean_inc(v_a_1064_);
lean_dec_ref_known(v_a_1053_, 1);
if (v_isShared_1049_ == 0)
{
lean_ctor_set(v___x_1048_, 1, v_a_1064_);
lean_ctor_set(v___x_1048_, 0, v___x_1050_);
v___x_1066_ = v___x_1048_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v___x_1050_);
lean_ctor_set(v_reuseFailAlloc_1070_, 1, v_a_1064_);
v___x_1066_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
size_t v___x_1067_; size_t v___x_1068_; 
v___x_1067_ = ((size_t)1ULL);
v___x_1068_ = lean_usize_add(v_i_1041_, v___x_1067_);
v_i_1041_ = v___x_1068_;
v_b_1042_ = v___x_1066_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1079_; 
lean_del_object(v___x_1048_);
lean_dec(v_snd_1046_);
v_a_1072_ = lean_ctor_get(v___x_1052_, 0);
v_isSharedCheck_1079_ = !lean_is_exclusive(v___x_1052_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1074_ = v___x_1052_;
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_a_1072_);
lean_dec(v___x_1052_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v___x_1077_; 
if (v_isShared_1075_ == 0)
{
v___x_1077_ = v___x_1074_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v_a_1072_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__12___boxed(lean_object* v_init_1082_, lean_object* v_as_1083_, lean_object* v_sz_1084_, lean_object* v_i_1085_, lean_object* v_b_1086_, lean_object* v___y_1087_){
_start:
{
size_t v_sz_boxed_1088_; size_t v_i_boxed_1089_; lean_object* v_res_1090_; 
v_sz_boxed_1088_ = lean_unbox_usize(v_sz_1084_);
lean_dec(v_sz_1084_);
v_i_boxed_1089_ = lean_unbox_usize(v_i_1085_);
lean_dec(v_i_1085_);
v_res_1090_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__12(v_init_1082_, v_as_1083_, v_sz_boxed_1088_, v_i_boxed_1089_, v_b_1086_);
lean_dec_ref(v_as_1083_);
return v_res_1090_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10___boxed(lean_object* v_init_1091_, lean_object* v_n_1092_, lean_object* v_b_1093_, lean_object* v___y_1094_){
_start:
{
lean_object* v_res_1095_; 
v_res_1095_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10(v_init_1091_, v_n_1092_, v_b_1093_);
lean_dec_ref(v_n_1092_);
return v_res_1095_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15(lean_object* v_as_1099_, size_t v_sz_1100_, size_t v_i_1101_, lean_object* v_b_1102_){
_start:
{
uint8_t v___x_1104_; 
v___x_1104_ = lean_usize_dec_lt(v_i_1101_, v_sz_1100_);
if (v___x_1104_ == 0)
{
lean_object* v___x_1105_; 
v___x_1105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1105_, 0, v_b_1102_);
return v___x_1105_;
}
else
{
uint8_t v___x_1106_; lean_object* v_a_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; 
lean_dec_ref(v_b_1102_);
v___x_1106_ = 0;
v_a_1107_ = lean_array_uget_borrowed(v_as_1099_, v_i_1101_);
lean_inc(v_a_1107_);
v___x_1108_ = l_Lean_Message_toString(v_a_1107_, v___x_1106_);
v___x_1109_ = l_IO_eprintln___at___00main_spec__6(v___x_1108_);
if (lean_obj_tag(v___x_1109_) == 0)
{
lean_object* v___x_1110_; size_t v___x_1111_; size_t v___x_1112_; 
lean_dec_ref_known(v___x_1109_, 1);
v___x_1110_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___closed__0));
v___x_1111_ = ((size_t)1ULL);
v___x_1112_ = lean_usize_add(v_i_1101_, v___x_1111_);
v_i_1101_ = v___x_1112_;
v_b_1102_ = v___x_1110_;
goto _start;
}
else
{
lean_object* v_a_1114_; lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1121_; 
v_a_1114_ = lean_ctor_get(v___x_1109_, 0);
v_isSharedCheck_1121_ = !lean_is_exclusive(v___x_1109_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1116_ = v___x_1109_;
v_isShared_1117_ = v_isSharedCheck_1121_;
goto v_resetjp_1115_;
}
else
{
lean_inc(v_a_1114_);
lean_dec(v___x_1109_);
v___x_1116_ = lean_box(0);
v_isShared_1117_ = v_isSharedCheck_1121_;
goto v_resetjp_1115_;
}
v_resetjp_1115_:
{
lean_object* v___x_1119_; 
if (v_isShared_1117_ == 0)
{
v___x_1119_ = v___x_1116_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v_a_1114_);
v___x_1119_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
return v___x_1119_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___boxed(lean_object* v_as_1122_, lean_object* v_sz_1123_, lean_object* v_i_1124_, lean_object* v_b_1125_, lean_object* v___y_1126_){
_start:
{
size_t v_sz_boxed_1127_; size_t v_i_boxed_1128_; lean_object* v_res_1129_; 
v_sz_boxed_1127_ = lean_unbox_usize(v_sz_1123_);
lean_dec(v_sz_1123_);
v_i_boxed_1128_ = lean_unbox_usize(v_i_1124_);
lean_dec(v_i_1124_);
v_res_1129_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15(v_as_1122_, v_sz_boxed_1127_, v_i_boxed_1128_, v_b_1125_);
lean_dec_ref(v_as_1122_);
return v_res_1129_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11(lean_object* v_as_1130_, size_t v_sz_1131_, size_t v_i_1132_, lean_object* v_b_1133_){
_start:
{
uint8_t v___x_1135_; 
v___x_1135_ = lean_usize_dec_lt(v_i_1132_, v_sz_1131_);
if (v___x_1135_ == 0)
{
lean_object* v___x_1136_; 
v___x_1136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1136_, 0, v_b_1133_);
return v___x_1136_;
}
else
{
uint8_t v___x_1137_; lean_object* v_a_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; 
lean_dec_ref(v_b_1133_);
v___x_1137_ = 0;
v_a_1138_ = lean_array_uget_borrowed(v_as_1130_, v_i_1132_);
lean_inc(v_a_1138_);
v___x_1139_ = l_Lean_Message_toString(v_a_1138_, v___x_1137_);
v___x_1140_ = l_IO_eprintln___at___00main_spec__6(v___x_1139_);
if (lean_obj_tag(v___x_1140_) == 0)
{
lean_object* v___x_1141_; size_t v___x_1142_; size_t v___x_1143_; lean_object* v___x_1144_; 
lean_dec_ref_known(v___x_1140_, 1);
v___x_1141_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___closed__0));
v___x_1142_ = ((size_t)1ULL);
v___x_1143_ = lean_usize_add(v_i_1132_, v___x_1142_);
v___x_1144_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15(v_as_1130_, v_sz_1131_, v___x_1143_, v___x_1141_);
return v___x_1144_;
}
else
{
lean_object* v_a_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1152_; 
v_a_1145_ = lean_ctor_get(v___x_1140_, 0);
v_isSharedCheck_1152_ = !lean_is_exclusive(v___x_1140_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1147_ = v___x_1140_;
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_a_1145_);
lean_dec(v___x_1140_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v___x_1150_; 
if (v_isShared_1148_ == 0)
{
v___x_1150_ = v___x_1147_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v_a_1145_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11___boxed(lean_object* v_as_1153_, lean_object* v_sz_1154_, lean_object* v_i_1155_, lean_object* v_b_1156_, lean_object* v___y_1157_){
_start:
{
size_t v_sz_boxed_1158_; size_t v_i_boxed_1159_; lean_object* v_res_1160_; 
v_sz_boxed_1158_ = lean_unbox_usize(v_sz_1154_);
lean_dec(v_sz_1154_);
v_i_boxed_1159_ = lean_unbox_usize(v_i_1155_);
lean_dec(v_i_1155_);
v_res_1160_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11(v_as_1153_, v_sz_boxed_1158_, v_i_boxed_1159_, v_b_1156_);
lean_dec_ref(v_as_1153_);
return v_res_1160_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__7(lean_object* v_t_1161_, lean_object* v_init_1162_){
_start:
{
lean_object* v_root_1164_; lean_object* v_tail_1165_; lean_object* v___x_1166_; 
v_root_1164_ = lean_ctor_get(v_t_1161_, 0);
v_tail_1165_ = lean_ctor_get(v_t_1161_, 1);
v___x_1166_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10(v_init_1162_, v_root_1164_, v_init_1162_);
if (lean_obj_tag(v___x_1166_) == 0)
{
lean_object* v_a_1167_; lean_object* v___x_1169_; uint8_t v_isShared_1170_; uint8_t v_isSharedCheck_1203_; 
v_a_1167_ = lean_ctor_get(v___x_1166_, 0);
v_isSharedCheck_1203_ = !lean_is_exclusive(v___x_1166_);
if (v_isSharedCheck_1203_ == 0)
{
v___x_1169_ = v___x_1166_;
v_isShared_1170_ = v_isSharedCheck_1203_;
goto v_resetjp_1168_;
}
else
{
lean_inc(v_a_1167_);
lean_dec(v___x_1166_);
v___x_1169_ = lean_box(0);
v_isShared_1170_ = v_isSharedCheck_1203_;
goto v_resetjp_1168_;
}
v_resetjp_1168_:
{
if (lean_obj_tag(v_a_1167_) == 0)
{
lean_object* v_a_1171_; lean_object* v___x_1173_; 
v_a_1171_ = lean_ctor_get(v_a_1167_, 0);
lean_inc(v_a_1171_);
lean_dec_ref_known(v_a_1167_, 1);
if (v_isShared_1170_ == 0)
{
lean_ctor_set(v___x_1169_, 0, v_a_1171_);
v___x_1173_ = v___x_1169_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1174_; 
v_reuseFailAlloc_1174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1174_, 0, v_a_1171_);
v___x_1173_ = v_reuseFailAlloc_1174_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
return v___x_1173_;
}
}
else
{
lean_object* v_a_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; size_t v_sz_1178_; size_t v___x_1179_; lean_object* v___x_1180_; 
lean_del_object(v___x_1169_);
v_a_1175_ = lean_ctor_get(v_a_1167_, 0);
lean_inc(v_a_1175_);
lean_dec_ref_known(v_a_1167_, 1);
v___x_1176_ = lean_box(0);
v___x_1177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1176_);
lean_ctor_set(v___x_1177_, 1, v_a_1175_);
v_sz_1178_ = lean_array_size(v_tail_1165_);
v___x_1179_ = ((size_t)0ULL);
v___x_1180_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11(v_tail_1165_, v_sz_1178_, v___x_1179_, v___x_1177_);
if (lean_obj_tag(v___x_1180_) == 0)
{
lean_object* v_a_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1194_; 
v_a_1181_ = lean_ctor_get(v___x_1180_, 0);
v_isSharedCheck_1194_ = !lean_is_exclusive(v___x_1180_);
if (v_isSharedCheck_1194_ == 0)
{
v___x_1183_ = v___x_1180_;
v_isShared_1184_ = v_isSharedCheck_1194_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_a_1181_);
lean_dec(v___x_1180_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1194_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
lean_object* v_fst_1185_; 
v_fst_1185_ = lean_ctor_get(v_a_1181_, 0);
if (lean_obj_tag(v_fst_1185_) == 0)
{
lean_object* v_snd_1186_; lean_object* v___x_1188_; 
v_snd_1186_ = lean_ctor_get(v_a_1181_, 1);
lean_inc(v_snd_1186_);
lean_dec(v_a_1181_);
if (v_isShared_1184_ == 0)
{
lean_ctor_set(v___x_1183_, 0, v_snd_1186_);
v___x_1188_ = v___x_1183_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v_snd_1186_);
v___x_1188_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
return v___x_1188_;
}
}
else
{
lean_object* v_val_1190_; lean_object* v___x_1192_; 
lean_inc_ref(v_fst_1185_);
lean_dec(v_a_1181_);
v_val_1190_ = lean_ctor_get(v_fst_1185_, 0);
lean_inc(v_val_1190_);
lean_dec_ref_known(v_fst_1185_, 1);
if (v_isShared_1184_ == 0)
{
lean_ctor_set(v___x_1183_, 0, v_val_1190_);
v___x_1192_ = v___x_1183_;
goto v_reusejp_1191_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v_val_1190_);
v___x_1192_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1191_;
}
v_reusejp_1191_:
{
return v___x_1192_;
}
}
}
}
else
{
lean_object* v_a_1195_; lean_object* v___x_1197_; uint8_t v_isShared_1198_; uint8_t v_isSharedCheck_1202_; 
v_a_1195_ = lean_ctor_get(v___x_1180_, 0);
v_isSharedCheck_1202_ = !lean_is_exclusive(v___x_1180_);
if (v_isSharedCheck_1202_ == 0)
{
v___x_1197_ = v___x_1180_;
v_isShared_1198_ = v_isSharedCheck_1202_;
goto v_resetjp_1196_;
}
else
{
lean_inc(v_a_1195_);
lean_dec(v___x_1180_);
v___x_1197_ = lean_box(0);
v_isShared_1198_ = v_isSharedCheck_1202_;
goto v_resetjp_1196_;
}
v_resetjp_1196_:
{
lean_object* v___x_1200_; 
if (v_isShared_1198_ == 0)
{
v___x_1200_ = v___x_1197_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v_a_1195_);
v___x_1200_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
return v___x_1200_;
}
}
}
}
}
}
else
{
lean_object* v_a_1204_; lean_object* v___x_1206_; uint8_t v_isShared_1207_; uint8_t v_isSharedCheck_1211_; 
v_a_1204_ = lean_ctor_get(v___x_1166_, 0);
v_isSharedCheck_1211_ = !lean_is_exclusive(v___x_1166_);
if (v_isSharedCheck_1211_ == 0)
{
v___x_1206_ = v___x_1166_;
v_isShared_1207_ = v_isSharedCheck_1211_;
goto v_resetjp_1205_;
}
else
{
lean_inc(v_a_1204_);
lean_dec(v___x_1166_);
v___x_1206_ = lean_box(0);
v_isShared_1207_ = v_isSharedCheck_1211_;
goto v_resetjp_1205_;
}
v_resetjp_1205_:
{
lean_object* v___x_1209_; 
if (v_isShared_1207_ == 0)
{
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
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__7___boxed(lean_object* v_t_1212_, lean_object* v_init_1213_, lean_object* v___y_1214_){
_start:
{
lean_object* v_res_1215_; 
v_res_1215_ = l_Lean_PersistentArray_forIn___at___00main_spec__7(v_t_1212_, v_init_1213_);
lean_dec_ref(v_t_1212_);
return v_res_1215_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0(uint8_t v_suppressElabErrors_1223_, lean_object* v_x_1224_){
_start:
{
if (lean_obj_tag(v_x_1224_) == 1)
{
lean_object* v_pre_1225_; 
v_pre_1225_ = lean_ctor_get(v_x_1224_, 0);
switch(lean_obj_tag(v_pre_1225_))
{
case 1:
{
lean_object* v_pre_1226_; 
v_pre_1226_ = lean_ctor_get(v_pre_1225_, 0);
switch(lean_obj_tag(v_pre_1226_))
{
case 0:
{
lean_object* v_str_1227_; lean_object* v_str_1228_; lean_object* v___x_1229_; uint8_t v___x_1230_; 
v_str_1227_ = lean_ctor_get(v_x_1224_, 1);
v_str_1228_ = lean_ctor_get(v_pre_1225_, 1);
v___x_1229_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__0));
v___x_1230_ = lean_string_dec_eq(v_str_1228_, v___x_1229_);
if (v___x_1230_ == 0)
{
lean_object* v___x_1231_; uint8_t v___x_1232_; 
v___x_1231_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__1));
v___x_1232_ = lean_string_dec_eq(v_str_1228_, v___x_1231_);
if (v___x_1232_ == 0)
{
return v___x_1232_;
}
else
{
lean_object* v___x_1233_; uint8_t v___x_1234_; 
v___x_1233_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__2));
v___x_1234_ = lean_string_dec_eq(v_str_1227_, v___x_1233_);
if (v___x_1234_ == 0)
{
return v___x_1234_;
}
else
{
return v_suppressElabErrors_1223_;
}
}
}
else
{
lean_object* v___x_1235_; uint8_t v___x_1236_; 
v___x_1235_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__3));
v___x_1236_ = lean_string_dec_eq(v_str_1227_, v___x_1235_);
if (v___x_1236_ == 0)
{
return v___x_1236_;
}
else
{
return v_suppressElabErrors_1223_;
}
}
}
case 1:
{
lean_object* v_pre_1237_; 
v_pre_1237_ = lean_ctor_get(v_pre_1226_, 0);
if (lean_obj_tag(v_pre_1237_) == 0)
{
lean_object* v_str_1238_; lean_object* v_str_1239_; lean_object* v_str_1240_; lean_object* v___x_1241_; uint8_t v___x_1242_; 
v_str_1238_ = lean_ctor_get(v_x_1224_, 1);
v_str_1239_ = lean_ctor_get(v_pre_1225_, 1);
v_str_1240_ = lean_ctor_get(v_pre_1226_, 1);
v___x_1241_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__4));
v___x_1242_ = lean_string_dec_eq(v_str_1240_, v___x_1241_);
if (v___x_1242_ == 0)
{
return v___x_1242_;
}
else
{
lean_object* v___x_1243_; uint8_t v___x_1244_; 
v___x_1243_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__5));
v___x_1244_ = lean_string_dec_eq(v_str_1239_, v___x_1243_);
if (v___x_1244_ == 0)
{
return v___x_1244_;
}
else
{
lean_object* v___x_1245_; uint8_t v___x_1246_; 
v___x_1245_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__6));
v___x_1246_ = lean_string_dec_eq(v_str_1238_, v___x_1245_);
if (v___x_1246_ == 0)
{
return v___x_1246_;
}
else
{
return v_suppressElabErrors_1223_;
}
}
}
}
else
{
uint8_t v___x_1247_; 
v___x_1247_ = 0;
return v___x_1247_;
}
}
default: 
{
uint8_t v___x_1248_; 
v___x_1248_ = 0;
return v___x_1248_;
}
}
}
case 0:
{
lean_object* v_str_1249_; lean_object* v___x_1250_; uint8_t v___x_1251_; 
v_str_1249_ = lean_ctor_get(v_x_1224_, 1);
v___x_1250_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0));
v___x_1251_ = lean_string_dec_eq(v_str_1249_, v___x_1250_);
if (v___x_1251_ == 0)
{
return v___x_1251_;
}
else
{
return v_suppressElabErrors_1223_;
}
}
default: 
{
uint8_t v___x_1252_; 
v___x_1252_ = 0;
return v___x_1252_;
}
}
}
else
{
uint8_t v___x_1253_; 
v___x_1253_ = 0;
return v___x_1253_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___boxed(lean_object* v_suppressElabErrors_1254_, lean_object* v_x_1255_){
_start:
{
uint8_t v_suppressElabErrors_boxed_1256_; uint8_t v_res_1257_; lean_object* v_r_1258_; 
v_suppressElabErrors_boxed_1256_ = lean_unbox(v_suppressElabErrors_1254_);
v_res_1257_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0(v_suppressElabErrors_boxed_1256_, v_x_1255_);
lean_dec(v_x_1255_);
v_r_1258_ = lean_box(v_res_1257_);
return v_r_1258_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__15(lean_object* v_opts_1259_, lean_object* v_opt_1260_){
_start:
{
lean_object* v_name_1261_; lean_object* v_defValue_1262_; lean_object* v_map_1263_; lean_object* v___x_1264_; 
v_name_1261_ = lean_ctor_get(v_opt_1260_, 0);
v_defValue_1262_ = lean_ctor_get(v_opt_1260_, 1);
v_map_1263_ = lean_ctor_get(v_opts_1259_, 0);
v___x_1264_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1263_, v_name_1261_);
if (lean_obj_tag(v___x_1264_) == 0)
{
uint8_t v___x_1265_; 
v___x_1265_ = lean_unbox(v_defValue_1262_);
return v___x_1265_;
}
else
{
lean_object* v_val_1266_; 
v_val_1266_ = lean_ctor_get(v___x_1264_, 0);
lean_inc(v_val_1266_);
lean_dec_ref_known(v___x_1264_, 1);
if (lean_obj_tag(v_val_1266_) == 1)
{
uint8_t v_v_1267_; 
v_v_1267_ = lean_ctor_get_uint8(v_val_1266_, 0);
lean_dec_ref_known(v_val_1266_, 0);
return v_v_1267_;
}
else
{
uint8_t v___x_1268_; 
lean_dec(v_val_1266_);
v___x_1268_ = lean_unbox(v_defValue_1262_);
return v___x_1268_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__15___boxed(lean_object* v_opts_1269_, lean_object* v_opt_1270_){
_start:
{
uint8_t v_res_1271_; lean_object* v_r_1272_; 
v_res_1271_ = l_Lean_Option_get___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__15(v_opts_1269_, v_opt_1270_);
lean_dec_ref(v_opt_1270_);
lean_dec_ref(v_opts_1269_);
v_r_1272_ = lean_box(v_res_1271_);
return v_r_1272_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44(lean_object* v_ref_1274_, lean_object* v_msgData_1275_, uint8_t v_severity_1276_, uint8_t v_isSilent_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_){
_start:
{
uint8_t v___y_1282_; lean_object* v___y_1283_; lean_object* v___y_1284_; lean_object* v___y_1285_; uint8_t v___y_1286_; lean_object* v___y_1287_; lean_object* v___y_1288_; lean_object* v_toCold_1289_; lean_object* v___y_1290_; lean_object* v___y_1319_; lean_object* v___y_1320_; uint8_t v___y_1321_; uint8_t v___y_1322_; lean_object* v___y_1323_; uint8_t v___y_1324_; lean_object* v___y_1325_; lean_object* v___y_1326_; lean_object* v___y_1346_; uint8_t v___y_1347_; lean_object* v___y_1348_; lean_object* v___y_1349_; uint8_t v___y_1350_; uint8_t v___y_1351_; lean_object* v___y_1352_; uint8_t v___y_1356_; uint8_t v___y_1357_; uint8_t v___x_1367_; uint8_t v___y_1369_; uint8_t v___x_1375_; 
v___x_1367_ = 2;
v___x_1375_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1276_, v___x_1367_);
if (v___x_1375_ == 0)
{
v___y_1369_ = v___x_1375_;
goto v___jp_1368_;
}
else
{
uint8_t v___x_1376_; 
lean_inc_ref(v_msgData_1275_);
v___x_1376_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1275_);
if (v___x_1376_ == 0)
{
v___y_1369_ = v___x_1376_;
goto v___jp_1368_;
}
else
{
lean_object* v___x_1377_; lean_object* v___x_1378_; 
lean_dec_ref(v_msgData_1275_);
v___x_1377_ = lean_box(0);
v___x_1378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1378_, 0, v___x_1377_);
return v___x_1378_;
}
}
v___jp_1281_:
{
lean_object* v_currNamespace_1291_; lean_object* v_openDecls_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v_env_1297_; lean_object* v_nextMacroScope_1298_; lean_object* v_ngen_1299_; lean_object* v_auxDeclNGen_1300_; lean_object* v_traceState_1301_; lean_object* v_cache_1302_; lean_object* v_recordedDeps_1303_; lean_object* v_messages_1304_; lean_object* v_infoState_1305_; lean_object* v_snapshotTasks_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1317_; 
v_currNamespace_1291_ = lean_ctor_get(v_toCold_1289_, 4);
v_openDecls_1292_ = lean_ctor_get(v_toCold_1289_, 5);
lean_inc(v_openDecls_1292_);
lean_inc(v_currNamespace_1291_);
v___x_1293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1293_, 0, v_currNamespace_1291_);
lean_ctor_set(v___x_1293_, 1, v_openDecls_1292_);
v___x_1294_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1294_, 0, v___x_1293_);
lean_ctor_set(v___x_1294_, 1, v___y_1283_);
lean_inc_ref(v___y_1288_);
lean_inc_ref(v___y_1285_);
v___x_1295_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1295_, 0, v___y_1285_);
lean_ctor_set(v___x_1295_, 1, v___y_1284_);
lean_ctor_set(v___x_1295_, 2, v___y_1287_);
lean_ctor_set(v___x_1295_, 3, v___y_1288_);
lean_ctor_set(v___x_1295_, 4, v___x_1294_);
lean_ctor_set_uint8(v___x_1295_, sizeof(void*)*5, v___y_1282_);
lean_ctor_set_uint8(v___x_1295_, sizeof(void*)*5 + 1, v___y_1286_);
lean_ctor_set_uint8(v___x_1295_, sizeof(void*)*5 + 2, v_isSilent_1277_);
v___x_1296_ = lean_st_ref_take(v___y_1290_);
v_env_1297_ = lean_ctor_get(v___x_1296_, 0);
v_nextMacroScope_1298_ = lean_ctor_get(v___x_1296_, 1);
v_ngen_1299_ = lean_ctor_get(v___x_1296_, 2);
v_auxDeclNGen_1300_ = lean_ctor_get(v___x_1296_, 3);
v_traceState_1301_ = lean_ctor_get(v___x_1296_, 4);
v_cache_1302_ = lean_ctor_get(v___x_1296_, 5);
v_recordedDeps_1303_ = lean_ctor_get(v___x_1296_, 6);
v_messages_1304_ = lean_ctor_get(v___x_1296_, 7);
v_infoState_1305_ = lean_ctor_get(v___x_1296_, 8);
v_snapshotTasks_1306_ = lean_ctor_get(v___x_1296_, 9);
v_isSharedCheck_1317_ = !lean_is_exclusive(v___x_1296_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1308_ = v___x_1296_;
v_isShared_1309_ = v_isSharedCheck_1317_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_snapshotTasks_1306_);
lean_inc(v_infoState_1305_);
lean_inc(v_messages_1304_);
lean_inc(v_recordedDeps_1303_);
lean_inc(v_cache_1302_);
lean_inc(v_traceState_1301_);
lean_inc(v_auxDeclNGen_1300_);
lean_inc(v_ngen_1299_);
lean_inc(v_nextMacroScope_1298_);
lean_inc(v_env_1297_);
lean_dec(v___x_1296_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1317_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1313_; 
v___x_1310_ = lean_box(0);
v___x_1311_ = l_Lean_MessageLog_add(v___x_1295_, v_messages_1304_);
if (v_isShared_1309_ == 0)
{
lean_ctor_set(v___x_1308_, 7, v___x_1311_);
v___x_1313_ = v___x_1308_;
goto v_reusejp_1312_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v_env_1297_);
lean_ctor_set(v_reuseFailAlloc_1316_, 1, v_nextMacroScope_1298_);
lean_ctor_set(v_reuseFailAlloc_1316_, 2, v_ngen_1299_);
lean_ctor_set(v_reuseFailAlloc_1316_, 3, v_auxDeclNGen_1300_);
lean_ctor_set(v_reuseFailAlloc_1316_, 4, v_traceState_1301_);
lean_ctor_set(v_reuseFailAlloc_1316_, 5, v_cache_1302_);
lean_ctor_set(v_reuseFailAlloc_1316_, 6, v_recordedDeps_1303_);
lean_ctor_set(v_reuseFailAlloc_1316_, 7, v___x_1311_);
lean_ctor_set(v_reuseFailAlloc_1316_, 8, v_infoState_1305_);
lean_ctor_set(v_reuseFailAlloc_1316_, 9, v_snapshotTasks_1306_);
v___x_1313_ = v_reuseFailAlloc_1316_;
goto v_reusejp_1312_;
}
v_reusejp_1312_:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1314_ = lean_st_ref_put(v___y_1290_, v___x_1313_);
v___x_1315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1310_);
return v___x_1315_;
}
}
}
v___jp_1318_:
{
lean_object* v_fileName_1327_; lean_object* v_fileMap_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v_a_1331_; lean_object* v___x_1333_; uint8_t v_isShared_1334_; uint8_t v_isSharedCheck_1344_; 
v_fileName_1327_ = lean_ctor_get(v___y_1325_, 0);
v_fileMap_1328_ = lean_ctor_get(v___y_1325_, 1);
v___x_1329_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1275_);
v___x_1330_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_isConstantReplacement_x3f_spec__0_spec__0_spec__1_spec__6_spec__10_spec__14_spec__16(v___x_1329_, v___y_1278_, v___y_1279_);
v_a_1331_ = lean_ctor_get(v___x_1330_, 0);
v_isSharedCheck_1344_ = !lean_is_exclusive(v___x_1330_);
if (v_isSharedCheck_1344_ == 0)
{
v___x_1333_ = v___x_1330_;
v_isShared_1334_ = v_isSharedCheck_1344_;
goto v_resetjp_1332_;
}
else
{
lean_inc(v_a_1331_);
lean_dec(v___x_1330_);
v___x_1333_ = lean_box(0);
v_isShared_1334_ = v_isSharedCheck_1344_;
goto v_resetjp_1332_;
}
v_resetjp_1332_:
{
lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; 
lean_inc_ref_n(v_fileMap_1328_, 2);
v___x_1335_ = l_Lean_FileMap_toPosition(v_fileMap_1328_, v___y_1323_);
lean_dec(v___y_1323_);
v___x_1336_ = l_Lean_FileMap_toPosition(v_fileMap_1328_, v___y_1326_);
lean_dec(v___y_1326_);
v___x_1337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1337_, 0, v___x_1336_);
v___x_1338_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___closed__0));
if (v___y_1324_ == 0)
{
lean_del_object(v___x_1333_);
lean_dec_ref(v___y_1319_);
v___y_1282_ = v___y_1321_;
v___y_1283_ = v_a_1331_;
v___y_1284_ = v___x_1335_;
v___y_1285_ = v_fileName_1327_;
v___y_1286_ = v___y_1322_;
v___y_1287_ = v___x_1337_;
v___y_1288_ = v___x_1338_;
v_toCold_1289_ = v___y_1320_;
v___y_1290_ = v___y_1279_;
goto v___jp_1281_;
}
else
{
uint8_t v___x_1339_; 
lean_inc(v_a_1331_);
v___x_1339_ = l_Lean_MessageData_hasTag(v___y_1319_, v_a_1331_);
if (v___x_1339_ == 0)
{
lean_object* v___x_1340_; lean_object* v___x_1342_; 
lean_dec_ref_known(v___x_1337_, 1);
lean_dec_ref(v___x_1335_);
lean_dec(v_a_1331_);
v___x_1340_ = lean_box(0);
if (v_isShared_1334_ == 0)
{
lean_ctor_set(v___x_1333_, 0, v___x_1340_);
v___x_1342_ = v___x_1333_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v___x_1340_);
v___x_1342_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
return v___x_1342_;
}
}
else
{
lean_del_object(v___x_1333_);
v___y_1282_ = v___y_1321_;
v___y_1283_ = v_a_1331_;
v___y_1284_ = v___x_1335_;
v___y_1285_ = v_fileName_1327_;
v___y_1286_ = v___y_1322_;
v___y_1287_ = v___x_1337_;
v___y_1288_ = v___x_1338_;
v_toCold_1289_ = v___y_1320_;
v___y_1290_ = v___y_1279_;
goto v___jp_1281_;
}
}
}
}
v___jp_1345_:
{
lean_object* v___x_1353_; 
v___x_1353_ = l_Lean_Syntax_getTailPos_x3f(v___y_1349_, v___y_1350_);
lean_dec(v___y_1349_);
if (lean_obj_tag(v___x_1353_) == 0)
{
lean_inc(v___y_1352_);
v___y_1319_ = v___y_1346_;
v___y_1320_ = v___y_1348_;
v___y_1321_ = v___y_1350_;
v___y_1322_ = v___y_1351_;
v___y_1323_ = v___y_1352_;
v___y_1324_ = v___y_1347_;
v___y_1325_ = v___y_1348_;
v___y_1326_ = v___y_1352_;
goto v___jp_1318_;
}
else
{
lean_object* v_val_1354_; 
v_val_1354_ = lean_ctor_get(v___x_1353_, 0);
lean_inc(v_val_1354_);
lean_dec_ref_known(v___x_1353_, 1);
v___y_1319_ = v___y_1346_;
v___y_1320_ = v___y_1348_;
v___y_1321_ = v___y_1350_;
v___y_1322_ = v___y_1351_;
v___y_1323_ = v___y_1352_;
v___y_1324_ = v___y_1347_;
v___y_1325_ = v___y_1348_;
v___y_1326_ = v_val_1354_;
goto v___jp_1318_;
}
}
v___jp_1355_:
{
lean_object* v_toCold_1358_; lean_object* v_ref_1359_; uint8_t v_suppressElabErrors_1360_; lean_object* v___x_1361_; lean_object* v___f_1362_; lean_object* v_ref_1363_; lean_object* v___x_1364_; 
v_toCold_1358_ = lean_ctor_get(v___y_1278_, 0);
v_ref_1359_ = lean_ctor_get(v___y_1278_, 2);
v_suppressElabErrors_1360_ = lean_ctor_get_uint8(v___y_1278_, sizeof(void*)*3 + 2);
v___x_1361_ = lean_box(v_suppressElabErrors_1360_);
v___f_1362_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1362_, 0, v___x_1361_);
v_ref_1363_ = l_Lean_replaceRef(v_ref_1274_, v_ref_1359_);
v___x_1364_ = l_Lean_Syntax_getPos_x3f(v_ref_1363_, v___y_1356_);
if (lean_obj_tag(v___x_1364_) == 0)
{
lean_object* v___x_1365_; 
v___x_1365_ = lean_unsigned_to_nat(0u);
v___y_1346_ = v___f_1362_;
v___y_1347_ = v_suppressElabErrors_1360_;
v___y_1348_ = v_toCold_1358_;
v___y_1349_ = v_ref_1363_;
v___y_1350_ = v___y_1356_;
v___y_1351_ = v___y_1357_;
v___y_1352_ = v___x_1365_;
goto v___jp_1345_;
}
else
{
lean_object* v_val_1366_; 
v_val_1366_ = lean_ctor_get(v___x_1364_, 0);
lean_inc(v_val_1366_);
lean_dec_ref_known(v___x_1364_, 1);
v___y_1346_ = v___f_1362_;
v___y_1347_ = v_suppressElabErrors_1360_;
v___y_1348_ = v_toCold_1358_;
v___y_1349_ = v_ref_1363_;
v___y_1350_ = v___y_1356_;
v___y_1351_ = v___y_1357_;
v___y_1352_ = v_val_1366_;
goto v___jp_1345_;
}
}
v___jp_1368_:
{
uint8_t v___x_1370_; uint8_t v___x_1371_; 
v___x_1370_ = 1;
v___x_1371_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1276_, v___x_1370_);
if (v___x_1371_ == 0)
{
v___y_1356_ = v___y_1369_;
v___y_1357_ = v_severity_1276_;
goto v___jp_1355_;
}
else
{
lean_object* v___x_1372_; lean_object* v___x_1373_; uint8_t v___x_1374_; 
v___x_1372_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1278_);
v___x_1373_ = l_Lean_warningAsError;
v___x_1374_ = l_Lean_Option_get___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__15(v___x_1372_, v___x_1373_);
lean_dec_ref(v___x_1372_);
if (v___x_1374_ == 0)
{
v___y_1356_ = v___y_1369_;
v___y_1357_ = v_severity_1276_;
goto v___jp_1355_;
}
else
{
v___y_1356_ = v___y_1369_;
v___y_1357_ = v___x_1367_;
goto v___jp_1355_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___boxed(lean_object* v_ref_1379_, lean_object* v_msgData_1380_, lean_object* v_severity_1381_, lean_object* v_isSilent_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_){
_start:
{
uint8_t v_severity_boxed_1386_; uint8_t v_isSilent_boxed_1387_; lean_object* v_res_1388_; 
v_severity_boxed_1386_ = lean_unbox(v_severity_1381_);
v_isSilent_boxed_1387_ = lean_unbox(v_isSilent_1382_);
v_res_1388_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44(v_ref_1379_, v_msgData_1380_, v_severity_boxed_1386_, v_isSilent_boxed_1387_, v___y_1383_, v___y_1384_);
lean_dec(v___y_1384_);
lean_dec_ref(v___y_1383_);
lean_dec(v_ref_1379_);
return v_res_1388_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30(lean_object* v_msgData_1389_, uint8_t v_severity_1390_, uint8_t v_isSilent_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_){
_start:
{
lean_object* v_ref_1395_; lean_object* v___x_1396_; 
v_ref_1395_ = lean_ctor_get(v___y_1392_, 2);
v___x_1396_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44(v_ref_1395_, v_msgData_1389_, v_severity_1390_, v_isSilent_1391_, v___y_1392_, v___y_1393_);
return v___x_1396_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30___boxed(lean_object* v_msgData_1397_, lean_object* v_severity_1398_, lean_object* v_isSilent_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_){
_start:
{
uint8_t v_severity_boxed_1403_; uint8_t v_isSilent_boxed_1404_; lean_object* v_res_1405_; 
v_severity_boxed_1403_ = lean_unbox(v_severity_1398_);
v_isSilent_boxed_1404_ = lean_unbox(v_isSilent_1399_);
v_res_1405_ = l_Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30(v_msgData_1397_, v_severity_boxed_1403_, v_isSilent_boxed_1404_, v___y_1400_, v___y_1401_);
lean_dec(v___y_1401_);
lean_dec_ref(v___y_1400_);
return v_res_1405_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00main_spec__13(lean_object* v_msgData_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_){
_start:
{
uint8_t v___x_1410_; uint8_t v___x_1411_; lean_object* v___x_1412_; 
v___x_1410_ = 2;
v___x_1411_ = 0;
v___x_1412_ = l_Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30(v_msgData_1406_, v___x_1410_, v___x_1411_, v___y_1407_, v___y_1408_);
return v___x_1412_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00main_spec__13___boxed(lean_object* v_msgData_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_){
_start:
{
lean_object* v_res_1417_; 
v_res_1417_ = l_Lean_logError___at___00main_spec__13(v_msgData_1413_, v___y_1414_, v___y_1415_);
lean_dec(v___y_1415_);
lean_dec_ref(v___y_1414_);
return v_res_1417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__14(lean_object* v_opts_1418_, lean_object* v_opt_1419_){
_start:
{
lean_object* v_name_1420_; lean_object* v_map_1421_; lean_object* v___x_1422_; 
v_name_1420_ = lean_ctor_get(v_opt_1419_, 0);
v_map_1421_ = lean_ctor_get(v_opts_1418_, 0);
v___x_1422_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1421_, v_name_1420_);
if (lean_obj_tag(v___x_1422_) == 0)
{
lean_object* v___x_1423_; 
v___x_1423_ = lean_box(0);
return v___x_1423_;
}
else
{
lean_object* v_val_1424_; lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1433_; 
v_val_1424_ = lean_ctor_get(v___x_1422_, 0);
v_isSharedCheck_1433_ = !lean_is_exclusive(v___x_1422_);
if (v_isSharedCheck_1433_ == 0)
{
v___x_1426_ = v___x_1422_;
v_isShared_1427_ = v_isSharedCheck_1433_;
goto v_resetjp_1425_;
}
else
{
lean_inc(v_val_1424_);
lean_dec(v___x_1422_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1433_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
if (lean_obj_tag(v_val_1424_) == 0)
{
lean_object* v_v_1428_; lean_object* v___x_1430_; 
v_v_1428_ = lean_ctor_get(v_val_1424_, 0);
lean_inc_ref(v_v_1428_);
lean_dec_ref_known(v_val_1424_, 1);
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 0, v_v_1428_);
v___x_1430_ = v___x_1426_;
goto v_reusejp_1429_;
}
else
{
lean_object* v_reuseFailAlloc_1431_; 
v_reuseFailAlloc_1431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1431_, 0, v_v_1428_);
v___x_1430_ = v_reuseFailAlloc_1431_;
goto v_reusejp_1429_;
}
v_reusejp_1429_:
{
return v___x_1430_;
}
}
else
{
lean_object* v___x_1432_; 
lean_del_object(v___x_1426_);
lean_dec(v_val_1424_);
v___x_1432_ = lean_box(0);
return v___x_1432_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__14___boxed(lean_object* v_opts_1434_, lean_object* v_opt_1435_){
_start:
{
lean_object* v_res_1436_; 
v_res_1436_ = l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__14(v_opts_1434_, v_opt_1435_);
lean_dec_ref(v_opt_1435_);
lean_dec_ref(v_opts_1434_);
return v_res_1436_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__22(lean_object* v_x_1437_, lean_object* v_x_1438_){
_start:
{
if (lean_obj_tag(v_x_1438_) == 0)
{
return v_x_1437_;
}
else
{
lean_object* v_key_1439_; lean_object* v_value_1440_; lean_object* v_tail_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; 
v_key_1439_ = lean_ctor_get(v_x_1438_, 0);
v_value_1440_ = lean_ctor_get(v_x_1438_, 1);
v_tail_1441_ = lean_ctor_get(v_x_1438_, 2);
lean_inc(v_value_1440_);
lean_inc(v_key_1439_);
v___x_1442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1442_, 0, v_key_1439_);
lean_ctor_set(v___x_1442_, 1, v_value_1440_);
v___x_1443_ = lean_array_push(v_x_1437_, v___x_1442_);
v_x_1437_ = v___x_1443_;
v_x_1438_ = v_tail_1441_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__22___boxed(lean_object* v_x_1445_, lean_object* v_x_1446_){
_start:
{
lean_object* v_res_1447_; 
v_res_1447_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__22(v_x_1445_, v_x_1446_);
lean_dec(v_x_1446_);
return v_res_1447_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__23(lean_object* v_as_1448_, size_t v_i_1449_, size_t v_stop_1450_, lean_object* v_b_1451_){
_start:
{
uint8_t v___x_1452_; 
v___x_1452_ = lean_usize_dec_eq(v_i_1449_, v_stop_1450_);
if (v___x_1452_ == 0)
{
lean_object* v___x_1453_; lean_object* v___x_1454_; size_t v___x_1455_; size_t v___x_1456_; 
v___x_1453_ = lean_array_uget_borrowed(v_as_1448_, v_i_1449_);
v___x_1454_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__22(v_b_1451_, v___x_1453_);
v___x_1455_ = ((size_t)1ULL);
v___x_1456_ = lean_usize_add(v_i_1449_, v___x_1455_);
v_i_1449_ = v___x_1456_;
v_b_1451_ = v___x_1454_;
goto _start;
}
else
{
return v_b_1451_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__23___boxed(lean_object* v_as_1458_, lean_object* v_i_1459_, lean_object* v_stop_1460_, lean_object* v_b_1461_){
_start:
{
size_t v_i_boxed_1462_; size_t v_stop_boxed_1463_; lean_object* v_res_1464_; 
v_i_boxed_1462_ = lean_unbox_usize(v_i_1459_);
lean_dec(v_i_1459_);
v_stop_boxed_1463_ = lean_unbox_usize(v_stop_1460_);
lean_dec(v_stop_1460_);
v_res_1464_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__23(v_as_1458_, v_i_boxed_1462_, v_stop_boxed_1463_, v_b_1461_);
lean_dec_ref(v_as_1458_);
return v_res_1464_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___lam__0(lean_object* v_x_1465_, lean_object* v_x_1466_){
_start:
{
lean_object* v_fst_1467_; lean_object* v_fst_1468_; lean_object* v_fst_1469_; lean_object* v_fst_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; uint8_t v___x_1473_; 
v_fst_1467_ = lean_ctor_get(v_x_1465_, 0);
v_fst_1468_ = lean_ctor_get(v_x_1466_, 0);
v_fst_1469_ = lean_ctor_get(v_fst_1467_, 0);
v_fst_1470_ = lean_ctor_get(v_fst_1468_, 0);
v___x_1471_ = lean_unsigned_to_nat(1u);
v___x_1472_ = lean_nat_add(v_fst_1469_, v___x_1471_);
v___x_1473_ = lean_nat_dec_le(v___x_1472_, v_fst_1470_);
lean_dec(v___x_1472_);
return v___x_1473_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___lam__0___boxed(lean_object* v_x_1474_, lean_object* v_x_1475_){
_start:
{
uint8_t v_res_1476_; lean_object* v_r_1477_; 
v_res_1476_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___lam__0(v_x_1474_, v_x_1475_);
lean_dec_ref(v_x_1475_);
lean_dec_ref(v_x_1474_);
v_r_1477_ = lean_box(v_res_1476_);
return v_r_1477_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___redArg(lean_object* v_hi_1478_, lean_object* v_pivot_1479_, lean_object* v_as_1480_, lean_object* v_i_1481_, lean_object* v_k_1482_){
_start:
{
uint8_t v___x_1483_; 
v___x_1483_ = lean_nat_dec_lt(v_k_1482_, v_hi_1478_);
if (v___x_1483_ == 0)
{
lean_object* v___x_1484_; lean_object* v___x_1485_; 
lean_dec(v_k_1482_);
v___x_1484_ = lean_array_fswap(v_as_1480_, v_i_1481_, v_hi_1478_);
v___x_1485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1485_, 0, v_i_1481_);
lean_ctor_set(v___x_1485_, 1, v___x_1484_);
return v___x_1485_;
}
else
{
lean_object* v___x_1486_; lean_object* v_fst_1487_; lean_object* v_fst_1488_; lean_object* v_fst_1489_; lean_object* v_fst_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; uint8_t v___x_1493_; 
v___x_1486_ = lean_array_fget_borrowed(v_as_1480_, v_k_1482_);
v_fst_1487_ = lean_ctor_get(v___x_1486_, 0);
v_fst_1488_ = lean_ctor_get(v_pivot_1479_, 0);
v_fst_1489_ = lean_ctor_get(v_fst_1487_, 0);
v_fst_1490_ = lean_ctor_get(v_fst_1488_, 0);
v___x_1491_ = lean_unsigned_to_nat(1u);
v___x_1492_ = lean_nat_add(v_fst_1489_, v___x_1491_);
v___x_1493_ = lean_nat_dec_le(v___x_1492_, v_fst_1490_);
lean_dec(v___x_1492_);
if (v___x_1493_ == 0)
{
lean_object* v___x_1494_; 
v___x_1494_ = lean_nat_add(v_k_1482_, v___x_1491_);
lean_dec(v_k_1482_);
v_k_1482_ = v___x_1494_;
goto _start;
}
else
{
lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; 
v___x_1496_ = lean_array_fswap(v_as_1480_, v_i_1481_, v_k_1482_);
v___x_1497_ = lean_nat_add(v_i_1481_, v___x_1491_);
lean_dec(v_i_1481_);
v___x_1498_ = lean_nat_add(v_k_1482_, v___x_1491_);
lean_dec(v_k_1482_);
v_as_1480_ = v___x_1496_;
v_i_1481_ = v___x_1497_;
v_k_1482_ = v___x_1498_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___redArg___boxed(lean_object* v_hi_1500_, lean_object* v_pivot_1501_, lean_object* v_as_1502_, lean_object* v_i_1503_, lean_object* v_k_1504_){
_start:
{
lean_object* v_res_1505_; 
v_res_1505_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___redArg(v_hi_1500_, v_pivot_1501_, v_as_1502_, v_i_1503_, v_k_1504_);
lean_dec_ref(v_pivot_1501_);
lean_dec(v_hi_1500_);
return v_res_1505_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg(lean_object* v_n_1506_, lean_object* v_as_1507_, lean_object* v_lo_1508_, lean_object* v_hi_1509_){
_start:
{
lean_object* v___y_1511_; uint8_t v___x_1521_; 
v___x_1521_ = lean_nat_dec_lt(v_lo_1508_, v_hi_1509_);
if (v___x_1521_ == 0)
{
lean_dec(v_lo_1508_);
return v_as_1507_;
}
else
{
lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v_mid_1524_; lean_object* v___y_1526_; lean_object* v___y_1532_; lean_object* v___x_1537_; lean_object* v___x_1538_; uint8_t v___x_1539_; 
v___x_1522_ = lean_nat_add(v_lo_1508_, v_hi_1509_);
v___x_1523_ = lean_unsigned_to_nat(1u);
v_mid_1524_ = lean_nat_shiftr(v___x_1522_, v___x_1523_);
lean_dec(v___x_1522_);
v___x_1537_ = lean_array_fget_borrowed(v_as_1507_, v_mid_1524_);
v___x_1538_ = lean_array_fget_borrowed(v_as_1507_, v_lo_1508_);
v___x_1539_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___lam__0(v___x_1537_, v___x_1538_);
if (v___x_1539_ == 0)
{
v___y_1532_ = v_as_1507_;
goto v___jp_1531_;
}
else
{
lean_object* v___x_1540_; 
v___x_1540_ = lean_array_fswap(v_as_1507_, v_lo_1508_, v_mid_1524_);
v___y_1532_ = v___x_1540_;
goto v___jp_1531_;
}
v___jp_1525_:
{
lean_object* v___x_1527_; lean_object* v___x_1528_; uint8_t v___x_1529_; 
v___x_1527_ = lean_array_fget_borrowed(v___y_1526_, v_mid_1524_);
v___x_1528_ = lean_array_fget_borrowed(v___y_1526_, v_hi_1509_);
v___x_1529_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___lam__0(v___x_1527_, v___x_1528_);
if (v___x_1529_ == 0)
{
lean_dec(v_mid_1524_);
v___y_1511_ = v___y_1526_;
goto v___jp_1510_;
}
else
{
lean_object* v___x_1530_; 
v___x_1530_ = lean_array_fswap(v___y_1526_, v_mid_1524_, v_hi_1509_);
lean_dec(v_mid_1524_);
v___y_1511_ = v___x_1530_;
goto v___jp_1510_;
}
}
v___jp_1531_:
{
lean_object* v___x_1533_; lean_object* v___x_1534_; uint8_t v___x_1535_; 
v___x_1533_ = lean_array_fget_borrowed(v___y_1532_, v_hi_1509_);
v___x_1534_ = lean_array_fget_borrowed(v___y_1532_, v_lo_1508_);
v___x_1535_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___lam__0(v___x_1533_, v___x_1534_);
if (v___x_1535_ == 0)
{
v___y_1526_ = v___y_1532_;
goto v___jp_1525_;
}
else
{
lean_object* v___x_1536_; 
v___x_1536_ = lean_array_fswap(v___y_1532_, v_lo_1508_, v_hi_1509_);
v___y_1526_ = v___x_1536_;
goto v___jp_1525_;
}
}
}
v___jp_1510_:
{
lean_object* v_pivot_1512_; lean_object* v___x_1513_; lean_object* v_fst_1514_; lean_object* v_snd_1515_; uint8_t v___x_1516_; 
v_pivot_1512_ = lean_array_fget(v___y_1511_, v_hi_1509_);
lean_inc_n(v_lo_1508_, 2);
v___x_1513_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___redArg(v_hi_1509_, v_pivot_1512_, v___y_1511_, v_lo_1508_, v_lo_1508_);
lean_dec(v_pivot_1512_);
v_fst_1514_ = lean_ctor_get(v___x_1513_, 0);
lean_inc(v_fst_1514_);
v_snd_1515_ = lean_ctor_get(v___x_1513_, 1);
lean_inc(v_snd_1515_);
lean_dec_ref(v___x_1513_);
v___x_1516_ = lean_nat_dec_le(v_hi_1509_, v_fst_1514_);
if (v___x_1516_ == 0)
{
lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; 
v___x_1517_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg(v_n_1506_, v_snd_1515_, v_lo_1508_, v_fst_1514_);
v___x_1518_ = lean_unsigned_to_nat(1u);
v___x_1519_ = lean_nat_add(v_fst_1514_, v___x_1518_);
lean_dec(v_fst_1514_);
v_as_1507_ = v___x_1517_;
v_lo_1508_ = v___x_1519_;
goto _start;
}
else
{
lean_dec(v_fst_1514_);
lean_dec(v_lo_1508_);
return v_snd_1515_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___boxed(lean_object* v_n_1541_, lean_object* v_as_1542_, lean_object* v_lo_1543_, lean_object* v_hi_1544_){
_start:
{
lean_object* v_res_1545_; 
v_res_1545_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg(v_n_1541_, v_as_1542_, v_lo_1543_, v_hi_1544_);
lean_dec(v_hi_1544_);
lean_dec(v_n_1541_);
return v_res_1545_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___lam__0(uint8_t v_suppressElabErrors_1546_, uint8_t v___x_1547_, lean_object* v___x_1548_, lean_object* v_x_1549_){
_start:
{
if (lean_obj_tag(v_x_1549_) == 1)
{
lean_object* v_pre_1550_; 
v_pre_1550_ = lean_ctor_get(v_x_1549_, 0);
switch(lean_obj_tag(v_pre_1550_))
{
case 1:
{
lean_object* v_pre_1551_; 
v_pre_1551_ = lean_ctor_get(v_pre_1550_, 0);
switch(lean_obj_tag(v_pre_1551_))
{
case 0:
{
lean_object* v_str_1552_; lean_object* v_str_1553_; lean_object* v___x_1554_; uint8_t v___x_1555_; 
v_str_1552_ = lean_ctor_get(v_x_1549_, 1);
v_str_1553_ = lean_ctor_get(v_pre_1550_, 1);
v___x_1554_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__0));
v___x_1555_ = lean_string_dec_eq(v_str_1553_, v___x_1554_);
if (v___x_1555_ == 0)
{
lean_object* v___x_1556_; uint8_t v___x_1557_; 
v___x_1556_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__1));
v___x_1557_ = lean_string_dec_eq(v_str_1553_, v___x_1556_);
if (v___x_1557_ == 0)
{
return v___x_1557_;
}
else
{
lean_object* v___x_1558_; uint8_t v___x_1559_; 
v___x_1558_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__2));
v___x_1559_ = lean_string_dec_eq(v_str_1552_, v___x_1558_);
if (v___x_1559_ == 0)
{
return v___x_1559_;
}
else
{
return v_suppressElabErrors_1546_;
}
}
}
else
{
lean_object* v___x_1560_; uint8_t v___x_1561_; 
v___x_1560_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__3));
v___x_1561_ = lean_string_dec_eq(v_str_1552_, v___x_1560_);
if (v___x_1561_ == 0)
{
return v___x_1561_;
}
else
{
return v_suppressElabErrors_1546_;
}
}
}
case 1:
{
lean_object* v_pre_1562_; 
v_pre_1562_ = lean_ctor_get(v_pre_1551_, 0);
if (lean_obj_tag(v_pre_1562_) == 0)
{
lean_object* v_str_1563_; lean_object* v_str_1564_; lean_object* v_str_1565_; lean_object* v___x_1566_; uint8_t v___x_1567_; 
v_str_1563_ = lean_ctor_get(v_x_1549_, 1);
v_str_1564_ = lean_ctor_get(v_pre_1550_, 1);
v_str_1565_ = lean_ctor_get(v_pre_1551_, 1);
v___x_1566_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__4));
v___x_1567_ = lean_string_dec_eq(v_str_1565_, v___x_1566_);
if (v___x_1567_ == 0)
{
return v___x_1567_;
}
else
{
lean_object* v___x_1568_; uint8_t v___x_1569_; 
v___x_1568_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__5));
v___x_1569_ = lean_string_dec_eq(v_str_1564_, v___x_1568_);
if (v___x_1569_ == 0)
{
return v___x_1569_;
}
else
{
lean_object* v___x_1570_; uint8_t v___x_1571_; 
v___x_1570_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__6));
v___x_1571_ = lean_string_dec_eq(v_str_1563_, v___x_1570_);
if (v___x_1571_ == 0)
{
return v___x_1571_;
}
else
{
return v_suppressElabErrors_1546_;
}
}
}
}
else
{
return v___x_1547_;
}
}
default: 
{
return v___x_1547_;
}
}
}
case 0:
{
lean_object* v_str_1572_; uint8_t v___x_1573_; 
v_str_1572_ = lean_ctor_get(v_x_1549_, 1);
v___x_1573_ = lean_string_dec_eq(v_str_1572_, v___x_1548_);
if (v___x_1573_ == 0)
{
return v___x_1573_;
}
else
{
return v_suppressElabErrors_1546_;
}
}
default: 
{
return v___x_1547_;
}
}
}
else
{
return v___x_1547_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___lam__0___boxed(lean_object* v_suppressElabErrors_1574_, lean_object* v___x_1575_, lean_object* v___x_1576_, lean_object* v_x_1577_){
_start:
{
uint8_t v_suppressElabErrors_boxed_1578_; uint8_t v___x_38719__boxed_1579_; uint8_t v_res_1580_; lean_object* v_r_1581_; 
v_suppressElabErrors_boxed_1578_ = lean_unbox(v_suppressElabErrors_1574_);
v___x_38719__boxed_1579_ = lean_unbox(v___x_1575_);
v_res_1580_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___lam__0(v_suppressElabErrors_boxed_1578_, v___x_38719__boxed_1579_, v___x_1576_, v_x_1577_);
lean_dec(v_x_1577_);
lean_dec_ref(v___x_1576_);
v_r_1581_ = lean_box(v_res_1580_);
return v_r_1581_;
}
}
static double _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___closed__0(void){
_start:
{
lean_object* v___x_1582_; double v___x_1583_; 
v___x_1582_ = lean_unsigned_to_nat(0u);
v___x_1583_ = lean_float_of_nat(v___x_1582_);
return v___x_1583_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20(uint8_t v___x_1584_, lean_object* v_as_1585_, size_t v_sz_1586_, size_t v_i_1587_, lean_object* v_b_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_){
_start:
{
lean_object* v_a_1593_; uint8_t v___x_1597_; 
v___x_1597_ = lean_usize_dec_lt(v_i_1587_, v_sz_1586_);
if (v___x_1597_ == 0)
{
lean_object* v___x_1598_; 
v___x_1598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1598_, 0, v_b_1588_);
return v___x_1598_;
}
else
{
lean_object* v_a_1599_; lean_object* v_fst_1600_; lean_object* v_snd_1601_; lean_object* v___x_1603_; uint8_t v_isShared_1604_; uint8_t v_isSharedCheck_1680_; 
v_a_1599_ = lean_array_uget(v_as_1585_, v_i_1587_);
v_fst_1600_ = lean_ctor_get(v_a_1599_, 0);
v_snd_1601_ = lean_ctor_get(v_a_1599_, 1);
v_isSharedCheck_1680_ = !lean_is_exclusive(v_a_1599_);
if (v_isSharedCheck_1680_ == 0)
{
v___x_1603_ = v_a_1599_;
v_isShared_1604_ = v_isSharedCheck_1680_;
goto v_resetjp_1602_;
}
else
{
lean_inc(v_snd_1601_);
lean_inc(v_fst_1600_);
lean_dec(v_a_1599_);
v___x_1603_ = lean_box(0);
v_isShared_1604_ = v_isSharedCheck_1680_;
goto v_resetjp_1602_;
}
v_resetjp_1602_:
{
lean_object* v_fst_1605_; lean_object* v_snd_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1679_; 
v_fst_1605_ = lean_ctor_get(v_fst_1600_, 0);
v_snd_1606_ = lean_ctor_get(v_fst_1600_, 1);
v_isSharedCheck_1679_ = !lean_is_exclusive(v_fst_1600_);
if (v_isSharedCheck_1679_ == 0)
{
v___x_1608_ = v_fst_1600_;
v_isShared_1609_ = v_isSharedCheck_1679_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_snd_1606_);
lean_inc(v_fst_1605_);
lean_dec(v_fst_1600_);
v___x_1608_ = lean_box(0);
v_isShared_1609_ = v_isSharedCheck_1679_;
goto v_resetjp_1607_;
}
v_resetjp_1607_:
{
lean_object* v___x_1610_; lean_object* v___x_1611_; double v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v_toCold_1615_; uint8_t v_suppressElabErrors_1616_; lean_object* v_fileName_1617_; lean_object* v_fileMap_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1625_; 
v___x_1610_ = lean_box(0);
v___x_1611_ = lean_box(0);
v___x_1612_ = lean_float_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___closed__0);
v___x_1613_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___closed__0));
v___x_1614_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1614_, 0, v___x_1610_);
lean_ctor_set(v___x_1614_, 1, v___x_1611_);
lean_ctor_set(v___x_1614_, 2, v___x_1613_);
lean_ctor_set_float(v___x_1614_, sizeof(void*)*3, v___x_1612_);
lean_ctor_set_float(v___x_1614_, sizeof(void*)*3 + 8, v___x_1612_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*3 + 16, v___x_1597_);
v_toCold_1615_ = lean_ctor_get(v___y_1589_, 0);
v_suppressElabErrors_1616_ = lean_ctor_get_uint8(v___y_1589_, sizeof(void*)*3 + 2);
v_fileName_1617_ = lean_ctor_get(v_toCold_1615_, 0);
v_fileMap_1618_ = lean_ctor_get(v_toCold_1615_, 1);
v___x_1619_ = lean_box(0);
v___x_1620_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0));
v___x_1621_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__1));
v___x_1622_ = l_Lean_MessageData_nil;
v___x_1623_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1614_);
lean_ctor_set(v___x_1623_, 1, v___x_1622_);
lean_ctor_set(v___x_1623_, 2, v_snd_1601_);
if (v_isShared_1609_ == 0)
{
lean_ctor_set_tag(v___x_1608_, 8);
lean_ctor_set(v___x_1608_, 1, v___x_1623_);
lean_ctor_set(v___x_1608_, 0, v___x_1621_);
v___x_1625_ = v___x_1608_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1678_; 
v_reuseFailAlloc_1678_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1678_, 0, v___x_1621_);
lean_ctor_set(v_reuseFailAlloc_1678_, 1, v___x_1623_);
v___x_1625_ = v_reuseFailAlloc_1678_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
uint8_t v___x_1626_; lean_object* v___x_1627_; lean_object* v___y_1629_; lean_object* v___y_1630_; 
v___x_1626_ = 0;
lean_inc_ref(v_fileMap_1618_);
lean_inc_ref(v_fileName_1617_);
v___x_1627_ = l_Lean_Elab_mkMessageCore(v_fileName_1617_, v_fileMap_1618_, v___x_1625_, v___x_1626_, v_fst_1605_, v_snd_1606_);
lean_dec(v_snd_1606_);
lean_dec(v_fst_1605_);
if (v_suppressElabErrors_1616_ == 0)
{
v___y_1629_ = v___y_1589_;
v___y_1630_ = v___y_1590_;
goto v___jp_1628_;
}
else
{
lean_object* v_data_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___f_1676_; uint8_t v___x_1677_; 
v_data_1673_ = lean_ctor_get(v___x_1627_, 4);
v___x_1674_ = lean_box(v_suppressElabErrors_1616_);
v___x_1675_ = lean_box(v___x_1584_);
v___f_1676_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1676_, 0, v___x_1674_);
lean_closure_set(v___f_1676_, 1, v___x_1675_);
lean_closure_set(v___f_1676_, 2, v___x_1620_);
lean_inc(v_data_1673_);
v___x_1677_ = l_Lean_MessageData_hasTag(v___f_1676_, v_data_1673_);
if (v___x_1677_ == 0)
{
lean_dec_ref(v___x_1627_);
lean_del_object(v___x_1603_);
v_a_1593_ = v___x_1619_;
goto v___jp_1592_;
}
else
{
v___y_1629_ = v___y_1589_;
v___y_1630_ = v___y_1590_;
goto v___jp_1628_;
}
}
v___jp_1628_:
{
lean_object* v_toCold_1631_; lean_object* v_fileName_1632_; lean_object* v_pos_1633_; lean_object* v_endPos_1634_; uint8_t v_keepFullRange_1635_; uint8_t v_severity_1636_; uint8_t v_isSilent_1637_; lean_object* v_caption_1638_; lean_object* v_data_1639_; lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1672_; 
v_toCold_1631_ = lean_ctor_get(v___y_1629_, 0);
v_fileName_1632_ = lean_ctor_get(v___x_1627_, 0);
v_pos_1633_ = lean_ctor_get(v___x_1627_, 1);
v_endPos_1634_ = lean_ctor_get(v___x_1627_, 2);
v_keepFullRange_1635_ = lean_ctor_get_uint8(v___x_1627_, sizeof(void*)*5);
v_severity_1636_ = lean_ctor_get_uint8(v___x_1627_, sizeof(void*)*5 + 1);
v_isSilent_1637_ = lean_ctor_get_uint8(v___x_1627_, sizeof(void*)*5 + 2);
v_caption_1638_ = lean_ctor_get(v___x_1627_, 3);
v_data_1639_ = lean_ctor_get(v___x_1627_, 4);
v_isSharedCheck_1672_ = !lean_is_exclusive(v___x_1627_);
if (v_isSharedCheck_1672_ == 0)
{
v___x_1641_ = v___x_1627_;
v_isShared_1642_ = v_isSharedCheck_1672_;
goto v_resetjp_1640_;
}
else
{
lean_inc(v_data_1639_);
lean_inc(v_caption_1638_);
lean_inc(v_endPos_1634_);
lean_inc(v_pos_1633_);
lean_inc(v_fileName_1632_);
lean_dec(v___x_1627_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1672_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
lean_object* v_currNamespace_1643_; lean_object* v_openDecls_1644_; lean_object* v___x_1646_; 
v_currNamespace_1643_ = lean_ctor_get(v_toCold_1631_, 4);
v_openDecls_1644_ = lean_ctor_get(v_toCold_1631_, 5);
lean_inc(v_openDecls_1644_);
lean_inc(v_currNamespace_1643_);
if (v_isShared_1604_ == 0)
{
lean_ctor_set(v___x_1603_, 1, v_openDecls_1644_);
lean_ctor_set(v___x_1603_, 0, v_currNamespace_1643_);
v___x_1646_ = v___x_1603_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v_currNamespace_1643_);
lean_ctor_set(v_reuseFailAlloc_1671_, 1, v_openDecls_1644_);
v___x_1646_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
lean_object* v___x_1647_; lean_object* v___x_1649_; 
v___x_1647_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1647_, 0, v___x_1646_);
lean_ctor_set(v___x_1647_, 1, v_data_1639_);
if (v_isShared_1642_ == 0)
{
lean_ctor_set(v___x_1641_, 4, v___x_1647_);
v___x_1649_ = v___x_1641_;
goto v_reusejp_1648_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v_fileName_1632_);
lean_ctor_set(v_reuseFailAlloc_1670_, 1, v_pos_1633_);
lean_ctor_set(v_reuseFailAlloc_1670_, 2, v_endPos_1634_);
lean_ctor_set(v_reuseFailAlloc_1670_, 3, v_caption_1638_);
lean_ctor_set(v_reuseFailAlloc_1670_, 4, v___x_1647_);
lean_ctor_set_uint8(v_reuseFailAlloc_1670_, sizeof(void*)*5, v_keepFullRange_1635_);
lean_ctor_set_uint8(v_reuseFailAlloc_1670_, sizeof(void*)*5 + 1, v_severity_1636_);
lean_ctor_set_uint8(v_reuseFailAlloc_1670_, sizeof(void*)*5 + 2, v_isSilent_1637_);
v___x_1649_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1648_;
}
v_reusejp_1648_:
{
lean_object* v___x_1650_; lean_object* v_env_1651_; lean_object* v_nextMacroScope_1652_; lean_object* v_ngen_1653_; lean_object* v_auxDeclNGen_1654_; lean_object* v_traceState_1655_; lean_object* v_cache_1656_; lean_object* v_recordedDeps_1657_; lean_object* v_messages_1658_; lean_object* v_infoState_1659_; lean_object* v_snapshotTasks_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1669_; 
v___x_1650_ = lean_st_ref_take(v___y_1630_);
v_env_1651_ = lean_ctor_get(v___x_1650_, 0);
v_nextMacroScope_1652_ = lean_ctor_get(v___x_1650_, 1);
v_ngen_1653_ = lean_ctor_get(v___x_1650_, 2);
v_auxDeclNGen_1654_ = lean_ctor_get(v___x_1650_, 3);
v_traceState_1655_ = lean_ctor_get(v___x_1650_, 4);
v_cache_1656_ = lean_ctor_get(v___x_1650_, 5);
v_recordedDeps_1657_ = lean_ctor_get(v___x_1650_, 6);
v_messages_1658_ = lean_ctor_get(v___x_1650_, 7);
v_infoState_1659_ = lean_ctor_get(v___x_1650_, 8);
v_snapshotTasks_1660_ = lean_ctor_get(v___x_1650_, 9);
v_isSharedCheck_1669_ = !lean_is_exclusive(v___x_1650_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1662_ = v___x_1650_;
v_isShared_1663_ = v_isSharedCheck_1669_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_snapshotTasks_1660_);
lean_inc(v_infoState_1659_);
lean_inc(v_messages_1658_);
lean_inc(v_recordedDeps_1657_);
lean_inc(v_cache_1656_);
lean_inc(v_traceState_1655_);
lean_inc(v_auxDeclNGen_1654_);
lean_inc(v_ngen_1653_);
lean_inc(v_nextMacroScope_1652_);
lean_inc(v_env_1651_);
lean_dec(v___x_1650_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1669_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
lean_object* v___x_1664_; lean_object* v___x_1666_; 
v___x_1664_ = l_Lean_MessageLog_add(v___x_1649_, v_messages_1658_);
if (v_isShared_1663_ == 0)
{
lean_ctor_set(v___x_1662_, 7, v___x_1664_);
v___x_1666_ = v___x_1662_;
goto v_reusejp_1665_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v_env_1651_);
lean_ctor_set(v_reuseFailAlloc_1668_, 1, v_nextMacroScope_1652_);
lean_ctor_set(v_reuseFailAlloc_1668_, 2, v_ngen_1653_);
lean_ctor_set(v_reuseFailAlloc_1668_, 3, v_auxDeclNGen_1654_);
lean_ctor_set(v_reuseFailAlloc_1668_, 4, v_traceState_1655_);
lean_ctor_set(v_reuseFailAlloc_1668_, 5, v_cache_1656_);
lean_ctor_set(v_reuseFailAlloc_1668_, 6, v_recordedDeps_1657_);
lean_ctor_set(v_reuseFailAlloc_1668_, 7, v___x_1664_);
lean_ctor_set(v_reuseFailAlloc_1668_, 8, v_infoState_1659_);
lean_ctor_set(v_reuseFailAlloc_1668_, 9, v_snapshotTasks_1660_);
v___x_1666_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1665_;
}
v_reusejp_1665_:
{
lean_object* v___x_1667_; 
v___x_1667_ = lean_st_ref_put(v___y_1630_, v___x_1666_);
v_a_1593_ = v___x_1619_;
goto v___jp_1592_;
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
v___jp_1592_:
{
size_t v___x_1594_; size_t v___x_1595_; 
v___x_1594_ = ((size_t)1ULL);
v___x_1595_ = lean_usize_add(v_i_1587_, v___x_1594_);
v_i_1587_ = v___x_1595_;
v_b_1588_ = v_a_1593_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___boxed(lean_object* v___x_1681_, lean_object* v_as_1682_, lean_object* v_sz_1683_, lean_object* v_i_1684_, lean_object* v_b_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_){
_start:
{
uint8_t v___x_38784__boxed_1689_; size_t v_sz_boxed_1690_; size_t v_i_boxed_1691_; lean_object* v_res_1692_; 
v___x_38784__boxed_1689_ = lean_unbox(v___x_1681_);
v_sz_boxed_1690_ = lean_unbox_usize(v_sz_1683_);
lean_dec(v_sz_1683_);
v_i_boxed_1691_ = lean_unbox_usize(v_i_1684_);
lean_dec(v_i_1684_);
v_res_1692_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20(v___x_38784__boxed_1689_, v_as_1682_, v_sz_boxed_1690_, v_i_boxed_1691_, v_b_1685_, v___y_1686_, v___y_1687_);
lean_dec(v___y_1687_);
lean_dec_ref(v___y_1686_);
lean_dec_ref(v_as_1682_);
return v_res_1692_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___redArg(lean_object* v_a_1693_, lean_object* v_fallback_1694_, lean_object* v_x_1695_){
_start:
{
if (lean_obj_tag(v_x_1695_) == 0)
{
lean_inc(v_fallback_1694_);
return v_fallback_1694_;
}
else
{
lean_object* v_key_1696_; lean_object* v_value_1697_; lean_object* v_tail_1698_; lean_object* v_fst_1699_; lean_object* v_snd_1700_; lean_object* v_fst_1701_; lean_object* v_snd_1702_; uint8_t v_decide_1703_; 
v_key_1696_ = lean_ctor_get(v_x_1695_, 0);
v_value_1697_ = lean_ctor_get(v_x_1695_, 1);
v_tail_1698_ = lean_ctor_get(v_x_1695_, 2);
v_fst_1699_ = lean_ctor_get(v_key_1696_, 0);
v_snd_1700_ = lean_ctor_get(v_key_1696_, 1);
v_fst_1701_ = lean_ctor_get(v_a_1693_, 0);
v_snd_1702_ = lean_ctor_get(v_a_1693_, 1);
v_decide_1703_ = lean_nat_dec_eq(v_fst_1699_, v_fst_1701_);
if (v_decide_1703_ == 0)
{
v_x_1695_ = v_tail_1698_;
goto _start;
}
else
{
uint8_t v_decide_1705_; 
v_decide_1705_ = lean_nat_dec_eq(v_snd_1700_, v_snd_1702_);
if (v_decide_1705_ == 0)
{
v_x_1695_ = v_tail_1698_;
goto _start;
}
else
{
lean_inc(v_value_1697_);
return v_value_1697_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___redArg___boxed(lean_object* v_a_1707_, lean_object* v_fallback_1708_, lean_object* v_x_1709_){
_start:
{
lean_object* v_res_1710_; 
v_res_1710_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___redArg(v_a_1707_, v_fallback_1708_, v_x_1709_);
lean_dec(v_x_1709_);
lean_dec(v_fallback_1708_);
lean_dec_ref(v_a_1707_);
return v_res_1710_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg(lean_object* v_m_1711_, lean_object* v_a_1712_, lean_object* v_fallback_1713_){
_start:
{
lean_object* v_buckets_1714_; lean_object* v_fst_1715_; lean_object* v_snd_1716_; lean_object* v___x_1717_; uint64_t v___x_1718_; uint64_t v___x_1719_; uint64_t v___x_1720_; uint64_t v___x_1721_; uint64_t v___x_1722_; uint64_t v_fold_1723_; uint64_t v___x_1724_; uint64_t v___x_1725_; uint64_t v___x_1726_; size_t v___x_1727_; size_t v___x_1728_; size_t v___x_1729_; size_t v___x_1730_; size_t v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; 
v_buckets_1714_ = lean_ctor_get(v_m_1711_, 1);
v_fst_1715_ = lean_ctor_get(v_a_1712_, 0);
v_snd_1716_ = lean_ctor_get(v_a_1712_, 1);
v___x_1717_ = lean_array_get_size(v_buckets_1714_);
v___x_1718_ = l_String_instHashableRaw_hash(v_fst_1715_);
v___x_1719_ = l_String_instHashableRaw_hash(v_snd_1716_);
v___x_1720_ = lean_uint64_mix_hash(v___x_1718_, v___x_1719_);
v___x_1721_ = 32ULL;
v___x_1722_ = lean_uint64_shift_right(v___x_1720_, v___x_1721_);
v_fold_1723_ = lean_uint64_xor(v___x_1720_, v___x_1722_);
v___x_1724_ = 16ULL;
v___x_1725_ = lean_uint64_shift_right(v_fold_1723_, v___x_1724_);
v___x_1726_ = lean_uint64_xor(v_fold_1723_, v___x_1725_);
v___x_1727_ = lean_uint64_to_usize(v___x_1726_);
v___x_1728_ = lean_usize_of_nat(v___x_1717_);
v___x_1729_ = ((size_t)1ULL);
v___x_1730_ = lean_usize_sub(v___x_1728_, v___x_1729_);
v___x_1731_ = lean_usize_land(v___x_1727_, v___x_1730_);
v___x_1732_ = lean_array_uget_borrowed(v_buckets_1714_, v___x_1731_);
v___x_1733_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___redArg(v_a_1712_, v_fallback_1713_, v___x_1732_);
return v___x_1733_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg___boxed(lean_object* v_m_1734_, lean_object* v_a_1735_, lean_object* v_fallback_1736_){
_start:
{
lean_object* v_res_1737_; 
v_res_1737_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg(v_m_1734_, v_a_1735_, v_fallback_1736_);
lean_dec(v_fallback_1736_);
lean_dec_ref(v_a_1735_);
lean_dec_ref(v_m_1734_);
return v_res_1737_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35_spec__44___redArg(lean_object* v_x_1738_, lean_object* v_x_1739_){
_start:
{
if (lean_obj_tag(v_x_1739_) == 0)
{
return v_x_1738_;
}
else
{
lean_object* v_key_1740_; lean_object* v_value_1741_; lean_object* v_tail_1742_; lean_object* v___x_1744_; uint8_t v_isShared_1745_; uint8_t v_isSharedCheck_1769_; 
v_key_1740_ = lean_ctor_get(v_x_1739_, 0);
v_value_1741_ = lean_ctor_get(v_x_1739_, 1);
v_tail_1742_ = lean_ctor_get(v_x_1739_, 2);
v_isSharedCheck_1769_ = !lean_is_exclusive(v_x_1739_);
if (v_isSharedCheck_1769_ == 0)
{
v___x_1744_ = v_x_1739_;
v_isShared_1745_ = v_isSharedCheck_1769_;
goto v_resetjp_1743_;
}
else
{
lean_inc(v_tail_1742_);
lean_inc(v_value_1741_);
lean_inc(v_key_1740_);
lean_dec(v_x_1739_);
v___x_1744_ = lean_box(0);
v_isShared_1745_ = v_isSharedCheck_1769_;
goto v_resetjp_1743_;
}
v_resetjp_1743_:
{
lean_object* v_fst_1746_; lean_object* v_snd_1747_; lean_object* v___x_1748_; uint64_t v___x_1749_; uint64_t v___x_1750_; uint64_t v___x_1751_; uint64_t v___x_1752_; uint64_t v___x_1753_; uint64_t v_fold_1754_; uint64_t v___x_1755_; uint64_t v___x_1756_; uint64_t v___x_1757_; size_t v___x_1758_; size_t v___x_1759_; size_t v___x_1760_; size_t v___x_1761_; size_t v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1765_; 
v_fst_1746_ = lean_ctor_get(v_key_1740_, 0);
v_snd_1747_ = lean_ctor_get(v_key_1740_, 1);
v___x_1748_ = lean_array_get_size(v_x_1738_);
v___x_1749_ = l_String_instHashableRaw_hash(v_fst_1746_);
v___x_1750_ = l_String_instHashableRaw_hash(v_snd_1747_);
v___x_1751_ = lean_uint64_mix_hash(v___x_1749_, v___x_1750_);
v___x_1752_ = 32ULL;
v___x_1753_ = lean_uint64_shift_right(v___x_1751_, v___x_1752_);
v_fold_1754_ = lean_uint64_xor(v___x_1751_, v___x_1753_);
v___x_1755_ = 16ULL;
v___x_1756_ = lean_uint64_shift_right(v_fold_1754_, v___x_1755_);
v___x_1757_ = lean_uint64_xor(v_fold_1754_, v___x_1756_);
v___x_1758_ = lean_uint64_to_usize(v___x_1757_);
v___x_1759_ = lean_usize_of_nat(v___x_1748_);
v___x_1760_ = ((size_t)1ULL);
v___x_1761_ = lean_usize_sub(v___x_1759_, v___x_1760_);
v___x_1762_ = lean_usize_land(v___x_1758_, v___x_1761_);
v___x_1763_ = lean_array_uget_borrowed(v_x_1738_, v___x_1762_);
lean_inc(v___x_1763_);
if (v_isShared_1745_ == 0)
{
lean_ctor_set(v___x_1744_, 2, v___x_1763_);
v___x_1765_ = v___x_1744_;
goto v_reusejp_1764_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v_key_1740_);
lean_ctor_set(v_reuseFailAlloc_1768_, 1, v_value_1741_);
lean_ctor_set(v_reuseFailAlloc_1768_, 2, v___x_1763_);
v___x_1765_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1764_;
}
v_reusejp_1764_:
{
lean_object* v___x_1766_; 
v___x_1766_ = lean_array_uset(v_x_1738_, v___x_1762_, v___x_1765_);
v_x_1738_ = v___x_1766_;
v_x_1739_ = v_tail_1742_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35___redArg(lean_object* v_i_1770_, lean_object* v_source_1771_, lean_object* v_target_1772_){
_start:
{
lean_object* v___x_1773_; uint8_t v___x_1774_; 
v___x_1773_ = lean_array_get_size(v_source_1771_);
v___x_1774_ = lean_nat_dec_lt(v_i_1770_, v___x_1773_);
if (v___x_1774_ == 0)
{
lean_dec_ref(v_source_1771_);
lean_dec(v_i_1770_);
return v_target_1772_;
}
else
{
lean_object* v_es_1775_; lean_object* v___x_1776_; lean_object* v_source_1777_; lean_object* v_target_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; 
v_es_1775_ = lean_array_fget(v_source_1771_, v_i_1770_);
v___x_1776_ = lean_box(0);
v_source_1777_ = lean_array_fset(v_source_1771_, v_i_1770_, v___x_1776_);
v_target_1778_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35_spec__44___redArg(v_target_1772_, v_es_1775_);
v___x_1779_ = lean_unsigned_to_nat(1u);
v___x_1780_ = lean_nat_add(v_i_1770_, v___x_1779_);
lean_dec(v_i_1770_);
v_i_1770_ = v___x_1780_;
v_source_1771_ = v_source_1777_;
v_target_1772_ = v_target_1778_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24___redArg(lean_object* v_data_1782_){
_start:
{
lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v_nbuckets_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; 
v___x_1783_ = lean_array_get_size(v_data_1782_);
v___x_1784_ = lean_unsigned_to_nat(2u);
v_nbuckets_1785_ = lean_nat_mul(v___x_1783_, v___x_1784_);
v___x_1786_ = lean_unsigned_to_nat(0u);
v___x_1787_ = lean_box(0);
v___x_1788_ = lean_mk_array(v_nbuckets_1785_, v___x_1787_);
v___x_1789_ = lean_array_propagate_mark(v_data_1782_, v___x_1788_);
v___x_1790_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35___redArg(v___x_1786_, v_data_1782_, v___x_1789_);
return v___x_1790_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__25___redArg(lean_object* v_a_1791_, lean_object* v_b_1792_, lean_object* v_x_1793_){
_start:
{
if (lean_obj_tag(v_x_1793_) == 0)
{
lean_dec(v_b_1792_);
lean_dec_ref(v_a_1791_);
return v_x_1793_;
}
else
{
lean_object* v_key_1794_; lean_object* v_value_1795_; lean_object* v_tail_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1812_; 
v_key_1794_ = lean_ctor_get(v_x_1793_, 0);
v_value_1795_ = lean_ctor_get(v_x_1793_, 1);
v_tail_1796_ = lean_ctor_get(v_x_1793_, 2);
v_isSharedCheck_1812_ = !lean_is_exclusive(v_x_1793_);
if (v_isSharedCheck_1812_ == 0)
{
v___x_1798_ = v_x_1793_;
v_isShared_1799_ = v_isSharedCheck_1812_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_tail_1796_);
lean_inc(v_value_1795_);
lean_inc(v_key_1794_);
lean_dec(v_x_1793_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1812_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v_fst_1805_; lean_object* v_snd_1806_; lean_object* v_fst_1807_; lean_object* v_snd_1808_; uint8_t v_decide_1809_; 
v_fst_1805_ = lean_ctor_get(v_key_1794_, 0);
v_snd_1806_ = lean_ctor_get(v_key_1794_, 1);
v_fst_1807_ = lean_ctor_get(v_a_1791_, 0);
v_snd_1808_ = lean_ctor_get(v_a_1791_, 1);
v_decide_1809_ = lean_nat_dec_eq(v_fst_1805_, v_fst_1807_);
if (v_decide_1809_ == 0)
{
goto v___jp_1800_;
}
else
{
uint8_t v_decide_1810_; 
v_decide_1810_ = lean_nat_dec_eq(v_snd_1806_, v_snd_1808_);
if (v_decide_1810_ == 0)
{
goto v___jp_1800_;
}
else
{
lean_object* v___x_1811_; 
lean_del_object(v___x_1798_);
lean_dec(v_value_1795_);
lean_dec(v_key_1794_);
v___x_1811_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1811_, 0, v_a_1791_);
lean_ctor_set(v___x_1811_, 1, v_b_1792_);
lean_ctor_set(v___x_1811_, 2, v_tail_1796_);
return v___x_1811_;
}
}
v___jp_1800_:
{
lean_object* v___x_1801_; lean_object* v___x_1803_; 
v___x_1801_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__25___redArg(v_a_1791_, v_b_1792_, v_tail_1796_);
if (v_isShared_1799_ == 0)
{
lean_ctor_set(v___x_1798_, 2, v___x_1801_);
v___x_1803_ = v___x_1798_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v_key_1794_);
lean_ctor_set(v_reuseFailAlloc_1804_, 1, v_value_1795_);
lean_ctor_set(v_reuseFailAlloc_1804_, 2, v___x_1801_);
v___x_1803_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
return v___x_1803_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___redArg(lean_object* v_a_1813_, lean_object* v_x_1814_){
_start:
{
if (lean_obj_tag(v_x_1814_) == 0)
{
uint8_t v___x_1815_; 
v___x_1815_ = 0;
return v___x_1815_;
}
else
{
lean_object* v_key_1816_; lean_object* v_tail_1817_; lean_object* v_fst_1818_; lean_object* v_snd_1819_; lean_object* v_fst_1820_; lean_object* v_snd_1821_; uint8_t v_decide_1822_; 
v_key_1816_ = lean_ctor_get(v_x_1814_, 0);
v_tail_1817_ = lean_ctor_get(v_x_1814_, 2);
v_fst_1818_ = lean_ctor_get(v_key_1816_, 0);
v_snd_1819_ = lean_ctor_get(v_key_1816_, 1);
v_fst_1820_ = lean_ctor_get(v_a_1813_, 0);
v_snd_1821_ = lean_ctor_get(v_a_1813_, 1);
v_decide_1822_ = lean_nat_dec_eq(v_fst_1818_, v_fst_1820_);
if (v_decide_1822_ == 0)
{
v_x_1814_ = v_tail_1817_;
goto _start;
}
else
{
uint8_t v_decide_1824_; 
v_decide_1824_ = lean_nat_dec_eq(v_snd_1819_, v_snd_1821_);
if (v_decide_1824_ == 0)
{
v_x_1814_ = v_tail_1817_;
goto _start;
}
else
{
return v_decide_1824_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___redArg___boxed(lean_object* v_a_1826_, lean_object* v_x_1827_){
_start:
{
uint8_t v_res_1828_; lean_object* v_r_1829_; 
v_res_1828_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___redArg(v_a_1826_, v_x_1827_);
lean_dec(v_x_1827_);
lean_dec_ref(v_a_1826_);
v_r_1829_ = lean_box(v_res_1828_);
return v_r_1829_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18___redArg(lean_object* v_m_1830_, lean_object* v_a_1831_, lean_object* v_b_1832_){
_start:
{
lean_object* v_size_1833_; lean_object* v_buckets_1834_; lean_object* v___x_1836_; uint8_t v_isShared_1837_; uint8_t v_isSharedCheck_1881_; 
v_size_1833_ = lean_ctor_get(v_m_1830_, 0);
v_buckets_1834_ = lean_ctor_get(v_m_1830_, 1);
v_isSharedCheck_1881_ = !lean_is_exclusive(v_m_1830_);
if (v_isSharedCheck_1881_ == 0)
{
v___x_1836_ = v_m_1830_;
v_isShared_1837_ = v_isSharedCheck_1881_;
goto v_resetjp_1835_;
}
else
{
lean_inc(v_buckets_1834_);
lean_inc(v_size_1833_);
lean_dec(v_m_1830_);
v___x_1836_ = lean_box(0);
v_isShared_1837_ = v_isSharedCheck_1881_;
goto v_resetjp_1835_;
}
v_resetjp_1835_:
{
lean_object* v_fst_1838_; lean_object* v_snd_1839_; lean_object* v___x_1840_; uint64_t v___x_1841_; uint64_t v___x_1842_; uint64_t v___x_1843_; uint64_t v___x_1844_; uint64_t v___x_1845_; uint64_t v_fold_1846_; uint64_t v___x_1847_; uint64_t v___x_1848_; uint64_t v___x_1849_; size_t v___x_1850_; size_t v___x_1851_; size_t v___x_1852_; size_t v___x_1853_; size_t v___x_1854_; lean_object* v_bkt_1855_; uint8_t v___x_1856_; 
v_fst_1838_ = lean_ctor_get(v_a_1831_, 0);
v_snd_1839_ = lean_ctor_get(v_a_1831_, 1);
v___x_1840_ = lean_array_get_size(v_buckets_1834_);
v___x_1841_ = l_String_instHashableRaw_hash(v_fst_1838_);
v___x_1842_ = l_String_instHashableRaw_hash(v_snd_1839_);
v___x_1843_ = lean_uint64_mix_hash(v___x_1841_, v___x_1842_);
v___x_1844_ = 32ULL;
v___x_1845_ = lean_uint64_shift_right(v___x_1843_, v___x_1844_);
v_fold_1846_ = lean_uint64_xor(v___x_1843_, v___x_1845_);
v___x_1847_ = 16ULL;
v___x_1848_ = lean_uint64_shift_right(v_fold_1846_, v___x_1847_);
v___x_1849_ = lean_uint64_xor(v_fold_1846_, v___x_1848_);
v___x_1850_ = lean_uint64_to_usize(v___x_1849_);
v___x_1851_ = lean_usize_of_nat(v___x_1840_);
v___x_1852_ = ((size_t)1ULL);
v___x_1853_ = lean_usize_sub(v___x_1851_, v___x_1852_);
v___x_1854_ = lean_usize_land(v___x_1850_, v___x_1853_);
v_bkt_1855_ = lean_array_uget_borrowed(v_buckets_1834_, v___x_1854_);
v___x_1856_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___redArg(v_a_1831_, v_bkt_1855_);
if (v___x_1856_ == 0)
{
lean_object* v___x_1857_; lean_object* v_size_x27_1858_; lean_object* v___x_1859_; lean_object* v_buckets_x27_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; uint8_t v___x_1866_; 
v___x_1857_ = lean_unsigned_to_nat(1u);
v_size_x27_1858_ = lean_nat_add(v_size_1833_, v___x_1857_);
lean_dec(v_size_1833_);
lean_inc(v_bkt_1855_);
v___x_1859_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1859_, 0, v_a_1831_);
lean_ctor_set(v___x_1859_, 1, v_b_1832_);
lean_ctor_set(v___x_1859_, 2, v_bkt_1855_);
v_buckets_x27_1860_ = lean_array_uset(v_buckets_1834_, v___x_1854_, v___x_1859_);
v___x_1861_ = lean_unsigned_to_nat(4u);
v___x_1862_ = lean_nat_mul(v_size_x27_1858_, v___x_1861_);
v___x_1863_ = lean_unsigned_to_nat(3u);
v___x_1864_ = lean_nat_div(v___x_1862_, v___x_1863_);
lean_dec(v___x_1862_);
v___x_1865_ = lean_array_get_size(v_buckets_x27_1860_);
v___x_1866_ = lean_nat_dec_le(v___x_1864_, v___x_1865_);
lean_dec(v___x_1864_);
if (v___x_1866_ == 0)
{
lean_object* v_val_1867_; lean_object* v___x_1869_; 
v_val_1867_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24___redArg(v_buckets_x27_1860_);
if (v_isShared_1837_ == 0)
{
lean_ctor_set(v___x_1836_, 1, v_val_1867_);
lean_ctor_set(v___x_1836_, 0, v_size_x27_1858_);
v___x_1869_ = v___x_1836_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v_size_x27_1858_);
lean_ctor_set(v_reuseFailAlloc_1870_, 1, v_val_1867_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
return v___x_1869_;
}
}
else
{
lean_object* v___x_1872_; 
if (v_isShared_1837_ == 0)
{
lean_ctor_set(v___x_1836_, 1, v_buckets_x27_1860_);
lean_ctor_set(v___x_1836_, 0, v_size_x27_1858_);
v___x_1872_ = v___x_1836_;
goto v_reusejp_1871_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v_size_x27_1858_);
lean_ctor_set(v_reuseFailAlloc_1873_, 1, v_buckets_x27_1860_);
v___x_1872_ = v_reuseFailAlloc_1873_;
goto v_reusejp_1871_;
}
v_reusejp_1871_:
{
return v___x_1872_;
}
}
}
else
{
lean_object* v___x_1874_; lean_object* v_buckets_x27_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1879_; 
lean_inc(v_bkt_1855_);
v___x_1874_ = lean_box(0);
v_buckets_x27_1875_ = lean_array_uset(v_buckets_1834_, v___x_1854_, v___x_1874_);
v___x_1876_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__25___redArg(v_a_1831_, v_b_1832_, v_bkt_1855_);
v___x_1877_ = lean_array_uset(v_buckets_x27_1875_, v___x_1854_, v___x_1876_);
if (v_isShared_1837_ == 0)
{
lean_ctor_set(v___x_1836_, 1, v___x_1877_);
v___x_1879_ = v___x_1836_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v_size_1833_);
lean_ctor_set(v_reuseFailAlloc_1880_, 1, v___x_1877_);
v___x_1879_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
return v___x_1879_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg(uint8_t v___x_1884_, lean_object* v_as_1885_, size_t v_sz_1886_, size_t v_i_1887_, lean_object* v_b_1888_, lean_object* v___y_1889_){
_start:
{
uint8_t v___x_1891_; 
v___x_1891_ = lean_usize_dec_lt(v_i_1887_, v_sz_1886_);
if (v___x_1891_ == 0)
{
lean_object* v___x_1892_; 
v___x_1892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1892_, 0, v_b_1888_);
return v___x_1892_;
}
else
{
lean_object* v_snd_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1930_; 
v_snd_1893_ = lean_ctor_get(v_b_1888_, 1);
v_isSharedCheck_1930_ = !lean_is_exclusive(v_b_1888_);
if (v_isSharedCheck_1930_ == 0)
{
lean_object* v_unused_1931_; 
v_unused_1931_ = lean_ctor_get(v_b_1888_, 0);
lean_dec(v_unused_1931_);
v___x_1895_ = v_b_1888_;
v_isShared_1896_ = v_isSharedCheck_1930_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_snd_1893_);
lean_dec(v_b_1888_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1930_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
lean_object* v_ref_1897_; lean_object* v_a_1898_; lean_object* v_ref_1899_; lean_object* v_msg_1900_; lean_object* v___x_1902_; uint8_t v_isShared_1903_; uint8_t v_isSharedCheck_1929_; 
v_ref_1897_ = lean_ctor_get(v___y_1889_, 2);
v_a_1898_ = lean_array_uget(v_as_1885_, v_i_1887_);
v_ref_1899_ = lean_ctor_get(v_a_1898_, 0);
v_msg_1900_ = lean_ctor_get(v_a_1898_, 1);
v_isSharedCheck_1929_ = !lean_is_exclusive(v_a_1898_);
if (v_isSharedCheck_1929_ == 0)
{
v___x_1902_ = v_a_1898_;
v_isShared_1903_ = v_isSharedCheck_1929_;
goto v_resetjp_1901_;
}
else
{
lean_inc(v_msg_1900_);
lean_inc(v_ref_1899_);
lean_dec(v_a_1898_);
v___x_1902_ = lean_box(0);
v_isShared_1903_ = v_isSharedCheck_1929_;
goto v_resetjp_1901_;
}
v_resetjp_1901_:
{
lean_object* v___x_1904_; lean_object* v___y_1906_; lean_object* v___y_1907_; lean_object* v_ref_1921_; lean_object* v___y_1923_; lean_object* v___x_1926_; 
v___x_1904_ = lean_box(0);
v_ref_1921_ = l_Lean_replaceRef(v_ref_1899_, v_ref_1897_);
lean_dec(v_ref_1899_);
v___x_1926_ = l_Lean_Syntax_getPos_x3f(v_ref_1921_, v___x_1884_);
if (lean_obj_tag(v___x_1926_) == 0)
{
lean_object* v___x_1927_; 
v___x_1927_ = lean_unsigned_to_nat(0u);
v___y_1923_ = v___x_1927_;
goto v___jp_1922_;
}
else
{
lean_object* v_val_1928_; 
v_val_1928_ = lean_ctor_get(v___x_1926_, 0);
lean_inc(v_val_1928_);
lean_dec_ref_known(v___x_1926_, 1);
v___y_1923_ = v_val_1928_;
goto v___jp_1922_;
}
v___jp_1905_:
{
lean_object* v___x_1909_; 
if (v_isShared_1896_ == 0)
{
lean_ctor_set(v___x_1895_, 1, v___y_1907_);
lean_ctor_set(v___x_1895_, 0, v___y_1906_);
v___x_1909_ = v___x_1895_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1920_; 
v_reuseFailAlloc_1920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1920_, 0, v___y_1906_);
lean_ctor_set(v_reuseFailAlloc_1920_, 1, v___y_1907_);
v___x_1909_ = v_reuseFailAlloc_1920_;
goto v_reusejp_1908_;
}
v_reusejp_1908_:
{
lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v_pos2traces_1913_; lean_object* v___x_1915_; 
v___x_1910_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___closed__0));
v___x_1911_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg(v_snd_1893_, v___x_1909_, v___x_1910_);
v___x_1912_ = lean_array_push(v___x_1911_, v_msg_1900_);
v_pos2traces_1913_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18___redArg(v_snd_1893_, v___x_1909_, v___x_1912_);
if (v_isShared_1903_ == 0)
{
lean_ctor_set(v___x_1902_, 1, v_pos2traces_1913_);
lean_ctor_set(v___x_1902_, 0, v___x_1904_);
v___x_1915_ = v___x_1902_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1919_; 
v_reuseFailAlloc_1919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1919_, 0, v___x_1904_);
lean_ctor_set(v_reuseFailAlloc_1919_, 1, v_pos2traces_1913_);
v___x_1915_ = v_reuseFailAlloc_1919_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
size_t v___x_1916_; size_t v___x_1917_; 
v___x_1916_ = ((size_t)1ULL);
v___x_1917_ = lean_usize_add(v_i_1887_, v___x_1916_);
v_i_1887_ = v___x_1917_;
v_b_1888_ = v___x_1915_;
goto _start;
}
}
}
v___jp_1922_:
{
lean_object* v___x_1924_; 
v___x_1924_ = l_Lean_Syntax_getTailPos_x3f(v_ref_1921_, v___x_1884_);
lean_dec(v_ref_1921_);
if (lean_obj_tag(v___x_1924_) == 0)
{
lean_inc(v___y_1923_);
v___y_1906_ = v___y_1923_;
v___y_1907_ = v___y_1923_;
goto v___jp_1905_;
}
else
{
lean_object* v_val_1925_; 
v_val_1925_ = lean_ctor_get(v___x_1924_, 0);
lean_inc(v_val_1925_);
lean_dec_ref_known(v___x_1924_, 1);
v___y_1906_ = v___y_1923_;
v___y_1907_ = v_val_1925_;
goto v___jp_1905_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___boxed(lean_object* v___x_1932_, lean_object* v_as_1933_, lean_object* v_sz_1934_, lean_object* v_i_1935_, lean_object* v_b_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_){
_start:
{
uint8_t v___x_39230__boxed_1939_; size_t v_sz_boxed_1940_; size_t v_i_boxed_1941_; lean_object* v_res_1942_; 
v___x_39230__boxed_1939_ = lean_unbox(v___x_1932_);
v_sz_boxed_1940_ = lean_unbox_usize(v_sz_1934_);
lean_dec(v_sz_1934_);
v_i_boxed_1941_ = lean_unbox_usize(v_i_1935_);
lean_dec(v_i_1935_);
v_res_1942_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg(v___x_39230__boxed_1939_, v_as_1933_, v_sz_boxed_1940_, v_i_boxed_1941_, v_b_1936_, v___y_1937_);
lean_dec_ref(v___y_1937_);
lean_dec_ref(v_as_1933_);
return v_res_1942_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40(uint8_t v___x_1943_, lean_object* v_as_1944_, size_t v_sz_1945_, size_t v_i_1946_, lean_object* v_b_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_){
_start:
{
uint8_t v___x_1951_; 
v___x_1951_ = lean_usize_dec_lt(v_i_1946_, v_sz_1945_);
if (v___x_1951_ == 0)
{
lean_object* v___x_1952_; 
v___x_1952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1952_, 0, v_b_1947_);
return v___x_1952_;
}
else
{
lean_object* v_snd_1953_; lean_object* v___x_1955_; uint8_t v_isShared_1956_; uint8_t v_isSharedCheck_1990_; 
v_snd_1953_ = lean_ctor_get(v_b_1947_, 1);
v_isSharedCheck_1990_ = !lean_is_exclusive(v_b_1947_);
if (v_isSharedCheck_1990_ == 0)
{
lean_object* v_unused_1991_; 
v_unused_1991_ = lean_ctor_get(v_b_1947_, 0);
lean_dec(v_unused_1991_);
v___x_1955_ = v_b_1947_;
v_isShared_1956_ = v_isSharedCheck_1990_;
goto v_resetjp_1954_;
}
else
{
lean_inc(v_snd_1953_);
lean_dec(v_b_1947_);
v___x_1955_ = lean_box(0);
v_isShared_1956_ = v_isSharedCheck_1990_;
goto v_resetjp_1954_;
}
v_resetjp_1954_:
{
lean_object* v_ref_1957_; lean_object* v_a_1958_; lean_object* v_ref_1959_; lean_object* v_msg_1960_; lean_object* v___x_1962_; uint8_t v_isShared_1963_; uint8_t v_isSharedCheck_1989_; 
v_ref_1957_ = lean_ctor_get(v___y_1948_, 2);
v_a_1958_ = lean_array_uget(v_as_1944_, v_i_1946_);
v_ref_1959_ = lean_ctor_get(v_a_1958_, 0);
v_msg_1960_ = lean_ctor_get(v_a_1958_, 1);
v_isSharedCheck_1989_ = !lean_is_exclusive(v_a_1958_);
if (v_isSharedCheck_1989_ == 0)
{
v___x_1962_ = v_a_1958_;
v_isShared_1963_ = v_isSharedCheck_1989_;
goto v_resetjp_1961_;
}
else
{
lean_inc(v_msg_1960_);
lean_inc(v_ref_1959_);
lean_dec(v_a_1958_);
v___x_1962_ = lean_box(0);
v_isShared_1963_ = v_isSharedCheck_1989_;
goto v_resetjp_1961_;
}
v_resetjp_1961_:
{
lean_object* v___x_1964_; lean_object* v___y_1966_; lean_object* v___y_1967_; lean_object* v_ref_1981_; lean_object* v___y_1983_; lean_object* v___x_1986_; 
v___x_1964_ = lean_box(0);
v_ref_1981_ = l_Lean_replaceRef(v_ref_1959_, v_ref_1957_);
lean_dec(v_ref_1959_);
v___x_1986_ = l_Lean_Syntax_getPos_x3f(v_ref_1981_, v___x_1943_);
if (lean_obj_tag(v___x_1986_) == 0)
{
lean_object* v___x_1987_; 
v___x_1987_ = lean_unsigned_to_nat(0u);
v___y_1983_ = v___x_1987_;
goto v___jp_1982_;
}
else
{
lean_object* v_val_1988_; 
v_val_1988_ = lean_ctor_get(v___x_1986_, 0);
lean_inc(v_val_1988_);
lean_dec_ref_known(v___x_1986_, 1);
v___y_1983_ = v_val_1988_;
goto v___jp_1982_;
}
v___jp_1965_:
{
lean_object* v___x_1969_; 
if (v_isShared_1956_ == 0)
{
lean_ctor_set(v___x_1955_, 1, v___y_1967_);
lean_ctor_set(v___x_1955_, 0, v___y_1966_);
v___x_1969_ = v___x_1955_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1980_; 
v_reuseFailAlloc_1980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1980_, 0, v___y_1966_);
lean_ctor_set(v_reuseFailAlloc_1980_, 1, v___y_1967_);
v___x_1969_ = v_reuseFailAlloc_1980_;
goto v_reusejp_1968_;
}
v_reusejp_1968_:
{
lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v_pos2traces_1973_; lean_object* v___x_1975_; 
v___x_1970_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___closed__0));
v___x_1971_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg(v_snd_1953_, v___x_1969_, v___x_1970_);
v___x_1972_ = lean_array_push(v___x_1971_, v_msg_1960_);
v_pos2traces_1973_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18___redArg(v_snd_1953_, v___x_1969_, v___x_1972_);
if (v_isShared_1963_ == 0)
{
lean_ctor_set(v___x_1962_, 1, v_pos2traces_1973_);
lean_ctor_set(v___x_1962_, 0, v___x_1964_);
v___x_1975_ = v___x_1962_;
goto v_reusejp_1974_;
}
else
{
lean_object* v_reuseFailAlloc_1979_; 
v_reuseFailAlloc_1979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1979_, 0, v___x_1964_);
lean_ctor_set(v_reuseFailAlloc_1979_, 1, v_pos2traces_1973_);
v___x_1975_ = v_reuseFailAlloc_1979_;
goto v_reusejp_1974_;
}
v_reusejp_1974_:
{
size_t v___x_1976_; size_t v___x_1977_; lean_object* v___x_1978_; 
v___x_1976_ = ((size_t)1ULL);
v___x_1977_ = lean_usize_add(v_i_1946_, v___x_1976_);
v___x_1978_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg(v___x_1943_, v_as_1944_, v_sz_1945_, v___x_1977_, v___x_1975_, v___y_1948_);
return v___x_1978_;
}
}
}
v___jp_1982_:
{
lean_object* v___x_1984_; 
v___x_1984_ = l_Lean_Syntax_getTailPos_x3f(v_ref_1981_, v___x_1943_);
lean_dec(v_ref_1981_);
if (lean_obj_tag(v___x_1984_) == 0)
{
lean_inc(v___y_1983_);
v___y_1966_ = v___y_1983_;
v___y_1967_ = v___y_1983_;
goto v___jp_1965_;
}
else
{
lean_object* v_val_1985_; 
v_val_1985_ = lean_ctor_get(v___x_1984_, 0);
lean_inc(v_val_1985_);
lean_dec_ref_known(v___x_1984_, 1);
v___y_1966_ = v___y_1983_;
v___y_1967_ = v_val_1985_;
goto v___jp_1965_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40___boxed(lean_object* v___x_1992_, lean_object* v_as_1993_, lean_object* v_sz_1994_, lean_object* v_i_1995_, lean_object* v_b_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_){
_start:
{
uint8_t v___x_39311__boxed_2000_; size_t v_sz_boxed_2001_; size_t v_i_boxed_2002_; lean_object* v_res_2003_; 
v___x_39311__boxed_2000_ = lean_unbox(v___x_1992_);
v_sz_boxed_2001_ = lean_unbox_usize(v_sz_1994_);
lean_dec(v_sz_1994_);
v_i_boxed_2002_ = lean_unbox_usize(v_i_1995_);
lean_dec(v_i_1995_);
v_res_2003_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40(v___x_39311__boxed_2000_, v_as_1993_, v_sz_boxed_2001_, v_i_boxed_2002_, v_b_1996_, v___y_1997_, v___y_1998_);
lean_dec(v___y_1998_);
lean_dec_ref(v___y_1997_);
lean_dec_ref(v_as_1993_);
return v_res_2003_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27(lean_object* v_init_2004_, uint8_t v___x_2005_, lean_object* v_n_2006_, lean_object* v_b_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_){
_start:
{
if (lean_obj_tag(v_n_2006_) == 0)
{
lean_object* v_cs_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; size_t v_sz_2014_; size_t v___x_2015_; lean_object* v___x_2016_; 
v_cs_2011_ = lean_ctor_get(v_n_2006_, 0);
v___x_2012_ = lean_box(0);
v___x_2013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2013_, 0, v___x_2012_);
lean_ctor_set(v___x_2013_, 1, v_b_2007_);
v_sz_2014_ = lean_array_size(v_cs_2011_);
v___x_2015_ = ((size_t)0ULL);
v___x_2016_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__39(v_init_2004_, v___x_2005_, v_cs_2011_, v_sz_2014_, v___x_2015_, v___x_2013_, v___y_2008_, v___y_2009_);
if (lean_obj_tag(v___x_2016_) == 0)
{
lean_object* v_a_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2031_; 
v_a_2017_ = lean_ctor_get(v___x_2016_, 0);
v_isSharedCheck_2031_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2031_ == 0)
{
v___x_2019_ = v___x_2016_;
v_isShared_2020_ = v_isSharedCheck_2031_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_a_2017_);
lean_dec(v___x_2016_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2031_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v_fst_2021_; 
v_fst_2021_ = lean_ctor_get(v_a_2017_, 0);
if (lean_obj_tag(v_fst_2021_) == 0)
{
lean_object* v_snd_2022_; lean_object* v___x_2023_; lean_object* v___x_2025_; 
v_snd_2022_ = lean_ctor_get(v_a_2017_, 1);
lean_inc(v_snd_2022_);
lean_dec(v_a_2017_);
v___x_2023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2023_, 0, v_snd_2022_);
if (v_isShared_2020_ == 0)
{
lean_ctor_set(v___x_2019_, 0, v___x_2023_);
v___x_2025_ = v___x_2019_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v___x_2023_);
v___x_2025_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
return v___x_2025_;
}
}
else
{
lean_object* v_val_2027_; lean_object* v___x_2029_; 
lean_inc_ref(v_fst_2021_);
lean_dec(v_a_2017_);
v_val_2027_ = lean_ctor_get(v_fst_2021_, 0);
lean_inc(v_val_2027_);
lean_dec_ref_known(v_fst_2021_, 1);
if (v_isShared_2020_ == 0)
{
lean_ctor_set(v___x_2019_, 0, v_val_2027_);
v___x_2029_ = v___x_2019_;
goto v_reusejp_2028_;
}
else
{
lean_object* v_reuseFailAlloc_2030_; 
v_reuseFailAlloc_2030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2030_, 0, v_val_2027_);
v___x_2029_ = v_reuseFailAlloc_2030_;
goto v_reusejp_2028_;
}
v_reusejp_2028_:
{
return v___x_2029_;
}
}
}
}
else
{
lean_object* v_a_2032_; lean_object* v___x_2034_; uint8_t v_isShared_2035_; uint8_t v_isSharedCheck_2039_; 
v_a_2032_ = lean_ctor_get(v___x_2016_, 0);
v_isSharedCheck_2039_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2039_ == 0)
{
v___x_2034_ = v___x_2016_;
v_isShared_2035_ = v_isSharedCheck_2039_;
goto v_resetjp_2033_;
}
else
{
lean_inc(v_a_2032_);
lean_dec(v___x_2016_);
v___x_2034_ = lean_box(0);
v_isShared_2035_ = v_isSharedCheck_2039_;
goto v_resetjp_2033_;
}
v_resetjp_2033_:
{
lean_object* v___x_2037_; 
if (v_isShared_2035_ == 0)
{
v___x_2037_ = v___x_2034_;
goto v_reusejp_2036_;
}
else
{
lean_object* v_reuseFailAlloc_2038_; 
v_reuseFailAlloc_2038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2038_, 0, v_a_2032_);
v___x_2037_ = v_reuseFailAlloc_2038_;
goto v_reusejp_2036_;
}
v_reusejp_2036_:
{
return v___x_2037_;
}
}
}
}
else
{
lean_object* v_vs_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; size_t v_sz_2043_; size_t v___x_2044_; lean_object* v___x_2045_; 
v_vs_2040_ = lean_ctor_get(v_n_2006_, 0);
v___x_2041_ = lean_box(0);
v___x_2042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2042_, 0, v___x_2041_);
lean_ctor_set(v___x_2042_, 1, v_b_2007_);
v_sz_2043_ = lean_array_size(v_vs_2040_);
v___x_2044_ = ((size_t)0ULL);
v___x_2045_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40(v___x_2005_, v_vs_2040_, v_sz_2043_, v___x_2044_, v___x_2042_, v___y_2008_, v___y_2009_);
if (lean_obj_tag(v___x_2045_) == 0)
{
lean_object* v_a_2046_; lean_object* v___x_2048_; uint8_t v_isShared_2049_; uint8_t v_isSharedCheck_2060_; 
v_a_2046_ = lean_ctor_get(v___x_2045_, 0);
v_isSharedCheck_2060_ = !lean_is_exclusive(v___x_2045_);
if (v_isSharedCheck_2060_ == 0)
{
v___x_2048_ = v___x_2045_;
v_isShared_2049_ = v_isSharedCheck_2060_;
goto v_resetjp_2047_;
}
else
{
lean_inc(v_a_2046_);
lean_dec(v___x_2045_);
v___x_2048_ = lean_box(0);
v_isShared_2049_ = v_isSharedCheck_2060_;
goto v_resetjp_2047_;
}
v_resetjp_2047_:
{
lean_object* v_fst_2050_; 
v_fst_2050_ = lean_ctor_get(v_a_2046_, 0);
if (lean_obj_tag(v_fst_2050_) == 0)
{
lean_object* v_snd_2051_; lean_object* v___x_2052_; lean_object* v___x_2054_; 
v_snd_2051_ = lean_ctor_get(v_a_2046_, 1);
lean_inc(v_snd_2051_);
lean_dec(v_a_2046_);
v___x_2052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2052_, 0, v_snd_2051_);
if (v_isShared_2049_ == 0)
{
lean_ctor_set(v___x_2048_, 0, v___x_2052_);
v___x_2054_ = v___x_2048_;
goto v_reusejp_2053_;
}
else
{
lean_object* v_reuseFailAlloc_2055_; 
v_reuseFailAlloc_2055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2055_, 0, v___x_2052_);
v___x_2054_ = v_reuseFailAlloc_2055_;
goto v_reusejp_2053_;
}
v_reusejp_2053_:
{
return v___x_2054_;
}
}
else
{
lean_object* v_val_2056_; lean_object* v___x_2058_; 
lean_inc_ref(v_fst_2050_);
lean_dec(v_a_2046_);
v_val_2056_ = lean_ctor_get(v_fst_2050_, 0);
lean_inc(v_val_2056_);
lean_dec_ref_known(v_fst_2050_, 1);
if (v_isShared_2049_ == 0)
{
lean_ctor_set(v___x_2048_, 0, v_val_2056_);
v___x_2058_ = v___x_2048_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v_val_2056_);
v___x_2058_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
return v___x_2058_;
}
}
}
}
else
{
lean_object* v_a_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2068_; 
v_a_2061_ = lean_ctor_get(v___x_2045_, 0);
v_isSharedCheck_2068_ = !lean_is_exclusive(v___x_2045_);
if (v_isSharedCheck_2068_ == 0)
{
v___x_2063_ = v___x_2045_;
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
else
{
lean_inc(v_a_2061_);
lean_dec(v___x_2045_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v___x_2066_; 
if (v_isShared_2064_ == 0)
{
v___x_2066_ = v___x_2063_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v_a_2061_);
v___x_2066_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
return v___x_2066_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__39(lean_object* v_init_2069_, uint8_t v___x_2070_, lean_object* v_as_2071_, size_t v_sz_2072_, size_t v_i_2073_, lean_object* v_b_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_){
_start:
{
uint8_t v___x_2078_; 
v___x_2078_ = lean_usize_dec_lt(v_i_2073_, v_sz_2072_);
if (v___x_2078_ == 0)
{
lean_object* v___x_2079_; 
v___x_2079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2079_, 0, v_b_2074_);
return v___x_2079_;
}
else
{
lean_object* v_snd_2080_; lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2114_; 
v_snd_2080_ = lean_ctor_get(v_b_2074_, 1);
v_isSharedCheck_2114_ = !lean_is_exclusive(v_b_2074_);
if (v_isSharedCheck_2114_ == 0)
{
lean_object* v_unused_2115_; 
v_unused_2115_ = lean_ctor_get(v_b_2074_, 0);
lean_dec(v_unused_2115_);
v___x_2082_ = v_b_2074_;
v_isShared_2083_ = v_isSharedCheck_2114_;
goto v_resetjp_2081_;
}
else
{
lean_inc(v_snd_2080_);
lean_dec(v_b_2074_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2114_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v___x_2084_; lean_object* v_a_2085_; lean_object* v___x_2086_; 
v___x_2084_ = lean_box(0);
v_a_2085_ = lean_array_uget_borrowed(v_as_2071_, v_i_2073_);
lean_inc(v_snd_2080_);
v___x_2086_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27(v_init_2069_, v___x_2070_, v_a_2085_, v_snd_2080_, v___y_2075_, v___y_2076_);
if (lean_obj_tag(v___x_2086_) == 0)
{
lean_object* v_a_2087_; lean_object* v___x_2089_; uint8_t v_isShared_2090_; uint8_t v_isSharedCheck_2105_; 
v_a_2087_ = lean_ctor_get(v___x_2086_, 0);
v_isSharedCheck_2105_ = !lean_is_exclusive(v___x_2086_);
if (v_isSharedCheck_2105_ == 0)
{
v___x_2089_ = v___x_2086_;
v_isShared_2090_ = v_isSharedCheck_2105_;
goto v_resetjp_2088_;
}
else
{
lean_inc(v_a_2087_);
lean_dec(v___x_2086_);
v___x_2089_ = lean_box(0);
v_isShared_2090_ = v_isSharedCheck_2105_;
goto v_resetjp_2088_;
}
v_resetjp_2088_:
{
if (lean_obj_tag(v_a_2087_) == 0)
{
lean_object* v___x_2091_; lean_object* v___x_2093_; 
v___x_2091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2091_, 0, v_a_2087_);
if (v_isShared_2083_ == 0)
{
lean_ctor_set(v___x_2082_, 0, v___x_2091_);
v___x_2093_ = v___x_2082_;
goto v_reusejp_2092_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v___x_2091_);
lean_ctor_set(v_reuseFailAlloc_2097_, 1, v_snd_2080_);
v___x_2093_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2092_;
}
v_reusejp_2092_:
{
lean_object* v___x_2095_; 
if (v_isShared_2090_ == 0)
{
lean_ctor_set(v___x_2089_, 0, v___x_2093_);
v___x_2095_ = v___x_2089_;
goto v_reusejp_2094_;
}
else
{
lean_object* v_reuseFailAlloc_2096_; 
v_reuseFailAlloc_2096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2096_, 0, v___x_2093_);
v___x_2095_ = v_reuseFailAlloc_2096_;
goto v_reusejp_2094_;
}
v_reusejp_2094_:
{
return v___x_2095_;
}
}
}
else
{
lean_object* v_a_2098_; lean_object* v___x_2100_; 
lean_del_object(v___x_2089_);
lean_dec(v_snd_2080_);
v_a_2098_ = lean_ctor_get(v_a_2087_, 0);
lean_inc(v_a_2098_);
lean_dec_ref_known(v_a_2087_, 1);
if (v_isShared_2083_ == 0)
{
lean_ctor_set(v___x_2082_, 1, v_a_2098_);
lean_ctor_set(v___x_2082_, 0, v___x_2084_);
v___x_2100_ = v___x_2082_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2104_; 
v_reuseFailAlloc_2104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2104_, 0, v___x_2084_);
lean_ctor_set(v_reuseFailAlloc_2104_, 1, v_a_2098_);
v___x_2100_ = v_reuseFailAlloc_2104_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
size_t v___x_2101_; size_t v___x_2102_; 
v___x_2101_ = ((size_t)1ULL);
v___x_2102_ = lean_usize_add(v_i_2073_, v___x_2101_);
v_i_2073_ = v___x_2102_;
v_b_2074_ = v___x_2100_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2113_; 
lean_del_object(v___x_2082_);
lean_dec(v_snd_2080_);
v_a_2106_ = lean_ctor_get(v___x_2086_, 0);
v_isSharedCheck_2113_ = !lean_is_exclusive(v___x_2086_);
if (v_isSharedCheck_2113_ == 0)
{
v___x_2108_ = v___x_2086_;
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
else
{
lean_inc(v_a_2106_);
lean_dec(v___x_2086_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v___x_2111_; 
if (v_isShared_2109_ == 0)
{
v___x_2111_ = v___x_2108_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v_a_2106_);
v___x_2111_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
return v___x_2111_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__39___boxed(lean_object* v_init_2116_, lean_object* v___x_2117_, lean_object* v_as_2118_, lean_object* v_sz_2119_, lean_object* v_i_2120_, lean_object* v_b_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_){
_start:
{
uint8_t v___x_39392__boxed_2125_; size_t v_sz_boxed_2126_; size_t v_i_boxed_2127_; lean_object* v_res_2128_; 
v___x_39392__boxed_2125_ = lean_unbox(v___x_2117_);
v_sz_boxed_2126_ = lean_unbox_usize(v_sz_2119_);
lean_dec(v_sz_2119_);
v_i_boxed_2127_ = lean_unbox_usize(v_i_2120_);
lean_dec(v_i_2120_);
v_res_2128_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__39(v_init_2116_, v___x_39392__boxed_2125_, v_as_2118_, v_sz_boxed_2126_, v_i_boxed_2127_, v_b_2121_, v___y_2122_, v___y_2123_);
lean_dec(v___y_2123_);
lean_dec_ref(v___y_2122_);
lean_dec_ref(v_as_2118_);
lean_dec_ref(v_init_2116_);
return v_res_2128_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27___boxed(lean_object* v_init_2129_, lean_object* v___x_2130_, lean_object* v_n_2131_, lean_object* v_b_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_){
_start:
{
uint8_t v___x_39412__boxed_2136_; lean_object* v_res_2137_; 
v___x_39412__boxed_2136_ = lean_unbox(v___x_2130_);
v_res_2137_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27(v_init_2129_, v___x_39412__boxed_2136_, v_n_2131_, v_b_2132_, v___y_2133_, v___y_2134_);
lean_dec(v___y_2134_);
lean_dec_ref(v___y_2133_);
lean_dec_ref(v_n_2131_);
lean_dec_ref(v_init_2129_);
return v_res_2137_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___redArg(uint8_t v___x_2138_, lean_object* v_as_2139_, size_t v_sz_2140_, size_t v_i_2141_, lean_object* v_b_2142_, lean_object* v___y_2143_){
_start:
{
uint8_t v___x_2145_; 
v___x_2145_ = lean_usize_dec_lt(v_i_2141_, v_sz_2140_);
if (v___x_2145_ == 0)
{
lean_object* v___x_2146_; 
v___x_2146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2146_, 0, v_b_2142_);
return v___x_2146_;
}
else
{
lean_object* v_snd_2147_; lean_object* v___x_2149_; uint8_t v_isShared_2150_; uint8_t v_isSharedCheck_2184_; 
v_snd_2147_ = lean_ctor_get(v_b_2142_, 1);
v_isSharedCheck_2184_ = !lean_is_exclusive(v_b_2142_);
if (v_isSharedCheck_2184_ == 0)
{
lean_object* v_unused_2185_; 
v_unused_2185_ = lean_ctor_get(v_b_2142_, 0);
lean_dec(v_unused_2185_);
v___x_2149_ = v_b_2142_;
v_isShared_2150_ = v_isSharedCheck_2184_;
goto v_resetjp_2148_;
}
else
{
lean_inc(v_snd_2147_);
lean_dec(v_b_2142_);
v___x_2149_ = lean_box(0);
v_isShared_2150_ = v_isSharedCheck_2184_;
goto v_resetjp_2148_;
}
v_resetjp_2148_:
{
lean_object* v_ref_2151_; lean_object* v_a_2152_; lean_object* v_ref_2153_; lean_object* v_msg_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2183_; 
v_ref_2151_ = lean_ctor_get(v___y_2143_, 2);
v_a_2152_ = lean_array_uget(v_as_2139_, v_i_2141_);
v_ref_2153_ = lean_ctor_get(v_a_2152_, 0);
v_msg_2154_ = lean_ctor_get(v_a_2152_, 1);
v_isSharedCheck_2183_ = !lean_is_exclusive(v_a_2152_);
if (v_isSharedCheck_2183_ == 0)
{
v___x_2156_ = v_a_2152_;
v_isShared_2157_ = v_isSharedCheck_2183_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_msg_2154_);
lean_inc(v_ref_2153_);
lean_dec(v_a_2152_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2183_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
lean_object* v___x_2158_; lean_object* v___y_2160_; lean_object* v___y_2161_; lean_object* v_ref_2175_; lean_object* v___y_2177_; lean_object* v___x_2180_; 
v___x_2158_ = lean_box(0);
v_ref_2175_ = l_Lean_replaceRef(v_ref_2153_, v_ref_2151_);
lean_dec(v_ref_2153_);
v___x_2180_ = l_Lean_Syntax_getPos_x3f(v_ref_2175_, v___x_2138_);
if (lean_obj_tag(v___x_2180_) == 0)
{
lean_object* v___x_2181_; 
v___x_2181_ = lean_unsigned_to_nat(0u);
v___y_2177_ = v___x_2181_;
goto v___jp_2176_;
}
else
{
lean_object* v_val_2182_; 
v_val_2182_ = lean_ctor_get(v___x_2180_, 0);
lean_inc(v_val_2182_);
lean_dec_ref_known(v___x_2180_, 1);
v___y_2177_ = v_val_2182_;
goto v___jp_2176_;
}
v___jp_2159_:
{
lean_object* v___x_2163_; 
if (v_isShared_2150_ == 0)
{
lean_ctor_set(v___x_2149_, 1, v___y_2161_);
lean_ctor_set(v___x_2149_, 0, v___y_2160_);
v___x_2163_ = v___x_2149_;
goto v_reusejp_2162_;
}
else
{
lean_object* v_reuseFailAlloc_2174_; 
v_reuseFailAlloc_2174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2174_, 0, v___y_2160_);
lean_ctor_set(v_reuseFailAlloc_2174_, 1, v___y_2161_);
v___x_2163_ = v_reuseFailAlloc_2174_;
goto v_reusejp_2162_;
}
v_reusejp_2162_:
{
lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v_pos2traces_2167_; lean_object* v___x_2169_; 
v___x_2164_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___closed__0));
v___x_2165_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg(v_snd_2147_, v___x_2163_, v___x_2164_);
v___x_2166_ = lean_array_push(v___x_2165_, v_msg_2154_);
v_pos2traces_2167_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18___redArg(v_snd_2147_, v___x_2163_, v___x_2166_);
if (v_isShared_2157_ == 0)
{
lean_ctor_set(v___x_2156_, 1, v_pos2traces_2167_);
lean_ctor_set(v___x_2156_, 0, v___x_2158_);
v___x_2169_ = v___x_2156_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v___x_2158_);
lean_ctor_set(v_reuseFailAlloc_2173_, 1, v_pos2traces_2167_);
v___x_2169_ = v_reuseFailAlloc_2173_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
size_t v___x_2170_; size_t v___x_2171_; 
v___x_2170_ = ((size_t)1ULL);
v___x_2171_ = lean_usize_add(v_i_2141_, v___x_2170_);
v_i_2141_ = v___x_2171_;
v_b_2142_ = v___x_2169_;
goto _start;
}
}
}
v___jp_2176_:
{
lean_object* v___x_2178_; 
v___x_2178_ = l_Lean_Syntax_getTailPos_x3f(v_ref_2175_, v___x_2138_);
lean_dec(v_ref_2175_);
if (lean_obj_tag(v___x_2178_) == 0)
{
lean_inc(v___y_2177_);
v___y_2160_ = v___y_2177_;
v___y_2161_ = v___y_2177_;
goto v___jp_2159_;
}
else
{
lean_object* v_val_2179_; 
v_val_2179_ = lean_ctor_get(v___x_2178_, 0);
lean_inc(v_val_2179_);
lean_dec_ref_known(v___x_2178_, 1);
v___y_2160_ = v___y_2177_;
v___y_2161_ = v_val_2179_;
goto v___jp_2159_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___redArg___boxed(lean_object* v___x_2186_, lean_object* v_as_2187_, lean_object* v_sz_2188_, lean_object* v_i_2189_, lean_object* v_b_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_){
_start:
{
uint8_t v___x_39595__boxed_2193_; size_t v_sz_boxed_2194_; size_t v_i_boxed_2195_; lean_object* v_res_2196_; 
v___x_39595__boxed_2193_ = lean_unbox(v___x_2186_);
v_sz_boxed_2194_ = lean_unbox_usize(v_sz_2188_);
lean_dec(v_sz_2188_);
v_i_boxed_2195_ = lean_unbox_usize(v_i_2189_);
lean_dec(v_i_2189_);
v_res_2196_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___redArg(v___x_39595__boxed_2193_, v_as_2187_, v_sz_boxed_2194_, v_i_boxed_2195_, v_b_2190_, v___y_2191_);
lean_dec_ref(v___y_2191_);
lean_dec_ref(v_as_2187_);
return v_res_2196_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28(uint8_t v___x_2197_, lean_object* v_as_2198_, size_t v_sz_2199_, size_t v_i_2200_, lean_object* v_b_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_){
_start:
{
uint8_t v___x_2205_; 
v___x_2205_ = lean_usize_dec_lt(v_i_2200_, v_sz_2199_);
if (v___x_2205_ == 0)
{
lean_object* v___x_2206_; 
v___x_2206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2206_, 0, v_b_2201_);
return v___x_2206_;
}
else
{
lean_object* v_snd_2207_; lean_object* v___x_2209_; uint8_t v_isShared_2210_; uint8_t v_isSharedCheck_2244_; 
v_snd_2207_ = lean_ctor_get(v_b_2201_, 1);
v_isSharedCheck_2244_ = !lean_is_exclusive(v_b_2201_);
if (v_isSharedCheck_2244_ == 0)
{
lean_object* v_unused_2245_; 
v_unused_2245_ = lean_ctor_get(v_b_2201_, 0);
lean_dec(v_unused_2245_);
v___x_2209_ = v_b_2201_;
v_isShared_2210_ = v_isSharedCheck_2244_;
goto v_resetjp_2208_;
}
else
{
lean_inc(v_snd_2207_);
lean_dec(v_b_2201_);
v___x_2209_ = lean_box(0);
v_isShared_2210_ = v_isSharedCheck_2244_;
goto v_resetjp_2208_;
}
v_resetjp_2208_:
{
lean_object* v_ref_2211_; lean_object* v_a_2212_; lean_object* v_ref_2213_; lean_object* v_msg_2214_; lean_object* v___x_2216_; uint8_t v_isShared_2217_; uint8_t v_isSharedCheck_2243_; 
v_ref_2211_ = lean_ctor_get(v___y_2202_, 2);
v_a_2212_ = lean_array_uget(v_as_2198_, v_i_2200_);
v_ref_2213_ = lean_ctor_get(v_a_2212_, 0);
v_msg_2214_ = lean_ctor_get(v_a_2212_, 1);
v_isSharedCheck_2243_ = !lean_is_exclusive(v_a_2212_);
if (v_isSharedCheck_2243_ == 0)
{
v___x_2216_ = v_a_2212_;
v_isShared_2217_ = v_isSharedCheck_2243_;
goto v_resetjp_2215_;
}
else
{
lean_inc(v_msg_2214_);
lean_inc(v_ref_2213_);
lean_dec(v_a_2212_);
v___x_2216_ = lean_box(0);
v_isShared_2217_ = v_isSharedCheck_2243_;
goto v_resetjp_2215_;
}
v_resetjp_2215_:
{
lean_object* v___x_2218_; lean_object* v___y_2220_; lean_object* v___y_2221_; lean_object* v_ref_2235_; lean_object* v___y_2237_; lean_object* v___x_2240_; 
v___x_2218_ = lean_box(0);
v_ref_2235_ = l_Lean_replaceRef(v_ref_2213_, v_ref_2211_);
lean_dec(v_ref_2213_);
v___x_2240_ = l_Lean_Syntax_getPos_x3f(v_ref_2235_, v___x_2197_);
if (lean_obj_tag(v___x_2240_) == 0)
{
lean_object* v___x_2241_; 
v___x_2241_ = lean_unsigned_to_nat(0u);
v___y_2237_ = v___x_2241_;
goto v___jp_2236_;
}
else
{
lean_object* v_val_2242_; 
v_val_2242_ = lean_ctor_get(v___x_2240_, 0);
lean_inc(v_val_2242_);
lean_dec_ref_known(v___x_2240_, 1);
v___y_2237_ = v_val_2242_;
goto v___jp_2236_;
}
v___jp_2219_:
{
lean_object* v___x_2223_; 
if (v_isShared_2210_ == 0)
{
lean_ctor_set(v___x_2209_, 1, v___y_2221_);
lean_ctor_set(v___x_2209_, 0, v___y_2220_);
v___x_2223_ = v___x_2209_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2234_; 
v_reuseFailAlloc_2234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2234_, 0, v___y_2220_);
lean_ctor_set(v_reuseFailAlloc_2234_, 1, v___y_2221_);
v___x_2223_ = v_reuseFailAlloc_2234_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v_pos2traces_2227_; lean_object* v___x_2229_; 
v___x_2224_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___closed__0));
v___x_2225_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg(v_snd_2207_, v___x_2223_, v___x_2224_);
v___x_2226_ = lean_array_push(v___x_2225_, v_msg_2214_);
v_pos2traces_2227_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18___redArg(v_snd_2207_, v___x_2223_, v___x_2226_);
if (v_isShared_2217_ == 0)
{
lean_ctor_set(v___x_2216_, 1, v_pos2traces_2227_);
lean_ctor_set(v___x_2216_, 0, v___x_2218_);
v___x_2229_ = v___x_2216_;
goto v_reusejp_2228_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v___x_2218_);
lean_ctor_set(v_reuseFailAlloc_2233_, 1, v_pos2traces_2227_);
v___x_2229_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2228_;
}
v_reusejp_2228_:
{
size_t v___x_2230_; size_t v___x_2231_; lean_object* v___x_2232_; 
v___x_2230_ = ((size_t)1ULL);
v___x_2231_ = lean_usize_add(v_i_2200_, v___x_2230_);
v___x_2232_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___redArg(v___x_2197_, v_as_2198_, v_sz_2199_, v___x_2231_, v___x_2229_, v___y_2202_);
return v___x_2232_;
}
}
}
v___jp_2236_:
{
lean_object* v___x_2238_; 
v___x_2238_ = l_Lean_Syntax_getTailPos_x3f(v_ref_2235_, v___x_2197_);
lean_dec(v_ref_2235_);
if (lean_obj_tag(v___x_2238_) == 0)
{
lean_inc(v___y_2237_);
v___y_2220_ = v___y_2237_;
v___y_2221_ = v___y_2237_;
goto v___jp_2219_;
}
else
{
lean_object* v_val_2239_; 
v_val_2239_ = lean_ctor_get(v___x_2238_, 0);
lean_inc(v_val_2239_);
lean_dec_ref_known(v___x_2238_, 1);
v___y_2220_ = v___y_2237_;
v___y_2221_ = v_val_2239_;
goto v___jp_2219_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28___boxed(lean_object* v___x_2246_, lean_object* v_as_2247_, lean_object* v_sz_2248_, lean_object* v_i_2249_, lean_object* v_b_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_){
_start:
{
uint8_t v___x_39675__boxed_2254_; size_t v_sz_boxed_2255_; size_t v_i_boxed_2256_; lean_object* v_res_2257_; 
v___x_39675__boxed_2254_ = lean_unbox(v___x_2246_);
v_sz_boxed_2255_ = lean_unbox_usize(v_sz_2248_);
lean_dec(v_sz_2248_);
v_i_boxed_2256_ = lean_unbox_usize(v_i_2249_);
lean_dec(v_i_2249_);
v_res_2257_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28(v___x_39675__boxed_2254_, v_as_2247_, v_sz_boxed_2255_, v_i_boxed_2256_, v_b_2250_, v___y_2251_, v___y_2252_);
lean_dec(v___y_2252_);
lean_dec_ref(v___y_2251_);
lean_dec_ref(v_as_2247_);
return v_res_2257_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19(uint8_t v___x_2258_, lean_object* v_t_2259_, lean_object* v_init_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_){
_start:
{
lean_object* v_root_2264_; lean_object* v_tail_2265_; lean_object* v___x_2266_; 
v_root_2264_ = lean_ctor_get(v_t_2259_, 0);
v_tail_2265_ = lean_ctor_get(v_t_2259_, 1);
lean_inc_ref(v_init_2260_);
v___x_2266_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27(v_init_2260_, v___x_2258_, v_root_2264_, v_init_2260_, v___y_2261_, v___y_2262_);
lean_dec_ref(v_init_2260_);
if (lean_obj_tag(v___x_2266_) == 0)
{
lean_object* v_a_2267_; lean_object* v___x_2269_; uint8_t v_isShared_2270_; uint8_t v_isSharedCheck_2303_; 
v_a_2267_ = lean_ctor_get(v___x_2266_, 0);
v_isSharedCheck_2303_ = !lean_is_exclusive(v___x_2266_);
if (v_isSharedCheck_2303_ == 0)
{
v___x_2269_ = v___x_2266_;
v_isShared_2270_ = v_isSharedCheck_2303_;
goto v_resetjp_2268_;
}
else
{
lean_inc(v_a_2267_);
lean_dec(v___x_2266_);
v___x_2269_ = lean_box(0);
v_isShared_2270_ = v_isSharedCheck_2303_;
goto v_resetjp_2268_;
}
v_resetjp_2268_:
{
if (lean_obj_tag(v_a_2267_) == 0)
{
lean_object* v_a_2271_; lean_object* v___x_2273_; 
v_a_2271_ = lean_ctor_get(v_a_2267_, 0);
lean_inc(v_a_2271_);
lean_dec_ref_known(v_a_2267_, 1);
if (v_isShared_2270_ == 0)
{
lean_ctor_set(v___x_2269_, 0, v_a_2271_);
v___x_2273_ = v___x_2269_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v_a_2271_);
v___x_2273_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
return v___x_2273_;
}
}
else
{
lean_object* v_a_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; size_t v_sz_2278_; size_t v___x_2279_; lean_object* v___x_2280_; 
lean_del_object(v___x_2269_);
v_a_2275_ = lean_ctor_get(v_a_2267_, 0);
lean_inc(v_a_2275_);
lean_dec_ref_known(v_a_2267_, 1);
v___x_2276_ = lean_box(0);
v___x_2277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2277_, 0, v___x_2276_);
lean_ctor_set(v___x_2277_, 1, v_a_2275_);
v_sz_2278_ = lean_array_size(v_tail_2265_);
v___x_2279_ = ((size_t)0ULL);
v___x_2280_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28(v___x_2258_, v_tail_2265_, v_sz_2278_, v___x_2279_, v___x_2277_, v___y_2261_, v___y_2262_);
if (lean_obj_tag(v___x_2280_) == 0)
{
lean_object* v_a_2281_; lean_object* v___x_2283_; uint8_t v_isShared_2284_; uint8_t v_isSharedCheck_2294_; 
v_a_2281_ = lean_ctor_get(v___x_2280_, 0);
v_isSharedCheck_2294_ = !lean_is_exclusive(v___x_2280_);
if (v_isSharedCheck_2294_ == 0)
{
v___x_2283_ = v___x_2280_;
v_isShared_2284_ = v_isSharedCheck_2294_;
goto v_resetjp_2282_;
}
else
{
lean_inc(v_a_2281_);
lean_dec(v___x_2280_);
v___x_2283_ = lean_box(0);
v_isShared_2284_ = v_isSharedCheck_2294_;
goto v_resetjp_2282_;
}
v_resetjp_2282_:
{
lean_object* v_fst_2285_; 
v_fst_2285_ = lean_ctor_get(v_a_2281_, 0);
if (lean_obj_tag(v_fst_2285_) == 0)
{
lean_object* v_snd_2286_; lean_object* v___x_2288_; 
v_snd_2286_ = lean_ctor_get(v_a_2281_, 1);
lean_inc(v_snd_2286_);
lean_dec(v_a_2281_);
if (v_isShared_2284_ == 0)
{
lean_ctor_set(v___x_2283_, 0, v_snd_2286_);
v___x_2288_ = v___x_2283_;
goto v_reusejp_2287_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v_snd_2286_);
v___x_2288_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2287_;
}
v_reusejp_2287_:
{
return v___x_2288_;
}
}
else
{
lean_object* v_val_2290_; lean_object* v___x_2292_; 
lean_inc_ref(v_fst_2285_);
lean_dec(v_a_2281_);
v_val_2290_ = lean_ctor_get(v_fst_2285_, 0);
lean_inc(v_val_2290_);
lean_dec_ref_known(v_fst_2285_, 1);
if (v_isShared_2284_ == 0)
{
lean_ctor_set(v___x_2283_, 0, v_val_2290_);
v___x_2292_ = v___x_2283_;
goto v_reusejp_2291_;
}
else
{
lean_object* v_reuseFailAlloc_2293_; 
v_reuseFailAlloc_2293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2293_, 0, v_val_2290_);
v___x_2292_ = v_reuseFailAlloc_2293_;
goto v_reusejp_2291_;
}
v_reusejp_2291_:
{
return v___x_2292_;
}
}
}
}
else
{
lean_object* v_a_2295_; lean_object* v___x_2297_; uint8_t v_isShared_2298_; uint8_t v_isSharedCheck_2302_; 
v_a_2295_ = lean_ctor_get(v___x_2280_, 0);
v_isSharedCheck_2302_ = !lean_is_exclusive(v___x_2280_);
if (v_isSharedCheck_2302_ == 0)
{
v___x_2297_ = v___x_2280_;
v_isShared_2298_ = v_isSharedCheck_2302_;
goto v_resetjp_2296_;
}
else
{
lean_inc(v_a_2295_);
lean_dec(v___x_2280_);
v___x_2297_ = lean_box(0);
v_isShared_2298_ = v_isSharedCheck_2302_;
goto v_resetjp_2296_;
}
v_resetjp_2296_:
{
lean_object* v___x_2300_; 
if (v_isShared_2298_ == 0)
{
v___x_2300_ = v___x_2297_;
goto v_reusejp_2299_;
}
else
{
lean_object* v_reuseFailAlloc_2301_; 
v_reuseFailAlloc_2301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2301_, 0, v_a_2295_);
v___x_2300_ = v_reuseFailAlloc_2301_;
goto v_reusejp_2299_;
}
v_reusejp_2299_:
{
return v___x_2300_;
}
}
}
}
}
}
else
{
lean_object* v_a_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2311_; 
v_a_2304_ = lean_ctor_get(v___x_2266_, 0);
v_isSharedCheck_2311_ = !lean_is_exclusive(v___x_2266_);
if (v_isSharedCheck_2311_ == 0)
{
v___x_2306_ = v___x_2266_;
v_isShared_2307_ = v_isSharedCheck_2311_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_a_2304_);
lean_dec(v___x_2266_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2311_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
lean_object* v___x_2309_; 
if (v_isShared_2307_ == 0)
{
v___x_2309_ = v___x_2306_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2310_; 
v_reuseFailAlloc_2310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2310_, 0, v_a_2304_);
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
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19___boxed(lean_object* v___x_2312_, lean_object* v_t_2313_, lean_object* v_init_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_){
_start:
{
uint8_t v___x_39756__boxed_2318_; lean_object* v_res_2319_; 
v___x_39756__boxed_2318_ = lean_unbox(v___x_2312_);
v_res_2319_ = l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19(v___x_39756__boxed_2318_, v_t_2313_, v_init_2314_, v___y_2315_, v___y_2316_);
lean_dec(v___y_2316_);
lean_dec_ref(v___y_2315_);
lean_dec_ref(v_t_2313_);
return v_res_2319_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__0(void){
_start:
{
lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; 
v___x_2320_ = lean_unsigned_to_nat(32u);
v___x_2321_ = lean_mk_empty_array_with_capacity(v___x_2320_);
v___x_2322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2322_, 0, v___x_2321_);
return v___x_2322_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1(void){
_start:
{
size_t v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; 
v___x_2323_ = ((size_t)5ULL);
v___x_2324_ = lean_unsigned_to_nat(0u);
v___x_2325_ = lean_unsigned_to_nat(32u);
v___x_2326_ = lean_mk_empty_array_with_capacity(v___x_2325_);
v___x_2327_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__0);
v___x_2328_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2328_, 0, v___x_2327_);
lean_ctor_set(v___x_2328_, 1, v___x_2326_);
lean_ctor_set(v___x_2328_, 2, v___x_2324_);
lean_ctor_set(v___x_2328_, 3, v___x_2324_);
lean_ctor_set_usize(v___x_2328_, 4, v___x_2323_);
return v___x_2328_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg(lean_object* v___y_2329_){
_start:
{
lean_object* v___x_2331_; lean_object* v_traceState_2332_; lean_object* v_traces_2333_; lean_object* v___x_2334_; lean_object* v_traceState_2335_; lean_object* v_env_2336_; lean_object* v_nextMacroScope_2337_; lean_object* v_ngen_2338_; lean_object* v_auxDeclNGen_2339_; lean_object* v_cache_2340_; lean_object* v_recordedDeps_2341_; lean_object* v_messages_2342_; lean_object* v_infoState_2343_; lean_object* v_snapshotTasks_2344_; lean_object* v___x_2346_; uint8_t v_isShared_2347_; uint8_t v_isSharedCheck_2363_; 
v___x_2331_ = lean_st_ref_get(v___y_2329_);
v_traceState_2332_ = lean_ctor_get(v___x_2331_, 4);
lean_inc_ref(v_traceState_2332_);
lean_dec(v___x_2331_);
v_traces_2333_ = lean_ctor_get(v_traceState_2332_, 0);
lean_inc_ref(v_traces_2333_);
lean_dec_ref(v_traceState_2332_);
v___x_2334_ = lean_st_ref_take(v___y_2329_);
v_traceState_2335_ = lean_ctor_get(v___x_2334_, 4);
v_env_2336_ = lean_ctor_get(v___x_2334_, 0);
v_nextMacroScope_2337_ = lean_ctor_get(v___x_2334_, 1);
v_ngen_2338_ = lean_ctor_get(v___x_2334_, 2);
v_auxDeclNGen_2339_ = lean_ctor_get(v___x_2334_, 3);
v_cache_2340_ = lean_ctor_get(v___x_2334_, 5);
v_recordedDeps_2341_ = lean_ctor_get(v___x_2334_, 6);
v_messages_2342_ = lean_ctor_get(v___x_2334_, 7);
v_infoState_2343_ = lean_ctor_get(v___x_2334_, 8);
v_snapshotTasks_2344_ = lean_ctor_get(v___x_2334_, 9);
v_isSharedCheck_2363_ = !lean_is_exclusive(v___x_2334_);
if (v_isSharedCheck_2363_ == 0)
{
v___x_2346_ = v___x_2334_;
v_isShared_2347_ = v_isSharedCheck_2363_;
goto v_resetjp_2345_;
}
else
{
lean_inc(v_snapshotTasks_2344_);
lean_inc(v_infoState_2343_);
lean_inc(v_messages_2342_);
lean_inc(v_recordedDeps_2341_);
lean_inc(v_cache_2340_);
lean_inc(v_traceState_2335_);
lean_inc(v_auxDeclNGen_2339_);
lean_inc(v_ngen_2338_);
lean_inc(v_nextMacroScope_2337_);
lean_inc(v_env_2336_);
lean_dec(v___x_2334_);
v___x_2346_ = lean_box(0);
v_isShared_2347_ = v_isSharedCheck_2363_;
goto v_resetjp_2345_;
}
v_resetjp_2345_:
{
uint64_t v_tid_2348_; lean_object* v___x_2350_; uint8_t v_isShared_2351_; uint8_t v_isSharedCheck_2361_; 
v_tid_2348_ = lean_ctor_get_uint64(v_traceState_2335_, sizeof(void*)*1);
v_isSharedCheck_2361_ = !lean_is_exclusive(v_traceState_2335_);
if (v_isSharedCheck_2361_ == 0)
{
lean_object* v_unused_2362_; 
v_unused_2362_ = lean_ctor_get(v_traceState_2335_, 0);
lean_dec(v_unused_2362_);
v___x_2350_ = v_traceState_2335_;
v_isShared_2351_ = v_isSharedCheck_2361_;
goto v_resetjp_2349_;
}
else
{
lean_dec(v_traceState_2335_);
v___x_2350_ = lean_box(0);
v_isShared_2351_ = v_isSharedCheck_2361_;
goto v_resetjp_2349_;
}
v_resetjp_2349_:
{
lean_object* v___x_2352_; lean_object* v___x_2354_; 
v___x_2352_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1);
if (v_isShared_2351_ == 0)
{
lean_ctor_set(v___x_2350_, 0, v___x_2352_);
v___x_2354_ = v___x_2350_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2360_; 
v_reuseFailAlloc_2360_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2360_, 0, v___x_2352_);
lean_ctor_set_uint64(v_reuseFailAlloc_2360_, sizeof(void*)*1, v_tid_2348_);
v___x_2354_ = v_reuseFailAlloc_2360_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
lean_object* v___x_2356_; 
if (v_isShared_2347_ == 0)
{
lean_ctor_set(v___x_2346_, 4, v___x_2354_);
v___x_2356_ = v___x_2346_;
goto v_reusejp_2355_;
}
else
{
lean_object* v_reuseFailAlloc_2359_; 
v_reuseFailAlloc_2359_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2359_, 0, v_env_2336_);
lean_ctor_set(v_reuseFailAlloc_2359_, 1, v_nextMacroScope_2337_);
lean_ctor_set(v_reuseFailAlloc_2359_, 2, v_ngen_2338_);
lean_ctor_set(v_reuseFailAlloc_2359_, 3, v_auxDeclNGen_2339_);
lean_ctor_set(v_reuseFailAlloc_2359_, 4, v___x_2354_);
lean_ctor_set(v_reuseFailAlloc_2359_, 5, v_cache_2340_);
lean_ctor_set(v_reuseFailAlloc_2359_, 6, v_recordedDeps_2341_);
lean_ctor_set(v_reuseFailAlloc_2359_, 7, v_messages_2342_);
lean_ctor_set(v_reuseFailAlloc_2359_, 8, v_infoState_2343_);
lean_ctor_set(v_reuseFailAlloc_2359_, 9, v_snapshotTasks_2344_);
v___x_2356_ = v_reuseFailAlloc_2359_;
goto v_reusejp_2355_;
}
v_reusejp_2355_:
{
lean_object* v___x_2357_; lean_object* v___x_2358_; 
v___x_2357_ = lean_st_ref_put(v___y_2329_, v___x_2356_);
v___x_2358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2358_, 0, v_traces_2333_);
return v___x_2358_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___boxed(lean_object* v___y_2364_, lean_object* v___y_2365_){
_start:
{
lean_object* v_res_2366_; 
v_res_2366_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg(v___y_2364_);
lean_dec(v___y_2364_);
return v_res_2366_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___at___00main_spec__9___closed__0(void){
_start:
{
lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; 
v___x_2367_ = lean_box(0);
v___x_2368_ = lean_unsigned_to_nat(16u);
v___x_2369_ = lean_mk_array(v___x_2368_, v___x_2367_);
return v___x_2369_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___at___00main_spec__9___closed__1(void){
_start:
{
lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v_pos2traces_2372_; 
v___x_2370_ = lean_obj_once(&l_Lean_addTraceAsMessages___at___00main_spec__9___closed__0, &l_Lean_addTraceAsMessages___at___00main_spec__9___closed__0_once, _init_l_Lean_addTraceAsMessages___at___00main_spec__9___closed__0);
v___x_2371_ = lean_unsigned_to_nat(0u);
v_pos2traces_2372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_pos2traces_2372_, 0, v___x_2371_);
lean_ctor_set(v_pos2traces_2372_, 1, v___x_2370_);
return v_pos2traces_2372_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___at___00main_spec__9(lean_object* v___y_2373_, lean_object* v___y_2374_){
_start:
{
lean_object* v_toCold_2379_; lean_object* v_options_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; 
v_toCold_2379_ = lean_ctor_get(v___y_2373_, 0);
v_options_2380_ = lean_ctor_get(v_toCold_2379_, 2);
v___x_2381_ = l_Lean_trace_profiler_output;
v___x_2382_ = l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__14(v_options_2380_, v___x_2381_);
if (lean_obj_tag(v___x_2382_) == 0)
{
lean_object* v___x_2383_; uint8_t v___x_2384_; 
v___x_2383_ = l_Lean_trace_profiler_serve;
v___x_2384_ = l_Lean_Option_get___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__15(v_options_2380_, v___x_2383_);
if (v___x_2384_ == 0)
{
lean_object* v___x_2385_; lean_object* v_a_2386_; lean_object* v___x_2388_; uint8_t v_isShared_2389_; uint8_t v_isSharedCheck_2448_; 
v___x_2385_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg(v___y_2374_);
v_a_2386_ = lean_ctor_get(v___x_2385_, 0);
v_isSharedCheck_2448_ = !lean_is_exclusive(v___x_2385_);
if (v_isSharedCheck_2448_ == 0)
{
v___x_2388_ = v___x_2385_;
v_isShared_2389_ = v_isSharedCheck_2448_;
goto v_resetjp_2387_;
}
else
{
lean_inc(v_a_2386_);
lean_dec(v___x_2385_);
v___x_2388_ = lean_box(0);
v_isShared_2389_ = v_isSharedCheck_2448_;
goto v_resetjp_2387_;
}
v_resetjp_2387_:
{
uint8_t v___x_2390_; 
v___x_2390_ = l_Lean_PersistentArray_isEmpty___redArg(v_a_2386_);
if (v___x_2390_ == 0)
{
lean_object* v___x_2391_; lean_object* v_pos2traces_2392_; lean_object* v___x_2393_; 
lean_del_object(v___x_2388_);
v___x_2391_ = lean_unsigned_to_nat(0u);
v_pos2traces_2392_ = lean_obj_once(&l_Lean_addTraceAsMessages___at___00main_spec__9___closed__1, &l_Lean_addTraceAsMessages___at___00main_spec__9___closed__1_once, _init_l_Lean_addTraceAsMessages___at___00main_spec__9___closed__1);
v___x_2393_ = l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19(v___x_2390_, v_a_2386_, v_pos2traces_2392_, v___y_2373_, v___y_2374_);
lean_dec(v_a_2386_);
if (lean_obj_tag(v___x_2393_) == 0)
{
lean_object* v_a_2394_; lean_object* v___y_2396_; lean_object* v___y_2410_; lean_object* v___y_2411_; lean_object* v___y_2412_; lean_object* v___y_2413_; lean_object* v___y_2416_; lean_object* v___y_2417_; lean_object* v___y_2418_; lean_object* v___y_2419_; lean_object* v___y_2422_; lean_object* v_size_2428_; lean_object* v_buckets_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; uint8_t v___x_2432_; 
v_a_2394_ = lean_ctor_get(v___x_2393_, 0);
lean_inc(v_a_2394_);
lean_dec_ref_known(v___x_2393_, 1);
v_size_2428_ = lean_ctor_get(v_a_2394_, 0);
lean_inc(v_size_2428_);
v_buckets_2429_ = lean_ctor_get(v_a_2394_, 1);
lean_inc_ref(v_buckets_2429_);
lean_dec(v_a_2394_);
v___x_2430_ = lean_mk_empty_array_with_capacity(v_size_2428_);
lean_dec(v_size_2428_);
v___x_2431_ = lean_array_get_size(v_buckets_2429_);
v___x_2432_ = lean_nat_dec_lt(v___x_2391_, v___x_2431_);
if (v___x_2432_ == 0)
{
lean_dec_ref(v_buckets_2429_);
v___y_2422_ = v___x_2430_;
goto v___jp_2421_;
}
else
{
size_t v___x_2433_; size_t v___x_2434_; lean_object* v___x_2435_; 
v___x_2433_ = ((size_t)0ULL);
v___x_2434_ = lean_usize_of_nat(v___x_2431_);
v___x_2435_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__23(v_buckets_2429_, v___x_2433_, v___x_2434_, v___x_2430_);
lean_dec_ref(v_buckets_2429_);
v___y_2422_ = v___x_2435_;
goto v___jp_2421_;
}
v___jp_2395_:
{
lean_object* v___x_2397_; size_t v_sz_2398_; size_t v___x_2399_; lean_object* v___x_2400_; 
v___x_2397_ = lean_box(0);
v_sz_2398_ = lean_array_size(v___y_2396_);
v___x_2399_ = ((size_t)0ULL);
v___x_2400_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20(v___x_2384_, v___y_2396_, v_sz_2398_, v___x_2399_, v___x_2397_, v___y_2373_, v___y_2374_);
lean_dec_ref(v___y_2396_);
if (lean_obj_tag(v___x_2400_) == 0)
{
lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2407_; 
v_isSharedCheck_2407_ = !lean_is_exclusive(v___x_2400_);
if (v_isSharedCheck_2407_ == 0)
{
lean_object* v_unused_2408_; 
v_unused_2408_ = lean_ctor_get(v___x_2400_, 0);
lean_dec(v_unused_2408_);
v___x_2402_ = v___x_2400_;
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
else
{
lean_dec(v___x_2400_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
lean_object* v___x_2405_; 
if (v_isShared_2403_ == 0)
{
lean_ctor_set(v___x_2402_, 0, v___x_2397_);
v___x_2405_ = v___x_2402_;
goto v_reusejp_2404_;
}
else
{
lean_object* v_reuseFailAlloc_2406_; 
v_reuseFailAlloc_2406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2406_, 0, v___x_2397_);
v___x_2405_ = v_reuseFailAlloc_2406_;
goto v_reusejp_2404_;
}
v_reusejp_2404_:
{
return v___x_2405_;
}
}
}
else
{
return v___x_2400_;
}
}
v___jp_2409_:
{
lean_object* v___x_2414_; 
v___x_2414_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg(v___y_2410_, v___y_2412_, v___y_2411_, v___y_2413_);
lean_dec(v___y_2413_);
lean_dec(v___y_2410_);
v___y_2396_ = v___x_2414_;
goto v___jp_2395_;
}
v___jp_2415_:
{
uint8_t v___x_2420_; 
v___x_2420_ = lean_nat_dec_le(v___y_2419_, v___y_2417_);
if (v___x_2420_ == 0)
{
lean_dec(v___y_2417_);
lean_inc(v___y_2419_);
v___y_2410_ = v___y_2416_;
v___y_2411_ = v___y_2419_;
v___y_2412_ = v___y_2418_;
v___y_2413_ = v___y_2419_;
goto v___jp_2409_;
}
else
{
v___y_2410_ = v___y_2416_;
v___y_2411_ = v___y_2419_;
v___y_2412_ = v___y_2418_;
v___y_2413_ = v___y_2417_;
goto v___jp_2409_;
}
}
v___jp_2421_:
{
lean_object* v___x_2423_; uint8_t v___x_2424_; 
v___x_2423_ = lean_array_get_size(v___y_2422_);
v___x_2424_ = lean_nat_dec_eq(v___x_2423_, v___x_2391_);
if (v___x_2424_ == 0)
{
lean_object* v___x_2425_; lean_object* v___x_2426_; uint8_t v___x_2427_; 
v___x_2425_ = lean_unsigned_to_nat(1u);
v___x_2426_ = lean_nat_sub(v___x_2423_, v___x_2425_);
v___x_2427_ = lean_nat_dec_le(v___x_2391_, v___x_2426_);
if (v___x_2427_ == 0)
{
lean_inc(v___x_2426_);
v___y_2416_ = v___x_2423_;
v___y_2417_ = v___x_2426_;
v___y_2418_ = v___y_2422_;
v___y_2419_ = v___x_2426_;
goto v___jp_2415_;
}
else
{
v___y_2416_ = v___x_2423_;
v___y_2417_ = v___x_2426_;
v___y_2418_ = v___y_2422_;
v___y_2419_ = v___x_2391_;
goto v___jp_2415_;
}
}
else
{
v___y_2396_ = v___y_2422_;
goto v___jp_2395_;
}
}
}
else
{
lean_object* v_a_2436_; lean_object* v___x_2438_; uint8_t v_isShared_2439_; uint8_t v_isSharedCheck_2443_; 
v_a_2436_ = lean_ctor_get(v___x_2393_, 0);
v_isSharedCheck_2443_ = !lean_is_exclusive(v___x_2393_);
if (v_isSharedCheck_2443_ == 0)
{
v___x_2438_ = v___x_2393_;
v_isShared_2439_ = v_isSharedCheck_2443_;
goto v_resetjp_2437_;
}
else
{
lean_inc(v_a_2436_);
lean_dec(v___x_2393_);
v___x_2438_ = lean_box(0);
v_isShared_2439_ = v_isSharedCheck_2443_;
goto v_resetjp_2437_;
}
v_resetjp_2437_:
{
lean_object* v___x_2441_; 
if (v_isShared_2439_ == 0)
{
v___x_2441_ = v___x_2438_;
goto v_reusejp_2440_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v_a_2436_);
v___x_2441_ = v_reuseFailAlloc_2442_;
goto v_reusejp_2440_;
}
v_reusejp_2440_:
{
return v___x_2441_;
}
}
}
}
else
{
lean_object* v___x_2444_; lean_object* v___x_2446_; 
lean_dec(v_a_2386_);
v___x_2444_ = lean_box(0);
if (v_isShared_2389_ == 0)
{
lean_ctor_set(v___x_2388_, 0, v___x_2444_);
v___x_2446_ = v___x_2388_;
goto v_reusejp_2445_;
}
else
{
lean_object* v_reuseFailAlloc_2447_; 
v_reuseFailAlloc_2447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2447_, 0, v___x_2444_);
v___x_2446_ = v_reuseFailAlloc_2447_;
goto v_reusejp_2445_;
}
v_reusejp_2445_:
{
return v___x_2446_;
}
}
}
}
else
{
goto v___jp_2376_;
}
}
else
{
lean_dec_ref_known(v___x_2382_, 1);
goto v___jp_2376_;
}
v___jp_2376_:
{
lean_object* v___x_2377_; lean_object* v___x_2378_; 
v___x_2377_ = lean_box(0);
v___x_2378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2378_, 0, v___x_2377_);
return v___x_2378_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___at___00main_spec__9___boxed(lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_){
_start:
{
lean_object* v_res_2452_; 
v_res_2452_ = l_Lean_addTraceAsMessages___at___00main_spec__9(v___y_2449_, v___y_2450_);
lean_dec(v___y_2450_);
lean_dec_ref(v___y_2449_);
return v_res_2452_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__10(lean_object* v_as_2453_, size_t v_sz_2454_, size_t v_i_2455_, lean_object* v_b_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_){
_start:
{
uint8_t v___x_2460_; 
v___x_2460_ = lean_usize_dec_lt(v_i_2455_, v_sz_2454_);
if (v___x_2460_ == 0)
{
lean_object* v___x_2461_; 
v___x_2461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2461_, 0, v_b_2456_);
return v___x_2461_;
}
else
{
lean_object* v___x_2462_; lean_object* v_a_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; 
v___x_2462_ = lean_box(0);
v_a_2463_ = lean_array_uget_borrowed(v_as_2453_, v_i_2455_);
v___x_2464_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2457_);
lean_inc(v_a_2463_);
v___x_2465_ = l_Lean_Compiler_LCNF_resumeCompilation(v_a_2463_, v___x_2464_, v___y_2457_, v___y_2458_);
if (lean_obj_tag(v___x_2465_) == 0)
{
lean_object* v___x_2466_; 
lean_dec_ref_known(v___x_2465_, 1);
v___x_2466_ = l_Lean_addTraceAsMessages___at___00main_spec__9(v___y_2457_, v___y_2458_);
if (lean_obj_tag(v___x_2466_) == 0)
{
size_t v___x_2467_; size_t v___x_2468_; 
lean_dec_ref_known(v___x_2466_, 1);
v___x_2467_ = ((size_t)1ULL);
v___x_2468_ = lean_usize_add(v_i_2455_, v___x_2467_);
v_i_2455_ = v___x_2468_;
v_b_2456_ = v___x_2462_;
goto _start;
}
else
{
return v___x_2466_;
}
}
else
{
lean_object* v_a_2470_; lean_object* v___x_2471_; 
v_a_2470_ = lean_ctor_get(v___x_2465_, 0);
lean_inc(v_a_2470_);
lean_dec_ref_known(v___x_2465_, 1);
v___x_2471_ = l_Lean_addTraceAsMessages___at___00main_spec__9(v___y_2457_, v___y_2458_);
if (lean_obj_tag(v___x_2471_) == 0)
{
lean_object* v___x_2473_; uint8_t v_isShared_2474_; uint8_t v_isSharedCheck_2478_; 
v_isSharedCheck_2478_ = !lean_is_exclusive(v___x_2471_);
if (v_isSharedCheck_2478_ == 0)
{
lean_object* v_unused_2479_; 
v_unused_2479_ = lean_ctor_get(v___x_2471_, 0);
lean_dec(v_unused_2479_);
v___x_2473_ = v___x_2471_;
v_isShared_2474_ = v_isSharedCheck_2478_;
goto v_resetjp_2472_;
}
else
{
lean_dec(v___x_2471_);
v___x_2473_ = lean_box(0);
v_isShared_2474_ = v_isSharedCheck_2478_;
goto v_resetjp_2472_;
}
v_resetjp_2472_:
{
lean_object* v___x_2476_; 
if (v_isShared_2474_ == 0)
{
lean_ctor_set_tag(v___x_2473_, 1);
lean_ctor_set(v___x_2473_, 0, v_a_2470_);
v___x_2476_ = v___x_2473_;
goto v_reusejp_2475_;
}
else
{
lean_object* v_reuseFailAlloc_2477_; 
v_reuseFailAlloc_2477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2477_, 0, v_a_2470_);
v___x_2476_ = v_reuseFailAlloc_2477_;
goto v_reusejp_2475_;
}
v_reusejp_2475_:
{
return v___x_2476_;
}
}
}
else
{
lean_dec(v_a_2470_);
return v___x_2471_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__10___boxed(lean_object* v_as_2480_, lean_object* v_sz_2481_, lean_object* v_i_2482_, lean_object* v_b_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_){
_start:
{
size_t v_sz_boxed_2487_; size_t v_i_boxed_2488_; lean_object* v_res_2489_; 
v_sz_boxed_2487_ = lean_unbox_usize(v_sz_2481_);
lean_dec(v_sz_2481_);
v_i_boxed_2488_ = lean_unbox_usize(v_i_2482_);
lean_dec(v_i_2482_);
v_res_2489_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__10(v_as_2480_, v_sz_boxed_2487_, v_i_boxed_2488_, v_b_2483_, v___y_2484_, v___y_2485_);
lean_dec(v___y_2485_);
lean_dec_ref(v___y_2484_);
lean_dec_ref(v_as_2480_);
return v_res_2489_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___redArg(lean_object* v_as_2490_, size_t v_sz_2491_, size_t v_i_2492_, lean_object* v_b_2493_, lean_object* v___y_2494_){
_start:
{
uint8_t v___x_2496_; 
v___x_2496_ = lean_usize_dec_lt(v_i_2492_, v_sz_2491_);
if (v___x_2496_ == 0)
{
lean_object* v___x_2497_; 
v___x_2497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2497_, 0, v_b_2493_);
return v___x_2497_;
}
else
{
uint8_t v___x_2498_; lean_object* v_a_2499_; lean_object* v___x_2500_; lean_object* v_ref_2501_; lean_object* v___x_2502_; 
lean_dec_ref(v_b_2493_);
v___x_2498_ = 0;
v_a_2499_ = lean_array_uget_borrowed(v_as_2490_, v_i_2492_);
lean_inc(v_a_2499_);
v___x_2500_ = l_Lean_Message_toString(v_a_2499_, v___x_2498_);
v_ref_2501_ = lean_ctor_get(v___y_2494_, 2);
v___x_2502_ = l_IO_eprintln___at___00main_spec__6(v___x_2500_);
if (lean_obj_tag(v___x_2502_) == 0)
{
lean_object* v___x_2503_; size_t v___x_2504_; size_t v___x_2505_; 
lean_dec_ref_known(v___x_2502_, 1);
v___x_2503_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___closed__0));
v___x_2504_ = ((size_t)1ULL);
v___x_2505_ = lean_usize_add(v_i_2492_, v___x_2504_);
v_i_2492_ = v___x_2505_;
v_b_2493_ = v___x_2503_;
goto _start;
}
else
{
lean_object* v_a_2507_; lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2518_; 
v_a_2507_ = lean_ctor_get(v___x_2502_, 0);
v_isSharedCheck_2518_ = !lean_is_exclusive(v___x_2502_);
if (v_isSharedCheck_2518_ == 0)
{
v___x_2509_ = v___x_2502_;
v_isShared_2510_ = v_isSharedCheck_2518_;
goto v_resetjp_2508_;
}
else
{
lean_inc(v_a_2507_);
lean_dec(v___x_2502_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2518_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2516_; 
v___x_2511_ = lean_io_error_to_string(v_a_2507_);
v___x_2512_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2512_, 0, v___x_2511_);
v___x_2513_ = l_Lean_MessageData_ofFormat(v___x_2512_);
lean_inc(v_ref_2501_);
v___x_2514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2514_, 0, v_ref_2501_);
lean_ctor_set(v___x_2514_, 1, v___x_2513_);
if (v_isShared_2510_ == 0)
{
lean_ctor_set(v___x_2509_, 0, v___x_2514_);
v___x_2516_ = v___x_2509_;
goto v_reusejp_2515_;
}
else
{
lean_object* v_reuseFailAlloc_2517_; 
v_reuseFailAlloc_2517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2517_, 0, v___x_2514_);
v___x_2516_ = v_reuseFailAlloc_2517_;
goto v_reusejp_2515_;
}
v_reusejp_2515_:
{
return v___x_2516_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___redArg___boxed(lean_object* v_as_2519_, lean_object* v_sz_2520_, lean_object* v_i_2521_, lean_object* v_b_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_){
_start:
{
size_t v_sz_boxed_2525_; size_t v_i_boxed_2526_; lean_object* v_res_2527_; 
v_sz_boxed_2525_ = lean_unbox_usize(v_sz_2520_);
lean_dec(v_sz_2520_);
v_i_boxed_2526_ = lean_unbox_usize(v_i_2521_);
lean_dec(v_i_2521_);
v_res_2527_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___redArg(v_as_2519_, v_sz_boxed_2525_, v_i_boxed_2526_, v_b_2522_, v___y_2523_);
lean_dec_ref(v___y_2523_);
lean_dec_ref(v_as_2519_);
return v_res_2527_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38(lean_object* v_as_2528_, size_t v_sz_2529_, size_t v_i_2530_, lean_object* v_b_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_){
_start:
{
uint8_t v___x_2535_; 
v___x_2535_ = lean_usize_dec_lt(v_i_2530_, v_sz_2529_);
if (v___x_2535_ == 0)
{
lean_object* v___x_2536_; 
v___x_2536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2536_, 0, v_b_2531_);
return v___x_2536_;
}
else
{
uint8_t v___x_2537_; lean_object* v_a_2538_; lean_object* v___x_2539_; lean_object* v_ref_2540_; lean_object* v___x_2541_; 
lean_dec_ref(v_b_2531_);
v___x_2537_ = 0;
v_a_2538_ = lean_array_uget_borrowed(v_as_2528_, v_i_2530_);
lean_inc(v_a_2538_);
v___x_2539_ = l_Lean_Message_toString(v_a_2538_, v___x_2537_);
v_ref_2540_ = lean_ctor_get(v___y_2532_, 2);
v___x_2541_ = l_IO_eprintln___at___00main_spec__6(v___x_2539_);
if (lean_obj_tag(v___x_2541_) == 0)
{
lean_object* v___x_2542_; size_t v___x_2543_; size_t v___x_2544_; lean_object* v___x_2545_; 
lean_dec_ref_known(v___x_2541_, 1);
v___x_2542_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___closed__0));
v___x_2543_ = ((size_t)1ULL);
v___x_2544_ = lean_usize_add(v_i_2530_, v___x_2543_);
v___x_2545_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___redArg(v_as_2528_, v_sz_2529_, v___x_2544_, v___x_2542_, v___y_2532_);
return v___x_2545_;
}
else
{
lean_object* v_a_2546_; lean_object* v___x_2548_; uint8_t v_isShared_2549_; uint8_t v_isSharedCheck_2557_; 
v_a_2546_ = lean_ctor_get(v___x_2541_, 0);
v_isSharedCheck_2557_ = !lean_is_exclusive(v___x_2541_);
if (v_isSharedCheck_2557_ == 0)
{
v___x_2548_ = v___x_2541_;
v_isShared_2549_ = v_isSharedCheck_2557_;
goto v_resetjp_2547_;
}
else
{
lean_inc(v_a_2546_);
lean_dec(v___x_2541_);
v___x_2548_ = lean_box(0);
v_isShared_2549_ = v_isSharedCheck_2557_;
goto v_resetjp_2547_;
}
v_resetjp_2547_:
{
lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2555_; 
v___x_2550_ = lean_io_error_to_string(v_a_2546_);
v___x_2551_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2551_, 0, v___x_2550_);
v___x_2552_ = l_Lean_MessageData_ofFormat(v___x_2551_);
lean_inc(v_ref_2540_);
v___x_2553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2553_, 0, v_ref_2540_);
lean_ctor_set(v___x_2553_, 1, v___x_2552_);
if (v_isShared_2549_ == 0)
{
lean_ctor_set(v___x_2548_, 0, v___x_2553_);
v___x_2555_ = v___x_2548_;
goto v_reusejp_2554_;
}
else
{
lean_object* v_reuseFailAlloc_2556_; 
v_reuseFailAlloc_2556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2556_, 0, v___x_2553_);
v___x_2555_ = v_reuseFailAlloc_2556_;
goto v_reusejp_2554_;
}
v_reusejp_2554_:
{
return v___x_2555_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38___boxed(lean_object* v_as_2558_, lean_object* v_sz_2559_, lean_object* v_i_2560_, lean_object* v_b_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_){
_start:
{
size_t v_sz_boxed_2565_; size_t v_i_boxed_2566_; lean_object* v_res_2567_; 
v_sz_boxed_2565_ = lean_unbox_usize(v_sz_2559_);
lean_dec(v_sz_2559_);
v_i_boxed_2566_ = lean_unbox_usize(v_i_2560_);
lean_dec(v_i_2560_);
v_res_2567_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38(v_as_2558_, v_sz_boxed_2565_, v_i_boxed_2566_, v_b_2561_, v___y_2562_, v___y_2563_);
lean_dec(v___y_2563_);
lean_dec_ref(v___y_2562_);
lean_dec_ref(v_as_2558_);
return v_res_2567_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26(lean_object* v_init_2568_, lean_object* v_n_2569_, lean_object* v_b_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_){
_start:
{
if (lean_obj_tag(v_n_2569_) == 0)
{
lean_object* v_cs_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; size_t v_sz_2577_; size_t v___x_2578_; lean_object* v___x_2579_; 
v_cs_2574_ = lean_ctor_get(v_n_2569_, 0);
v___x_2575_ = lean_box(0);
v___x_2576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2576_, 0, v___x_2575_);
lean_ctor_set(v___x_2576_, 1, v_b_2570_);
v_sz_2577_ = lean_array_size(v_cs_2574_);
v___x_2578_ = ((size_t)0ULL);
v___x_2579_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__37(v_init_2568_, v_cs_2574_, v_sz_2577_, v___x_2578_, v___x_2576_, v___y_2571_, v___y_2572_);
if (lean_obj_tag(v___x_2579_) == 0)
{
lean_object* v_a_2580_; lean_object* v___x_2582_; uint8_t v_isShared_2583_; uint8_t v_isSharedCheck_2594_; 
v_a_2580_ = lean_ctor_get(v___x_2579_, 0);
v_isSharedCheck_2594_ = !lean_is_exclusive(v___x_2579_);
if (v_isSharedCheck_2594_ == 0)
{
v___x_2582_ = v___x_2579_;
v_isShared_2583_ = v_isSharedCheck_2594_;
goto v_resetjp_2581_;
}
else
{
lean_inc(v_a_2580_);
lean_dec(v___x_2579_);
v___x_2582_ = lean_box(0);
v_isShared_2583_ = v_isSharedCheck_2594_;
goto v_resetjp_2581_;
}
v_resetjp_2581_:
{
lean_object* v_fst_2584_; 
v_fst_2584_ = lean_ctor_get(v_a_2580_, 0);
if (lean_obj_tag(v_fst_2584_) == 0)
{
lean_object* v_snd_2585_; lean_object* v___x_2586_; lean_object* v___x_2588_; 
v_snd_2585_ = lean_ctor_get(v_a_2580_, 1);
lean_inc(v_snd_2585_);
lean_dec(v_a_2580_);
v___x_2586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2586_, 0, v_snd_2585_);
if (v_isShared_2583_ == 0)
{
lean_ctor_set(v___x_2582_, 0, v___x_2586_);
v___x_2588_ = v___x_2582_;
goto v_reusejp_2587_;
}
else
{
lean_object* v_reuseFailAlloc_2589_; 
v_reuseFailAlloc_2589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2589_, 0, v___x_2586_);
v___x_2588_ = v_reuseFailAlloc_2589_;
goto v_reusejp_2587_;
}
v_reusejp_2587_:
{
return v___x_2588_;
}
}
else
{
lean_object* v_val_2590_; lean_object* v___x_2592_; 
lean_inc_ref(v_fst_2584_);
lean_dec(v_a_2580_);
v_val_2590_ = lean_ctor_get(v_fst_2584_, 0);
lean_inc(v_val_2590_);
lean_dec_ref_known(v_fst_2584_, 1);
if (v_isShared_2583_ == 0)
{
lean_ctor_set(v___x_2582_, 0, v_val_2590_);
v___x_2592_ = v___x_2582_;
goto v_reusejp_2591_;
}
else
{
lean_object* v_reuseFailAlloc_2593_; 
v_reuseFailAlloc_2593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2593_, 0, v_val_2590_);
v___x_2592_ = v_reuseFailAlloc_2593_;
goto v_reusejp_2591_;
}
v_reusejp_2591_:
{
return v___x_2592_;
}
}
}
}
else
{
lean_object* v_a_2595_; lean_object* v___x_2597_; uint8_t v_isShared_2598_; uint8_t v_isSharedCheck_2602_; 
v_a_2595_ = lean_ctor_get(v___x_2579_, 0);
v_isSharedCheck_2602_ = !lean_is_exclusive(v___x_2579_);
if (v_isSharedCheck_2602_ == 0)
{
v___x_2597_ = v___x_2579_;
v_isShared_2598_ = v_isSharedCheck_2602_;
goto v_resetjp_2596_;
}
else
{
lean_inc(v_a_2595_);
lean_dec(v___x_2579_);
v___x_2597_ = lean_box(0);
v_isShared_2598_ = v_isSharedCheck_2602_;
goto v_resetjp_2596_;
}
v_resetjp_2596_:
{
lean_object* v___x_2600_; 
if (v_isShared_2598_ == 0)
{
v___x_2600_ = v___x_2597_;
goto v_reusejp_2599_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v_a_2595_);
v___x_2600_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2599_;
}
v_reusejp_2599_:
{
return v___x_2600_;
}
}
}
}
else
{
lean_object* v_vs_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; size_t v_sz_2606_; size_t v___x_2607_; lean_object* v___x_2608_; 
v_vs_2603_ = lean_ctor_get(v_n_2569_, 0);
v___x_2604_ = lean_box(0);
v___x_2605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2605_, 0, v___x_2604_);
lean_ctor_set(v___x_2605_, 1, v_b_2570_);
v_sz_2606_ = lean_array_size(v_vs_2603_);
v___x_2607_ = ((size_t)0ULL);
v___x_2608_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38(v_vs_2603_, v_sz_2606_, v___x_2607_, v___x_2605_, v___y_2571_, v___y_2572_);
if (lean_obj_tag(v___x_2608_) == 0)
{
lean_object* v_a_2609_; lean_object* v___x_2611_; uint8_t v_isShared_2612_; uint8_t v_isSharedCheck_2623_; 
v_a_2609_ = lean_ctor_get(v___x_2608_, 0);
v_isSharedCheck_2623_ = !lean_is_exclusive(v___x_2608_);
if (v_isSharedCheck_2623_ == 0)
{
v___x_2611_ = v___x_2608_;
v_isShared_2612_ = v_isSharedCheck_2623_;
goto v_resetjp_2610_;
}
else
{
lean_inc(v_a_2609_);
lean_dec(v___x_2608_);
v___x_2611_ = lean_box(0);
v_isShared_2612_ = v_isSharedCheck_2623_;
goto v_resetjp_2610_;
}
v_resetjp_2610_:
{
lean_object* v_fst_2613_; 
v_fst_2613_ = lean_ctor_get(v_a_2609_, 0);
if (lean_obj_tag(v_fst_2613_) == 0)
{
lean_object* v_snd_2614_; lean_object* v___x_2615_; lean_object* v___x_2617_; 
v_snd_2614_ = lean_ctor_get(v_a_2609_, 1);
lean_inc(v_snd_2614_);
lean_dec(v_a_2609_);
v___x_2615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2615_, 0, v_snd_2614_);
if (v_isShared_2612_ == 0)
{
lean_ctor_set(v___x_2611_, 0, v___x_2615_);
v___x_2617_ = v___x_2611_;
goto v_reusejp_2616_;
}
else
{
lean_object* v_reuseFailAlloc_2618_; 
v_reuseFailAlloc_2618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2618_, 0, v___x_2615_);
v___x_2617_ = v_reuseFailAlloc_2618_;
goto v_reusejp_2616_;
}
v_reusejp_2616_:
{
return v___x_2617_;
}
}
else
{
lean_object* v_val_2619_; lean_object* v___x_2621_; 
lean_inc_ref(v_fst_2613_);
lean_dec(v_a_2609_);
v_val_2619_ = lean_ctor_get(v_fst_2613_, 0);
lean_inc(v_val_2619_);
lean_dec_ref_known(v_fst_2613_, 1);
if (v_isShared_2612_ == 0)
{
lean_ctor_set(v___x_2611_, 0, v_val_2619_);
v___x_2621_ = v___x_2611_;
goto v_reusejp_2620_;
}
else
{
lean_object* v_reuseFailAlloc_2622_; 
v_reuseFailAlloc_2622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2622_, 0, v_val_2619_);
v___x_2621_ = v_reuseFailAlloc_2622_;
goto v_reusejp_2620_;
}
v_reusejp_2620_:
{
return v___x_2621_;
}
}
}
}
else
{
lean_object* v_a_2624_; lean_object* v___x_2626_; uint8_t v_isShared_2627_; uint8_t v_isSharedCheck_2631_; 
v_a_2624_ = lean_ctor_get(v___x_2608_, 0);
v_isSharedCheck_2631_ = !lean_is_exclusive(v___x_2608_);
if (v_isSharedCheck_2631_ == 0)
{
v___x_2626_ = v___x_2608_;
v_isShared_2627_ = v_isSharedCheck_2631_;
goto v_resetjp_2625_;
}
else
{
lean_inc(v_a_2624_);
lean_dec(v___x_2608_);
v___x_2626_ = lean_box(0);
v_isShared_2627_ = v_isSharedCheck_2631_;
goto v_resetjp_2625_;
}
v_resetjp_2625_:
{
lean_object* v___x_2629_; 
if (v_isShared_2627_ == 0)
{
v___x_2629_ = v___x_2626_;
goto v_reusejp_2628_;
}
else
{
lean_object* v_reuseFailAlloc_2630_; 
v_reuseFailAlloc_2630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2630_, 0, v_a_2624_);
v___x_2629_ = v_reuseFailAlloc_2630_;
goto v_reusejp_2628_;
}
v_reusejp_2628_:
{
return v___x_2629_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__37(lean_object* v_init_2632_, lean_object* v_as_2633_, size_t v_sz_2634_, size_t v_i_2635_, lean_object* v_b_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_){
_start:
{
uint8_t v___x_2640_; 
v___x_2640_ = lean_usize_dec_lt(v_i_2635_, v_sz_2634_);
if (v___x_2640_ == 0)
{
lean_object* v___x_2641_; 
v___x_2641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2641_, 0, v_b_2636_);
return v___x_2641_;
}
else
{
lean_object* v_snd_2642_; lean_object* v___x_2644_; uint8_t v_isShared_2645_; uint8_t v_isSharedCheck_2676_; 
v_snd_2642_ = lean_ctor_get(v_b_2636_, 1);
v_isSharedCheck_2676_ = !lean_is_exclusive(v_b_2636_);
if (v_isSharedCheck_2676_ == 0)
{
lean_object* v_unused_2677_; 
v_unused_2677_ = lean_ctor_get(v_b_2636_, 0);
lean_dec(v_unused_2677_);
v___x_2644_ = v_b_2636_;
v_isShared_2645_ = v_isSharedCheck_2676_;
goto v_resetjp_2643_;
}
else
{
lean_inc(v_snd_2642_);
lean_dec(v_b_2636_);
v___x_2644_ = lean_box(0);
v_isShared_2645_ = v_isSharedCheck_2676_;
goto v_resetjp_2643_;
}
v_resetjp_2643_:
{
lean_object* v___x_2646_; lean_object* v_a_2647_; lean_object* v___x_2648_; 
v___x_2646_ = lean_box(0);
v_a_2647_ = lean_array_uget_borrowed(v_as_2633_, v_i_2635_);
lean_inc(v_snd_2642_);
v___x_2648_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26(v_init_2632_, v_a_2647_, v_snd_2642_, v___y_2637_, v___y_2638_);
if (lean_obj_tag(v___x_2648_) == 0)
{
lean_object* v_a_2649_; lean_object* v___x_2651_; uint8_t v_isShared_2652_; uint8_t v_isSharedCheck_2667_; 
v_a_2649_ = lean_ctor_get(v___x_2648_, 0);
v_isSharedCheck_2667_ = !lean_is_exclusive(v___x_2648_);
if (v_isSharedCheck_2667_ == 0)
{
v___x_2651_ = v___x_2648_;
v_isShared_2652_ = v_isSharedCheck_2667_;
goto v_resetjp_2650_;
}
else
{
lean_inc(v_a_2649_);
lean_dec(v___x_2648_);
v___x_2651_ = lean_box(0);
v_isShared_2652_ = v_isSharedCheck_2667_;
goto v_resetjp_2650_;
}
v_resetjp_2650_:
{
if (lean_obj_tag(v_a_2649_) == 0)
{
lean_object* v___x_2653_; lean_object* v___x_2655_; 
v___x_2653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2653_, 0, v_a_2649_);
if (v_isShared_2645_ == 0)
{
lean_ctor_set(v___x_2644_, 0, v___x_2653_);
v___x_2655_ = v___x_2644_;
goto v_reusejp_2654_;
}
else
{
lean_object* v_reuseFailAlloc_2659_; 
v_reuseFailAlloc_2659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2659_, 0, v___x_2653_);
lean_ctor_set(v_reuseFailAlloc_2659_, 1, v_snd_2642_);
v___x_2655_ = v_reuseFailAlloc_2659_;
goto v_reusejp_2654_;
}
v_reusejp_2654_:
{
lean_object* v___x_2657_; 
if (v_isShared_2652_ == 0)
{
lean_ctor_set(v___x_2651_, 0, v___x_2655_);
v___x_2657_ = v___x_2651_;
goto v_reusejp_2656_;
}
else
{
lean_object* v_reuseFailAlloc_2658_; 
v_reuseFailAlloc_2658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2658_, 0, v___x_2655_);
v___x_2657_ = v_reuseFailAlloc_2658_;
goto v_reusejp_2656_;
}
v_reusejp_2656_:
{
return v___x_2657_;
}
}
}
else
{
lean_object* v_a_2660_; lean_object* v___x_2662_; 
lean_del_object(v___x_2651_);
lean_dec(v_snd_2642_);
v_a_2660_ = lean_ctor_get(v_a_2649_, 0);
lean_inc(v_a_2660_);
lean_dec_ref_known(v_a_2649_, 1);
if (v_isShared_2645_ == 0)
{
lean_ctor_set(v___x_2644_, 1, v_a_2660_);
lean_ctor_set(v___x_2644_, 0, v___x_2646_);
v___x_2662_ = v___x_2644_;
goto v_reusejp_2661_;
}
else
{
lean_object* v_reuseFailAlloc_2666_; 
v_reuseFailAlloc_2666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2666_, 0, v___x_2646_);
lean_ctor_set(v_reuseFailAlloc_2666_, 1, v_a_2660_);
v___x_2662_ = v_reuseFailAlloc_2666_;
goto v_reusejp_2661_;
}
v_reusejp_2661_:
{
size_t v___x_2663_; size_t v___x_2664_; 
v___x_2663_ = ((size_t)1ULL);
v___x_2664_ = lean_usize_add(v_i_2635_, v___x_2663_);
v_i_2635_ = v___x_2664_;
v_b_2636_ = v___x_2662_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2668_; lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2675_; 
lean_del_object(v___x_2644_);
lean_dec(v_snd_2642_);
v_a_2668_ = lean_ctor_get(v___x_2648_, 0);
v_isSharedCheck_2675_ = !lean_is_exclusive(v___x_2648_);
if (v_isSharedCheck_2675_ == 0)
{
v___x_2670_ = v___x_2648_;
v_isShared_2671_ = v_isSharedCheck_2675_;
goto v_resetjp_2669_;
}
else
{
lean_inc(v_a_2668_);
lean_dec(v___x_2648_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2675_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v___x_2673_; 
if (v_isShared_2671_ == 0)
{
v___x_2673_ = v___x_2670_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2674_; 
v_reuseFailAlloc_2674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2674_, 0, v_a_2668_);
v___x_2673_ = v_reuseFailAlloc_2674_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
return v___x_2673_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__37___boxed(lean_object* v_init_2678_, lean_object* v_as_2679_, lean_object* v_sz_2680_, lean_object* v_i_2681_, lean_object* v_b_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_){
_start:
{
size_t v_sz_boxed_2686_; size_t v_i_boxed_2687_; lean_object* v_res_2688_; 
v_sz_boxed_2686_ = lean_unbox_usize(v_sz_2680_);
lean_dec(v_sz_2680_);
v_i_boxed_2687_ = lean_unbox_usize(v_i_2681_);
lean_dec(v_i_2681_);
v_res_2688_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__37(v_init_2678_, v_as_2679_, v_sz_boxed_2686_, v_i_boxed_2687_, v_b_2682_, v___y_2683_, v___y_2684_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec_ref(v_as_2679_);
return v_res_2688_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26___boxed(lean_object* v_init_2689_, lean_object* v_n_2690_, lean_object* v_b_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_){
_start:
{
lean_object* v_res_2695_; 
v_res_2695_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26(v_init_2689_, v_n_2690_, v_b_2691_, v___y_2692_, v___y_2693_);
lean_dec(v___y_2693_);
lean_dec_ref(v___y_2692_);
lean_dec_ref(v_n_2690_);
return v_res_2695_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___redArg(lean_object* v_as_2696_, size_t v_sz_2697_, size_t v_i_2698_, lean_object* v_b_2699_, lean_object* v___y_2700_){
_start:
{
uint8_t v___x_2702_; 
v___x_2702_ = lean_usize_dec_lt(v_i_2698_, v_sz_2697_);
if (v___x_2702_ == 0)
{
lean_object* v___x_2703_; 
v___x_2703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2703_, 0, v_b_2699_);
return v___x_2703_;
}
else
{
uint8_t v___x_2704_; lean_object* v_a_2705_; lean_object* v___x_2706_; lean_object* v_ref_2707_; lean_object* v___x_2708_; 
lean_dec_ref(v_b_2699_);
v___x_2704_ = 0;
v_a_2705_ = lean_array_uget_borrowed(v_as_2696_, v_i_2698_);
lean_inc(v_a_2705_);
v___x_2706_ = l_Lean_Message_toString(v_a_2705_, v___x_2704_);
v_ref_2707_ = lean_ctor_get(v___y_2700_, 2);
v___x_2708_ = l_IO_eprintln___at___00main_spec__6(v___x_2706_);
if (lean_obj_tag(v___x_2708_) == 0)
{
lean_object* v___x_2709_; size_t v___x_2710_; size_t v___x_2711_; 
lean_dec_ref_known(v___x_2708_, 1);
v___x_2709_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___closed__0));
v___x_2710_ = ((size_t)1ULL);
v___x_2711_ = lean_usize_add(v_i_2698_, v___x_2710_);
v_i_2698_ = v___x_2711_;
v_b_2699_ = v___x_2709_;
goto _start;
}
else
{
lean_object* v_a_2713_; lean_object* v___x_2715_; uint8_t v_isShared_2716_; uint8_t v_isSharedCheck_2724_; 
v_a_2713_ = lean_ctor_get(v___x_2708_, 0);
v_isSharedCheck_2724_ = !lean_is_exclusive(v___x_2708_);
if (v_isSharedCheck_2724_ == 0)
{
v___x_2715_ = v___x_2708_;
v_isShared_2716_ = v_isSharedCheck_2724_;
goto v_resetjp_2714_;
}
else
{
lean_inc(v_a_2713_);
lean_dec(v___x_2708_);
v___x_2715_ = lean_box(0);
v_isShared_2716_ = v_isSharedCheck_2724_;
goto v_resetjp_2714_;
}
v_resetjp_2714_:
{
lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2722_; 
v___x_2717_ = lean_io_error_to_string(v_a_2713_);
v___x_2718_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2718_, 0, v___x_2717_);
v___x_2719_ = l_Lean_MessageData_ofFormat(v___x_2718_);
lean_inc(v_ref_2707_);
v___x_2720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2720_, 0, v_ref_2707_);
lean_ctor_set(v___x_2720_, 1, v___x_2719_);
if (v_isShared_2716_ == 0)
{
lean_ctor_set(v___x_2715_, 0, v___x_2720_);
v___x_2722_ = v___x_2715_;
goto v_reusejp_2721_;
}
else
{
lean_object* v_reuseFailAlloc_2723_; 
v_reuseFailAlloc_2723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2723_, 0, v___x_2720_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___redArg___boxed(lean_object* v_as_2725_, lean_object* v_sz_2726_, lean_object* v_i_2727_, lean_object* v_b_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_){
_start:
{
size_t v_sz_boxed_2731_; size_t v_i_boxed_2732_; lean_object* v_res_2733_; 
v_sz_boxed_2731_ = lean_unbox_usize(v_sz_2726_);
lean_dec(v_sz_2726_);
v_i_boxed_2732_ = lean_unbox_usize(v_i_2727_);
lean_dec(v_i_2727_);
v_res_2733_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___redArg(v_as_2725_, v_sz_boxed_2731_, v_i_boxed_2732_, v_b_2728_, v___y_2729_);
lean_dec_ref(v___y_2729_);
lean_dec_ref(v_as_2725_);
return v_res_2733_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27(lean_object* v_as_2734_, size_t v_sz_2735_, size_t v_i_2736_, lean_object* v_b_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_){
_start:
{
uint8_t v___x_2741_; 
v___x_2741_ = lean_usize_dec_lt(v_i_2736_, v_sz_2735_);
if (v___x_2741_ == 0)
{
lean_object* v___x_2742_; 
v___x_2742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2742_, 0, v_b_2737_);
return v___x_2742_;
}
else
{
uint8_t v___x_2743_; lean_object* v_a_2744_; lean_object* v___x_2745_; lean_object* v_ref_2746_; lean_object* v___x_2747_; 
lean_dec_ref(v_b_2737_);
v___x_2743_ = 0;
v_a_2744_ = lean_array_uget_borrowed(v_as_2734_, v_i_2736_);
lean_inc(v_a_2744_);
v___x_2745_ = l_Lean_Message_toString(v_a_2744_, v___x_2743_);
v_ref_2746_ = lean_ctor_get(v___y_2738_, 2);
v___x_2747_ = l_IO_eprintln___at___00main_spec__6(v___x_2745_);
if (lean_obj_tag(v___x_2747_) == 0)
{
lean_object* v___x_2748_; size_t v___x_2749_; size_t v___x_2750_; lean_object* v___x_2751_; 
lean_dec_ref_known(v___x_2747_, 1);
v___x_2748_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___closed__0));
v___x_2749_ = ((size_t)1ULL);
v___x_2750_ = lean_usize_add(v_i_2736_, v___x_2749_);
v___x_2751_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___redArg(v_as_2734_, v_sz_2735_, v___x_2750_, v___x_2748_, v___y_2738_);
return v___x_2751_;
}
else
{
lean_object* v_a_2752_; lean_object* v___x_2754_; uint8_t v_isShared_2755_; uint8_t v_isSharedCheck_2763_; 
v_a_2752_ = lean_ctor_get(v___x_2747_, 0);
v_isSharedCheck_2763_ = !lean_is_exclusive(v___x_2747_);
if (v_isSharedCheck_2763_ == 0)
{
v___x_2754_ = v___x_2747_;
v_isShared_2755_ = v_isSharedCheck_2763_;
goto v_resetjp_2753_;
}
else
{
lean_inc(v_a_2752_);
lean_dec(v___x_2747_);
v___x_2754_ = lean_box(0);
v_isShared_2755_ = v_isSharedCheck_2763_;
goto v_resetjp_2753_;
}
v_resetjp_2753_:
{
lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2761_; 
v___x_2756_ = lean_io_error_to_string(v_a_2752_);
v___x_2757_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2757_, 0, v___x_2756_);
v___x_2758_ = l_Lean_MessageData_ofFormat(v___x_2757_);
lean_inc(v_ref_2746_);
v___x_2759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2759_, 0, v_ref_2746_);
lean_ctor_set(v___x_2759_, 1, v___x_2758_);
if (v_isShared_2755_ == 0)
{
lean_ctor_set(v___x_2754_, 0, v___x_2759_);
v___x_2761_ = v___x_2754_;
goto v_reusejp_2760_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v___x_2759_);
v___x_2761_ = v_reuseFailAlloc_2762_;
goto v_reusejp_2760_;
}
v_reusejp_2760_:
{
return v___x_2761_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27___boxed(lean_object* v_as_2764_, lean_object* v_sz_2765_, lean_object* v_i_2766_, lean_object* v_b_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_){
_start:
{
size_t v_sz_boxed_2771_; size_t v_i_boxed_2772_; lean_object* v_res_2773_; 
v_sz_boxed_2771_ = lean_unbox_usize(v_sz_2765_);
lean_dec(v_sz_2765_);
v_i_boxed_2772_ = lean_unbox_usize(v_i_2766_);
lean_dec(v_i_2766_);
v_res_2773_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27(v_as_2764_, v_sz_boxed_2771_, v_i_boxed_2772_, v_b_2767_, v___y_2768_, v___y_2769_);
lean_dec(v___y_2769_);
lean_dec_ref(v___y_2768_);
lean_dec_ref(v_as_2764_);
return v_res_2773_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__11(lean_object* v_t_2774_, lean_object* v_init_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_){
_start:
{
lean_object* v_root_2779_; lean_object* v_tail_2780_; lean_object* v___x_2781_; 
v_root_2779_ = lean_ctor_get(v_t_2774_, 0);
v_tail_2780_ = lean_ctor_get(v_t_2774_, 1);
v___x_2781_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26(v_init_2775_, v_root_2779_, v_init_2775_, v___y_2776_, v___y_2777_);
if (lean_obj_tag(v___x_2781_) == 0)
{
lean_object* v_a_2782_; lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2818_; 
v_a_2782_ = lean_ctor_get(v___x_2781_, 0);
v_isSharedCheck_2818_ = !lean_is_exclusive(v___x_2781_);
if (v_isSharedCheck_2818_ == 0)
{
v___x_2784_ = v___x_2781_;
v_isShared_2785_ = v_isSharedCheck_2818_;
goto v_resetjp_2783_;
}
else
{
lean_inc(v_a_2782_);
lean_dec(v___x_2781_);
v___x_2784_ = lean_box(0);
v_isShared_2785_ = v_isSharedCheck_2818_;
goto v_resetjp_2783_;
}
v_resetjp_2783_:
{
if (lean_obj_tag(v_a_2782_) == 0)
{
lean_object* v_a_2786_; lean_object* v___x_2788_; 
v_a_2786_ = lean_ctor_get(v_a_2782_, 0);
lean_inc(v_a_2786_);
lean_dec_ref_known(v_a_2782_, 1);
if (v_isShared_2785_ == 0)
{
lean_ctor_set(v___x_2784_, 0, v_a_2786_);
v___x_2788_ = v___x_2784_;
goto v_reusejp_2787_;
}
else
{
lean_object* v_reuseFailAlloc_2789_; 
v_reuseFailAlloc_2789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2789_, 0, v_a_2786_);
v___x_2788_ = v_reuseFailAlloc_2789_;
goto v_reusejp_2787_;
}
v_reusejp_2787_:
{
return v___x_2788_;
}
}
else
{
lean_object* v_a_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; size_t v_sz_2793_; size_t v___x_2794_; lean_object* v___x_2795_; 
lean_del_object(v___x_2784_);
v_a_2790_ = lean_ctor_get(v_a_2782_, 0);
lean_inc(v_a_2790_);
lean_dec_ref_known(v_a_2782_, 1);
v___x_2791_ = lean_box(0);
v___x_2792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2792_, 0, v___x_2791_);
lean_ctor_set(v___x_2792_, 1, v_a_2790_);
v_sz_2793_ = lean_array_size(v_tail_2780_);
v___x_2794_ = ((size_t)0ULL);
v___x_2795_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27(v_tail_2780_, v_sz_2793_, v___x_2794_, v___x_2792_, v___y_2776_, v___y_2777_);
if (lean_obj_tag(v___x_2795_) == 0)
{
lean_object* v_a_2796_; lean_object* v___x_2798_; uint8_t v_isShared_2799_; uint8_t v_isSharedCheck_2809_; 
v_a_2796_ = lean_ctor_get(v___x_2795_, 0);
v_isSharedCheck_2809_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2809_ == 0)
{
v___x_2798_ = v___x_2795_;
v_isShared_2799_ = v_isSharedCheck_2809_;
goto v_resetjp_2797_;
}
else
{
lean_inc(v_a_2796_);
lean_dec(v___x_2795_);
v___x_2798_ = lean_box(0);
v_isShared_2799_ = v_isSharedCheck_2809_;
goto v_resetjp_2797_;
}
v_resetjp_2797_:
{
lean_object* v_fst_2800_; 
v_fst_2800_ = lean_ctor_get(v_a_2796_, 0);
if (lean_obj_tag(v_fst_2800_) == 0)
{
lean_object* v_snd_2801_; lean_object* v___x_2803_; 
v_snd_2801_ = lean_ctor_get(v_a_2796_, 1);
lean_inc(v_snd_2801_);
lean_dec(v_a_2796_);
if (v_isShared_2799_ == 0)
{
lean_ctor_set(v___x_2798_, 0, v_snd_2801_);
v___x_2803_ = v___x_2798_;
goto v_reusejp_2802_;
}
else
{
lean_object* v_reuseFailAlloc_2804_; 
v_reuseFailAlloc_2804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2804_, 0, v_snd_2801_);
v___x_2803_ = v_reuseFailAlloc_2804_;
goto v_reusejp_2802_;
}
v_reusejp_2802_:
{
return v___x_2803_;
}
}
else
{
lean_object* v_val_2805_; lean_object* v___x_2807_; 
lean_inc_ref(v_fst_2800_);
lean_dec(v_a_2796_);
v_val_2805_ = lean_ctor_get(v_fst_2800_, 0);
lean_inc(v_val_2805_);
lean_dec_ref_known(v_fst_2800_, 1);
if (v_isShared_2799_ == 0)
{
lean_ctor_set(v___x_2798_, 0, v_val_2805_);
v___x_2807_ = v___x_2798_;
goto v_reusejp_2806_;
}
else
{
lean_object* v_reuseFailAlloc_2808_; 
v_reuseFailAlloc_2808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2808_, 0, v_val_2805_);
v___x_2807_ = v_reuseFailAlloc_2808_;
goto v_reusejp_2806_;
}
v_reusejp_2806_:
{
return v___x_2807_;
}
}
}
}
else
{
lean_object* v_a_2810_; lean_object* v___x_2812_; uint8_t v_isShared_2813_; uint8_t v_isSharedCheck_2817_; 
v_a_2810_ = lean_ctor_get(v___x_2795_, 0);
v_isSharedCheck_2817_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2817_ == 0)
{
v___x_2812_ = v___x_2795_;
v_isShared_2813_ = v_isSharedCheck_2817_;
goto v_resetjp_2811_;
}
else
{
lean_inc(v_a_2810_);
lean_dec(v___x_2795_);
v___x_2812_ = lean_box(0);
v_isShared_2813_ = v_isSharedCheck_2817_;
goto v_resetjp_2811_;
}
v_resetjp_2811_:
{
lean_object* v___x_2815_; 
if (v_isShared_2813_ == 0)
{
v___x_2815_ = v___x_2812_;
goto v_reusejp_2814_;
}
else
{
lean_object* v_reuseFailAlloc_2816_; 
v_reuseFailAlloc_2816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2816_, 0, v_a_2810_);
v___x_2815_ = v_reuseFailAlloc_2816_;
goto v_reusejp_2814_;
}
v_reusejp_2814_:
{
return v___x_2815_;
}
}
}
}
}
}
else
{
lean_object* v_a_2819_; lean_object* v___x_2821_; uint8_t v_isShared_2822_; uint8_t v_isSharedCheck_2826_; 
v_a_2819_ = lean_ctor_get(v___x_2781_, 0);
v_isSharedCheck_2826_ = !lean_is_exclusive(v___x_2781_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2821_ = v___x_2781_;
v_isShared_2822_ = v_isSharedCheck_2826_;
goto v_resetjp_2820_;
}
else
{
lean_inc(v_a_2819_);
lean_dec(v___x_2781_);
v___x_2821_ = lean_box(0);
v_isShared_2822_ = v_isSharedCheck_2826_;
goto v_resetjp_2820_;
}
v_resetjp_2820_:
{
lean_object* v___x_2824_; 
if (v_isShared_2822_ == 0)
{
v___x_2824_ = v___x_2821_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v_a_2819_);
v___x_2824_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
return v___x_2824_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__11___boxed(lean_object* v_t_2827_, lean_object* v_init_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_){
_start:
{
lean_object* v_res_2832_; 
v_res_2832_ = l_Lean_PersistentArray_forIn___at___00main_spec__11(v_t_2827_, v_init_2828_, v___y_2829_, v___y_2830_);
lean_dec(v___y_2830_);
lean_dec_ref(v___y_2829_);
lean_dec_ref(v_t_2827_);
return v_res_2832_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__12(lean_object* v_as_2833_, size_t v_sz_2834_, size_t v_i_2835_, lean_object* v_b_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_){
_start:
{
uint8_t v___x_2840_; 
v___x_2840_ = lean_usize_dec_lt(v_i_2835_, v_sz_2834_);
if (v___x_2840_ == 0)
{
lean_object* v___x_2841_; 
v___x_2841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2841_, 0, v_b_2836_);
return v___x_2841_;
}
else
{
lean_object* v_a_2842_; lean_object* v_declNames_2843_; lean_object* v___x_2844_; size_t v_sz_2845_; size_t v___x_2846_; lean_object* v___x_2847_; 
v_a_2842_ = lean_array_uget_borrowed(v_as_2833_, v_i_2835_);
v_declNames_2843_ = lean_ctor_get(v_a_2842_, 0);
v___x_2844_ = lean_box(0);
v_sz_2845_ = lean_array_size(v_declNames_2843_);
v___x_2846_ = ((size_t)0ULL);
v___x_2847_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__10(v_declNames_2843_, v_sz_2845_, v___x_2846_, v___x_2844_, v___y_2837_, v___y_2838_);
if (lean_obj_tag(v___x_2847_) == 0)
{
lean_object* v___x_2848_; 
lean_dec_ref_known(v___x_2847_, 1);
v___x_2848_ = l_Lean_Core_getAndEmptyMessageLog___redArg(v___y_2838_);
if (lean_obj_tag(v___x_2848_) == 0)
{
lean_object* v_a_2849_; lean_object* v_unreported_2850_; lean_object* v___x_2851_; 
v_a_2849_ = lean_ctor_get(v___x_2848_, 0);
lean_inc(v_a_2849_);
lean_dec_ref_known(v___x_2848_, 1);
v_unreported_2850_ = lean_ctor_get(v_a_2849_, 1);
lean_inc_ref(v_unreported_2850_);
lean_dec(v_a_2849_);
v___x_2851_ = l_Lean_PersistentArray_forIn___at___00main_spec__11(v_unreported_2850_, v___x_2844_, v___y_2837_, v___y_2838_);
lean_dec_ref(v_unreported_2850_);
if (lean_obj_tag(v___x_2851_) == 0)
{
size_t v___x_2852_; size_t v___x_2853_; 
lean_dec_ref_known(v___x_2851_, 1);
v___x_2852_ = ((size_t)1ULL);
v___x_2853_ = lean_usize_add(v_i_2835_, v___x_2852_);
v_i_2835_ = v___x_2853_;
v_b_2836_ = v___x_2844_;
goto _start;
}
else
{
return v___x_2851_;
}
}
else
{
lean_object* v_a_2855_; lean_object* v___x_2857_; uint8_t v_isShared_2858_; uint8_t v_isSharedCheck_2862_; 
v_a_2855_ = lean_ctor_get(v___x_2848_, 0);
v_isSharedCheck_2862_ = !lean_is_exclusive(v___x_2848_);
if (v_isSharedCheck_2862_ == 0)
{
v___x_2857_ = v___x_2848_;
v_isShared_2858_ = v_isSharedCheck_2862_;
goto v_resetjp_2856_;
}
else
{
lean_inc(v_a_2855_);
lean_dec(v___x_2848_);
v___x_2857_ = lean_box(0);
v_isShared_2858_ = v_isSharedCheck_2862_;
goto v_resetjp_2856_;
}
v_resetjp_2856_:
{
lean_object* v___x_2860_; 
if (v_isShared_2858_ == 0)
{
v___x_2860_ = v___x_2857_;
goto v_reusejp_2859_;
}
else
{
lean_object* v_reuseFailAlloc_2861_; 
v_reuseFailAlloc_2861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2861_, 0, v_a_2855_);
v___x_2860_ = v_reuseFailAlloc_2861_;
goto v_reusejp_2859_;
}
v_reusejp_2859_:
{
return v___x_2860_;
}
}
}
}
else
{
return v___x_2847_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__12___boxed(lean_object* v_as_2863_, lean_object* v_sz_2864_, lean_object* v_i_2865_, lean_object* v_b_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_){
_start:
{
size_t v_sz_boxed_2870_; size_t v_i_boxed_2871_; lean_object* v_res_2872_; 
v_sz_boxed_2870_ = lean_unbox_usize(v_sz_2864_);
lean_dec(v_sz_2864_);
v_i_boxed_2871_ = lean_unbox_usize(v_i_2865_);
lean_dec(v_i_2865_);
v_res_2872_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__12(v_as_2863_, v_sz_boxed_2870_, v_i_boxed_2871_, v_b_2866_, v___y_2867_, v___y_2868_);
lean_dec(v___y_2868_);
lean_dec_ref(v___y_2867_);
lean_dec_ref(v_as_2863_);
return v_res_2872_;
}
}
static lean_object* _init_l_main___closed__1(void){
_start:
{
lean_object* v___x_2874_; 
v___x_2874_ = l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg();
return v___x_2874_;
}
}
static lean_object* _init_l_main___closed__2(void){
_start:
{
lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; 
v___x_2875_ = l_Lean_instInhabitedClassState_default;
v___x_2876_ = lean_box(0);
v___x_2877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2877_, 0, v___x_2876_);
lean_ctor_set(v___x_2877_, 1, v___x_2875_);
return v___x_2877_;
}
}
static lean_object* _init_l_main___closed__3(void){
_start:
{
lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; 
v___x_2878_ = l_Lean_Meta_Match_Extension_instInhabitedState;
v___x_2879_ = lean_box(0);
v___x_2880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2880_, 0, v___x_2879_);
lean_ctor_set(v___x_2880_, 1, v___x_2878_);
return v___x_2880_;
}
}
static lean_object* _init_l_main___closed__4(void){
_start:
{
lean_object* v___x_2881_; 
v___x_2881_ = l_Lean_PersistentHashMap_instInhabited___redArg();
return v___x_2881_;
}
}
static lean_object* _init_l_main___closed__5(void){
_start:
{
lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; 
v___x_2882_ = lean_obj_once(&l_main___closed__4, &l_main___closed__4_once, _init_l_main___closed__4);
v___x_2883_ = lean_box(0);
v___x_2884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2884_, 0, v___x_2883_);
lean_ctor_set(v___x_2884_, 1, v___x_2882_);
return v___x_2884_;
}
}
static lean_object* _init_l_main___closed__6(void){
_start:
{
lean_object* v___x_2885_; lean_object* v___x_2886_; 
v___x_2885_ = lean_obj_once(&l_main___closed__5, &l_main___closed__5_once, _init_l_main___closed__5);
v___x_2886_ = l_Lean_instInhabitedPersistentEnvExtensionState___redArg(v___x_2885_);
return v___x_2886_;
}
}
static lean_object* _init_l_main___closed__7(void){
_start:
{
lean_object* v___x_2887_; 
v___x_2887_ = l_Array_instInhabited___redArg();
return v___x_2887_;
}
}
static lean_object* _init_l_main___closed__17(void){
_start:
{
lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; 
v___x_2900_ = ((lean_object*)(l_main___closed__16));
v___x_2901_ = lean_unsigned_to_nat(27u);
v___x_2902_ = lean_unsigned_to_nat(160u);
v___x_2903_ = ((lean_object*)(l_main___closed__15));
v___x_2904_ = ((lean_object*)(l_main___closed__14));
v___x_2905_ = l_mkPanicMessageWithDecl(v___x_2904_, v___x_2903_, v___x_2902_, v___x_2901_, v___x_2900_);
return v___x_2905_;
}
}
static lean_object* _init_l_main___closed__19(void){
_start:
{
lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; 
v___x_2907_ = ((lean_object*)(l_main___closed__16));
v___x_2908_ = lean_unsigned_to_nat(51u);
v___x_2909_ = lean_unsigned_to_nat(133u);
v___x_2910_ = ((lean_object*)(l_main___closed__15));
v___x_2911_ = ((lean_object*)(l_main___closed__14));
v___x_2912_ = l_mkPanicMessageWithDecl(v___x_2911_, v___x_2910_, v___x_2909_, v___x_2908_, v___x_2907_);
return v___x_2912_;
}
}
static lean_object* _init_l_main___closed__20(void){
_start:
{
lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; 
v___x_2913_ = lean_unsigned_to_nat(1u);
v___x_2914_ = l_Lean_firstFrontendMacroScope;
v___x_2915_ = lean_nat_add(v___x_2914_, v___x_2913_);
return v___x_2915_;
}
}
static lean_object* _init_l_main___closed__24(void){
_start:
{
lean_object* v___x_2922_; uint64_t v___x_2923_; lean_object* v___x_2924_; 
v___x_2922_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1);
v___x_2923_ = 0ULL;
v___x_2924_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2924_, 0, v___x_2922_);
lean_ctor_set_uint64(v___x_2924_, sizeof(void*)*1, v___x_2923_);
return v___x_2924_;
}
}
static lean_object* _init_l_main___closed__25(void){
_start:
{
lean_object* v___x_2925_; 
v___x_2925_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2925_;
}
}
static lean_object* _init_l_main___closed__26(void){
_start:
{
lean_object* v___x_2926_; lean_object* v___x_2927_; 
v___x_2926_ = lean_obj_once(&l_main___closed__25, &l_main___closed__25_once, _init_l_main___closed__25);
v___x_2927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2927_, 0, v___x_2926_);
return v___x_2927_;
}
}
static lean_object* _init_l_main___closed__27(void){
_start:
{
lean_object* v___x_2928_; lean_object* v___x_2929_; 
v___x_2928_ = lean_obj_once(&l_main___closed__26, &l_main___closed__26_once, _init_l_main___closed__26);
v___x_2929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2929_, 0, v___x_2928_);
lean_ctor_set(v___x_2929_, 1, v___x_2928_);
return v___x_2929_;
}
}
static lean_object* _init_l_main___closed__29(void){
_start:
{
lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; 
v___x_2932_ = lean_unsigned_to_nat(0u);
v___x_2933_ = l_Lean_Options_empty;
v___x_2934_ = ((lean_object*)(l_main___closed__28));
v___x_2935_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2935_, 0, v___x_2934_);
lean_ctor_set(v___x_2935_, 1, v___x_2933_);
lean_ctor_set(v___x_2935_, 2, v___x_2934_);
lean_ctor_set(v___x_2935_, 3, v___x_2932_);
lean_ctor_set(v___x_2935_, 4, v___x_2932_);
lean_ctor_set(v___x_2935_, 5, v___x_2932_);
return v___x_2935_;
}
}
static lean_object* _init_l_main___closed__30(void){
_start:
{
lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; 
v___x_2936_ = l_Lean_NameSet_empty;
v___x_2937_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1);
v___x_2938_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2938_, 0, v___x_2937_);
lean_ctor_set(v___x_2938_, 1, v___x_2937_);
lean_ctor_set(v___x_2938_, 2, v___x_2936_);
return v___x_2938_;
}
}
static lean_object* _init_l_main___closed__31(void){
_start:
{
lean_object* v___x_2939_; lean_object* v___x_2940_; uint8_t v___x_2941_; lean_object* v___x_2942_; 
v___x_2939_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1);
v___x_2940_ = lean_obj_once(&l_main___closed__26, &l_main___closed__26_once, _init_l_main___closed__26);
v___x_2941_ = 1;
v___x_2942_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2942_, 0, v___x_2940_);
lean_ctor_set(v___x_2942_, 1, v___x_2940_);
lean_ctor_set(v___x_2942_, 2, v___x_2939_);
lean_ctor_set_uint8(v___x_2942_, sizeof(void*)*3, v___x_2941_);
return v___x_2942_;
}
}
static uint8_t _init_l_main___closed__35(void){
_start:
{
uint8_t v___x_2947_; uint8_t v___x_2948_; uint8_t v___x_2949_; 
v___x_2947_ = 2;
v___x_2948_ = 0;
v___x_2949_ = l_Lean_instOrdOLeanLevel_ord(v___x_2948_, v___x_2947_);
return v___x_2949_;
}
}
static lean_object* _init_l_main___boxed__const__1(void){
_start:
{
uint32_t v___x_2950_; lean_object* v___x_2951_; 
v___x_2950_ = 1;
v___x_2951_ = lean_box_uint32(v___x_2950_);
return v___x_2951_;
}
}
static lean_object* _init_l_main___boxed__const__2(void){
_start:
{
uint32_t v___x_2952_; lean_object* v___x_2953_; 
v___x_2952_ = 0;
v___x_2953_ = lean_box_uint32(v___x_2952_);
return v___x_2953_;
}
}
LEAN_EXPORT lean_object* _lean_main(lean_object* v_args_2954_){
_start:
{
if (lean_obj_tag(v_args_2954_) == 1)
{
lean_object* v_tail_2979_; 
v_tail_2979_ = lean_ctor_get(v_args_2954_, 1);
lean_inc(v_tail_2979_);
if (lean_obj_tag(v_tail_2979_) == 1)
{
lean_object* v_tail_2980_; 
v_tail_2980_ = lean_ctor_get(v_tail_2979_, 1);
lean_inc(v_tail_2980_);
if (lean_obj_tag(v_tail_2980_) == 1)
{
lean_object* v_head_2981_; lean_object* v___x_2983_; uint8_t v_isShared_2984_; uint8_t v_isSharedCheck_3662_; 
v_head_2981_ = lean_ctor_get(v_args_2954_, 0);
v_isSharedCheck_3662_ = !lean_is_exclusive(v_args_2954_);
if (v_isSharedCheck_3662_ == 0)
{
lean_object* v_unused_3663_; 
v_unused_3663_ = lean_ctor_get(v_args_2954_, 1);
lean_dec(v_unused_3663_);
v___x_2983_ = v_args_2954_;
v_isShared_2984_ = v_isSharedCheck_3662_;
goto v_resetjp_2982_;
}
else
{
lean_inc(v_head_2981_);
lean_dec(v_args_2954_);
v___x_2983_ = lean_box(0);
v_isShared_2984_ = v_isSharedCheck_3662_;
goto v_resetjp_2982_;
}
v_resetjp_2982_:
{
lean_object* v_head_2985_; lean_object* v___x_2987_; uint8_t v_isShared_2988_; uint8_t v_isSharedCheck_3660_; 
v_head_2985_ = lean_ctor_get(v_tail_2979_, 0);
v_isSharedCheck_3660_ = !lean_is_exclusive(v_tail_2979_);
if (v_isSharedCheck_3660_ == 0)
{
lean_object* v_unused_3661_; 
v_unused_3661_ = lean_ctor_get(v_tail_2979_, 1);
lean_dec(v_unused_3661_);
v___x_2987_ = v_tail_2979_;
v_isShared_2988_ = v_isSharedCheck_3660_;
goto v_resetjp_2986_;
}
else
{
lean_inc(v_head_2985_);
lean_dec(v_tail_2979_);
v___x_2987_ = lean_box(0);
v_isShared_2988_ = v_isSharedCheck_3660_;
goto v_resetjp_2986_;
}
v_resetjp_2986_:
{
lean_object* v_head_2989_; lean_object* v_tail_2990_; lean_object* v___x_2992_; uint8_t v_isShared_2993_; uint8_t v_isSharedCheck_3659_; 
v_head_2989_ = lean_ctor_get(v_tail_2980_, 0);
v_tail_2990_ = lean_ctor_get(v_tail_2980_, 1);
v_isSharedCheck_3659_ = !lean_is_exclusive(v_tail_2980_);
if (v_isSharedCheck_3659_ == 0)
{
v___x_2992_ = v_tail_2980_;
v_isShared_2993_ = v_isSharedCheck_3659_;
goto v_resetjp_2991_;
}
else
{
lean_inc(v_tail_2990_);
lean_inc(v_head_2989_);
lean_dec(v_tail_2980_);
v___x_2992_ = lean_box(0);
v_isShared_2993_ = v_isSharedCheck_3659_;
goto v_resetjp_2991_;
}
v_resetjp_2991_:
{
lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; 
v___x_2994_ = lean_obj_once(&l_main___closed__1, &l_main___closed__1_once, _init_l_main___closed__1);
v___x_2995_ = lean_box(0);
v___x_2996_ = lean_obj_once(&l_main___closed__2, &l_main___closed__2_once, _init_l_main___closed__2);
v___x_2997_ = lean_obj_once(&l_main___closed__3, &l_main___closed__3_once, _init_l_main___closed__3);
v___x_2998_ = lean_obj_once(&l_main___closed__4, &l_main___closed__4_once, _init_l_main___closed__4);
v___x_2999_ = lean_obj_once(&l_main___closed__6, &l_main___closed__6_once, _init_l_main___closed__6);
v___x_3000_ = lean_obj_once(&l_main___closed__7, &l_main___closed__7_once, _init_l_main___closed__7);
v___x_3001_ = lean_box(1);
v___x_3002_ = ((lean_object*)(l_main___closed__8));
v___x_3003_ = l_Lean_ModuleSetup_load(v_head_2981_);
lean_dec(v_head_2981_);
if (lean_obj_tag(v___x_3003_) == 0)
{
lean_object* v_a_3004_; lean_object* v_name_3005_; lean_object* v_package_x3f_3006_; lean_object* v_importArts_3007_; lean_object* v_options_3008_; lean_object* v___f_3009_; uint8_t v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3014_; 
v_a_3004_ = lean_ctor_get(v___x_3003_, 0);
lean_inc(v_a_3004_);
lean_dec_ref_known(v___x_3003_, 1);
v_name_3005_ = lean_ctor_get(v_a_3004_, 0);
lean_inc(v_name_3005_);
v_package_x3f_3006_ = lean_ctor_get(v_a_3004_, 1);
lean_inc(v_package_x3f_3006_);
v_importArts_3007_ = lean_ctor_get(v_a_3004_, 3);
lean_inc(v_importArts_3007_);
v_options_3008_ = lean_ctor_get(v_a_3004_, 6);
lean_inc(v_options_3008_);
lean_dec(v_a_3004_);
v___f_3009_ = lean_alloc_closure((void*)(l_main___lam__0), 2, 1);
lean_closure_set(v___f_3009_, 0, v_package_x3f_3006_);
v___x_3010_ = 0;
v___x_3011_ = l_Lean_LeanOptions_toOptions(v_options_3008_);
v___x_3012_ = lean_box(v___x_3010_);
if (v_isShared_2993_ == 0)
{
lean_ctor_set_tag(v___x_2992_, 0);
lean_ctor_set(v___x_2992_, 1, v___x_3011_);
lean_ctor_set(v___x_2992_, 0, v___x_3012_);
v___x_3014_ = v___x_2992_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3650_; 
v_reuseFailAlloc_3650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3650_, 0, v___x_3012_);
lean_ctor_set(v_reuseFailAlloc_3650_, 1, v___x_3011_);
v___x_3014_ = v_reuseFailAlloc_3650_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
lean_object* v___x_3015_; 
v___x_3015_ = l_List_forIn_x27_loop___at___00main_spec__1___redArg(v_tail_2990_, v___x_3014_);
lean_dec(v_tail_2990_);
if (lean_obj_tag(v___x_3015_) == 0)
{
lean_object* v_a_3016_; lean_object* v_fst_3017_; lean_object* v_snd_3018_; lean_object* v___x_3020_; uint8_t v_isShared_3021_; uint8_t v_isSharedCheck_3641_; 
v_a_3016_ = lean_ctor_get(v___x_3015_, 0);
lean_inc(v_a_3016_);
lean_dec_ref_known(v___x_3015_, 1);
v_fst_3017_ = lean_ctor_get(v_a_3016_, 0);
v_snd_3018_ = lean_ctor_get(v_a_3016_, 1);
v_isSharedCheck_3641_ = !lean_is_exclusive(v_a_3016_);
if (v_isSharedCheck_3641_ == 0)
{
v___x_3020_ = v_a_3016_;
v_isShared_3021_ = v_isSharedCheck_3641_;
goto v_resetjp_3019_;
}
else
{
lean_inc(v_snd_3018_);
lean_inc(v_fst_3017_);
lean_dec(v_a_3016_);
v___x_3020_ = lean_box(0);
v_isShared_3021_ = v_isSharedCheck_3641_;
goto v_resetjp_3019_;
}
v_resetjp_3019_:
{
lean_object* v___x_3022_; uint8_t v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___y_3029_; lean_object* v___y_3030_; lean_object* v___y_3031_; lean_object* v___y_3032_; lean_object* v___y_3033_; lean_object* v___y_3034_; lean_object* v___y_3035_; lean_object* v___y_3036_; uint8_t v___y_3037_; lean_object* v___y_3038_; lean_object* v___y_3039_; lean_object* v___y_3040_; lean_object* v___y_3041_; lean_object* v___y_3042_; lean_object* v___y_3043_; lean_object* v___y_3044_; lean_object* v___y_3045_; lean_object* v___y_3046_; lean_object* v___y_3047_; lean_object* v___y_3048_; lean_object* v___y_3049_; lean_object* v___y_3187_; lean_object* v___y_3188_; lean_object* v___y_3189_; lean_object* v___y_3190_; lean_object* v___y_3191_; lean_object* v___y_3192_; lean_object* v___y_3193_; lean_object* v___y_3194_; uint8_t v___y_3195_; lean_object* v___y_3196_; lean_object* v___y_3197_; lean_object* v___y_3198_; lean_object* v___y_3199_; lean_object* v___y_3200_; lean_object* v___y_3201_; lean_object* v___y_3202_; lean_object* v___y_3203_; lean_object* v___y_3204_; lean_object* v___y_3205_; lean_object* v___y_3206_; lean_object* v_nextMacroScope_3207_; lean_object* v_ngen_3208_; lean_object* v_auxDeclNGen_3209_; lean_object* v_traceState_3210_; lean_object* v_recordedDeps_3211_; lean_object* v_messages_3212_; lean_object* v_infoState_3213_; lean_object* v_snapshotTasks_3214_; lean_object* v___y_3215_; lean_object* v___y_3216_; lean_object* v___y_3217_; lean_object* v___y_3218_; lean_object* v___y_3219_; lean_object* v___y_3233_; lean_object* v___y_3234_; lean_object* v___y_3235_; lean_object* v___y_3236_; lean_object* v___y_3237_; lean_object* v___y_3238_; lean_object* v___y_3239_; lean_object* v___y_3240_; uint8_t v___y_3241_; lean_object* v___y_3242_; lean_object* v___y_3243_; lean_object* v___y_3244_; lean_object* v___y_3245_; lean_object* v___y_3246_; lean_object* v___y_3247_; lean_object* v___y_3248_; lean_object* v___y_3249_; lean_object* v___y_3250_; lean_object* v___y_3251_; lean_object* v___y_3252_; uint16_t v___y_3253_; lean_object* v___y_3254_; lean_object* v___y_3255_; lean_object* v___y_3256_; lean_object* v_fileName_3257_; lean_object* v_fileMap_3258_; lean_object* v_currNamespace_3259_; lean_object* v_openDecls_3260_; lean_object* v_initHeartbeats_3261_; lean_object* v_maxHeartbeats_3262_; lean_object* v_quotContext_3263_; lean_object* v_currMacroScope_3264_; lean_object* v_cancelTk_x3f_3265_; lean_object* v_inheritedTraceOptions_3266_; lean_object* v_currRecDepth_3267_; lean_object* v_ref_3268_; uint8_t v_suppressElabErrors_3269_; uint8_t v_isRecordingDeps_3270_; lean_object* v___y_3271_; lean_object* v___y_3294_; lean_object* v___y_3295_; lean_object* v___y_3296_; lean_object* v___y_3297_; lean_object* v___y_3298_; lean_object* v___y_3299_; lean_object* v___y_3300_; lean_object* v___y_3301_; uint8_t v___y_3302_; lean_object* v___y_3303_; lean_object* v___y_3304_; lean_object* v___y_3305_; lean_object* v___y_3306_; lean_object* v___y_3307_; lean_object* v___y_3308_; lean_object* v___y_3309_; lean_object* v___y_3310_; lean_object* v___y_3311_; lean_object* v___y_3312_; lean_object* v___y_3313_; lean_object* v___y_3314_; uint16_t v___y_3315_; lean_object* v___y_3316_; lean_object* v___y_3317_; lean_object* v___y_3318_; uint8_t v___y_3319_; lean_object* v___x_3355_; 
v___x_3022_ = l_Lean_Compiler_compiler_inLeanIR;
v___x_3023_ = 1;
v___x_3024_ = l_Lean_Option_set___at___00Lean_Environment_realizeConst_spec__0(v_snd_3018_, v___x_3022_, v___x_3023_);
v___x_3025_ = l_Lean_maxHeartbeats;
v___x_3026_ = lean_unsigned_to_nat(0u);
v___x_3027_ = l_Lean_Option_set___at___00main_spec__3(v___x_3024_, v___x_3025_, v___x_3026_);
v___x_3355_ = lean_init_search_path();
if (lean_obj_tag(v___x_3355_) == 0)
{
lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; uint8_t v___x_3361_; lean_object* v___y_3363_; lean_object* v___y_3364_; lean_object* v___y_3365_; lean_object* v___y_3366_; lean_object* v___y_3476_; lean_object* v___y_3477_; lean_object* v___y_3478_; lean_object* v___y_3479_; lean_object* v___y_3480_; lean_object* v___y_3481_; uint8_t v___y_3482_; lean_object* v___y_3483_; lean_object* v___y_3493_; lean_object* v___y_3494_; lean_object* v___y_3495_; lean_object* v___y_3496_; lean_object* v___y_3511_; lean_object* v___y_3512_; lean_object* v___y_3513_; lean_object* v___y_3514_; lean_object* v___y_3515_; lean_object* v___y_3516_; lean_object* v___y_3522_; lean_object* v___y_3523_; lean_object* v___y_3524_; lean_object* v___y_3525_; lean_object* v___y_3526_; lean_object* v___y_3533_; lean_object* v___y_3534_; uint8_t v___y_3605_; uint8_t v___x_3632_; 
lean_dec_ref_known(v___x_3355_, 1);
v___x_3356_ = ((lean_object*)(l_main___closed__18));
lean_inc(v_name_3005_);
v___x_3357_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_3357_, 0, v_name_3005_);
lean_ctor_set_uint8(v___x_3357_, sizeof(void*)*1, v___x_3023_);
lean_ctor_set_uint8(v___x_3357_, sizeof(void*)*1 + 1, v___x_3023_);
lean_ctor_set_uint8(v___x_3357_, sizeof(void*)*1 + 2, v___x_3010_);
v___x_3358_ = lean_unsigned_to_nat(1u);
v___x_3359_ = lean_mk_empty_array_with_capacity(v___x_3358_);
v___x_3360_ = lean_array_push(v___x_3359_, v___x_3357_);
v___x_3361_ = 0;
v___x_3632_ = lean_uint8_once(&l_main___closed__35, &l_main___closed__35_once, _init_l_main___closed__35);
if (v___x_3632_ == 0)
{
v___y_3605_ = v___x_3023_;
goto v___jp_3604_;
}
else
{
v___y_3605_ = v___x_3010_;
goto v___jp_3604_;
}
v___jp_3362_:
{
lean_object* v___x_3367_; lean_object* v_moduleData_3368_; lean_object* v___x_3369_; uint8_t v___x_3370_; 
v___x_3367_ = l_Lean_Environment_header(v___y_3366_);
v_moduleData_3368_ = lean_ctor_get(v___x_3367_, 7);
lean_inc_ref(v_moduleData_3368_);
lean_dec_ref(v___x_3367_);
v___x_3369_ = lean_array_get_size(v_moduleData_3368_);
v___x_3370_ = lean_nat_dec_lt(v___y_3365_, v___x_3369_);
if (v___x_3370_ == 0)
{
lean_object* v___x_3371_; lean_object* v___x_3372_; 
lean_dec_ref(v_moduleData_3368_);
lean_dec_ref(v___y_3366_);
lean_dec(v___y_3365_);
lean_dec(v___y_3364_);
lean_dec(v___y_3363_);
lean_dec_ref(v___x_3027_);
lean_del_object(v___x_3020_);
lean_dec(v_fst_3017_);
lean_dec(v_name_3005_);
lean_dec(v_head_2989_);
lean_del_object(v___x_2987_);
lean_dec(v_head_2985_);
v___x_3371_ = lean_obj_once(&l_main___closed__19, &l_main___closed__19_once, _init_l_main___closed__19);
v___x_3372_ = l_panic___at___00main_spec__5(v___x_3371_);
return v___x_3372_;
}
else
{
lean_object* v_base_3373_; lean_object* v_private_3374_; lean_object* v_header_3375_; lean_object* v_serverBaseExts_3376_; lean_object* v_checked_3377_; lean_object* v_asyncConstsMap_3378_; lean_object* v_asyncCtx_x3f_3379_; lean_object* v_importRealizationCtx_x3f_3380_; lean_object* v_localRealizationCtxMap_3381_; lean_object* v_allRealizations_3382_; uint8_t v_isExporting_3383_; uint8_t v_isRecordingDeps_3384_; lean_object* v_synthCacheRaw_x3f_3385_; lean_object* v_declChangeLog_3386_; lean_object* v_recordingConstGen_3387_; lean_object* v_constAddedGens_3388_; lean_object* v_constGen_3389_; lean_object* v___x_3391_; uint8_t v_isShared_3392_; uint8_t v_isSharedCheck_3473_; 
v_base_3373_ = lean_ctor_get(v___y_3366_, 0);
lean_inc_ref(v_base_3373_);
v_private_3374_ = lean_ctor_get(v_base_3373_, 0);
lean_inc(v_private_3374_);
v_header_3375_ = lean_ctor_get(v_private_3374_, 8);
lean_inc_ref(v_header_3375_);
v_serverBaseExts_3376_ = lean_ctor_get(v___y_3366_, 1);
v_checked_3377_ = lean_ctor_get(v___y_3366_, 2);
v_asyncConstsMap_3378_ = lean_ctor_get(v___y_3366_, 3);
v_asyncCtx_x3f_3379_ = lean_ctor_get(v___y_3366_, 4);
v_importRealizationCtx_x3f_3380_ = lean_ctor_get(v___y_3366_, 5);
v_localRealizationCtxMap_3381_ = lean_ctor_get(v___y_3366_, 6);
v_allRealizations_3382_ = lean_ctor_get(v___y_3366_, 7);
v_isExporting_3383_ = lean_ctor_get_uint8(v___y_3366_, sizeof(void*)*13);
v_isRecordingDeps_3384_ = lean_ctor_get_uint8(v___y_3366_, sizeof(void*)*13 + 1);
v_synthCacheRaw_x3f_3385_ = lean_ctor_get(v___y_3366_, 8);
v_declChangeLog_3386_ = lean_ctor_get(v___y_3366_, 9);
v_recordingConstGen_3387_ = lean_ctor_get(v___y_3366_, 10);
v_constAddedGens_3388_ = lean_ctor_get(v___y_3366_, 11);
v_constGen_3389_ = lean_ctor_get(v___y_3366_, 12);
v_isSharedCheck_3473_ = !lean_is_exclusive(v___y_3366_);
if (v_isSharedCheck_3473_ == 0)
{
lean_object* v_unused_3474_; 
v_unused_3474_ = lean_ctor_get(v___y_3366_, 0);
lean_dec(v_unused_3474_);
v___x_3391_ = v___y_3366_;
v_isShared_3392_ = v_isSharedCheck_3473_;
goto v_resetjp_3390_;
}
else
{
lean_inc(v_constGen_3389_);
lean_inc(v_constAddedGens_3388_);
lean_inc(v_recordingConstGen_3387_);
lean_inc(v_declChangeLog_3386_);
lean_inc(v_synthCacheRaw_x3f_3385_);
lean_inc(v_allRealizations_3382_);
lean_inc(v_localRealizationCtxMap_3381_);
lean_inc(v_importRealizationCtx_x3f_3380_);
lean_inc(v_asyncCtx_x3f_3379_);
lean_inc(v_asyncConstsMap_3378_);
lean_inc(v_checked_3377_);
lean_inc(v_serverBaseExts_3376_);
lean_dec(v___y_3366_);
v___x_3391_ = lean_box(0);
v_isShared_3392_ = v_isSharedCheck_3473_;
goto v_resetjp_3390_;
}
v_resetjp_3390_:
{
lean_object* v_public_3393_; lean_object* v___x_3395_; uint8_t v_isShared_3396_; uint8_t v_isSharedCheck_3471_; 
v_public_3393_ = lean_ctor_get(v_base_3373_, 1);
v_isSharedCheck_3471_ = !lean_is_exclusive(v_base_3373_);
if (v_isSharedCheck_3471_ == 0)
{
lean_object* v_unused_3472_; 
v_unused_3472_ = lean_ctor_get(v_base_3373_, 0);
lean_dec(v_unused_3472_);
v___x_3395_ = v_base_3373_;
v_isShared_3396_ = v_isSharedCheck_3471_;
goto v_resetjp_3394_;
}
else
{
lean_inc(v_public_3393_);
lean_dec(v_base_3373_);
v___x_3395_ = lean_box(0);
v_isShared_3396_ = v_isSharedCheck_3471_;
goto v_resetjp_3394_;
}
v_resetjp_3394_:
{
lean_object* v_constants_3397_; uint8_t v_quotInit_3398_; lean_object* v_diagnostics_3399_; lean_object* v_allImportedConsts_3400_; lean_object* v_importedExtraConsts_3401_; lean_object* v_extensions_3402_; lean_object* v_irBaseExts_3403_; lean_object* v_extGens_3404_; lean_object* v_trackedGen_3405_; lean_object* v___x_3407_; uint8_t v_isShared_3408_; uint8_t v_isSharedCheck_3469_; 
v_constants_3397_ = lean_ctor_get(v_private_3374_, 0);
v_quotInit_3398_ = lean_ctor_get_uint8(v_private_3374_, sizeof(void*)*9);
v_diagnostics_3399_ = lean_ctor_get(v_private_3374_, 1);
v_allImportedConsts_3400_ = lean_ctor_get(v_private_3374_, 2);
v_importedExtraConsts_3401_ = lean_ctor_get(v_private_3374_, 3);
v_extensions_3402_ = lean_ctor_get(v_private_3374_, 4);
v_irBaseExts_3403_ = lean_ctor_get(v_private_3374_, 5);
v_extGens_3404_ = lean_ctor_get(v_private_3374_, 6);
v_trackedGen_3405_ = lean_ctor_get(v_private_3374_, 7);
v_isSharedCheck_3469_ = !lean_is_exclusive(v_private_3374_);
if (v_isSharedCheck_3469_ == 0)
{
lean_object* v_unused_3470_; 
v_unused_3470_ = lean_ctor_get(v_private_3374_, 8);
lean_dec(v_unused_3470_);
v___x_3407_ = v_private_3374_;
v_isShared_3408_ = v_isSharedCheck_3469_;
goto v_resetjp_3406_;
}
else
{
lean_inc(v_trackedGen_3405_);
lean_inc(v_extGens_3404_);
lean_inc(v_irBaseExts_3403_);
lean_inc(v_extensions_3402_);
lean_inc(v_importedExtraConsts_3401_);
lean_inc(v_allImportedConsts_3400_);
lean_inc(v_diagnostics_3399_);
lean_inc(v_constants_3397_);
lean_dec(v_private_3374_);
v___x_3407_ = lean_box(0);
v_isShared_3408_ = v_isSharedCheck_3469_;
goto v_resetjp_3406_;
}
v_resetjp_3406_:
{
uint32_t v_trustLevel_3409_; lean_object* v_mainModule_3410_; uint8_t v_isModule_3411_; lean_object* v_regions_3412_; lean_object* v_modules_3413_; lean_object* v_moduleNames_3414_; lean_object* v_moduleName2Idx_3415_; lean_object* v_importAllModules_3416_; lean_object* v_moduleData_3417_; lean_object* v___x_3419_; uint8_t v_isShared_3420_; uint8_t v_isSharedCheck_3467_; 
v_trustLevel_3409_ = lean_ctor_get_uint32(v_header_3375_, sizeof(void*)*8);
v_mainModule_3410_ = lean_ctor_get(v_header_3375_, 0);
v_isModule_3411_ = lean_ctor_get_uint8(v_header_3375_, sizeof(void*)*8 + 4);
v_regions_3412_ = lean_ctor_get(v_header_3375_, 2);
v_modules_3413_ = lean_ctor_get(v_header_3375_, 3);
v_moduleNames_3414_ = lean_ctor_get(v_header_3375_, 4);
v_moduleName2Idx_3415_ = lean_ctor_get(v_header_3375_, 5);
v_importAllModules_3416_ = lean_ctor_get(v_header_3375_, 6);
v_moduleData_3417_ = lean_ctor_get(v_header_3375_, 7);
v_isSharedCheck_3467_ = !lean_is_exclusive(v_header_3375_);
if (v_isSharedCheck_3467_ == 0)
{
lean_object* v_unused_3468_; 
v_unused_3468_ = lean_ctor_get(v_header_3375_, 1);
lean_dec(v_unused_3468_);
v___x_3419_ = v_header_3375_;
v_isShared_3420_ = v_isSharedCheck_3467_;
goto v_resetjp_3418_;
}
else
{
lean_inc(v_moduleData_3417_);
lean_inc(v_importAllModules_3416_);
lean_inc(v_moduleName2Idx_3415_);
lean_inc(v_moduleNames_3414_);
lean_inc(v_modules_3413_);
lean_inc(v_regions_3412_);
lean_inc(v_mainModule_3410_);
lean_dec(v_header_3375_);
v___x_3419_ = lean_box(0);
v_isShared_3420_ = v_isSharedCheck_3467_;
goto v_resetjp_3418_;
}
v_resetjp_3418_:
{
lean_object* v___x_3421_; lean_object* v_imports_3422_; lean_object* v___x_3424_; 
v___x_3421_ = lean_array_fget(v_moduleData_3368_, v___y_3365_);
lean_dec_ref(v_moduleData_3368_);
v_imports_3422_ = lean_ctor_get(v___x_3421_, 0);
lean_inc_ref(v_imports_3422_);
lean_dec(v___x_3421_);
if (v_isShared_3420_ == 0)
{
lean_ctor_set(v___x_3419_, 1, v_imports_3422_);
v___x_3424_ = v___x_3419_;
goto v_reusejp_3423_;
}
else
{
lean_object* v_reuseFailAlloc_3466_; 
v_reuseFailAlloc_3466_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v_reuseFailAlloc_3466_, 0, v_mainModule_3410_);
lean_ctor_set(v_reuseFailAlloc_3466_, 1, v_imports_3422_);
lean_ctor_set(v_reuseFailAlloc_3466_, 2, v_regions_3412_);
lean_ctor_set(v_reuseFailAlloc_3466_, 3, v_modules_3413_);
lean_ctor_set(v_reuseFailAlloc_3466_, 4, v_moduleNames_3414_);
lean_ctor_set(v_reuseFailAlloc_3466_, 5, v_moduleName2Idx_3415_);
lean_ctor_set(v_reuseFailAlloc_3466_, 6, v_importAllModules_3416_);
lean_ctor_set(v_reuseFailAlloc_3466_, 7, v_moduleData_3417_);
lean_ctor_set_uint32(v_reuseFailAlloc_3466_, sizeof(void*)*8, v_trustLevel_3409_);
lean_ctor_set_uint8(v_reuseFailAlloc_3466_, sizeof(void*)*8 + 4, v_isModule_3411_);
v___x_3424_ = v_reuseFailAlloc_3466_;
goto v_reusejp_3423_;
}
v_reusejp_3423_:
{
lean_object* v___x_3426_; 
if (v_isShared_3408_ == 0)
{
lean_ctor_set(v___x_3407_, 8, v___x_3424_);
v___x_3426_ = v___x_3407_;
goto v_reusejp_3425_;
}
else
{
lean_object* v_reuseFailAlloc_3465_; 
v_reuseFailAlloc_3465_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_3465_, 0, v_constants_3397_);
lean_ctor_set(v_reuseFailAlloc_3465_, 1, v_diagnostics_3399_);
lean_ctor_set(v_reuseFailAlloc_3465_, 2, v_allImportedConsts_3400_);
lean_ctor_set(v_reuseFailAlloc_3465_, 3, v_importedExtraConsts_3401_);
lean_ctor_set(v_reuseFailAlloc_3465_, 4, v_extensions_3402_);
lean_ctor_set(v_reuseFailAlloc_3465_, 5, v_irBaseExts_3403_);
lean_ctor_set(v_reuseFailAlloc_3465_, 6, v_extGens_3404_);
lean_ctor_set(v_reuseFailAlloc_3465_, 7, v_trackedGen_3405_);
lean_ctor_set(v_reuseFailAlloc_3465_, 8, v___x_3424_);
lean_ctor_set_uint8(v_reuseFailAlloc_3465_, sizeof(void*)*9, v_quotInit_3398_);
v___x_3426_ = v_reuseFailAlloc_3465_;
goto v_reusejp_3425_;
}
v_reusejp_3425_:
{
lean_object* v___x_3428_; 
if (v_isShared_3396_ == 0)
{
lean_ctor_set(v___x_3395_, 0, v___x_3426_);
v___x_3428_ = v___x_3395_;
goto v_reusejp_3427_;
}
else
{
lean_object* v_reuseFailAlloc_3464_; 
v_reuseFailAlloc_3464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3464_, 0, v___x_3426_);
lean_ctor_set(v_reuseFailAlloc_3464_, 1, v_public_3393_);
v___x_3428_ = v_reuseFailAlloc_3464_;
goto v_reusejp_3427_;
}
v_reusejp_3427_:
{
lean_object* v___x_3430_; 
if (v_isShared_3392_ == 0)
{
lean_ctor_set(v___x_3391_, 0, v___x_3428_);
v___x_3430_ = v___x_3391_;
goto v_reusejp_3429_;
}
else
{
lean_object* v_reuseFailAlloc_3463_; 
v_reuseFailAlloc_3463_ = lean_alloc_ctor(0, 13, 2);
lean_ctor_set(v_reuseFailAlloc_3463_, 0, v___x_3428_);
lean_ctor_set(v_reuseFailAlloc_3463_, 1, v_serverBaseExts_3376_);
lean_ctor_set(v_reuseFailAlloc_3463_, 2, v_checked_3377_);
lean_ctor_set(v_reuseFailAlloc_3463_, 3, v_asyncConstsMap_3378_);
lean_ctor_set(v_reuseFailAlloc_3463_, 4, v_asyncCtx_x3f_3379_);
lean_ctor_set(v_reuseFailAlloc_3463_, 5, v_importRealizationCtx_x3f_3380_);
lean_ctor_set(v_reuseFailAlloc_3463_, 6, v_localRealizationCtxMap_3381_);
lean_ctor_set(v_reuseFailAlloc_3463_, 7, v_allRealizations_3382_);
lean_ctor_set(v_reuseFailAlloc_3463_, 8, v_synthCacheRaw_x3f_3385_);
lean_ctor_set(v_reuseFailAlloc_3463_, 9, v_declChangeLog_3386_);
lean_ctor_set(v_reuseFailAlloc_3463_, 10, v_recordingConstGen_3387_);
lean_ctor_set(v_reuseFailAlloc_3463_, 11, v_constAddedGens_3388_);
lean_ctor_set(v_reuseFailAlloc_3463_, 12, v_constGen_3389_);
lean_ctor_set_uint8(v_reuseFailAlloc_3463_, sizeof(void*)*13, v_isExporting_3383_);
lean_ctor_set_uint8(v_reuseFailAlloc_3463_, sizeof(void*)*13 + 1, v_isRecordingDeps_3384_);
v___x_3430_ = v_reuseFailAlloc_3463_;
goto v_reusejp_3429_;
}
v_reusejp_3429_:
{
lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; uint16_t v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v_env_3457_; uint8_t v___x_3458_; uint16_t v___x_3459_; uint16_t v___x_3460_; uint16_t v___x_3461_; uint8_t v___x_3462_; 
v___x_3431_ = l_Lean_Compiler_LCNF_postponedCompileDeclsExt;
v___x_3432_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_3002_, v___x_3431_, v___x_3430_, v___y_3365_, v___x_3361_);
lean_dec(v___y_3365_);
v___x_3433_ = l_Lean_instInhabitedFileMap_default;
v___x_3434_ = lean_unsigned_to_nat(1000u);
v___x_3435_ = l_Lean_Core_getMaxHeartbeats(v___x_3027_);
v___x_3436_ = l_Lean_firstFrontendMacroScope;
v___x_3437_ = lean_box(0);
v___x_3438_ = lean_box(0);
v___x_3439_ = l_Lean_OptionFlags_ofOptions(v___x_3027_);
v___x_3440_ = lean_obj_once(&l_main___closed__20, &l_main___closed__20_once, _init_l_main___closed__20);
v___x_3441_ = ((lean_object*)(l_main___closed__23));
lean_inc_n(v___y_3364_, 3);
v___x_3442_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3442_, 0, v___y_3364_);
lean_ctor_set(v___x_3442_, 1, v___x_3358_);
lean_ctor_set(v___x_3442_, 2, v___x_2995_);
v___x_3443_ = lean_obj_once(&l_main___closed__24, &l_main___closed__24_once, _init_l_main___closed__24);
v___x_3444_ = lean_obj_once(&l_main___closed__27, &l_main___closed__27_once, _init_l_main___closed__27);
v___x_3445_ = ((lean_object*)(l_main___closed__28));
v___x_3446_ = l_Lean_Options_empty;
v___x_3447_ = lean_obj_once(&l_main___closed__29, &l_main___closed__29_once, _init_l_main___closed__29);
v___x_3448_ = lean_obj_once(&l_main___closed__30, &l_main___closed__30_once, _init_l_main___closed__30);
v___x_3449_ = lean_obj_once(&l_main___closed__31, &l_main___closed__31_once, _init_l_main___closed__31);
lean_inc_ref(v___x_3442_);
v___x_3450_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_3450_, 0, v___x_3430_);
lean_ctor_set(v___x_3450_, 1, v___x_3440_);
lean_ctor_set(v___x_3450_, 2, v___x_3441_);
lean_ctor_set(v___x_3450_, 3, v___x_3442_);
lean_ctor_set(v___x_3450_, 4, v___x_3443_);
lean_ctor_set(v___x_3450_, 5, v___x_3444_);
lean_ctor_set(v___x_3450_, 6, v___x_3447_);
lean_ctor_set(v___x_3450_, 7, v___x_3448_);
lean_ctor_set(v___x_3450_, 8, v___x_3449_);
lean_ctor_set(v___x_3450_, 9, v___x_3445_);
v___x_3451_ = lean_st_mk_ref(v___x_3450_);
v___x_3452_ = l_Lean_inheritedTraceOptions;
v___x_3453_ = lean_st_ref_get(v___x_3452_);
lean_inc(v___x_3453_);
lean_inc(v___x_3435_);
lean_inc_ref(v___x_3027_);
lean_inc(v_head_2985_);
v___x_3454_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_3454_, 0, v_head_2985_);
lean_ctor_set(v___x_3454_, 1, v___x_3433_);
lean_ctor_set(v___x_3454_, 2, v___x_3027_);
lean_ctor_set(v___x_3454_, 3, v___x_3434_);
lean_ctor_set(v___x_3454_, 4, v___y_3364_);
lean_ctor_set(v___x_3454_, 5, v___x_2995_);
lean_ctor_set(v___x_3454_, 6, v___x_3026_);
lean_ctor_set(v___x_3454_, 7, v___x_3435_);
lean_ctor_set(v___x_3454_, 8, v___y_3364_);
lean_ctor_set(v___x_3454_, 9, v___x_3436_);
lean_ctor_set(v___x_3454_, 10, v___x_3437_);
lean_ctor_set(v___x_3454_, 11, v___x_3453_);
v___x_3455_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_3455_, 0, v___x_3454_);
lean_ctor_set(v___x_3455_, 1, v___x_3026_);
lean_ctor_set(v___x_3455_, 2, v___x_3438_);
lean_ctor_set_uint16(v___x_3455_, sizeof(void*)*3, v___x_3439_);
lean_ctor_set_uint8(v___x_3455_, sizeof(void*)*3 + 2, v___x_3010_);
lean_ctor_set_uint8(v___x_3455_, sizeof(void*)*3 + 3, v___x_3010_);
v___x_3456_ = lean_st_ref_get(v___x_3451_);
v_env_3457_ = lean_ctor_get(v___x_3456_, 0);
lean_inc_ref(v_env_3457_);
lean_dec(v___x_3456_);
v___x_3458_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_3457_);
lean_dec_ref(v_env_3457_);
v___x_3459_ = 512;
v___x_3460_ = lean_uint16_land(v___x_3439_, v___x_3459_);
v___x_3461_ = 0;
v___x_3462_ = lean_uint16_dec_eq(v___x_3460_, v___x_3461_);
if (v___x_3462_ == 0)
{
if (v___x_3458_ == 0)
{
lean_dec(v___x_3453_);
lean_dec(v___x_3435_);
v___y_3294_ = v___x_3444_;
v___y_3295_ = v___x_3438_;
v___y_3296_ = v___x_3437_;
v___y_3297_ = v___x_3446_;
v___y_3298_ = v___x_3433_;
v___y_3299_ = v___y_3363_;
v___y_3300_ = v___x_3436_;
v___y_3301_ = v___x_2995_;
v___y_3302_ = v___x_3370_;
v___y_3303_ = v___x_3448_;
v___y_3304_ = v___x_3440_;
v___y_3305_ = v___x_3451_;
v___y_3306_ = v___x_3446_;
v___y_3307_ = v___x_3455_;
v___y_3308_ = v___x_3449_;
v___y_3309_ = v___x_3432_;
v___y_3310_ = v___x_3447_;
v___y_3311_ = v___x_3441_;
v___y_3312_ = v___x_3444_;
v___y_3313_ = v___x_3443_;
v___y_3314_ = v___x_3431_;
v___y_3315_ = v___x_3439_;
v___y_3316_ = v___x_3445_;
v___y_3317_ = v___y_3364_;
v___y_3318_ = v___x_3442_;
v___y_3319_ = v___x_3370_;
goto v___jp_3293_;
}
else
{
lean_dec_ref_known(v___x_3455_, 3);
lean_inc(v_head_2985_);
lean_inc_n(v___y_3364_, 2);
lean_inc(v___x_3451_);
v___y_3233_ = v___x_3444_;
v___y_3234_ = v___x_3438_;
v___y_3235_ = v___x_3437_;
v___y_3236_ = v___x_3433_;
v___y_3237_ = v___x_3446_;
v___y_3238_ = v___y_3363_;
v___y_3239_ = v___x_3436_;
v___y_3240_ = v___x_2995_;
v___y_3241_ = v___x_3370_;
v___y_3242_ = v___x_3448_;
v___y_3243_ = v___x_3440_;
v___y_3244_ = v___x_3451_;
v___y_3245_ = v___x_3446_;
v___y_3246_ = v___x_3449_;
v___y_3247_ = v___x_3432_;
v___y_3248_ = v___x_3447_;
v___y_3249_ = v___x_3441_;
v___y_3250_ = v___x_3444_;
v___y_3251_ = v___x_3443_;
v___y_3252_ = v___x_3431_;
v___y_3253_ = v___x_3439_;
v___y_3254_ = v___x_3445_;
v___y_3255_ = v___y_3364_;
v___y_3256_ = v___x_3442_;
v_fileName_3257_ = v_head_2985_;
v_fileMap_3258_ = v___x_3433_;
v_currNamespace_3259_ = v___y_3364_;
v_openDecls_3260_ = v___x_2995_;
v_initHeartbeats_3261_ = v___x_3026_;
v_maxHeartbeats_3262_ = v___x_3435_;
v_quotContext_3263_ = v___y_3364_;
v_currMacroScope_3264_ = v___x_3436_;
v_cancelTk_x3f_3265_ = v___x_3437_;
v_inheritedTraceOptions_3266_ = v___x_3453_;
v_currRecDepth_3267_ = v___x_3026_;
v_ref_3268_ = v___x_3438_;
v_suppressElabErrors_3269_ = v___x_3010_;
v_isRecordingDeps_3270_ = v___x_3010_;
v___y_3271_ = v___x_3451_;
goto v___jp_3232_;
}
}
else
{
if (v___x_3458_ == 0)
{
lean_dec_ref_known(v___x_3455_, 3);
lean_inc(v_head_2985_);
lean_inc_n(v___y_3364_, 2);
lean_inc(v___x_3451_);
v___y_3233_ = v___x_3444_;
v___y_3234_ = v___x_3438_;
v___y_3235_ = v___x_3437_;
v___y_3236_ = v___x_3433_;
v___y_3237_ = v___x_3446_;
v___y_3238_ = v___y_3363_;
v___y_3239_ = v___x_3436_;
v___y_3240_ = v___x_2995_;
v___y_3241_ = v___x_3370_;
v___y_3242_ = v___x_3448_;
v___y_3243_ = v___x_3440_;
v___y_3244_ = v___x_3451_;
v___y_3245_ = v___x_3446_;
v___y_3246_ = v___x_3449_;
v___y_3247_ = v___x_3432_;
v___y_3248_ = v___x_3447_;
v___y_3249_ = v___x_3441_;
v___y_3250_ = v___x_3444_;
v___y_3251_ = v___x_3443_;
v___y_3252_ = v___x_3431_;
v___y_3253_ = v___x_3439_;
v___y_3254_ = v___x_3445_;
v___y_3255_ = v___y_3364_;
v___y_3256_ = v___x_3442_;
v_fileName_3257_ = v_head_2985_;
v_fileMap_3258_ = v___x_3433_;
v_currNamespace_3259_ = v___y_3364_;
v_openDecls_3260_ = v___x_2995_;
v_initHeartbeats_3261_ = v___x_3026_;
v_maxHeartbeats_3262_ = v___x_3435_;
v_quotContext_3263_ = v___y_3364_;
v_currMacroScope_3264_ = v___x_3436_;
v_cancelTk_x3f_3265_ = v___x_3437_;
v_inheritedTraceOptions_3266_ = v___x_3453_;
v_currRecDepth_3267_ = v___x_3026_;
v_ref_3268_ = v___x_3438_;
v_suppressElabErrors_3269_ = v___x_3010_;
v_isRecordingDeps_3270_ = v___x_3010_;
v___y_3271_ = v___x_3451_;
goto v___jp_3232_;
}
else
{
lean_dec(v___x_3453_);
lean_dec(v___x_3435_);
v___y_3294_ = v___x_3444_;
v___y_3295_ = v___x_3438_;
v___y_3296_ = v___x_3437_;
v___y_3297_ = v___x_3446_;
v___y_3298_ = v___x_3433_;
v___y_3299_ = v___y_3363_;
v___y_3300_ = v___x_3436_;
v___y_3301_ = v___x_2995_;
v___y_3302_ = v___x_3370_;
v___y_3303_ = v___x_3448_;
v___y_3304_ = v___x_3440_;
v___y_3305_ = v___x_3451_;
v___y_3306_ = v___x_3446_;
v___y_3307_ = v___x_3455_;
v___y_3308_ = v___x_3449_;
v___y_3309_ = v___x_3432_;
v___y_3310_ = v___x_3447_;
v___y_3311_ = v___x_3441_;
v___y_3312_ = v___x_3444_;
v___y_3313_ = v___x_3443_;
v___y_3314_ = v___x_3431_;
v___y_3315_ = v___x_3439_;
v___y_3316_ = v___x_3445_;
v___y_3317_ = v___y_3364_;
v___y_3318_ = v___x_3442_;
v___y_3319_ = v___x_3010_;
goto v___jp_3293_;
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
v___jp_3475_:
{
lean_object* v___x_3485_; 
if (v_isShared_2984_ == 0)
{
lean_ctor_set_tag(v___x_2983_, 0);
lean_ctor_set(v___x_2983_, 1, v___y_3483_);
lean_ctor_set(v___x_2983_, 0, v___y_3477_);
v___x_3485_ = v___x_2983_;
goto v_reusejp_3484_;
}
else
{
lean_object* v_reuseFailAlloc_3491_; 
v_reuseFailAlloc_3491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3491_, 0, v___y_3477_);
lean_ctor_set(v_reuseFailAlloc_3491_, 1, v___y_3483_);
v___x_3485_ = v_reuseFailAlloc_3491_;
goto v_reusejp_3484_;
}
v_reusejp_3484_:
{
lean_object* v___f_3486_; lean_object* v___x_3487_; 
v___f_3486_ = lean_alloc_closure((void*)(l_main___lam__3___boxed), 2, 1);
lean_closure_set(v___f_3486_, 0, v___x_3485_);
v___x_3487_ = lean_box(0);
if (v___y_3482_ == 0)
{
lean_object* v___x_3488_; 
lean_inc(v___y_3480_);
lean_inc_ref(v___y_3481_);
v___x_3488_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(v___y_3481_, v___y_3478_, v___f_3486_, v___x_3487_, v___y_3480_, v___x_3023_);
v___y_3363_ = v___y_3476_;
v___y_3364_ = v___y_3480_;
v___y_3365_ = v___y_3479_;
v___y_3366_ = v___x_3488_;
goto v___jp_3362_;
}
else
{
lean_object* v___x_3489_; lean_object* v___x_3490_; 
lean_inc_ref_n(v___y_3481_, 2);
v___x_3489_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite___redArg(v___y_3481_, v___y_3478_);
lean_dec_ref(v___y_3478_);
lean_inc(v___y_3480_);
v___x_3490_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(v___y_3481_, v___x_3489_, v___f_3486_, v___x_3487_, v___y_3480_, v___x_3023_);
v___y_3363_ = v___y_3476_;
v___y_3364_ = v___y_3480_;
v___y_3365_ = v___y_3479_;
v___y_3366_ = v___x_3490_;
goto v___jp_3362_;
}
}
}
v___jp_3492_:
{
lean_object* v___x_3497_; lean_object* v_toEnvExtension_3498_; lean_object* v_asyncMode_3499_; uint8_t v_logWrites_3500_; lean_object* v___x_3501_; lean_object* v_importedEntries_3502_; lean_object* v_state_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; uint8_t v___x_3506_; 
v___x_3497_ = l_Lean_IR_declMapExt;
v_toEnvExtension_3498_ = lean_ctor_get(v___x_3497_, 0);
v_asyncMode_3499_ = lean_ctor_get(v_toEnvExtension_3498_, 2);
v_logWrites_3500_ = lean_ctor_get_uint8(v_toEnvExtension_3498_, sizeof(void*)*6);
lean_inc(v___y_3495_);
lean_inc_ref(v___y_3496_);
v___x_3501_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_2999_, v_toEnvExtension_3498_, v___y_3496_, v_asyncMode_3499_, v___y_3495_, v___x_3010_);
v_importedEntries_3502_ = lean_ctor_get(v___x_3501_, 0);
lean_inc_ref(v_importedEntries_3502_);
v_state_3503_ = lean_ctor_get(v___x_3501_, 1);
lean_inc(v_state_3503_);
lean_dec(v___x_3501_);
v___x_3504_ = lean_array_get_borrowed(v___x_3000_, v_importedEntries_3502_, v___y_3494_);
v___x_3505_ = lean_array_get_size(v___x_3504_);
v___x_3506_ = lean_nat_dec_lt(v___x_3026_, v___x_3505_);
if (v___x_3506_ == 0)
{
v___y_3476_ = v___y_3493_;
v___y_3477_ = v_importedEntries_3502_;
v___y_3478_ = v___y_3496_;
v___y_3479_ = v___y_3494_;
v___y_3480_ = v___y_3495_;
v___y_3481_ = v_toEnvExtension_3498_;
v___y_3482_ = v_logWrites_3500_;
v___y_3483_ = v_state_3503_;
goto v___jp_3475_;
}
else
{
size_t v___x_3507_; size_t v___x_3508_; lean_object* v___x_3509_; 
v___x_3507_ = ((size_t)0ULL);
v___x_3508_ = lean_usize_of_nat(v___x_3505_);
lean_inc_ref(v___y_3496_);
v___x_3509_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15(v___y_3496_, v___x_3504_, v___x_3507_, v___x_3508_, v_state_3503_);
v___y_3476_ = v___y_3493_;
v___y_3477_ = v_importedEntries_3502_;
v___y_3478_ = v___y_3496_;
v___y_3479_ = v___y_3494_;
v___y_3480_ = v___y_3495_;
v___y_3481_ = v_toEnvExtension_3498_;
v___y_3482_ = v_logWrites_3500_;
v___y_3483_ = v___x_3509_;
goto v___jp_3475_;
}
}
v___jp_3510_:
{
uint8_t v___x_3517_; 
v___x_3517_ = lean_nat_dec_lt(v___x_3026_, v___y_3513_);
if (v___x_3517_ == 0)
{
lean_dec(v___y_3513_);
lean_dec_ref(v___y_3512_);
v___y_3493_ = v___y_3511_;
v___y_3494_ = v___y_3515_;
v___y_3495_ = v___y_3514_;
v___y_3496_ = v___y_3516_;
goto v___jp_3492_;
}
else
{
size_t v___x_3518_; size_t v___x_3519_; lean_object* v___x_3520_; 
v___x_3518_ = ((size_t)0ULL);
v___x_3519_ = lean_usize_of_nat(v___y_3513_);
lean_dec(v___y_3513_);
v___x_3520_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16(v___y_3512_, v___x_3518_, v___x_3519_, v___y_3516_);
lean_dec_ref(v___y_3512_);
v___y_3493_ = v___y_3511_;
v___y_3494_ = v___y_3515_;
v___y_3495_ = v___y_3514_;
v___y_3496_ = v___x_3520_;
goto v___jp_3492_;
}
}
v___jp_3521_:
{
lean_object* v___x_3527_; uint8_t v___x_3528_; 
v___x_3527_ = lean_array_get_size(v___y_3526_);
v___x_3528_ = lean_nat_dec_lt(v___x_3026_, v___x_3527_);
if (v___x_3528_ == 0)
{
v___y_3511_ = v___y_3522_;
v___y_3512_ = v___y_3526_;
v___y_3513_ = v___x_3527_;
v___y_3514_ = v___y_3524_;
v___y_3515_ = v___y_3523_;
v___y_3516_ = v___y_3525_;
goto v___jp_3510_;
}
else
{
size_t v___x_3529_; size_t v___x_3530_; lean_object* v___x_3531_; 
v___x_3529_ = ((size_t)0ULL);
v___x_3530_ = lean_usize_of_nat(v___x_3527_);
v___x_3531_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17(v___y_3526_, v___x_3529_, v___x_3530_, v___y_3525_);
v___y_3511_ = v___y_3522_;
v___y_3512_ = v___y_3526_;
v___y_3513_ = v___x_3527_;
v___y_3514_ = v___y_3524_;
v___y_3515_ = v___y_3523_;
v___y_3516_ = v___x_3531_;
goto v___jp_3510_;
}
}
v___jp_3532_:
{
lean_object* v___x_3535_; lean_object* v_ext_3536_; lean_object* v___x_3537_; 
v___x_3535_ = l_Lean_Compiler_CSimp_ext;
v_ext_3536_ = lean_ctor_get(v___x_3535_, 1);
lean_inc_ref(v_ext_3536_);
lean_inc(v___y_3533_);
v___x_3537_ = l_main___elam__0___redArg(v___y_3533_, v___x_3010_, v___x_2994_, v_ext_3536_, v___y_3534_);
if (lean_obj_tag(v___x_3537_) == 0)
{
lean_object* v_a_3538_; lean_object* v___x_3539_; lean_object* v_ext_3540_; lean_object* v___x_3541_; 
v_a_3538_ = lean_ctor_get(v___x_3537_, 0);
lean_inc(v_a_3538_);
lean_dec_ref_known(v___x_3537_, 1);
v___x_3539_ = l_Lean_Meta_instanceExtension;
v_ext_3540_ = lean_ctor_get(v___x_3539_, 1);
lean_inc_ref(v_ext_3540_);
lean_inc(v___y_3533_);
v___x_3541_ = l_main___elam__0___redArg(v___y_3533_, v___x_3010_, v___x_2994_, v_ext_3540_, v_a_3538_);
if (lean_obj_tag(v___x_3541_) == 0)
{
lean_object* v_a_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; 
v_a_3542_ = lean_ctor_get(v___x_3541_, 0);
lean_inc(v_a_3542_);
lean_dec_ref_known(v___x_3541_, 1);
v___x_3543_ = l_Lean_classExtension;
lean_inc(v___y_3533_);
v___x_3544_ = l_main___elam__0___redArg(v___y_3533_, v___x_3010_, v___x_2996_, v___x_3543_, v_a_3542_);
if (lean_obj_tag(v___x_3544_) == 0)
{
lean_object* v_a_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; 
v_a_3545_ = lean_ctor_get(v___x_3544_, 0);
lean_inc(v_a_3545_);
lean_dec_ref_known(v___x_3544_, 1);
v___x_3546_ = l_Lean_Meta_Match_Extension_extension;
lean_inc(v___y_3533_);
v___x_3547_ = l_main___elam__0___redArg(v___y_3533_, v___x_3010_, v___x_2997_, v___x_3546_, v_a_3545_);
if (lean_obj_tag(v___x_3547_) == 0)
{
lean_object* v_a_3548_; lean_object* v___x_3550_; uint8_t v_isShared_3551_; uint8_t v_isSharedCheck_3571_; 
v_a_3548_ = lean_ctor_get(v___x_3547_, 0);
v_isSharedCheck_3571_ = !lean_is_exclusive(v___x_3547_);
if (v_isSharedCheck_3571_ == 0)
{
v___x_3550_ = v___x_3547_;
v_isShared_3551_ = v_isSharedCheck_3571_;
goto v_resetjp_3549_;
}
else
{
lean_inc(v_a_3548_);
lean_dec(v___x_3547_);
v___x_3550_ = lean_box(0);
v_isShared_3551_ = v_isSharedCheck_3571_;
goto v_resetjp_3549_;
}
v_resetjp_3549_:
{
lean_object* v___x_3552_; 
v___x_3552_ = l_Lean_Environment_getModuleIdx_x3f(v_a_3548_, v_name_3005_);
if (lean_obj_tag(v___x_3552_) == 1)
{
lean_object* v_val_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; uint8_t v___x_3558_; 
lean_del_object(v___x_3550_);
v_val_3553_ = lean_ctor_get(v___x_3552_, 0);
lean_inc(v_val_3553_);
lean_dec_ref_known(v___x_3552_, 1);
v___x_3554_ = l_Lean_Compiler_LCNF_impureSigExt;
v___x_3555_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_2998_, v___x_3554_, v_a_3548_, v_val_3553_, v___x_3361_);
v___x_3556_ = lean_array_get_size(v___x_3555_);
v___x_3557_ = ((lean_object*)(l_main___closed__32));
v___x_3558_ = lean_nat_dec_lt(v___x_3026_, v___x_3556_);
if (v___x_3558_ == 0)
{
lean_dec_ref(v___x_3555_);
lean_inc(v___y_3533_);
v___y_3522_ = v___y_3533_;
v___y_3523_ = v_val_3553_;
v___y_3524_ = v___y_3533_;
v___y_3525_ = v_a_3548_;
v___y_3526_ = v___x_3557_;
goto v___jp_3521_;
}
else
{
size_t v___x_3559_; size_t v___x_3560_; lean_object* v___x_3561_; 
v___x_3559_ = ((size_t)0ULL);
v___x_3560_ = lean_usize_of_nat(v___x_3556_);
lean_inc(v_a_3548_);
v___x_3561_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18(v_a_3548_, v___x_3555_, v___x_3559_, v___x_3560_, v___x_3557_);
lean_dec_ref(v___x_3555_);
lean_inc(v___y_3533_);
v___y_3522_ = v___y_3533_;
v___y_3523_ = v_val_3553_;
v___y_3524_ = v___y_3533_;
v___y_3525_ = v_a_3548_;
v___y_3526_ = v___x_3561_;
goto v___jp_3521_;
}
}
else
{
lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3569_; 
lean_dec(v___x_3552_);
lean_dec(v_a_3548_);
lean_dec(v___y_3533_);
lean_dec_ref(v___x_3027_);
lean_del_object(v___x_3020_);
lean_dec(v_fst_3017_);
lean_dec(v_head_2989_);
lean_del_object(v___x_2987_);
lean_dec(v_head_2985_);
lean_del_object(v___x_2983_);
v___x_3562_ = ((lean_object*)(l_main___closed__33));
v___x_3563_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_3005_, v___x_3023_);
v___x_3564_ = lean_string_append(v___x_3562_, v___x_3563_);
lean_dec_ref(v___x_3563_);
v___x_3565_ = ((lean_object*)(l_main___closed__34));
v___x_3566_ = lean_string_append(v___x_3564_, v___x_3565_);
v___x_3567_ = lean_mk_io_user_error(v___x_3566_);
if (v_isShared_3551_ == 0)
{
lean_ctor_set_tag(v___x_3550_, 1);
lean_ctor_set(v___x_3550_, 0, v___x_3567_);
v___x_3569_ = v___x_3550_;
goto v_reusejp_3568_;
}
else
{
lean_object* v_reuseFailAlloc_3570_; 
v_reuseFailAlloc_3570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3570_, 0, v___x_3567_);
v___x_3569_ = v_reuseFailAlloc_3570_;
goto v_reusejp_3568_;
}
v_reusejp_3568_:
{
return v___x_3569_;
}
}
}
}
else
{
lean_object* v_a_3572_; lean_object* v___x_3574_; uint8_t v_isShared_3575_; uint8_t v_isSharedCheck_3579_; 
lean_dec(v___y_3533_);
lean_dec_ref(v___x_3027_);
lean_del_object(v___x_3020_);
lean_dec(v_fst_3017_);
lean_dec(v_name_3005_);
lean_dec(v_head_2989_);
lean_del_object(v___x_2987_);
lean_dec(v_head_2985_);
lean_del_object(v___x_2983_);
v_a_3572_ = lean_ctor_get(v___x_3547_, 0);
v_isSharedCheck_3579_ = !lean_is_exclusive(v___x_3547_);
if (v_isSharedCheck_3579_ == 0)
{
v___x_3574_ = v___x_3547_;
v_isShared_3575_ = v_isSharedCheck_3579_;
goto v_resetjp_3573_;
}
else
{
lean_inc(v_a_3572_);
lean_dec(v___x_3547_);
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
lean_dec(v___y_3533_);
lean_dec_ref(v___x_3027_);
lean_del_object(v___x_3020_);
lean_dec(v_fst_3017_);
lean_dec(v_name_3005_);
lean_dec(v_head_2989_);
lean_del_object(v___x_2987_);
lean_dec(v_head_2985_);
lean_del_object(v___x_2983_);
v_a_3580_ = lean_ctor_get(v___x_3544_, 0);
v_isSharedCheck_3587_ = !lean_is_exclusive(v___x_3544_);
if (v_isSharedCheck_3587_ == 0)
{
v___x_3582_ = v___x_3544_;
v_isShared_3583_ = v_isSharedCheck_3587_;
goto v_resetjp_3581_;
}
else
{
lean_inc(v_a_3580_);
lean_dec(v___x_3544_);
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
else
{
lean_object* v_a_3588_; lean_object* v___x_3590_; uint8_t v_isShared_3591_; uint8_t v_isSharedCheck_3595_; 
lean_dec(v___y_3533_);
lean_dec_ref(v___x_3027_);
lean_del_object(v___x_3020_);
lean_dec(v_fst_3017_);
lean_dec(v_name_3005_);
lean_dec(v_head_2989_);
lean_del_object(v___x_2987_);
lean_dec(v_head_2985_);
lean_del_object(v___x_2983_);
v_a_3588_ = lean_ctor_get(v___x_3541_, 0);
v_isSharedCheck_3595_ = !lean_is_exclusive(v___x_3541_);
if (v_isSharedCheck_3595_ == 0)
{
v___x_3590_ = v___x_3541_;
v_isShared_3591_ = v_isSharedCheck_3595_;
goto v_resetjp_3589_;
}
else
{
lean_inc(v_a_3588_);
lean_dec(v___x_3541_);
v___x_3590_ = lean_box(0);
v_isShared_3591_ = v_isSharedCheck_3595_;
goto v_resetjp_3589_;
}
v_resetjp_3589_:
{
lean_object* v___x_3593_; 
if (v_isShared_3591_ == 0)
{
v___x_3593_ = v___x_3590_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3594_; 
v_reuseFailAlloc_3594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3594_, 0, v_a_3588_);
v___x_3593_ = v_reuseFailAlloc_3594_;
goto v_reusejp_3592_;
}
v_reusejp_3592_:
{
return v___x_3593_;
}
}
}
}
else
{
lean_object* v_a_3596_; lean_object* v___x_3598_; uint8_t v_isShared_3599_; uint8_t v_isSharedCheck_3603_; 
lean_dec(v___y_3533_);
lean_dec_ref(v___x_3027_);
lean_del_object(v___x_3020_);
lean_dec(v_fst_3017_);
lean_dec(v_name_3005_);
lean_dec(v_head_2989_);
lean_del_object(v___x_2987_);
lean_dec(v_head_2985_);
lean_del_object(v___x_2983_);
v_a_3596_ = lean_ctor_get(v___x_3537_, 0);
v_isSharedCheck_3603_ = !lean_is_exclusive(v___x_3537_);
if (v_isSharedCheck_3603_ == 0)
{
v___x_3598_ = v___x_3537_;
v_isShared_3599_ = v_isSharedCheck_3603_;
goto v_resetjp_3597_;
}
else
{
lean_inc(v_a_3596_);
lean_dec(v___x_3537_);
v___x_3598_ = lean_box(0);
v_isShared_3599_ = v_isSharedCheck_3603_;
goto v_resetjp_3597_;
}
v_resetjp_3597_:
{
lean_object* v___x_3601_; 
if (v_isShared_3599_ == 0)
{
v___x_3601_ = v___x_3598_;
goto v_reusejp_3600_;
}
else
{
lean_object* v_reuseFailAlloc_3602_; 
v_reuseFailAlloc_3602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3602_, 0, v_a_3596_);
v___x_3601_ = v_reuseFailAlloc_3602_;
goto v_reusejp_3600_;
}
v_reusejp_3600_:
{
return v___x_3601_;
}
}
}
}
v___jp_3604_:
{
lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___f_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; 
v___x_3606_ = l_Lean_instInhabitedImportState_default;
v___x_3607_ = lean_box(v___x_3361_);
v___x_3608_ = lean_box(v___y_3605_);
v___x_3609_ = lean_box(v___x_3023_);
v___x_3610_ = lean_box(v___x_3010_);
lean_inc_ref(v___x_3027_);
lean_inc(v_name_3005_);
v___f_3611_ = lean_alloc_closure((void*)(l_main___lam__1___boxed), 10, 9);
lean_closure_set(v___f_3611_, 0, v___x_3606_);
lean_closure_set(v___f_3611_, 1, v___x_3360_);
lean_closure_set(v___f_3611_, 2, v___x_3607_);
lean_closure_set(v___f_3611_, 3, v_importArts_3007_);
lean_closure_set(v___f_3611_, 4, v___x_3608_);
lean_closure_set(v___f_3611_, 5, v___x_3609_);
lean_closure_set(v___f_3611_, 6, v_name_3005_);
lean_closure_set(v___f_3611_, 7, v___x_3027_);
lean_closure_set(v___f_3611_, 8, v___x_3610_);
v___x_3612_ = lean_alloc_closure((void*)(l_Lean_withImporting___boxed), 3, 2);
lean_closure_set(v___x_3612_, 0, lean_box(0));
lean_closure_set(v___x_3612_, 1, v___f_3611_);
v___x_3613_ = lean_box(0);
v___x_3614_ = l_Lean_profileitIOUnsafe___redArg(v___x_3356_, v___x_3027_, v___x_3612_, v___x_3613_);
if (lean_obj_tag(v___x_3614_) == 0)
{
lean_object* v_a_3615_; lean_object* v___x_3616_; lean_object* v_toEnvExtension_3617_; lean_object* v_asyncMode_3618_; uint8_t v_logWrites_3619_; lean_object* v___x_3620_; 
v_a_3615_ = lean_ctor_get(v___x_3614_, 0);
lean_inc(v_a_3615_);
lean_dec_ref_known(v___x_3614_, 1);
v___x_3616_ = l___private_Lean_Compiler_ModPkgExt_0__Lean_modPkgExt;
v_toEnvExtension_3617_ = lean_ctor_get(v___x_3616_, 0);
v_asyncMode_3618_ = lean_ctor_get(v_toEnvExtension_3617_, 2);
v_logWrites_3619_ = lean_ctor_get_uint8(v_toEnvExtension_3617_, sizeof(void*)*6);
lean_inc(v_name_3005_);
v___x_3620_ = l_Lean_Environment_setMainModule(v_a_3615_, v_name_3005_);
if (v_logWrites_3619_ == 0)
{
lean_object* v___x_3621_; 
lean_inc_ref(v_toEnvExtension_3617_);
v___x_3621_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(v_toEnvExtension_3617_, v___x_3620_, v___f_3009_, v_asyncMode_3618_, v___x_3613_, v___x_3023_);
v___y_3533_ = v___x_3613_;
v___y_3534_ = v___x_3621_;
goto v___jp_3532_;
}
else
{
lean_object* v___x_3622_; lean_object* v___x_3623_; 
lean_inc_ref_n(v_toEnvExtension_3617_, 2);
v___x_3622_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite___redArg(v_toEnvExtension_3617_, v___x_3620_);
lean_dec_ref(v___x_3620_);
v___x_3623_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(v_toEnvExtension_3617_, v___x_3622_, v___f_3009_, v_asyncMode_3618_, v___x_3613_, v___x_3023_);
v___y_3533_ = v___x_3613_;
v___y_3534_ = v___x_3623_;
goto v___jp_3532_;
}
}
else
{
lean_object* v_a_3624_; lean_object* v___x_3626_; uint8_t v_isShared_3627_; uint8_t v_isSharedCheck_3631_; 
lean_dec_ref(v___x_3027_);
lean_del_object(v___x_3020_);
lean_dec(v_fst_3017_);
lean_dec_ref(v___f_3009_);
lean_dec(v_name_3005_);
lean_dec(v_head_2989_);
lean_del_object(v___x_2987_);
lean_dec(v_head_2985_);
lean_del_object(v___x_2983_);
v_a_3624_ = lean_ctor_get(v___x_3614_, 0);
v_isSharedCheck_3631_ = !lean_is_exclusive(v___x_3614_);
if (v_isSharedCheck_3631_ == 0)
{
v___x_3626_ = v___x_3614_;
v_isShared_3627_ = v_isSharedCheck_3631_;
goto v_resetjp_3625_;
}
else
{
lean_inc(v_a_3624_);
lean_dec(v___x_3614_);
v___x_3626_ = lean_box(0);
v_isShared_3627_ = v_isSharedCheck_3631_;
goto v_resetjp_3625_;
}
v_resetjp_3625_:
{
lean_object* v___x_3629_; 
if (v_isShared_3627_ == 0)
{
v___x_3629_ = v___x_3626_;
goto v_reusejp_3628_;
}
else
{
lean_object* v_reuseFailAlloc_3630_; 
v_reuseFailAlloc_3630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3630_, 0, v_a_3624_);
v___x_3629_ = v_reuseFailAlloc_3630_;
goto v_reusejp_3628_;
}
v_reusejp_3628_:
{
return v___x_3629_;
}
}
}
}
}
else
{
lean_object* v_a_3633_; lean_object* v___x_3635_; uint8_t v_isShared_3636_; uint8_t v_isSharedCheck_3640_; 
lean_dec_ref(v___x_3027_);
lean_del_object(v___x_3020_);
lean_dec(v_fst_3017_);
lean_dec_ref(v___f_3009_);
lean_dec(v_importArts_3007_);
lean_dec(v_name_3005_);
lean_dec(v_head_2989_);
lean_del_object(v___x_2987_);
lean_dec(v_head_2985_);
lean_del_object(v___x_2983_);
v_a_3633_ = lean_ctor_get(v___x_3355_, 0);
v_isSharedCheck_3640_ = !lean_is_exclusive(v___x_3355_);
if (v_isSharedCheck_3640_ == 0)
{
v___x_3635_ = v___x_3355_;
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
else
{
lean_inc(v_a_3633_);
lean_dec(v___x_3355_);
v___x_3635_ = lean_box(0);
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
v_resetjp_3634_:
{
lean_object* v___x_3638_; 
if (v_isShared_3636_ == 0)
{
v___x_3638_ = v___x_3635_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3639_; 
v_reuseFailAlloc_3639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3639_, 0, v_a_3633_);
v___x_3638_ = v_reuseFailAlloc_3639_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
return v___x_3638_;
}
}
}
v___jp_3028_:
{
lean_object* v___x_3050_; lean_object* v_messages_3051_; lean_object* v_env_3052_; lean_object* v___x_3054_; uint8_t v_isShared_3055_; uint8_t v_isSharedCheck_3177_; 
v___x_3050_ = lean_st_ref_get(v___y_3042_);
lean_dec(v___y_3042_);
v_messages_3051_ = lean_ctor_get(v___x_3050_, 7);
v_env_3052_ = lean_ctor_get(v___x_3050_, 0);
v_isSharedCheck_3177_ = !lean_is_exclusive(v___x_3050_);
if (v_isSharedCheck_3177_ == 0)
{
lean_object* v_unused_3178_; lean_object* v_unused_3179_; lean_object* v_unused_3180_; lean_object* v_unused_3181_; lean_object* v_unused_3182_; lean_object* v_unused_3183_; lean_object* v_unused_3184_; lean_object* v_unused_3185_; 
v_unused_3178_ = lean_ctor_get(v___x_3050_, 9);
lean_dec(v_unused_3178_);
v_unused_3179_ = lean_ctor_get(v___x_3050_, 8);
lean_dec(v_unused_3179_);
v_unused_3180_ = lean_ctor_get(v___x_3050_, 6);
lean_dec(v_unused_3180_);
v_unused_3181_ = lean_ctor_get(v___x_3050_, 5);
lean_dec(v_unused_3181_);
v_unused_3182_ = lean_ctor_get(v___x_3050_, 4);
lean_dec(v_unused_3182_);
v_unused_3183_ = lean_ctor_get(v___x_3050_, 3);
lean_dec(v_unused_3183_);
v_unused_3184_ = lean_ctor_get(v___x_3050_, 2);
lean_dec(v_unused_3184_);
v_unused_3185_ = lean_ctor_get(v___x_3050_, 1);
lean_dec(v_unused_3185_);
v___x_3054_ = v___x_3050_;
v_isShared_3055_ = v_isSharedCheck_3177_;
goto v_resetjp_3053_;
}
else
{
lean_inc(v_messages_3051_);
lean_inc(v_env_3052_);
lean_dec(v___x_3050_);
v___x_3054_ = lean_box(0);
v_isShared_3055_ = v_isSharedCheck_3177_;
goto v_resetjp_3053_;
}
v_resetjp_3053_:
{
lean_object* v_unreported_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; 
v_unreported_3056_ = lean_ctor_get(v_messages_3051_, 1);
v___x_3057_ = lean_box(0);
v___x_3058_ = l_Lean_PersistentArray_forIn___at___00main_spec__7(v_unreported_3056_, v___x_3057_);
if (lean_obj_tag(v___x_3058_) == 0)
{
lean_object* v___x_3060_; uint8_t v_isShared_3061_; uint8_t v_isSharedCheck_3167_; 
v_isSharedCheck_3167_ = !lean_is_exclusive(v___x_3058_);
if (v_isSharedCheck_3167_ == 0)
{
lean_object* v_unused_3168_; 
v_unused_3168_ = lean_ctor_get(v___x_3058_, 0);
lean_dec(v_unused_3168_);
v___x_3060_ = v___x_3058_;
v_isShared_3061_ = v_isSharedCheck_3167_;
goto v_resetjp_3059_;
}
else
{
lean_dec(v___x_3058_);
v___x_3060_ = lean_box(0);
v_isShared_3061_ = v_isSharedCheck_3167_;
goto v_resetjp_3059_;
}
v_resetjp_3059_:
{
uint8_t v___x_3062_; 
v___x_3062_ = l_Lean_MessageLog_hasErrors(v_messages_3051_);
lean_dec_ref(v_messages_3051_);
if (v___x_3062_ == 0)
{
lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; 
lean_del_object(v___x_3060_);
v___x_3063_ = ((lean_object*)(l_main___closed__9));
lean_inc(v_head_2985_);
v___x_3064_ = l_System_FilePath_addExtension(v_head_2985_, v___x_3063_);
lean_inc_ref(v_env_3052_);
v___x_3065_ = l___private_LeanIR_0__mkIRSigData(v_env_3052_);
if (lean_obj_tag(v___x_3065_) == 0)
{
lean_object* v_a_3066_; lean_object* v___x_3067_; 
v_a_3066_ = lean_ctor_get(v___x_3065_, 0);
lean_inc(v_a_3066_);
lean_dec_ref_known(v___x_3065_, 1);
lean_inc_ref(v_env_3052_);
v___x_3067_ = l___private_LeanIR_0__mkIRData(v_env_3052_);
if (lean_obj_tag(v___x_3067_) == 0)
{
lean_object* v_a_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3073_; 
v_a_3068_ = lean_ctor_get(v___x_3067_, 0);
lean_inc(v_a_3068_);
lean_dec_ref_known(v___x_3067_, 1);
v___x_3069_ = l_Lean_Environment_mainModule(v_env_3052_);
v___x_3070_ = ((lean_object*)(l_main___closed__11));
v___x_3071_ = l_Lean_Name_append(v___x_3069_, v___x_3070_);
if (v_isShared_3021_ == 0)
{
lean_ctor_set(v___x_3020_, 1, v_a_3066_);
lean_ctor_set(v___x_3020_, 0, v___x_3064_);
v___x_3073_ = v___x_3020_;
goto v_reusejp_3072_;
}
else
{
lean_object* v_reuseFailAlloc_3146_; 
v_reuseFailAlloc_3146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3146_, 0, v___x_3064_);
lean_ctor_set(v_reuseFailAlloc_3146_, 1, v_a_3066_);
v___x_3073_ = v_reuseFailAlloc_3146_;
goto v_reusejp_3072_;
}
v_reusejp_3072_:
{
lean_object* v___x_3075_; 
lean_inc(v_head_2985_);
if (v_isShared_2988_ == 0)
{
lean_ctor_set_tag(v___x_2987_, 0);
lean_ctor_set(v___x_2987_, 1, v_a_3068_);
v___x_3075_ = v___x_2987_;
goto v_reusejp_3074_;
}
else
{
lean_object* v_reuseFailAlloc_3145_; 
v_reuseFailAlloc_3145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3145_, 0, v_head_2985_);
lean_ctor_set(v_reuseFailAlloc_3145_, 1, v_a_3068_);
v___x_3075_ = v_reuseFailAlloc_3145_;
goto v_reusejp_3074_;
}
v_reusejp_3074_:
{
lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; 
v___x_3076_ = lean_unsigned_to_nat(2u);
v___x_3077_ = lean_mk_empty_array_with_capacity(v___x_3076_);
v___x_3078_ = lean_array_push(v___x_3077_, v___x_3073_);
v___x_3079_ = lean_array_push(v___x_3078_, v___x_3075_);
v___x_3080_ = l_Lean_saveModuleDataParts(v___x_3071_, v___x_3079_);
lean_dec(v___x_3071_);
if (lean_obj_tag(v___x_3080_) == 0)
{
uint8_t v___x_3081_; lean_object* v___x_3082_; 
lean_dec_ref_known(v___x_3080_, 1);
v___x_3081_ = 1;
v___x_3082_ = lean_io_prim_handle_mk(v_head_2989_, v___x_3081_);
if (lean_obj_tag(v___x_3082_) == 0)
{
lean_object* v_a_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; uint16_t v___x_3086_; lean_object* v___x_3088_; 
lean_dec(v_head_2989_);
v_a_3083_ = lean_ctor_get(v___x_3082_, 0);
lean_inc(v_a_3083_);
lean_dec_ref_known(v___x_3082_, 1);
v___x_3084_ = ((lean_object*)(l_main___closed__12));
v___x_3085_ = l_Lean_Core_getMaxHeartbeats(v___y_3044_);
v___x_3086_ = l_Lean_OptionFlags_ofOptions(v___y_3044_);
lean_inc_ref(v___y_3043_);
lean_inc_ref(v___y_3046_);
lean_inc_ref(v___y_3040_);
lean_inc_ref(v___y_3048_);
lean_inc_ref(v___y_3038_);
lean_inc_ref(v___y_3039_);
lean_inc_ref(v___y_3049_);
lean_inc(v___y_3041_);
lean_inc_ref(v_env_3052_);
if (v_isShared_3055_ == 0)
{
lean_ctor_set(v___x_3054_, 9, v___y_3043_);
lean_ctor_set(v___x_3054_, 8, v___y_3046_);
lean_ctor_set(v___x_3054_, 7, v___y_3040_);
lean_ctor_set(v___x_3054_, 6, v___y_3048_);
lean_ctor_set(v___x_3054_, 5, v___y_3038_);
lean_ctor_set(v___x_3054_, 4, v___y_3039_);
lean_ctor_set(v___x_3054_, 3, v___y_3047_);
lean_ctor_set(v___x_3054_, 2, v___y_3049_);
lean_ctor_set(v___x_3054_, 1, v___y_3041_);
v___x_3088_ = v___x_3054_;
goto v_reusejp_3087_;
}
else
{
lean_object* v_reuseFailAlloc_3114_; 
v_reuseFailAlloc_3114_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3114_, 0, v_env_3052_);
lean_ctor_set(v_reuseFailAlloc_3114_, 1, v___y_3041_);
lean_ctor_set(v_reuseFailAlloc_3114_, 2, v___y_3049_);
lean_ctor_set(v_reuseFailAlloc_3114_, 3, v___y_3047_);
lean_ctor_set(v_reuseFailAlloc_3114_, 4, v___y_3039_);
lean_ctor_set(v_reuseFailAlloc_3114_, 5, v___y_3038_);
lean_ctor_set(v_reuseFailAlloc_3114_, 6, v___y_3048_);
lean_ctor_set(v_reuseFailAlloc_3114_, 7, v___y_3040_);
lean_ctor_set(v_reuseFailAlloc_3114_, 8, v___y_3046_);
lean_ctor_set(v_reuseFailAlloc_3114_, 9, v___y_3043_);
v___x_3088_ = v_reuseFailAlloc_3114_;
goto v_reusejp_3087_;
}
v_reusejp_3087_:
{
lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___f_3093_; lean_object* v___x_3094_; 
v___x_3089_ = lean_box(v___x_3086_);
v___x_3090_ = lean_box(v___y_3037_);
v___x_3091_ = lean_box(v___x_3010_);
v___x_3092_ = lean_box(v___x_3062_);
lean_inc_ref(v___y_3029_);
lean_inc_ref(v___y_3033_);
v___f_3093_ = lean_alloc_closure((void*)(l_main___lam__2___boxed), 19, 18);
lean_closure_set(v___f_3093_, 0, v___x_3088_);
lean_closure_set(v___f_3093_, 1, v___y_3033_);
lean_closure_set(v___f_3093_, 2, v___x_3089_);
lean_closure_set(v___f_3093_, 3, v_name_3005_);
lean_closure_set(v___f_3093_, 4, v_a_3083_);
lean_closure_set(v___f_3093_, 5, v___x_3090_);
lean_closure_set(v___f_3093_, 6, v___y_3029_);
lean_closure_set(v___f_3093_, 7, v_head_2985_);
lean_closure_set(v___f_3093_, 8, v___y_3032_);
lean_closure_set(v___f_3093_, 9, v___y_3034_);
lean_closure_set(v___f_3093_, 10, v___y_3036_);
lean_closure_set(v___f_3093_, 11, v___x_3085_);
lean_closure_set(v___f_3093_, 12, v___y_3035_);
lean_closure_set(v___f_3093_, 13, v___y_3031_);
lean_closure_set(v___f_3093_, 14, v___x_3026_);
lean_closure_set(v___f_3093_, 15, v___y_3030_);
lean_closure_set(v___f_3093_, 16, v___x_3091_);
lean_closure_set(v___f_3093_, 17, v___x_3092_);
v___x_3094_ = l_Lean_profileitIOUnsafe___redArg(v___x_3084_, v___x_3027_, v___f_3093_, v___y_3045_);
lean_dec_ref(v___x_3027_);
if (lean_obj_tag(v___x_3094_) == 0)
{
lean_object* v___x_3095_; uint8_t v___x_3096_; 
lean_dec_ref_known(v___x_3094_, 1);
v___x_3095_ = lean_display_cumulative_profiling_times();
v___x_3096_ = lean_unbox(v_fst_3017_);
lean_dec(v_fst_3017_);
if (v___x_3096_ == 0)
{
lean_dec_ref(v_env_3052_);
goto v___jp_2976_;
}
else
{
lean_object* v___x_3097_; 
v___x_3097_ = l_Lean_Environment_displayStats(v_env_3052_);
if (lean_obj_tag(v___x_3097_) == 0)
{
lean_dec_ref_known(v___x_3097_, 1);
goto v___jp_2976_;
}
else
{
lean_object* v_a_3098_; lean_object* v___x_3100_; uint8_t v_isShared_3101_; uint8_t v_isSharedCheck_3105_; 
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
v_reuseFailAlloc_3104_ = lean_alloc_ctor(1, 1, 0);
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
}
}
else
{
lean_object* v_a_3106_; lean_object* v___x_3108_; uint8_t v_isShared_3109_; uint8_t v_isSharedCheck_3113_; 
lean_dec_ref(v_env_3052_);
lean_dec(v_fst_3017_);
v_a_3106_ = lean_ctor_get(v___x_3094_, 0);
v_isSharedCheck_3113_ = !lean_is_exclusive(v___x_3094_);
if (v_isSharedCheck_3113_ == 0)
{
v___x_3108_ = v___x_3094_;
v_isShared_3109_ = v_isSharedCheck_3113_;
goto v_resetjp_3107_;
}
else
{
lean_inc(v_a_3106_);
lean_dec(v___x_3094_);
v___x_3108_ = lean_box(0);
v_isShared_3109_ = v_isSharedCheck_3113_;
goto v_resetjp_3107_;
}
v_resetjp_3107_:
{
lean_object* v___x_3111_; 
if (v_isShared_3109_ == 0)
{
v___x_3111_ = v___x_3108_;
goto v_reusejp_3110_;
}
else
{
lean_object* v_reuseFailAlloc_3112_; 
v_reuseFailAlloc_3112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3112_, 0, v_a_3106_);
v___x_3111_ = v_reuseFailAlloc_3112_;
goto v_reusejp_3110_;
}
v_reusejp_3110_:
{
return v___x_3111_;
}
}
}
}
}
else
{
lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; 
lean_dec_ref_known(v___x_3082_, 1);
lean_del_object(v___x_3054_);
lean_dec_ref(v_env_3052_);
lean_dec_ref(v___y_3047_);
lean_dec(v___y_3045_);
lean_dec(v___y_3036_);
lean_dec(v___y_3035_);
lean_dec(v___y_3034_);
lean_dec_ref(v___y_3032_);
lean_dec(v___y_3031_);
lean_dec(v___y_3030_);
lean_dec_ref(v___x_3027_);
lean_dec(v_fst_3017_);
lean_dec(v_name_3005_);
lean_dec(v_head_2985_);
v___x_3115_ = ((lean_object*)(l_main___closed__13));
v___x_3116_ = lean_string_append(v___x_3115_, v_head_2989_);
lean_dec(v_head_2989_);
v___x_3117_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__1));
v___x_3118_ = lean_string_append(v___x_3116_, v___x_3117_);
v___x_3119_ = l_IO_eprintln___at___00main_spec__6(v___x_3118_);
if (lean_obj_tag(v___x_3119_) == 0)
{
lean_object* v___x_3121_; uint8_t v_isShared_3122_; uint8_t v_isSharedCheck_3127_; 
v_isSharedCheck_3127_ = !lean_is_exclusive(v___x_3119_);
if (v_isSharedCheck_3127_ == 0)
{
lean_object* v_unused_3128_; 
v_unused_3128_ = lean_ctor_get(v___x_3119_, 0);
lean_dec(v_unused_3128_);
v___x_3121_ = v___x_3119_;
v_isShared_3122_ = v_isSharedCheck_3127_;
goto v_resetjp_3120_;
}
else
{
lean_dec(v___x_3119_);
v___x_3121_ = lean_box(0);
v_isShared_3122_ = v_isSharedCheck_3127_;
goto v_resetjp_3120_;
}
v_resetjp_3120_:
{
lean_object* v___x_3123_; lean_object* v___x_3125_; 
v___x_3123_ = l_main___boxed__const__1;
if (v_isShared_3122_ == 0)
{
lean_ctor_set(v___x_3121_, 0, v___x_3123_);
v___x_3125_ = v___x_3121_;
goto v_reusejp_3124_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v___x_3123_);
v___x_3125_ = v_reuseFailAlloc_3126_;
goto v_reusejp_3124_;
}
v_reusejp_3124_:
{
return v___x_3125_;
}
}
}
else
{
lean_object* v_a_3129_; lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3136_; 
v_a_3129_ = lean_ctor_get(v___x_3119_, 0);
v_isSharedCheck_3136_ = !lean_is_exclusive(v___x_3119_);
if (v_isSharedCheck_3136_ == 0)
{
v___x_3131_ = v___x_3119_;
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
else
{
lean_inc(v_a_3129_);
lean_dec(v___x_3119_);
v___x_3131_ = lean_box(0);
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
v_resetjp_3130_:
{
lean_object* v___x_3134_; 
if (v_isShared_3132_ == 0)
{
v___x_3134_ = v___x_3131_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3135_; 
v_reuseFailAlloc_3135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3135_, 0, v_a_3129_);
v___x_3134_ = v_reuseFailAlloc_3135_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
return v___x_3134_;
}
}
}
}
}
else
{
lean_object* v_a_3137_; lean_object* v___x_3139_; uint8_t v_isShared_3140_; uint8_t v_isSharedCheck_3144_; 
lean_del_object(v___x_3054_);
lean_dec_ref(v_env_3052_);
lean_dec_ref(v___y_3047_);
lean_dec(v___y_3045_);
lean_dec(v___y_3036_);
lean_dec(v___y_3035_);
lean_dec(v___y_3034_);
lean_dec_ref(v___y_3032_);
lean_dec(v___y_3031_);
lean_dec(v___y_3030_);
lean_dec_ref(v___x_3027_);
lean_dec(v_fst_3017_);
lean_dec(v_name_3005_);
lean_dec(v_head_2989_);
lean_dec(v_head_2985_);
v_a_3137_ = lean_ctor_get(v___x_3080_, 0);
v_isSharedCheck_3144_ = !lean_is_exclusive(v___x_3080_);
if (v_isSharedCheck_3144_ == 0)
{
v___x_3139_ = v___x_3080_;
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
else
{
lean_inc(v_a_3137_);
lean_dec(v___x_3080_);
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
}
else
{
lean_object* v_a_3147_; lean_object* v___x_3149_; uint8_t v_isShared_3150_; uint8_t v_isSharedCheck_3154_; 
lean_dec(v_a_3066_);
lean_dec_ref(v___x_3064_);
lean_del_object(v___x_3054_);
lean_dec_ref(v_env_3052_);
lean_dec_ref(v___y_3047_);
lean_dec(v___y_3045_);
lean_dec(v___y_3036_);
lean_dec(v___y_3035_);
lean_dec(v___y_3034_);
lean_dec_ref(v___y_3032_);
lean_dec(v___y_3031_);
lean_dec(v___y_3030_);
lean_dec_ref(v___x_3027_);
lean_del_object(v___x_3020_);
lean_dec(v_fst_3017_);
lean_dec(v_name_3005_);
lean_dec(v_head_2989_);
lean_del_object(v___x_2987_);
lean_dec(v_head_2985_);
v_a_3147_ = lean_ctor_get(v___x_3067_, 0);
v_isSharedCheck_3154_ = !lean_is_exclusive(v___x_3067_);
if (v_isSharedCheck_3154_ == 0)
{
v___x_3149_ = v___x_3067_;
v_isShared_3150_ = v_isSharedCheck_3154_;
goto v_resetjp_3148_;
}
else
{
lean_inc(v_a_3147_);
lean_dec(v___x_3067_);
v___x_3149_ = lean_box(0);
v_isShared_3150_ = v_isSharedCheck_3154_;
goto v_resetjp_3148_;
}
v_resetjp_3148_:
{
lean_object* v___x_3152_; 
if (v_isShared_3150_ == 0)
{
v___x_3152_ = v___x_3149_;
goto v_reusejp_3151_;
}
else
{
lean_object* v_reuseFailAlloc_3153_; 
v_reuseFailAlloc_3153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3153_, 0, v_a_3147_);
v___x_3152_ = v_reuseFailAlloc_3153_;
goto v_reusejp_3151_;
}
v_reusejp_3151_:
{
return v___x_3152_;
}
}
}
}
else
{
lean_object* v_a_3155_; lean_object* v___x_3157_; uint8_t v_isShared_3158_; uint8_t v_isSharedCheck_3162_; 
lean_dec_ref(v___x_3064_);
lean_del_object(v___x_3054_);
lean_dec_ref(v_env_3052_);
lean_dec_ref(v___y_3047_);
lean_dec(v___y_3045_);
lean_dec(v___y_3036_);
lean_dec(v___y_3035_);
lean_dec(v___y_3034_);
lean_dec_ref(v___y_3032_);
lean_dec(v___y_3031_);
lean_dec(v___y_3030_);
lean_dec_ref(v___x_3027_);
lean_del_object(v___x_3020_);
lean_dec(v_fst_3017_);
lean_dec(v_name_3005_);
lean_dec(v_head_2989_);
lean_del_object(v___x_2987_);
lean_dec(v_head_2985_);
v_a_3155_ = lean_ctor_get(v___x_3065_, 0);
v_isSharedCheck_3162_ = !lean_is_exclusive(v___x_3065_);
if (v_isSharedCheck_3162_ == 0)
{
v___x_3157_ = v___x_3065_;
v_isShared_3158_ = v_isSharedCheck_3162_;
goto v_resetjp_3156_;
}
else
{
lean_inc(v_a_3155_);
lean_dec(v___x_3065_);
v___x_3157_ = lean_box(0);
v_isShared_3158_ = v_isSharedCheck_3162_;
goto v_resetjp_3156_;
}
v_resetjp_3156_:
{
lean_object* v___x_3160_; 
if (v_isShared_3158_ == 0)
{
v___x_3160_ = v___x_3157_;
goto v_reusejp_3159_;
}
else
{
lean_object* v_reuseFailAlloc_3161_; 
v_reuseFailAlloc_3161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3161_, 0, v_a_3155_);
v___x_3160_ = v_reuseFailAlloc_3161_;
goto v_reusejp_3159_;
}
v_reusejp_3159_:
{
return v___x_3160_;
}
}
}
}
else
{
lean_object* v___x_3163_; lean_object* v___x_3165_; 
lean_del_object(v___x_3054_);
lean_dec_ref(v_env_3052_);
lean_dec_ref(v___y_3047_);
lean_dec(v___y_3045_);
lean_dec(v___y_3036_);
lean_dec(v___y_3035_);
lean_dec(v___y_3034_);
lean_dec_ref(v___y_3032_);
lean_dec(v___y_3031_);
lean_dec(v___y_3030_);
lean_dec_ref(v___x_3027_);
lean_del_object(v___x_3020_);
lean_dec(v_fst_3017_);
lean_dec(v_name_3005_);
lean_dec(v_head_2989_);
lean_del_object(v___x_2987_);
lean_dec(v_head_2985_);
v___x_3163_ = l_main___boxed__const__1;
if (v_isShared_3061_ == 0)
{
lean_ctor_set(v___x_3060_, 0, v___x_3163_);
v___x_3165_ = v___x_3060_;
goto v_reusejp_3164_;
}
else
{
lean_object* v_reuseFailAlloc_3166_; 
v_reuseFailAlloc_3166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3166_, 0, v___x_3163_);
v___x_3165_ = v_reuseFailAlloc_3166_;
goto v_reusejp_3164_;
}
v_reusejp_3164_:
{
return v___x_3165_;
}
}
}
}
else
{
lean_object* v_a_3169_; lean_object* v___x_3171_; uint8_t v_isShared_3172_; uint8_t v_isSharedCheck_3176_; 
lean_del_object(v___x_3054_);
lean_dec_ref(v_env_3052_);
lean_dec_ref(v_messages_3051_);
lean_dec_ref(v___y_3047_);
lean_dec(v___y_3045_);
lean_dec(v___y_3036_);
lean_dec(v___y_3035_);
lean_dec(v___y_3034_);
lean_dec_ref(v___y_3032_);
lean_dec(v___y_3031_);
lean_dec(v___y_3030_);
lean_dec_ref(v___x_3027_);
lean_del_object(v___x_3020_);
lean_dec(v_fst_3017_);
lean_dec(v_name_3005_);
lean_dec(v_head_2989_);
lean_del_object(v___x_2987_);
lean_dec(v_head_2985_);
v_a_3169_ = lean_ctor_get(v___x_3058_, 0);
v_isSharedCheck_3176_ = !lean_is_exclusive(v___x_3058_);
if (v_isSharedCheck_3176_ == 0)
{
v___x_3171_ = v___x_3058_;
v_isShared_3172_ = v_isSharedCheck_3176_;
goto v_resetjp_3170_;
}
else
{
lean_inc(v_a_3169_);
lean_dec(v___x_3058_);
v___x_3171_ = lean_box(0);
v_isShared_3172_ = v_isSharedCheck_3176_;
goto v_resetjp_3170_;
}
v_resetjp_3170_:
{
lean_object* v___x_3174_; 
if (v_isShared_3172_ == 0)
{
v___x_3174_ = v___x_3171_;
goto v_reusejp_3173_;
}
else
{
lean_object* v_reuseFailAlloc_3175_; 
v_reuseFailAlloc_3175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3175_, 0, v_a_3169_);
v___x_3174_ = v_reuseFailAlloc_3175_;
goto v_reusejp_3173_;
}
v_reusejp_3173_:
{
return v___x_3174_;
}
}
}
}
}
v___jp_3186_:
{
lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; size_t v_sz_3223_; size_t v___x_3224_; lean_object* v___x_3225_; 
lean_inc_ref(v___y_3204_);
v___x_3220_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_3220_, 0, v___y_3219_);
lean_ctor_set(v___x_3220_, 1, v_nextMacroScope_3207_);
lean_ctor_set(v___x_3220_, 2, v_ngen_3208_);
lean_ctor_set(v___x_3220_, 3, v_auxDeclNGen_3209_);
lean_ctor_set(v___x_3220_, 4, v_traceState_3210_);
lean_ctor_set(v___x_3220_, 5, v___y_3204_);
lean_ctor_set(v___x_3220_, 6, v_recordedDeps_3211_);
lean_ctor_set(v___x_3220_, 7, v_messages_3212_);
lean_ctor_set(v___x_3220_, 8, v_infoState_3213_);
lean_ctor_set(v___x_3220_, 9, v_snapshotTasks_3214_);
v___x_3221_ = lean_st_ref_put(v___y_3218_, v___x_3220_);
v___x_3222_ = lean_box(0);
v_sz_3223_ = lean_array_size(v___y_3201_);
v___x_3224_ = ((size_t)0ULL);
v___x_3225_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__12(v___y_3201_, v_sz_3223_, v___x_3224_, v___x_3222_, v___y_3206_, v___y_3218_);
lean_dec_ref(v___y_3201_);
if (lean_obj_tag(v___x_3225_) == 0)
{
lean_dec_ref_known(v___x_3225_, 1);
lean_dec(v___y_3218_);
lean_dec_ref(v___y_3206_);
v___y_3029_ = v___y_3187_;
v___y_3030_ = v___y_3188_;
v___y_3031_ = v___y_3189_;
v___y_3032_ = v___y_3191_;
v___y_3033_ = v___y_3190_;
v___y_3034_ = v___y_3192_;
v___y_3035_ = v___y_3193_;
v___y_3036_ = v___y_3194_;
v___y_3037_ = v___y_3195_;
v___y_3038_ = v___y_3204_;
v___y_3039_ = v___y_3205_;
v___y_3040_ = v___y_3196_;
v___y_3041_ = v___y_3197_;
v___y_3042_ = v___y_3198_;
v___y_3043_ = v___y_3215_;
v___y_3044_ = v___y_3199_;
v___y_3045_ = v___y_3216_;
v___y_3046_ = v___y_3200_;
v___y_3047_ = v___y_3217_;
v___y_3048_ = v___y_3202_;
v___y_3049_ = v___y_3203_;
goto v___jp_3028_;
}
else
{
lean_object* v_a_3226_; uint8_t v___x_3227_; 
v_a_3226_ = lean_ctor_get(v___x_3225_, 0);
lean_inc(v_a_3226_);
lean_dec_ref_known(v___x_3225_, 1);
v___x_3227_ = l_Lean_Exception_isInterrupt(v_a_3226_);
if (v___x_3227_ == 0)
{
lean_object* v___x_3228_; lean_object* v___x_3229_; 
v___x_3228_ = l_Lean_Exception_toMessageData(v_a_3226_);
v___x_3229_ = l_Lean_logError___at___00main_spec__13(v___x_3228_, v___y_3206_, v___y_3218_);
lean_dec(v___y_3218_);
lean_dec_ref(v___y_3206_);
if (lean_obj_tag(v___x_3229_) == 0)
{
lean_dec_ref_known(v___x_3229_, 1);
v___y_3029_ = v___y_3187_;
v___y_3030_ = v___y_3188_;
v___y_3031_ = v___y_3189_;
v___y_3032_ = v___y_3191_;
v___y_3033_ = v___y_3190_;
v___y_3034_ = v___y_3192_;
v___y_3035_ = v___y_3193_;
v___y_3036_ = v___y_3194_;
v___y_3037_ = v___y_3195_;
v___y_3038_ = v___y_3204_;
v___y_3039_ = v___y_3205_;
v___y_3040_ = v___y_3196_;
v___y_3041_ = v___y_3197_;
v___y_3042_ = v___y_3198_;
v___y_3043_ = v___y_3215_;
v___y_3044_ = v___y_3199_;
v___y_3045_ = v___y_3216_;
v___y_3046_ = v___y_3200_;
v___y_3047_ = v___y_3217_;
v___y_3048_ = v___y_3202_;
v___y_3049_ = v___y_3203_;
goto v___jp_3028_;
}
else
{
lean_object* v___x_3230_; lean_object* v___x_3231_; 
lean_dec_ref_known(v___x_3229_, 1);
lean_dec_ref(v___y_3217_);
lean_dec(v___y_3216_);
lean_dec(v___y_3198_);
lean_dec(v___y_3194_);
lean_dec(v___y_3193_);
lean_dec(v___y_3192_);
lean_dec_ref(v___y_3191_);
lean_dec(v___y_3189_);
lean_dec(v___y_3188_);
lean_dec_ref(v___x_3027_);
lean_del_object(v___x_3020_);
lean_dec(v_fst_3017_);
lean_dec(v_name_3005_);
lean_dec(v_head_2989_);
lean_del_object(v___x_2987_);
lean_dec(v_head_2985_);
v___x_3230_ = lean_obj_once(&l_main___closed__17, &l_main___closed__17_once, _init_l_main___closed__17);
v___x_3231_ = l_panic___at___00main_spec__5(v___x_3230_);
return v___x_3231_;
}
}
else
{
lean_dec(v_a_3226_);
lean_dec(v___y_3218_);
lean_dec_ref(v___y_3206_);
v___y_3029_ = v___y_3187_;
v___y_3030_ = v___y_3188_;
v___y_3031_ = v___y_3189_;
v___y_3032_ = v___y_3191_;
v___y_3033_ = v___y_3190_;
v___y_3034_ = v___y_3192_;
v___y_3035_ = v___y_3193_;
v___y_3036_ = v___y_3194_;
v___y_3037_ = v___y_3195_;
v___y_3038_ = v___y_3204_;
v___y_3039_ = v___y_3205_;
v___y_3040_ = v___y_3196_;
v___y_3041_ = v___y_3197_;
v___y_3042_ = v___y_3198_;
v___y_3043_ = v___y_3215_;
v___y_3044_ = v___y_3199_;
v___y_3045_ = v___y_3216_;
v___y_3046_ = v___y_3200_;
v___y_3047_ = v___y_3217_;
v___y_3048_ = v___y_3202_;
v___y_3049_ = v___y_3203_;
goto v___jp_3028_;
}
}
}
v___jp_3232_:
{
lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v_env_3277_; lean_object* v_nextMacroScope_3278_; lean_object* v_ngen_3279_; lean_object* v_auxDeclNGen_3280_; lean_object* v_traceState_3281_; lean_object* v_recordedDeps_3282_; lean_object* v_messages_3283_; lean_object* v_infoState_3284_; lean_object* v_snapshotTasks_3285_; lean_object* v___x_3286_; uint8_t v___x_3287_; 
v___x_3272_ = l_Lean_maxRecDepth;
v___x_3273_ = l_Lean_Option_get___at___00main_spec__8(v___x_3027_, v___x_3272_);
lean_inc_ref(v___x_3027_);
v___x_3274_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_3274_, 0, v_fileName_3257_);
lean_ctor_set(v___x_3274_, 1, v_fileMap_3258_);
lean_ctor_set(v___x_3274_, 2, v___x_3027_);
lean_ctor_set(v___x_3274_, 3, v___x_3273_);
lean_ctor_set(v___x_3274_, 4, v_currNamespace_3259_);
lean_ctor_set(v___x_3274_, 5, v_openDecls_3260_);
lean_ctor_set(v___x_3274_, 6, v_initHeartbeats_3261_);
lean_ctor_set(v___x_3274_, 7, v_maxHeartbeats_3262_);
lean_ctor_set(v___x_3274_, 8, v_quotContext_3263_);
lean_ctor_set(v___x_3274_, 9, v_currMacroScope_3264_);
lean_ctor_set(v___x_3274_, 10, v_cancelTk_x3f_3265_);
lean_ctor_set(v___x_3274_, 11, v_inheritedTraceOptions_3266_);
v___x_3275_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_3275_, 0, v___x_3274_);
lean_ctor_set(v___x_3275_, 1, v_currRecDepth_3267_);
lean_ctor_set(v___x_3275_, 2, v_ref_3268_);
lean_ctor_set_uint16(v___x_3275_, sizeof(void*)*3, v___y_3253_);
lean_ctor_set_uint8(v___x_3275_, sizeof(void*)*3 + 2, v_suppressElabErrors_3269_);
lean_ctor_set_uint8(v___x_3275_, sizeof(void*)*3 + 3, v_isRecordingDeps_3270_);
v___x_3276_ = lean_st_ref_take(v___y_3271_);
v_env_3277_ = lean_ctor_get(v___x_3276_, 0);
lean_inc_ref(v_env_3277_);
v_nextMacroScope_3278_ = lean_ctor_get(v___x_3276_, 1);
lean_inc(v_nextMacroScope_3278_);
v_ngen_3279_ = lean_ctor_get(v___x_3276_, 2);
lean_inc_ref(v_ngen_3279_);
v_auxDeclNGen_3280_ = lean_ctor_get(v___x_3276_, 3);
lean_inc_ref(v_auxDeclNGen_3280_);
v_traceState_3281_ = lean_ctor_get(v___x_3276_, 4);
lean_inc_ref(v_traceState_3281_);
v_recordedDeps_3282_ = lean_ctor_get(v___x_3276_, 6);
lean_inc_ref(v_recordedDeps_3282_);
v_messages_3283_ = lean_ctor_get(v___x_3276_, 7);
lean_inc_ref(v_messages_3283_);
v_infoState_3284_ = lean_ctor_get(v___x_3276_, 8);
lean_inc_ref(v_infoState_3284_);
v_snapshotTasks_3285_ = lean_ctor_get(v___x_3276_, 9);
lean_inc_ref(v_snapshotTasks_3285_);
lean_dec(v___x_3276_);
v___x_3286_ = lean_array_get_size(v___y_3247_);
v___x_3287_ = lean_nat_dec_lt(v___x_3026_, v___x_3286_);
if (v___x_3287_ == 0)
{
lean_object* v___x_3288_; 
lean_inc_ref(v___y_3252_);
v___x_3288_ = l_Lean_SimplePersistentEnvExtension_setState___redArg(v___y_3252_, v_env_3277_, v___x_3001_);
v___y_3187_ = v___y_3233_;
v___y_3188_ = v___y_3234_;
v___y_3189_ = v___y_3235_;
v___y_3190_ = v___y_3237_;
v___y_3191_ = v___y_3236_;
v___y_3192_ = v___y_3238_;
v___y_3193_ = v___y_3239_;
v___y_3194_ = v___y_3240_;
v___y_3195_ = v___y_3241_;
v___y_3196_ = v___y_3242_;
v___y_3197_ = v___y_3243_;
v___y_3198_ = v___y_3244_;
v___y_3199_ = v___y_3245_;
v___y_3200_ = v___y_3246_;
v___y_3201_ = v___y_3247_;
v___y_3202_ = v___y_3248_;
v___y_3203_ = v___y_3249_;
v___y_3204_ = v___y_3250_;
v___y_3205_ = v___y_3251_;
v___y_3206_ = v___x_3275_;
v_nextMacroScope_3207_ = v_nextMacroScope_3278_;
v_ngen_3208_ = v_ngen_3279_;
v_auxDeclNGen_3209_ = v_auxDeclNGen_3280_;
v_traceState_3210_ = v_traceState_3281_;
v_recordedDeps_3211_ = v_recordedDeps_3282_;
v_messages_3212_ = v_messages_3283_;
v_infoState_3213_ = v_infoState_3284_;
v_snapshotTasks_3214_ = v_snapshotTasks_3285_;
v___y_3215_ = v___y_3254_;
v___y_3216_ = v___y_3255_;
v___y_3217_ = v___y_3256_;
v___y_3218_ = v___y_3271_;
v___y_3219_ = v___x_3288_;
goto v___jp_3186_;
}
else
{
size_t v___x_3289_; size_t v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; 
v___x_3289_ = ((size_t)0ULL);
v___x_3290_ = lean_usize_of_nat(v___x_3286_);
v___x_3291_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__14(v___y_3247_, v___x_3289_, v___x_3290_, v___x_3001_);
lean_inc_ref(v___y_3252_);
v___x_3292_ = l_Lean_SimplePersistentEnvExtension_setState___redArg(v___y_3252_, v_env_3277_, v___x_3291_);
v___y_3187_ = v___y_3233_;
v___y_3188_ = v___y_3234_;
v___y_3189_ = v___y_3235_;
v___y_3190_ = v___y_3237_;
v___y_3191_ = v___y_3236_;
v___y_3192_ = v___y_3238_;
v___y_3193_ = v___y_3239_;
v___y_3194_ = v___y_3240_;
v___y_3195_ = v___y_3241_;
v___y_3196_ = v___y_3242_;
v___y_3197_ = v___y_3243_;
v___y_3198_ = v___y_3244_;
v___y_3199_ = v___y_3245_;
v___y_3200_ = v___y_3246_;
v___y_3201_ = v___y_3247_;
v___y_3202_ = v___y_3248_;
v___y_3203_ = v___y_3249_;
v___y_3204_ = v___y_3250_;
v___y_3205_ = v___y_3251_;
v___y_3206_ = v___x_3275_;
v_nextMacroScope_3207_ = v_nextMacroScope_3278_;
v_ngen_3208_ = v_ngen_3279_;
v_auxDeclNGen_3209_ = v_auxDeclNGen_3280_;
v_traceState_3210_ = v_traceState_3281_;
v_recordedDeps_3211_ = v_recordedDeps_3282_;
v_messages_3212_ = v_messages_3283_;
v_infoState_3213_ = v_infoState_3284_;
v_snapshotTasks_3214_ = v_snapshotTasks_3285_;
v___y_3215_ = v___y_3254_;
v___y_3216_ = v___y_3255_;
v___y_3217_ = v___y_3256_;
v___y_3218_ = v___y_3271_;
v___y_3219_ = v___x_3292_;
goto v___jp_3186_;
}
}
v___jp_3293_:
{
lean_object* v___x_3320_; lean_object* v_env_3321_; lean_object* v_nextMacroScope_3322_; lean_object* v_ngen_3323_; lean_object* v_auxDeclNGen_3324_; lean_object* v_traceState_3325_; lean_object* v_recordedDeps_3326_; lean_object* v_messages_3327_; lean_object* v_infoState_3328_; lean_object* v_snapshotTasks_3329_; lean_object* v___x_3331_; uint8_t v_isShared_3332_; uint8_t v_isSharedCheck_3353_; 
v___x_3320_ = lean_st_ref_take(v___y_3305_);
v_env_3321_ = lean_ctor_get(v___x_3320_, 0);
v_nextMacroScope_3322_ = lean_ctor_get(v___x_3320_, 1);
v_ngen_3323_ = lean_ctor_get(v___x_3320_, 2);
v_auxDeclNGen_3324_ = lean_ctor_get(v___x_3320_, 3);
v_traceState_3325_ = lean_ctor_get(v___x_3320_, 4);
v_recordedDeps_3326_ = lean_ctor_get(v___x_3320_, 6);
v_messages_3327_ = lean_ctor_get(v___x_3320_, 7);
v_infoState_3328_ = lean_ctor_get(v___x_3320_, 8);
v_snapshotTasks_3329_ = lean_ctor_get(v___x_3320_, 9);
v_isSharedCheck_3353_ = !lean_is_exclusive(v___x_3320_);
if (v_isSharedCheck_3353_ == 0)
{
lean_object* v_unused_3354_; 
v_unused_3354_ = lean_ctor_get(v___x_3320_, 5);
lean_dec(v_unused_3354_);
v___x_3331_ = v___x_3320_;
v_isShared_3332_ = v_isSharedCheck_3353_;
goto v_resetjp_3330_;
}
else
{
lean_inc(v_snapshotTasks_3329_);
lean_inc(v_infoState_3328_);
lean_inc(v_messages_3327_);
lean_inc(v_recordedDeps_3326_);
lean_inc(v_traceState_3325_);
lean_inc(v_auxDeclNGen_3324_);
lean_inc(v_ngen_3323_);
lean_inc(v_nextMacroScope_3322_);
lean_inc(v_env_3321_);
lean_dec(v___x_3320_);
v___x_3331_ = lean_box(0);
v_isShared_3332_ = v_isSharedCheck_3353_;
goto v_resetjp_3330_;
}
v_resetjp_3330_:
{
lean_object* v___x_3333_; lean_object* v___x_3335_; 
v___x_3333_ = l_Lean_Kernel_enableDiag(v_env_3321_, v___y_3319_);
lean_inc_ref(v___y_3312_);
if (v_isShared_3332_ == 0)
{
lean_ctor_set(v___x_3331_, 5, v___y_3312_);
lean_ctor_set(v___x_3331_, 0, v___x_3333_);
v___x_3335_ = v___x_3331_;
goto v_reusejp_3334_;
}
else
{
lean_object* v_reuseFailAlloc_3352_; 
v_reuseFailAlloc_3352_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3352_, 0, v___x_3333_);
lean_ctor_set(v_reuseFailAlloc_3352_, 1, v_nextMacroScope_3322_);
lean_ctor_set(v_reuseFailAlloc_3352_, 2, v_ngen_3323_);
lean_ctor_set(v_reuseFailAlloc_3352_, 3, v_auxDeclNGen_3324_);
lean_ctor_set(v_reuseFailAlloc_3352_, 4, v_traceState_3325_);
lean_ctor_set(v_reuseFailAlloc_3352_, 5, v___y_3312_);
lean_ctor_set(v_reuseFailAlloc_3352_, 6, v_recordedDeps_3326_);
lean_ctor_set(v_reuseFailAlloc_3352_, 7, v_messages_3327_);
lean_ctor_set(v_reuseFailAlloc_3352_, 8, v_infoState_3328_);
lean_ctor_set(v_reuseFailAlloc_3352_, 9, v_snapshotTasks_3329_);
v___x_3335_ = v_reuseFailAlloc_3352_;
goto v_reusejp_3334_;
}
v_reusejp_3334_:
{
lean_object* v___x_3336_; lean_object* v_toCold_3337_; lean_object* v_currRecDepth_3338_; lean_object* v_ref_3339_; uint8_t v_suppressElabErrors_3340_; uint8_t v_isRecordingDeps_3341_; lean_object* v_fileName_3342_; lean_object* v_fileMap_3343_; lean_object* v_currNamespace_3344_; lean_object* v_openDecls_3345_; lean_object* v_initHeartbeats_3346_; lean_object* v_maxHeartbeats_3347_; lean_object* v_quotContext_3348_; lean_object* v_currMacroScope_3349_; lean_object* v_cancelTk_x3f_3350_; lean_object* v_inheritedTraceOptions_3351_; 
v___x_3336_ = lean_st_ref_put(v___y_3305_, v___x_3335_);
v_toCold_3337_ = lean_ctor_get(v___y_3307_, 0);
lean_inc_ref(v_toCold_3337_);
v_currRecDepth_3338_ = lean_ctor_get(v___y_3307_, 1);
lean_inc(v_currRecDepth_3338_);
v_ref_3339_ = lean_ctor_get(v___y_3307_, 2);
lean_inc(v_ref_3339_);
v_suppressElabErrors_3340_ = lean_ctor_get_uint8(v___y_3307_, sizeof(void*)*3 + 2);
v_isRecordingDeps_3341_ = lean_ctor_get_uint8(v___y_3307_, sizeof(void*)*3 + 3);
lean_dec_ref(v___y_3307_);
v_fileName_3342_ = lean_ctor_get(v_toCold_3337_, 0);
lean_inc_ref(v_fileName_3342_);
v_fileMap_3343_ = lean_ctor_get(v_toCold_3337_, 1);
lean_inc_ref(v_fileMap_3343_);
v_currNamespace_3344_ = lean_ctor_get(v_toCold_3337_, 4);
lean_inc(v_currNamespace_3344_);
v_openDecls_3345_ = lean_ctor_get(v_toCold_3337_, 5);
lean_inc(v_openDecls_3345_);
v_initHeartbeats_3346_ = lean_ctor_get(v_toCold_3337_, 6);
lean_inc(v_initHeartbeats_3346_);
v_maxHeartbeats_3347_ = lean_ctor_get(v_toCold_3337_, 7);
lean_inc(v_maxHeartbeats_3347_);
v_quotContext_3348_ = lean_ctor_get(v_toCold_3337_, 8);
lean_inc(v_quotContext_3348_);
v_currMacroScope_3349_ = lean_ctor_get(v_toCold_3337_, 9);
lean_inc(v_currMacroScope_3349_);
v_cancelTk_x3f_3350_ = lean_ctor_get(v_toCold_3337_, 10);
lean_inc(v_cancelTk_x3f_3350_);
v_inheritedTraceOptions_3351_ = lean_ctor_get(v_toCold_3337_, 11);
lean_inc_ref(v_inheritedTraceOptions_3351_);
lean_dec_ref(v_toCold_3337_);
lean_inc(v___y_3305_);
v___y_3233_ = v___y_3294_;
v___y_3234_ = v___y_3295_;
v___y_3235_ = v___y_3296_;
v___y_3236_ = v___y_3298_;
v___y_3237_ = v___y_3297_;
v___y_3238_ = v___y_3299_;
v___y_3239_ = v___y_3300_;
v___y_3240_ = v___y_3301_;
v___y_3241_ = v___y_3302_;
v___y_3242_ = v___y_3303_;
v___y_3243_ = v___y_3304_;
v___y_3244_ = v___y_3305_;
v___y_3245_ = v___y_3306_;
v___y_3246_ = v___y_3308_;
v___y_3247_ = v___y_3309_;
v___y_3248_ = v___y_3310_;
v___y_3249_ = v___y_3311_;
v___y_3250_ = v___y_3312_;
v___y_3251_ = v___y_3313_;
v___y_3252_ = v___y_3314_;
v___y_3253_ = v___y_3315_;
v___y_3254_ = v___y_3316_;
v___y_3255_ = v___y_3317_;
v___y_3256_ = v___y_3318_;
v_fileName_3257_ = v_fileName_3342_;
v_fileMap_3258_ = v_fileMap_3343_;
v_currNamespace_3259_ = v_currNamespace_3344_;
v_openDecls_3260_ = v_openDecls_3345_;
v_initHeartbeats_3261_ = v_initHeartbeats_3346_;
v_maxHeartbeats_3262_ = v_maxHeartbeats_3347_;
v_quotContext_3263_ = v_quotContext_3348_;
v_currMacroScope_3264_ = v_currMacroScope_3349_;
v_cancelTk_x3f_3265_ = v_cancelTk_x3f_3350_;
v_inheritedTraceOptions_3266_ = v_inheritedTraceOptions_3351_;
v_currRecDepth_3267_ = v_currRecDepth_3338_;
v_ref_3268_ = v_ref_3339_;
v_suppressElabErrors_3269_ = v_suppressElabErrors_3340_;
v_isRecordingDeps_3270_ = v_isRecordingDeps_3341_;
v___y_3271_ = v___y_3305_;
goto v___jp_3232_;
}
}
}
}
}
else
{
lean_object* v_a_3642_; lean_object* v___x_3644_; uint8_t v_isShared_3645_; uint8_t v_isSharedCheck_3649_; 
lean_dec_ref(v___f_3009_);
lean_dec(v_importArts_3007_);
lean_dec(v_name_3005_);
lean_dec(v_head_2989_);
lean_del_object(v___x_2987_);
lean_dec(v_head_2985_);
lean_del_object(v___x_2983_);
v_a_3642_ = lean_ctor_get(v___x_3015_, 0);
v_isSharedCheck_3649_ = !lean_is_exclusive(v___x_3015_);
if (v_isSharedCheck_3649_ == 0)
{
v___x_3644_ = v___x_3015_;
v_isShared_3645_ = v_isSharedCheck_3649_;
goto v_resetjp_3643_;
}
else
{
lean_inc(v_a_3642_);
lean_dec(v___x_3015_);
v___x_3644_ = lean_box(0);
v_isShared_3645_ = v_isSharedCheck_3649_;
goto v_resetjp_3643_;
}
v_resetjp_3643_:
{
lean_object* v___x_3647_; 
if (v_isShared_3645_ == 0)
{
v___x_3647_ = v___x_3644_;
goto v_reusejp_3646_;
}
else
{
lean_object* v_reuseFailAlloc_3648_; 
v_reuseFailAlloc_3648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3648_, 0, v_a_3642_);
v___x_3647_ = v_reuseFailAlloc_3648_;
goto v_reusejp_3646_;
}
v_reusejp_3646_:
{
return v___x_3647_;
}
}
}
}
}
else
{
lean_object* v_a_3651_; lean_object* v___x_3653_; uint8_t v_isShared_3654_; uint8_t v_isSharedCheck_3658_; 
lean_del_object(v___x_2992_);
lean_dec(v_tail_2990_);
lean_dec(v_head_2989_);
lean_del_object(v___x_2987_);
lean_dec(v_head_2985_);
lean_del_object(v___x_2983_);
v_a_3651_ = lean_ctor_get(v___x_3003_, 0);
v_isSharedCheck_3658_ = !lean_is_exclusive(v___x_3003_);
if (v_isSharedCheck_3658_ == 0)
{
v___x_3653_ = v___x_3003_;
v_isShared_3654_ = v_isSharedCheck_3658_;
goto v_resetjp_3652_;
}
else
{
lean_inc(v_a_3651_);
lean_dec(v___x_3003_);
v___x_3653_ = lean_box(0);
v_isShared_3654_ = v_isSharedCheck_3658_;
goto v_resetjp_3652_;
}
v_resetjp_3652_:
{
lean_object* v___x_3656_; 
if (v_isShared_3654_ == 0)
{
v___x_3656_ = v___x_3653_;
goto v_reusejp_3655_;
}
else
{
lean_object* v_reuseFailAlloc_3657_; 
v_reuseFailAlloc_3657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3657_, 0, v_a_3651_);
v___x_3656_ = v_reuseFailAlloc_3657_;
goto v_reusejp_3655_;
}
v_reusejp_3655_:
{
return v___x_3656_;
}
}
}
}
}
}
}
else
{
lean_dec(v_tail_2980_);
lean_dec_ref_known(v_tail_2979_, 2);
lean_dec_ref_known(v_args_2954_, 2);
goto v___jp_2956_;
}
}
else
{
lean_dec(v_tail_2979_);
lean_dec_ref_known(v_args_2954_, 2);
goto v___jp_2956_;
}
}
else
{
lean_dec(v_args_2954_);
goto v___jp_2956_;
}
v___jp_2956_:
{
lean_object* v___x_2957_; lean_object* v___x_2958_; 
v___x_2957_ = ((lean_object*)(l_main___closed__0));
v___x_2958_ = l_IO_println___at___00Lean_Environment_displayStats_spec__1(v___x_2957_);
if (lean_obj_tag(v___x_2958_) == 0)
{
lean_object* v___x_2960_; uint8_t v_isShared_2961_; uint8_t v_isSharedCheck_2966_; 
v_isSharedCheck_2966_ = !lean_is_exclusive(v___x_2958_);
if (v_isSharedCheck_2966_ == 0)
{
lean_object* v_unused_2967_; 
v_unused_2967_ = lean_ctor_get(v___x_2958_, 0);
lean_dec(v_unused_2967_);
v___x_2960_ = v___x_2958_;
v_isShared_2961_ = v_isSharedCheck_2966_;
goto v_resetjp_2959_;
}
else
{
lean_dec(v___x_2958_);
v___x_2960_ = lean_box(0);
v_isShared_2961_ = v_isSharedCheck_2966_;
goto v_resetjp_2959_;
}
v_resetjp_2959_:
{
lean_object* v___x_2962_; lean_object* v___x_2964_; 
v___x_2962_ = l_main___boxed__const__1;
if (v_isShared_2961_ == 0)
{
lean_ctor_set(v___x_2960_, 0, v___x_2962_);
v___x_2964_ = v___x_2960_;
goto v_reusejp_2963_;
}
else
{
lean_object* v_reuseFailAlloc_2965_; 
v_reuseFailAlloc_2965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2965_, 0, v___x_2962_);
v___x_2964_ = v_reuseFailAlloc_2965_;
goto v_reusejp_2963_;
}
v_reusejp_2963_:
{
return v___x_2964_;
}
}
}
else
{
lean_object* v_a_2968_; lean_object* v___x_2970_; uint8_t v_isShared_2971_; uint8_t v_isSharedCheck_2975_; 
v_a_2968_ = lean_ctor_get(v___x_2958_, 0);
v_isSharedCheck_2975_ = !lean_is_exclusive(v___x_2958_);
if (v_isSharedCheck_2975_ == 0)
{
v___x_2970_ = v___x_2958_;
v_isShared_2971_ = v_isSharedCheck_2975_;
goto v_resetjp_2969_;
}
else
{
lean_inc(v_a_2968_);
lean_dec(v___x_2958_);
v___x_2970_ = lean_box(0);
v_isShared_2971_ = v_isSharedCheck_2975_;
goto v_resetjp_2969_;
}
v_resetjp_2969_:
{
lean_object* v___x_2973_; 
if (v_isShared_2971_ == 0)
{
v___x_2973_ = v___x_2970_;
goto v_reusejp_2972_;
}
else
{
lean_object* v_reuseFailAlloc_2974_; 
v_reuseFailAlloc_2974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2974_, 0, v_a_2968_);
v___x_2973_ = v_reuseFailAlloc_2974_;
goto v_reusejp_2972_;
}
v_reusejp_2972_:
{
return v___x_2973_;
}
}
}
}
v___jp_2976_:
{
lean_object* v___x_2977_; lean_object* v___x_2978_; 
v___x_2977_ = l_main___boxed__const__2;
v___x_2978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2978_, 0, v___x_2977_);
return v___x_2978_;
}
}
}
LEAN_EXPORT lean_object* l_main___boxed(lean_object* v_args_3664_, lean_object* v_a_3665_){
_start:
{
lean_object* v_res_3666_; 
v_res_3666_ = _lean_main(v_args_3664_);
return v_res_3666_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1(lean_object* v_as_3667_, lean_object* v_as_x27_3668_, lean_object* v_b_3669_, lean_object* v_a_3670_){
_start:
{
lean_object* v___x_3672_; 
v___x_3672_ = l_List_forIn_x27_loop___at___00main_spec__1___redArg(v_as_x27_3668_, v_b_3669_);
return v___x_3672_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___boxed(lean_object* v_as_3673_, lean_object* v_as_x27_3674_, lean_object* v_b_3675_, lean_object* v_a_3676_, lean_object* v___y_3677_){
_start:
{
lean_object* v_res_3678_; 
v_res_3678_ = l_List_forIn_x27_loop___at___00main_spec__1(v_as_3673_, v_as_x27_3674_, v_b_3675_, v_a_3676_);
lean_dec(v_as_x27_3674_);
lean_dec(v_as_3673_);
return v_res_3678_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16(lean_object* v___y_3679_, lean_object* v___y_3680_){
_start:
{
lean_object* v___x_3682_; 
v___x_3682_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg(v___y_3680_);
return v___x_3682_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___boxed(lean_object* v___y_3683_, lean_object* v___y_3684_, lean_object* v___y_3685_){
_start:
{
lean_object* v_res_3686_; 
v_res_3686_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16(v___y_3683_, v___y_3684_);
lean_dec(v___y_3684_);
lean_dec_ref(v___y_3683_);
return v_res_3686_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17(lean_object* v_00_u03b2_3687_, lean_object* v_m_3688_, lean_object* v_a_3689_, lean_object* v_fallback_3690_){
_start:
{
lean_object* v___x_3691_; 
v___x_3691_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg(v_m_3688_, v_a_3689_, v_fallback_3690_);
return v___x_3691_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___boxed(lean_object* v_00_u03b2_3692_, lean_object* v_m_3693_, lean_object* v_a_3694_, lean_object* v_fallback_3695_){
_start:
{
lean_object* v_res_3696_; 
v_res_3696_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17(v_00_u03b2_3692_, v_m_3693_, v_a_3694_, v_fallback_3695_);
lean_dec(v_fallback_3695_);
lean_dec_ref(v_a_3694_);
lean_dec_ref(v_m_3693_);
return v_res_3696_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18(lean_object* v_00_u03b2_3697_, lean_object* v_m_3698_, lean_object* v_a_3699_, lean_object* v_b_3700_){
_start:
{
lean_object* v___x_3701_; 
v___x_3701_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18___redArg(v_m_3698_, v_a_3699_, v_b_3700_);
return v___x_3701_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21(lean_object* v_n_3702_, lean_object* v_as_3703_, lean_object* v_lo_3704_, lean_object* v_hi_3705_, lean_object* v_w_3706_, lean_object* v_hlo_3707_, lean_object* v_hhi_3708_){
_start:
{
lean_object* v___x_3709_; 
v___x_3709_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg(v_n_3702_, v_as_3703_, v_lo_3704_, v_hi_3705_);
return v___x_3709_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___boxed(lean_object* v_n_3710_, lean_object* v_as_3711_, lean_object* v_lo_3712_, lean_object* v_hi_3713_, lean_object* v_w_3714_, lean_object* v_hlo_3715_, lean_object* v_hhi_3716_){
_start:
{
lean_object* v_res_3717_; 
v_res_3717_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21(v_n_3710_, v_as_3711_, v_lo_3712_, v_hi_3713_, v_w_3714_, v_hlo_3715_, v_hhi_3716_);
lean_dec(v_hi_3713_);
lean_dec(v_n_3710_);
return v_res_3717_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21(lean_object* v_00_u03b2_3718_, lean_object* v_a_3719_, lean_object* v_fallback_3720_, lean_object* v_x_3721_){
_start:
{
lean_object* v___x_3722_; 
v___x_3722_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___redArg(v_a_3719_, v_fallback_3720_, v_x_3721_);
return v___x_3722_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___boxed(lean_object* v_00_u03b2_3723_, lean_object* v_a_3724_, lean_object* v_fallback_3725_, lean_object* v_x_3726_){
_start:
{
lean_object* v_res_3727_; 
v_res_3727_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21(v_00_u03b2_3723_, v_a_3724_, v_fallback_3725_, v_x_3726_);
lean_dec(v_x_3726_);
lean_dec(v_fallback_3725_);
lean_dec_ref(v_a_3724_);
return v_res_3727_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23(lean_object* v_00_u03b2_3728_, lean_object* v_a_3729_, lean_object* v_x_3730_){
_start:
{
uint8_t v___x_3731_; 
v___x_3731_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___redArg(v_a_3729_, v_x_3730_);
return v___x_3731_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___boxed(lean_object* v_00_u03b2_3732_, lean_object* v_a_3733_, lean_object* v_x_3734_){
_start:
{
uint8_t v_res_3735_; lean_object* v_r_3736_; 
v_res_3735_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23(v_00_u03b2_3732_, v_a_3733_, v_x_3734_);
lean_dec(v_x_3734_);
lean_dec_ref(v_a_3733_);
v_r_3736_ = lean_box(v_res_3735_);
return v_r_3736_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24(lean_object* v_00_u03b2_3737_, lean_object* v_data_3738_){
_start:
{
lean_object* v___x_3739_; 
v___x_3739_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24___redArg(v_data_3738_);
return v___x_3739_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__25(lean_object* v_00_u03b2_3740_, lean_object* v_a_3741_, lean_object* v_b_3742_, lean_object* v_x_3743_){
_start:
{
lean_object* v___x_3744_; 
v___x_3744_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__25___redArg(v_a_3741_, v_b_3742_, v_x_3743_);
return v___x_3744_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31(lean_object* v_n_3745_, lean_object* v_lo_3746_, lean_object* v_hi_3747_, lean_object* v_hhi_3748_, lean_object* v_pivot_3749_, lean_object* v_as_3750_, lean_object* v_i_3751_, lean_object* v_k_3752_, lean_object* v_ilo_3753_, lean_object* v_ik_3754_, lean_object* v_w_3755_){
_start:
{
lean_object* v___x_3756_; 
v___x_3756_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___redArg(v_hi_3747_, v_pivot_3749_, v_as_3750_, v_i_3751_, v_k_3752_);
return v___x_3756_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___boxed(lean_object* v_n_3757_, lean_object* v_lo_3758_, lean_object* v_hi_3759_, lean_object* v_hhi_3760_, lean_object* v_pivot_3761_, lean_object* v_as_3762_, lean_object* v_i_3763_, lean_object* v_k_3764_, lean_object* v_ilo_3765_, lean_object* v_ik_3766_, lean_object* v_w_3767_){
_start:
{
lean_object* v_res_3768_; 
v_res_3768_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31(v_n_3757_, v_lo_3758_, v_hi_3759_, v_hhi_3760_, v_pivot_3761_, v_as_3762_, v_i_3763_, v_k_3764_, v_ilo_3765_, v_ik_3766_, v_w_3767_);
lean_dec_ref(v_pivot_3761_);
lean_dec(v_hi_3759_);
lean_dec(v_lo_3758_);
lean_dec(v_n_3757_);
return v_res_3768_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40(lean_object* v_as_3769_, size_t v_sz_3770_, size_t v_i_3771_, lean_object* v_b_3772_, lean_object* v___y_3773_, lean_object* v___y_3774_){
_start:
{
lean_object* v___x_3776_; 
v___x_3776_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___redArg(v_as_3769_, v_sz_3770_, v_i_3771_, v_b_3772_, v___y_3773_);
return v___x_3776_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___boxed(lean_object* v_as_3777_, lean_object* v_sz_3778_, lean_object* v_i_3779_, lean_object* v_b_3780_, lean_object* v___y_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_){
_start:
{
size_t v_sz_boxed_3784_; size_t v_i_boxed_3785_; lean_object* v_res_3786_; 
v_sz_boxed_3784_ = lean_unbox_usize(v_sz_3778_);
lean_dec(v_sz_3778_);
v_i_boxed_3785_ = lean_unbox_usize(v_i_3779_);
lean_dec(v_i_3779_);
v_res_3786_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40(v_as_3777_, v_sz_boxed_3784_, v_i_boxed_3785_, v_b_3780_, v___y_3781_, v___y_3782_);
lean_dec(v___y_3782_);
lean_dec_ref(v___y_3781_);
lean_dec_ref(v_as_3777_);
return v_res_3786_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35(lean_object* v_00_u03b2_3787_, lean_object* v_i_3788_, lean_object* v_source_3789_, lean_object* v_target_3790_){
_start:
{
lean_object* v___x_3791_; 
v___x_3791_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35___redArg(v_i_3788_, v_source_3789_, v_target_3790_);
return v___x_3791_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42(uint8_t v___x_3792_, lean_object* v_as_3793_, size_t v_sz_3794_, size_t v_i_3795_, lean_object* v_b_3796_, lean_object* v___y_3797_, lean_object* v___y_3798_){
_start:
{
lean_object* v___x_3800_; 
v___x_3800_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___redArg(v___x_3792_, v_as_3793_, v_sz_3794_, v_i_3795_, v_b_3796_, v___y_3797_);
return v___x_3800_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___boxed(lean_object* v___x_3801_, lean_object* v_as_3802_, lean_object* v_sz_3803_, lean_object* v_i_3804_, lean_object* v_b_3805_, lean_object* v___y_3806_, lean_object* v___y_3807_, lean_object* v___y_3808_){
_start:
{
uint8_t v___x_42279__boxed_3809_; size_t v_sz_boxed_3810_; size_t v_i_boxed_3811_; lean_object* v_res_3812_; 
v___x_42279__boxed_3809_ = lean_unbox(v___x_3801_);
v_sz_boxed_3810_ = lean_unbox_usize(v_sz_3803_);
lean_dec(v_sz_3803_);
v_i_boxed_3811_ = lean_unbox_usize(v_i_3804_);
lean_dec(v_i_3804_);
v_res_3812_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42(v___x_42279__boxed_3809_, v_as_3802_, v_sz_boxed_3810_, v_i_boxed_3811_, v_b_3805_, v___y_3806_, v___y_3807_);
lean_dec(v___y_3807_);
lean_dec_ref(v___y_3806_);
lean_dec_ref(v_as_3802_);
return v_res_3812_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51(lean_object* v_as_3813_, size_t v_sz_3814_, size_t v_i_3815_, lean_object* v_b_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_){
_start:
{
lean_object* v___x_3820_; 
v___x_3820_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___redArg(v_as_3813_, v_sz_3814_, v_i_3815_, v_b_3816_, v___y_3817_);
return v___x_3820_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___boxed(lean_object* v_as_3821_, lean_object* v_sz_3822_, lean_object* v_i_3823_, lean_object* v_b_3824_, lean_object* v___y_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_){
_start:
{
size_t v_sz_boxed_3828_; size_t v_i_boxed_3829_; lean_object* v_res_3830_; 
v_sz_boxed_3828_ = lean_unbox_usize(v_sz_3822_);
lean_dec(v_sz_3822_);
v_i_boxed_3829_ = lean_unbox_usize(v_i_3823_);
lean_dec(v_i_3823_);
v_res_3830_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51(v_as_3821_, v_sz_boxed_3828_, v_i_boxed_3829_, v_b_3824_, v___y_3825_, v___y_3826_);
lean_dec(v___y_3826_);
lean_dec_ref(v___y_3825_);
lean_dec_ref(v_as_3821_);
return v_res_3830_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35_spec__44(lean_object* v_00_u03b2_3831_, lean_object* v_x_3832_, lean_object* v_x_3833_){
_start:
{
lean_object* v___x_3834_; 
v___x_3834_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35_spec__44___redArg(v_x_3832_, v_x_3833_);
return v___x_3834_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49(uint8_t v___x_3835_, lean_object* v_as_3836_, size_t v_sz_3837_, size_t v_i_3838_, lean_object* v_b_3839_, lean_object* v___y_3840_, lean_object* v___y_3841_){
_start:
{
lean_object* v___x_3843_; 
v___x_3843_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg(v___x_3835_, v_as_3836_, v_sz_3837_, v_i_3838_, v_b_3839_, v___y_3840_);
return v___x_3843_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___boxed(lean_object* v___x_3844_, lean_object* v_as_3845_, lean_object* v_sz_3846_, lean_object* v_i_3847_, lean_object* v_b_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_){
_start:
{
uint8_t v___x_42310__boxed_3852_; size_t v_sz_boxed_3853_; size_t v_i_boxed_3854_; lean_object* v_res_3855_; 
v___x_42310__boxed_3852_ = lean_unbox(v___x_3844_);
v_sz_boxed_3853_ = lean_unbox_usize(v_sz_3846_);
lean_dec(v_sz_3846_);
v_i_boxed_3854_ = lean_unbox_usize(v_i_3847_);
lean_dec(v_i_3847_);
v_res_3855_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49(v___x_42310__boxed_3852_, v_as_3845_, v_sz_boxed_3853_, v_i_boxed_3854_, v_b_3848_, v___y_3849_, v___y_3850_);
lean_dec(v___y_3850_);
lean_dec_ref(v___y_3849_);
lean_dec_ref(v_as_3845_);
return v_res_3855_;
}
}
lean_object* runtime_initialize_Init(uint8_t builtin);
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_ForEachExpr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_Path(uint8_t builtin);
lean_object* runtime_initialize_Lean_Environment(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Options(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_ModPkgExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_CSimpAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_EmitC(uint8_t builtin);
lean_object* runtime_initialize_Lean_Language_Lean(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_ExprDefEq(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_LevelDefEq(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatchEqs(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_Eqns(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser(uint8_t builtin);
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
res = runtime_initialize_Lean_Compiler_ModPkgExt(builtin);
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
res = runtime_initialize_Lean_Meta_ExprDefEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LevelDefEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatchEqs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser(builtin);
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
lean_object* initialize_Lean_Compiler_ModPkgExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_CSimpAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_EmitC(uint8_t builtin);
lean_object* initialize_Lean_Language_Lean(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Main(uint8_t builtin);
lean_object* initialize_Lean_Meta_ExprDefEq(uint8_t builtin);
lean_object* initialize_Lean_Meta_LevelDefEq(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatchEqs(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_Eqns(uint8_t builtin);
lean_object* initialize_Lean_Parser(uint8_t builtin);
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
res = initialize_Lean_Compiler_ModPkgExt(builtin);
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
res = initialize_Lean_Meta_ExprDefEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LevelDefEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatchEqs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser(builtin);
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
