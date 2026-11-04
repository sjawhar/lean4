// Lean compiler output
// Module: Lean.Linter.Deprecated
// Imports: public import Lean.Meta.Basic import Lean.Linter.Init import Lean.Elab.InfoTree.Main import Lean.ExtraModUses import Lean.Meta.Hint import Init.Data.List.MapIdx import Init.Omega import Std.Time.Format import Std.Time.Zoned
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
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedSynthNormMemoSlot_default;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_get_current_time();
lean_object* l_Std_Time_TimeZone_ZoneRules_fixedOffsetZone(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Time_TimeZone_ZoneRules_timezoneAt(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_Std_Time_Duration_ofNanoseconds(lean_object*);
lean_object* l_Std_Time_PlainDateTime_ofWallTime(lean_object*);
lean_object* lean_mk_thunk(lean_object*);
lean_object* lean_thunk_get_own(lean_object*);
lean_object* l_Std_Time_Database_defaultGetLocalZoneRules();
lean_object* l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForTimestamp(lean_object*, lean_object*);
lean_object* l_Std_Time_TimeZone_LocalTimeType_getTimeZone(lean_object*);
lean_object* l_Std_Time_PlainDate_toLeanDateString(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Syntax_ofRange(lean_object*, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_hint(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MacroScopesView_isSuffixOf(lean_object*, lean_object*);
lean_object* l_Lean_privateToUserName_x3f(lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_ResolveName_backward_privateInPublic_warn;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_Name_componentsRev(lean_object*);
lean_object* l_Lean_Name_appendCore(lean_object*, lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
extern lean_object* l_Lean_rootNamespace;
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_getRevAliases(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_usageRecordingEnabled();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUsesByChecksRef;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_registerParametricAttributeExt___redArg(lean_object*, uint8_t, lean_object*, uint8_t);
lean_object* l_Lean_TSyntax_getString(lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_MessageData_hint_x27(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_ConstantInfo_numLevelParams(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_ConstantInfo_instantiateTypeLevelParams(lean_object*, lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Linter_instInhabitedLinterSetsState_default;
extern lean_object* l_Lean_Linter_linterSetsExt;
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_registerParametricAttributeForExt___redArg(lean_object*, lean_object*);
lean_object* l_Lean_ParametricAttribute_setParam___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___redArg(lean_object*, lean_object*);
lean_object* l_Lean_ParametricAttribute_getParam_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
uint8_t l_Lean_isProtected(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_get___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "linter"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "deprecated"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(227, 99, 57, 49, 46, 156, 253, 187)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "if true, generate deprecation warnings"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Linter"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(53, 243, 121, 207, 53, 172, 203, 87)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(248, 165, 85, 201, 27, 48, 185, 203)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_linter_deprecated;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "deprecatedTarget"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(227, 99, 57, 49, 46, 156, 253, 187)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(204, 166, 165, 234, 53, 174, 145, 27)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 97, .m_capacity = 97, .m_length = 96, .m_data = "if true, warn when a `@[deprecated]` attribute points at a declaration that is itself deprecated"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(53, 243, 121, 207, 53, 172, 203, 87)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(248, 165, 85, 201, 27, 48, 185, 203)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(147, 187, 162, 70, 72, 196, 181, 236)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_linter_deprecated_deprecatedTarget;
static const lean_ctor_object l_Lean_Linter_instInhabitedDeprecationEntry_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Linter_instInhabitedDeprecationEntry_default___closed__0 = (const lean_object*)&l_Lean_Linter_instInhabitedDeprecationEntry_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Linter_instInhabitedDeprecationEntry_default = (const lean_object*)&l_Lean_Linter_instInhabitedDeprecationEntry_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Linter_instInhabitedDeprecationEntry = (const lean_object*)&l_Lean_Linter_instInhabitedDeprecationEntry_default___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate_spec__2(lean_object*);
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__0;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "UTC"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__1 = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__1_value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__1_value)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__2 = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__2_value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate_spec__0(lean_object*);
static const lean_string_object l_Lean_Linter_mkSinceHint___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Try this: "};
static const lean_object* l_Lean_Linter_mkSinceHint___lam__0___closed__0 = (const lean_object*)&l_Lean_Linter_mkSinceHint___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Linter_mkSinceHint___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_mkSinceHint___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_mkSinceHint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "(since := \""};
static const lean_object* l_Lean_Linter_mkSinceHint___closed__0 = (const lean_object*)&l_Lean_Linter_mkSinceHint___closed__0_value;
static const lean_string_object l_Lean_Linter_mkSinceHint___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\")"};
static const lean_object* l_Lean_Linter_mkSinceHint___closed__1 = (const lean_object*)&l_Lean_Linter_mkSinceHint___closed__1_value;
static const lean_string_object l_Lean_Linter_mkSinceHint___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Add the current date:"};
static const lean_object* l_Lean_Linter_mkSinceHint___closed__2 = (const lean_object*)&l_Lean_Linter_mkSinceHint___closed__2_value;
static const lean_ctor_object l_Lean_Linter_mkSinceHint___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Linter_mkSinceHint___closed__2_value)}};
static const lean_object* l_Lean_Linter_mkSinceHint___closed__3 = (const lean_object*)&l_Lean_Linter_mkSinceHint___closed__3_value;
static lean_once_cell_t l_Lean_Linter_mkSinceHint___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_mkSinceHint___closed__4;
static const lean_string_object l_Lean_Linter_mkSinceHint___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_Linter_mkSinceHint___closed__5 = (const lean_object*)&l_Lean_Linter_mkSinceHint___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Linter_mkSinceHint(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_mkSinceHint___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_deprecated"};
static const lean_object* l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___closed__0 = (const lean_object*)&l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___closed__0_value;
static const lean_ctor_object l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(123, 51, 129, 56, 173, 194, 28, 188)}};
static const lean_object* l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___closed__1 = (const lean_object*)&l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq___closed__0 = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0___closed__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Try this: +typeChanged"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0___closed__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0___closed__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__48___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__48___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43_spec__47_spec__49_spec__52(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43_spec__47_spec__49_spec__52___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51_spec__53___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51_spec__53___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51_spec__53___closed__0_value;
static const lean_ctor_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51_spec__53___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51_spec__53___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51_spec__53___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51_spec__53(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51_spec__53___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Private declaration `"};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__0 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__0_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__1;
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 167, .m_capacity = 167, .m_length = 166, .m_data = "` accessed publicly; this is allowed only because the `backward.privateInPublic` option is enabled. \n\nDisable `backward.privateInPublic.warn` to silence this warning."};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__2 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__2_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__3;
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__35(lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__35___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23___lam__0___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26___closed__0 = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26___closed__0_value;
static const lean_closure_object l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23___lam__0___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51_spec__53___closed__1_value)} };
static const lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26___closed__1 = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__25(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23_spec__33___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23_spec__33___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23___closed__0 = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12___closed__0 = (const lean_object*)&l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__26___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__26___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__27_spec__32___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__27_spec__32___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__23___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__23___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__18___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__18___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__23___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__24_spec__28___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__24(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__24_spec__28___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__42___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__42___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43_spec__47_spec__49(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43_spec__47_spec__49___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43_spec__47(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43_spec__47___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__30(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5___lam__0___boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5___closed__0 = (const lean_object*)&l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__14___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__15_spec__21_spec__32___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__15_spec__21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__15___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__10___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__10___closed__0;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__10___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__10___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__1;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__2;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__3_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__3_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__4 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__4_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__6;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__7_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__8;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__9;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__10 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__10_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__11;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__12 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__12_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__13;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__14;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__15_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__16 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__16_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__17_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__18 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__18_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6_spec__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6_spec__13___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 134, .m_capacity = 134, .m_length = 133, .m_data = "`[deprecated]` attribute should specify the date or library version at which the deprecation was introduced, using `(since := \"...\")`"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 82, .m_data = "`[deprecated]` attribute should specify either a new name or a deprecation message"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__4_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__4_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__5_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "The updated constant has a different type:"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__5_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__5_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__7_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "\ninstead of"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__7_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__7_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__8_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__8_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__9_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 372, .m_capacity = 372, .m_length = 371, .m_data = "\n\nThis suggests that addressing the deprecation might be more involved than simply replacing the old name with the new name. This is often expected, but sometimes it indicates that the deprecation is in favor of the wrong declaration, or that there is a mistake in one of the statements.\n\nIf the type difference is intentional, use `+typeChanged` to silence this warning."};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__9_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__9_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__10_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__10_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__11_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Add `+typeChanged` to silence this warning."};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__11_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__11_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__12_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__11_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__12_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__12_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__13_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__13_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__14_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__14_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__15_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Invalid `[deprecated]` attribute syntax"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__15_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__15_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Add `+typeChanged`:"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__18_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__17_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__18_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__18_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__19_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__19_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__20_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " +typeChanged"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__20_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__20_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__21_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__20_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__21_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__21_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__22_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "+typeChanged"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__22_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__22_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__23_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__22_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__23_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__23_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__24_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__24_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__25_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__25_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__27_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__27_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_array_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__28_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__28_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__28_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__29_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__29_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__31_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__31_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__32_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 88, .m_capacity = 88, .m_length = 87, .m_data = "The `+typeChanged` marker is not needed because the updated constant has the same type."};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__32_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__32_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__33_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__32_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__33_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__33_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__34_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__34_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__35_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "This warning can be disabled with `set_option "};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__35_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__35_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__36_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__36_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__37_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " false`"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__37_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__37_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__38_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__38_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__39_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__39_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__39_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__40_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__40_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__41_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "` is itself deprecated, but without an explicit replacement; `"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__41_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__41_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__42_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__42_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__43_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "` is being deprecated in favor of a deprecated declaration"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__43_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__43_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__44_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__44_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__45_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "` is itself deprecated in favor of `"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__45_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__45_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__46_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__46_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__47_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "`; consider deprecating `"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__47_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__47_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__48_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__48_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__49_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "` in favor of `"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__49_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__49_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__50_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__50_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__51_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` instead"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__51_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__51_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__52_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__52_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__53_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Deprecate in favor of `"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__53_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__53_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__54_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__54_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__55_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "` instead:"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__55_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__55_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__56_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__56_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__57_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Invalid `[deprecated]` attribute: `"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__57_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__57_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__58_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__58_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__59_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "` cannot be deprecated in favor of itself"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__59_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__59_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__60_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__60_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "deprecatedAttr"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(85, 246, 23, 143, 159, 138, 155, 162)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(78, 182, 79, 155, 204, 118, 39, 140)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "mark declaration as deprecated"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__18___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__23(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23_spec__33(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23_spec__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__15_spec__21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__24_spec__28(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__24_spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__27_spec__32(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__27_spec__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__15_spec__21_spec__32(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__42(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__42___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__48(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__48___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_deprecatedAttr;
LEAN_EXPORT lean_object* l_Lean_Linter_setDeprecated___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_setDeprecated___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_setDeprecated(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Linter_isDeprecated(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_isDeprecated___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageData_isDeprecationWarning___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_isDeprecationWarning___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_MessageData_isDeprecationWarning___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_isDeprecationWarning___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_isDeprecationWarning___closed__0 = (const lean_object*)&l_Lean_MessageData_isDeprecationWarning___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_MessageData_isDeprecationWarning(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_isDeprecationWarning___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getDeprecatedNewName(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Replace the deprecated name:"};
static const lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__0 = (const lean_object*)&l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__0_value;
static lean_once_cell_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "` has been deprecated"};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__0 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__0_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__1;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ": Use `"};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__2 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__2_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__3;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "` is protected. References to this constant must include "};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__4 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__4_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__5;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "its prefix `"};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__6 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__6_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__7;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "` even when inside its namespace."};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__8 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__8_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__9;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 85, .m_data = "The updated constant is in a different namespace. Dot notation may need to be changed"};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__10 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__10_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__11;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__12 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__12_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__13;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = " (e.g., from `x."};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__14 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__14_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__15;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "` to `"};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__16 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__16_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__17;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " x`)"};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__18 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__18_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__19;
static const lean_ctor_object l_Lean_Linter_checkDeprecated___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51_spec__53___closed__0_value)}};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__20 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__20_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__21;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "at least the last component `"};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__22 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__22_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__23;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "` of "};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__24 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__24_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__25;
static const lean_string_object l_Lean_Linter_checkDeprecated___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_Linter_checkDeprecated___closed__26 = (const lean_object*)&l_Lean_Linter_checkDeprecated___closed__26_value;
static lean_once_cell_t l_Lean_Linter_checkDeprecated___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkDeprecated___closed__27;
LEAN_EXPORT lean_object* l_Lean_Linter_checkDeprecated(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_checkDeprecated___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_53_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_));
v___x_54_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_));
v___x_55_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_));
v___x_56_ = l_Lean_Option_register___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__spec__0(v___x_53_, v___x_54_, v___x_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4____boxed(lean_object* v_a_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_();
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_77_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_));
v___x_78_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_));
v___x_79_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_));
v___x_80_ = l_Lean_Option_register___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4__spec__0(v___x_77_, v___x_78_, v___x_79_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4____boxed(lean_object* v_a_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_();
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate_spec__1(lean_object* v_a_87_){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = lean_nat_to_int(v_a_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate_spec__2(lean_object* v_a_89_){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = l_Rat_ofInt(v_a_89_);
return v___x_90_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0___closed__0(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_91_ = lean_unsigned_to_nat(1000000000u);
v___x_92_ = lean_nat_to_int(v___x_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0(lean_object* v_tz_93_, lean_object* v_a_94_, lean_object* v___x_95_, lean_object* v_x_96_){
_start:
{
lean_object* v_offset_97_; lean_object* v_second_98_; lean_object* v_nano_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v_nanos_103_; lean_object* v___x_104_; lean_object* v_nanos_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v_offset_97_ = lean_ctor_get(v_tz_93_, 0);
v_second_98_ = lean_ctor_get(v_a_94_, 0);
v_nano_99_ = lean_ctor_get(v_a_94_, 1);
v___x_100_ = lean_nat_to_int(v___x_95_);
v___x_101_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0___closed__0, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0___closed__0_once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0___closed__0);
v___x_102_ = lean_int_mul(v_second_98_, v___x_101_);
v_nanos_103_ = lean_int_add(v___x_102_, v_nano_99_);
lean_dec(v___x_102_);
v___x_104_ = lean_int_mul(v_offset_97_, v___x_101_);
v_nanos_105_ = lean_int_add(v___x_104_, v___x_100_);
lean_dec(v___x_100_);
lean_dec(v___x_104_);
v___x_106_ = lean_int_add(v_nanos_103_, v_nanos_105_);
lean_dec(v_nanos_105_);
lean_dec(v_nanos_103_);
v___x_107_ = l_Std_Time_Duration_ofNanoseconds(v___x_106_);
lean_dec(v___x_106_);
v___x_108_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0___boxed(lean_object* v_tz_109_, lean_object* v_a_110_, lean_object* v___x_111_, lean_object* v_x_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0(v_tz_109_, v_a_110_, v___x_111_, v_x_112_);
lean_dec_ref(v_a_110_);
lean_dec_ref(v_tz_109_);
return v_res_113_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__0(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_114_ = lean_unsigned_to_nat(0u);
v___x_115_ = lean_nat_to_int(v___x_114_);
return v___x_115_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__3(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_119_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__2));
v___x_120_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__0, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__0_once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__0);
v___x_121_ = l_Std_Time_TimeZone_ZoneRules_fixedOffsetZone(v___x_120_, v___x_119_, v___x_119_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate(){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = lean_get_current_time();
if (lean_obj_tag(v___x_148_) == 0)
{
lean_object* v_a_149_; lean_object* v___x_150_; 
v_a_149_ = lean_ctor_get(v___x_148_, 0);
lean_inc(v_a_149_);
lean_dec_ref_known(v___x_148_, 1);
v___x_150_ = l_Std_Time_Database_defaultGetLocalZoneRules();
if (lean_obj_tag(v___x_150_) == 0)
{
lean_object* v_a_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_173_; 
v_a_151_ = lean_ctor_get(v___x_150_, 0);
v_isSharedCheck_173_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_173_ == 0)
{
v___x_153_ = v___x_150_;
v_isShared_154_ = v_isSharedCheck_173_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_a_151_);
lean_dec(v___x_150_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_173_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v_offset_157_; lean_object* v_second_158_; lean_object* v_nano_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v_nanos_163_; lean_object* v___x_164_; lean_object* v_nanos_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v_date_169_; lean_object* v___x_171_; 
v___x_155_ = l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForTimestamp(v_a_151_, v_a_149_);
v___x_156_ = l_Std_Time_TimeZone_LocalTimeType_getTimeZone(v___x_155_);
lean_dec_ref(v___x_155_);
v_offset_157_ = lean_ctor_get(v___x_156_, 0);
lean_inc(v_offset_157_);
lean_dec_ref(v___x_156_);
v_second_158_ = lean_ctor_get(v_a_149_, 0);
lean_inc(v_second_158_);
v_nano_159_ = lean_ctor_get(v_a_149_, 1);
lean_inc(v_nano_159_);
lean_dec(v_a_149_);
v___x_160_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__0, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__0_once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__0);
v___x_161_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0___closed__0, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0___closed__0_once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0___closed__0);
v___x_162_ = lean_int_mul(v_second_158_, v___x_161_);
lean_dec(v_second_158_);
v_nanos_163_ = lean_int_add(v___x_162_, v_nano_159_);
lean_dec(v_nano_159_);
lean_dec(v___x_162_);
v___x_164_ = lean_int_mul(v_offset_157_, v___x_161_);
lean_dec(v_offset_157_);
v_nanos_165_ = lean_int_add(v___x_164_, v___x_160_);
lean_dec(v___x_164_);
v___x_166_ = lean_int_add(v_nanos_163_, v_nanos_165_);
lean_dec(v_nanos_165_);
lean_dec(v_nanos_163_);
v___x_167_ = l_Std_Time_Duration_ofNanoseconds(v___x_166_);
lean_dec(v___x_166_);
v___x_168_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_167_);
v_date_169_ = lean_ctor_get(v___x_168_, 0);
lean_inc_ref(v_date_169_);
lean_dec_ref(v___x_168_);
if (v_isShared_154_ == 0)
{
lean_ctor_set(v___x_153_, 0, v_date_169_);
v___x_171_ = v___x_153_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v_date_169_);
v___x_171_ = v_reuseFailAlloc_172_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
return v___x_171_;
}
}
}
else
{
lean_dec_ref_known(v___x_150_, 1);
lean_dec(v_a_149_);
goto v___jp_123_;
}
}
else
{
lean_dec_ref_known(v___x_148_, 1);
goto v___jp_123_;
}
v___jp_123_:
{
lean_object* v___x_124_; 
v___x_124_ = lean_get_current_time();
if (lean_obj_tag(v___x_124_) == 0)
{
lean_object* v_a_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_139_; 
v_a_125_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_139_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_139_ == 0)
{
v___x_127_ = v___x_124_;
v_isShared_128_ = v_isSharedCheck_139_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_a_125_);
lean_dec(v___x_124_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_139_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v_tz_131_; lean_object* v___f_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v_date_135_; lean_object* v___x_137_; 
v___x_129_ = lean_unsigned_to_nat(0u);
v___x_130_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__3, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__3_once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___closed__3);
v_tz_131_ = l_Std_Time_TimeZone_ZoneRules_timezoneAt(v___x_130_, v_a_125_);
v___f_132_ = lean_alloc_closure((void*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___lam__0___boxed), 4, 3);
lean_closure_set(v___f_132_, 0, v_tz_131_);
lean_closure_set(v___f_132_, 1, v_a_125_);
lean_closure_set(v___f_132_, 2, v___x_129_);
v___x_133_ = lean_mk_thunk(v___f_132_);
v___x_134_ = lean_thunk_get_own(v___x_133_);
lean_dec_ref(v___x_133_);
v_date_135_ = lean_ctor_get(v___x_134_, 0);
lean_inc_ref(v_date_135_);
lean_dec(v___x_134_);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 0, v_date_135_);
v___x_137_ = v___x_127_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v_date_135_);
v___x_137_ = v_reuseFailAlloc_138_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
return v___x_137_;
}
}
}
else
{
lean_object* v_a_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_147_; 
v_a_140_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_147_ == 0)
{
v___x_142_ = v___x_124_;
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_a_140_);
lean_dec(v___x_124_);
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
v_reuseFailAlloc_146_ = lean_alloc_ctor(1, 1, 0);
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
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate___boxed(lean_object* v_a_174_){
_start:
{
lean_object* v_res_175_; 
v_res_175_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate();
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate_spec__0(lean_object* v_a_176_){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_177_ = lean_nat_to_int(v_a_176_);
v___x_178_ = l_Rat_ofInt(v___x_177_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_mkSinceHint___lam__0(lean_object* v___x_180_, lean_object* v_x_181_){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_182_ = ((lean_object*)(l_Lean_Linter_mkSinceHint___lam__0___closed__0));
v___x_183_ = lean_string_append(v___x_182_, v___x_180_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_mkSinceHint___lam__0___boxed(lean_object* v___x_184_, lean_object* v_x_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Lean_Linter_mkSinceHint___lam__0(v___x_184_, v_x_185_);
lean_dec_ref(v_x_185_);
lean_dec_ref(v___x_184_);
return v_res_186_;
}
}
static lean_object* _init_l_Lean_Linter_mkSinceHint___closed__4(void){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_192_ = ((lean_object*)(l_Lean_Linter_mkSinceHint___closed__3));
v___x_193_ = l_Lean_MessageData_ofFormat(v___x_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_mkSinceHint(lean_object* v_stx_195_, lean_object* v_a_196_, lean_object* v_a_197_){
_start:
{
uint8_t v___x_199_; lean_object* v___x_200_; 
v___x_199_ = 1;
v___x_200_ = l_Lean_Syntax_getTailPos_x3f(v_stx_195_, v___x_199_);
if (lean_obj_tag(v___x_200_) == 1)
{
lean_object* v_val_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_249_; 
v_val_201_ = lean_ctor_get(v___x_200_, 0);
v_isSharedCheck_249_ = !lean_is_exclusive(v___x_200_);
if (v_isSharedCheck_249_ == 0)
{
v___x_203_ = v___x_200_;
v_isShared_204_ = v_isSharedCheck_249_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_val_201_);
lean_dec(v___x_200_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_249_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v_ref_205_; lean_object* v___x_206_; 
v_ref_205_ = lean_ctor_get(v_a_196_, 2);
v___x_206_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_currentDate();
if (lean_obj_tag(v___x_206_) == 0)
{
lean_object* v_a_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___f_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_222_; 
v_a_207_ = lean_ctor_get(v___x_206_, 0);
lean_inc(v_a_207_);
lean_dec_ref_known(v___x_206_, 1);
v___x_208_ = ((lean_object*)(l_Lean_Linter_mkSinceHint___closed__0));
v___x_209_ = l_Std_Time_PlainDate_toLeanDateString(v_a_207_);
v___x_210_ = lean_string_append(v___x_208_, v___x_209_);
lean_dec_ref(v___x_209_);
v___x_211_ = ((lean_object*)(l_Lean_Linter_mkSinceHint___closed__1));
v___x_212_ = lean_string_append(v___x_210_, v___x_211_);
lean_inc_ref(v___x_212_);
v___f_213_ = lean_alloc_closure((void*)(l_Lean_Linter_mkSinceHint___lam__0___boxed), 2, 1);
lean_closure_set(v___f_213_, 0, v___x_212_);
v___x_214_ = lean_obj_once(&l_Lean_Linter_mkSinceHint___closed__4, &l_Lean_Linter_mkSinceHint___closed__4_once, _init_l_Lean_Linter_mkSinceHint___closed__4);
v___x_215_ = ((lean_object*)(l_Lean_Linter_mkSinceHint___closed__5));
v___x_216_ = lean_string_append(v___x_215_, v___x_212_);
v___x_217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_217_, 0, v___x_216_);
v___x_218_ = lean_box(0);
v___x_219_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_219_, 0, v___x_212_);
v___x_220_ = l_Lean_MessageData_ofFormat(v___x_219_);
if (v_isShared_204_ == 0)
{
lean_ctor_set(v___x_203_, 0, v___x_220_);
v___x_222_ = v___x_203_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v___x_220_);
v___x_222_ = v_reuseFailAlloc_236_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; uint8_t v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; uint8_t v___x_234_; lean_object* v___x_235_; 
v___x_223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_223_, 0, v___f_213_);
v___x_224_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_224_, 0, v___x_217_);
lean_ctor_set(v___x_224_, 1, v___x_218_);
lean_ctor_set(v___x_224_, 2, v___x_218_);
lean_ctor_set(v___x_224_, 3, v___x_218_);
lean_ctor_set(v___x_224_, 4, v___x_222_);
lean_ctor_set(v___x_224_, 5, v___x_223_);
lean_inc(v_val_201_);
v___x_225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_225_, 0, v_val_201_);
lean_ctor_set(v___x_225_, 1, v_val_201_);
v___x_226_ = l_Lean_Syntax_ofRange(v___x_225_, v___x_199_);
v___x_227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
v___x_228_ = 4;
v___x_229_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_229_, 0, v___x_224_);
lean_ctor_set(v___x_229_, 1, v___x_227_);
lean_ctor_set(v___x_229_, 2, v___x_218_);
lean_ctor_set_uint8(v___x_229_, sizeof(void*)*3, v___x_228_);
v___x_230_ = lean_unsigned_to_nat(1u);
v___x_231_ = lean_mk_empty_array_with_capacity(v___x_230_);
v___x_232_ = lean_array_push(v___x_231_, v___x_229_);
v___x_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_233_, 0, v_stx_195_);
v___x_234_ = 0;
v___x_235_ = l_Lean_MessageData_hint(v___x_214_, v___x_232_, v___x_233_, v___x_218_, v___x_234_, v_a_196_, v_a_197_);
lean_dec_ref(v___x_232_);
return v___x_235_;
}
}
else
{
lean_object* v_a_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_248_; 
lean_del_object(v___x_203_);
lean_dec(v_val_201_);
lean_dec(v_stx_195_);
v_a_237_ = lean_ctor_get(v___x_206_, 0);
v_isSharedCheck_248_ = !lean_is_exclusive(v___x_206_);
if (v_isSharedCheck_248_ == 0)
{
v___x_239_ = v___x_206_;
v_isShared_240_ = v_isSharedCheck_248_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_a_237_);
lean_dec(v___x_206_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_248_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_246_; 
v___x_241_ = lean_io_error_to_string(v_a_237_);
v___x_242_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
v___x_243_ = l_Lean_MessageData_ofFormat(v___x_242_);
lean_inc(v_ref_205_);
v___x_244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_244_, 0, v_ref_205_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
if (v_isShared_240_ == 0)
{
lean_ctor_set(v___x_239_, 0, v___x_244_);
v___x_246_ = v___x_239_;
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
lean_object* v___x_250_; lean_object* v___x_251_; 
lean_dec(v___x_200_);
lean_dec(v_stx_195_);
v___x_250_ = l_Lean_MessageData_nil;
v___x_251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_251_, 0, v___x_250_);
return v___x_251_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_mkSinceHint___boxed(lean_object* v_stx_252_, lean_object* v_a_253_, lean_object* v_a_254_, lean_object* v_a_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l_Lean_Linter_mkSinceHint(v_stx_252_, v_a_253_, v_a_254_);
lean_dec(v_a_254_);
lean_dec_ref(v_a_253_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0(lean_object* v_a_260_, lean_object* v_a_261_){
_start:
{
if (lean_obj_tag(v_a_260_) == 0)
{
lean_object* v___x_262_; 
v___x_262_ = lean_array_to_list(v_a_261_);
return v___x_262_;
}
else
{
lean_object* v_tail_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v_tail_263_ = lean_ctor_get(v_a_260_, 1);
v___x_264_ = lean_array_get_size(v_a_261_);
v___x_265_ = ((lean_object*)(l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___closed__1));
v___x_266_ = l_Lean_Name_num___override(v___x_265_, v___x_264_);
v___x_267_ = l_Lean_mkLevelParam(v___x_266_);
v___x_268_ = lean_array_push(v_a_261_, v___x_267_);
v_a_260_ = v_tail_263_;
v_a_261_ = v___x_268_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0___boxed(lean_object* v_a_270_, lean_object* v_a_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0(v_a_270_, v_a_271_);
lean_dec(v_a_270_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq(lean_object* v_decl_u2081_275_, lean_object* v_decl_u2082_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_){
_start:
{
lean_object* v___y_283_; lean_object* v___x_300_; lean_object* v___x_301_; uint8_t v___x_302_; 
v___x_300_ = l_Lean_ConstantInfo_numLevelParams(v_decl_u2081_275_);
v___x_301_ = l_Lean_ConstantInfo_numLevelParams(v_decl_u2082_276_);
v___x_302_ = lean_nat_dec_eq(v___x_300_, v___x_301_);
lean_dec(v___x_301_);
lean_dec(v___x_300_);
if (v___x_302_ == 0)
{
lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_303_ = lean_box(v___x_302_);
v___x_304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_304_, 0, v___x_303_);
return v___x_304_;
}
else
{
lean_object* v___x_305_; uint8_t v_transparency_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v_levels_309_; lean_object* v_type_u2081_310_; lean_object* v_type_u2082_311_; uint8_t v___x_312_; uint8_t v___x_313_; 
v___x_305_ = l_Lean_Meta_Context_config(v_a_277_);
v_transparency_306_ = lean_ctor_get_uint8(v___x_305_, 9);
lean_dec_ref(v___x_305_);
v___x_307_ = l_Lean_ConstantInfo_levelParams(v_decl_u2081_275_);
v___x_308_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq___closed__0));
v_levels_309_ = l_List_mapIdx_go___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq_spec__0(v___x_307_, v___x_308_);
lean_dec(v___x_307_);
lean_inc(v_levels_309_);
v_type_u2081_310_ = l_Lean_ConstantInfo_instantiateTypeLevelParams(v_decl_u2081_275_, v_levels_309_);
v_type_u2082_311_ = l_Lean_ConstantInfo_instantiateTypeLevelParams(v_decl_u2082_276_, v_levels_309_);
v___x_312_ = 2;
v___x_313_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_306_, v___x_312_);
if (v___x_313_ == 0)
{
lean_object* v_keyedConfig_314_; uint8_t v_trackZetaDelta_315_; lean_object* v_zetaDeltaSet_316_; lean_object* v_lctx_317_; lean_object* v_localInstances_318_; lean_object* v_defEqCtx_x3f_319_; lean_object* v_synthPendingDepth_320_; lean_object* v_customCanUnfoldPredicate_x3f_321_; uint8_t v_univApprox_322_; uint8_t v_inTypeClassResolution_323_; uint8_t v_cacheInferType_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; 
v_keyedConfig_314_ = lean_ctor_get(v_a_277_, 0);
v_trackZetaDelta_315_ = lean_ctor_get_uint8(v_a_277_, sizeof(void*)*7);
v_zetaDeltaSet_316_ = lean_ctor_get(v_a_277_, 1);
v_lctx_317_ = lean_ctor_get(v_a_277_, 2);
v_localInstances_318_ = lean_ctor_get(v_a_277_, 3);
v_defEqCtx_x3f_319_ = lean_ctor_get(v_a_277_, 4);
v_synthPendingDepth_320_ = lean_ctor_get(v_a_277_, 5);
v_customCanUnfoldPredicate_x3f_321_ = lean_ctor_get(v_a_277_, 6);
v_univApprox_322_ = lean_ctor_get_uint8(v_a_277_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_323_ = lean_ctor_get_uint8(v_a_277_, sizeof(void*)*7 + 2);
v_cacheInferType_324_ = lean_ctor_get_uint8(v_a_277_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_314_);
v___x_325_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_312_, v_keyedConfig_314_);
lean_inc(v_customCanUnfoldPredicate_x3f_321_);
lean_inc(v_synthPendingDepth_320_);
lean_inc(v_defEqCtx_x3f_319_);
lean_inc_ref(v_localInstances_318_);
lean_inc_ref(v_lctx_317_);
lean_inc(v_zetaDeltaSet_316_);
v___x_326_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_326_, 0, v___x_325_);
lean_ctor_set(v___x_326_, 1, v_zetaDeltaSet_316_);
lean_ctor_set(v___x_326_, 2, v_lctx_317_);
lean_ctor_set(v___x_326_, 3, v_localInstances_318_);
lean_ctor_set(v___x_326_, 4, v_defEqCtx_x3f_319_);
lean_ctor_set(v___x_326_, 5, v_synthPendingDepth_320_);
lean_ctor_set(v___x_326_, 6, v_customCanUnfoldPredicate_x3f_321_);
lean_ctor_set_uint8(v___x_326_, sizeof(void*)*7, v_trackZetaDelta_315_);
lean_ctor_set_uint8(v___x_326_, sizeof(void*)*7 + 1, v_univApprox_322_);
lean_ctor_set_uint8(v___x_326_, sizeof(void*)*7 + 2, v_inTypeClassResolution_323_);
lean_ctor_set_uint8(v___x_326_, sizeof(void*)*7 + 3, v_cacheInferType_324_);
v___x_327_ = l_Lean_Meta_isExprDefEqGuarded(v_type_u2081_310_, v_type_u2082_311_, v___x_326_, v_a_278_, v_a_279_, v_a_280_);
lean_dec_ref_known(v___x_326_, 7);
v___y_283_ = v___x_327_;
goto v___jp_282_;
}
else
{
lean_object* v___x_328_; 
v___x_328_ = l_Lean_Meta_isExprDefEqGuarded(v_type_u2081_310_, v_type_u2082_311_, v_a_277_, v_a_278_, v_a_279_, v_a_280_);
v___y_283_ = v___x_328_;
goto v___jp_282_;
}
}
v___jp_282_:
{
if (lean_obj_tag(v___y_283_) == 0)
{
lean_object* v_a_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_291_; 
v_a_284_ = lean_ctor_get(v___y_283_, 0);
v_isSharedCheck_291_ = !lean_is_exclusive(v___y_283_);
if (v_isSharedCheck_291_ == 0)
{
v___x_286_ = v___y_283_;
v_isShared_287_ = v_isSharedCheck_291_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_a_284_);
lean_dec(v___y_283_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_291_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
lean_object* v___x_289_; 
if (v_isShared_287_ == 0)
{
v___x_289_ = v___x_286_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v_a_284_);
v___x_289_ = v_reuseFailAlloc_290_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
return v___x_289_;
}
}
}
else
{
lean_object* v_a_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_299_; 
v_a_292_ = lean_ctor_get(v___y_283_, 0);
v_isSharedCheck_299_ = !lean_is_exclusive(v___y_283_);
if (v_isSharedCheck_299_ == 0)
{
v___x_294_ = v___y_283_;
v_isShared_295_ = v_isSharedCheck_299_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_a_292_);
lean_dec(v___y_283_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_299_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
lean_object* v___x_297_; 
if (v_isShared_295_ == 0)
{
v___x_297_ = v___x_294_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v_a_292_);
v___x_297_ = v_reuseFailAlloc_298_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
return v___x_297_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq___boxed(lean_object* v_decl_u2081_329_, lean_object* v_decl_u2082_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq(v_decl_u2081_329_, v_decl_u2082_330_, v_a_331_, v_a_332_, v_a_333_, v_a_334_);
lean_dec(v_a_334_);
lean_dec_ref(v_a_333_);
lean_dec(v_a_332_);
lean_dec_ref(v_a_331_);
lean_dec_ref(v_decl_u2082_330_);
lean_dec_ref(v_decl_u2081_329_);
return v_res_336_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4(lean_object* v_opts_337_, lean_object* v_opt_338_){
_start:
{
lean_object* v_name_339_; lean_object* v_defValue_340_; lean_object* v_map_341_; lean_object* v___x_342_; 
v_name_339_ = lean_ctor_get(v_opt_338_, 0);
v_defValue_340_ = lean_ctor_get(v_opt_338_, 1);
v_map_341_ = lean_ctor_get(v_opts_337_, 0);
v___x_342_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_341_, v_name_339_);
if (lean_obj_tag(v___x_342_) == 0)
{
uint8_t v___x_343_; 
v___x_343_ = lean_unbox(v_defValue_340_);
return v___x_343_;
}
else
{
lean_object* v_val_344_; 
v_val_344_ = lean_ctor_get(v___x_342_, 0);
lean_inc(v_val_344_);
lean_dec_ref_known(v___x_342_, 1);
if (lean_obj_tag(v_val_344_) == 1)
{
uint8_t v_v_345_; 
v_v_345_ = lean_ctor_get_uint8(v_val_344_, 0);
lean_dec_ref_known(v_val_344_, 0);
return v_v_345_;
}
else
{
uint8_t v___x_346_; 
lean_dec(v_val_344_);
v___x_346_ = lean_unbox(v_defValue_340_);
return v___x_346_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4___boxed(lean_object* v_opts_347_, lean_object* v_opt_348_){
_start:
{
uint8_t v_res_349_; lean_object* v_r_350_; 
v_res_349_ = l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4(v_opts_347_, v_opt_348_);
lean_dec_ref(v_opt_348_);
lean_dec_ref(v_opts_347_);
v_r_350_ = lean_box(v_res_349_);
return v_r_350_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6(lean_object* v_x_351_, lean_object* v_x_352_){
_start:
{
if (lean_obj_tag(v_x_351_) == 0)
{
if (lean_obj_tag(v_x_352_) == 0)
{
uint8_t v___x_353_; 
v___x_353_ = 1;
return v___x_353_;
}
else
{
uint8_t v___x_354_; 
v___x_354_ = 0;
return v___x_354_;
}
}
else
{
if (lean_obj_tag(v_x_352_) == 0)
{
uint8_t v___x_355_; 
v___x_355_ = 0;
return v___x_355_;
}
else
{
lean_object* v_val_356_; lean_object* v_val_357_; uint8_t v___x_358_; 
v_val_356_ = lean_ctor_get(v_x_351_, 0);
v_val_357_ = lean_ctor_get(v_x_352_, 0);
v___x_358_ = lean_name_eq(v_val_356_, v_val_357_);
return v___x_358_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6___boxed(lean_object* v_x_359_, lean_object* v_x_360_){
_start:
{
uint8_t v_res_361_; lean_object* v_r_362_; 
v_res_361_ = l_instBEqOption_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6(v_x_359_, v_x_360_);
lean_dec(v_x_360_);
lean_dec(v_x_359_);
v_r_362_ = lean_box(v_res_361_);
return v_r_362_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(lean_object* v_x_364_){
_start:
{
lean_object* v___x_365_; 
v___x_365_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0___closed__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed(lean_object* v_x_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(v_x_366_);
lean_dec_ref(v_x_366_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(lean_object* v_x_368_, lean_object* v_x_369_, lean_object* v_x_370_, lean_object* v___y_371_){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_373_ = lean_box(0);
v___x_374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_374_, 0, v___x_373_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed(lean_object* v_x_375_, lean_object* v_x_376_, lean_object* v_x_377_, lean_object* v___y_378_, lean_object* v___y_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(v_x_375_, v_x_376_, v_x_377_, v___y_378_);
lean_dec(v___y_378_);
lean_dec_ref(v_x_377_);
lean_dec_ref(v_x_376_);
lean_dec(v_x_375_);
return v_res_380_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(uint8_t v___x_381_, lean_object* v_env_382_, lean_object* v_n_383_, lean_object* v_x_384_){
_start:
{
uint8_t v___x_385_; 
v___x_385_ = l_Lean_Environment_contains(v_env_382_, v_n_383_, v___x_381_);
return v___x_385_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed(lean_object* v___x_386_, lean_object* v_env_387_, lean_object* v_n_388_, lean_object* v_x_389_){
_start:
{
uint8_t v___x_44913__boxed_390_; uint8_t v_res_391_; lean_object* v_r_392_; 
v___x_44913__boxed_390_ = lean_unbox(v___x_386_);
v_res_391_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(v___x_44913__boxed_390_, v_env_387_, v_n_388_, v_x_389_);
lean_dec_ref(v_x_389_);
v_r_392_ = lean_box(v_res_391_);
return v_r_392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__48___redArg(lean_object* v_opt_393_, lean_object* v___y_394_){
_start:
{
lean_object* v___x_396_; uint8_t v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_396_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_394_);
v___x_397_ = l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4(v___x_396_, v_opt_393_);
lean_dec_ref(v___x_396_);
v___x_398_ = lean_box(v___x_397_);
v___x_399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_399_, 0, v___x_398_);
v___x_400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_400_, 0, v___x_399_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__48___redArg___boxed(lean_object* v_opt_401_, lean_object* v___y_402_, lean_object* v___y_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__48___redArg(v_opt_401_, v___y_402_);
lean_dec_ref(v___y_402_);
lean_dec_ref(v_opt_401_);
return v_res_404_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0(uint8_t v_suppressElabErrors_413_, lean_object* v_x_414_){
_start:
{
if (lean_obj_tag(v_x_414_) == 1)
{
lean_object* v_pre_415_; 
v_pre_415_ = lean_ctor_get(v_x_414_, 0);
switch(lean_obj_tag(v_pre_415_))
{
case 1:
{
lean_object* v_pre_416_; 
v_pre_416_ = lean_ctor_get(v_pre_415_, 0);
switch(lean_obj_tag(v_pre_416_))
{
case 0:
{
lean_object* v_str_417_; lean_object* v_str_418_; lean_object* v___x_419_; uint8_t v___x_420_; 
v_str_417_ = lean_ctor_get(v_x_414_, 1);
v_str_418_ = lean_ctor_get(v_pre_415_, 1);
v___x_419_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__0));
v___x_420_ = lean_string_dec_eq(v_str_418_, v___x_419_);
if (v___x_420_ == 0)
{
lean_object* v___x_421_; uint8_t v___x_422_; 
v___x_421_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__1));
v___x_422_ = lean_string_dec_eq(v_str_418_, v___x_421_);
if (v___x_422_ == 0)
{
return v___x_422_;
}
else
{
lean_object* v___x_423_; uint8_t v___x_424_; 
v___x_423_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__2));
v___x_424_ = lean_string_dec_eq(v_str_417_, v___x_423_);
if (v___x_424_ == 0)
{
return v___x_424_;
}
else
{
return v_suppressElabErrors_413_;
}
}
}
else
{
lean_object* v___x_425_; uint8_t v___x_426_; 
v___x_425_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__3));
v___x_426_ = lean_string_dec_eq(v_str_417_, v___x_425_);
if (v___x_426_ == 0)
{
return v___x_426_;
}
else
{
return v_suppressElabErrors_413_;
}
}
}
case 1:
{
lean_object* v_pre_427_; 
v_pre_427_ = lean_ctor_get(v_pre_416_, 0);
if (lean_obj_tag(v_pre_427_) == 0)
{
lean_object* v_str_428_; lean_object* v_str_429_; lean_object* v_str_430_; lean_object* v___x_431_; uint8_t v___x_432_; 
v_str_428_ = lean_ctor_get(v_x_414_, 1);
v_str_429_ = lean_ctor_get(v_pre_415_, 1);
v_str_430_ = lean_ctor_get(v_pre_416_, 1);
v___x_431_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__4));
v___x_432_ = lean_string_dec_eq(v_str_430_, v___x_431_);
if (v___x_432_ == 0)
{
return v___x_432_;
}
else
{
lean_object* v___x_433_; uint8_t v___x_434_; 
v___x_433_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__5));
v___x_434_ = lean_string_dec_eq(v_str_429_, v___x_433_);
if (v___x_434_ == 0)
{
return v___x_434_;
}
else
{
lean_object* v___x_435_; uint8_t v___x_436_; 
v___x_435_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__6));
v___x_436_ = lean_string_dec_eq(v_str_428_, v___x_435_);
if (v___x_436_ == 0)
{
return v___x_436_;
}
else
{
return v_suppressElabErrors_413_;
}
}
}
}
else
{
uint8_t v___x_437_; 
v___x_437_ = 0;
return v___x_437_;
}
}
default: 
{
uint8_t v___x_438_; 
v___x_438_ = 0;
return v___x_438_;
}
}
}
case 0:
{
lean_object* v_str_439_; lean_object* v___x_440_; uint8_t v___x_441_; 
v_str_439_ = lean_ctor_get(v_x_414_, 1);
v___x_440_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___closed__7));
v___x_441_ = lean_string_dec_eq(v_str_439_, v___x_440_);
if (v___x_441_ == 0)
{
return v___x_441_;
}
else
{
return v_suppressElabErrors_413_;
}
}
default: 
{
uint8_t v___x_442_; 
v___x_442_ = 0;
return v___x_442_;
}
}
}
else
{
uint8_t v___x_443_; 
v___x_443_ = 0;
return v___x_443_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___boxed(lean_object* v_suppressElabErrors_444_, lean_object* v_x_445_){
_start:
{
uint8_t v_suppressElabErrors_boxed_446_; uint8_t v_res_447_; lean_object* v_r_448_; 
v_suppressElabErrors_boxed_446_ = lean_unbox(v_suppressElabErrors_444_);
v_res_447_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0(v_suppressElabErrors_boxed_446_, v_x_445_);
lean_dec(v_x_445_);
v_r_448_ = lean_box(v_res_447_);
return v_r_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43_spec__47_spec__49_spec__52(lean_object* v_msgData_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_){
_start:
{
lean_object* v___x_455_; lean_object* v_env_456_; uint8_t v___x_457_; lean_object* v_env_458_; lean_object* v___x_459_; lean_object* v_toCold_460_; lean_object* v_mctx_461_; lean_object* v_lctx_462_; lean_object* v_options_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_455_ = lean_st_ref_get(v___y_453_);
v_env_456_ = lean_ctor_get(v___x_455_, 0);
lean_inc_ref(v_env_456_);
lean_dec(v___x_455_);
v___x_457_ = 0;
v_env_458_ = l_Lean_Environment_setRecordingDeps(v_env_456_, v___x_457_);
v___x_459_ = lean_st_ref_get(v___y_451_);
v_toCold_460_ = lean_ctor_get(v___y_452_, 0);
v_mctx_461_ = lean_ctor_get(v___x_459_, 0);
lean_inc_ref(v_mctx_461_);
lean_dec(v___x_459_);
v_lctx_462_ = lean_ctor_get(v___y_450_, 2);
v_options_463_ = lean_ctor_get(v_toCold_460_, 2);
lean_inc_ref(v_options_463_);
lean_inc_ref(v_lctx_462_);
v___x_464_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_464_, 0, v_env_458_);
lean_ctor_set(v___x_464_, 1, v_mctx_461_);
lean_ctor_set(v___x_464_, 2, v_lctx_462_);
lean_ctor_set(v___x_464_, 3, v_options_463_);
v___x_465_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_465_, 0, v___x_464_);
lean_ctor_set(v___x_465_, 1, v_msgData_449_);
v___x_466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_466_, 0, v___x_465_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43_spec__47_spec__49_spec__52___boxed(lean_object* v_msgData_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43_spec__47_spec__49_spec__52(v_msgData_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_);
lean_dec(v___y_471_);
lean_dec_ref(v___y_470_);
lean_dec(v___y_469_);
lean_dec_ref(v___y_468_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51_spec__53(lean_object* v_ref_477_, lean_object* v_msgData_478_, uint8_t v_severity_479_, uint8_t v_isSilent_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_){
_start:
{
lean_object* v_a_487_; lean_object* v___y_491_; lean_object* v___y_492_; lean_object* v___y_493_; lean_object* v___y_494_; uint8_t v___y_495_; uint8_t v___y_496_; lean_object* v___y_497_; lean_object* v_toCold_498_; lean_object* v___y_499_; lean_object* v___y_527_; lean_object* v___y_528_; lean_object* v___y_529_; uint8_t v___y_530_; lean_object* v___y_531_; uint8_t v___y_532_; uint8_t v___y_533_; lean_object* v___y_534_; lean_object* v___y_553_; uint8_t v___y_554_; lean_object* v___y_555_; lean_object* v___y_556_; uint8_t v___y_557_; uint8_t v___y_558_; lean_object* v___y_559_; uint8_t v___y_563_; uint8_t v___y_564_; uint8_t v___x_574_; uint8_t v___y_576_; uint8_t v___x_582_; 
v___x_574_ = 2;
v___x_582_ = l_Lean_instBEqMessageSeverity_beq(v_severity_479_, v___x_574_);
if (v___x_582_ == 0)
{
v___y_576_ = v___x_582_;
goto v___jp_575_;
}
else
{
uint8_t v___x_583_; 
lean_inc_ref(v_msgData_478_);
v___x_583_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_478_);
if (v___x_583_ == 0)
{
v___y_576_ = v___x_583_;
goto v___jp_575_;
}
else
{
lean_object* v___x_584_; lean_object* v___x_585_; 
lean_dec_ref(v_msgData_478_);
v___x_584_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51_spec__53___closed__1));
v___x_585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_585_, 0, v___x_584_);
return v___x_585_;
}
}
v___jp_486_:
{
lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_488_, 0, v_a_487_);
v___x_489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_489_, 0, v___x_488_);
return v___x_489_;
}
v___jp_490_:
{
lean_object* v_currNamespace_500_; lean_object* v_openDecls_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v_env_506_; lean_object* v_nextMacroScope_507_; lean_object* v_ngen_508_; lean_object* v_auxDeclNGen_509_; lean_object* v_traceState_510_; lean_object* v_cache_511_; lean_object* v_recordedDeps_512_; lean_object* v_messages_513_; lean_object* v_infoState_514_; lean_object* v_snapshotTasks_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_525_; 
v_currNamespace_500_ = lean_ctor_get(v_toCold_498_, 4);
v_openDecls_501_ = lean_ctor_get(v_toCold_498_, 5);
lean_inc(v_openDecls_501_);
lean_inc(v_currNamespace_500_);
v___x_502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_502_, 0, v_currNamespace_500_);
lean_ctor_set(v___x_502_, 1, v_openDecls_501_);
v___x_503_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_503_, 0, v___x_502_);
lean_ctor_set(v___x_503_, 1, v___y_493_);
lean_inc_ref(v___y_497_);
lean_inc_ref(v___y_494_);
v___x_504_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_504_, 0, v___y_494_);
lean_ctor_set(v___x_504_, 1, v___y_492_);
lean_ctor_set(v___x_504_, 2, v___y_491_);
lean_ctor_set(v___x_504_, 3, v___y_497_);
lean_ctor_set(v___x_504_, 4, v___x_503_);
lean_ctor_set_uint8(v___x_504_, sizeof(void*)*5, v___y_495_);
lean_ctor_set_uint8(v___x_504_, sizeof(void*)*5 + 1, v___y_496_);
lean_ctor_set_uint8(v___x_504_, sizeof(void*)*5 + 2, v_isSilent_480_);
v___x_505_ = lean_st_ref_take(v___y_499_);
v_env_506_ = lean_ctor_get(v___x_505_, 0);
v_nextMacroScope_507_ = lean_ctor_get(v___x_505_, 1);
v_ngen_508_ = lean_ctor_get(v___x_505_, 2);
v_auxDeclNGen_509_ = lean_ctor_get(v___x_505_, 3);
v_traceState_510_ = lean_ctor_get(v___x_505_, 4);
v_cache_511_ = lean_ctor_get(v___x_505_, 5);
v_recordedDeps_512_ = lean_ctor_get(v___x_505_, 6);
v_messages_513_ = lean_ctor_get(v___x_505_, 7);
v_infoState_514_ = lean_ctor_get(v___x_505_, 8);
v_snapshotTasks_515_ = lean_ctor_get(v___x_505_, 9);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_525_ == 0)
{
v___x_517_ = v___x_505_;
v_isShared_518_ = v_isSharedCheck_525_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_snapshotTasks_515_);
lean_inc(v_infoState_514_);
lean_inc(v_messages_513_);
lean_inc(v_recordedDeps_512_);
lean_inc(v_cache_511_);
lean_inc(v_traceState_510_);
lean_inc(v_auxDeclNGen_509_);
lean_inc(v_ngen_508_);
lean_inc(v_nextMacroScope_507_);
lean_inc(v_env_506_);
lean_dec(v___x_505_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_525_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_522_; 
v___x_519_ = lean_box(0);
v___x_520_ = l_Lean_MessageLog_add(v___x_504_, v_messages_513_);
if (v_isShared_518_ == 0)
{
lean_ctor_set(v___x_517_, 7, v___x_520_);
v___x_522_ = v___x_517_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v_env_506_);
lean_ctor_set(v_reuseFailAlloc_524_, 1, v_nextMacroScope_507_);
lean_ctor_set(v_reuseFailAlloc_524_, 2, v_ngen_508_);
lean_ctor_set(v_reuseFailAlloc_524_, 3, v_auxDeclNGen_509_);
lean_ctor_set(v_reuseFailAlloc_524_, 4, v_traceState_510_);
lean_ctor_set(v_reuseFailAlloc_524_, 5, v_cache_511_);
lean_ctor_set(v_reuseFailAlloc_524_, 6, v_recordedDeps_512_);
lean_ctor_set(v_reuseFailAlloc_524_, 7, v___x_520_);
lean_ctor_set(v_reuseFailAlloc_524_, 8, v_infoState_514_);
lean_ctor_set(v_reuseFailAlloc_524_, 9, v_snapshotTasks_515_);
v___x_522_ = v_reuseFailAlloc_524_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
lean_object* v___x_523_; 
v___x_523_ = lean_st_ref_put(v___y_499_, v___x_522_);
v_a_487_ = v___x_519_;
goto v___jp_486_;
}
}
}
v___jp_526_:
{
lean_object* v_fileName_535_; lean_object* v_fileMap_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v_a_539_; lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_551_; 
v_fileName_535_ = lean_ctor_get(v___y_531_, 0);
v_fileMap_536_ = lean_ctor_get(v___y_531_, 1);
v___x_537_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_478_);
v___x_538_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43_spec__47_spec__49_spec__52(v___x_537_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
v_a_539_ = lean_ctor_get(v___x_538_, 0);
v_isSharedCheck_551_ = !lean_is_exclusive(v___x_538_);
if (v_isSharedCheck_551_ == 0)
{
v___x_541_ = v___x_538_;
v_isShared_542_ = v_isSharedCheck_551_;
goto v_resetjp_540_;
}
else
{
lean_inc(v_a_539_);
lean_dec(v___x_538_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_551_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_546_; 
lean_inc_ref_n(v_fileMap_536_, 2);
v___x_543_ = l_Lean_FileMap_toPosition(v_fileMap_536_, v___y_529_);
lean_dec(v___y_529_);
v___x_544_ = l_Lean_FileMap_toPosition(v_fileMap_536_, v___y_534_);
lean_dec(v___y_534_);
if (v_isShared_542_ == 0)
{
lean_ctor_set_tag(v___x_541_, 1);
lean_ctor_set(v___x_541_, 0, v___x_544_);
v___x_546_ = v___x_541_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v___x_544_);
v___x_546_ = v_reuseFailAlloc_550_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
lean_object* v___x_547_; 
v___x_547_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51_spec__53___closed__0));
if (v___y_532_ == 0)
{
lean_dec_ref(v___y_528_);
v___y_491_ = v___x_546_;
v___y_492_ = v___x_543_;
v___y_493_ = v_a_539_;
v___y_494_ = v_fileName_535_;
v___y_495_ = v___y_530_;
v___y_496_ = v___y_533_;
v___y_497_ = v___x_547_;
v_toCold_498_ = v___y_527_;
v___y_499_ = v___y_484_;
goto v___jp_490_;
}
else
{
uint8_t v___x_548_; 
lean_inc(v_a_539_);
v___x_548_ = l_Lean_MessageData_hasTag(v___y_528_, v_a_539_);
if (v___x_548_ == 0)
{
lean_object* v___x_549_; 
lean_dec_ref(v___x_546_);
lean_dec_ref(v___x_543_);
lean_dec(v_a_539_);
v___x_549_ = lean_box(0);
v_a_487_ = v___x_549_;
goto v___jp_486_;
}
else
{
v___y_491_ = v___x_546_;
v___y_492_ = v___x_543_;
v___y_493_ = v_a_539_;
v___y_494_ = v_fileName_535_;
v___y_495_ = v___y_530_;
v___y_496_ = v___y_533_;
v___y_497_ = v___x_547_;
v_toCold_498_ = v___y_527_;
v___y_499_ = v___y_484_;
goto v___jp_490_;
}
}
}
}
}
v___jp_552_:
{
lean_object* v___x_560_; 
v___x_560_ = l_Lean_Syntax_getTailPos_x3f(v___y_556_, v___y_557_);
lean_dec(v___y_556_);
if (lean_obj_tag(v___x_560_) == 0)
{
lean_inc(v___y_559_);
v___y_527_ = v___y_553_;
v___y_528_ = v___y_555_;
v___y_529_ = v___y_559_;
v___y_530_ = v___y_557_;
v___y_531_ = v___y_553_;
v___y_532_ = v___y_554_;
v___y_533_ = v___y_558_;
v___y_534_ = v___y_559_;
goto v___jp_526_;
}
else
{
lean_object* v_val_561_; 
v_val_561_ = lean_ctor_get(v___x_560_, 0);
lean_inc(v_val_561_);
lean_dec_ref_known(v___x_560_, 1);
v___y_527_ = v___y_553_;
v___y_528_ = v___y_555_;
v___y_529_ = v___y_559_;
v___y_530_ = v___y_557_;
v___y_531_ = v___y_553_;
v___y_532_ = v___y_554_;
v___y_533_ = v___y_558_;
v___y_534_ = v_val_561_;
goto v___jp_526_;
}
}
v___jp_562_:
{
lean_object* v_toCold_565_; lean_object* v_ref_566_; uint8_t v_suppressElabErrors_567_; lean_object* v___x_568_; lean_object* v___f_569_; lean_object* v_ref_570_; lean_object* v___x_571_; 
v_toCold_565_ = lean_ctor_get(v___y_483_, 0);
v_ref_566_ = lean_ctor_get(v___y_483_, 2);
v_suppressElabErrors_567_ = lean_ctor_get_uint8(v___y_483_, sizeof(void*)*3 + 2);
v___x_568_ = lean_box(v_suppressElabErrors_567_);
v___f_569_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___boxed), 2, 1);
lean_closure_set(v___f_569_, 0, v___x_568_);
v_ref_570_ = l_Lean_replaceRef(v_ref_477_, v_ref_566_);
v___x_571_ = l_Lean_Syntax_getPos_x3f(v_ref_570_, v___y_563_);
if (lean_obj_tag(v___x_571_) == 0)
{
lean_object* v___x_572_; 
v___x_572_ = lean_unsigned_to_nat(0u);
v___y_553_ = v_toCold_565_;
v___y_554_ = v_suppressElabErrors_567_;
v___y_555_ = v___f_569_;
v___y_556_ = v_ref_570_;
v___y_557_ = v___y_563_;
v___y_558_ = v___y_564_;
v___y_559_ = v___x_572_;
goto v___jp_552_;
}
else
{
lean_object* v_val_573_; 
v_val_573_ = lean_ctor_get(v___x_571_, 0);
lean_inc(v_val_573_);
lean_dec_ref_known(v___x_571_, 1);
v___y_553_ = v_toCold_565_;
v___y_554_ = v_suppressElabErrors_567_;
v___y_555_ = v___f_569_;
v___y_556_ = v_ref_570_;
v___y_557_ = v___y_563_;
v___y_558_ = v___y_564_;
v___y_559_ = v_val_573_;
goto v___jp_552_;
}
}
v___jp_575_:
{
uint8_t v___x_577_; uint8_t v___x_578_; 
v___x_577_ = 1;
v___x_578_ = l_Lean_instBEqMessageSeverity_beq(v_severity_479_, v___x_577_);
if (v___x_578_ == 0)
{
v___y_563_ = v___y_576_;
v___y_564_ = v_severity_479_;
goto v___jp_562_;
}
else
{
lean_object* v___x_579_; lean_object* v___x_580_; uint8_t v___x_581_; 
v___x_579_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_483_);
v___x_580_ = l_Lean_warningAsError;
v___x_581_ = l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4(v___x_579_, v___x_580_);
lean_dec_ref(v___x_579_);
if (v___x_581_ == 0)
{
v___y_563_ = v___y_576_;
v___y_564_ = v_severity_479_;
goto v___jp_562_;
}
else
{
v___y_563_ = v___y_576_;
v___y_564_ = v___x_574_;
goto v___jp_562_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51_spec__53___boxed(lean_object* v_ref_586_, lean_object* v_msgData_587_, lean_object* v_severity_588_, lean_object* v_isSilent_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_){
_start:
{
uint8_t v_severity_boxed_595_; uint8_t v_isSilent_boxed_596_; lean_object* v_res_597_; 
v_severity_boxed_595_ = lean_unbox(v_severity_588_);
v_isSilent_boxed_596_ = lean_unbox(v_isSilent_589_);
v_res_597_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51_spec__53(v_ref_586_, v_msgData_587_, v_severity_boxed_595_, v_isSilent_boxed_596_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
lean_dec(v___y_593_);
lean_dec_ref(v___y_592_);
lean_dec(v___y_591_);
lean_dec_ref(v___y_590_);
lean_dec(v_ref_586_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51(lean_object* v_msgData_598_, uint8_t v_severity_599_, uint8_t v_isSilent_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_){
_start:
{
lean_object* v_ref_606_; lean_object* v___x_607_; 
v_ref_606_ = lean_ctor_get(v___y_603_, 2);
v___x_607_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51_spec__53(v_ref_606_, v_msgData_598_, v_severity_599_, v_isSilent_600_, v___y_601_, v___y_602_, v___y_603_, v___y_604_);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51___boxed(lean_object* v_msgData_608_, lean_object* v_severity_609_, lean_object* v_isSilent_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_){
_start:
{
uint8_t v_severity_boxed_616_; uint8_t v_isSilent_boxed_617_; lean_object* v_res_618_; 
v_severity_boxed_616_ = lean_unbox(v_severity_609_);
v_isSilent_boxed_617_ = lean_unbox(v_isSilent_610_);
v_res_618_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51(v_msgData_608_, v_severity_boxed_616_, v_isSilent_boxed_617_, v___y_611_, v___y_612_, v___y_613_, v___y_614_);
lean_dec(v___y_614_);
lean_dec_ref(v___y_613_);
lean_dec(v___y_612_);
lean_dec_ref(v___y_611_);
return v_res_618_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49(lean_object* v_msgData_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_){
_start:
{
uint8_t v___x_625_; uint8_t v___x_626_; lean_object* v___x_627_; 
v___x_625_ = 1;
v___x_626_ = 0;
v___x_627_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51(v_msgData_619_, v___x_625_, v___x_626_, v___y_620_, v___y_621_, v___y_622_, v___y_623_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49___boxed(lean_object* v_msgData_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_){
_start:
{
lean_object* v_res_634_; 
v_res_634_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49(v_msgData_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_);
lean_dec(v___y_632_);
lean_dec_ref(v___y_631_);
lean_dec(v___y_630_);
lean_dec_ref(v___y_629_);
return v_res_634_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__1(void){
_start:
{
lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_636_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__0));
v___x_637_ = l_Lean_stringToMessageData(v___x_636_);
return v___x_637_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__3(void){
_start:
{
lean_object* v___x_639_; lean_object* v___x_640_; 
v___x_639_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__2));
v___x_640_ = l_Lean_stringToMessageData(v___x_639_);
return v___x_640_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44(lean_object* v_id_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_){
_start:
{
lean_object* v___x_647_; lean_object* v_env_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v_a_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_671_; 
v___x_647_ = lean_st_ref_get(v___y_645_);
v_env_648_ = lean_ctor_get(v___x_647_, 0);
lean_inc_ref(v_env_648_);
lean_dec(v___x_647_);
v___x_649_ = l_Lean_ResolveName_backward_privateInPublic_warn;
v___x_650_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__48___redArg(v___x_649_, v___y_644_);
v_a_651_ = lean_ctor_get(v___x_650_, 0);
v_isSharedCheck_671_ = !lean_is_exclusive(v___x_650_);
if (v_isSharedCheck_671_ == 0)
{
v___x_653_ = v___x_650_;
v_isShared_654_ = v_isSharedCheck_671_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_a_651_);
lean_dec(v___x_650_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_671_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
uint8_t v_isExporting_660_; 
v_isExporting_660_ = lean_ctor_get_uint8(v_env_648_, sizeof(void*)*13);
lean_dec_ref(v_env_648_);
if (v_isExporting_660_ == 0)
{
lean_dec(v_a_651_);
lean_dec(v_id_641_);
goto v___jp_655_;
}
else
{
lean_object* v_val_661_; uint8_t v___x_662_; 
v_val_661_ = lean_ctor_get(v_a_651_, 0);
lean_inc(v_val_661_);
lean_dec(v_a_651_);
v___x_662_ = l_Lean_isPrivateName(v_id_641_);
if (v___x_662_ == 0)
{
lean_dec(v_val_661_);
lean_dec(v_id_641_);
goto v___jp_655_;
}
else
{
uint8_t v___x_663_; 
v___x_663_ = lean_unbox(v_val_661_);
lean_dec(v_val_661_);
if (v___x_663_ == 0)
{
lean_dec(v_id_641_);
goto v___jp_655_;
}
else
{
lean_object* v___x_664_; uint8_t v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
lean_del_object(v___x_653_);
v___x_664_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__1, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__1_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__1);
v___x_665_ = 0;
v___x_666_ = l_Lean_MessageData_ofConstName(v_id_641_, v___x_665_);
v___x_667_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_667_, 0, v___x_664_);
lean_ctor_set(v___x_667_, 1, v___x_666_);
v___x_668_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__3, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__3_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__3);
v___x_669_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_669_, 0, v___x_667_);
lean_ctor_set(v___x_669_, 1, v___x_668_);
v___x_670_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49(v___x_669_, v___y_642_, v___y_643_, v___y_644_, v___y_645_);
return v___x_670_;
}
}
}
v___jp_655_:
{
lean_object* v___x_656_; lean_object* v___x_658_; 
v___x_656_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51_spec__53___closed__1));
if (v_isShared_654_ == 0)
{
lean_ctor_set(v___x_653_, 0, v___x_656_);
v___x_658_ = v___x_653_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v___x_656_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___boxed(lean_object* v_id_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_){
_start:
{
lean_object* v_res_678_; 
v_res_678_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44(v_id_672_, v___y_673_, v___y_674_, v___y_675_, v___y_676_);
lean_dec(v___y_676_);
lean_dec_ref(v___y_675_);
lean_dec(v___y_674_);
lean_dec_ref(v___y_673_);
return v_res_678_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__35(lean_object* v_x_679_){
_start:
{
if (lean_obj_tag(v_x_679_) == 0)
{
lean_object* v___x_680_; 
v___x_680_ = lean_box(0);
return v___x_680_;
}
else
{
lean_object* v_head_681_; lean_object* v_tail_682_; lean_object* v_fst_683_; uint8_t v___x_684_; 
v_head_681_ = lean_ctor_get(v_x_679_, 0);
v_tail_682_ = lean_ctor_get(v_x_679_, 1);
v_fst_683_ = lean_ctor_get(v_head_681_, 0);
v___x_684_ = l_Lean_isPrivateName(v_fst_683_);
if (v___x_684_ == 0)
{
v_x_679_ = v_tail_682_;
goto _start;
}
else
{
lean_object* v___x_686_; 
lean_inc(v_head_681_);
v___x_686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_686_, 0, v_head_681_);
return v___x_686_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__35___boxed(lean_object* v_x_687_){
_start:
{
lean_object* v_res_688_; 
v_res_688_ = l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__35(v_x_687_);
lean_dec(v_x_687_);
return v_res_688_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37(lean_object* v_id_689_, uint8_t v_enableLog_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_){
_start:
{
lean_object* v___x_696_; lean_object* v_toCold_697_; lean_object* v_env_698_; lean_object* v_currNamespace_699_; lean_object* v_openDecls_700_; lean_object* v___x_701_; lean_object* v_res_702_; lean_object* v___x_706_; 
v___x_696_ = lean_st_ref_get(v___y_694_);
v_toCold_697_ = lean_ctor_get(v___y_693_, 0);
v_env_698_ = lean_ctor_get(v___x_696_, 0);
lean_inc_ref(v_env_698_);
lean_dec(v___x_696_);
v_currNamespace_699_ = lean_ctor_get(v_toCold_697_, 4);
v_openDecls_700_ = lean_ctor_get(v_toCold_697_, 5);
v___x_701_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_693_);
lean_inc(v_openDecls_700_);
lean_inc(v_currNamespace_699_);
v_res_702_ = l_Lean_ResolveName_resolveGlobalName(v_env_698_, v___x_701_, v_currNamespace_699_, v_openDecls_700_, v_id_689_);
lean_dec_ref(v___x_701_);
v___x_706_ = lean_st_ref_get(v___y_694_);
if (v_enableLog_690_ == 0)
{
lean_dec(v___x_706_);
goto v___jp_703_;
}
else
{
lean_object* v_env_707_; uint8_t v_isExporting_708_; 
v_env_707_ = lean_ctor_get(v___x_706_, 0);
lean_inc_ref(v_env_707_);
lean_dec(v___x_706_);
v_isExporting_708_ = lean_ctor_get_uint8(v_env_707_, sizeof(void*)*13);
lean_dec_ref(v_env_707_);
if (v_isExporting_708_ == 0)
{
goto v___jp_703_;
}
else
{
lean_object* v___x_709_; 
v___x_709_ = l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__35(v_res_702_);
if (lean_obj_tag(v___x_709_) == 1)
{
lean_object* v_val_710_; lean_object* v_fst_711_; lean_object* v___x_712_; 
v_val_710_ = lean_ctor_get(v___x_709_, 0);
lean_inc(v_val_710_);
lean_dec_ref_known(v___x_709_, 1);
v_fst_711_ = lean_ctor_get(v_val_710_, 0);
lean_inc(v_fst_711_);
lean_dec(v_val_710_);
v___x_712_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44(v_fst_711_, v___y_691_, v___y_692_, v___y_693_, v___y_694_);
if (lean_obj_tag(v___x_712_) == 0)
{
lean_object* v_a_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_721_; 
v_a_713_ = lean_ctor_get(v___x_712_, 0);
v_isSharedCheck_721_ = !lean_is_exclusive(v___x_712_);
if (v_isSharedCheck_721_ == 0)
{
v___x_715_ = v___x_712_;
v_isShared_716_ = v_isSharedCheck_721_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_a_713_);
lean_dec(v___x_712_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_721_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
if (lean_obj_tag(v_a_713_) == 0)
{
lean_object* v___x_717_; lean_object* v___x_719_; 
lean_dec(v_res_702_);
v___x_717_ = lean_box(0);
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 0, v___x_717_);
v___x_719_ = v___x_715_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v___x_717_);
v___x_719_ = v_reuseFailAlloc_720_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
return v___x_719_;
}
}
else
{
lean_dec_ref_known(v_a_713_, 1);
lean_del_object(v___x_715_);
goto v___jp_703_;
}
}
}
else
{
lean_object* v_a_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_729_; 
lean_dec(v_res_702_);
v_a_722_ = lean_ctor_get(v___x_712_, 0);
v_isSharedCheck_729_ = !lean_is_exclusive(v___x_712_);
if (v_isSharedCheck_729_ == 0)
{
v___x_724_ = v___x_712_;
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_a_722_);
lean_dec(v___x_712_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
lean_object* v___x_727_; 
if (v_isShared_725_ == 0)
{
v___x_727_ = v___x_724_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v_a_722_);
v___x_727_ = v_reuseFailAlloc_728_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
return v___x_727_;
}
}
}
}
else
{
lean_dec(v___x_709_);
goto v___jp_703_;
}
}
}
v___jp_703_:
{
lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_704_, 0, v_res_702_);
v___x_705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_705_, 0, v___x_704_);
return v___x_705_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37___boxed(lean_object* v_id_730_, lean_object* v_enableLog_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_){
_start:
{
uint8_t v_enableLog_boxed_737_; lean_object* v_res_738_; 
v_enableLog_boxed_737_ = lean_unbox(v_enableLog_731_);
v_res_738_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37(v_id_730_, v_enableLog_boxed_737_, v___y_732_, v___y_733_, v___y_734_, v___y_735_);
lean_dec(v___y_735_);
lean_dec_ref(v___y_734_);
lean_dec(v___y_733_);
lean_dec_ref(v___y_732_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23___lam__0(lean_object* v___x_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_){
_start:
{
lean_object* v___x_745_; 
v___x_745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_745_, 0, v___x_739_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23___lam__0___boxed(lean_object* v___x_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_){
_start:
{
lean_object* v_res_752_; 
v_res_752_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23___lam__0(v___x_746_, v___y_747_, v___y_748_, v___y_749_, v___y_750_);
lean_dec(v___y_750_);
lean_dec_ref(v___y_749_);
lean_dec(v___y_748_);
lean_dec_ref(v___y_747_);
return v_res_752_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26(lean_object* v_n_u2080_757_, lean_object* v_filter_758_, lean_object* v_view_x3f_759_, lean_object* v_n_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_){
_start:
{
lean_object* v___y_770_; lean_object* v___y_771_; lean_object* v___y_802_; lean_object* v___y_803_; lean_object* v___y_836_; 
if (lean_obj_tag(v_view_x3f_759_) == 1)
{
lean_object* v_val_863_; lean_object* v_imported_864_; lean_object* v_ctx_865_; lean_object* v_scopes_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_874_; 
v_val_863_ = lean_ctor_get(v_view_x3f_759_, 0);
lean_inc(v_val_863_);
lean_dec_ref_known(v_view_x3f_759_, 1);
v_imported_864_ = lean_ctor_get(v_val_863_, 1);
v_ctx_865_ = lean_ctor_get(v_val_863_, 2);
v_scopes_866_ = lean_ctor_get(v_val_863_, 3);
v_isSharedCheck_874_ = !lean_is_exclusive(v_val_863_);
if (v_isSharedCheck_874_ == 0)
{
lean_object* v_unused_875_; 
v_unused_875_ = lean_ctor_get(v_val_863_, 0);
lean_dec(v_unused_875_);
v___x_868_ = v_val_863_;
v_isShared_869_ = v_isSharedCheck_874_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_scopes_866_);
lean_inc(v_ctx_865_);
lean_inc(v_imported_864_);
lean_dec(v_val_863_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_874_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
lean_object* v___x_871_; 
if (v_isShared_869_ == 0)
{
lean_ctor_set(v___x_868_, 0, v_n_760_);
v___x_871_ = v___x_868_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_n_760_);
lean_ctor_set(v_reuseFailAlloc_873_, 1, v_imported_864_);
lean_ctor_set(v_reuseFailAlloc_873_, 2, v_ctx_865_);
lean_ctor_set(v_reuseFailAlloc_873_, 3, v_scopes_866_);
v___x_871_ = v_reuseFailAlloc_873_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
lean_object* v___x_872_; 
v___x_872_ = l_Lean_MacroScopesView_review(v___x_871_);
v___y_836_ = v___x_872_;
goto v___jp_835_;
}
}
}
else
{
lean_dec(v_view_x3f_759_);
v___y_836_ = v_n_760_;
goto v___jp_835_;
}
v___jp_766_:
{
lean_object* v___x_767_; lean_object* v___x_768_; 
v___x_767_ = lean_box(0);
v___x_768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_768_, 0, v___x_767_);
return v___x_768_;
}
v___jp_769_:
{
lean_object* v___x_772_; 
lean_inc_ref(v___y_771_);
lean_inc(v___y_764_);
lean_inc_ref(v___y_763_);
lean_inc(v___y_762_);
lean_inc_ref(v___y_761_);
v___x_772_ = lean_apply_5(v___y_771_, v___y_761_, v___y_762_, v___y_763_, v___y_764_, lean_box(0));
if (lean_obj_tag(v___x_772_) == 0)
{
lean_object* v_a_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_792_; 
v_a_773_ = lean_ctor_get(v___x_772_, 0);
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_772_);
if (v_isSharedCheck_792_ == 0)
{
v___x_775_ = v___x_772_;
v_isShared_776_ = v_isSharedCheck_792_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_a_773_);
lean_dec(v___x_772_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_792_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
if (lean_obj_tag(v_a_773_) == 0)
{
lean_object* v___x_777_; lean_object* v___x_779_; 
lean_dec(v___y_770_);
v___x_777_ = lean_box(0);
if (v_isShared_776_ == 0)
{
lean_ctor_set(v___x_775_, 0, v___x_777_);
v___x_779_ = v___x_775_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v___x_777_);
v___x_779_ = v_reuseFailAlloc_780_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
return v___x_779_;
}
}
else
{
lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_790_; 
v_isSharedCheck_790_ = !lean_is_exclusive(v_a_773_);
if (v_isSharedCheck_790_ == 0)
{
lean_object* v_unused_791_; 
v_unused_791_ = lean_ctor_get(v_a_773_, 0);
lean_dec(v_unused_791_);
v___x_782_ = v_a_773_;
v_isShared_783_ = v_isSharedCheck_790_;
goto v_resetjp_781_;
}
else
{
lean_dec(v_a_773_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_790_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v___x_785_; 
if (v_isShared_783_ == 0)
{
lean_ctor_set(v___x_782_, 0, v___y_770_);
v___x_785_ = v___x_782_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v___y_770_);
v___x_785_ = v_reuseFailAlloc_789_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
lean_object* v___x_787_; 
if (v_isShared_776_ == 0)
{
lean_ctor_set(v___x_775_, 0, v___x_785_);
v___x_787_ = v___x_775_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v___x_785_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
}
}
}
}
else
{
lean_object* v_a_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_800_; 
lean_dec(v___y_770_);
v_a_793_ = lean_ctor_get(v___x_772_, 0);
v_isSharedCheck_800_ = !lean_is_exclusive(v___x_772_);
if (v_isSharedCheck_800_ == 0)
{
v___x_795_ = v___x_772_;
v_isShared_796_ = v_isSharedCheck_800_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_a_793_);
lean_dec(v___x_772_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_800_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v___x_798_; 
if (v_isShared_796_ == 0)
{
v___x_798_ = v___x_795_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v_a_793_);
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
v___jp_801_:
{
lean_object* v___x_804_; 
lean_inc_ref(v___y_803_);
lean_inc(v___y_764_);
lean_inc_ref(v___y_763_);
lean_inc(v___y_762_);
lean_inc_ref(v___y_761_);
v___x_804_ = lean_apply_5(v___y_803_, v___y_761_, v___y_762_, v___y_763_, v___y_764_, lean_box(0));
if (lean_obj_tag(v___x_804_) == 0)
{
lean_object* v_a_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_826_; 
v_a_805_ = lean_ctor_get(v___x_804_, 0);
v_isSharedCheck_826_ = !lean_is_exclusive(v___x_804_);
if (v_isSharedCheck_826_ == 0)
{
v___x_807_ = v___x_804_;
v_isShared_808_ = v_isSharedCheck_826_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_a_805_);
lean_dec(v___x_804_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_826_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
if (lean_obj_tag(v_a_805_) == 0)
{
lean_object* v___x_809_; lean_object* v___x_811_; 
lean_dec(v___y_802_);
lean_dec_ref(v_filter_758_);
v___x_809_ = lean_box(0);
if (v_isShared_808_ == 0)
{
lean_ctor_set(v___x_807_, 0, v___x_809_);
v___x_811_ = v___x_807_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v___x_809_);
v___x_811_ = v_reuseFailAlloc_812_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
return v___x_811_;
}
}
else
{
lean_object* v___x_813_; 
lean_dec_ref_known(v_a_805_, 1);
lean_del_object(v___x_807_);
lean_inc(v___y_764_);
lean_inc_ref(v___y_763_);
lean_inc(v___y_762_);
lean_inc_ref(v___y_761_);
lean_inc(v___y_802_);
v___x_813_ = lean_apply_6(v_filter_758_, v___y_802_, v___y_761_, v___y_762_, v___y_763_, v___y_764_, lean_box(0));
if (lean_obj_tag(v___x_813_) == 0)
{
lean_object* v_a_814_; uint8_t v___x_815_; 
v_a_814_ = lean_ctor_get(v___x_813_, 0);
lean_inc(v_a_814_);
lean_dec_ref_known(v___x_813_, 1);
v___x_815_ = lean_unbox(v_a_814_);
lean_dec(v_a_814_);
if (v___x_815_ == 0)
{
lean_object* v___f_816_; 
v___f_816_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26___closed__0));
v___y_770_ = v___y_802_;
v___y_771_ = v___f_816_;
goto v___jp_769_;
}
else
{
lean_object* v___f_817_; 
v___f_817_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26___closed__1));
v___y_770_ = v___y_802_;
v___y_771_ = v___f_817_;
goto v___jp_769_;
}
}
else
{
lean_object* v_a_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_825_; 
lean_dec(v___y_802_);
v_a_818_ = lean_ctor_get(v___x_813_, 0);
v_isSharedCheck_825_ = !lean_is_exclusive(v___x_813_);
if (v_isSharedCheck_825_ == 0)
{
v___x_820_ = v___x_813_;
v_isShared_821_ = v_isSharedCheck_825_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_a_818_);
lean_dec(v___x_813_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_825_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v___x_823_; 
if (v_isShared_821_ == 0)
{
v___x_823_ = v___x_820_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v_a_818_);
v___x_823_ = v_reuseFailAlloc_824_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
return v___x_823_;
}
}
}
}
}
}
else
{
lean_object* v_a_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_834_; 
lean_dec(v___y_802_);
lean_dec_ref(v_filter_758_);
v_a_827_ = lean_ctor_get(v___x_804_, 0);
v_isSharedCheck_834_ = !lean_is_exclusive(v___x_804_);
if (v_isSharedCheck_834_ == 0)
{
v___x_829_ = v___x_804_;
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_a_827_);
lean_dec(v___x_804_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v___x_832_; 
if (v_isShared_830_ == 0)
{
v___x_832_ = v___x_829_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_a_827_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
}
}
v___jp_835_:
{
uint8_t v___x_837_; lean_object* v___x_838_; 
v___x_837_ = 0;
lean_inc(v___y_836_);
v___x_838_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37(v___y_836_, v___x_837_, v___y_761_, v___y_762_, v___y_763_, v___y_764_);
if (lean_obj_tag(v___x_838_) == 0)
{
lean_object* v_a_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_854_; 
v_a_839_ = lean_ctor_get(v___x_838_, 0);
v_isSharedCheck_854_ = !lean_is_exclusive(v___x_838_);
if (v_isSharedCheck_854_ == 0)
{
v___x_841_ = v___x_838_;
v_isShared_842_ = v_isSharedCheck_854_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_a_839_);
lean_dec(v___x_838_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_854_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
if (lean_obj_tag(v_a_839_) == 0)
{
lean_object* v___x_843_; lean_object* v___x_845_; 
lean_dec(v___y_836_);
lean_dec_ref(v_filter_758_);
v___x_843_ = lean_box(0);
if (v_isShared_842_ == 0)
{
lean_ctor_set(v___x_841_, 0, v___x_843_);
v___x_845_ = v___x_841_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v___x_843_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
else
{
lean_object* v_val_847_; 
lean_del_object(v___x_841_);
v_val_847_ = lean_ctor_get(v_a_839_, 0);
lean_inc(v_val_847_);
lean_dec_ref_known(v_a_839_, 1);
if (lean_obj_tag(v_val_847_) == 1)
{
lean_object* v_head_848_; lean_object* v_tail_849_; 
v_head_848_ = lean_ctor_get(v_val_847_, 0);
lean_inc(v_head_848_);
v_tail_849_ = lean_ctor_get(v_val_847_, 1);
lean_inc(v_tail_849_);
lean_dec_ref_known(v_val_847_, 2);
if (lean_obj_tag(v_tail_849_) == 0)
{
lean_object* v_fst_850_; uint8_t v___x_851_; 
v_fst_850_ = lean_ctor_get(v_head_848_, 0);
lean_inc(v_fst_850_);
lean_dec(v_head_848_);
v___x_851_ = lean_name_eq(v_fst_850_, v_n_u2080_757_);
lean_dec(v_fst_850_);
if (v___x_851_ == 0)
{
lean_object* v___f_852_; 
v___f_852_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26___closed__0));
v___y_802_ = v___y_836_;
v___y_803_ = v___f_852_;
goto v___jp_801_;
}
else
{
lean_object* v___f_853_; 
v___f_853_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26___closed__1));
v___y_802_ = v___y_836_;
v___y_803_ = v___f_853_;
goto v___jp_801_;
}
}
else
{
lean_dec(v_tail_849_);
lean_dec(v_head_848_);
lean_dec(v___y_836_);
lean_dec_ref(v_filter_758_);
goto v___jp_766_;
}
}
else
{
lean_dec(v_val_847_);
lean_dec(v___y_836_);
lean_dec_ref(v_filter_758_);
goto v___jp_766_;
}
}
}
}
else
{
lean_object* v_a_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_862_; 
lean_dec(v___y_836_);
lean_dec_ref(v_filter_758_);
v_a_855_ = lean_ctor_get(v___x_838_, 0);
v_isSharedCheck_862_ = !lean_is_exclusive(v___x_838_);
if (v_isSharedCheck_862_ == 0)
{
v___x_857_ = v___x_838_;
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_a_855_);
lean_dec(v___x_838_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v___x_860_; 
if (v_isShared_858_ == 0)
{
v___x_860_ = v___x_857_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v_a_855_);
v___x_860_ = v_reuseFailAlloc_861_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
return v___x_860_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26___boxed(lean_object* v_n_u2080_876_, lean_object* v_filter_877_, lean_object* v_view_x3f_878_, lean_object* v_n_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_){
_start:
{
lean_object* v_res_885_; 
v_res_885_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26(v_n_u2080_876_, v_filter_877_, v_view_x3f_878_, v_n_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_);
lean_dec(v___y_883_);
lean_dec_ref(v___y_882_);
lean_dec(v___y_881_);
lean_dec_ref(v___y_880_);
lean_dec(v_n_u2080_876_);
return v_res_885_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__25(lean_object* v_n_u2081_886_, lean_object* v_as_887_, size_t v_i_888_, size_t v_stop_889_, lean_object* v_b_890_){
_start:
{
lean_object* v___y_892_; uint8_t v___x_896_; 
v___x_896_ = lean_usize_dec_eq(v_i_888_, v_stop_889_);
if (v___x_896_ == 0)
{
lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; uint8_t v___x_900_; 
v___x_897_ = lean_array_uget_borrowed(v_as_887_, v_i_888_);
v___x_898_ = l_Lean_Name_getPrefix(v___x_897_);
v___x_899_ = l_Lean_Name_getPrefix(v_n_u2081_886_);
v___x_900_ = l_Lean_Name_isPrefixOf(v___x_898_, v___x_899_);
lean_dec(v___x_899_);
lean_dec(v___x_898_);
if (v___x_900_ == 0)
{
v___y_892_ = v_b_890_;
goto v___jp_891_;
}
else
{
lean_object* v___x_901_; 
lean_inc(v___x_897_);
v___x_901_ = lean_array_push(v_b_890_, v___x_897_);
v___y_892_ = v___x_901_;
goto v___jp_891_;
}
}
else
{
return v_b_890_;
}
v___jp_891_:
{
size_t v___x_893_; size_t v___x_894_; 
v___x_893_ = ((size_t)1ULL);
v___x_894_ = lean_usize_add(v_i_888_, v___x_893_);
v_i_888_ = v___x_894_;
v_b_890_ = v___y_892_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__25___boxed(lean_object* v_n_u2081_902_, lean_object* v_as_903_, lean_object* v_i_904_, lean_object* v_stop_905_, lean_object* v_b_906_){
_start:
{
size_t v_i_boxed_907_; size_t v_stop_boxed_908_; lean_object* v_res_909_; 
v_i_boxed_907_ = lean_unbox_usize(v_i_904_);
lean_dec(v_i_904_);
v_stop_boxed_908_ = lean_unbox_usize(v_stop_905_);
lean_dec(v_stop_905_);
v_res_909_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__25(v_n_u2081_902_, v_as_903_, v_i_boxed_907_, v_stop_boxed_908_, v_b_906_);
lean_dec_ref(v_as_903_);
lean_dec(v_n_u2081_902_);
return v_res_909_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23_spec__33___redArg(lean_object* v_n_u2080_910_, lean_object* v_filter_911_, lean_object* v_view_x3f_912_, lean_object* v_as_x27_913_, lean_object* v_b_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_){
_start:
{
if (lean_obj_tag(v_as_x27_913_) == 0)
{
lean_object* v___x_920_; lean_object* v___x_921_; 
lean_dec(v_view_x3f_912_);
lean_dec_ref(v_filter_911_);
v___x_920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_920_, 0, v_b_914_);
v___x_921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_921_, 0, v___x_920_);
return v___x_921_;
}
else
{
lean_object* v_head_922_; lean_object* v_tail_923_; lean_object* v_snd_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_962_; 
v_head_922_ = lean_ctor_get(v_as_x27_913_, 0);
v_tail_923_ = lean_ctor_get(v_as_x27_913_, 1);
v_snd_924_ = lean_ctor_get(v_b_914_, 1);
v_isSharedCheck_962_ = !lean_is_exclusive(v_b_914_);
if (v_isSharedCheck_962_ == 0)
{
lean_object* v_unused_963_; 
v_unused_963_ = lean_ctor_get(v_b_914_, 0);
lean_dec(v_unused_963_);
v___x_926_ = v_b_914_;
v_isShared_927_ = v_isSharedCheck_962_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_snd_924_);
lean_dec(v_b_914_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_962_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
v___x_928_ = lean_box(0);
v___x_929_ = l_Lean_Name_appendCore(v_head_922_, v_snd_924_);
lean_inc(v___x_929_);
lean_inc(v_view_x3f_912_);
lean_inc_ref(v_filter_911_);
v___x_930_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26(v_n_u2080_910_, v_filter_911_, v_view_x3f_912_, v___x_929_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
if (lean_obj_tag(v___x_930_) == 0)
{
lean_object* v_a_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_953_; 
v_a_931_ = lean_ctor_get(v___x_930_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_953_ == 0)
{
v___x_933_ = v___x_930_;
v_isShared_934_ = v_isSharedCheck_953_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_a_931_);
lean_dec(v___x_930_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_953_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
if (lean_obj_tag(v_a_931_) == 0)
{
lean_object* v___x_936_; 
lean_del_object(v___x_933_);
if (v_isShared_927_ == 0)
{
lean_ctor_set(v___x_926_, 1, v___x_929_);
lean_ctor_set(v___x_926_, 0, v___x_928_);
v___x_936_ = v___x_926_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v___x_928_);
lean_ctor_set(v_reuseFailAlloc_938_, 1, v___x_929_);
v___x_936_ = v_reuseFailAlloc_938_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
v_as_x27_913_ = v_tail_923_;
v_b_914_ = v___x_936_;
goto _start;
}
}
else
{
lean_object* v___x_940_; 
lean_dec(v_view_x3f_912_);
lean_dec_ref(v_filter_911_);
lean_inc_ref(v_a_931_);
if (v_isShared_927_ == 0)
{
lean_ctor_set(v___x_926_, 1, v___x_929_);
lean_ctor_set(v___x_926_, 0, v_a_931_);
v___x_940_ = v___x_926_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_a_931_);
lean_ctor_set(v_reuseFailAlloc_952_, 1, v___x_929_);
v___x_940_ = v_reuseFailAlloc_952_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_950_; 
v_isSharedCheck_950_ = !lean_is_exclusive(v_a_931_);
if (v_isSharedCheck_950_ == 0)
{
lean_object* v_unused_951_; 
v_unused_951_ = lean_ctor_get(v_a_931_, 0);
lean_dec(v_unused_951_);
v___x_942_ = v_a_931_;
v_isShared_943_ = v_isSharedCheck_950_;
goto v_resetjp_941_;
}
else
{
lean_dec(v_a_931_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_950_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_945_; 
if (v_isShared_943_ == 0)
{
lean_ctor_set(v___x_942_, 0, v___x_940_);
v___x_945_ = v___x_942_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v___x_940_);
v___x_945_ = v_reuseFailAlloc_949_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
lean_object* v___x_947_; 
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 0, v___x_945_);
v___x_947_ = v___x_933_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v___x_945_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_961_; 
lean_dec(v___x_929_);
lean_del_object(v___x_926_);
lean_dec(v_view_x3f_912_);
lean_dec_ref(v_filter_911_);
v_a_954_ = lean_ctor_get(v___x_930_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_961_ == 0)
{
v___x_956_ = v___x_930_;
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_a_954_);
lean_dec(v___x_930_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_959_; 
if (v_isShared_957_ == 0)
{
v___x_959_ = v___x_956_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_a_954_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23_spec__33___redArg___boxed(lean_object* v_n_u2080_964_, lean_object* v_filter_965_, lean_object* v_view_x3f_966_, lean_object* v_as_x27_967_, lean_object* v_b_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_){
_start:
{
lean_object* v_res_974_; 
v_res_974_ = l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23_spec__33___redArg(v_n_u2080_964_, v_filter_965_, v_view_x3f_966_, v_as_x27_967_, v_b_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_);
lean_dec(v___y_972_);
lean_dec_ref(v___y_971_);
lean_dec(v___y_970_);
lean_dec_ref(v___y_969_);
lean_dec(v_as_x27_967_);
lean_dec(v_n_u2080_964_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23(lean_object* v_n_u2080_978_, lean_object* v_filter_979_, lean_object* v_view_x3f_980_, lean_object* v_n_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_){
_start:
{
lean_object* v___y_988_; uint8_t v___x_1029_; 
v___x_1029_ = l_Lean_Name_hasMacroScopes(v_n_981_);
if (v___x_1029_ == 0)
{
lean_object* v___f_1030_; 
v___f_1030_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26___closed__1));
v___y_988_ = v___f_1030_;
goto v___jp_987_;
}
else
{
lean_object* v___f_1031_; 
v___f_1031_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26___closed__0));
v___y_988_ = v___f_1031_;
goto v___jp_987_;
}
v___jp_987_:
{
lean_object* v___x_989_; 
lean_inc_ref(v___y_988_);
lean_inc(v___y_985_);
lean_inc_ref(v___y_984_);
lean_inc(v___y_983_);
lean_inc_ref(v___y_982_);
v___x_989_ = lean_apply_5(v___y_988_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, lean_box(0));
if (lean_obj_tag(v___x_989_) == 0)
{
lean_object* v_a_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_1020_; 
v_a_990_ = lean_ctor_get(v___x_989_, 0);
v_isSharedCheck_1020_ = !lean_is_exclusive(v___x_989_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_992_ = v___x_989_;
v_isShared_993_ = v_isSharedCheck_1020_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_a_990_);
lean_dec(v___x_989_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_1020_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
if (lean_obj_tag(v_a_990_) == 0)
{
lean_object* v___x_994_; lean_object* v___x_996_; 
lean_dec(v_n_981_);
lean_dec(v_view_x3f_980_);
lean_dec_ref(v_filter_979_);
v___x_994_ = lean_box(0);
if (v_isShared_993_ == 0)
{
lean_ctor_set(v___x_992_, 0, v___x_994_);
v___x_996_ = v___x_992_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v___x_994_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
}
}
else
{
lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; 
lean_dec_ref_known(v_a_990_, 1);
lean_del_object(v___x_992_);
v___x_998_ = l_Lean_privateToUserName(v_n_981_);
v___x_999_ = l_Lean_Name_componentsRev(v___x_998_);
v___x_1000_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23___closed__0));
v___x_1001_ = l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23_spec__33___redArg(v_n_u2080_978_, v_filter_979_, v_view_x3f_980_, v___x_999_, v___x_1000_, v___y_982_, v___y_983_, v___y_984_, v___y_985_);
lean_dec(v___x_999_);
if (lean_obj_tag(v___x_1001_) == 0)
{
lean_object* v_a_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1011_; 
v_a_1002_ = lean_ctor_get(v___x_1001_, 0);
v_isSharedCheck_1011_ = !lean_is_exclusive(v___x_1001_);
if (v_isSharedCheck_1011_ == 0)
{
v___x_1004_ = v___x_1001_;
v_isShared_1005_ = v_isSharedCheck_1011_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_a_1002_);
lean_dec(v___x_1001_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1011_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v_val_1006_; lean_object* v_fst_1007_; lean_object* v___x_1009_; 
v_val_1006_ = lean_ctor_get(v_a_1002_, 0);
lean_inc(v_val_1006_);
lean_dec(v_a_1002_);
v_fst_1007_ = lean_ctor_get(v_val_1006_, 0);
lean_inc(v_fst_1007_);
lean_dec(v_val_1006_);
if (v_isShared_1005_ == 0)
{
lean_ctor_set(v___x_1004_, 0, v_fst_1007_);
v___x_1009_ = v___x_1004_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v_fst_1007_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
}
else
{
lean_object* v_a_1012_; lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1019_; 
v_a_1012_ = lean_ctor_get(v___x_1001_, 0);
v_isSharedCheck_1019_ = !lean_is_exclusive(v___x_1001_);
if (v_isSharedCheck_1019_ == 0)
{
v___x_1014_ = v___x_1001_;
v_isShared_1015_ = v_isSharedCheck_1019_;
goto v_resetjp_1013_;
}
else
{
lean_inc(v_a_1012_);
lean_dec(v___x_1001_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1019_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
lean_object* v___x_1017_; 
if (v_isShared_1015_ == 0)
{
v___x_1017_ = v___x_1014_;
goto v_reusejp_1016_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v_a_1012_);
v___x_1017_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1016_;
}
v_reusejp_1016_:
{
return v___x_1017_;
}
}
}
}
}
}
else
{
lean_object* v_a_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1028_; 
lean_dec(v_n_981_);
lean_dec(v_view_x3f_980_);
lean_dec_ref(v_filter_979_);
v_a_1021_ = lean_ctor_get(v___x_989_, 0);
v_isSharedCheck_1028_ = !lean_is_exclusive(v___x_989_);
if (v_isSharedCheck_1028_ == 0)
{
v___x_1023_ = v___x_989_;
v_isShared_1024_ = v_isSharedCheck_1028_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_a_1021_);
lean_dec(v___x_989_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1028_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
lean_object* v___x_1026_; 
if (v_isShared_1024_ == 0)
{
v___x_1026_ = v___x_1023_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v_a_1021_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
return v___x_1026_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23___boxed(lean_object* v_n_u2080_1032_, lean_object* v_filter_1033_, lean_object* v_view_x3f_1034_, lean_object* v_n_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23(v_n_u2080_1032_, v_filter_1033_, v_view_x3f_1034_, v_n_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
lean_dec(v___y_1037_);
lean_dec_ref(v___y_1036_);
lean_dec(v_n_u2080_1032_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__24(lean_object* v_n_u2080_1042_, lean_object* v_filter_1043_, lean_object* v_as_1044_, lean_object* v_i_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_){
_start:
{
lean_object* v___x_1051_; uint8_t v___x_1052_; 
v___x_1051_ = lean_array_get_size(v_as_1044_);
v___x_1052_ = lean_nat_dec_lt(v_i_1045_, v___x_1051_);
if (v___x_1052_ == 0)
{
lean_object* v___x_1053_; lean_object* v___x_1054_; 
lean_dec(v_i_1045_);
lean_dec_ref(v_filter_1043_);
v___x_1053_ = lean_box(0);
v___x_1054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1053_);
return v___x_1054_;
}
else
{
lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1055_ = lean_box(0);
v___x_1056_ = lean_array_fget_borrowed(v_as_1044_, v_i_1045_);
lean_inc(v___x_1056_);
lean_inc_ref(v_filter_1043_);
v___x_1057_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23(v_n_u2080_1042_, v_filter_1043_, v___x_1055_, v___x_1056_, v___y_1046_, v___y_1047_, v___y_1048_, v___y_1049_);
if (lean_obj_tag(v___x_1057_) == 0)
{
lean_object* v_a_1058_; 
v_a_1058_ = lean_ctor_get(v___x_1057_, 0);
if (lean_obj_tag(v_a_1058_) == 0)
{
lean_object* v___x_1059_; lean_object* v___x_1060_; 
lean_dec_ref_known(v___x_1057_, 1);
v___x_1059_ = lean_unsigned_to_nat(1u);
v___x_1060_ = lean_nat_add(v_i_1045_, v___x_1059_);
lean_dec(v_i_1045_);
v_i_1045_ = v___x_1060_;
goto _start;
}
else
{
lean_dec(v_i_1045_);
lean_dec_ref(v_filter_1043_);
return v___x_1057_;
}
}
else
{
lean_dec(v_i_1045_);
lean_dec_ref(v_filter_1043_);
return v___x_1057_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__24___boxed(lean_object* v_n_u2080_1062_, lean_object* v_filter_1063_, lean_object* v_as_1064_, lean_object* v_i_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_){
_start:
{
lean_object* v_res_1071_; 
v_res_1071_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__24(v_n_u2080_1062_, v_filter_1063_, v_as_1064_, v_i_1065_, v___y_1066_, v___y_1067_, v___y_1068_, v___y_1069_);
lean_dec(v___y_1069_);
lean_dec_ref(v___y_1068_);
lean_dec(v___y_1067_);
lean_dec_ref(v___y_1066_);
lean_dec_ref(v_as_1064_);
lean_dec(v_n_u2080_1062_);
return v_res_1071_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12(lean_object* v_n_u2080_1074_, uint8_t v_fullNames_1075_, uint8_t v_allowHorizAliases_1076_, lean_object* v_filter_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_){
_start:
{
lean_object* v_view_1083_; lean_object* v_name_1084_; lean_object* v_n_u2081_1085_; 
lean_inc(v_n_u2080_1074_);
v_view_1083_ = l_Lean_extractMacroScopes(v_n_u2080_1074_);
v_name_1084_ = lean_ctor_get(v_view_1083_, 0);
lean_inc(v_name_1084_);
v_n_u2081_1085_ = l_Lean_privateToUserName(v_name_1084_);
if (v_fullNames_1075_ == 0)
{
lean_object* v___x_1086_; lean_object* v_aliases_1088_; lean_object* v_env_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; 
v___x_1086_ = lean_st_ref_get(v___y_1081_);
v_env_1103_ = lean_ctor_get(v___x_1086_, 0);
lean_inc_ref(v_env_1103_);
lean_dec(v___x_1086_);
lean_inc(v_n_u2080_1074_);
v___x_1104_ = l_Lean_getRevAliases(v_env_1103_, v_n_u2080_1074_);
v___x_1105_ = lean_array_mk(v___x_1104_);
if (v_allowHorizAliases_1076_ == 0)
{
lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; uint8_t v___x_1109_; 
v___x_1106_ = lean_unsigned_to_nat(0u);
v___x_1107_ = lean_array_get_size(v___x_1105_);
v___x_1108_ = ((lean_object*)(l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12___closed__0));
v___x_1109_ = lean_nat_dec_lt(v___x_1106_, v___x_1107_);
if (v___x_1109_ == 0)
{
lean_dec_ref(v___x_1105_);
v_aliases_1088_ = v___x_1108_;
goto v___jp_1087_;
}
else
{
size_t v___x_1110_; size_t v___x_1111_; lean_object* v___x_1112_; 
v___x_1110_ = ((size_t)0ULL);
v___x_1111_ = lean_usize_of_nat(v___x_1107_);
v___x_1112_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__25(v_n_u2081_1085_, v___x_1105_, v___x_1110_, v___x_1111_, v___x_1108_);
lean_dec_ref(v___x_1105_);
v_aliases_1088_ = v___x_1112_;
goto v___jp_1087_;
}
}
else
{
v_aliases_1088_ = v___x_1105_;
goto v___jp_1087_;
}
v___jp_1087_:
{
lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1089_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_filter_1077_);
v___x_1090_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__24(v_n_u2080_1074_, v_filter_1077_, v_aliases_1088_, v___x_1089_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_);
lean_dec_ref(v_aliases_1088_);
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v_a_1091_; 
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
if (lean_obj_tag(v_a_1091_) == 0)
{
lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1101_; 
v_isSharedCheck_1101_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1101_ == 0)
{
lean_object* v_unused_1102_; 
v_unused_1102_ = lean_ctor_get(v___x_1090_, 0);
lean_dec(v_unused_1102_);
v___x_1093_ = v___x_1090_;
v_isShared_1094_ = v_isSharedCheck_1101_;
goto v_resetjp_1092_;
}
else
{
lean_dec(v___x_1090_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1101_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1096_; 
if (v_isShared_1094_ == 0)
{
lean_ctor_set_tag(v___x_1093_, 1);
lean_ctor_set(v___x_1093_, 0, v_view_1083_);
v___x_1096_ = v___x_1093_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v_view_1083_);
v___x_1096_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1097_ = l_Lean_rootNamespace;
v___x_1098_ = l_Lean_Name_append(v___x_1097_, v_n_u2081_1085_);
v___x_1099_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23(v_n_u2080_1074_, v_filter_1077_, v___x_1096_, v___x_1098_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_);
lean_dec(v_n_u2080_1074_);
return v___x_1099_;
}
}
}
else
{
lean_dec(v_n_u2081_1085_);
lean_dec_ref(v_view_1083_);
lean_dec_ref(v_filter_1077_);
lean_dec(v_n_u2080_1074_);
return v___x_1090_;
}
}
else
{
lean_dec(v_n_u2081_1085_);
lean_dec_ref(v_view_1083_);
lean_dec_ref(v_filter_1077_);
lean_dec(v_n_u2080_1074_);
return v___x_1090_;
}
}
}
else
{
lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1113_, 0, v_view_1083_);
lean_inc(v_n_u2081_1085_);
lean_inc_ref(v___x_1113_);
lean_inc_ref(v_filter_1077_);
v___x_1114_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26(v_n_u2080_1074_, v_filter_1077_, v___x_1113_, v_n_u2081_1085_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_);
if (lean_obj_tag(v___x_1114_) == 0)
{
lean_object* v_a_1115_; 
v_a_1115_ = lean_ctor_get(v___x_1114_, 0);
if (lean_obj_tag(v_a_1115_) == 0)
{
lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; 
lean_dec_ref_known(v___x_1114_, 1);
v___x_1116_ = l_Lean_rootNamespace;
v___x_1117_ = l_Lean_Name_append(v___x_1116_, v_n_u2081_1085_);
v___x_1118_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26(v_n_u2080_1074_, v_filter_1077_, v___x_1113_, v___x_1117_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_);
lean_dec(v_n_u2080_1074_);
return v___x_1118_;
}
else
{
lean_dec_ref_known(v___x_1113_, 1);
lean_dec(v_n_u2081_1085_);
lean_dec_ref(v_filter_1077_);
lean_dec(v_n_u2080_1074_);
return v___x_1114_;
}
}
else
{
lean_dec_ref_known(v___x_1113_, 1);
lean_dec(v_n_u2081_1085_);
lean_dec_ref(v_filter_1077_);
lean_dec(v_n_u2080_1074_);
return v___x_1114_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12___boxed(lean_object* v_n_u2080_1119_, lean_object* v_fullNames_1120_, lean_object* v_allowHorizAliases_1121_, lean_object* v_filter_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_){
_start:
{
uint8_t v_fullNames_boxed_1128_; uint8_t v_allowHorizAliases_boxed_1129_; lean_object* v_res_1130_; 
v_fullNames_boxed_1128_ = lean_unbox(v_fullNames_1120_);
v_allowHorizAliases_boxed_1129_ = lean_unbox(v_allowHorizAliases_1121_);
v_res_1130_ = l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12(v_n_u2080_1119_, v_fullNames_boxed_1128_, v_allowHorizAliases_boxed_1129_, v_filter_1122_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_);
lean_dec(v___y_1126_);
lean_dec_ref(v___y_1125_);
lean_dec(v___y_1124_);
lean_dec_ref(v___y_1123_);
return v_res_1130_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__26___redArg(lean_object* v_localDecl_x3f_1131_, lean_object* v_givenName_1132_, lean_object* v_as_1133_, lean_object* v_i_1134_){
_start:
{
lean_object* v_zero_1135_; uint8_t v_isZero_1136_; 
v_zero_1135_ = lean_unsigned_to_nat(0u);
v_isZero_1136_ = lean_nat_dec_eq(v_i_1134_, v_zero_1135_);
if (v_isZero_1136_ == 1)
{
lean_object* v___x_1137_; 
lean_dec(v_i_1134_);
v___x_1137_ = lean_box(0);
return v___x_1137_;
}
else
{
lean_object* v_one_1138_; lean_object* v_n_1139_; lean_object* v___x_1140_; 
v_one_1138_ = lean_unsigned_to_nat(1u);
v_n_1139_ = lean_nat_sub(v_i_1134_, v_one_1138_);
lean_dec(v_i_1134_);
v___x_1140_ = lean_array_fget_borrowed(v_as_1133_, v_n_1139_);
if (lean_obj_tag(v___x_1140_) == 0)
{
v_i_1134_ = v_n_1139_;
goto _start;
}
else
{
lean_object* v_val_1142_; uint8_t v___x_1143_; 
v_val_1142_ = lean_ctor_get(v___x_1140_, 0);
v___x_1143_ = l_Lean_LocalDecl_isAuxDecl(v_val_1142_);
if (v___x_1143_ == 0)
{
if (lean_obj_tag(v_localDecl_x3f_1131_) == 0)
{
v_i_1134_ = v_n_1139_;
goto _start;
}
else
{
lean_dec(v_n_1139_);
lean_inc_ref(v_localDecl_x3f_1131_);
return v_localDecl_x3f_1131_;
}
}
else
{
lean_object* v___x_1145_; uint8_t v___x_1146_; 
v___x_1145_ = l_Lean_LocalDecl_userName(v_val_1142_);
v___x_1146_ = lean_name_eq(v___x_1145_, v_givenName_1132_);
lean_dec(v___x_1145_);
if (v___x_1146_ == 0)
{
v_i_1134_ = v_n_1139_;
goto _start;
}
else
{
lean_dec(v_n_1139_);
lean_inc_ref(v___x_1140_);
return v___x_1140_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__26___redArg___boxed(lean_object* v_localDecl_x3f_1148_, lean_object* v_givenName_1149_, lean_object* v_as_1150_, lean_object* v_i_1151_){
_start:
{
lean_object* v_res_1152_; 
v_res_1152_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__26___redArg(v_localDecl_x3f_1148_, v_givenName_1149_, v_as_1150_, v_i_1151_);
lean_dec_ref(v_as_1150_);
lean_dec(v_givenName_1149_);
lean_dec(v_localDecl_x3f_1148_);
return v_res_1152_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__27_spec__32___redArg(lean_object* v_localDecl_x3f_1153_, lean_object* v_givenName_1154_, lean_object* v_as_1155_, lean_object* v_i_1156_){
_start:
{
lean_object* v_zero_1157_; uint8_t v_isZero_1158_; 
v_zero_1157_ = lean_unsigned_to_nat(0u);
v_isZero_1158_ = lean_nat_dec_eq(v_i_1156_, v_zero_1157_);
if (v_isZero_1158_ == 1)
{
lean_object* v___x_1159_; 
lean_dec(v_i_1156_);
v___x_1159_ = lean_box(0);
return v___x_1159_;
}
else
{
lean_object* v_one_1160_; lean_object* v_n_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; 
v_one_1160_ = lean_unsigned_to_nat(1u);
v_n_1161_ = lean_nat_sub(v_i_1156_, v_one_1160_);
lean_dec(v_i_1156_);
v___x_1162_ = lean_array_fget_borrowed(v_as_1155_, v_n_1161_);
v___x_1163_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__27(v_localDecl_x3f_1153_, v_givenName_1154_, v___x_1162_);
if (lean_obj_tag(v___x_1163_) == 0)
{
v_i_1156_ = v_n_1161_;
goto _start;
}
else
{
lean_dec(v_n_1161_);
return v___x_1163_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__27(lean_object* v_localDecl_x3f_1165_, lean_object* v_givenName_1166_, lean_object* v_x_1167_){
_start:
{
if (lean_obj_tag(v_x_1167_) == 0)
{
lean_object* v_cs_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; 
v_cs_1168_ = lean_ctor_get(v_x_1167_, 0);
v___x_1169_ = lean_array_get_size(v_cs_1168_);
v___x_1170_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__27_spec__32___redArg(v_localDecl_x3f_1165_, v_givenName_1166_, v_cs_1168_, v___x_1169_);
return v___x_1170_;
}
else
{
lean_object* v_vs_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; 
v_vs_1171_ = lean_ctor_get(v_x_1167_, 0);
v___x_1172_ = lean_array_get_size(v_vs_1171_);
v___x_1173_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__26___redArg(v_localDecl_x3f_1165_, v_givenName_1166_, v_vs_1171_, v___x_1172_);
return v___x_1173_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__27___boxed(lean_object* v_localDecl_x3f_1174_, lean_object* v_givenName_1175_, lean_object* v_x_1176_){
_start:
{
lean_object* v_res_1177_; 
v_res_1177_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__27(v_localDecl_x3f_1174_, v_givenName_1175_, v_x_1176_);
lean_dec_ref(v_x_1176_);
lean_dec(v_givenName_1175_);
lean_dec(v_localDecl_x3f_1174_);
return v_res_1177_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__27_spec__32___redArg___boxed(lean_object* v_localDecl_x3f_1178_, lean_object* v_givenName_1179_, lean_object* v_as_1180_, lean_object* v_i_1181_){
_start:
{
lean_object* v_res_1182_; 
v_res_1182_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__27_spec__32___redArg(v_localDecl_x3f_1178_, v_givenName_1179_, v_as_1180_, v_i_1181_);
lean_dec_ref(v_as_1180_);
lean_dec(v_givenName_1179_);
lean_dec(v_localDecl_x3f_1178_);
return v_res_1182_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20(lean_object* v_localDecl_x3f_1183_, lean_object* v_givenName_1184_, lean_object* v_t_1185_){
_start:
{
lean_object* v_root_1186_; lean_object* v_tail_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; 
v_root_1186_ = lean_ctor_get(v_t_1185_, 0);
v_tail_1187_ = lean_ctor_get(v_t_1185_, 1);
v___x_1188_ = lean_array_get_size(v_tail_1187_);
v___x_1189_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__26___redArg(v_localDecl_x3f_1183_, v_givenName_1184_, v_tail_1187_, v___x_1188_);
if (lean_obj_tag(v___x_1189_) == 0)
{
lean_object* v___x_1190_; 
v___x_1190_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__27(v_localDecl_x3f_1183_, v_givenName_1184_, v_root_1186_);
return v___x_1190_;
}
else
{
return v___x_1189_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20___boxed(lean_object* v_localDecl_x3f_1191_, lean_object* v_givenName_1192_, lean_object* v_t_1193_){
_start:
{
lean_object* v_res_1194_; 
v_res_1194_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20(v_localDecl_x3f_1191_, v_givenName_1192_, v_t_1193_);
lean_dec_ref(v_t_1193_);
lean_dec(v_givenName_1192_);
lean_dec(v_localDecl_x3f_1191_);
return v_res_1194_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__23___redArg___lam__0(lean_object* v_localDecl_1195_, lean_object* v_givenName_1196_){
_start:
{
lean_object* v___x_1197_; uint8_t v___x_1198_; 
v___x_1197_ = l_Lean_LocalDecl_userName(v_localDecl_1195_);
v___x_1198_ = lean_name_eq(v___x_1197_, v_givenName_1196_);
lean_dec(v___x_1197_);
if (v___x_1198_ == 0)
{
lean_object* v___x_1199_; 
lean_dec_ref(v_localDecl_1195_);
v___x_1199_ = lean_box(0);
return v___x_1199_;
}
else
{
lean_object* v___x_1200_; 
v___x_1200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1200_, 0, v_localDecl_1195_);
return v___x_1200_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__23___redArg___lam__0___boxed(lean_object* v_localDecl_1201_, lean_object* v_givenName_1202_){
_start:
{
lean_object* v_res_1203_; 
v_res_1203_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__23___redArg___lam__0(v_localDecl_1201_, v_givenName_1202_);
lean_dec(v_givenName_1202_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__18___redArg(lean_object* v_t_1204_, lean_object* v_k_1205_){
_start:
{
if (lean_obj_tag(v_t_1204_) == 0)
{
lean_object* v_k_1206_; lean_object* v_v_1207_; lean_object* v_l_1208_; lean_object* v_r_1209_; uint8_t v___x_1210_; 
v_k_1206_ = lean_ctor_get(v_t_1204_, 1);
v_v_1207_ = lean_ctor_get(v_t_1204_, 2);
v_l_1208_ = lean_ctor_get(v_t_1204_, 3);
v_r_1209_ = lean_ctor_get(v_t_1204_, 4);
v___x_1210_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1205_, v_k_1206_);
switch(v___x_1210_)
{
case 0:
{
v_t_1204_ = v_l_1208_;
goto _start;
}
case 1:
{
lean_object* v___x_1212_; 
lean_inc(v_v_1207_);
v___x_1212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1212_, 0, v_v_1207_);
return v___x_1212_;
}
default: 
{
v_t_1204_ = v_r_1209_;
goto _start;
}
}
}
else
{
lean_object* v___x_1214_; 
v___x_1214_ = lean_box(0);
return v___x_1214_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__18___redArg___boxed(lean_object* v_t_1215_, lean_object* v_k_1216_){
_start:
{
lean_object* v_res_1217_; 
v_res_1217_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__18___redArg(v_t_1215_, v_k_1216_);
lean_dec(v_k_1216_);
lean_dec(v_t_1215_);
return v_res_1217_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__23___redArg(lean_object* v_givenName_1218_, uint8_t v_skipAuxDecl_1219_, lean_object* v_auxDeclToFullName_1220_, lean_object* v___x_1221_, lean_object* v_givenNameView_1222_, lean_object* v_as_1223_, lean_object* v_i_1224_){
_start:
{
lean_object* v_zero_1225_; uint8_t v_isZero_1226_; 
v_zero_1225_ = lean_unsigned_to_nat(0u);
v_isZero_1226_ = lean_nat_dec_eq(v_i_1224_, v_zero_1225_);
if (v_isZero_1226_ == 1)
{
lean_object* v___x_1227_; 
lean_dec(v_i_1224_);
lean_dec_ref(v_givenNameView_1222_);
lean_dec(v___x_1221_);
v___x_1227_ = lean_box(0);
return v___x_1227_;
}
else
{
lean_object* v_one_1228_; lean_object* v_n_1229_; lean_object* v___y_1231_; lean_object* v___x_1233_; 
v_one_1228_ = lean_unsigned_to_nat(1u);
v_n_1229_ = lean_nat_sub(v_i_1224_, v_one_1228_);
lean_dec(v_i_1224_);
v___x_1233_ = lean_array_fget_borrowed(v_as_1223_, v_n_1229_);
if (lean_obj_tag(v___x_1233_) == 0)
{
v_i_1224_ = v_n_1229_;
goto _start;
}
else
{
lean_object* v_val_1235_; uint8_t v___x_1236_; 
v_val_1235_ = lean_ctor_get(v___x_1233_, 0);
v___x_1236_ = l_Lean_LocalDecl_isAuxDecl(v_val_1235_);
if (v___x_1236_ == 0)
{
lean_object* v___x_1237_; 
lean_inc(v_val_1235_);
v___x_1237_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__23___redArg___lam__0(v_val_1235_, v_givenName_1218_);
v___y_1231_ = v___x_1237_;
goto v___jp_1230_;
}
else
{
if (v_skipAuxDecl_1219_ == 0)
{
lean_object* v___x_1238_; lean_object* v___x_1239_; 
v___x_1238_ = l_Lean_LocalDecl_fvarId(v_val_1235_);
v___x_1239_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__18___redArg(v_auxDeclToFullName_1220_, v___x_1238_);
lean_dec(v___x_1238_);
if (lean_obj_tag(v___x_1239_) == 1)
{
lean_object* v_val_1240_; lean_object* v_fullDeclView_1241_; lean_object* v_name_1242_; lean_object* v_imported_1243_; lean_object* v_ctx_1244_; lean_object* v_scopes_1245_; lean_object* v___x_1247_; uint8_t v_isShared_1248_; uint8_t v_isSharedCheck_1265_; 
v_val_1240_ = lean_ctor_get(v___x_1239_, 0);
lean_inc(v_val_1240_);
lean_dec_ref_known(v___x_1239_, 1);
v_fullDeclView_1241_ = l_Lean_extractMacroScopes(v_val_1240_);
v_name_1242_ = lean_ctor_get(v_fullDeclView_1241_, 0);
v_imported_1243_ = lean_ctor_get(v_fullDeclView_1241_, 1);
v_ctx_1244_ = lean_ctor_get(v_fullDeclView_1241_, 2);
v_scopes_1245_ = lean_ctor_get(v_fullDeclView_1241_, 3);
v_isSharedCheck_1265_ = !lean_is_exclusive(v_fullDeclView_1241_);
if (v_isSharedCheck_1265_ == 0)
{
v___x_1247_ = v_fullDeclView_1241_;
v_isShared_1248_ = v_isSharedCheck_1265_;
goto v_resetjp_1246_;
}
else
{
lean_inc(v_scopes_1245_);
lean_inc(v_ctx_1244_);
lean_inc(v_imported_1243_);
lean_inc(v_name_1242_);
lean_dec(v_fullDeclView_1241_);
v___x_1247_ = lean_box(0);
v_isShared_1248_ = v_isSharedCheck_1265_;
goto v_resetjp_1246_;
}
v_resetjp_1246_:
{
lean_object* v___y_1250_; lean_object* v___x_1263_; 
lean_inc(v_name_1242_);
v___x_1263_ = l_Lean_privateToUserName_x3f(v_name_1242_);
if (lean_obj_tag(v___x_1263_) == 0)
{
v___y_1250_ = v_name_1242_;
goto v___jp_1249_;
}
else
{
lean_object* v_val_1264_; 
lean_dec(v_name_1242_);
v_val_1264_ = lean_ctor_get(v___x_1263_, 0);
lean_inc(v_val_1264_);
lean_dec_ref_known(v___x_1263_, 1);
v___y_1250_ = v_val_1264_;
goto v___jp_1249_;
}
v___jp_1249_:
{
lean_object* v_fullDeclView_1252_; 
if (v_isShared_1248_ == 0)
{
lean_ctor_set(v___x_1247_, 0, v___y_1250_);
v_fullDeclView_1252_ = v___x_1247_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v___y_1250_);
lean_ctor_set(v_reuseFailAlloc_1262_, 1, v_imported_1243_);
lean_ctor_set(v_reuseFailAlloc_1262_, 2, v_ctx_1244_);
lean_ctor_set(v_reuseFailAlloc_1262_, 3, v_scopes_1245_);
v_fullDeclView_1252_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
lean_object* v_fullDeclName_1253_; uint8_t v___x_1254_; 
lean_inc_ref(v_fullDeclView_1252_);
v_fullDeclName_1253_ = l_Lean_MacroScopesView_review(v_fullDeclView_1252_);
v___x_1254_ = l_Lean_Name_isPrefixOf(v___x_1221_, v_fullDeclName_1253_);
if (v___x_1254_ == 0)
{
lean_object* v___x_1255_; 
lean_dec_ref(v_fullDeclView_1252_);
lean_inc(v___x_1221_);
lean_inc_ref(v_givenNameView_1222_);
lean_inc(v_val_1235_);
v___x_1255_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(v_val_1235_, v_givenNameView_1222_, v_fullDeclName_1253_, v___x_1221_);
lean_dec(v_fullDeclName_1253_);
v___y_1231_ = v___x_1255_;
goto v___jp_1230_;
}
else
{
lean_object* v___x_1256_; lean_object* v_localDeclNameView_1257_; uint8_t v___x_1258_; 
lean_dec(v_fullDeclName_1253_);
v___x_1256_ = l_Lean_LocalDecl_userName(v_val_1235_);
v_localDeclNameView_1257_ = l_Lean_extractMacroScopes(v___x_1256_);
v___x_1258_ = l_Lean_MacroScopesView_isSuffixOf(v_localDeclNameView_1257_, v_givenNameView_1222_);
lean_dec_ref(v_localDeclNameView_1257_);
if (v___x_1258_ == 0)
{
lean_dec_ref(v_fullDeclView_1252_);
v_i_1224_ = v_n_1229_;
goto _start;
}
else
{
uint8_t v___x_1260_; 
v___x_1260_ = l_Lean_MacroScopesView_isSuffixOf(v_givenNameView_1222_, v_fullDeclView_1252_);
lean_dec_ref(v_fullDeclView_1252_);
if (v___x_1260_ == 0)
{
v_i_1224_ = v_n_1229_;
goto _start;
}
else
{
lean_dec(v_n_1229_);
lean_dec_ref(v_givenNameView_1222_);
lean_dec(v___x_1221_);
lean_inc_ref(v___x_1233_);
return v___x_1233_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1266_; 
lean_dec(v___x_1239_);
lean_inc(v_val_1235_);
v___x_1266_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__23___redArg___lam__0(v_val_1235_, v_givenName_1218_);
v___y_1231_ = v___x_1266_;
goto v___jp_1230_;
}
}
else
{
v_i_1224_ = v_n_1229_;
goto _start;
}
}
}
v___jp_1230_:
{
if (lean_obj_tag(v___y_1231_) == 0)
{
v_i_1224_ = v_n_1229_;
goto _start;
}
else
{
lean_dec(v_n_1229_);
lean_dec_ref(v_givenNameView_1222_);
lean_dec(v___x_1221_);
return v___y_1231_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__23___redArg___boxed(lean_object* v_givenName_1268_, lean_object* v_skipAuxDecl_1269_, lean_object* v_auxDeclToFullName_1270_, lean_object* v___x_1271_, lean_object* v_givenNameView_1272_, lean_object* v_as_1273_, lean_object* v_i_1274_){
_start:
{
uint8_t v_skipAuxDecl_boxed_1275_; lean_object* v_res_1276_; 
v_skipAuxDecl_boxed_1275_ = lean_unbox(v_skipAuxDecl_1269_);
v_res_1276_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__23___redArg(v_givenName_1268_, v_skipAuxDecl_boxed_1275_, v_auxDeclToFullName_1270_, v___x_1271_, v_givenNameView_1272_, v_as_1273_, v_i_1274_);
lean_dec_ref(v_as_1273_);
lean_dec(v_auxDeclToFullName_1270_);
lean_dec(v_givenName_1268_);
return v_res_1276_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__24_spec__28___redArg(lean_object* v_givenName_1277_, uint8_t v_skipAuxDecl_1278_, lean_object* v_auxDeclToFullName_1279_, lean_object* v___x_1280_, lean_object* v_givenNameView_1281_, lean_object* v_as_1282_, lean_object* v_i_1283_){
_start:
{
lean_object* v_zero_1284_; uint8_t v_isZero_1285_; 
v_zero_1284_ = lean_unsigned_to_nat(0u);
v_isZero_1285_ = lean_nat_dec_eq(v_i_1283_, v_zero_1284_);
if (v_isZero_1285_ == 1)
{
lean_object* v___x_1286_; 
lean_dec(v_i_1283_);
lean_dec_ref(v_givenNameView_1281_);
lean_dec(v___x_1280_);
v___x_1286_ = lean_box(0);
return v___x_1286_;
}
else
{
lean_object* v_one_1287_; lean_object* v_n_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; 
v_one_1287_ = lean_unsigned_to_nat(1u);
v_n_1288_ = lean_nat_sub(v_i_1283_, v_one_1287_);
lean_dec(v_i_1283_);
v___x_1289_ = lean_array_fget_borrowed(v_as_1282_, v_n_1288_);
lean_inc_ref(v_givenNameView_1281_);
lean_inc(v___x_1280_);
v___x_1290_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__24(v_givenName_1277_, v_skipAuxDecl_1278_, v_auxDeclToFullName_1279_, v___x_1280_, v_givenNameView_1281_, v___x_1289_);
if (lean_obj_tag(v___x_1290_) == 0)
{
v_i_1283_ = v_n_1288_;
goto _start;
}
else
{
lean_dec(v_n_1288_);
lean_dec_ref(v_givenNameView_1281_);
lean_dec(v___x_1280_);
return v___x_1290_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__24(lean_object* v_givenName_1292_, uint8_t v_skipAuxDecl_1293_, lean_object* v_auxDeclToFullName_1294_, lean_object* v___x_1295_, lean_object* v_givenNameView_1296_, lean_object* v_x_1297_){
_start:
{
if (lean_obj_tag(v_x_1297_) == 0)
{
lean_object* v_cs_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; 
v_cs_1298_ = lean_ctor_get(v_x_1297_, 0);
v___x_1299_ = lean_array_get_size(v_cs_1298_);
v___x_1300_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__24_spec__28___redArg(v_givenName_1292_, v_skipAuxDecl_1293_, v_auxDeclToFullName_1294_, v___x_1295_, v_givenNameView_1296_, v_cs_1298_, v___x_1299_);
return v___x_1300_;
}
else
{
lean_object* v_vs_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; 
v_vs_1301_ = lean_ctor_get(v_x_1297_, 0);
v___x_1302_ = lean_array_get_size(v_vs_1301_);
v___x_1303_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__23___redArg(v_givenName_1292_, v_skipAuxDecl_1293_, v_auxDeclToFullName_1294_, v___x_1295_, v_givenNameView_1296_, v_vs_1301_, v___x_1302_);
return v___x_1303_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__24___boxed(lean_object* v_givenName_1304_, lean_object* v_skipAuxDecl_1305_, lean_object* v_auxDeclToFullName_1306_, lean_object* v___x_1307_, lean_object* v_givenNameView_1308_, lean_object* v_x_1309_){
_start:
{
uint8_t v_skipAuxDecl_boxed_1310_; lean_object* v_res_1311_; 
v_skipAuxDecl_boxed_1310_ = lean_unbox(v_skipAuxDecl_1305_);
v_res_1311_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__24(v_givenName_1304_, v_skipAuxDecl_boxed_1310_, v_auxDeclToFullName_1306_, v___x_1307_, v_givenNameView_1308_, v_x_1309_);
lean_dec_ref(v_x_1309_);
lean_dec(v_auxDeclToFullName_1306_);
lean_dec(v_givenName_1304_);
return v_res_1311_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__24_spec__28___redArg___boxed(lean_object* v_givenName_1312_, lean_object* v_skipAuxDecl_1313_, lean_object* v_auxDeclToFullName_1314_, lean_object* v___x_1315_, lean_object* v_givenNameView_1316_, lean_object* v_as_1317_, lean_object* v_i_1318_){
_start:
{
uint8_t v_skipAuxDecl_boxed_1319_; lean_object* v_res_1320_; 
v_skipAuxDecl_boxed_1319_ = lean_unbox(v_skipAuxDecl_1313_);
v_res_1320_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__24_spec__28___redArg(v_givenName_1312_, v_skipAuxDecl_boxed_1319_, v_auxDeclToFullName_1314_, v___x_1315_, v_givenNameView_1316_, v_as_1317_, v_i_1318_);
lean_dec_ref(v_as_1317_);
lean_dec(v_auxDeclToFullName_1314_);
lean_dec(v_givenName_1312_);
return v_res_1320_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19(lean_object* v_givenName_1321_, uint8_t v_skipAuxDecl_1322_, lean_object* v_auxDeclToFullName_1323_, lean_object* v___x_1324_, lean_object* v_givenNameView_1325_, lean_object* v_t_1326_){
_start:
{
lean_object* v_root_1327_; lean_object* v_tail_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; 
v_root_1327_ = lean_ctor_get(v_t_1326_, 0);
v_tail_1328_ = lean_ctor_get(v_t_1326_, 1);
v___x_1329_ = lean_array_get_size(v_tail_1328_);
lean_inc_ref(v_givenNameView_1325_);
lean_inc(v___x_1324_);
v___x_1330_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__23___redArg(v_givenName_1321_, v_skipAuxDecl_1322_, v_auxDeclToFullName_1323_, v___x_1324_, v_givenNameView_1325_, v_tail_1328_, v___x_1329_);
if (lean_obj_tag(v___x_1330_) == 0)
{
lean_object* v___x_1331_; 
v___x_1331_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__24(v_givenName_1321_, v_skipAuxDecl_1322_, v_auxDeclToFullName_1323_, v___x_1324_, v_givenNameView_1325_, v_root_1327_);
return v___x_1331_;
}
else
{
lean_dec_ref(v_givenNameView_1325_);
lean_dec(v___x_1324_);
return v___x_1330_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19___boxed(lean_object* v_givenName_1332_, lean_object* v_skipAuxDecl_1333_, lean_object* v_auxDeclToFullName_1334_, lean_object* v___x_1335_, lean_object* v_givenNameView_1336_, lean_object* v_t_1337_){
_start:
{
uint8_t v_skipAuxDecl_boxed_1338_; lean_object* v_res_1339_; 
v_skipAuxDecl_boxed_1338_ = lean_unbox(v_skipAuxDecl_1333_);
v_res_1339_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19(v_givenName_1332_, v_skipAuxDecl_boxed_1338_, v_auxDeclToFullName_1334_, v___x_1335_, v_givenNameView_1336_, v_t_1337_);
lean_dec_ref(v_t_1337_);
lean_dec(v_auxDeclToFullName_1334_);
lean_dec(v_givenName_1332_);
return v_res_1339_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11___lam__0(lean_object* v_auxDeclToFullName_1340_, lean_object* v_currNamespace_1341_, lean_object* v_decls_1342_, lean_object* v_givenNameView_1343_, uint8_t v_skipAuxDecl_1344_){
_start:
{
lean_object* v_givenName_1345_; lean_object* v_localDecl_x3f_1346_; 
lean_inc_ref(v_givenNameView_1343_);
v_givenName_1345_ = l_Lean_MacroScopesView_review(v_givenNameView_1343_);
v_localDecl_x3f_1346_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19(v_givenName_1345_, v_skipAuxDecl_1344_, v_auxDeclToFullName_1340_, v_currNamespace_1341_, v_givenNameView_1343_, v_decls_1342_);
if (lean_obj_tag(v_localDecl_x3f_1346_) == 0)
{
if (v_skipAuxDecl_1344_ == 0)
{
lean_object* v___x_1347_; 
v___x_1347_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20(v_localDecl_x3f_1346_, v_givenName_1345_, v_decls_1342_);
lean_dec(v_givenName_1345_);
return v___x_1347_;
}
else
{
lean_dec(v_givenName_1345_);
return v_localDecl_x3f_1346_;
}
}
else
{
lean_dec(v_givenName_1345_);
return v_localDecl_x3f_1346_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11___lam__0___boxed(lean_object* v_auxDeclToFullName_1348_, lean_object* v_currNamespace_1349_, lean_object* v_decls_1350_, lean_object* v_givenNameView_1351_, lean_object* v_skipAuxDecl_1352_){
_start:
{
uint8_t v_skipAuxDecl_boxed_1353_; lean_object* v_res_1354_; 
v_skipAuxDecl_boxed_1353_ = lean_unbox(v_skipAuxDecl_1352_);
v_res_1354_ = l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11___lam__0(v_auxDeclToFullName_1348_, v_currNamespace_1349_, v_decls_1350_, v_givenNameView_1351_, v_skipAuxDecl_boxed_1353_);
lean_dec_ref(v_decls_1350_);
lean_dec(v_auxDeclToFullName_1348_);
return v_res_1354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__42___redArg(lean_object* v_opt_1355_, lean_object* v___y_1356_){
_start:
{
lean_object* v___x_1358_; uint8_t v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; 
v___x_1358_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1356_);
v___x_1359_ = l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4(v___x_1358_, v_opt_1355_);
lean_dec_ref(v___x_1358_);
v___x_1360_ = lean_box(v___x_1359_);
v___x_1361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1361_, 0, v___x_1360_);
return v___x_1361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__42___redArg___boxed(lean_object* v_opt_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_){
_start:
{
lean_object* v_res_1365_; 
v_res_1365_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__42___redArg(v_opt_1362_, v___y_1363_);
lean_dec_ref(v___y_1363_);
lean_dec_ref(v_opt_1362_);
return v_res_1365_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43_spec__47_spec__49(lean_object* v_ref_1366_, lean_object* v_msgData_1367_, uint8_t v_severity_1368_, uint8_t v_isSilent_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_){
_start:
{
lean_object* v___y_1376_; uint8_t v___y_1377_; lean_object* v___y_1378_; lean_object* v___y_1379_; uint8_t v___y_1380_; lean_object* v___y_1381_; lean_object* v___y_1382_; lean_object* v_toCold_1383_; lean_object* v___y_1384_; lean_object* v___y_1413_; lean_object* v___y_1414_; uint8_t v___y_1415_; uint8_t v___y_1416_; lean_object* v___y_1417_; uint8_t v___y_1418_; lean_object* v___y_1419_; lean_object* v___y_1420_; uint8_t v___y_1440_; lean_object* v___y_1441_; lean_object* v___y_1442_; uint8_t v___y_1443_; lean_object* v___y_1444_; uint8_t v___y_1445_; lean_object* v___y_1446_; uint8_t v___y_1450_; uint8_t v___y_1451_; uint8_t v___x_1461_; uint8_t v___y_1463_; uint8_t v___x_1469_; 
v___x_1461_ = 2;
v___x_1469_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1368_, v___x_1461_);
if (v___x_1469_ == 0)
{
v___y_1463_ = v___x_1469_;
goto v___jp_1462_;
}
else
{
uint8_t v___x_1470_; 
lean_inc_ref(v_msgData_1367_);
v___x_1470_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1367_);
if (v___x_1470_ == 0)
{
v___y_1463_ = v___x_1470_;
goto v___jp_1462_;
}
else
{
lean_object* v___x_1471_; lean_object* v___x_1472_; 
lean_dec_ref(v_msgData_1367_);
v___x_1471_ = lean_box(0);
v___x_1472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1472_, 0, v___x_1471_);
return v___x_1472_;
}
}
v___jp_1375_:
{
lean_object* v_currNamespace_1385_; lean_object* v_openDecls_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v_env_1391_; lean_object* v_nextMacroScope_1392_; lean_object* v_ngen_1393_; lean_object* v_auxDeclNGen_1394_; lean_object* v_traceState_1395_; lean_object* v_cache_1396_; lean_object* v_recordedDeps_1397_; lean_object* v_messages_1398_; lean_object* v_infoState_1399_; lean_object* v_snapshotTasks_1400_; lean_object* v___x_1402_; uint8_t v_isShared_1403_; uint8_t v_isSharedCheck_1411_; 
v_currNamespace_1385_ = lean_ctor_get(v_toCold_1383_, 4);
v_openDecls_1386_ = lean_ctor_get(v_toCold_1383_, 5);
lean_inc(v_openDecls_1386_);
lean_inc(v_currNamespace_1385_);
v___x_1387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1387_, 0, v_currNamespace_1385_);
lean_ctor_set(v___x_1387_, 1, v_openDecls_1386_);
v___x_1388_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1388_, 0, v___x_1387_);
lean_ctor_set(v___x_1388_, 1, v___y_1379_);
lean_inc_ref(v___y_1376_);
lean_inc_ref(v___y_1382_);
v___x_1389_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1389_, 0, v___y_1382_);
lean_ctor_set(v___x_1389_, 1, v___y_1381_);
lean_ctor_set(v___x_1389_, 2, v___y_1378_);
lean_ctor_set(v___x_1389_, 3, v___y_1376_);
lean_ctor_set(v___x_1389_, 4, v___x_1388_);
lean_ctor_set_uint8(v___x_1389_, sizeof(void*)*5, v___y_1380_);
lean_ctor_set_uint8(v___x_1389_, sizeof(void*)*5 + 1, v___y_1377_);
lean_ctor_set_uint8(v___x_1389_, sizeof(void*)*5 + 2, v_isSilent_1369_);
v___x_1390_ = lean_st_ref_take(v___y_1384_);
v_env_1391_ = lean_ctor_get(v___x_1390_, 0);
v_nextMacroScope_1392_ = lean_ctor_get(v___x_1390_, 1);
v_ngen_1393_ = lean_ctor_get(v___x_1390_, 2);
v_auxDeclNGen_1394_ = lean_ctor_get(v___x_1390_, 3);
v_traceState_1395_ = lean_ctor_get(v___x_1390_, 4);
v_cache_1396_ = lean_ctor_get(v___x_1390_, 5);
v_recordedDeps_1397_ = lean_ctor_get(v___x_1390_, 6);
v_messages_1398_ = lean_ctor_get(v___x_1390_, 7);
v_infoState_1399_ = lean_ctor_get(v___x_1390_, 8);
v_snapshotTasks_1400_ = lean_ctor_get(v___x_1390_, 9);
v_isSharedCheck_1411_ = !lean_is_exclusive(v___x_1390_);
if (v_isSharedCheck_1411_ == 0)
{
v___x_1402_ = v___x_1390_;
v_isShared_1403_ = v_isSharedCheck_1411_;
goto v_resetjp_1401_;
}
else
{
lean_inc(v_snapshotTasks_1400_);
lean_inc(v_infoState_1399_);
lean_inc(v_messages_1398_);
lean_inc(v_recordedDeps_1397_);
lean_inc(v_cache_1396_);
lean_inc(v_traceState_1395_);
lean_inc(v_auxDeclNGen_1394_);
lean_inc(v_ngen_1393_);
lean_inc(v_nextMacroScope_1392_);
lean_inc(v_env_1391_);
lean_dec(v___x_1390_);
v___x_1402_ = lean_box(0);
v_isShared_1403_ = v_isSharedCheck_1411_;
goto v_resetjp_1401_;
}
v_resetjp_1401_:
{
lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1407_; 
v___x_1404_ = lean_box(0);
v___x_1405_ = l_Lean_MessageLog_add(v___x_1389_, v_messages_1398_);
if (v_isShared_1403_ == 0)
{
lean_ctor_set(v___x_1402_, 7, v___x_1405_);
v___x_1407_ = v___x_1402_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v_env_1391_);
lean_ctor_set(v_reuseFailAlloc_1410_, 1, v_nextMacroScope_1392_);
lean_ctor_set(v_reuseFailAlloc_1410_, 2, v_ngen_1393_);
lean_ctor_set(v_reuseFailAlloc_1410_, 3, v_auxDeclNGen_1394_);
lean_ctor_set(v_reuseFailAlloc_1410_, 4, v_traceState_1395_);
lean_ctor_set(v_reuseFailAlloc_1410_, 5, v_cache_1396_);
lean_ctor_set(v_reuseFailAlloc_1410_, 6, v_recordedDeps_1397_);
lean_ctor_set(v_reuseFailAlloc_1410_, 7, v___x_1405_);
lean_ctor_set(v_reuseFailAlloc_1410_, 8, v_infoState_1399_);
lean_ctor_set(v_reuseFailAlloc_1410_, 9, v_snapshotTasks_1400_);
v___x_1407_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
lean_object* v___x_1408_; lean_object* v___x_1409_; 
v___x_1408_ = lean_st_ref_put(v___y_1384_, v___x_1407_);
v___x_1409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1409_, 0, v___x_1404_);
return v___x_1409_;
}
}
}
v___jp_1412_:
{
lean_object* v_fileName_1421_; lean_object* v_fileMap_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v_a_1425_; lean_object* v___x_1427_; uint8_t v_isShared_1428_; uint8_t v_isSharedCheck_1438_; 
v_fileName_1421_ = lean_ctor_get(v___y_1417_, 0);
v_fileMap_1422_ = lean_ctor_get(v___y_1417_, 1);
v___x_1423_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1367_);
v___x_1424_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43_spec__47_spec__49_spec__52(v___x_1423_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_);
v_a_1425_ = lean_ctor_get(v___x_1424_, 0);
v_isSharedCheck_1438_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1438_ == 0)
{
v___x_1427_ = v___x_1424_;
v_isShared_1428_ = v_isSharedCheck_1438_;
goto v_resetjp_1426_;
}
else
{
lean_inc(v_a_1425_);
lean_dec(v___x_1424_);
v___x_1427_ = lean_box(0);
v_isShared_1428_ = v_isSharedCheck_1438_;
goto v_resetjp_1426_;
}
v_resetjp_1426_:
{
lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; 
lean_inc_ref_n(v_fileMap_1422_, 2);
v___x_1429_ = l_Lean_FileMap_toPosition(v_fileMap_1422_, v___y_1419_);
lean_dec(v___y_1419_);
v___x_1430_ = l_Lean_FileMap_toPosition(v_fileMap_1422_, v___y_1420_);
lean_dec(v___y_1420_);
v___x_1431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1430_);
v___x_1432_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51_spec__53___closed__0));
if (v___y_1415_ == 0)
{
lean_del_object(v___x_1427_);
lean_dec_ref(v___y_1414_);
v___y_1376_ = v___x_1432_;
v___y_1377_ = v___y_1416_;
v___y_1378_ = v___x_1431_;
v___y_1379_ = v_a_1425_;
v___y_1380_ = v___y_1418_;
v___y_1381_ = v___x_1429_;
v___y_1382_ = v_fileName_1421_;
v_toCold_1383_ = v___y_1413_;
v___y_1384_ = v___y_1373_;
goto v___jp_1375_;
}
else
{
uint8_t v___x_1433_; 
lean_inc(v_a_1425_);
v___x_1433_ = l_Lean_MessageData_hasTag(v___y_1414_, v_a_1425_);
if (v___x_1433_ == 0)
{
lean_object* v___x_1434_; lean_object* v___x_1436_; 
lean_dec_ref_known(v___x_1431_, 1);
lean_dec_ref(v___x_1429_);
lean_dec(v_a_1425_);
v___x_1434_ = lean_box(0);
if (v_isShared_1428_ == 0)
{
lean_ctor_set(v___x_1427_, 0, v___x_1434_);
v___x_1436_ = v___x_1427_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1437_; 
v_reuseFailAlloc_1437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1437_, 0, v___x_1434_);
v___x_1436_ = v_reuseFailAlloc_1437_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
return v___x_1436_;
}
}
else
{
lean_del_object(v___x_1427_);
v___y_1376_ = v___x_1432_;
v___y_1377_ = v___y_1416_;
v___y_1378_ = v___x_1431_;
v___y_1379_ = v_a_1425_;
v___y_1380_ = v___y_1418_;
v___y_1381_ = v___x_1429_;
v___y_1382_ = v_fileName_1421_;
v_toCold_1383_ = v___y_1413_;
v___y_1384_ = v___y_1373_;
goto v___jp_1375_;
}
}
}
}
v___jp_1439_:
{
lean_object* v___x_1447_; 
v___x_1447_ = l_Lean_Syntax_getTailPos_x3f(v___y_1444_, v___y_1445_);
lean_dec(v___y_1444_);
if (lean_obj_tag(v___x_1447_) == 0)
{
lean_inc(v___y_1446_);
v___y_1413_ = v___y_1441_;
v___y_1414_ = v___y_1442_;
v___y_1415_ = v___y_1440_;
v___y_1416_ = v___y_1443_;
v___y_1417_ = v___y_1441_;
v___y_1418_ = v___y_1445_;
v___y_1419_ = v___y_1446_;
v___y_1420_ = v___y_1446_;
goto v___jp_1412_;
}
else
{
lean_object* v_val_1448_; 
v_val_1448_ = lean_ctor_get(v___x_1447_, 0);
lean_inc(v_val_1448_);
lean_dec_ref_known(v___x_1447_, 1);
v___y_1413_ = v___y_1441_;
v___y_1414_ = v___y_1442_;
v___y_1415_ = v___y_1440_;
v___y_1416_ = v___y_1443_;
v___y_1417_ = v___y_1441_;
v___y_1418_ = v___y_1445_;
v___y_1419_ = v___y_1446_;
v___y_1420_ = v_val_1448_;
goto v___jp_1412_;
}
}
v___jp_1449_:
{
lean_object* v_toCold_1452_; lean_object* v_ref_1453_; uint8_t v_suppressElabErrors_1454_; lean_object* v___x_1455_; lean_object* v___f_1456_; lean_object* v_ref_1457_; lean_object* v___x_1458_; 
v_toCold_1452_ = lean_ctor_get(v___y_1372_, 0);
v_ref_1453_ = lean_ctor_get(v___y_1372_, 2);
v_suppressElabErrors_1454_ = lean_ctor_get_uint8(v___y_1372_, sizeof(void*)*3 + 2);
v___x_1455_ = lean_box(v_suppressElabErrors_1454_);
v___f_1456_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1456_, 0, v___x_1455_);
v_ref_1457_ = l_Lean_replaceRef(v_ref_1366_, v_ref_1453_);
v___x_1458_ = l_Lean_Syntax_getPos_x3f(v_ref_1457_, v___y_1450_);
if (lean_obj_tag(v___x_1458_) == 0)
{
lean_object* v___x_1459_; 
v___x_1459_ = lean_unsigned_to_nat(0u);
v___y_1440_ = v_suppressElabErrors_1454_;
v___y_1441_ = v_toCold_1452_;
v___y_1442_ = v___f_1456_;
v___y_1443_ = v___y_1451_;
v___y_1444_ = v_ref_1457_;
v___y_1445_ = v___y_1450_;
v___y_1446_ = v___x_1459_;
goto v___jp_1439_;
}
else
{
lean_object* v_val_1460_; 
v_val_1460_ = lean_ctor_get(v___x_1458_, 0);
lean_inc(v_val_1460_);
lean_dec_ref_known(v___x_1458_, 1);
v___y_1440_ = v_suppressElabErrors_1454_;
v___y_1441_ = v_toCold_1452_;
v___y_1442_ = v___f_1456_;
v___y_1443_ = v___y_1451_;
v___y_1444_ = v_ref_1457_;
v___y_1445_ = v___y_1450_;
v___y_1446_ = v_val_1460_;
goto v___jp_1439_;
}
}
v___jp_1462_:
{
uint8_t v___x_1464_; uint8_t v___x_1465_; 
v___x_1464_ = 1;
v___x_1465_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1368_, v___x_1464_);
if (v___x_1465_ == 0)
{
v___y_1450_ = v___y_1463_;
v___y_1451_ = v_severity_1368_;
goto v___jp_1449_;
}
else
{
lean_object* v___x_1466_; lean_object* v___x_1467_; uint8_t v___x_1468_; 
v___x_1466_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1372_);
v___x_1467_ = l_Lean_warningAsError;
v___x_1468_ = l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4(v___x_1466_, v___x_1467_);
lean_dec_ref(v___x_1466_);
if (v___x_1468_ == 0)
{
v___y_1450_ = v___y_1463_;
v___y_1451_ = v_severity_1368_;
goto v___jp_1449_;
}
else
{
v___y_1450_ = v___y_1463_;
v___y_1451_ = v___x_1461_;
goto v___jp_1449_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43_spec__47_spec__49___boxed(lean_object* v_ref_1473_, lean_object* v_msgData_1474_, lean_object* v_severity_1475_, lean_object* v_isSilent_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_){
_start:
{
uint8_t v_severity_boxed_1482_; uint8_t v_isSilent_boxed_1483_; lean_object* v_res_1484_; 
v_severity_boxed_1482_ = lean_unbox(v_severity_1475_);
v_isSilent_boxed_1483_ = lean_unbox(v_isSilent_1476_);
v_res_1484_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43_spec__47_spec__49(v_ref_1473_, v_msgData_1474_, v_severity_boxed_1482_, v_isSilent_boxed_1483_, v___y_1477_, v___y_1478_, v___y_1479_, v___y_1480_);
lean_dec(v___y_1480_);
lean_dec_ref(v___y_1479_);
lean_dec(v___y_1478_);
lean_dec_ref(v___y_1477_);
lean_dec(v_ref_1473_);
return v_res_1484_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43_spec__47(lean_object* v_msgData_1485_, uint8_t v_severity_1486_, uint8_t v_isSilent_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_){
_start:
{
lean_object* v_ref_1493_; lean_object* v___x_1494_; 
v_ref_1493_ = lean_ctor_get(v___y_1490_, 2);
v___x_1494_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43_spec__47_spec__49(v_ref_1493_, v_msgData_1485_, v_severity_1486_, v_isSilent_1487_, v___y_1488_, v___y_1489_, v___y_1490_, v___y_1491_);
return v___x_1494_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43_spec__47___boxed(lean_object* v_msgData_1495_, lean_object* v_severity_1496_, lean_object* v_isSilent_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_){
_start:
{
uint8_t v_severity_boxed_1503_; uint8_t v_isSilent_boxed_1504_; lean_object* v_res_1505_; 
v_severity_boxed_1503_ = lean_unbox(v_severity_1496_);
v_isSilent_boxed_1504_ = lean_unbox(v_isSilent_1497_);
v_res_1505_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43_spec__47(v_msgData_1495_, v_severity_boxed_1503_, v_isSilent_boxed_1504_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_);
lean_dec(v___y_1501_);
lean_dec_ref(v___y_1500_);
lean_dec(v___y_1499_);
lean_dec_ref(v___y_1498_);
return v_res_1505_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43(lean_object* v_msgData_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_){
_start:
{
uint8_t v___x_1512_; uint8_t v___x_1513_; lean_object* v___x_1514_; 
v___x_1512_ = 1;
v___x_1513_ = 0;
v___x_1514_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43_spec__47(v_msgData_1506_, v___x_1512_, v___x_1513_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_);
return v___x_1514_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43___boxed(lean_object* v_msgData_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_){
_start:
{
lean_object* v_res_1521_; 
v_res_1521_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43(v_msgData_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_);
lean_dec(v___y_1519_);
lean_dec_ref(v___y_1518_);
lean_dec(v___y_1517_);
lean_dec_ref(v___y_1516_);
return v_res_1521_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36(lean_object* v_id_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_){
_start:
{
lean_object* v___x_1528_; lean_object* v_env_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v_a_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1551_; 
v___x_1528_ = lean_st_ref_get(v___y_1526_);
v_env_1529_ = lean_ctor_get(v___x_1528_, 0);
lean_inc_ref(v_env_1529_);
lean_dec(v___x_1528_);
v___x_1530_ = l_Lean_ResolveName_backward_privateInPublic_warn;
v___x_1531_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__42___redArg(v___x_1530_, v___y_1525_);
v_a_1532_ = lean_ctor_get(v___x_1531_, 0);
v_isSharedCheck_1551_ = !lean_is_exclusive(v___x_1531_);
if (v_isSharedCheck_1551_ == 0)
{
v___x_1534_ = v___x_1531_;
v_isShared_1535_ = v_isSharedCheck_1551_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_a_1532_);
lean_dec(v___x_1531_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1551_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
uint8_t v_isExporting_1541_; 
v_isExporting_1541_ = lean_ctor_get_uint8(v_env_1529_, sizeof(void*)*13);
lean_dec_ref(v_env_1529_);
if (v_isExporting_1541_ == 0)
{
lean_dec(v_a_1532_);
lean_dec(v_id_1522_);
goto v___jp_1536_;
}
else
{
uint8_t v___x_1542_; 
v___x_1542_ = l_Lean_isPrivateName(v_id_1522_);
if (v___x_1542_ == 0)
{
lean_dec(v_a_1532_);
lean_dec(v_id_1522_);
goto v___jp_1536_;
}
else
{
uint8_t v___x_1543_; 
v___x_1543_ = lean_unbox(v_a_1532_);
lean_dec(v_a_1532_);
if (v___x_1543_ == 0)
{
lean_dec(v_id_1522_);
goto v___jp_1536_;
}
else
{
lean_object* v___x_1544_; uint8_t v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; 
lean_del_object(v___x_1534_);
v___x_1544_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__1, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__1_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__1);
v___x_1545_ = 0;
v___x_1546_ = l_Lean_MessageData_ofConstName(v_id_1522_, v___x_1545_);
v___x_1547_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1547_, 0, v___x_1544_);
lean_ctor_set(v___x_1547_, 1, v___x_1546_);
v___x_1548_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__3, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__3_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44___closed__3);
v___x_1549_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1547_);
lean_ctor_set(v___x_1549_, 1, v___x_1548_);
v___x_1550_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43(v___x_1549_, v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_);
return v___x_1550_;
}
}
}
v___jp_1536_:
{
lean_object* v___x_1537_; lean_object* v___x_1539_; 
v___x_1537_ = lean_box(0);
if (v_isShared_1535_ == 0)
{
lean_ctor_set(v___x_1534_, 0, v___x_1537_);
v___x_1539_ = v___x_1534_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v___x_1537_);
v___x_1539_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
return v___x_1539_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36___boxed(lean_object* v_id_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_){
_start:
{
lean_object* v_res_1558_; 
v_res_1558_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36(v_id_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_);
lean_dec(v___y_1556_);
lean_dec_ref(v___y_1555_);
lean_dec(v___y_1554_);
lean_dec_ref(v___y_1553_);
return v_res_1558_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29(lean_object* v_id_1559_, uint8_t v_enableLog_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_){
_start:
{
lean_object* v___x_1566_; lean_object* v_toCold_1567_; lean_object* v_env_1568_; lean_object* v_currNamespace_1569_; lean_object* v_openDecls_1570_; lean_object* v___x_1571_; lean_object* v_res_1572_; lean_object* v___x_1573_; 
v___x_1566_ = lean_st_ref_get(v___y_1564_);
v_toCold_1567_ = lean_ctor_get(v___y_1563_, 0);
v_env_1568_ = lean_ctor_get(v___x_1566_, 0);
lean_inc_ref(v_env_1568_);
lean_dec(v___x_1566_);
v_currNamespace_1569_ = lean_ctor_get(v_toCold_1567_, 4);
v_openDecls_1570_ = lean_ctor_get(v_toCold_1567_, 5);
v___x_1571_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1563_);
lean_inc(v_openDecls_1570_);
lean_inc(v_currNamespace_1569_);
v_res_1572_ = l_Lean_ResolveName_resolveGlobalName(v_env_1568_, v___x_1571_, v_currNamespace_1569_, v_openDecls_1570_, v_id_1559_);
lean_dec_ref(v___x_1571_);
v___x_1573_ = lean_st_ref_get(v___y_1564_);
if (v_enableLog_1560_ == 0)
{
lean_object* v___x_1574_; 
lean_dec(v___x_1573_);
v___x_1574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1574_, 0, v_res_1572_);
return v___x_1574_;
}
else
{
lean_object* v_env_1575_; uint8_t v_isExporting_1576_; 
v_env_1575_ = lean_ctor_get(v___x_1573_, 0);
lean_inc_ref(v_env_1575_);
lean_dec(v___x_1573_);
v_isExporting_1576_ = lean_ctor_get_uint8(v_env_1575_, sizeof(void*)*13);
lean_dec_ref(v_env_1575_);
if (v_isExporting_1576_ == 0)
{
lean_object* v___x_1577_; 
v___x_1577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1577_, 0, v_res_1572_);
return v___x_1577_;
}
else
{
lean_object* v___x_1578_; 
v___x_1578_ = l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__35(v_res_1572_);
if (lean_obj_tag(v___x_1578_) == 1)
{
lean_object* v_val_1579_; lean_object* v_fst_1580_; lean_object* v___x_1581_; 
v_val_1579_ = lean_ctor_get(v___x_1578_, 0);
lean_inc(v_val_1579_);
lean_dec_ref_known(v___x_1578_, 1);
v_fst_1580_ = lean_ctor_get(v_val_1579_, 0);
lean_inc(v_fst_1580_);
lean_dec(v_val_1579_);
v___x_1581_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36(v_fst_1580_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_);
if (lean_obj_tag(v___x_1581_) == 0)
{
lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1588_; 
v_isSharedCheck_1588_ = !lean_is_exclusive(v___x_1581_);
if (v_isSharedCheck_1588_ == 0)
{
lean_object* v_unused_1589_; 
v_unused_1589_ = lean_ctor_get(v___x_1581_, 0);
lean_dec(v_unused_1589_);
v___x_1583_ = v___x_1581_;
v_isShared_1584_ = v_isSharedCheck_1588_;
goto v_resetjp_1582_;
}
else
{
lean_dec(v___x_1581_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1588_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
lean_object* v___x_1586_; 
if (v_isShared_1584_ == 0)
{
lean_ctor_set(v___x_1583_, 0, v_res_1572_);
v___x_1586_ = v___x_1583_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v_res_1572_);
v___x_1586_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
return v___x_1586_;
}
}
}
else
{
lean_object* v_a_1590_; lean_object* v___x_1592_; uint8_t v_isShared_1593_; uint8_t v_isSharedCheck_1597_; 
lean_dec(v_res_1572_);
v_a_1590_ = lean_ctor_get(v___x_1581_, 0);
v_isSharedCheck_1597_ = !lean_is_exclusive(v___x_1581_);
if (v_isSharedCheck_1597_ == 0)
{
v___x_1592_ = v___x_1581_;
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
else
{
lean_inc(v_a_1590_);
lean_dec(v___x_1581_);
v___x_1592_ = lean_box(0);
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
v_resetjp_1591_:
{
lean_object* v___x_1595_; 
if (v_isShared_1593_ == 0)
{
v___x_1595_ = v___x_1592_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v_a_1590_);
v___x_1595_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
return v___x_1595_;
}
}
}
}
else
{
lean_object* v___x_1598_; 
lean_dec(v___x_1578_);
v___x_1598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1598_, 0, v_res_1572_);
return v___x_1598_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29___boxed(lean_object* v_id_1599_, lean_object* v_enableLog_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_){
_start:
{
uint8_t v_enableLog_boxed_1606_; lean_object* v_res_1607_; 
v_enableLog_boxed_1606_ = lean_unbox(v_enableLog_1600_);
v_res_1607_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29(v_id_1599_, v_enableLog_boxed_1606_, v___y_1601_, v___y_1602_, v___y_1603_, v___y_1604_);
lean_dec(v___y_1604_);
lean_dec_ref(v___y_1603_);
lean_dec(v___y_1602_);
lean_dec_ref(v___y_1601_);
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__30(lean_object* v_a_1608_, lean_object* v_a_1609_){
_start:
{
if (lean_obj_tag(v_a_1608_) == 0)
{
lean_object* v___x_1610_; 
v___x_1610_ = l_List_reverse___redArg(v_a_1609_);
return v___x_1610_;
}
else
{
lean_object* v_head_1611_; lean_object* v_tail_1612_; lean_object* v___x_1614_; uint8_t v_isShared_1615_; uint8_t v_isSharedCheck_1623_; 
v_head_1611_ = lean_ctor_get(v_a_1608_, 0);
v_tail_1612_ = lean_ctor_get(v_a_1608_, 1);
v_isSharedCheck_1623_ = !lean_is_exclusive(v_a_1608_);
if (v_isSharedCheck_1623_ == 0)
{
v___x_1614_ = v_a_1608_;
v_isShared_1615_ = v_isSharedCheck_1623_;
goto v_resetjp_1613_;
}
else
{
lean_inc(v_tail_1612_);
lean_inc(v_head_1611_);
lean_dec(v_a_1608_);
v___x_1614_ = lean_box(0);
v_isShared_1615_ = v_isSharedCheck_1623_;
goto v_resetjp_1613_;
}
v_resetjp_1613_:
{
lean_object* v_snd_1616_; uint8_t v___x_1617_; 
v_snd_1616_ = lean_ctor_get(v_head_1611_, 1);
v___x_1617_ = l_List_isEmpty___redArg(v_snd_1616_);
if (v___x_1617_ == 0)
{
lean_del_object(v___x_1614_);
lean_dec(v_head_1611_);
v_a_1608_ = v_tail_1612_;
goto _start;
}
else
{
lean_object* v___x_1620_; 
if (v_isShared_1615_ == 0)
{
lean_ctor_set(v___x_1614_, 1, v_a_1609_);
v___x_1620_ = v___x_1614_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v_head_1611_);
lean_ctor_set(v_reuseFailAlloc_1622_, 1, v_a_1609_);
v___x_1620_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
v_a_1608_ = v_tail_1612_;
v_a_1609_ = v___x_1620_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21(lean_object* v_view_1624_, lean_object* v_findLocalDecl_x3f_1625_, lean_object* v_n_1626_, lean_object* v_projs_1627_, uint8_t v_globalDeclFound_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_){
_start:
{
lean_object* v___y_1635_; lean_object* v___y_1636_; uint8_t v_globalDeclFoundNext_1637_; lean_object* v___y_1638_; lean_object* v___y_1639_; lean_object* v___y_1640_; lean_object* v___y_1641_; lean_object* v_imported_1644_; lean_object* v_ctx_1645_; lean_object* v_scopes_1646_; lean_object* v_givenNameView_1647_; uint8_t v___y_1649_; 
v_imported_1644_ = lean_ctor_get(v_view_1624_, 1);
v_ctx_1645_ = lean_ctor_get(v_view_1624_, 2);
v_scopes_1646_ = lean_ctor_get(v_view_1624_, 3);
lean_inc(v_scopes_1646_);
lean_inc(v_ctx_1645_);
lean_inc(v_imported_1644_);
lean_inc(v_n_1626_);
v_givenNameView_1647_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_givenNameView_1647_, 0, v_n_1626_);
lean_ctor_set(v_givenNameView_1647_, 1, v_imported_1644_);
lean_ctor_set(v_givenNameView_1647_, 2, v_ctx_1645_);
lean_ctor_set(v_givenNameView_1647_, 3, v_scopes_1646_);
if (v_globalDeclFound_1628_ == 0)
{
v___y_1649_ = v_globalDeclFound_1628_;
goto v___jp_1648_;
}
else
{
uint8_t v___x_1684_; 
v___x_1684_ = l_List_isEmpty___redArg(v_projs_1627_);
if (v___x_1684_ == 0)
{
v___y_1649_ = v_globalDeclFound_1628_;
goto v___jp_1648_;
}
else
{
uint8_t v___x_1685_; 
v___x_1685_ = 0;
v___y_1649_ = v___x_1685_;
goto v___jp_1648_;
}
}
v___jp_1634_:
{
lean_object* v___x_1642_; 
v___x_1642_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1642_, 0, v___y_1636_);
lean_ctor_set(v___x_1642_, 1, v_projs_1627_);
v_n_1626_ = v___y_1635_;
v_projs_1627_ = v___x_1642_;
v_globalDeclFound_1628_ = v_globalDeclFoundNext_1637_;
v___y_1629_ = v___y_1638_;
v___y_1630_ = v___y_1639_;
v___y_1631_ = v___y_1640_;
v___y_1632_ = v___y_1641_;
goto _start;
}
v___jp_1648_:
{
lean_object* v___x_1650_; lean_object* v___x_1651_; 
v___x_1650_ = lean_box(v___y_1649_);
lean_inc_ref(v_findLocalDecl_x3f_1625_);
lean_inc_ref(v_givenNameView_1647_);
v___x_1651_ = lean_apply_2(v_findLocalDecl_x3f_1625_, v_givenNameView_1647_, v___x_1650_);
if (lean_obj_tag(v___x_1651_) == 0)
{
if (lean_obj_tag(v_n_1626_) == 1)
{
if (v_globalDeclFound_1628_ == 0)
{
lean_object* v_pre_1652_; lean_object* v_str_1653_; uint8_t v_globalDeclFoundNext_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; 
v_pre_1652_ = lean_ctor_get(v_n_1626_, 0);
lean_inc(v_pre_1652_);
v_str_1653_ = lean_ctor_get(v_n_1626_, 1);
lean_inc_ref(v_str_1653_);
lean_dec_ref_known(v_n_1626_, 2);
v_globalDeclFoundNext_1654_ = 1;
v___x_1655_ = l_Lean_MacroScopesView_review(v_givenNameView_1647_);
v___x_1656_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29(v___x_1655_, v_globalDeclFound_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_);
if (lean_obj_tag(v___x_1656_) == 0)
{
lean_object* v_a_1657_; lean_object* v___x_1658_; lean_object* v_r_1659_; uint8_t v___x_1660_; 
v_a_1657_ = lean_ctor_get(v___x_1656_, 0);
lean_inc(v_a_1657_);
lean_dec_ref_known(v___x_1656_, 1);
v___x_1658_ = lean_box(0);
v_r_1659_ = l_List_filterTR_loop___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__30(v_a_1657_, v___x_1658_);
v___x_1660_ = l_List_isEmpty___redArg(v_r_1659_);
lean_dec(v_r_1659_);
if (v___x_1660_ == 0)
{
v___y_1635_ = v_pre_1652_;
v___y_1636_ = v_str_1653_;
v_globalDeclFoundNext_1637_ = v_globalDeclFoundNext_1654_;
v___y_1638_ = v___y_1629_;
v___y_1639_ = v___y_1630_;
v___y_1640_ = v___y_1631_;
v___y_1641_ = v___y_1632_;
goto v___jp_1634_;
}
else
{
v___y_1635_ = v_pre_1652_;
v___y_1636_ = v_str_1653_;
v_globalDeclFoundNext_1637_ = v_globalDeclFound_1628_;
v___y_1638_ = v___y_1629_;
v___y_1639_ = v___y_1630_;
v___y_1640_ = v___y_1631_;
v___y_1641_ = v___y_1632_;
goto v___jp_1634_;
}
}
else
{
lean_object* v_a_1661_; lean_object* v___x_1663_; uint8_t v_isShared_1664_; uint8_t v_isSharedCheck_1668_; 
lean_dec_ref(v_str_1653_);
lean_dec(v_pre_1652_);
lean_dec(v_projs_1627_);
lean_dec_ref(v_findLocalDecl_x3f_1625_);
v_a_1661_ = lean_ctor_get(v___x_1656_, 0);
v_isSharedCheck_1668_ = !lean_is_exclusive(v___x_1656_);
if (v_isSharedCheck_1668_ == 0)
{
v___x_1663_ = v___x_1656_;
v_isShared_1664_ = v_isSharedCheck_1668_;
goto v_resetjp_1662_;
}
else
{
lean_inc(v_a_1661_);
lean_dec(v___x_1656_);
v___x_1663_ = lean_box(0);
v_isShared_1664_ = v_isSharedCheck_1668_;
goto v_resetjp_1662_;
}
v_resetjp_1662_:
{
lean_object* v___x_1666_; 
if (v_isShared_1664_ == 0)
{
v___x_1666_ = v___x_1663_;
goto v_reusejp_1665_;
}
else
{
lean_object* v_reuseFailAlloc_1667_; 
v_reuseFailAlloc_1667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1667_, 0, v_a_1661_);
v___x_1666_ = v_reuseFailAlloc_1667_;
goto v_reusejp_1665_;
}
v_reusejp_1665_:
{
return v___x_1666_;
}
}
}
}
else
{
lean_object* v_pre_1669_; lean_object* v_str_1670_; 
lean_dec_ref_known(v_givenNameView_1647_, 4);
v_pre_1669_ = lean_ctor_get(v_n_1626_, 0);
lean_inc(v_pre_1669_);
v_str_1670_ = lean_ctor_get(v_n_1626_, 1);
lean_inc_ref(v_str_1670_);
lean_dec_ref_known(v_n_1626_, 2);
v___y_1635_ = v_pre_1669_;
v___y_1636_ = v_str_1670_;
v_globalDeclFoundNext_1637_ = v_globalDeclFound_1628_;
v___y_1638_ = v___y_1629_;
v___y_1639_ = v___y_1630_;
v___y_1640_ = v___y_1631_;
v___y_1641_ = v___y_1632_;
goto v___jp_1634_;
}
}
else
{
lean_object* v___x_1671_; lean_object* v___x_1672_; 
lean_dec_ref_known(v_givenNameView_1647_, 4);
lean_dec(v_projs_1627_);
lean_dec(v_n_1626_);
lean_dec_ref(v_findLocalDecl_x3f_1625_);
v___x_1671_ = lean_box(0);
v___x_1672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1672_, 0, v___x_1671_);
return v___x_1672_;
}
}
else
{
lean_object* v_val_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1683_; 
lean_dec_ref_known(v_givenNameView_1647_, 4);
lean_dec(v_n_1626_);
lean_dec_ref(v_findLocalDecl_x3f_1625_);
v_val_1673_ = lean_ctor_get(v___x_1651_, 0);
v_isSharedCheck_1683_ = !lean_is_exclusive(v___x_1651_);
if (v_isSharedCheck_1683_ == 0)
{
v___x_1675_ = v___x_1651_;
v_isShared_1676_ = v_isSharedCheck_1683_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_val_1673_);
lean_dec(v___x_1651_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1683_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1680_; 
v___x_1677_ = l_Lean_LocalDecl_toExpr(v_val_1673_);
v___x_1678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1678_, 0, v___x_1677_);
lean_ctor_set(v___x_1678_, 1, v_projs_1627_);
if (v_isShared_1676_ == 0)
{
lean_ctor_set(v___x_1675_, 0, v___x_1678_);
v___x_1680_ = v___x_1675_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v___x_1678_);
v___x_1680_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
lean_object* v___x_1681_; 
v___x_1681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1681_, 0, v___x_1680_);
return v___x_1681_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21___boxed(lean_object* v_view_1686_, lean_object* v_findLocalDecl_x3f_1687_, lean_object* v_n_1688_, lean_object* v_projs_1689_, lean_object* v_globalDeclFound_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_){
_start:
{
uint8_t v_globalDeclFound_boxed_1696_; lean_object* v_res_1697_; 
v_globalDeclFound_boxed_1696_ = lean_unbox(v_globalDeclFound_1690_);
v_res_1697_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21(v_view_1686_, v_findLocalDecl_x3f_1687_, v_n_1688_, v_projs_1689_, v_globalDeclFound_boxed_1696_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_);
lean_dec(v___y_1694_);
lean_dec_ref(v___y_1693_);
lean_dec(v___y_1692_);
lean_dec_ref(v___y_1691_);
lean_dec_ref(v_view_1686_);
return v_res_1697_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11(lean_object* v_n_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_){
_start:
{
lean_object* v_lctx_1704_; lean_object* v_toCold_1705_; lean_object* v_decls_1706_; lean_object* v_auxDeclToFullName_1707_; lean_object* v_currNamespace_1708_; lean_object* v_view_1709_; lean_object* v_name_1710_; lean_object* v_findLocalDecl_x3f_1711_; lean_object* v___x_1712_; uint8_t v___x_1713_; lean_object* v___x_1714_; 
v_lctx_1704_ = lean_ctor_get(v___y_1699_, 2);
v_toCold_1705_ = lean_ctor_get(v___y_1701_, 0);
v_decls_1706_ = lean_ctor_get(v_lctx_1704_, 1);
v_auxDeclToFullName_1707_ = lean_ctor_get(v_lctx_1704_, 2);
v_currNamespace_1708_ = lean_ctor_get(v_toCold_1705_, 4);
v_view_1709_ = l_Lean_extractMacroScopes(v_n_1698_);
v_name_1710_ = lean_ctor_get(v_view_1709_, 0);
lean_inc(v_name_1710_);
lean_inc_ref(v_decls_1706_);
lean_inc(v_currNamespace_1708_);
lean_inc(v_auxDeclToFullName_1707_);
v_findLocalDecl_x3f_1711_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11___lam__0___boxed), 5, 3);
lean_closure_set(v_findLocalDecl_x3f_1711_, 0, v_auxDeclToFullName_1707_);
lean_closure_set(v_findLocalDecl_x3f_1711_, 1, v_currNamespace_1708_);
lean_closure_set(v_findLocalDecl_x3f_1711_, 2, v_decls_1706_);
v___x_1712_ = lean_box(0);
v___x_1713_ = 0;
v___x_1714_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21(v_view_1709_, v_findLocalDecl_x3f_1711_, v_name_1710_, v___x_1712_, v___x_1713_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_);
lean_dec_ref(v_view_1709_);
return v___x_1714_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11___boxed(lean_object* v_n_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_){
_start:
{
lean_object* v_res_1721_; 
v_res_1721_ = l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11(v_n_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_);
lean_dec(v___y_1719_);
lean_dec_ref(v___y_1718_);
lean_dec(v___y_1717_);
lean_dec_ref(v___y_1716_);
return v_res_1721_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5___lam__0(uint8_t v___x_1722_, lean_object* v_n_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_){
_start:
{
lean_object* v___x_1729_; 
v___x_1729_ = l_Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11(v_n_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_);
if (lean_obj_tag(v___x_1729_) == 0)
{
lean_object* v_a_1730_; lean_object* v___x_1732_; uint8_t v_isShared_1733_; uint8_t v_isSharedCheck_1743_; 
v_a_1730_ = lean_ctor_get(v___x_1729_, 0);
v_isSharedCheck_1743_ = !lean_is_exclusive(v___x_1729_);
if (v_isSharedCheck_1743_ == 0)
{
v___x_1732_ = v___x_1729_;
v_isShared_1733_ = v_isSharedCheck_1743_;
goto v_resetjp_1731_;
}
else
{
lean_inc(v_a_1730_);
lean_dec(v___x_1729_);
v___x_1732_ = lean_box(0);
v_isShared_1733_ = v_isSharedCheck_1743_;
goto v_resetjp_1731_;
}
v_resetjp_1731_:
{
if (lean_obj_tag(v_a_1730_) == 0)
{
uint8_t v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1737_; 
v___x_1734_ = 1;
v___x_1735_ = lean_box(v___x_1734_);
if (v_isShared_1733_ == 0)
{
lean_ctor_set(v___x_1732_, 0, v___x_1735_);
v___x_1737_ = v___x_1732_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v___x_1735_);
v___x_1737_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
return v___x_1737_;
}
}
else
{
lean_object* v___x_1739_; lean_object* v___x_1741_; 
lean_dec_ref_known(v_a_1730_, 1);
v___x_1739_ = lean_box(v___x_1722_);
if (v_isShared_1733_ == 0)
{
lean_ctor_set(v___x_1732_, 0, v___x_1739_);
v___x_1741_ = v___x_1732_;
goto v_reusejp_1740_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v___x_1739_);
v___x_1741_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1740_;
}
v_reusejp_1740_:
{
return v___x_1741_;
}
}
}
}
else
{
lean_object* v_a_1744_; lean_object* v___x_1746_; uint8_t v_isShared_1747_; uint8_t v_isSharedCheck_1751_; 
v_a_1744_ = lean_ctor_get(v___x_1729_, 0);
v_isSharedCheck_1751_ = !lean_is_exclusive(v___x_1729_);
if (v_isSharedCheck_1751_ == 0)
{
v___x_1746_ = v___x_1729_;
v_isShared_1747_ = v_isSharedCheck_1751_;
goto v_resetjp_1745_;
}
else
{
lean_inc(v_a_1744_);
lean_dec(v___x_1729_);
v___x_1746_ = lean_box(0);
v_isShared_1747_ = v_isSharedCheck_1751_;
goto v_resetjp_1745_;
}
v_resetjp_1745_:
{
lean_object* v___x_1749_; 
if (v_isShared_1747_ == 0)
{
v___x_1749_ = v___x_1746_;
goto v_reusejp_1748_;
}
else
{
lean_object* v_reuseFailAlloc_1750_; 
v_reuseFailAlloc_1750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1750_, 0, v_a_1744_);
v___x_1749_ = v_reuseFailAlloc_1750_;
goto v_reusejp_1748_;
}
v_reusejp_1748_:
{
return v___x_1749_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5___lam__0___boxed(lean_object* v___x_1752_, lean_object* v_n_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_){
_start:
{
uint8_t v___x_46803__boxed_1759_; lean_object* v_res_1760_; 
v___x_46803__boxed_1759_ = lean_unbox(v___x_1752_);
v_res_1760_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5___lam__0(v___x_46803__boxed_1759_, v_n_1753_, v___y_1754_, v___y_1755_, v___y_1756_, v___y_1757_);
lean_dec(v___y_1757_);
lean_dec_ref(v___y_1756_);
lean_dec(v___y_1755_);
lean_dec_ref(v___y_1754_);
return v_res_1760_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5(lean_object* v_n_u2080_1764_, uint8_t v_fullNames_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_){
_start:
{
uint8_t v___x_1771_; lean_object* v___f_1772_; lean_object* v___x_1773_; 
v___x_1771_ = 0;
v___f_1772_ = ((lean_object*)(l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5___closed__0));
v___x_1773_ = l_Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12(v_n_u2080_1764_, v_fullNames_1765_, v___x_1771_, v___f_1772_, v___y_1766_, v___y_1767_, v___y_1768_, v___y_1769_);
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5___boxed(lean_object* v_n_u2080_1774_, lean_object* v_fullNames_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_){
_start:
{
uint8_t v_fullNames_boxed_1781_; lean_object* v_res_1782_; 
v_fullNames_boxed_1781_ = lean_unbox(v_fullNames_1775_);
v_res_1782_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5(v_n_u2080_1774_, v_fullNames_boxed_1781_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_);
lean_dec(v___y_1779_);
lean_dec_ref(v___y_1778_);
lean_dec(v___y_1777_);
lean_dec_ref(v___y_1776_);
return v_res_1782_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3_spec__8___redArg(lean_object* v_o_1783_, lean_object* v___y_1784_){
_start:
{
lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v_env_1788_; lean_object* v___x_1789_; lean_object* v_toEnvExtension_1790_; lean_object* v_asyncMode_1791_; lean_object* v___x_1792_; uint8_t v___x_1793_; lean_object* v___x_1794_; lean_object* v_merged_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1803_; 
v___x_1786_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_1787_ = lean_st_ref_get(v___y_1784_);
v_env_1788_ = lean_ctor_get(v___x_1787_, 0);
lean_inc_ref(v_env_1788_);
lean_dec(v___x_1787_);
v___x_1789_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_1790_ = lean_ctor_get(v___x_1789_, 0);
v_asyncMode_1791_ = lean_ctor_get(v_toEnvExtension_1790_, 2);
v___x_1792_ = lean_box(0);
v___x_1793_ = 0;
v___x_1794_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1786_, v___x_1789_, v_env_1788_, v_asyncMode_1791_, v___x_1792_, v___x_1793_);
v_merged_1795_ = lean_ctor_get(v___x_1794_, 0);
v_isSharedCheck_1803_ = !lean_is_exclusive(v___x_1794_);
if (v_isSharedCheck_1803_ == 0)
{
lean_object* v_unused_1804_; 
v_unused_1804_ = lean_ctor_get(v___x_1794_, 1);
lean_dec(v_unused_1804_);
v___x_1797_ = v___x_1794_;
v_isShared_1798_ = v_isSharedCheck_1803_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_merged_1795_);
lean_dec(v___x_1794_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1803_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v___x_1800_; 
if (v_isShared_1798_ == 0)
{
lean_ctor_set(v___x_1797_, 1, v_merged_1795_);
lean_ctor_set(v___x_1797_, 0, v_o_1783_);
v___x_1800_ = v___x_1797_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v_o_1783_);
lean_ctor_set(v_reuseFailAlloc_1802_, 1, v_merged_1795_);
v___x_1800_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
lean_object* v___x_1801_; 
v___x_1801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1801_, 0, v___x_1800_);
return v___x_1801_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3_spec__8___redArg___boxed(lean_object* v_o_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_){
_start:
{
lean_object* v_res_1808_; 
v_res_1808_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3_spec__8___redArg(v_o_1805_, v___y_1806_);
lean_dec(v___y_1806_);
return v_res_1808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3(lean_object* v___y_1809_, lean_object* v___y_1810_){
_start:
{
lean_object* v___x_1812_; lean_object* v___x_1813_; 
v___x_1812_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1809_);
v___x_1813_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3_spec__8___redArg(v___x_1812_, v___y_1810_);
return v___x_1813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3___boxed(lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_){
_start:
{
lean_object* v_res_1817_; 
v_res_1817_ = l_Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3(v___y_1814_, v___y_1815_);
lean_dec(v___y_1815_);
lean_dec_ref(v___y_1814_);
return v_res_1817_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___lam__0(lean_object* v___x_1818_, lean_object* v_entry_1819_, lean_object* v_s_1820_){
_start:
{
lean_object* v_addEntryFn_1821_; lean_object* v_importedEntries_1822_; lean_object* v_state_1823_; lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1831_; 
v_addEntryFn_1821_ = lean_ctor_get(v___x_1818_, 3);
lean_inc(v_addEntryFn_1821_);
lean_dec_ref(v___x_1818_);
v_importedEntries_1822_ = lean_ctor_get(v_s_1820_, 0);
v_state_1823_ = lean_ctor_get(v_s_1820_, 1);
v_isSharedCheck_1831_ = !lean_is_exclusive(v_s_1820_);
if (v_isSharedCheck_1831_ == 0)
{
v___x_1825_ = v_s_1820_;
v_isShared_1826_ = v_isSharedCheck_1831_;
goto v_resetjp_1824_;
}
else
{
lean_inc(v_state_1823_);
lean_inc(v_importedEntries_1822_);
lean_dec(v_s_1820_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1831_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
lean_object* v_state_1827_; lean_object* v___x_1829_; 
v_state_1827_ = lean_apply_2(v_addEntryFn_1821_, v_state_1823_, v_entry_1819_);
if (v_isShared_1826_ == 0)
{
lean_ctor_set(v___x_1825_, 1, v_state_1827_);
v___x_1829_ = v___x_1825_;
goto v_reusejp_1828_;
}
else
{
lean_object* v_reuseFailAlloc_1830_; 
v_reuseFailAlloc_1830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1830_, 0, v_importedEntries_1822_);
lean_ctor_set(v_reuseFailAlloc_1830_, 1, v_state_1827_);
v___x_1829_ = v_reuseFailAlloc_1830_;
goto v_reusejp_1828_;
}
v_reusejp_1828_:
{
return v___x_1829_;
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__14___redArg(lean_object* v_a_1832_, lean_object* v_x_1833_){
_start:
{
if (lean_obj_tag(v_x_1833_) == 0)
{
uint8_t v___x_1834_; 
v___x_1834_ = 0;
return v___x_1834_;
}
else
{
lean_object* v_key_1835_; lean_object* v_tail_1836_; uint8_t v___x_1837_; 
v_key_1835_ = lean_ctor_get(v_x_1833_, 0);
v_tail_1836_ = lean_ctor_get(v_x_1833_, 2);
v___x_1837_ = l_Lean_instBEqExtraModUse_beq(v_key_1835_, v_a_1832_);
if (v___x_1837_ == 0)
{
v_x_1833_ = v_tail_1836_;
goto _start;
}
else
{
return v___x_1837_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__14___redArg___boxed(lean_object* v_a_1839_, lean_object* v_x_1840_){
_start:
{
uint8_t v_res_1841_; lean_object* v_r_1842_; 
v_res_1841_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__14___redArg(v_a_1839_, v_x_1840_);
lean_dec(v_x_1840_);
lean_dec_ref(v_a_1839_);
v_r_1842_ = lean_box(v_res_1841_);
return v_r_1842_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__15_spec__21_spec__32___redArg(lean_object* v_x_1843_, lean_object* v_x_1844_){
_start:
{
if (lean_obj_tag(v_x_1844_) == 0)
{
return v_x_1843_;
}
else
{
lean_object* v_key_1845_; lean_object* v_value_1846_; lean_object* v_tail_1847_; lean_object* v___x_1849_; uint8_t v_isShared_1850_; uint8_t v_isSharedCheck_1870_; 
v_key_1845_ = lean_ctor_get(v_x_1844_, 0);
v_value_1846_ = lean_ctor_get(v_x_1844_, 1);
v_tail_1847_ = lean_ctor_get(v_x_1844_, 2);
v_isSharedCheck_1870_ = !lean_is_exclusive(v_x_1844_);
if (v_isSharedCheck_1870_ == 0)
{
v___x_1849_ = v_x_1844_;
v_isShared_1850_ = v_isSharedCheck_1870_;
goto v_resetjp_1848_;
}
else
{
lean_inc(v_tail_1847_);
lean_inc(v_value_1846_);
lean_inc(v_key_1845_);
lean_dec(v_x_1844_);
v___x_1849_ = lean_box(0);
v_isShared_1850_ = v_isSharedCheck_1870_;
goto v_resetjp_1848_;
}
v_resetjp_1848_:
{
lean_object* v___x_1851_; uint64_t v___x_1852_; uint64_t v___x_1853_; uint64_t v___x_1854_; uint64_t v_fold_1855_; uint64_t v___x_1856_; uint64_t v___x_1857_; uint64_t v___x_1858_; size_t v___x_1859_; size_t v___x_1860_; size_t v___x_1861_; size_t v___x_1862_; size_t v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1866_; 
v___x_1851_ = lean_array_get_size(v_x_1843_);
v___x_1852_ = l_Lean_instHashableExtraModUse_hash(v_key_1845_);
v___x_1853_ = 32ULL;
v___x_1854_ = lean_uint64_shift_right(v___x_1852_, v___x_1853_);
v_fold_1855_ = lean_uint64_xor(v___x_1852_, v___x_1854_);
v___x_1856_ = 16ULL;
v___x_1857_ = lean_uint64_shift_right(v_fold_1855_, v___x_1856_);
v___x_1858_ = lean_uint64_xor(v_fold_1855_, v___x_1857_);
v___x_1859_ = lean_uint64_to_usize(v___x_1858_);
v___x_1860_ = lean_usize_of_nat(v___x_1851_);
v___x_1861_ = ((size_t)1ULL);
v___x_1862_ = lean_usize_sub(v___x_1860_, v___x_1861_);
v___x_1863_ = lean_usize_land(v___x_1859_, v___x_1862_);
v___x_1864_ = lean_array_uget_borrowed(v_x_1843_, v___x_1863_);
lean_inc(v___x_1864_);
if (v_isShared_1850_ == 0)
{
lean_ctor_set(v___x_1849_, 2, v___x_1864_);
v___x_1866_ = v___x_1849_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1869_; 
v_reuseFailAlloc_1869_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1869_, 0, v_key_1845_);
lean_ctor_set(v_reuseFailAlloc_1869_, 1, v_value_1846_);
lean_ctor_set(v_reuseFailAlloc_1869_, 2, v___x_1864_);
v___x_1866_ = v_reuseFailAlloc_1869_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
lean_object* v___x_1867_; 
v___x_1867_ = lean_array_uset(v_x_1843_, v___x_1863_, v___x_1866_);
v_x_1843_ = v___x_1867_;
v_x_1844_ = v_tail_1847_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__15_spec__21___redArg(lean_object* v_i_1871_, lean_object* v_source_1872_, lean_object* v_target_1873_){
_start:
{
lean_object* v___x_1874_; uint8_t v___x_1875_; 
v___x_1874_ = lean_array_get_size(v_source_1872_);
v___x_1875_ = lean_nat_dec_lt(v_i_1871_, v___x_1874_);
if (v___x_1875_ == 0)
{
lean_dec_ref(v_source_1872_);
lean_dec(v_i_1871_);
return v_target_1873_;
}
else
{
lean_object* v_es_1876_; lean_object* v___x_1877_; lean_object* v_source_1878_; lean_object* v_target_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; 
v_es_1876_ = lean_array_fget(v_source_1872_, v_i_1871_);
v___x_1877_ = lean_box(0);
v_source_1878_ = lean_array_fset(v_source_1872_, v_i_1871_, v___x_1877_);
v_target_1879_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__15_spec__21_spec__32___redArg(v_target_1873_, v_es_1876_);
v___x_1880_ = lean_unsigned_to_nat(1u);
v___x_1881_ = lean_nat_add(v_i_1871_, v___x_1880_);
lean_dec(v_i_1871_);
v_i_1871_ = v___x_1881_;
v_source_1872_ = v_source_1878_;
v_target_1873_ = v_target_1879_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__15___redArg(lean_object* v_data_1883_){
_start:
{
lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v_nbuckets_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; 
v___x_1884_ = lean_array_get_size(v_data_1883_);
v___x_1885_ = lean_unsigned_to_nat(2u);
v_nbuckets_1886_ = lean_nat_mul(v___x_1884_, v___x_1885_);
v___x_1887_ = lean_unsigned_to_nat(0u);
v___x_1888_ = lean_box(0);
v___x_1889_ = lean_mk_array(v_nbuckets_1886_, v___x_1888_);
v___x_1890_ = lean_array_propagate_mark(v_data_1883_, v___x_1889_);
v___x_1891_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__15_spec__21___redArg(v___x_1887_, v_data_1883_, v___x_1890_);
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9___redArg(lean_object* v_m_1892_, lean_object* v_a_1893_, lean_object* v_b_1894_){
_start:
{
lean_object* v_size_1895_; lean_object* v_buckets_1896_; lean_object* v___x_1897_; uint64_t v___x_1898_; uint64_t v___x_1899_; uint64_t v___x_1900_; uint64_t v_fold_1901_; uint64_t v___x_1902_; uint64_t v___x_1903_; uint64_t v___x_1904_; size_t v___x_1905_; size_t v___x_1906_; size_t v___x_1907_; size_t v___x_1908_; size_t v___x_1909_; lean_object* v_bkt_1910_; uint8_t v___x_1911_; 
v_size_1895_ = lean_ctor_get(v_m_1892_, 0);
v_buckets_1896_ = lean_ctor_get(v_m_1892_, 1);
v___x_1897_ = lean_array_get_size(v_buckets_1896_);
v___x_1898_ = l_Lean_instHashableExtraModUse_hash(v_a_1893_);
v___x_1899_ = 32ULL;
v___x_1900_ = lean_uint64_shift_right(v___x_1898_, v___x_1899_);
v_fold_1901_ = lean_uint64_xor(v___x_1898_, v___x_1900_);
v___x_1902_ = 16ULL;
v___x_1903_ = lean_uint64_shift_right(v_fold_1901_, v___x_1902_);
v___x_1904_ = lean_uint64_xor(v_fold_1901_, v___x_1903_);
v___x_1905_ = lean_uint64_to_usize(v___x_1904_);
v___x_1906_ = lean_usize_of_nat(v___x_1897_);
v___x_1907_ = ((size_t)1ULL);
v___x_1908_ = lean_usize_sub(v___x_1906_, v___x_1907_);
v___x_1909_ = lean_usize_land(v___x_1905_, v___x_1908_);
v_bkt_1910_ = lean_array_uget_borrowed(v_buckets_1896_, v___x_1909_);
v___x_1911_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__14___redArg(v_a_1893_, v_bkt_1910_);
if (v___x_1911_ == 0)
{
lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1932_; 
lean_inc_ref(v_buckets_1896_);
lean_inc(v_size_1895_);
v_isSharedCheck_1932_ = !lean_is_exclusive(v_m_1892_);
if (v_isSharedCheck_1932_ == 0)
{
lean_object* v_unused_1933_; lean_object* v_unused_1934_; 
v_unused_1933_ = lean_ctor_get(v_m_1892_, 1);
lean_dec(v_unused_1933_);
v_unused_1934_ = lean_ctor_get(v_m_1892_, 0);
lean_dec(v_unused_1934_);
v___x_1913_ = v_m_1892_;
v_isShared_1914_ = v_isSharedCheck_1932_;
goto v_resetjp_1912_;
}
else
{
lean_dec(v_m_1892_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1932_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1915_; lean_object* v_size_x27_1916_; lean_object* v___x_1917_; lean_object* v_buckets_x27_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; uint8_t v___x_1924_; 
v___x_1915_ = lean_unsigned_to_nat(1u);
v_size_x27_1916_ = lean_nat_add(v_size_1895_, v___x_1915_);
lean_dec(v_size_1895_);
lean_inc(v_bkt_1910_);
v___x_1917_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1917_, 0, v_a_1893_);
lean_ctor_set(v___x_1917_, 1, v_b_1894_);
lean_ctor_set(v___x_1917_, 2, v_bkt_1910_);
v_buckets_x27_1918_ = lean_array_uset(v_buckets_1896_, v___x_1909_, v___x_1917_);
v___x_1919_ = lean_unsigned_to_nat(4u);
v___x_1920_ = lean_nat_mul(v_size_x27_1916_, v___x_1919_);
v___x_1921_ = lean_unsigned_to_nat(3u);
v___x_1922_ = lean_nat_div(v___x_1920_, v___x_1921_);
lean_dec(v___x_1920_);
v___x_1923_ = lean_array_get_size(v_buckets_x27_1918_);
v___x_1924_ = lean_nat_dec_le(v___x_1922_, v___x_1923_);
lean_dec(v___x_1922_);
if (v___x_1924_ == 0)
{
lean_object* v_val_1925_; lean_object* v___x_1927_; 
v_val_1925_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__15___redArg(v_buckets_x27_1918_);
if (v_isShared_1914_ == 0)
{
lean_ctor_set(v___x_1913_, 1, v_val_1925_);
lean_ctor_set(v___x_1913_, 0, v_size_x27_1916_);
v___x_1927_ = v___x_1913_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v_size_x27_1916_);
lean_ctor_set(v_reuseFailAlloc_1928_, 1, v_val_1925_);
v___x_1927_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
return v___x_1927_;
}
}
else
{
lean_object* v___x_1930_; 
if (v_isShared_1914_ == 0)
{
lean_ctor_set(v___x_1913_, 1, v_buckets_x27_1918_);
lean_ctor_set(v___x_1913_, 0, v_size_x27_1916_);
v___x_1930_ = v___x_1913_;
goto v_reusejp_1929_;
}
else
{
lean_object* v_reuseFailAlloc_1931_; 
v_reuseFailAlloc_1931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1931_, 0, v_size_x27_1916_);
lean_ctor_set(v_reuseFailAlloc_1931_, 1, v_buckets_x27_1918_);
v___x_1930_ = v_reuseFailAlloc_1931_;
goto v_reusejp_1929_;
}
v_reusejp_1929_:
{
return v___x_1930_;
}
}
}
}
else
{
lean_dec(v_b_1894_);
lean_dec_ref(v_a_1893_);
return v_m_1892_;
}
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1935_; 
v___x_1935_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1935_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; 
v___x_1936_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_1937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1937_, 0, v___x_1936_);
return v___x_1937_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___x_1938_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_1939_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_1940_ = lean_unsigned_to_nat(0u);
v___x_1941_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1941_, 0, v___x_1940_);
lean_ctor_set(v___x_1941_, 1, v___x_1940_);
lean_ctor_set(v___x_1941_, 2, v___x_1940_);
lean_ctor_set(v___x_1941_, 3, v___x_1940_);
lean_ctor_set(v___x_1941_, 4, v___x_1939_);
lean_ctor_set(v___x_1941_, 5, v___x_1939_);
lean_ctor_set(v___x_1941_, 6, v___x_1939_);
lean_ctor_set(v___x_1941_, 7, v___x_1939_);
lean_ctor_set(v___x_1941_, 8, v___x_1939_);
lean_ctor_set(v___x_1941_, 9, v___x_1939_);
lean_ctor_set(v___x_1941_, 10, v___x_1939_);
lean_ctor_set(v___x_1941_, 11, v___x_1938_);
return v___x_1941_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; 
v___x_1942_ = lean_unsigned_to_nat(32u);
v___x_1943_ = lean_mk_empty_array_with_capacity(v___x_1942_);
v___x_1944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1944_, 0, v___x_1943_);
return v___x_1944_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; 
v___x_1945_ = ((size_t)5ULL);
v___x_1946_ = lean_unsigned_to_nat(0u);
v___x_1947_ = lean_unsigned_to_nat(32u);
v___x_1948_ = lean_mk_empty_array_with_capacity(v___x_1947_);
v___x_1949_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__3);
v___x_1950_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1950_, 0, v___x_1949_);
lean_ctor_set(v___x_1950_, 1, v___x_1948_);
lean_ctor_set(v___x_1950_, 2, v___x_1946_);
lean_ctor_set(v___x_1950_, 3, v___x_1946_);
lean_ctor_set_usize(v___x_1950_, 4, v___x_1945_);
return v___x_1950_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; 
v___x_1951_ = lean_box(1);
v___x_1952_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__4);
v___x_1953_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_1954_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1954_, 0, v___x_1953_);
lean_ctor_set(v___x_1954_, 1, v___x_1952_);
lean_ctor_set(v___x_1954_, 2, v___x_1951_);
return v___x_1954_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_msgData_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_){
_start:
{
lean_object* v___x_1959_; lean_object* v_toCold_1960_; lean_object* v_env_1961_; lean_object* v_options_1962_; uint8_t v___x_1963_; lean_object* v_env_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; 
v___x_1959_ = lean_st_ref_get(v___y_1957_);
v_toCold_1960_ = lean_ctor_get(v___y_1956_, 0);
v_env_1961_ = lean_ctor_get(v___x_1959_, 0);
lean_inc_ref(v_env_1961_);
lean_dec(v___x_1959_);
v_options_1962_ = lean_ctor_get(v_toCold_1960_, 2);
v___x_1963_ = 0;
v_env_1964_ = l_Lean_Environment_setRecordingDeps(v_env_1961_, v___x_1963_);
v___x_1965_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__2);
v___x_1966_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__5);
lean_inc_ref(v_options_1962_);
v___x_1967_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1967_, 0, v_env_1964_);
lean_ctor_set(v___x_1967_, 1, v___x_1965_);
lean_ctor_set(v___x_1967_, 2, v___x_1966_);
lean_ctor_set(v___x_1967_, 3, v_options_1962_);
v___x_1968_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1968_, 0, v___x_1967_);
lean_ctor_set(v___x_1968_, 1, v_msgData_1955_);
v___x_1969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1969_, 0, v___x_1968_);
return v___x_1969_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_msgData_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_){
_start:
{
lean_object* v_res_1974_; 
v_res_1974_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0(v_msgData_1970_, v___y_1971_, v___y_1972_);
lean_dec(v___y_1972_);
lean_dec_ref(v___y_1971_);
return v_res_1974_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__10___closed__0(void){
_start:
{
lean_object* v___x_1975_; double v___x_1976_; 
v___x_1975_ = lean_unsigned_to_nat(0u);
v___x_1976_ = lean_float_of_nat(v___x_1975_);
return v___x_1976_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__10(lean_object* v_cls_1979_, lean_object* v_msg_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_){
_start:
{
lean_object* v_ref_1984_; lean_object* v___x_1985_; lean_object* v_a_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_2031_; 
v_ref_1984_ = lean_ctor_get(v___y_1981_, 2);
v___x_1985_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0(v_msg_1980_, v___y_1981_, v___y_1982_);
v_a_1986_ = lean_ctor_get(v___x_1985_, 0);
v_isSharedCheck_2031_ = !lean_is_exclusive(v___x_1985_);
if (v_isSharedCheck_2031_ == 0)
{
v___x_1988_ = v___x_1985_;
v_isShared_1989_ = v_isSharedCheck_2031_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_a_1986_);
lean_dec(v___x_1985_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_2031_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v___x_1990_; lean_object* v_traceState_1991_; lean_object* v_env_1992_; lean_object* v_nextMacroScope_1993_; lean_object* v_ngen_1994_; lean_object* v_auxDeclNGen_1995_; lean_object* v_cache_1996_; lean_object* v_recordedDeps_1997_; lean_object* v_messages_1998_; lean_object* v_infoState_1999_; lean_object* v_snapshotTasks_2000_; lean_object* v___x_2002_; uint8_t v_isShared_2003_; uint8_t v_isSharedCheck_2030_; 
v___x_1990_ = lean_st_ref_take(v___y_1982_);
v_traceState_1991_ = lean_ctor_get(v___x_1990_, 4);
v_env_1992_ = lean_ctor_get(v___x_1990_, 0);
v_nextMacroScope_1993_ = lean_ctor_get(v___x_1990_, 1);
v_ngen_1994_ = lean_ctor_get(v___x_1990_, 2);
v_auxDeclNGen_1995_ = lean_ctor_get(v___x_1990_, 3);
v_cache_1996_ = lean_ctor_get(v___x_1990_, 5);
v_recordedDeps_1997_ = lean_ctor_get(v___x_1990_, 6);
v_messages_1998_ = lean_ctor_get(v___x_1990_, 7);
v_infoState_1999_ = lean_ctor_get(v___x_1990_, 8);
v_snapshotTasks_2000_ = lean_ctor_get(v___x_1990_, 9);
v_isSharedCheck_2030_ = !lean_is_exclusive(v___x_1990_);
if (v_isSharedCheck_2030_ == 0)
{
v___x_2002_ = v___x_1990_;
v_isShared_2003_ = v_isSharedCheck_2030_;
goto v_resetjp_2001_;
}
else
{
lean_inc(v_snapshotTasks_2000_);
lean_inc(v_infoState_1999_);
lean_inc(v_messages_1998_);
lean_inc(v_recordedDeps_1997_);
lean_inc(v_cache_1996_);
lean_inc(v_traceState_1991_);
lean_inc(v_auxDeclNGen_1995_);
lean_inc(v_ngen_1994_);
lean_inc(v_nextMacroScope_1993_);
lean_inc(v_env_1992_);
lean_dec(v___x_1990_);
v___x_2002_ = lean_box(0);
v_isShared_2003_ = v_isSharedCheck_2030_;
goto v_resetjp_2001_;
}
v_resetjp_2001_:
{
uint64_t v_tid_2004_; lean_object* v_traces_2005_; lean_object* v___x_2007_; uint8_t v_isShared_2008_; uint8_t v_isSharedCheck_2029_; 
v_tid_2004_ = lean_ctor_get_uint64(v_traceState_1991_, sizeof(void*)*1);
v_traces_2005_ = lean_ctor_get(v_traceState_1991_, 0);
v_isSharedCheck_2029_ = !lean_is_exclusive(v_traceState_1991_);
if (v_isSharedCheck_2029_ == 0)
{
v___x_2007_ = v_traceState_1991_;
v_isShared_2008_ = v_isSharedCheck_2029_;
goto v_resetjp_2006_;
}
else
{
lean_inc(v_traces_2005_);
lean_dec(v_traceState_1991_);
v___x_2007_ = lean_box(0);
v_isShared_2008_ = v_isSharedCheck_2029_;
goto v_resetjp_2006_;
}
v_resetjp_2006_:
{
lean_object* v___x_2009_; lean_object* v___x_2010_; double v___x_2011_; uint8_t v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2020_; 
v___x_2009_ = lean_box(0);
v___x_2010_ = lean_box(0);
v___x_2011_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__10___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__10___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__10___closed__0);
v___x_2012_ = 0;
v___x_2013_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51_spec__53___closed__0));
v___x_2014_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2014_, 0, v_cls_1979_);
lean_ctor_set(v___x_2014_, 1, v___x_2010_);
lean_ctor_set(v___x_2014_, 2, v___x_2013_);
lean_ctor_set_float(v___x_2014_, sizeof(void*)*3, v___x_2011_);
lean_ctor_set_float(v___x_2014_, sizeof(void*)*3 + 8, v___x_2011_);
lean_ctor_set_uint8(v___x_2014_, sizeof(void*)*3 + 16, v___x_2012_);
v___x_2015_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__10___closed__1));
v___x_2016_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2016_, 0, v___x_2014_);
lean_ctor_set(v___x_2016_, 1, v_a_1986_);
lean_ctor_set(v___x_2016_, 2, v___x_2015_);
lean_inc(v_ref_1984_);
v___x_2017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2017_, 0, v_ref_1984_);
lean_ctor_set(v___x_2017_, 1, v___x_2016_);
v___x_2018_ = l_Lean_PersistentArray_push___redArg(v_traces_2005_, v___x_2017_);
if (v_isShared_2008_ == 0)
{
lean_ctor_set(v___x_2007_, 0, v___x_2018_);
v___x_2020_ = v___x_2007_;
goto v_reusejp_2019_;
}
else
{
lean_object* v_reuseFailAlloc_2028_; 
v_reuseFailAlloc_2028_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2028_, 0, v___x_2018_);
lean_ctor_set_uint64(v_reuseFailAlloc_2028_, sizeof(void*)*1, v_tid_2004_);
v___x_2020_ = v_reuseFailAlloc_2028_;
goto v_reusejp_2019_;
}
v_reusejp_2019_:
{
lean_object* v___x_2022_; 
if (v_isShared_2003_ == 0)
{
lean_ctor_set(v___x_2002_, 4, v___x_2020_);
v___x_2022_ = v___x_2002_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v_env_1992_);
lean_ctor_set(v_reuseFailAlloc_2027_, 1, v_nextMacroScope_1993_);
lean_ctor_set(v_reuseFailAlloc_2027_, 2, v_ngen_1994_);
lean_ctor_set(v_reuseFailAlloc_2027_, 3, v_auxDeclNGen_1995_);
lean_ctor_set(v_reuseFailAlloc_2027_, 4, v___x_2020_);
lean_ctor_set(v_reuseFailAlloc_2027_, 5, v_cache_1996_);
lean_ctor_set(v_reuseFailAlloc_2027_, 6, v_recordedDeps_1997_);
lean_ctor_set(v_reuseFailAlloc_2027_, 7, v_messages_1998_);
lean_ctor_set(v_reuseFailAlloc_2027_, 8, v_infoState_1999_);
lean_ctor_set(v_reuseFailAlloc_2027_, 9, v_snapshotTasks_2000_);
v___x_2022_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
lean_object* v___x_2023_; lean_object* v___x_2025_; 
v___x_2023_ = lean_st_ref_put(v___y_1982_, v___x_2022_);
if (v_isShared_1989_ == 0)
{
lean_ctor_set(v___x_1988_, 0, v___x_2009_);
v___x_2025_ = v___x_1988_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v___x_2009_);
v___x_2025_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
return v___x_2025_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__10___boxed(lean_object* v_cls_2032_, lean_object* v_msg_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_){
_start:
{
lean_object* v_res_2037_; 
v_res_2037_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__10(v_cls_2032_, v_msg_2033_, v___y_2034_, v___y_2035_);
lean_dec(v___y_2035_);
lean_dec_ref(v___y_2034_);
return v_res_2037_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12_spec__17___redArg(lean_object* v_keys_2038_, lean_object* v_i_2039_, lean_object* v_k_2040_){
_start:
{
lean_object* v___x_2041_; uint8_t v___x_2042_; 
v___x_2041_ = lean_array_get_size(v_keys_2038_);
v___x_2042_ = lean_nat_dec_lt(v_i_2039_, v___x_2041_);
if (v___x_2042_ == 0)
{
lean_dec(v_i_2039_);
return v___x_2042_;
}
else
{
lean_object* v_k_x27_2043_; uint8_t v___x_2044_; 
v_k_x27_2043_ = lean_array_fget_borrowed(v_keys_2038_, v_i_2039_);
v___x_2044_ = l_Lean_instBEqExtraModUse_beq(v_k_2040_, v_k_x27_2043_);
if (v___x_2044_ == 0)
{
lean_object* v___x_2045_; lean_object* v___x_2046_; 
v___x_2045_ = lean_unsigned_to_nat(1u);
v___x_2046_ = lean_nat_add(v_i_2039_, v___x_2045_);
lean_dec(v_i_2039_);
v_i_2039_ = v___x_2046_;
goto _start;
}
else
{
lean_dec(v_i_2039_);
return v___x_2042_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12_spec__17___redArg___boxed(lean_object* v_keys_2048_, lean_object* v_i_2049_, lean_object* v_k_2050_){
_start:
{
uint8_t v_res_2051_; lean_object* v_r_2052_; 
v_res_2051_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12_spec__17___redArg(v_keys_2048_, v_i_2049_, v_k_2050_);
lean_dec_ref(v_k_2050_);
lean_dec_ref(v_keys_2048_);
v_r_2052_ = lean_box(v_res_2051_);
return v_r_2052_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12___redArg(lean_object* v_x_2053_, size_t v_x_2054_, lean_object* v_x_2055_){
_start:
{
if (lean_obj_tag(v_x_2053_) == 0)
{
lean_object* v_es_2056_; lean_object* v___x_2057_; size_t v___x_2058_; size_t v___x_2059_; lean_object* v_j_2060_; lean_object* v___x_2061_; 
v_es_2056_ = lean_ctor_get(v_x_2053_, 0);
v___x_2057_ = lean_box(2);
v___x_2058_ = ((size_t)31ULL);
v___x_2059_ = lean_usize_land(v_x_2054_, v___x_2058_);
v_j_2060_ = lean_usize_to_nat(v___x_2059_);
v___x_2061_ = lean_array_get_borrowed(v___x_2057_, v_es_2056_, v_j_2060_);
lean_dec(v_j_2060_);
switch(lean_obj_tag(v___x_2061_))
{
case 0:
{
lean_object* v_key_2062_; uint8_t v___x_2063_; 
v_key_2062_ = lean_ctor_get(v___x_2061_, 0);
v___x_2063_ = l_Lean_instBEqExtraModUse_beq(v_x_2055_, v_key_2062_);
return v___x_2063_;
}
case 1:
{
lean_object* v_node_2064_; size_t v___x_2065_; size_t v___x_2066_; 
v_node_2064_ = lean_ctor_get(v___x_2061_, 0);
v___x_2065_ = ((size_t)5ULL);
v___x_2066_ = lean_usize_shift_right(v_x_2054_, v___x_2065_);
v_x_2053_ = v_node_2064_;
v_x_2054_ = v___x_2066_;
goto _start;
}
default: 
{
uint8_t v___x_2068_; 
v___x_2068_ = 0;
return v___x_2068_;
}
}
}
else
{
lean_object* v_ks_2069_; lean_object* v___x_2070_; uint8_t v___x_2071_; 
v_ks_2069_ = lean_ctor_get(v_x_2053_, 0);
v___x_2070_ = lean_unsigned_to_nat(0u);
v___x_2071_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12_spec__17___redArg(v_ks_2069_, v___x_2070_, v_x_2055_);
return v___x_2071_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12___redArg___boxed(lean_object* v_x_2072_, lean_object* v_x_2073_, lean_object* v_x_2074_){
_start:
{
size_t v_x_47337__boxed_2075_; uint8_t v_res_2076_; lean_object* v_r_2077_; 
v_x_47337__boxed_2075_ = lean_unbox_usize(v_x_2073_);
lean_dec(v_x_2073_);
v_res_2076_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12___redArg(v_x_2072_, v_x_47337__boxed_2075_, v_x_2074_);
lean_dec_ref(v_x_2074_);
lean_dec_ref(v_x_2072_);
v_r_2077_ = lean_box(v_res_2076_);
return v_r_2077_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8___redArg(lean_object* v_x_2078_, lean_object* v_x_2079_){
_start:
{
uint64_t v___x_2080_; size_t v___x_2081_; uint8_t v___x_2082_; 
v___x_2080_ = l_Lean_instHashableExtraModUse_hash(v_x_2079_);
v___x_2081_ = lean_uint64_to_usize(v___x_2080_);
v___x_2082_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12___redArg(v_x_2078_, v___x_2081_, v_x_2079_);
return v___x_2082_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8___redArg___boxed(lean_object* v_x_2083_, lean_object* v_x_2084_){
_start:
{
uint8_t v_res_2085_; lean_object* v_r_2086_; 
v_res_2085_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8___redArg(v_x_2083_, v_x_2084_);
lean_dec_ref(v_x_2084_);
lean_dec_ref(v_x_2083_);
v_r_2086_ = lean_box(v_res_2085_);
return v_r_2086_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__0(void){
_start:
{
lean_object* v___x_2087_; lean_object* v___x_2088_; 
v___x_2087_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_2088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2088_, 0, v___x_2087_);
return v___x_2088_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__1(void){
_start:
{
lean_object* v___x_2089_; lean_object* v___x_2090_; 
v___x_2089_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__0);
v___x_2090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2089_);
lean_ctor_set(v___x_2090_, 1, v___x_2089_);
return v___x_2090_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__2(void){
_start:
{
lean_object* v___x_2091_; 
v___x_2091_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_2091_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__6(void){
_start:
{
lean_object* v___x_2096_; lean_object* v___x_2097_; 
v___x_2096_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__5));
v___x_2097_ = l_Lean_stringToMessageData(v___x_2096_);
return v___x_2097_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__8(void){
_start:
{
lean_object* v___x_2099_; lean_object* v___x_2100_; 
v___x_2099_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__7));
v___x_2100_ = l_Lean_stringToMessageData(v___x_2099_);
return v___x_2100_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__9(void){
_start:
{
lean_object* v___x_2101_; lean_object* v___x_2102_; 
v___x_2101_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51_spec__53___closed__0));
v___x_2102_ = l_Lean_stringToMessageData(v___x_2101_);
return v___x_2102_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__11(void){
_start:
{
lean_object* v_cls_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; 
v_cls_2105_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__4));
v___x_2106_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__10));
v___x_2107_ = l_Lean_Name_append(v___x_2106_, v_cls_2105_);
return v___x_2107_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__13(void){
_start:
{
lean_object* v___x_2109_; lean_object* v___x_2110_; 
v___x_2109_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__12));
v___x_2110_ = l_Lean_stringToMessageData(v___x_2109_);
return v___x_2110_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__14(void){
_start:
{
lean_object* v___x_2111_; lean_object* v___x_2112_; 
v___x_2111_ = ((lean_object*)(l_Lean_Linter_mkSinceHint___closed__5));
v___x_2112_ = l_Lean_stringToMessageData(v___x_2111_);
return v___x_2112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4(lean_object* v_mod_2117_, uint8_t v_isMeta_2118_, lean_object* v_hint_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_){
_start:
{
lean_object* v___y_2124_; lean_object* v___y_2125_; lean_object* v___y_2126_; lean_object* v___y_2127_; lean_object* v___y_2128_; lean_object* v___y_2129_; lean_object* v___y_2130_; lean_object* v___y_2131_; lean_object* v___y_2132_; lean_object* v___y_2133_; lean_object* v___y_2134_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v_env_2141_; uint8_t v_isExporting_2142_; lean_object* v_entry_2143_; lean_object* v___x_2144_; lean_object* v_env_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; uint8_t v___x_2150_; 
v___x_2139_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__2);
v___x_2140_ = lean_st_ref_get(v___y_2121_);
v_env_2141_ = lean_ctor_get(v___x_2140_, 0);
lean_inc_ref(v_env_2141_);
lean_dec(v___x_2140_);
v_isExporting_2142_ = lean_ctor_get_uint8(v_env_2141_, sizeof(void*)*13);
lean_dec_ref(v_env_2141_);
lean_inc(v_mod_2117_);
v_entry_2143_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_2143_, 0, v_mod_2117_);
lean_ctor_set_uint8(v_entry_2143_, sizeof(void*)*1, v_isExporting_2142_);
lean_ctor_set_uint8(v_entry_2143_, sizeof(void*)*1 + 1, v_isMeta_2118_);
v___x_2144_ = lean_st_ref_get(v___y_2121_);
v_env_2145_ = lean_ctor_get(v___x_2144_, 0);
lean_inc_ref(v_env_2145_);
lean_dec(v___x_2144_);
v___x_2146_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_2147_ = lean_box(1);
v___x_2148_ = lean_box(0);
v___x_2149_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2139_, v___x_2146_, v_env_2145_, v___x_2147_, v___x_2148_);
v___x_2150_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8___redArg(v___x_2149_, v_entry_2143_);
lean_dec(v___x_2149_);
if (v___x_2150_ == 0)
{
lean_object* v_toCold_2151_; lean_object* v_options_2152_; lean_object* v_inheritedTraceOptions_2153_; uint8_t v_hasTrace_2154_; lean_object* v___f_2155_; uint8_t v___x_2156_; lean_object* v___y_2158_; lean_object* v___y_2177_; 
v_toCold_2151_ = lean_ctor_get(v___y_2120_, 0);
v_options_2152_ = lean_ctor_get(v_toCold_2151_, 2);
v_inheritedTraceOptions_2153_ = lean_ctor_get(v_toCold_2151_, 11);
v_hasTrace_2154_ = lean_ctor_get_uint8(v_options_2152_, sizeof(void*)*1);
lean_inc_ref(v_entry_2143_);
v___f_2155_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___lam__0), 3, 2);
lean_closure_set(v___f_2155_, 0, v___x_2146_);
lean_closure_set(v___f_2155_, 1, v_entry_2143_);
v___x_2156_ = 1;
if (v_hasTrace_2154_ == 0)
{
lean_dec(v_hint_2119_);
lean_dec(v_mod_2117_);
v___y_2177_ = v___y_2121_;
goto v___jp_2176_;
}
else
{
lean_object* v_cls_2184_; lean_object* v___y_2186_; lean_object* v___y_2187_; lean_object* v___y_2191_; lean_object* v___y_2192_; lean_object* v___x_2204_; uint8_t v___x_2205_; 
v_cls_2184_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__4));
v___x_2204_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__11);
v___x_2205_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2153_, v_options_2152_, v___x_2204_);
if (v___x_2205_ == 0)
{
lean_dec(v_hint_2119_);
lean_dec(v_mod_2117_);
v___y_2177_ = v___y_2121_;
goto v___jp_2176_;
}
else
{
lean_object* v___x_2206_; lean_object* v___y_2208_; 
v___x_2206_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__13);
if (v_isExporting_2142_ == 0)
{
lean_object* v___x_2215_; 
v___x_2215_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__17));
v___y_2208_ = v___x_2215_;
goto v___jp_2207_;
}
else
{
lean_object* v___x_2216_; 
v___x_2216_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__18));
v___y_2208_ = v___x_2216_;
goto v___jp_2207_;
}
v___jp_2207_:
{
lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; 
lean_inc_ref(v___y_2208_);
v___x_2209_ = l_Lean_stringToMessageData(v___y_2208_);
v___x_2210_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2210_, 0, v___x_2206_);
lean_ctor_set(v___x_2210_, 1, v___x_2209_);
v___x_2211_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__14);
v___x_2212_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2212_, 0, v___x_2210_);
lean_ctor_set(v___x_2212_, 1, v___x_2211_);
if (v_isMeta_2118_ == 0)
{
lean_object* v___x_2213_; 
v___x_2213_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__15));
v___y_2191_ = v___x_2212_;
v___y_2192_ = v___x_2213_;
goto v___jp_2190_;
}
else
{
lean_object* v___x_2214_; 
v___x_2214_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__16));
v___y_2191_ = v___x_2212_;
v___y_2192_ = v___x_2214_;
goto v___jp_2190_;
}
}
}
v___jp_2185_:
{
lean_object* v___x_2188_; lean_object* v___x_2189_; 
v___x_2188_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2188_, 0, v___y_2186_);
lean_ctor_set(v___x_2188_, 1, v___y_2187_);
v___x_2189_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__10(v_cls_2184_, v___x_2188_, v___y_2120_, v___y_2121_);
if (lean_obj_tag(v___x_2189_) == 0)
{
lean_dec_ref_known(v___x_2189_, 1);
v___y_2177_ = v___y_2121_;
goto v___jp_2176_;
}
else
{
lean_dec_ref(v___f_2155_);
lean_dec_ref_known(v_entry_2143_, 1);
return v___x_2189_;
}
}
v___jp_2190_:
{
lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; uint8_t v___x_2199_; 
lean_inc_ref(v___y_2192_);
v___x_2193_ = l_Lean_stringToMessageData(v___y_2192_);
v___x_2194_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2194_, 0, v___y_2191_);
lean_ctor_set(v___x_2194_, 1, v___x_2193_);
v___x_2195_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__6);
v___x_2196_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2196_, 0, v___x_2194_);
lean_ctor_set(v___x_2196_, 1, v___x_2195_);
v___x_2197_ = l_Lean_MessageData_ofName(v_mod_2117_);
v___x_2198_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2198_, 0, v___x_2196_);
lean_ctor_set(v___x_2198_, 1, v___x_2197_);
v___x_2199_ = l_Lean_Name_isAnonymous(v_hint_2119_);
if (v___x_2199_ == 0)
{
lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2200_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__8);
v___x_2201_ = l_Lean_MessageData_ofName(v_hint_2119_);
v___x_2202_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2202_, 0, v___x_2200_);
lean_ctor_set(v___x_2202_, 1, v___x_2201_);
v___y_2186_ = v___x_2198_;
v___y_2187_ = v___x_2202_;
goto v___jp_2185_;
}
else
{
lean_object* v___x_2203_; 
lean_dec(v_hint_2119_);
v___x_2203_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__9);
v___y_2186_ = v___x_2198_;
v___y_2187_ = v___x_2203_;
goto v___jp_2185_;
}
}
}
v___jp_2157_:
{
lean_object* v___x_2159_; lean_object* v_toEnvExtension_2160_; lean_object* v_env_2161_; lean_object* v_nextMacroScope_2162_; lean_object* v_ngen_2163_; lean_object* v_auxDeclNGen_2164_; lean_object* v_traceState_2165_; lean_object* v_recordedDeps_2166_; lean_object* v_messages_2167_; lean_object* v_infoState_2168_; lean_object* v_snapshotTasks_2169_; lean_object* v_asyncMode_2170_; uint8_t v_logWrites_2171_; lean_object* v___x_2172_; 
v___x_2159_ = lean_st_ref_take(v___y_2158_);
v_toEnvExtension_2160_ = lean_ctor_get(v___x_2146_, 0);
v_env_2161_ = lean_ctor_get(v___x_2159_, 0);
lean_inc_ref(v_env_2161_);
v_nextMacroScope_2162_ = lean_ctor_get(v___x_2159_, 1);
lean_inc(v_nextMacroScope_2162_);
v_ngen_2163_ = lean_ctor_get(v___x_2159_, 2);
lean_inc_ref(v_ngen_2163_);
v_auxDeclNGen_2164_ = lean_ctor_get(v___x_2159_, 3);
lean_inc_ref(v_auxDeclNGen_2164_);
v_traceState_2165_ = lean_ctor_get(v___x_2159_, 4);
lean_inc_ref(v_traceState_2165_);
v_recordedDeps_2166_ = lean_ctor_get(v___x_2159_, 6);
lean_inc_ref(v_recordedDeps_2166_);
v_messages_2167_ = lean_ctor_get(v___x_2159_, 7);
lean_inc_ref(v_messages_2167_);
v_infoState_2168_ = lean_ctor_get(v___x_2159_, 8);
lean_inc_ref(v_infoState_2168_);
v_snapshotTasks_2169_ = lean_ctor_get(v___x_2159_, 9);
lean_inc_ref(v_snapshotTasks_2169_);
lean_dec(v___x_2159_);
v_asyncMode_2170_ = lean_ctor_get(v_toEnvExtension_2160_, 2);
v_logWrites_2171_ = lean_ctor_get_uint8(v_toEnvExtension_2160_, sizeof(void*)*6);
v___x_2172_ = lean_box(0);
if (v_logWrites_2171_ == 0)
{
lean_object* v___x_2173_; 
lean_inc_ref(v_toEnvExtension_2160_);
v___x_2173_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2160_, v_env_2161_, v___f_2155_, v_asyncMode_2170_, v___x_2148_, v___x_2156_);
v___y_2124_ = v_infoState_2168_;
v___y_2125_ = v_messages_2167_;
v___y_2126_ = v_traceState_2165_;
v___y_2127_ = v_auxDeclNGen_2164_;
v___y_2128_ = v_nextMacroScope_2162_;
v___y_2129_ = v_snapshotTasks_2169_;
v___y_2130_ = v_recordedDeps_2166_;
v___y_2131_ = v___y_2158_;
v___y_2132_ = v___x_2172_;
v___y_2133_ = v_ngen_2163_;
v___y_2134_ = v___x_2173_;
goto v___jp_2123_;
}
else
{
lean_object* v___x_2174_; lean_object* v___x_2175_; 
lean_inc_ref_n(v_toEnvExtension_2160_, 2);
v___x_2174_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_2160_, v_env_2161_);
lean_dec_ref(v_env_2161_);
v___x_2175_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2160_, v___x_2174_, v___f_2155_, v_asyncMode_2170_, v___x_2148_, v___x_2156_);
v___y_2124_ = v_infoState_2168_;
v___y_2125_ = v_messages_2167_;
v___y_2126_ = v_traceState_2165_;
v___y_2127_ = v_auxDeclNGen_2164_;
v___y_2128_ = v_nextMacroScope_2162_;
v___y_2129_ = v_snapshotTasks_2169_;
v___y_2130_ = v_recordedDeps_2166_;
v___y_2131_ = v___y_2158_;
v___y_2132_ = v___x_2172_;
v___y_2133_ = v_ngen_2163_;
v___y_2134_ = v___x_2175_;
goto v___jp_2123_;
}
}
v___jp_2176_:
{
uint8_t v___x_2178_; 
v___x_2178_ = l_Lean_usageRecordingEnabled();
if (v___x_2178_ == 0)
{
lean_dec_ref_known(v_entry_2143_, 1);
v___y_2158_ = v___y_2177_;
goto v___jp_2157_;
}
else
{
lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; 
v___x_2179_ = l___private_Lean_ExtraModUses_0__Lean_extraModUsesByChecksRef;
v___x_2180_ = lean_st_ref_take(v___x_2179_);
v___x_2181_ = lean_box(0);
v___x_2182_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9___redArg(v___x_2180_, v_entry_2143_, v___x_2181_);
v___x_2183_ = lean_st_ref_put(v___x_2179_, v___x_2182_);
v___y_2158_ = v___y_2177_;
goto v___jp_2157_;
}
}
}
else
{
lean_object* v___x_2217_; lean_object* v___x_2218_; 
lean_dec_ref_known(v_entry_2143_, 1);
lean_dec(v_hint_2119_);
lean_dec(v_mod_2117_);
v___x_2217_ = lean_box(0);
v___x_2218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2218_, 0, v___x_2217_);
return v___x_2218_;
}
v___jp_2123_:
{
lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; 
v___x_2135_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__1);
v___x_2136_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_2136_, 0, v___y_2134_);
lean_ctor_set(v___x_2136_, 1, v___y_2128_);
lean_ctor_set(v___x_2136_, 2, v___y_2133_);
lean_ctor_set(v___x_2136_, 3, v___y_2127_);
lean_ctor_set(v___x_2136_, 4, v___y_2126_);
lean_ctor_set(v___x_2136_, 5, v___x_2135_);
lean_ctor_set(v___x_2136_, 6, v___y_2130_);
lean_ctor_set(v___x_2136_, 7, v___y_2125_);
lean_ctor_set(v___x_2136_, 8, v___y_2124_);
lean_ctor_set(v___x_2136_, 9, v___y_2129_);
v___x_2137_ = lean_st_ref_put(v___y_2131_, v___x_2136_);
v___x_2138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2138_, 0, v___y_2132_);
return v___x_2138_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___boxed(lean_object* v_mod_2219_, lean_object* v_isMeta_2220_, lean_object* v_hint_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_){
_start:
{
uint8_t v_isMeta_boxed_2225_; lean_object* v_res_2226_; 
v_isMeta_boxed_2225_ = lean_unbox(v_isMeta_2220_);
v_res_2226_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4(v_mod_2219_, v_isMeta_boxed_2225_, v_hint_2221_, v___y_2222_, v___y_2223_);
lean_dec(v___y_2223_);
lean_dec_ref(v___y_2222_);
return v_res_2226_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6_spec__13___redArg(lean_object* v_a_2227_, lean_object* v_x_2228_){
_start:
{
if (lean_obj_tag(v_x_2228_) == 0)
{
lean_object* v___x_2229_; 
v___x_2229_ = lean_box(0);
return v___x_2229_;
}
else
{
lean_object* v_key_2230_; lean_object* v_value_2231_; lean_object* v_tail_2232_; uint8_t v___x_2233_; 
v_key_2230_ = lean_ctor_get(v_x_2228_, 0);
v_value_2231_ = lean_ctor_get(v_x_2228_, 1);
v_tail_2232_ = lean_ctor_get(v_x_2228_, 2);
v___x_2233_ = lean_name_eq(v_key_2230_, v_a_2227_);
if (v___x_2233_ == 0)
{
v_x_2228_ = v_tail_2232_;
goto _start;
}
else
{
lean_object* v___x_2235_; 
lean_inc(v_value_2231_);
v___x_2235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2235_, 0, v_value_2231_);
return v___x_2235_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6_spec__13___redArg___boxed(lean_object* v_a_2236_, lean_object* v_x_2237_){
_start:
{
lean_object* v_res_2238_; 
v_res_2238_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6_spec__13___redArg(v_a_2236_, v_x_2237_);
lean_dec(v_x_2237_);
lean_dec(v_a_2236_);
return v_res_2238_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6___redArg(lean_object* v_m_2239_, lean_object* v_a_2240_){
_start:
{
lean_object* v_buckets_2241_; lean_object* v___x_2242_; uint64_t v___y_2244_; 
v_buckets_2241_ = lean_ctor_get(v_m_2239_, 1);
v___x_2242_ = lean_array_get_size(v_buckets_2241_);
if (lean_obj_tag(v_a_2240_) == 0)
{
uint64_t v___x_2258_; 
v___x_2258_ = 1723ULL;
v___y_2244_ = v___x_2258_;
goto v___jp_2243_;
}
else
{
uint64_t v_hash_2259_; 
v_hash_2259_ = lean_ctor_get_uint64(v_a_2240_, sizeof(void*)*2);
v___y_2244_ = v_hash_2259_;
goto v___jp_2243_;
}
v___jp_2243_:
{
uint64_t v___x_2245_; uint64_t v___x_2246_; uint64_t v_fold_2247_; uint64_t v___x_2248_; uint64_t v___x_2249_; uint64_t v___x_2250_; size_t v___x_2251_; size_t v___x_2252_; size_t v___x_2253_; size_t v___x_2254_; size_t v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; 
v___x_2245_ = 32ULL;
v___x_2246_ = lean_uint64_shift_right(v___y_2244_, v___x_2245_);
v_fold_2247_ = lean_uint64_xor(v___y_2244_, v___x_2246_);
v___x_2248_ = 16ULL;
v___x_2249_ = lean_uint64_shift_right(v_fold_2247_, v___x_2248_);
v___x_2250_ = lean_uint64_xor(v_fold_2247_, v___x_2249_);
v___x_2251_ = lean_uint64_to_usize(v___x_2250_);
v___x_2252_ = lean_usize_of_nat(v___x_2242_);
v___x_2253_ = ((size_t)1ULL);
v___x_2254_ = lean_usize_sub(v___x_2252_, v___x_2253_);
v___x_2255_ = lean_usize_land(v___x_2251_, v___x_2254_);
v___x_2256_ = lean_array_uget_borrowed(v_buckets_2241_, v___x_2255_);
v___x_2257_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6_spec__13___redArg(v_a_2240_, v___x_2256_);
return v___x_2257_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6___redArg___boxed(lean_object* v_m_2260_, lean_object* v_a_2261_){
_start:
{
lean_object* v_res_2262_; 
v_res_2262_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6___redArg(v_m_2260_, v_a_2261_);
lean_dec(v_a_2261_);
lean_dec_ref(v_m_2260_);
return v_res_2262_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__5(lean_object* v___x_2263_, lean_object* v_declName_2264_, lean_object* v_as_2265_, size_t v_sz_2266_, size_t v_i_2267_, lean_object* v_b_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_){
_start:
{
uint8_t v___x_2272_; 
v___x_2272_ = lean_usize_dec_lt(v_i_2267_, v_sz_2266_);
if (v___x_2272_ == 0)
{
lean_object* v___x_2273_; 
lean_dec(v_declName_2264_);
v___x_2273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2273_, 0, v_b_2268_);
return v___x_2273_;
}
else
{
lean_object* v___x_2274_; lean_object* v_modules_2275_; lean_object* v___x_2276_; lean_object* v_a_2277_; lean_object* v___x_2278_; lean_object* v_toImport_2279_; lean_object* v_module_2280_; lean_object* v___x_2281_; uint8_t v___x_2282_; lean_object* v___x_2283_; 
v___x_2274_ = l_Lean_Environment_header(v___x_2263_);
v_modules_2275_ = lean_ctor_get(v___x_2274_, 3);
lean_inc_ref(v_modules_2275_);
lean_dec_ref(v___x_2274_);
v___x_2276_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_2277_ = lean_array_uget_borrowed(v_as_2265_, v_i_2267_);
v___x_2278_ = lean_array_get(v___x_2276_, v_modules_2275_, v_a_2277_);
lean_dec_ref(v_modules_2275_);
v_toImport_2279_ = lean_ctor_get(v___x_2278_, 0);
lean_inc_ref(v_toImport_2279_);
lean_dec(v___x_2278_);
v_module_2280_ = lean_ctor_get(v_toImport_2279_, 0);
lean_inc(v_module_2280_);
lean_dec_ref(v_toImport_2279_);
v___x_2281_ = lean_box(0);
v___x_2282_ = 0;
lean_inc(v_declName_2264_);
v___x_2283_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4(v_module_2280_, v___x_2282_, v_declName_2264_, v___y_2269_, v___y_2270_);
if (lean_obj_tag(v___x_2283_) == 0)
{
size_t v___x_2284_; size_t v___x_2285_; 
lean_dec_ref_known(v___x_2283_, 1);
v___x_2284_ = ((size_t)1ULL);
v___x_2285_ = lean_usize_add(v_i_2267_, v___x_2284_);
v_i_2267_ = v___x_2285_;
v_b_2268_ = v___x_2281_;
goto _start;
}
else
{
lean_dec(v_declName_2264_);
return v___x_2283_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__5___boxed(lean_object* v___x_2287_, lean_object* v_declName_2288_, lean_object* v_as_2289_, lean_object* v_sz_2290_, lean_object* v_i_2291_, lean_object* v_b_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_){
_start:
{
size_t v_sz_boxed_2296_; size_t v_i_boxed_2297_; lean_object* v_res_2298_; 
v_sz_boxed_2296_ = lean_unbox_usize(v_sz_2290_);
lean_dec(v_sz_2290_);
v_i_boxed_2297_ = lean_unbox_usize(v_i_2291_);
lean_dec(v_i_2291_);
v_res_2298_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__5(v___x_2287_, v_declName_2288_, v_as_2289_, v_sz_boxed_2296_, v_i_boxed_2297_, v_b_2292_, v___y_2293_, v___y_2294_);
lean_dec(v___y_2294_);
lean_dec_ref(v___y_2293_);
lean_dec_ref(v_as_2289_);
lean_dec_ref(v___x_2287_);
return v_res_2298_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2___closed__0(void){
_start:
{
lean_object* v___x_2299_; 
v___x_2299_ = l_Std_HashMap_instInhabited___redArg();
return v___x_2299_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2(lean_object* v_declName_2302_, uint8_t v_isMeta_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_){
_start:
{
lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v_env_2312_; lean_object* v___y_2314_; lean_object* v___x_2327_; 
v___x_2307_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2___closed__0);
v___x_2308_ = lean_st_ref_get(v___y_2305_);
v_env_2312_ = lean_ctor_get(v___x_2308_, 0);
lean_inc_ref(v_env_2312_);
lean_dec(v___x_2308_);
v___x_2327_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2312_, v_declName_2302_);
if (lean_obj_tag(v___x_2327_) == 0)
{
lean_dec_ref(v_env_2312_);
lean_dec(v_declName_2302_);
goto v___jp_2309_;
}
else
{
lean_object* v_val_2328_; lean_object* v___x_2329_; lean_object* v_modules_2330_; lean_object* v___x_2331_; uint8_t v___x_2332_; 
v_val_2328_ = lean_ctor_get(v___x_2327_, 0);
lean_inc(v_val_2328_);
lean_dec_ref_known(v___x_2327_, 1);
v___x_2329_ = l_Lean_Environment_header(v_env_2312_);
v_modules_2330_ = lean_ctor_get(v___x_2329_, 3);
lean_inc_ref(v_modules_2330_);
lean_dec_ref(v___x_2329_);
v___x_2331_ = lean_array_get_size(v_modules_2330_);
v___x_2332_ = lean_nat_dec_lt(v_val_2328_, v___x_2331_);
if (v___x_2332_ == 0)
{
lean_dec_ref(v_modules_2330_);
lean_dec(v_val_2328_);
lean_dec_ref(v_env_2312_);
lean_dec(v_declName_2302_);
goto v___jp_2309_;
}
else
{
lean_object* v___x_2333_; lean_object* v___x_2334_; uint8_t v___y_2336_; 
v___x_2333_ = lean_array_fget(v_modules_2330_, v_val_2328_);
lean_dec(v_val_2328_);
lean_dec_ref(v_modules_2330_);
v___x_2334_ = lean_st_ref_get(v___y_2305_);
if (v_isMeta_2303_ == 0)
{
lean_dec(v___x_2334_);
v___y_2336_ = v_isMeta_2303_;
goto v___jp_2335_;
}
else
{
lean_object* v_env_2347_; uint8_t v___x_2348_; 
v_env_2347_ = lean_ctor_get(v___x_2334_, 0);
lean_inc_ref(v_env_2347_);
lean_dec(v___x_2334_);
lean_inc(v_declName_2302_);
v___x_2348_ = l_Lean_isMarkedMeta(v_env_2347_, v_declName_2302_);
if (v___x_2348_ == 0)
{
v___y_2336_ = v_isMeta_2303_;
goto v___jp_2335_;
}
else
{
uint8_t v___x_2349_; 
v___x_2349_ = 0;
v___y_2336_ = v___x_2349_;
goto v___jp_2335_;
}
}
v___jp_2335_:
{
lean_object* v_toImport_2337_; lean_object* v_module_2338_; lean_object* v___x_2339_; 
v_toImport_2337_ = lean_ctor_get(v___x_2333_, 0);
lean_inc_ref(v_toImport_2337_);
lean_dec(v___x_2333_);
v_module_2338_ = lean_ctor_get(v_toImport_2337_, 0);
lean_inc(v_module_2338_);
lean_dec_ref(v_toImport_2337_);
lean_inc(v_declName_2302_);
v___x_2339_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4(v_module_2338_, v___y_2336_, v_declName_2302_, v___y_2304_, v___y_2305_);
if (lean_obj_tag(v___x_2339_) == 0)
{
lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; 
lean_dec_ref_known(v___x_2339_, 1);
v___x_2340_ = l_Lean_indirectModUseExt;
v___x_2341_ = lean_box(1);
v___x_2342_ = lean_box(0);
lean_inc_ref(v_env_2312_);
v___x_2343_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2307_, v___x_2340_, v_env_2312_, v___x_2341_, v___x_2342_);
v___x_2344_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6___redArg(v___x_2343_, v_declName_2302_);
lean_dec(v___x_2343_);
if (lean_obj_tag(v___x_2344_) == 0)
{
lean_object* v___x_2345_; 
v___x_2345_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2___closed__1));
v___y_2314_ = v___x_2345_;
goto v___jp_2313_;
}
else
{
lean_object* v_val_2346_; 
v_val_2346_ = lean_ctor_get(v___x_2344_, 0);
lean_inc(v_val_2346_);
lean_dec_ref_known(v___x_2344_, 1);
v___y_2314_ = v_val_2346_;
goto v___jp_2313_;
}
}
else
{
lean_dec_ref(v_env_2312_);
lean_dec(v_declName_2302_);
return v___x_2339_;
}
}
}
}
v___jp_2309_:
{
lean_object* v___x_2310_; lean_object* v___x_2311_; 
v___x_2310_ = lean_box(0);
v___x_2311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2311_, 0, v___x_2310_);
return v___x_2311_;
}
v___jp_2313_:
{
lean_object* v___x_2315_; size_t v_sz_2316_; size_t v___x_2317_; lean_object* v___x_2318_; 
v___x_2315_ = lean_box(0);
v_sz_2316_ = lean_array_size(v___y_2314_);
v___x_2317_ = ((size_t)0ULL);
v___x_2318_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__5(v_env_2312_, v_declName_2302_, v___y_2314_, v_sz_2316_, v___x_2317_, v___x_2315_, v___y_2304_, v___y_2305_);
lean_dec_ref(v___y_2314_);
lean_dec_ref(v_env_2312_);
if (lean_obj_tag(v___x_2318_) == 0)
{
lean_object* v___x_2320_; uint8_t v_isShared_2321_; uint8_t v_isSharedCheck_2325_; 
v_isSharedCheck_2325_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2325_ == 0)
{
lean_object* v_unused_2326_; 
v_unused_2326_ = lean_ctor_get(v___x_2318_, 0);
lean_dec(v_unused_2326_);
v___x_2320_ = v___x_2318_;
v_isShared_2321_ = v_isSharedCheck_2325_;
goto v_resetjp_2319_;
}
else
{
lean_dec(v___x_2318_);
v___x_2320_ = lean_box(0);
v_isShared_2321_ = v_isSharedCheck_2325_;
goto v_resetjp_2319_;
}
v_resetjp_2319_:
{
lean_object* v___x_2323_; 
if (v_isShared_2321_ == 0)
{
lean_ctor_set(v___x_2320_, 0, v___x_2315_);
v___x_2323_ = v___x_2320_;
goto v_reusejp_2322_;
}
else
{
lean_object* v_reuseFailAlloc_2324_; 
v_reuseFailAlloc_2324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2324_, 0, v___x_2315_);
v___x_2323_ = v_reuseFailAlloc_2324_;
goto v_reusejp_2322_;
}
v_reusejp_2322_:
{
return v___x_2323_;
}
}
}
else
{
return v___x_2318_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2___boxed(lean_object* v_declName_2350_, lean_object* v_isMeta_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_){
_start:
{
uint8_t v_isMeta_boxed_2355_; lean_object* v_res_2356_; 
v_isMeta_boxed_2355_ = lean_unbox(v_isMeta_2351_);
v_res_2356_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2(v_declName_2350_, v_isMeta_boxed_2355_, v___y_2352_, v___y_2353_);
lean_dec(v___y_2353_);
lean_dec_ref(v___y_2352_);
return v_res_2356_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5(lean_object* v_ref_2357_, lean_object* v_msgData_2358_, uint8_t v_severity_2359_, uint8_t v_isSilent_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_){
_start:
{
lean_object* v___y_2365_; lean_object* v___y_2366_; uint8_t v___y_2367_; lean_object* v___y_2368_; lean_object* v___y_2369_; lean_object* v___y_2370_; uint8_t v___y_2371_; lean_object* v_toCold_2372_; lean_object* v___y_2373_; lean_object* v___y_2402_; lean_object* v___y_2403_; uint8_t v___y_2404_; lean_object* v___y_2405_; uint8_t v___y_2406_; uint8_t v___y_2407_; lean_object* v___y_2408_; lean_object* v___y_2409_; lean_object* v___y_2429_; lean_object* v___y_2430_; uint8_t v___y_2431_; uint8_t v___y_2432_; lean_object* v___y_2433_; uint8_t v___y_2434_; lean_object* v___y_2435_; uint8_t v___y_2439_; uint8_t v___y_2440_; uint8_t v___x_2450_; uint8_t v___y_2452_; uint8_t v___x_2458_; 
v___x_2450_ = 2;
v___x_2458_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2359_, v___x_2450_);
if (v___x_2458_ == 0)
{
v___y_2452_ = v___x_2458_;
goto v___jp_2451_;
}
else
{
uint8_t v___x_2459_; 
lean_inc_ref(v_msgData_2358_);
v___x_2459_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_2358_);
if (v___x_2459_ == 0)
{
v___y_2452_ = v___x_2459_;
goto v___jp_2451_;
}
else
{
lean_object* v___x_2460_; lean_object* v___x_2461_; 
lean_dec_ref(v_msgData_2358_);
v___x_2460_ = lean_box(0);
v___x_2461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2461_, 0, v___x_2460_);
return v___x_2461_;
}
}
v___jp_2364_:
{
lean_object* v_currNamespace_2374_; lean_object* v_openDecls_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v_env_2380_; lean_object* v_nextMacroScope_2381_; lean_object* v_ngen_2382_; lean_object* v_auxDeclNGen_2383_; lean_object* v_traceState_2384_; lean_object* v_cache_2385_; lean_object* v_recordedDeps_2386_; lean_object* v_messages_2387_; lean_object* v_infoState_2388_; lean_object* v_snapshotTasks_2389_; lean_object* v___x_2391_; uint8_t v_isShared_2392_; uint8_t v_isSharedCheck_2400_; 
v_currNamespace_2374_ = lean_ctor_get(v_toCold_2372_, 4);
v_openDecls_2375_ = lean_ctor_get(v_toCold_2372_, 5);
lean_inc(v_openDecls_2375_);
lean_inc(v_currNamespace_2374_);
v___x_2376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2376_, 0, v_currNamespace_2374_);
lean_ctor_set(v___x_2376_, 1, v_openDecls_2375_);
v___x_2377_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2377_, 0, v___x_2376_);
lean_ctor_set(v___x_2377_, 1, v___y_2370_);
lean_inc_ref(v___y_2366_);
lean_inc_ref(v___y_2365_);
v___x_2378_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2378_, 0, v___y_2365_);
lean_ctor_set(v___x_2378_, 1, v___y_2368_);
lean_ctor_set(v___x_2378_, 2, v___y_2369_);
lean_ctor_set(v___x_2378_, 3, v___y_2366_);
lean_ctor_set(v___x_2378_, 4, v___x_2377_);
lean_ctor_set_uint8(v___x_2378_, sizeof(void*)*5, v___y_2371_);
lean_ctor_set_uint8(v___x_2378_, sizeof(void*)*5 + 1, v___y_2367_);
lean_ctor_set_uint8(v___x_2378_, sizeof(void*)*5 + 2, v_isSilent_2360_);
v___x_2379_ = lean_st_ref_take(v___y_2373_);
v_env_2380_ = lean_ctor_get(v___x_2379_, 0);
v_nextMacroScope_2381_ = lean_ctor_get(v___x_2379_, 1);
v_ngen_2382_ = lean_ctor_get(v___x_2379_, 2);
v_auxDeclNGen_2383_ = lean_ctor_get(v___x_2379_, 3);
v_traceState_2384_ = lean_ctor_get(v___x_2379_, 4);
v_cache_2385_ = lean_ctor_get(v___x_2379_, 5);
v_recordedDeps_2386_ = lean_ctor_get(v___x_2379_, 6);
v_messages_2387_ = lean_ctor_get(v___x_2379_, 7);
v_infoState_2388_ = lean_ctor_get(v___x_2379_, 8);
v_snapshotTasks_2389_ = lean_ctor_get(v___x_2379_, 9);
v_isSharedCheck_2400_ = !lean_is_exclusive(v___x_2379_);
if (v_isSharedCheck_2400_ == 0)
{
v___x_2391_ = v___x_2379_;
v_isShared_2392_ = v_isSharedCheck_2400_;
goto v_resetjp_2390_;
}
else
{
lean_inc(v_snapshotTasks_2389_);
lean_inc(v_infoState_2388_);
lean_inc(v_messages_2387_);
lean_inc(v_recordedDeps_2386_);
lean_inc(v_cache_2385_);
lean_inc(v_traceState_2384_);
lean_inc(v_auxDeclNGen_2383_);
lean_inc(v_ngen_2382_);
lean_inc(v_nextMacroScope_2381_);
lean_inc(v_env_2380_);
lean_dec(v___x_2379_);
v___x_2391_ = lean_box(0);
v_isShared_2392_ = v_isSharedCheck_2400_;
goto v_resetjp_2390_;
}
v_resetjp_2390_:
{
lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2396_; 
v___x_2393_ = lean_box(0);
v___x_2394_ = l_Lean_MessageLog_add(v___x_2378_, v_messages_2387_);
if (v_isShared_2392_ == 0)
{
lean_ctor_set(v___x_2391_, 7, v___x_2394_);
v___x_2396_ = v___x_2391_;
goto v_reusejp_2395_;
}
else
{
lean_object* v_reuseFailAlloc_2399_; 
v_reuseFailAlloc_2399_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2399_, 0, v_env_2380_);
lean_ctor_set(v_reuseFailAlloc_2399_, 1, v_nextMacroScope_2381_);
lean_ctor_set(v_reuseFailAlloc_2399_, 2, v_ngen_2382_);
lean_ctor_set(v_reuseFailAlloc_2399_, 3, v_auxDeclNGen_2383_);
lean_ctor_set(v_reuseFailAlloc_2399_, 4, v_traceState_2384_);
lean_ctor_set(v_reuseFailAlloc_2399_, 5, v_cache_2385_);
lean_ctor_set(v_reuseFailAlloc_2399_, 6, v_recordedDeps_2386_);
lean_ctor_set(v_reuseFailAlloc_2399_, 7, v___x_2394_);
lean_ctor_set(v_reuseFailAlloc_2399_, 8, v_infoState_2388_);
lean_ctor_set(v_reuseFailAlloc_2399_, 9, v_snapshotTasks_2389_);
v___x_2396_ = v_reuseFailAlloc_2399_;
goto v_reusejp_2395_;
}
v_reusejp_2395_:
{
lean_object* v___x_2397_; lean_object* v___x_2398_; 
v___x_2397_ = lean_st_ref_put(v___y_2373_, v___x_2396_);
v___x_2398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2398_, 0, v___x_2393_);
return v___x_2398_;
}
}
}
v___jp_2401_:
{
lean_object* v_fileName_2410_; lean_object* v_fileMap_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v_a_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2427_; 
v_fileName_2410_ = lean_ctor_get(v___y_2405_, 0);
v_fileMap_2411_ = lean_ctor_get(v___y_2405_, 1);
v___x_2412_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_2358_);
v___x_2413_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0(v___x_2412_, v___y_2361_, v___y_2362_);
v_a_2414_ = lean_ctor_get(v___x_2413_, 0);
v_isSharedCheck_2427_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2427_ == 0)
{
v___x_2416_ = v___x_2413_;
v_isShared_2417_ = v_isSharedCheck_2427_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_a_2414_);
lean_dec(v___x_2413_);
v___x_2416_ = lean_box(0);
v_isShared_2417_ = v_isSharedCheck_2427_;
goto v_resetjp_2415_;
}
v_resetjp_2415_:
{
lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; 
lean_inc_ref_n(v_fileMap_2411_, 2);
v___x_2418_ = l_Lean_FileMap_toPosition(v_fileMap_2411_, v___y_2408_);
lean_dec(v___y_2408_);
v___x_2419_ = l_Lean_FileMap_toPosition(v_fileMap_2411_, v___y_2409_);
lean_dec(v___y_2409_);
v___x_2420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2420_, 0, v___x_2419_);
v___x_2421_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__49_spec__51_spec__53___closed__0));
if (v___y_2406_ == 0)
{
lean_del_object(v___x_2416_);
lean_dec_ref(v___y_2403_);
v___y_2365_ = v_fileName_2410_;
v___y_2366_ = v___x_2421_;
v___y_2367_ = v___y_2404_;
v___y_2368_ = v___x_2418_;
v___y_2369_ = v___x_2420_;
v___y_2370_ = v_a_2414_;
v___y_2371_ = v___y_2407_;
v_toCold_2372_ = v___y_2402_;
v___y_2373_ = v___y_2362_;
goto v___jp_2364_;
}
else
{
uint8_t v___x_2422_; 
lean_inc(v_a_2414_);
v___x_2422_ = l_Lean_MessageData_hasTag(v___y_2403_, v_a_2414_);
if (v___x_2422_ == 0)
{
lean_object* v___x_2423_; lean_object* v___x_2425_; 
lean_dec_ref_known(v___x_2420_, 1);
lean_dec_ref(v___x_2418_);
lean_dec(v_a_2414_);
v___x_2423_ = lean_box(0);
if (v_isShared_2417_ == 0)
{
lean_ctor_set(v___x_2416_, 0, v___x_2423_);
v___x_2425_ = v___x_2416_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2426_; 
v_reuseFailAlloc_2426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2426_, 0, v___x_2423_);
v___x_2425_ = v_reuseFailAlloc_2426_;
goto v_reusejp_2424_;
}
v_reusejp_2424_:
{
return v___x_2425_;
}
}
else
{
lean_del_object(v___x_2416_);
v___y_2365_ = v_fileName_2410_;
v___y_2366_ = v___x_2421_;
v___y_2367_ = v___y_2404_;
v___y_2368_ = v___x_2418_;
v___y_2369_ = v___x_2420_;
v___y_2370_ = v_a_2414_;
v___y_2371_ = v___y_2407_;
v_toCold_2372_ = v___y_2402_;
v___y_2373_ = v___y_2362_;
goto v___jp_2364_;
}
}
}
}
v___jp_2428_:
{
lean_object* v___x_2436_; 
v___x_2436_ = l_Lean_Syntax_getTailPos_x3f(v___y_2433_, v___y_2434_);
lean_dec(v___y_2433_);
if (lean_obj_tag(v___x_2436_) == 0)
{
lean_inc(v___y_2435_);
v___y_2402_ = v___y_2429_;
v___y_2403_ = v___y_2430_;
v___y_2404_ = v___y_2432_;
v___y_2405_ = v___y_2429_;
v___y_2406_ = v___y_2431_;
v___y_2407_ = v___y_2434_;
v___y_2408_ = v___y_2435_;
v___y_2409_ = v___y_2435_;
goto v___jp_2401_;
}
else
{
lean_object* v_val_2437_; 
v_val_2437_ = lean_ctor_get(v___x_2436_, 0);
lean_inc(v_val_2437_);
lean_dec_ref_known(v___x_2436_, 1);
v___y_2402_ = v___y_2429_;
v___y_2403_ = v___y_2430_;
v___y_2404_ = v___y_2432_;
v___y_2405_ = v___y_2429_;
v___y_2406_ = v___y_2431_;
v___y_2407_ = v___y_2434_;
v___y_2408_ = v___y_2435_;
v___y_2409_ = v_val_2437_;
goto v___jp_2401_;
}
}
v___jp_2438_:
{
lean_object* v_toCold_2441_; lean_object* v_ref_2442_; uint8_t v_suppressElabErrors_2443_; lean_object* v___x_2444_; lean_object* v___f_2445_; lean_object* v_ref_2446_; lean_object* v___x_2447_; 
v_toCold_2441_ = lean_ctor_get(v___y_2361_, 0);
v_ref_2442_ = lean_ctor_get(v___y_2361_, 2);
v_suppressElabErrors_2443_ = lean_ctor_get_uint8(v___y_2361_, sizeof(void*)*3 + 2);
v___x_2444_ = lean_box(v_suppressElabErrors_2443_);
v___f_2445_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2445_, 0, v___x_2444_);
v_ref_2446_ = l_Lean_replaceRef(v_ref_2357_, v_ref_2442_);
v___x_2447_ = l_Lean_Syntax_getPos_x3f(v_ref_2446_, v___y_2439_);
if (lean_obj_tag(v___x_2447_) == 0)
{
lean_object* v___x_2448_; 
v___x_2448_ = lean_unsigned_to_nat(0u);
v___y_2429_ = v_toCold_2441_;
v___y_2430_ = v___f_2445_;
v___y_2431_ = v_suppressElabErrors_2443_;
v___y_2432_ = v___y_2440_;
v___y_2433_ = v_ref_2446_;
v___y_2434_ = v___y_2439_;
v___y_2435_ = v___x_2448_;
goto v___jp_2428_;
}
else
{
lean_object* v_val_2449_; 
v_val_2449_ = lean_ctor_get(v___x_2447_, 0);
lean_inc(v_val_2449_);
lean_dec_ref_known(v___x_2447_, 1);
v___y_2429_ = v_toCold_2441_;
v___y_2430_ = v___f_2445_;
v___y_2431_ = v_suppressElabErrors_2443_;
v___y_2432_ = v___y_2440_;
v___y_2433_ = v_ref_2446_;
v___y_2434_ = v___y_2439_;
v___y_2435_ = v_val_2449_;
goto v___jp_2428_;
}
}
v___jp_2451_:
{
uint8_t v___x_2453_; uint8_t v___x_2454_; 
v___x_2453_ = 1;
v___x_2454_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2359_, v___x_2453_);
if (v___x_2454_ == 0)
{
v___y_2439_ = v___y_2452_;
v___y_2440_ = v_severity_2359_;
goto v___jp_2438_;
}
else
{
lean_object* v___x_2455_; lean_object* v___x_2456_; uint8_t v___x_2457_; 
v___x_2455_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2361_);
v___x_2456_ = l_Lean_warningAsError;
v___x_2457_ = l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4(v___x_2455_, v___x_2456_);
lean_dec_ref(v___x_2455_);
if (v___x_2457_ == 0)
{
v___y_2439_ = v___y_2452_;
v___y_2440_ = v_severity_2359_;
goto v___jp_2438_;
}
else
{
v___y_2439_ = v___y_2452_;
v___y_2440_ = v___x_2450_;
goto v___jp_2438_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5___boxed(lean_object* v_ref_2462_, lean_object* v_msgData_2463_, lean_object* v_severity_2464_, lean_object* v_isSilent_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_){
_start:
{
uint8_t v_severity_boxed_2469_; uint8_t v_isSilent_boxed_2470_; lean_object* v_res_2471_; 
v_severity_boxed_2469_ = lean_unbox(v_severity_2464_);
v_isSilent_boxed_2470_ = lean_unbox(v_isSilent_2465_);
v_res_2471_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5(v_ref_2462_, v_msgData_2463_, v_severity_boxed_2469_, v_isSilent_boxed_2470_, v___y_2466_, v___y_2467_);
lean_dec(v___y_2467_);
lean_dec_ref(v___y_2466_);
lean_dec(v_ref_2462_);
return v_res_2471_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_msgData_2472_, uint8_t v_severity_2473_, uint8_t v_isSilent_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_){
_start:
{
lean_object* v_ref_2478_; lean_object* v___x_2479_; 
v_ref_2478_ = lean_ctor_get(v___y_2475_, 2);
v___x_2479_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2_spec__5(v_ref_2478_, v_msgData_2472_, v_severity_2473_, v_isSilent_2474_, v___y_2475_, v___y_2476_);
return v___x_2479_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_msgData_2480_, lean_object* v_severity_2481_, lean_object* v_isSilent_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_){
_start:
{
uint8_t v_severity_boxed_2486_; uint8_t v_isSilent_boxed_2487_; lean_object* v_res_2488_; 
v_severity_boxed_2486_ = lean_unbox(v_severity_2481_);
v_isSilent_boxed_2487_ = lean_unbox(v_isSilent_2482_);
v_res_2488_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2(v_msgData_2480_, v_severity_boxed_2486_, v_isSilent_boxed_2487_, v___y_2483_, v___y_2484_);
lean_dec(v___y_2484_);
lean_dec_ref(v___y_2483_);
return v_res_2488_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1(lean_object* v_msgData_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_){
_start:
{
uint8_t v___x_2493_; uint8_t v___x_2494_; lean_object* v___x_2495_; 
v___x_2493_ = 1;
v___x_2494_ = 0;
v___x_2495_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1_spec__2(v_msgData_2489_, v___x_2493_, v___x_2494_, v___y_2490_, v___y_2491_);
return v___x_2495_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1___boxed(lean_object* v_msgData_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_){
_start:
{
lean_object* v_res_2500_; 
v_res_2500_ = l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1(v_msgData_2496_, v___y_2497_, v___y_2498_);
lean_dec(v___y_2498_);
lean_dec_ref(v___y_2497_);
return v_res_2500_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___redArg(lean_object* v_msg_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_){
_start:
{
lean_object* v_ref_2505_; lean_object* v___x_2506_; lean_object* v_a_2507_; lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2515_; 
v_ref_2505_ = lean_ctor_get(v___y_2502_, 2);
v___x_2506_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0(v_msg_2501_, v___y_2502_, v___y_2503_);
v_a_2507_ = lean_ctor_get(v___x_2506_, 0);
v_isSharedCheck_2515_ = !lean_is_exclusive(v___x_2506_);
if (v_isSharedCheck_2515_ == 0)
{
v___x_2509_ = v___x_2506_;
v_isShared_2510_ = v_isSharedCheck_2515_;
goto v_resetjp_2508_;
}
else
{
lean_inc(v_a_2507_);
lean_dec(v___x_2506_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2515_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
lean_object* v___x_2511_; lean_object* v___x_2513_; 
lean_inc(v_ref_2505_);
v___x_2511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2511_, 0, v_ref_2505_);
lean_ctor_set(v___x_2511_, 1, v_a_2507_);
if (v_isShared_2510_ == 0)
{
lean_ctor_set_tag(v___x_2509_, 1);
lean_ctor_set(v___x_2509_, 0, v___x_2511_);
v___x_2513_ = v___x_2509_;
goto v_reusejp_2512_;
}
else
{
lean_object* v_reuseFailAlloc_2514_; 
v_reuseFailAlloc_2514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2514_, 0, v___x_2511_);
v___x_2513_ = v_reuseFailAlloc_2514_;
goto v_reusejp_2512_;
}
v_reusejp_2512_:
{
return v___x_2513_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_msg_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_){
_start:
{
lean_object* v_res_2520_; 
v_res_2520_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___redArg(v_msg_2516_, v___y_2517_, v___y_2518_);
lean_dec(v___y_2518_);
lean_dec_ref(v___y_2517_);
return v_res_2520_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2522_; lean_object* v___x_2523_; 
v___x_2522_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2523_ = l_Lean_stringToMessageData(v___x_2522_);
return v___x_2523_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__4_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2527_; lean_object* v___x_2528_; 
v___x_2527_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2528_ = l_Lean_MessageData_ofFormat(v___x_2527_);
return v___x_2528_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2530_; lean_object* v___x_2531_; 
v___x_2530_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__5_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2531_ = l_Lean_stringToMessageData(v___x_2530_);
return v___x_2531_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__8_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2533_; lean_object* v___x_2534_; 
v___x_2533_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__7_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2534_ = l_Lean_stringToMessageData(v___x_2533_);
return v___x_2534_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__10_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2536_; lean_object* v___x_2537_; 
v___x_2536_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__9_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2537_ = l_Lean_stringToMessageData(v___x_2536_);
return v___x_2537_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__13_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2541_; lean_object* v___x_2542_; 
v___x_2541_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__12_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2542_ = l_Lean_MessageData_ofFormat(v___x_2541_);
return v___x_2542_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__14_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2543_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__13_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__13_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__13_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2544_ = l_Lean_MessageData_hint_x27(v___x_2543_);
return v___x_2544_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2546_; lean_object* v___x_2547_; 
v___x_2546_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__15_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2547_ = l_Lean_stringToMessageData(v___x_2546_);
return v___x_2547_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__19_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2551_; lean_object* v___x_2552_; 
v___x_2551_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__18_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2552_ = l_Lean_MessageData_ofFormat(v___x_2551_);
return v___x_2552_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__24_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2559_; lean_object* v___x_2560_; 
v___x_2559_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__23_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2560_ = l_Lean_MessageData_ofFormat(v___x_2559_);
return v___x_2560_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__25_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2561_; lean_object* v___x_2562_; 
v___x_2561_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__24_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__24_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__24_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2562_, 0, v___x_2561_);
return v___x_2562_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2563_; lean_object* v___x_2564_; 
v___x_2563_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_2564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2564_, 0, v___x_2563_);
return v___x_2564_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__27_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; 
v___x_2565_ = lean_box(1);
v___x_2566_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__4);
v___x_2567_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2568_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2568_, 0, v___x_2567_);
lean_ctor_set(v___x_2568_, 1, v___x_2566_);
lean_ctor_set(v___x_2568_, 2, v___x_2565_);
return v___x_2568_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__29_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; 
v___x_2571_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_2572_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2573_ = lean_unsigned_to_nat(0u);
v___x_2574_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_2574_, 0, v___x_2573_);
lean_ctor_set(v___x_2574_, 1, v___x_2573_);
lean_ctor_set(v___x_2574_, 2, v___x_2573_);
lean_ctor_set(v___x_2574_, 3, v___x_2573_);
lean_ctor_set(v___x_2574_, 4, v___x_2572_);
lean_ctor_set(v___x_2574_, 5, v___x_2572_);
lean_ctor_set(v___x_2574_, 6, v___x_2572_);
lean_ctor_set(v___x_2574_, 7, v___x_2572_);
lean_ctor_set(v___x_2574_, 8, v___x_2572_);
lean_ctor_set(v___x_2574_, 9, v___x_2572_);
lean_ctor_set(v___x_2574_, 10, v___x_2572_);
lean_ctor_set(v___x_2574_, 11, v___x_2571_);
return v___x_2574_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2575_; lean_object* v___x_2576_; 
v___x_2575_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2576_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2576_, 0, v___x_2575_);
lean_ctor_set(v___x_2576_, 1, v___x_2575_);
lean_ctor_set(v___x_2576_, 2, v___x_2575_);
lean_ctor_set(v___x_2576_, 3, v___x_2575_);
lean_ctor_set(v___x_2576_, 4, v___x_2575_);
lean_ctor_set(v___x_2576_, 5, v___x_2575_);
return v___x_2576_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__31_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2577_; lean_object* v___x_2578_; 
v___x_2577_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__26_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2578_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2578_, 0, v___x_2577_);
lean_ctor_set(v___x_2578_, 1, v___x_2577_);
lean_ctor_set(v___x_2578_, 2, v___x_2577_);
lean_ctor_set(v___x_2578_, 3, v___x_2577_);
lean_ctor_set(v___x_2578_, 4, v___x_2577_);
return v___x_2578_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__34_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2582_; lean_object* v___x_2583_; 
v___x_2582_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__33_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2583_ = l_Lean_MessageData_ofFormat(v___x_2582_);
return v___x_2583_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__36_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2585_; lean_object* v___x_2586_; 
v___x_2585_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__35_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2586_ = l_Lean_stringToMessageData(v___x_2585_);
return v___x_2586_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__38_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2588_; lean_object* v___x_2589_; 
v___x_2588_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__37_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2589_ = l_Lean_stringToMessageData(v___x_2588_);
return v___x_2589_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__40_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2591_; lean_object* v___x_2592_; 
v___x_2591_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__39_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2592_ = l_Lean_stringToMessageData(v___x_2591_);
return v___x_2592_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__42_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2594_; lean_object* v___x_2595_; 
v___x_2594_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__41_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2595_ = l_Lean_stringToMessageData(v___x_2594_);
return v___x_2595_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__44_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2597_; lean_object* v___x_2598_; 
v___x_2597_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__43_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2598_ = l_Lean_stringToMessageData(v___x_2597_);
return v___x_2598_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__46_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2600_; lean_object* v___x_2601_; 
v___x_2600_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__45_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2601_ = l_Lean_stringToMessageData(v___x_2600_);
return v___x_2601_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__48_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2603_; lean_object* v___x_2604_; 
v___x_2603_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__47_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2604_ = l_Lean_stringToMessageData(v___x_2603_);
return v___x_2604_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__50_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2606_; lean_object* v___x_2607_; 
v___x_2606_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__49_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2607_ = l_Lean_stringToMessageData(v___x_2606_);
return v___x_2607_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__52_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2609_; lean_object* v___x_2610_; 
v___x_2609_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__51_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2610_ = l_Lean_stringToMessageData(v___x_2609_);
return v___x_2610_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__54_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2612_; lean_object* v___x_2613_; 
v___x_2612_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__53_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2613_ = l_Lean_stringToMessageData(v___x_2612_);
return v___x_2613_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__56_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2615_; lean_object* v___x_2616_; 
v___x_2615_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__55_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2616_ = l_Lean_stringToMessageData(v___x_2615_);
return v___x_2616_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__58_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2618_; lean_object* v___x_2619_; 
v___x_2618_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__57_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2619_ = l_Lean_stringToMessageData(v___x_2618_);
return v___x_2619_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__60_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2621_; lean_object* v___x_2622_; 
v___x_2621_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__59_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2622_ = l_Lean_stringToMessageData(v___x_2621_);
return v___x_2622_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(lean_object* v___x_2623_, lean_object* v___x_2624_, lean_object* v___f_2625_, uint8_t v___x_2626_, lean_object* v___x_2627_, lean_object* v___x_2628_, lean_object* v_a_2629_, lean_object* v_declName_2630_, lean_object* v_stx_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_){
_start:
{
lean_object* v___y_2636_; lean_object* v___y_2637_; lean_object* v___y_2638_; lean_object* v___y_2642_; lean_object* v___y_2643_; lean_object* v___y_2644_; lean_object* v___y_2645_; lean_object* v___y_2646_; lean_object* v___y_2669_; lean_object* v___y_2670_; lean_object* v___y_2671_; lean_object* v___y_2672_; lean_object* v___y_2673_; lean_object* v___y_2674_; lean_object* v___y_2686_; lean_object* v___y_2687_; lean_object* v___y_2688_; lean_object* v___y_2689_; lean_object* v___y_2690_; lean_object* v___y_2691_; lean_object* v___y_2703_; lean_object* v___y_2704_; lean_object* v___y_2705_; lean_object* v___y_2706_; lean_object* v___y_2707_; lean_object* v___y_2708_; lean_object* v___y_2720_; lean_object* v___y_2721_; lean_object* v___y_2722_; lean_object* v___y_2723_; lean_object* v___y_2724_; lean_object* v___y_2725_; lean_object* v_hint_2726_; lean_object* v___y_2727_; lean_object* v___y_2728_; lean_object* v___y_2751_; lean_object* v___y_2752_; lean_object* v___y_2753_; lean_object* v___y_2754_; lean_object* v___y_2755_; lean_object* v___y_2756_; lean_object* v___y_2757_; lean_object* v___y_2758_; lean_object* v___x_2760_; uint8_t v___x_2761_; 
v___x_2760_ = l_Lean_Name_mkStr2(v___x_2623_, v___x_2624_);
lean_inc(v_stx_2631_);
v___x_2761_ = l_Lean_Syntax_isOfKind(v_stx_2631_, v___x_2760_);
lean_dec(v___x_2760_);
if (v___x_2761_ == 0)
{
lean_object* v___x_2762_; lean_object* v___x_2763_; 
lean_dec(v_stx_2631_);
lean_dec(v_declName_2630_);
lean_dec_ref(v___x_2628_);
lean_dec(v___x_2627_);
lean_dec_ref(v___f_2625_);
v___x_2762_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2763_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___redArg(v___x_2762_, v___y_2632_, v___y_2633_);
return v___x_2763_;
}
else
{
lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___y_2767_; lean_object* v___y_2768_; lean_object* v___y_2769_; lean_object* v___y_2770_; lean_object* v___y_2771_; lean_object* v___y_2772_; lean_object* v___y_2773_; lean_object* v___y_2774_; lean_object* v_val_2775_; lean_object* v___y_2800_; lean_object* v___y_2801_; lean_object* v___y_2802_; lean_object* v___y_2803_; lean_object* v___y_2804_; lean_object* v___y_2805_; lean_object* v___y_2806_; lean_object* v___y_2807_; lean_object* v___y_2812_; lean_object* v___y_2813_; lean_object* v___y_2814_; uint8_t v___y_2815_; lean_object* v___y_2816_; lean_object* v___y_2817_; lean_object* v___y_2818_; lean_object* v___y_2819_; lean_object* v___y_2820_; lean_object* v___y_2821_; lean_object* v___y_2868_; lean_object* v___y_2869_; lean_object* v___y_2870_; lean_object* v___y_2871_; uint8_t v___y_2872_; lean_object* v___y_2873_; lean_object* v___y_2874_; lean_object* v___y_2875_; lean_object* v_msg_2876_; lean_object* v___y_2877_; lean_object* v___y_2878_; lean_object* v___y_2889_; lean_object* v___y_2890_; lean_object* v___y_2891_; lean_object* v___y_2892_; lean_object* v___y_2893_; lean_object* v___y_2894_; lean_object* v___y_2895_; lean_object* v___y_3030_; lean_object* v___y_3031_; lean_object* v___y_3032_; lean_object* v___y_3033_; lean_object* v___y_3034_; lean_object* v___y_3035_; lean_object* v_a_3036_; lean_object* v___y_3054_; lean_object* v___y_3055_; lean_object* v___y_3056_; lean_object* v_since_x3f_3057_; lean_object* v___y_3058_; lean_object* v___y_3059_; lean_object* v___y_3075_; lean_object* v___y_3076_; lean_object* v___y_3077_; lean_object* v_typeChanged_x3f_3078_; lean_object* v___y_3079_; lean_object* v___y_3080_; lean_object* v___y_3092_; lean_object* v_text_x3f_3093_; lean_object* v___y_3094_; lean_object* v___y_3095_; lean_object* v_id_x3f_3106_; lean_object* v___y_3107_; lean_object* v___y_3108_; lean_object* v___x_3118_; uint8_t v___x_3119_; 
v___x_2764_ = lean_unsigned_to_nat(0u);
v___x_2765_ = lean_unsigned_to_nat(1u);
v___x_3118_ = l_Lean_Syntax_getArg(v_stx_2631_, v___x_2765_);
v___x_3119_ = l_Lean_Syntax_isNone(v___x_3118_);
if (v___x_3119_ == 0)
{
uint8_t v___x_3120_; 
lean_inc(v___x_3118_);
v___x_3120_ = l_Lean_Syntax_matchesNull(v___x_3118_, v___x_2765_);
if (v___x_3120_ == 0)
{
lean_object* v___x_3121_; lean_object* v___x_3122_; 
lean_dec(v___x_3118_);
lean_dec(v_stx_2631_);
lean_dec(v_declName_2630_);
lean_dec_ref(v___x_2628_);
lean_dec(v___x_2627_);
lean_dec_ref(v___f_2625_);
v___x_3121_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_3122_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___redArg(v___x_3121_, v___y_2632_, v___y_2633_);
return v___x_3122_;
}
else
{
lean_object* v___x_3123_; lean_object* v___x_3124_; 
v___x_3123_ = l_Lean_Syntax_getArg(v___x_3118_, v___x_2764_);
lean_dec(v___x_3118_);
v___x_3124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3124_, 0, v___x_3123_);
v_id_x3f_3106_ = v___x_3124_;
v___y_3107_ = v___y_2632_;
v___y_3108_ = v___y_2633_;
goto v___jp_3105_;
}
}
else
{
lean_object* v___x_3125_; 
lean_dec(v___x_3118_);
v___x_3125_ = lean_box(0);
v_id_x3f_3106_ = v___x_3125_;
v___y_3107_ = v___y_2632_;
v___y_3108_ = v___y_2633_;
goto v___jp_3105_;
}
v___jp_2766_:
{
lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; uint8_t v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; 
v___x_2776_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__19_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__19_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__19_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2777_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__21_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2778_ = lean_box(0);
v___x_2779_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__25_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__25_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__25_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2780_, 0, v___f_2625_);
v___x_2781_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2781_, 0, v___x_2777_);
lean_ctor_set(v___x_2781_, 1, v___x_2778_);
lean_ctor_set(v___x_2781_, 2, v___x_2778_);
lean_ctor_set(v___x_2781_, 3, v___x_2778_);
lean_ctor_set(v___x_2781_, 4, v___x_2779_);
lean_ctor_set(v___x_2781_, 5, v___x_2780_);
lean_inc(v_val_2775_);
v___x_2782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2782_, 0, v_val_2775_);
lean_ctor_set(v___x_2782_, 1, v_val_2775_);
v___x_2783_ = l_Lean_Syntax_ofRange(v___x_2782_, v___x_2761_);
v___x_2784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2784_, 0, v___x_2783_);
v___x_2785_ = 4;
v___x_2786_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2786_, 0, v___x_2781_);
lean_ctor_set(v___x_2786_, 1, v___x_2784_);
lean_ctor_set(v___x_2786_, 2, v___x_2778_);
lean_ctor_set_uint8(v___x_2786_, sizeof(void*)*3, v___x_2785_);
v___x_2787_ = lean_mk_empty_array_with_capacity(v___x_2765_);
v___x_2788_ = lean_array_push(v___x_2787_, v___x_2786_);
v___x_2789_ = l_Lean_MessageData_hint(v___x_2776_, v___x_2788_, v___x_2778_, v___x_2778_, v___x_2626_, v___y_2771_, v___y_2768_);
lean_dec_ref(v___x_2788_);
if (lean_obj_tag(v___x_2789_) == 0)
{
lean_object* v_a_2790_; 
v_a_2790_ = lean_ctor_get(v___x_2789_, 0);
lean_inc(v_a_2790_);
lean_dec_ref_known(v___x_2789_, 1);
v___y_2720_ = v___y_2767_;
v___y_2721_ = v___y_2769_;
v___y_2722_ = v___y_2770_;
v___y_2723_ = v___y_2772_;
v___y_2724_ = v___y_2773_;
v___y_2725_ = v___y_2774_;
v_hint_2726_ = v_a_2790_;
v___y_2727_ = v___y_2771_;
v___y_2728_ = v___y_2768_;
goto v___jp_2719_;
}
else
{
lean_object* v_a_2791_; lean_object* v___x_2793_; uint8_t v_isShared_2794_; uint8_t v_isSharedCheck_2798_; 
lean_dec(v___y_2774_);
lean_dec(v___y_2773_);
lean_dec(v___y_2772_);
lean_dec_ref(v___y_2770_);
lean_dec_ref(v___y_2769_);
lean_dec(v___y_2767_);
lean_dec(v_stx_2631_);
v_a_2791_ = lean_ctor_get(v___x_2789_, 0);
v_isSharedCheck_2798_ = !lean_is_exclusive(v___x_2789_);
if (v_isSharedCheck_2798_ == 0)
{
v___x_2793_ = v___x_2789_;
v_isShared_2794_ = v_isSharedCheck_2798_;
goto v_resetjp_2792_;
}
else
{
lean_inc(v_a_2791_);
lean_dec(v___x_2789_);
v___x_2793_ = lean_box(0);
v_isShared_2794_ = v_isSharedCheck_2798_;
goto v_resetjp_2792_;
}
v_resetjp_2792_:
{
lean_object* v___x_2796_; 
if (v_isShared_2794_ == 0)
{
v___x_2796_ = v___x_2793_;
goto v_reusejp_2795_;
}
else
{
lean_object* v_reuseFailAlloc_2797_; 
v_reuseFailAlloc_2797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2797_, 0, v_a_2791_);
v___x_2796_ = v_reuseFailAlloc_2797_;
goto v_reusejp_2795_;
}
v_reusejp_2795_:
{
return v___x_2796_;
}
}
}
}
v___jp_2799_:
{
if (lean_obj_tag(v___y_2806_) == 0)
{
lean_dec_ref(v___f_2625_);
v___y_2751_ = v___y_2800_;
v___y_2752_ = v___y_2801_;
v___y_2753_ = v___y_2802_;
v___y_2754_ = v___y_2804_;
v___y_2755_ = v___y_2803_;
v___y_2756_ = v___y_2805_;
v___y_2757_ = v___y_2806_;
v___y_2758_ = v___y_2807_;
goto v___jp_2750_;
}
else
{
lean_object* v_val_2808_; lean_object* v___x_2809_; 
v_val_2808_ = lean_ctor_get(v___y_2806_, 0);
v___x_2809_ = l_Lean_Syntax_getTailPos_x3f(v_val_2808_, v___x_2761_);
if (lean_obj_tag(v___x_2809_) == 1)
{
lean_object* v_val_2810_; 
v_val_2810_ = lean_ctor_get(v___x_2809_, 0);
lean_inc(v_val_2810_);
lean_dec_ref_known(v___x_2809_, 1);
v___y_2767_ = v___y_2800_;
v___y_2768_ = v___y_2801_;
v___y_2769_ = v___y_2802_;
v___y_2770_ = v___y_2804_;
v___y_2771_ = v___y_2803_;
v___y_2772_ = v___y_2805_;
v___y_2773_ = v___y_2806_;
v___y_2774_ = v___y_2807_;
v_val_2775_ = v_val_2810_;
goto v___jp_2766_;
}
else
{
lean_dec(v___x_2809_);
lean_dec_ref(v___f_2625_);
v___y_2751_ = v___y_2800_;
v___y_2752_ = v___y_2801_;
v___y_2753_ = v___y_2802_;
v___y_2754_ = v___y_2804_;
v___y_2755_ = v___y_2803_;
v___y_2756_ = v___y_2805_;
v___y_2757_ = v___y_2806_;
v___y_2758_ = v___y_2807_;
goto v___jp_2750_;
}
}
}
v___jp_2811_:
{
lean_object* v___x_2822_; 
lean_inc_ref(v___y_2816_);
v___x_2822_ = l_Lean_Environment_find_x3f(v___y_2816_, v_declName_2630_, v___x_2626_);
if (lean_obj_tag(v___x_2822_) == 1)
{
lean_object* v_val_2823_; lean_object* v___x_2824_; 
v_val_2823_ = lean_ctor_get(v___x_2822_, 0);
lean_inc(v_val_2823_);
lean_dec_ref_known(v___x_2822_, 1);
v___x_2824_ = l_Lean_Environment_find_x3f(v___y_2816_, v___y_2814_, v___x_2626_);
if (lean_obj_tag(v___x_2824_) == 1)
{
lean_object* v_val_2825_; uint8_t v___x_2826_; uint8_t v___x_2827_; uint8_t v___x_2828_; lean_object* v___x_2829_; uint64_t v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; 
v_val_2825_ = lean_ctor_get(v___x_2824_, 0);
lean_inc(v_val_2825_);
lean_dec_ref_known(v___x_2824_, 1);
v___x_2826_ = 1;
v___x_2827_ = 0;
v___x_2828_ = 2;
v___x_2829_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_2829_, 0, v___x_2626_);
lean_ctor_set_uint8(v___x_2829_, 1, v___x_2626_);
lean_ctor_set_uint8(v___x_2829_, 2, v___x_2626_);
lean_ctor_set_uint8(v___x_2829_, 3, v___x_2626_);
lean_ctor_set_uint8(v___x_2829_, 4, v___x_2626_);
lean_ctor_set_uint8(v___x_2829_, 5, v___y_2815_);
lean_ctor_set_uint8(v___x_2829_, 6, v___y_2815_);
lean_ctor_set_uint8(v___x_2829_, 7, v___x_2626_);
lean_ctor_set_uint8(v___x_2829_, 8, v___y_2815_);
lean_ctor_set_uint8(v___x_2829_, 9, v___x_2826_);
lean_ctor_set_uint8(v___x_2829_, 10, v___x_2827_);
lean_ctor_set_uint8(v___x_2829_, 11, v___y_2815_);
lean_ctor_set_uint8(v___x_2829_, 12, v___y_2815_);
lean_ctor_set_uint8(v___x_2829_, 13, v___y_2815_);
lean_ctor_set_uint8(v___x_2829_, 14, v___x_2828_);
lean_ctor_set_uint8(v___x_2829_, 15, v___y_2815_);
lean_ctor_set_uint8(v___x_2829_, 16, v___y_2815_);
lean_ctor_set_uint8(v___x_2829_, 17, v___y_2815_);
lean_ctor_set_uint8(v___x_2829_, 18, v___y_2815_);
lean_ctor_set_uint8(v___x_2829_, 19, v___x_2626_);
v___x_2830_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2829_);
v___x_2831_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2831_, 0, v___x_2829_);
lean_ctor_set_uint64(v___x_2831_, sizeof(void*)*1, v___x_2830_);
v___x_2832_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__4);
v___x_2833_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__27_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__27_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__27_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2834_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__28_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2835_ = lean_box(0);
lean_inc(v___x_2627_);
v___x_2836_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2836_, 0, v___x_2831_);
lean_ctor_set(v___x_2836_, 1, v___x_2627_);
lean_ctor_set(v___x_2836_, 2, v___x_2833_);
lean_ctor_set(v___x_2836_, 3, v___x_2834_);
lean_ctor_set(v___x_2836_, 4, v___x_2835_);
lean_ctor_set(v___x_2836_, 5, v___x_2764_);
lean_ctor_set(v___x_2836_, 6, v___x_2835_);
lean_ctor_set_uint8(v___x_2836_, sizeof(void*)*7, v___x_2626_);
lean_ctor_set_uint8(v___x_2836_, sizeof(void*)*7 + 1, v___x_2626_);
lean_ctor_set_uint8(v___x_2836_, sizeof(void*)*7 + 2, v___x_2626_);
lean_ctor_set_uint8(v___x_2836_, sizeof(void*)*7 + 3, v___x_2761_);
v___x_2837_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__29_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__29_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__29_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2838_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2839_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__31_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__31_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__31_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2840_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2840_, 0, v___x_2837_);
lean_ctor_set(v___x_2840_, 1, v___x_2838_);
lean_ctor_set(v___x_2840_, 2, v___x_2627_);
lean_ctor_set(v___x_2840_, 3, v___x_2832_);
lean_ctor_set(v___x_2840_, 4, v___x_2839_);
v___x_2841_ = lean_st_mk_ref(v___x_2840_);
v___x_2842_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq(v_val_2823_, v_val_2825_, v___x_2836_, v___x_2841_, v___y_2820_, v___y_2821_);
lean_dec_ref_known(v___x_2836_, 7);
if (lean_obj_tag(v___x_2842_) == 0)
{
lean_object* v_a_2843_; lean_object* v___x_2844_; uint8_t v___x_2845_; 
v_a_2843_ = lean_ctor_get(v___x_2842_, 0);
lean_inc(v_a_2843_);
lean_dec_ref_known(v___x_2842_, 1);
v___x_2844_ = lean_st_ref_get(v___x_2841_);
lean_dec(v___x_2841_);
lean_dec(v___x_2844_);
v___x_2845_ = lean_unbox(v_a_2843_);
lean_dec(v_a_2843_);
if (v___x_2845_ == 0)
{
if (lean_obj_tag(v___y_2818_) == 0)
{
if (lean_obj_tag(v___y_2819_) == 0)
{
v___y_2800_ = v___y_2812_;
v___y_2801_ = v___y_2821_;
v___y_2802_ = v_val_2823_;
v___y_2803_ = v___y_2820_;
v___y_2804_ = v_val_2825_;
v___y_2805_ = v___y_2813_;
v___y_2806_ = v___y_2817_;
v___y_2807_ = v___y_2819_;
goto v___jp_2799_;
}
else
{
lean_object* v_val_2846_; lean_object* v___x_2847_; 
v_val_2846_ = lean_ctor_get(v___y_2819_, 0);
v___x_2847_ = l_Lean_Syntax_getTailPos_x3f(v_val_2846_, v___x_2761_);
if (lean_obj_tag(v___x_2847_) == 0)
{
v___y_2800_ = v___y_2812_;
v___y_2801_ = v___y_2821_;
v___y_2802_ = v_val_2823_;
v___y_2803_ = v___y_2820_;
v___y_2804_ = v_val_2825_;
v___y_2805_ = v___y_2813_;
v___y_2806_ = v___y_2817_;
v___y_2807_ = v___y_2819_;
goto v___jp_2799_;
}
else
{
lean_object* v_val_2848_; 
v_val_2848_ = lean_ctor_get(v___x_2847_, 0);
lean_inc(v_val_2848_);
lean_dec_ref_known(v___x_2847_, 1);
v___y_2767_ = v___y_2812_;
v___y_2768_ = v___y_2821_;
v___y_2769_ = v_val_2823_;
v___y_2770_ = v_val_2825_;
v___y_2771_ = v___y_2820_;
v___y_2772_ = v___y_2813_;
v___y_2773_ = v___y_2817_;
v___y_2774_ = v___y_2819_;
v_val_2775_ = v_val_2848_;
goto v___jp_2766_;
}
}
}
else
{
lean_dec_ref_known(v___y_2818_, 1);
lean_dec(v_val_2825_);
lean_dec(v_val_2823_);
lean_dec_ref(v___f_2625_);
v___y_2703_ = v___y_2812_;
v___y_2704_ = v___y_2813_;
v___y_2705_ = v___y_2817_;
v___y_2706_ = v___y_2819_;
v___y_2707_ = v___y_2820_;
v___y_2708_ = v___y_2821_;
goto v___jp_2702_;
}
}
else
{
lean_dec(v_val_2825_);
lean_dec(v_val_2823_);
lean_dec_ref(v___f_2625_);
if (lean_obj_tag(v___y_2818_) == 0)
{
v___y_2703_ = v___y_2812_;
v___y_2704_ = v___y_2813_;
v___y_2705_ = v___y_2817_;
v___y_2706_ = v___y_2819_;
v___y_2707_ = v___y_2820_;
v___y_2708_ = v___y_2821_;
goto v___jp_2702_;
}
else
{
lean_object* v___x_2849_; lean_object* v___x_2850_; 
lean_dec_ref_known(v___y_2818_, 1);
v___x_2849_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__34_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__34_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__34_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2850_ = l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1(v___x_2849_, v___y_2820_, v___y_2821_);
if (lean_obj_tag(v___x_2850_) == 0)
{
lean_dec_ref_known(v___x_2850_, 1);
v___y_2703_ = v___y_2812_;
v___y_2704_ = v___y_2813_;
v___y_2705_ = v___y_2817_;
v___y_2706_ = v___y_2819_;
v___y_2707_ = v___y_2820_;
v___y_2708_ = v___y_2821_;
goto v___jp_2702_;
}
else
{
lean_object* v_a_2851_; lean_object* v___x_2853_; uint8_t v_isShared_2854_; uint8_t v_isSharedCheck_2858_; 
lean_dec(v___y_2819_);
lean_dec(v___y_2817_);
lean_dec(v___y_2813_);
lean_dec(v___y_2812_);
lean_dec(v_stx_2631_);
v_a_2851_ = lean_ctor_get(v___x_2850_, 0);
v_isSharedCheck_2858_ = !lean_is_exclusive(v___x_2850_);
if (v_isSharedCheck_2858_ == 0)
{
v___x_2853_ = v___x_2850_;
v_isShared_2854_ = v_isSharedCheck_2858_;
goto v_resetjp_2852_;
}
else
{
lean_inc(v_a_2851_);
lean_dec(v___x_2850_);
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
}
}
else
{
lean_object* v_a_2859_; lean_object* v___x_2861_; uint8_t v_isShared_2862_; uint8_t v_isSharedCheck_2866_; 
lean_dec(v___x_2841_);
lean_dec(v_val_2825_);
lean_dec(v_val_2823_);
lean_dec(v___y_2819_);
lean_dec(v___y_2818_);
lean_dec(v___y_2817_);
lean_dec(v___y_2813_);
lean_dec(v___y_2812_);
lean_dec(v_stx_2631_);
lean_dec_ref(v___f_2625_);
v_a_2859_ = lean_ctor_get(v___x_2842_, 0);
v_isSharedCheck_2866_ = !lean_is_exclusive(v___x_2842_);
if (v_isSharedCheck_2866_ == 0)
{
v___x_2861_ = v___x_2842_;
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
else
{
lean_inc(v_a_2859_);
lean_dec(v___x_2842_);
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
else
{
lean_dec(v___x_2824_);
lean_dec(v_val_2823_);
lean_dec(v___y_2818_);
lean_dec(v___x_2627_);
lean_dec_ref(v___f_2625_);
v___y_2703_ = v___y_2812_;
v___y_2704_ = v___y_2813_;
v___y_2705_ = v___y_2817_;
v___y_2706_ = v___y_2819_;
v___y_2707_ = v___y_2820_;
v___y_2708_ = v___y_2821_;
goto v___jp_2702_;
}
}
else
{
lean_dec(v___x_2822_);
lean_dec(v___y_2818_);
lean_dec_ref(v___y_2816_);
lean_dec(v___y_2814_);
lean_dec(v___x_2627_);
lean_dec_ref(v___f_2625_);
v___y_2703_ = v___y_2812_;
v___y_2704_ = v___y_2813_;
v___y_2705_ = v___y_2817_;
v___y_2706_ = v___y_2819_;
v___y_2707_ = v___y_2820_;
v___y_2708_ = v___y_2821_;
goto v___jp_2702_;
}
}
v___jp_2867_:
{
lean_object* v___x_2879_; 
v___x_2879_ = l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1(v_msg_2876_, v___y_2877_, v___y_2878_);
if (lean_obj_tag(v___x_2879_) == 0)
{
lean_dec_ref_known(v___x_2879_, 1);
v___y_2812_ = v___y_2868_;
v___y_2813_ = v___y_2869_;
v___y_2814_ = v___y_2870_;
v___y_2815_ = v___y_2872_;
v___y_2816_ = v___y_2871_;
v___y_2817_ = v___y_2873_;
v___y_2818_ = v___y_2874_;
v___y_2819_ = v___y_2875_;
v___y_2820_ = v___y_2877_;
v___y_2821_ = v___y_2878_;
goto v___jp_2811_;
}
else
{
lean_object* v_a_2880_; lean_object* v___x_2882_; uint8_t v_isShared_2883_; uint8_t v_isSharedCheck_2887_; 
lean_dec(v___y_2875_);
lean_dec(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec(v___y_2869_);
lean_dec(v___y_2868_);
lean_dec(v_stx_2631_);
lean_dec(v_declName_2630_);
lean_dec(v___x_2627_);
lean_dec_ref(v___f_2625_);
v_a_2880_ = lean_ctor_get(v___x_2879_, 0);
v_isSharedCheck_2887_ = !lean_is_exclusive(v___x_2879_);
if (v_isSharedCheck_2887_ == 0)
{
v___x_2882_ = v___x_2879_;
v_isShared_2883_ = v_isSharedCheck_2887_;
goto v_resetjp_2881_;
}
else
{
lean_inc(v_a_2880_);
lean_dec(v___x_2879_);
v___x_2882_ = lean_box(0);
v_isShared_2883_ = v_isSharedCheck_2887_;
goto v_resetjp_2881_;
}
v_resetjp_2881_:
{
lean_object* v___x_2885_; 
if (v_isShared_2883_ == 0)
{
v___x_2885_ = v___x_2882_;
goto v_reusejp_2884_;
}
else
{
lean_object* v_reuseFailAlloc_2886_; 
v_reuseFailAlloc_2886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2886_, 0, v_a_2880_);
v___x_2885_ = v_reuseFailAlloc_2886_;
goto v_reusejp_2884_;
}
v_reusejp_2884_:
{
return v___x_2885_;
}
}
}
}
v___jp_2888_:
{
if (lean_obj_tag(v___y_2890_) == 1)
{
lean_object* v_val_2896_; lean_object* v___x_2897_; 
v_val_2896_ = lean_ctor_get(v___y_2890_, 0);
lean_inc(v_val_2896_);
v___x_2897_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2(v_val_2896_, v___x_2626_, v___y_2894_, v___y_2895_);
if (lean_obj_tag(v___x_2897_) == 0)
{
lean_object* v___x_2898_; lean_object* v_a_2899_; lean_object* v___x_2900_; uint8_t v___x_2901_; 
lean_dec_ref_known(v___x_2897_, 1);
v___x_2898_ = l_Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3(v___y_2894_, v___y_2895_);
v_a_2899_ = lean_ctor_get(v___x_2898_, 0);
lean_inc(v_a_2899_);
lean_dec_ref(v___x_2898_);
v___x_2900_ = l_Lean_Linter_linter_deprecated;
v___x_2901_ = l_Lean_Linter_getLinterValue(v___x_2900_, v_a_2899_);
lean_dec(v_a_2899_);
if (v___x_2901_ == 0)
{
lean_dec(v___y_2892_);
lean_dec(v_declName_2630_);
lean_dec_ref(v___x_2628_);
lean_dec(v___x_2627_);
lean_dec_ref(v___f_2625_);
v___y_2703_ = v___y_2889_;
v___y_2704_ = v___y_2890_;
v___y_2705_ = v___y_2891_;
v___y_2706_ = v___y_2893_;
v___y_2707_ = v___y_2894_;
v___y_2708_ = v___y_2895_;
goto v___jp_2702_;
}
else
{
lean_object* v___x_2902_; lean_object* v_env_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; uint8_t v___x_2906_; 
lean_inc(v_val_2896_);
v___x_2902_ = lean_st_ref_get(v___y_2895_);
v_env_2903_ = lean_ctor_get(v___x_2902_, 0);
lean_inc_ref(v_env_2903_);
lean_dec(v___x_2902_);
v___x_2904_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2894_);
v___x_2905_ = l_Lean_Linter_linter_deprecated_deprecatedTarget;
v___x_2906_ = l_Lean_Option_get___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__4(v___x_2904_, v___x_2905_);
lean_dec_ref(v___x_2904_);
if (v___x_2906_ == 0)
{
lean_dec_ref(v___x_2628_);
v___y_2812_ = v___y_2889_;
v___y_2813_ = v___y_2890_;
v___y_2814_ = v_val_2896_;
v___y_2815_ = v___x_2901_;
v___y_2816_ = v_env_2903_;
v___y_2817_ = v___y_2891_;
v___y_2818_ = v___y_2892_;
v___y_2819_ = v___y_2893_;
v___y_2820_ = v___y_2894_;
v___y_2821_ = v___y_2895_;
goto v___jp_2811_;
}
else
{
lean_object* v___x_2907_; 
lean_inc(v_val_2896_);
lean_inc_ref(v_env_2903_);
v___x_2907_ = l_Lean_ParametricAttribute_getParamFromExt_x3f___redArg(v___x_2628_, v_a_2629_, v___x_2626_, v_env_2903_, v_val_2896_);
if (lean_obj_tag(v___x_2907_) == 1)
{
lean_object* v_val_2908_; lean_object* v_name_2909_; lean_object* v_newName_x3f_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; 
v_val_2908_ = lean_ctor_get(v___x_2907_, 0);
lean_inc(v_val_2908_);
lean_dec_ref_known(v___x_2907_, 1);
v_name_2909_ = lean_ctor_get(v___x_2905_, 0);
v_newName_x3f_2910_ = lean_ctor_get(v_val_2908_, 0);
lean_inc(v_newName_x3f_2910_);
lean_dec(v_val_2908_);
v___x_2911_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__36_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__36_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__36_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
lean_inc(v_name_2909_);
v___x_2912_ = l_Lean_MessageData_ofName(v_name_2909_);
v___x_2913_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2913_, 0, v___x_2911_);
lean_ctor_set(v___x_2913_, 1, v___x_2912_);
v___x_2914_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__38_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__38_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__38_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2915_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2915_, 0, v___x_2913_);
lean_ctor_set(v___x_2915_, 1, v___x_2914_);
v___x_2916_ = l_Lean_MessageData_note(v___x_2915_);
if (lean_obj_tag(v_newName_x3f_2910_) == 0)
{
lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; 
v___x_2917_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__40_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__40_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__40_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
lean_inc(v_val_2896_);
v___x_2918_ = l_Lean_MessageData_ofConstName(v_val_2896_, v___x_2761_);
v___x_2919_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2919_, 0, v___x_2917_);
lean_ctor_set(v___x_2919_, 1, v___x_2918_);
v___x_2920_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__42_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__42_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__42_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2921_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2921_, 0, v___x_2919_);
lean_ctor_set(v___x_2921_, 1, v___x_2920_);
lean_inc(v_declName_2630_);
v___x_2922_ = l_Lean_MessageData_ofConstName(v_declName_2630_, v___x_2761_);
v___x_2923_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2923_, 0, v___x_2921_);
lean_ctor_set(v___x_2923_, 1, v___x_2922_);
v___x_2924_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__44_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__44_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__44_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2925_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2925_, 0, v___x_2923_);
lean_ctor_set(v___x_2925_, 1, v___x_2924_);
v___x_2926_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2926_, 0, v___x_2925_);
lean_ctor_set(v___x_2926_, 1, v___x_2916_);
v___x_2927_ = l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1(v___x_2926_, v___y_2894_, v___y_2895_);
if (lean_obj_tag(v___x_2927_) == 0)
{
lean_dec_ref_known(v___x_2927_, 1);
v___y_2812_ = v___y_2889_;
v___y_2813_ = v___y_2890_;
v___y_2814_ = v_val_2896_;
v___y_2815_ = v___x_2901_;
v___y_2816_ = v_env_2903_;
v___y_2817_ = v___y_2891_;
v___y_2818_ = v___y_2892_;
v___y_2819_ = v___y_2893_;
v___y_2820_ = v___y_2894_;
v___y_2821_ = v___y_2895_;
goto v___jp_2811_;
}
else
{
lean_object* v_a_2928_; lean_object* v___x_2930_; uint8_t v_isShared_2931_; uint8_t v_isSharedCheck_2935_; 
lean_dec_ref(v_env_2903_);
lean_dec(v_val_2896_);
lean_dec_ref_known(v___y_2890_, 1);
lean_dec(v___y_2893_);
lean_dec(v___y_2892_);
lean_dec(v___y_2891_);
lean_dec(v___y_2889_);
lean_dec(v_stx_2631_);
lean_dec(v_declName_2630_);
lean_dec(v___x_2627_);
lean_dec_ref(v___f_2625_);
v_a_2928_ = lean_ctor_get(v___x_2927_, 0);
v_isSharedCheck_2935_ = !lean_is_exclusive(v___x_2927_);
if (v_isSharedCheck_2935_ == 0)
{
v___x_2930_ = v___x_2927_;
v_isShared_2931_ = v_isSharedCheck_2935_;
goto v_resetjp_2929_;
}
else
{
lean_inc(v_a_2928_);
lean_dec(v___x_2927_);
v___x_2930_ = lean_box(0);
v_isShared_2931_ = v_isSharedCheck_2935_;
goto v_resetjp_2929_;
}
v_resetjp_2929_:
{
lean_object* v___x_2933_; 
if (v_isShared_2931_ == 0)
{
v___x_2933_ = v___x_2930_;
goto v_reusejp_2932_;
}
else
{
lean_object* v_reuseFailAlloc_2934_; 
v_reuseFailAlloc_2934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2934_, 0, v_a_2928_);
v___x_2933_ = v_reuseFailAlloc_2934_;
goto v_reusejp_2932_;
}
v_reusejp_2932_:
{
return v___x_2933_;
}
}
}
}
else
{
lean_object* v_val_2936_; uint8_t v___x_2937_; 
v_val_2936_ = lean_ctor_get(v_newName_x3f_2910_, 0);
lean_inc(v_val_2936_);
lean_dec_ref_known(v_newName_x3f_2910_, 1);
v___x_2937_ = lean_name_eq(v_val_2936_, v_val_2896_);
if (v___x_2937_ == 0)
{
lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; 
v___x_2938_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__40_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__40_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__40_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
lean_inc(v_val_2896_);
v___x_2939_ = l_Lean_MessageData_ofConstName(v_val_2896_, v___x_2761_);
v___x_2940_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2940_, 0, v___x_2938_);
lean_ctor_set(v___x_2940_, 1, v___x_2939_);
v___x_2941_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__46_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__46_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__46_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2942_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2942_, 0, v___x_2940_);
lean_ctor_set(v___x_2942_, 1, v___x_2941_);
lean_inc(v_val_2936_);
v___x_2943_ = l_Lean_MessageData_ofConstName(v_val_2936_, v___x_2761_);
lean_inc_ref_n(v___x_2943_, 2);
v___x_2944_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2944_, 0, v___x_2942_);
lean_ctor_set(v___x_2944_, 1, v___x_2943_);
v___x_2945_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__48_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__48_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__48_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2946_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2946_, 0, v___x_2944_);
lean_ctor_set(v___x_2946_, 1, v___x_2945_);
lean_inc(v_declName_2630_);
v___x_2947_ = l_Lean_MessageData_ofConstName(v_declName_2630_, v___x_2761_);
v___x_2948_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2948_, 0, v___x_2946_);
lean_ctor_set(v___x_2948_, 1, v___x_2947_);
v___x_2949_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__50_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__50_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__50_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2950_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2950_, 0, v___x_2948_);
lean_ctor_set(v___x_2950_, 1, v___x_2949_);
v___x_2951_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2951_, 0, v___x_2950_);
lean_ctor_set(v___x_2951_, 1, v___x_2943_);
v___x_2952_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__52_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__52_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__52_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2953_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2953_, 0, v___x_2951_);
lean_ctor_set(v___x_2953_, 1, v___x_2952_);
v___x_2954_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2954_, 0, v___x_2953_);
lean_ctor_set(v___x_2954_, 1, v___x_2916_);
if (lean_obj_tag(v___y_2891_) == 1)
{
lean_object* v_val_2955_; lean_object* v___x_2956_; 
v_val_2955_ = lean_ctor_get(v___y_2891_, 0);
v___x_2956_ = l_Lean_Syntax_getRange_x3f(v_val_2955_, v___x_2761_);
if (lean_obj_tag(v___x_2956_) == 0)
{
lean_dec_ref(v___x_2943_);
lean_dec(v_val_2936_);
v___y_2868_ = v___y_2889_;
v___y_2869_ = v___y_2890_;
v___y_2870_ = v_val_2896_;
v___y_2871_ = v_env_2903_;
v___y_2872_ = v___x_2901_;
v___y_2873_ = v___y_2891_;
v___y_2874_ = v___y_2892_;
v___y_2875_ = v___y_2893_;
v_msg_2876_ = v___x_2954_;
v___y_2877_ = v___y_2894_;
v___y_2878_ = v___y_2895_;
goto v___jp_2867_;
}
else
{
lean_object* v___x_2958_; uint8_t v_isShared_2959_; uint8_t v_isSharedCheck_3019_; 
v_isSharedCheck_3019_ = !lean_is_exclusive(v___x_2956_);
if (v_isSharedCheck_3019_ == 0)
{
lean_object* v_unused_3020_; 
v_unused_3020_ = lean_ctor_get(v___x_2956_, 0);
lean_dec(v_unused_3020_);
v___x_2958_ = v___x_2956_;
v_isShared_2959_ = v_isSharedCheck_3019_;
goto v_resetjp_2957_;
}
else
{
lean_dec(v___x_2956_);
v___x_2958_ = lean_box(0);
v_isShared_2959_ = v_isSharedCheck_3019_;
goto v_resetjp_2957_;
}
v_resetjp_2957_:
{
uint8_t v___x_2960_; uint8_t v___x_2961_; uint8_t v___x_2962_; lean_object* v___x_2963_; uint64_t v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; 
v___x_2960_ = 1;
v___x_2961_ = 0;
v___x_2962_ = 2;
v___x_2963_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_2963_, 0, v___x_2937_);
lean_ctor_set_uint8(v___x_2963_, 1, v___x_2937_);
lean_ctor_set_uint8(v___x_2963_, 2, v___x_2937_);
lean_ctor_set_uint8(v___x_2963_, 3, v___x_2937_);
lean_ctor_set_uint8(v___x_2963_, 4, v___x_2937_);
lean_ctor_set_uint8(v___x_2963_, 5, v___x_2906_);
lean_ctor_set_uint8(v___x_2963_, 6, v___x_2906_);
lean_ctor_set_uint8(v___x_2963_, 7, v___x_2937_);
lean_ctor_set_uint8(v___x_2963_, 8, v___x_2906_);
lean_ctor_set_uint8(v___x_2963_, 9, v___x_2960_);
lean_ctor_set_uint8(v___x_2963_, 10, v___x_2961_);
lean_ctor_set_uint8(v___x_2963_, 11, v___x_2906_);
lean_ctor_set_uint8(v___x_2963_, 12, v___x_2906_);
lean_ctor_set_uint8(v___x_2963_, 13, v___x_2906_);
lean_ctor_set_uint8(v___x_2963_, 14, v___x_2962_);
lean_ctor_set_uint8(v___x_2963_, 15, v___x_2906_);
lean_ctor_set_uint8(v___x_2963_, 16, v___x_2906_);
lean_ctor_set_uint8(v___x_2963_, 17, v___x_2906_);
lean_ctor_set_uint8(v___x_2963_, 18, v___x_2906_);
lean_ctor_set_uint8(v___x_2963_, 19, v___x_2937_);
v___x_2964_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2963_);
v___x_2965_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2965_, 0, v___x_2963_);
lean_ctor_set_uint64(v___x_2965_, sizeof(void*)*1, v___x_2964_);
v___x_2966_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0_spec__0___closed__4);
v___x_2967_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__27_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__27_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__27_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2968_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__28_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_2969_ = lean_box(0);
lean_inc_n(v___x_2627_, 2);
v___x_2970_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2970_, 0, v___x_2965_);
lean_ctor_set(v___x_2970_, 1, v___x_2627_);
lean_ctor_set(v___x_2970_, 2, v___x_2967_);
lean_ctor_set(v___x_2970_, 3, v___x_2968_);
lean_ctor_set(v___x_2970_, 4, v___x_2969_);
lean_ctor_set(v___x_2970_, 5, v___x_2764_);
lean_ctor_set(v___x_2970_, 6, v___x_2969_);
lean_ctor_set_uint8(v___x_2970_, sizeof(void*)*7, v___x_2626_);
lean_ctor_set_uint8(v___x_2970_, sizeof(void*)*7 + 1, v___x_2626_);
lean_ctor_set_uint8(v___x_2970_, sizeof(void*)*7 + 2, v___x_2626_);
lean_ctor_set_uint8(v___x_2970_, sizeof(void*)*7 + 3, v___x_2761_);
v___x_2971_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__29_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__29_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__29_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2972_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__30_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2973_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__31_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__31_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__31_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2974_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2974_, 0, v___x_2971_);
lean_ctor_set(v___x_2974_, 1, v___x_2972_);
lean_ctor_set(v___x_2974_, 2, v___x_2627_);
lean_ctor_set(v___x_2974_, 3, v___x_2966_);
lean_ctor_set(v___x_2974_, 4, v___x_2973_);
v___x_2975_ = lean_st_mk_ref(v___x_2974_);
v___x_2976_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5(v_val_2936_, v___x_2626_, v___x_2970_, v___x_2975_, v___y_2894_, v___y_2895_);
lean_dec_ref_known(v___x_2970_, 7);
if (lean_obj_tag(v___x_2976_) == 0)
{
lean_object* v_a_2977_; lean_object* v___x_2978_; 
v_a_2977_ = lean_ctor_get(v___x_2976_, 0);
lean_inc(v_a_2977_);
lean_dec_ref_known(v___x_2976_, 1);
v___x_2978_ = lean_st_ref_get(v___x_2975_);
lean_dec(v___x_2975_);
lean_dec(v___x_2978_);
if (lean_obj_tag(v_a_2977_) == 1)
{
lean_object* v_val_2979_; lean_object* v___x_2981_; uint8_t v_isShared_2982_; uint8_t v_isSharedCheck_3010_; 
v_val_2979_ = lean_ctor_get(v_a_2977_, 0);
v_isSharedCheck_3010_ = !lean_is_exclusive(v_a_2977_);
if (v_isSharedCheck_3010_ == 0)
{
v___x_2981_ = v_a_2977_;
v_isShared_2982_ = v_isSharedCheck_3010_;
goto v_resetjp_2980_;
}
else
{
lean_inc(v_val_2979_);
lean_dec(v_a_2977_);
v___x_2981_ = lean_box(0);
v_isShared_2982_ = v_isSharedCheck_3010_;
goto v_resetjp_2980_;
}
v_resetjp_2980_:
{
lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2989_; 
v___x_2983_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__54_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__54_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__54_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2984_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2984_, 0, v___x_2983_);
lean_ctor_set(v___x_2984_, 1, v___x_2943_);
v___x_2985_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__56_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__56_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__56_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2986_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2986_, 0, v___x_2984_);
lean_ctor_set(v___x_2986_, 1, v___x_2985_);
v___x_2987_ = l_Lean_Name_toString(v_val_2979_, v___x_2761_);
if (v_isShared_2959_ == 0)
{
lean_ctor_set(v___x_2958_, 0, v___x_2987_);
v___x_2989_ = v___x_2958_;
goto v_reusejp_2988_;
}
else
{
lean_object* v_reuseFailAlloc_3009_; 
v_reuseFailAlloc_3009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3009_, 0, v___x_2987_);
v___x_2989_ = v_reuseFailAlloc_3009_;
goto v_reusejp_2988_;
}
v_reusejp_2988_:
{
lean_object* v___x_2990_; uint8_t v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2996_; 
v___x_2990_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2990_, 0, v___x_2989_);
lean_ctor_set(v___x_2990_, 1, v___x_2969_);
lean_ctor_set(v___x_2990_, 2, v___x_2969_);
lean_ctor_set(v___x_2990_, 3, v___x_2969_);
lean_ctor_set(v___x_2990_, 4, v___x_2969_);
lean_ctor_set(v___x_2990_, 5, v___x_2969_);
v___x_2991_ = 0;
v___x_2992_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2992_, 0, v___x_2990_);
lean_ctor_set(v___x_2992_, 1, v___x_2969_);
lean_ctor_set(v___x_2992_, 2, v___x_2969_);
lean_ctor_set_uint8(v___x_2992_, sizeof(void*)*3, v___x_2991_);
v___x_2993_ = lean_mk_empty_array_with_capacity(v___x_2765_);
v___x_2994_ = lean_array_push(v___x_2993_, v___x_2992_);
lean_inc(v_val_2955_);
if (v_isShared_2982_ == 0)
{
lean_ctor_set(v___x_2981_, 0, v_val_2955_);
v___x_2996_ = v___x_2981_;
goto v_reusejp_2995_;
}
else
{
lean_object* v_reuseFailAlloc_3008_; 
v_reuseFailAlloc_3008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3008_, 0, v_val_2955_);
v___x_2996_ = v_reuseFailAlloc_3008_;
goto v_reusejp_2995_;
}
v_reusejp_2995_:
{
lean_object* v___x_2997_; 
v___x_2997_ = l_Lean_MessageData_hint(v___x_2986_, v___x_2994_, v___x_2996_, v___x_2969_, v___x_2626_, v___y_2894_, v___y_2895_);
lean_dec_ref(v___x_2994_);
if (lean_obj_tag(v___x_2997_) == 0)
{
lean_object* v_a_2998_; lean_object* v___x_2999_; 
v_a_2998_ = lean_ctor_get(v___x_2997_, 0);
lean_inc(v_a_2998_);
lean_dec_ref_known(v___x_2997_, 1);
v___x_2999_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2999_, 0, v___x_2954_);
lean_ctor_set(v___x_2999_, 1, v_a_2998_);
v___y_2868_ = v___y_2889_;
v___y_2869_ = v___y_2890_;
v___y_2870_ = v_val_2896_;
v___y_2871_ = v_env_2903_;
v___y_2872_ = v___x_2901_;
v___y_2873_ = v___y_2891_;
v___y_2874_ = v___y_2892_;
v___y_2875_ = v___y_2893_;
v_msg_2876_ = v___x_2999_;
v___y_2877_ = v___y_2894_;
v___y_2878_ = v___y_2895_;
goto v___jp_2867_;
}
else
{
lean_object* v_a_3000_; lean_object* v___x_3002_; uint8_t v_isShared_3003_; uint8_t v_isSharedCheck_3007_; 
lean_dec_ref_known(v___y_2891_, 1);
lean_dec_ref_known(v___x_2954_, 2);
lean_dec_ref(v_env_2903_);
lean_dec(v_val_2896_);
lean_dec_ref_known(v___y_2890_, 1);
lean_dec(v___y_2893_);
lean_dec(v___y_2892_);
lean_dec(v___y_2889_);
lean_dec(v_stx_2631_);
lean_dec(v_declName_2630_);
lean_dec(v___x_2627_);
lean_dec_ref(v___f_2625_);
v_a_3000_ = lean_ctor_get(v___x_2997_, 0);
v_isSharedCheck_3007_ = !lean_is_exclusive(v___x_2997_);
if (v_isSharedCheck_3007_ == 0)
{
v___x_3002_ = v___x_2997_;
v_isShared_3003_ = v_isSharedCheck_3007_;
goto v_resetjp_3001_;
}
else
{
lean_inc(v_a_3000_);
lean_dec(v___x_2997_);
v___x_3002_ = lean_box(0);
v_isShared_3003_ = v_isSharedCheck_3007_;
goto v_resetjp_3001_;
}
v_resetjp_3001_:
{
lean_object* v___x_3005_; 
if (v_isShared_3003_ == 0)
{
v___x_3005_ = v___x_3002_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3006_; 
v_reuseFailAlloc_3006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3006_, 0, v_a_3000_);
v___x_3005_ = v_reuseFailAlloc_3006_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
return v___x_3005_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_2977_);
lean_del_object(v___x_2958_);
lean_dec_ref(v___x_2943_);
v___y_2868_ = v___y_2889_;
v___y_2869_ = v___y_2890_;
v___y_2870_ = v_val_2896_;
v___y_2871_ = v_env_2903_;
v___y_2872_ = v___x_2901_;
v___y_2873_ = v___y_2891_;
v___y_2874_ = v___y_2892_;
v___y_2875_ = v___y_2893_;
v_msg_2876_ = v___x_2954_;
v___y_2877_ = v___y_2894_;
v___y_2878_ = v___y_2895_;
goto v___jp_2867_;
}
}
else
{
lean_object* v_a_3011_; lean_object* v___x_3013_; uint8_t v_isShared_3014_; uint8_t v_isSharedCheck_3018_; 
lean_dec(v___x_2975_);
lean_del_object(v___x_2958_);
lean_dec_ref_known(v___y_2891_, 1);
lean_dec_ref_known(v___x_2954_, 2);
lean_dec_ref(v___x_2943_);
lean_dec_ref(v_env_2903_);
lean_dec_ref_known(v___y_2890_, 1);
lean_dec(v_val_2896_);
lean_dec(v___y_2893_);
lean_dec(v___y_2892_);
lean_dec(v___y_2889_);
lean_dec(v_stx_2631_);
lean_dec(v_declName_2630_);
lean_dec(v___x_2627_);
lean_dec_ref(v___f_2625_);
v_a_3011_ = lean_ctor_get(v___x_2976_, 0);
v_isSharedCheck_3018_ = !lean_is_exclusive(v___x_2976_);
if (v_isSharedCheck_3018_ == 0)
{
v___x_3013_ = v___x_2976_;
v_isShared_3014_ = v_isSharedCheck_3018_;
goto v_resetjp_3012_;
}
else
{
lean_inc(v_a_3011_);
lean_dec(v___x_2976_);
v___x_3013_ = lean_box(0);
v_isShared_3014_ = v_isSharedCheck_3018_;
goto v_resetjp_3012_;
}
v_resetjp_3012_:
{
lean_object* v___x_3016_; 
if (v_isShared_3014_ == 0)
{
v___x_3016_ = v___x_3013_;
goto v_reusejp_3015_;
}
else
{
lean_object* v_reuseFailAlloc_3017_; 
v_reuseFailAlloc_3017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3017_, 0, v_a_3011_);
v___x_3016_ = v_reuseFailAlloc_3017_;
goto v_reusejp_3015_;
}
v_reusejp_3015_:
{
return v___x_3016_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_2943_);
lean_dec(v_val_2936_);
v___y_2868_ = v___y_2889_;
v___y_2869_ = v___y_2890_;
v___y_2870_ = v_val_2896_;
v___y_2871_ = v_env_2903_;
v___y_2872_ = v___x_2901_;
v___y_2873_ = v___y_2891_;
v___y_2874_ = v___y_2892_;
v___y_2875_ = v___y_2893_;
v_msg_2876_ = v___x_2954_;
v___y_2877_ = v___y_2894_;
v___y_2878_ = v___y_2895_;
goto v___jp_2867_;
}
}
else
{
lean_dec(v_val_2936_);
lean_dec_ref(v___x_2916_);
v___y_2812_ = v___y_2889_;
v___y_2813_ = v___y_2890_;
v___y_2814_ = v_val_2896_;
v___y_2815_ = v___x_2901_;
v___y_2816_ = v_env_2903_;
v___y_2817_ = v___y_2891_;
v___y_2818_ = v___y_2892_;
v___y_2819_ = v___y_2893_;
v___y_2820_ = v___y_2894_;
v___y_2821_ = v___y_2895_;
goto v___jp_2811_;
}
}
}
else
{
lean_dec(v___x_2907_);
v___y_2812_ = v___y_2889_;
v___y_2813_ = v___y_2890_;
v___y_2814_ = v_val_2896_;
v___y_2815_ = v___x_2901_;
v___y_2816_ = v_env_2903_;
v___y_2817_ = v___y_2891_;
v___y_2818_ = v___y_2892_;
v___y_2819_ = v___y_2893_;
v___y_2820_ = v___y_2894_;
v___y_2821_ = v___y_2895_;
goto v___jp_2811_;
}
}
}
}
else
{
lean_object* v_a_3021_; lean_object* v___x_3023_; uint8_t v_isShared_3024_; uint8_t v_isSharedCheck_3028_; 
lean_dec_ref_known(v___y_2890_, 1);
lean_dec(v___y_2893_);
lean_dec(v___y_2892_);
lean_dec(v___y_2891_);
lean_dec(v___y_2889_);
lean_dec(v_stx_2631_);
lean_dec(v_declName_2630_);
lean_dec_ref(v___x_2628_);
lean_dec(v___x_2627_);
lean_dec_ref(v___f_2625_);
v_a_3021_ = lean_ctor_get(v___x_2897_, 0);
v_isSharedCheck_3028_ = !lean_is_exclusive(v___x_2897_);
if (v_isSharedCheck_3028_ == 0)
{
v___x_3023_ = v___x_2897_;
v_isShared_3024_ = v_isSharedCheck_3028_;
goto v_resetjp_3022_;
}
else
{
lean_inc(v_a_3021_);
lean_dec(v___x_2897_);
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
v_reuseFailAlloc_3027_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_dec(v___y_2892_);
lean_dec(v_declName_2630_);
lean_dec_ref(v___x_2628_);
lean_dec(v___x_2627_);
lean_dec_ref(v___f_2625_);
v___y_2703_ = v___y_2889_;
v___y_2704_ = v___y_2890_;
v___y_2705_ = v___y_2891_;
v___y_2706_ = v___y_2893_;
v___y_2707_ = v___y_2894_;
v___y_2708_ = v___y_2895_;
goto v___jp_2702_;
}
}
v___jp_3029_:
{
lean_object* v___x_3037_; uint8_t v___x_3038_; 
lean_inc(v_declName_2630_);
v___x_3037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3037_, 0, v_declName_2630_);
v___x_3038_ = l_instBEqOption_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__6(v_a_3036_, v___x_3037_);
lean_dec_ref_known(v___x_3037_, 1);
if (v___x_3038_ == 0)
{
v___y_2889_ = v___y_3030_;
v___y_2890_ = v_a_3036_;
v___y_2891_ = v___y_3032_;
v___y_2892_ = v___y_3033_;
v___y_2893_ = v___y_3035_;
v___y_2894_ = v___y_3034_;
v___y_2895_ = v___y_3031_;
goto v___jp_2888_;
}
else
{
lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v_a_3045_; lean_object* v___x_3047_; uint8_t v_isShared_3048_; uint8_t v_isSharedCheck_3052_; 
lean_dec(v_a_3036_);
lean_dec(v___y_3035_);
lean_dec(v___y_3033_);
lean_dec(v___y_3032_);
lean_dec(v___y_3030_);
lean_dec(v_stx_2631_);
lean_dec_ref(v___x_2628_);
lean_dec(v___x_2627_);
lean_dec_ref(v___f_2625_);
v___x_3039_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__58_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__58_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__58_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_3040_ = l_Lean_MessageData_ofConstName(v_declName_2630_, v___x_2761_);
v___x_3041_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3041_, 0, v___x_3039_);
lean_ctor_set(v___x_3041_, 1, v___x_3040_);
v___x_3042_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__60_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__60_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__60_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_3043_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3043_, 0, v___x_3041_);
lean_ctor_set(v___x_3043_, 1, v___x_3042_);
v___x_3044_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___redArg(v___x_3043_, v___y_3034_, v___y_3031_);
v_a_3045_ = lean_ctor_get(v___x_3044_, 0);
v_isSharedCheck_3052_ = !lean_is_exclusive(v___x_3044_);
if (v_isSharedCheck_3052_ == 0)
{
v___x_3047_ = v___x_3044_;
v_isShared_3048_ = v_isSharedCheck_3052_;
goto v_resetjp_3046_;
}
else
{
lean_inc(v_a_3045_);
lean_dec(v___x_3044_);
v___x_3047_ = lean_box(0);
v_isShared_3048_ = v_isSharedCheck_3052_;
goto v_resetjp_3046_;
}
v_resetjp_3046_:
{
lean_object* v___x_3050_; 
if (v_isShared_3048_ == 0)
{
v___x_3050_ = v___x_3047_;
goto v_reusejp_3049_;
}
else
{
lean_object* v_reuseFailAlloc_3051_; 
v_reuseFailAlloc_3051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3051_, 0, v_a_3045_);
v___x_3050_ = v_reuseFailAlloc_3051_;
goto v_reusejp_3049_;
}
v_reusejp_3049_:
{
return v___x_3050_;
}
}
}
}
v___jp_3053_:
{
if (lean_obj_tag(v___y_3054_) == 0)
{
lean_object* v___x_3060_; 
v___x_3060_ = lean_box(0);
v___y_3030_ = v_since_x3f_3057_;
v___y_3031_ = v___y_3059_;
v___y_3032_ = v___y_3054_;
v___y_3033_ = v___y_3055_;
v___y_3034_ = v___y_3058_;
v___y_3035_ = v___y_3056_;
v_a_3036_ = v___x_3060_;
goto v___jp_3029_;
}
else
{
lean_object* v_val_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; 
v_val_3061_ = lean_ctor_get(v___y_3054_, 0);
v___x_3062_ = lean_box(0);
lean_inc(v_val_3061_);
v___x_3063_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v_val_3061_, v___x_3062_, v___y_3058_, v___y_3059_);
if (lean_obj_tag(v___x_3063_) == 0)
{
lean_object* v_a_3064_; lean_object* v___x_3065_; 
v_a_3064_ = lean_ctor_get(v___x_3063_, 0);
lean_inc(v_a_3064_);
lean_dec_ref_known(v___x_3063_, 1);
v___x_3065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3065_, 0, v_a_3064_);
v___y_3030_ = v_since_x3f_3057_;
v___y_3031_ = v___y_3059_;
v___y_3032_ = v___y_3054_;
v___y_3033_ = v___y_3055_;
v___y_3034_ = v___y_3058_;
v___y_3035_ = v___y_3056_;
v_a_3036_ = v___x_3065_;
goto v___jp_3029_;
}
else
{
lean_object* v_a_3066_; lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3073_; 
lean_dec_ref_known(v___y_3054_, 1);
lean_dec(v_since_x3f_3057_);
lean_dec(v___y_3056_);
lean_dec(v___y_3055_);
lean_dec(v_stx_2631_);
lean_dec(v_declName_2630_);
lean_dec_ref(v___x_2628_);
lean_dec(v___x_2627_);
lean_dec_ref(v___f_2625_);
v_a_3066_ = lean_ctor_get(v___x_3063_, 0);
v_isSharedCheck_3073_ = !lean_is_exclusive(v___x_3063_);
if (v_isSharedCheck_3073_ == 0)
{
v___x_3068_ = v___x_3063_;
v_isShared_3069_ = v_isSharedCheck_3073_;
goto v_resetjp_3067_;
}
else
{
lean_inc(v_a_3066_);
lean_dec(v___x_3063_);
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
v___jp_3074_:
{
lean_object* v___x_3081_; lean_object* v___x_3082_; uint8_t v___x_3083_; 
v___x_3081_ = lean_unsigned_to_nat(4u);
v___x_3082_ = l_Lean_Syntax_getArg(v_stx_2631_, v___x_3081_);
v___x_3083_ = l_Lean_Syntax_isNone(v___x_3082_);
if (v___x_3083_ == 0)
{
lean_object* v___x_3084_; uint8_t v___x_3085_; 
v___x_3084_ = lean_unsigned_to_nat(5u);
lean_inc(v___x_3082_);
v___x_3085_ = l_Lean_Syntax_matchesNull(v___x_3082_, v___x_3084_);
if (v___x_3085_ == 0)
{
lean_object* v___x_3086_; lean_object* v___x_3087_; 
lean_dec(v___x_3082_);
lean_dec(v_typeChanged_x3f_3078_);
lean_dec(v___y_3077_);
lean_dec(v___y_3076_);
lean_dec(v_stx_2631_);
lean_dec(v_declName_2630_);
lean_dec_ref(v___x_2628_);
lean_dec(v___x_2627_);
lean_dec_ref(v___f_2625_);
v___x_3086_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_3087_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___redArg(v___x_3086_, v___y_3079_, v___y_3080_);
return v___x_3087_;
}
else
{
lean_object* v___x_3088_; lean_object* v___x_3089_; 
v___x_3088_ = l_Lean_Syntax_getArg(v___x_3082_, v___y_3075_);
lean_dec(v___x_3082_);
v___x_3089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3089_, 0, v___x_3088_);
v___y_3054_ = v___y_3076_;
v___y_3055_ = v_typeChanged_x3f_3078_;
v___y_3056_ = v___y_3077_;
v_since_x3f_3057_ = v___x_3089_;
v___y_3058_ = v___y_3079_;
v___y_3059_ = v___y_3080_;
goto v___jp_3053_;
}
}
else
{
lean_object* v___x_3090_; 
lean_dec(v___x_3082_);
v___x_3090_ = lean_box(0);
v___y_3054_ = v___y_3076_;
v___y_3055_ = v_typeChanged_x3f_3078_;
v___y_3056_ = v___y_3077_;
v_since_x3f_3057_ = v___x_3090_;
v___y_3058_ = v___y_3079_;
v___y_3059_ = v___y_3080_;
goto v___jp_3053_;
}
}
v___jp_3091_:
{
lean_object* v___x_3096_; lean_object* v___x_3097_; uint8_t v___x_3098_; 
v___x_3096_ = lean_unsigned_to_nat(3u);
v___x_3097_ = l_Lean_Syntax_getArg(v_stx_2631_, v___x_3096_);
v___x_3098_ = l_Lean_Syntax_isNone(v___x_3097_);
if (v___x_3098_ == 0)
{
uint8_t v___x_3099_; 
lean_inc(v___x_3097_);
v___x_3099_ = l_Lean_Syntax_matchesNull(v___x_3097_, v___x_2765_);
if (v___x_3099_ == 0)
{
lean_object* v___x_3100_; lean_object* v___x_3101_; 
lean_dec(v___x_3097_);
lean_dec(v_text_x3f_3093_);
lean_dec(v___y_3092_);
lean_dec(v_stx_2631_);
lean_dec(v_declName_2630_);
lean_dec_ref(v___x_2628_);
lean_dec(v___x_2627_);
lean_dec_ref(v___f_2625_);
v___x_3100_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_3101_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___redArg(v___x_3100_, v___y_3094_, v___y_3095_);
return v___x_3101_;
}
else
{
lean_object* v___x_3102_; lean_object* v___x_3103_; 
v___x_3102_ = l_Lean_Syntax_getArg(v___x_3097_, v___x_2764_);
lean_dec(v___x_3097_);
v___x_3103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3103_, 0, v___x_3102_);
v___y_3075_ = v___x_3096_;
v___y_3076_ = v___y_3092_;
v___y_3077_ = v_text_x3f_3093_;
v_typeChanged_x3f_3078_ = v___x_3103_;
v___y_3079_ = v___y_3094_;
v___y_3080_ = v___y_3095_;
goto v___jp_3074_;
}
}
else
{
lean_object* v___x_3104_; 
lean_dec(v___x_3097_);
v___x_3104_ = lean_box(0);
v___y_3075_ = v___x_3096_;
v___y_3076_ = v___y_3092_;
v___y_3077_ = v_text_x3f_3093_;
v_typeChanged_x3f_3078_ = v___x_3104_;
v___y_3079_ = v___y_3094_;
v___y_3080_ = v___y_3095_;
goto v___jp_3074_;
}
}
v___jp_3105_:
{
lean_object* v___x_3109_; lean_object* v___x_3110_; uint8_t v___x_3111_; 
v___x_3109_ = lean_unsigned_to_nat(2u);
v___x_3110_ = l_Lean_Syntax_getArg(v_stx_2631_, v___x_3109_);
v___x_3111_ = l_Lean_Syntax_isNone(v___x_3110_);
if (v___x_3111_ == 0)
{
uint8_t v___x_3112_; 
lean_inc(v___x_3110_);
v___x_3112_ = l_Lean_Syntax_matchesNull(v___x_3110_, v___x_2765_);
if (v___x_3112_ == 0)
{
lean_object* v___x_3113_; lean_object* v___x_3114_; 
lean_dec(v___x_3110_);
lean_dec(v_id_x3f_3106_);
lean_dec(v_stx_2631_);
lean_dec(v_declName_2630_);
lean_dec_ref(v___x_2628_);
lean_dec(v___x_2627_);
lean_dec_ref(v___f_2625_);
v___x_3113_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__16_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_3114_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___redArg(v___x_3113_, v___y_3107_, v___y_3108_);
return v___x_3114_;
}
else
{
lean_object* v___x_3115_; lean_object* v___x_3116_; 
v___x_3115_ = l_Lean_Syntax_getArg(v___x_3110_, v___x_2764_);
lean_dec(v___x_3110_);
v___x_3116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3116_, 0, v___x_3115_);
v___y_3092_ = v_id_x3f_3106_;
v_text_x3f_3093_ = v___x_3116_;
v___y_3094_ = v___y_3107_;
v___y_3095_ = v___y_3108_;
goto v___jp_3091_;
}
}
else
{
lean_object* v___x_3117_; 
lean_dec(v___x_3110_);
v___x_3117_ = lean_box(0);
v___y_3092_ = v_id_x3f_3106_;
v_text_x3f_3093_ = v___x_3117_;
v___y_3094_ = v___y_3107_;
v___y_3095_ = v___y_3108_;
goto v___jp_3091_;
}
}
}
v___jp_2635_:
{
lean_object* v___x_2639_; lean_object* v___x_2640_; 
v___x_2639_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2639_, 0, v___y_2637_);
lean_ctor_set(v___x_2639_, 1, v___y_2638_);
lean_ctor_set(v___x_2639_, 2, v___y_2636_);
v___x_2640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2640_, 0, v___x_2639_);
return v___x_2640_;
}
v___jp_2641_:
{
if (lean_obj_tag(v___y_2642_) == 0)
{
lean_object* v___x_2647_; 
v___x_2647_ = l_Lean_Linter_mkSinceHint(v_stx_2631_, v___y_2645_, v___y_2646_);
if (lean_obj_tag(v___x_2647_) == 0)
{
lean_object* v_a_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; 
v_a_2648_ = lean_ctor_get(v___x_2647_, 0);
lean_inc(v_a_2648_);
lean_dec_ref_known(v___x_2647_, 1);
v___x_2649_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2650_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2650_, 0, v___x_2649_);
lean_ctor_set(v___x_2650_, 1, v_a_2648_);
v___x_2651_ = l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1(v___x_2650_, v___y_2645_, v___y_2646_);
if (lean_obj_tag(v___x_2651_) == 0)
{
lean_dec_ref_known(v___x_2651_, 1);
v___y_2636_ = v___y_2642_;
v___y_2637_ = v___y_2643_;
v___y_2638_ = v___y_2644_;
goto v___jp_2635_;
}
else
{
lean_object* v_a_2652_; lean_object* v___x_2654_; uint8_t v_isShared_2655_; uint8_t v_isSharedCheck_2659_; 
lean_dec(v___y_2644_);
lean_dec(v___y_2643_);
v_a_2652_ = lean_ctor_get(v___x_2651_, 0);
v_isSharedCheck_2659_ = !lean_is_exclusive(v___x_2651_);
if (v_isSharedCheck_2659_ == 0)
{
v___x_2654_ = v___x_2651_;
v_isShared_2655_ = v_isSharedCheck_2659_;
goto v_resetjp_2653_;
}
else
{
lean_inc(v_a_2652_);
lean_dec(v___x_2651_);
v___x_2654_ = lean_box(0);
v_isShared_2655_ = v_isSharedCheck_2659_;
goto v_resetjp_2653_;
}
v_resetjp_2653_:
{
lean_object* v___x_2657_; 
if (v_isShared_2655_ == 0)
{
v___x_2657_ = v___x_2654_;
goto v_reusejp_2656_;
}
else
{
lean_object* v_reuseFailAlloc_2658_; 
v_reuseFailAlloc_2658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2658_, 0, v_a_2652_);
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
lean_dec(v___y_2644_);
lean_dec(v___y_2643_);
v_a_2660_ = lean_ctor_get(v___x_2647_, 0);
v_isSharedCheck_2667_ = !lean_is_exclusive(v___x_2647_);
if (v_isSharedCheck_2667_ == 0)
{
v___x_2662_ = v___x_2647_;
v_isShared_2663_ = v_isSharedCheck_2667_;
goto v_resetjp_2661_;
}
else
{
lean_inc(v_a_2660_);
lean_dec(v___x_2647_);
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
else
{
lean_dec(v_stx_2631_);
v___y_2636_ = v___y_2642_;
v___y_2637_ = v___y_2643_;
v___y_2638_ = v___y_2644_;
goto v___jp_2635_;
}
}
v___jp_2668_:
{
if (lean_obj_tag(v___y_2671_) == 0)
{
if (lean_obj_tag(v___y_2673_) == 0)
{
lean_object* v___x_2675_; lean_object* v___x_2676_; 
v___x_2675_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__4_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__4_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__4_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2676_ = l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1(v___x_2675_, v___y_2672_, v___y_2669_);
if (lean_obj_tag(v___x_2676_) == 0)
{
lean_dec_ref_known(v___x_2676_, 1);
v___y_2642_ = v___y_2674_;
v___y_2643_ = v___y_2670_;
v___y_2644_ = v___y_2673_;
v___y_2645_ = v___y_2672_;
v___y_2646_ = v___y_2669_;
goto v___jp_2641_;
}
else
{
lean_object* v_a_2677_; lean_object* v___x_2679_; uint8_t v_isShared_2680_; uint8_t v_isSharedCheck_2684_; 
lean_dec(v___y_2674_);
lean_dec(v___y_2670_);
lean_dec(v_stx_2631_);
v_a_2677_ = lean_ctor_get(v___x_2676_, 0);
v_isSharedCheck_2684_ = !lean_is_exclusive(v___x_2676_);
if (v_isSharedCheck_2684_ == 0)
{
v___x_2679_ = v___x_2676_;
v_isShared_2680_ = v_isSharedCheck_2684_;
goto v_resetjp_2678_;
}
else
{
lean_inc(v_a_2677_);
lean_dec(v___x_2676_);
v___x_2679_ = lean_box(0);
v_isShared_2680_ = v_isSharedCheck_2684_;
goto v_resetjp_2678_;
}
v_resetjp_2678_:
{
lean_object* v___x_2682_; 
if (v_isShared_2680_ == 0)
{
v___x_2682_ = v___x_2679_;
goto v_reusejp_2681_;
}
else
{
lean_object* v_reuseFailAlloc_2683_; 
v_reuseFailAlloc_2683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2683_, 0, v_a_2677_);
v___x_2682_ = v_reuseFailAlloc_2683_;
goto v_reusejp_2681_;
}
v_reusejp_2681_:
{
return v___x_2682_;
}
}
}
}
else
{
v___y_2642_ = v___y_2674_;
v___y_2643_ = v___y_2670_;
v___y_2644_ = v___y_2673_;
v___y_2645_ = v___y_2672_;
v___y_2646_ = v___y_2669_;
goto v___jp_2641_;
}
}
else
{
lean_dec_ref_known(v___y_2671_, 1);
v___y_2642_ = v___y_2674_;
v___y_2643_ = v___y_2670_;
v___y_2644_ = v___y_2673_;
v___y_2645_ = v___y_2672_;
v___y_2646_ = v___y_2669_;
goto v___jp_2641_;
}
}
v___jp_2685_:
{
if (lean_obj_tag(v___y_2686_) == 0)
{
lean_object* v___x_2692_; 
v___x_2692_ = lean_box(0);
v___y_2669_ = v___y_2687_;
v___y_2670_ = v___y_2688_;
v___y_2671_ = v___y_2689_;
v___y_2672_ = v___y_2690_;
v___y_2673_ = v___y_2691_;
v___y_2674_ = v___x_2692_;
goto v___jp_2668_;
}
else
{
lean_object* v_val_2693_; lean_object* v___x_2695_; uint8_t v_isShared_2696_; uint8_t v_isSharedCheck_2701_; 
v_val_2693_ = lean_ctor_get(v___y_2686_, 0);
v_isSharedCheck_2701_ = !lean_is_exclusive(v___y_2686_);
if (v_isSharedCheck_2701_ == 0)
{
v___x_2695_ = v___y_2686_;
v_isShared_2696_ = v_isSharedCheck_2701_;
goto v_resetjp_2694_;
}
else
{
lean_inc(v_val_2693_);
lean_dec(v___y_2686_);
v___x_2695_ = lean_box(0);
v_isShared_2696_ = v_isSharedCheck_2701_;
goto v_resetjp_2694_;
}
v_resetjp_2694_:
{
lean_object* v___x_2697_; lean_object* v___x_2699_; 
v___x_2697_ = l_Lean_TSyntax_getString(v_val_2693_);
lean_dec(v_val_2693_);
if (v_isShared_2696_ == 0)
{
lean_ctor_set(v___x_2695_, 0, v___x_2697_);
v___x_2699_ = v___x_2695_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v___x_2697_);
v___x_2699_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
v___y_2669_ = v___y_2687_;
v___y_2670_ = v___y_2688_;
v___y_2671_ = v___y_2689_;
v___y_2672_ = v___y_2690_;
v___y_2673_ = v___y_2691_;
v___y_2674_ = v___x_2699_;
goto v___jp_2668_;
}
}
}
}
v___jp_2702_:
{
if (lean_obj_tag(v___y_2706_) == 0)
{
lean_object* v___x_2709_; 
v___x_2709_ = lean_box(0);
v___y_2686_ = v___y_2703_;
v___y_2687_ = v___y_2708_;
v___y_2688_ = v___y_2704_;
v___y_2689_ = v___y_2705_;
v___y_2690_ = v___y_2707_;
v___y_2691_ = v___x_2709_;
goto v___jp_2685_;
}
else
{
lean_object* v_val_2710_; lean_object* v___x_2712_; uint8_t v_isShared_2713_; uint8_t v_isSharedCheck_2718_; 
v_val_2710_ = lean_ctor_get(v___y_2706_, 0);
v_isSharedCheck_2718_ = !lean_is_exclusive(v___y_2706_);
if (v_isSharedCheck_2718_ == 0)
{
v___x_2712_ = v___y_2706_;
v_isShared_2713_ = v_isSharedCheck_2718_;
goto v_resetjp_2711_;
}
else
{
lean_inc(v_val_2710_);
lean_dec(v___y_2706_);
v___x_2712_ = lean_box(0);
v_isShared_2713_ = v_isSharedCheck_2718_;
goto v_resetjp_2711_;
}
v_resetjp_2711_:
{
lean_object* v___x_2714_; lean_object* v___x_2716_; 
v___x_2714_ = l_Lean_TSyntax_getString(v_val_2710_);
lean_dec(v_val_2710_);
if (v_isShared_2713_ == 0)
{
lean_ctor_set(v___x_2712_, 0, v___x_2714_);
v___x_2716_ = v___x_2712_;
goto v_reusejp_2715_;
}
else
{
lean_object* v_reuseFailAlloc_2717_; 
v_reuseFailAlloc_2717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2717_, 0, v___x_2714_);
v___x_2716_ = v_reuseFailAlloc_2717_;
goto v_reusejp_2715_;
}
v_reusejp_2715_:
{
v___y_2686_ = v___y_2703_;
v___y_2687_ = v___y_2708_;
v___y_2688_ = v___y_2704_;
v___y_2689_ = v___y_2705_;
v___y_2690_ = v___y_2707_;
v___y_2691_ = v___x_2716_;
goto v___jp_2685_;
}
}
}
}
v___jp_2719_:
{
lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; 
v___x_2729_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2730_ = l_Lean_ConstantInfo_type(v___y_2722_);
lean_dec_ref(v___y_2722_);
v___x_2731_ = l_Lean_indentExpr(v___x_2730_);
v___x_2732_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2732_, 0, v___x_2729_);
lean_ctor_set(v___x_2732_, 1, v___x_2731_);
v___x_2733_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__8_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__8_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__8_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2734_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2734_, 0, v___x_2732_);
lean_ctor_set(v___x_2734_, 1, v___x_2733_);
v___x_2735_ = l_Lean_ConstantInfo_type(v___y_2721_);
lean_dec_ref(v___y_2721_);
v___x_2736_ = l_Lean_indentExpr(v___x_2735_);
v___x_2737_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2737_, 0, v___x_2734_);
lean_ctor_set(v___x_2737_, 1, v___x_2736_);
v___x_2738_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__10_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__10_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__10_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_2739_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2739_, 0, v___x_2737_);
lean_ctor_set(v___x_2739_, 1, v___x_2738_);
v___x_2740_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2740_, 0, v___x_2739_);
lean_ctor_set(v___x_2740_, 1, v_hint_2726_);
v___x_2741_ = l_Lean_logWarning___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__1(v___x_2740_, v___y_2727_, v___y_2728_);
if (lean_obj_tag(v___x_2741_) == 0)
{
lean_dec_ref_known(v___x_2741_, 1);
v___y_2703_ = v___y_2720_;
v___y_2704_ = v___y_2723_;
v___y_2705_ = v___y_2724_;
v___y_2706_ = v___y_2725_;
v___y_2707_ = v___y_2727_;
v___y_2708_ = v___y_2728_;
goto v___jp_2702_;
}
else
{
lean_object* v_a_2742_; lean_object* v___x_2744_; uint8_t v_isShared_2745_; uint8_t v_isSharedCheck_2749_; 
lean_dec(v___y_2725_);
lean_dec(v___y_2724_);
lean_dec(v___y_2723_);
lean_dec(v___y_2720_);
lean_dec(v_stx_2631_);
v_a_2742_ = lean_ctor_get(v___x_2741_, 0);
v_isSharedCheck_2749_ = !lean_is_exclusive(v___x_2741_);
if (v_isSharedCheck_2749_ == 0)
{
v___x_2744_ = v___x_2741_;
v_isShared_2745_ = v_isSharedCheck_2749_;
goto v_resetjp_2743_;
}
else
{
lean_inc(v_a_2742_);
lean_dec(v___x_2741_);
v___x_2744_ = lean_box(0);
v_isShared_2745_ = v_isSharedCheck_2749_;
goto v_resetjp_2743_;
}
v_resetjp_2743_:
{
lean_object* v___x_2747_; 
if (v_isShared_2745_ == 0)
{
v___x_2747_ = v___x_2744_;
goto v_reusejp_2746_;
}
else
{
lean_object* v_reuseFailAlloc_2748_; 
v_reuseFailAlloc_2748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2748_, 0, v_a_2742_);
v___x_2747_ = v_reuseFailAlloc_2748_;
goto v_reusejp_2746_;
}
v_reusejp_2746_:
{
return v___x_2747_;
}
}
}
}
v___jp_2750_:
{
lean_object* v___x_2759_; 
v___x_2759_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__14_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__14_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__14_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___y_2720_ = v___y_2751_;
v___y_2721_ = v___y_2753_;
v___y_2722_ = v___y_2754_;
v___y_2723_ = v___y_2756_;
v___y_2724_ = v___y_2757_;
v___y_2725_ = v___y_2758_;
v_hint_2726_ = v___x_2759_;
v___y_2727_ = v___y_2755_;
v___y_2728_ = v___y_2752_;
goto v___jp_2719_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed(lean_object* v___x_3126_, lean_object* v___x_3127_, lean_object* v___f_3128_, lean_object* v___x_3129_, lean_object* v___x_3130_, lean_object* v___x_3131_, lean_object* v_a_3132_, lean_object* v_declName_3133_, lean_object* v_stx_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_){
_start:
{
uint8_t v___x_48376__boxed_3138_; lean_object* v_res_3139_; 
v___x_48376__boxed_3138_ = lean_unbox(v___x_3129_);
v_res_3139_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(v___x_3126_, v___x_3127_, v___f_3128_, v___x_48376__boxed_3138_, v___x_3130_, v___x_3131_, v_a_3132_, v_declName_3133_, v_stx_3134_, v___y_3135_, v___y_3136_);
lean_dec(v___y_3136_);
lean_dec_ref(v___y_3135_);
lean_dec_ref(v_a_3132_);
return v_res_3139_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_3159_; lean_object* v___f_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; uint8_t v___x_3165_; lean_object* v___f_3166_; lean_object* v___x_3167_; 
v___f_3159_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___f_3160_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_3161_ = lean_box(1);
v___x_3162_ = ((lean_object*)(l_Lean_Linter_instInhabitedDeprecationEntry_default));
v___x_3163_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_));
v___x_3164_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_3165_ = 0;
v___f_3166_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_3167_ = l_Lean_registerParametricAttributeExt___redArg(v___x_3164_, v___x_3165_, v___f_3166_, v___x_3165_);
if (lean_obj_tag(v___x_3167_) == 0)
{
lean_object* v_a_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___f_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; 
v_a_3168_ = lean_ctor_get(v___x_3167_, 0);
lean_inc_n(v_a_3168_, 2);
lean_dec_ref_known(v___x_3167_, 1);
v___x_3169_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_));
v___x_3170_ = lean_box(v___x_3165_);
v___f_3171_ = lean_alloc_closure((void*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed), 12, 7);
lean_closure_set(v___f_3171_, 0, v___x_3163_);
lean_closure_set(v___f_3171_, 1, v___x_3169_);
lean_closure_set(v___f_3171_, 2, v___f_3159_);
lean_closure_set(v___f_3171_, 3, v___x_3170_);
lean_closure_set(v___f_3171_, 4, v___x_3161_);
lean_closure_set(v___f_3171_, 5, v___x_3162_);
lean_closure_set(v___f_3171_, 6, v_a_3168_);
v___x_3172_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_3173_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3173_, 0, v___x_3172_);
lean_ctor_set(v___x_3173_, 1, v___f_3171_);
lean_ctor_set(v___x_3173_, 2, v___f_3160_);
lean_ctor_set(v___x_3173_, 3, v___f_3166_);
lean_ctor_set_uint8(v___x_3173_, sizeof(void*)*4, v___x_3165_);
v___x_3174_ = l_Lean_registerParametricAttributeForExt___redArg(v___x_3173_, v_a_3168_);
return v___x_3174_;
}
else
{
lean_object* v_a_3175_; lean_object* v___x_3177_; uint8_t v_isShared_3178_; uint8_t v_isSharedCheck_3182_; 
v_a_3175_ = lean_ctor_get(v___x_3167_, 0);
v_isSharedCheck_3182_ = !lean_is_exclusive(v___x_3167_);
if (v_isSharedCheck_3182_ == 0)
{
v___x_3177_ = v___x_3167_;
v_isShared_3178_ = v_isSharedCheck_3182_;
goto v_resetjp_3176_;
}
else
{
lean_inc(v_a_3175_);
lean_dec(v___x_3167_);
v___x_3177_ = lean_box(0);
v_isShared_3178_ = v_isSharedCheck_3182_;
goto v_resetjp_3176_;
}
v_resetjp_3176_:
{
lean_object* v___x_3180_; 
if (v_isShared_3178_ == 0)
{
v___x_3180_ = v___x_3177_;
goto v_reusejp_3179_;
}
else
{
lean_object* v_reuseFailAlloc_3181_; 
v_reuseFailAlloc_3181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3181_, 0, v_a_3175_);
v___x_3180_ = v_reuseFailAlloc_3181_;
goto v_reusejp_3179_;
}
v_reusejp_3179_:
{
return v___x_3180_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2____boxed(lean_object* v_a_3183_){
_start:
{
lean_object* v_res_3184_; 
v_res_3184_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_();
return v_res_3184_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_3185_, lean_object* v_msg_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_){
_start:
{
lean_object* v___x_3190_; 
v___x_3190_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___redArg(v_msg_3186_, v___y_3187_, v___y_3188_);
return v___x_3190_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_3191_, lean_object* v_msg_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_){
_start:
{
lean_object* v_res_3196_; 
v_res_3196_ = l_Lean_throwError___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__0(v_00_u03b1_3191_, v_msg_3192_, v___y_3193_, v___y_3194_);
lean_dec(v___y_3194_);
lean_dec_ref(v___y_3193_);
return v_res_3196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3_spec__8(lean_object* v_o_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_){
_start:
{
lean_object* v___x_3201_; 
v___x_3201_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3_spec__8___redArg(v_o_3197_, v___y_3199_);
return v___x_3201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3_spec__8___boxed(lean_object* v_o_3202_, lean_object* v___y_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_){
_start:
{
lean_object* v_res_3206_; 
v_res_3206_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__3_spec__8(v_o_3202_, v___y_3203_, v___y_3204_);
lean_dec(v___y_3204_);
lean_dec_ref(v___y_3203_);
return v_res_3206_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6(lean_object* v_00_u03b2_3207_, lean_object* v_m_3208_, lean_object* v_a_3209_){
_start:
{
lean_object* v___x_3210_; 
v___x_3210_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6___redArg(v_m_3208_, v_a_3209_);
return v___x_3210_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6___boxed(lean_object* v_00_u03b2_3211_, lean_object* v_m_3212_, lean_object* v_a_3213_){
_start:
{
lean_object* v_res_3214_; 
v_res_3214_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6(v_00_u03b2_3211_, v_m_3212_, v_a_3213_);
lean_dec(v_a_3213_);
lean_dec_ref(v_m_3212_);
return v_res_3214_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8(lean_object* v_00_u03b2_3215_, lean_object* v_x_3216_, lean_object* v_x_3217_){
_start:
{
uint8_t v___x_3218_; 
v___x_3218_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8___redArg(v_x_3216_, v_x_3217_);
return v___x_3218_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8___boxed(lean_object* v_00_u03b2_3219_, lean_object* v_x_3220_, lean_object* v_x_3221_){
_start:
{
uint8_t v_res_3222_; lean_object* v_r_3223_; 
v_res_3222_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8(v_00_u03b2_3219_, v_x_3220_, v_x_3221_);
lean_dec_ref(v_x_3221_);
lean_dec_ref(v_x_3220_);
v_r_3223_ = lean_box(v_res_3222_);
return v_r_3223_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9(lean_object* v_00_u03b2_3224_, lean_object* v_m_3225_, lean_object* v_a_3226_, lean_object* v_b_3227_){
_start:
{
lean_object* v___x_3228_; 
v___x_3228_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9___redArg(v_m_3225_, v_a_3226_, v_b_3227_);
return v___x_3228_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6_spec__13(lean_object* v_00_u03b2_3229_, lean_object* v_a_3230_, lean_object* v_x_3231_){
_start:
{
lean_object* v___x_3232_; 
v___x_3232_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6_spec__13___redArg(v_a_3230_, v_x_3231_);
return v___x_3232_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6_spec__13___boxed(lean_object* v_00_u03b2_3233_, lean_object* v_a_3234_, lean_object* v_x_3235_){
_start:
{
lean_object* v_res_3236_; 
v_res_3236_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__6_spec__13(v_00_u03b2_3233_, v_a_3234_, v_x_3235_);
lean_dec(v_x_3235_);
lean_dec(v_a_3234_);
return v_res_3236_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__18(lean_object* v_00_u03b4_3237_, lean_object* v_t_3238_, lean_object* v_k_3239_){
_start:
{
lean_object* v___x_3240_; 
v___x_3240_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__18___redArg(v_t_3238_, v_k_3239_);
return v___x_3240_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__18___boxed(lean_object* v_00_u03b4_3241_, lean_object* v_t_3242_, lean_object* v_k_3243_){
_start:
{
lean_object* v_res_3244_; 
v_res_3244_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__18(v_00_u03b4_3241_, v_t_3242_, v_k_3243_);
lean_dec(v_k_3243_);
lean_dec(v_t_3242_);
return v_res_3244_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12(lean_object* v_00_u03b2_3245_, lean_object* v_x_3246_, size_t v_x_3247_, lean_object* v_x_3248_){
_start:
{
uint8_t v___x_3249_; 
v___x_3249_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12___redArg(v_x_3246_, v_x_3247_, v_x_3248_);
return v___x_3249_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12___boxed(lean_object* v_00_u03b2_3250_, lean_object* v_x_3251_, lean_object* v_x_3252_, lean_object* v_x_3253_){
_start:
{
size_t v_x_49633__boxed_3254_; uint8_t v_res_3255_; lean_object* v_r_3256_; 
v_x_49633__boxed_3254_ = lean_unbox_usize(v_x_3252_);
lean_dec(v_x_3252_);
v_res_3255_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12(v_00_u03b2_3250_, v_x_3251_, v_x_49633__boxed_3254_, v_x_3253_);
lean_dec_ref(v_x_3253_);
lean_dec_ref(v_x_3251_);
v_r_3256_ = lean_box(v_res_3255_);
return v_r_3256_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__14(lean_object* v_00_u03b2_3257_, lean_object* v_a_3258_, lean_object* v_x_3259_){
_start:
{
uint8_t v___x_3260_; 
v___x_3260_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__14___redArg(v_a_3258_, v_x_3259_);
return v___x_3260_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__14___boxed(lean_object* v_00_u03b2_3261_, lean_object* v_a_3262_, lean_object* v_x_3263_){
_start:
{
uint8_t v_res_3264_; lean_object* v_r_3265_; 
v_res_3264_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__14(v_00_u03b2_3261_, v_a_3262_, v_x_3263_);
lean_dec(v_x_3263_);
lean_dec_ref(v_a_3262_);
v_r_3265_ = lean_box(v_res_3264_);
return v_r_3265_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__15(lean_object* v_00_u03b2_3266_, lean_object* v_data_3267_){
_start:
{
lean_object* v___x_3268_; 
v___x_3268_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__15___redArg(v_data_3267_);
return v___x_3268_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__23(lean_object* v_givenName_3269_, uint8_t v_skipAuxDecl_3270_, lean_object* v_auxDeclToFullName_3271_, lean_object* v___x_3272_, lean_object* v_givenNameView_3273_, lean_object* v_as_3274_, lean_object* v_i_3275_, lean_object* v_a_3276_){
_start:
{
lean_object* v___x_3277_; 
v___x_3277_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__23___redArg(v_givenName_3269_, v_skipAuxDecl_3270_, v_auxDeclToFullName_3271_, v___x_3272_, v_givenNameView_3273_, v_as_3274_, v_i_3275_);
return v___x_3277_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__23___boxed(lean_object* v_givenName_3278_, lean_object* v_skipAuxDecl_3279_, lean_object* v_auxDeclToFullName_3280_, lean_object* v___x_3281_, lean_object* v_givenNameView_3282_, lean_object* v_as_3283_, lean_object* v_i_3284_, lean_object* v_a_3285_){
_start:
{
uint8_t v_skipAuxDecl_boxed_3286_; lean_object* v_res_3287_; 
v_skipAuxDecl_boxed_3286_ = lean_unbox(v_skipAuxDecl_3279_);
v_res_3287_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__23(v_givenName_3278_, v_skipAuxDecl_boxed_3286_, v_auxDeclToFullName_3280_, v___x_3281_, v_givenNameView_3282_, v_as_3283_, v_i_3284_, v_a_3285_);
lean_dec_ref(v_as_3283_);
lean_dec(v_auxDeclToFullName_3280_);
lean_dec(v_givenName_3278_);
return v_res_3287_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__26(lean_object* v_localDecl_x3f_3288_, lean_object* v_givenName_3289_, lean_object* v_as_3290_, lean_object* v_i_3291_, lean_object* v_a_3292_){
_start:
{
lean_object* v___x_3293_; 
v___x_3293_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__26___redArg(v_localDecl_x3f_3288_, v_givenName_3289_, v_as_3290_, v_i_3291_);
return v___x_3293_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__26___boxed(lean_object* v_localDecl_x3f_3294_, lean_object* v_givenName_3295_, lean_object* v_as_3296_, lean_object* v_i_3297_, lean_object* v_a_3298_){
_start:
{
lean_object* v_res_3299_; 
v_res_3299_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__26(v_localDecl_x3f_3294_, v_givenName_3295_, v_as_3296_, v_i_3297_, v_a_3298_);
lean_dec_ref(v_as_3296_);
lean_dec(v_givenName_3295_);
lean_dec(v_localDecl_x3f_3294_);
return v_res_3299_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23_spec__33(lean_object* v_n_u2080_3300_, lean_object* v_filter_3301_, lean_object* v_view_x3f_3302_, lean_object* v_as_3303_, lean_object* v_as_x27_3304_, lean_object* v_b_3305_, lean_object* v_a_3306_, lean_object* v___y_3307_, lean_object* v___y_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_){
_start:
{
lean_object* v___x_3312_; 
v___x_3312_ = l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23_spec__33___redArg(v_n_u2080_3300_, v_filter_3301_, v_view_x3f_3302_, v_as_x27_3304_, v_b_3305_, v___y_3307_, v___y_3308_, v___y_3309_, v___y_3310_);
return v___x_3312_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23_spec__33___boxed(lean_object* v_n_u2080_3313_, lean_object* v_filter_3314_, lean_object* v_view_x3f_3315_, lean_object* v_as_3316_, lean_object* v_as_x27_3317_, lean_object* v_b_3318_, lean_object* v_a_3319_, lean_object* v___y_3320_, lean_object* v___y_3321_, lean_object* v___y_3322_, lean_object* v___y_3323_, lean_object* v___y_3324_){
_start:
{
lean_object* v_res_3325_; 
v_res_3325_ = l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__23_spec__33(v_n_u2080_3313_, v_filter_3314_, v_view_x3f_3315_, v_as_3316_, v_as_x27_3317_, v_b_3318_, v_a_3319_, v___y_3320_, v___y_3321_, v___y_3322_, v___y_3323_);
lean_dec(v___y_3323_);
lean_dec_ref(v___y_3322_);
lean_dec(v___y_3321_);
lean_dec_ref(v___y_3320_);
lean_dec(v_as_x27_3317_);
lean_dec(v_as_3316_);
lean_dec(v_n_u2080_3313_);
return v_res_3325_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12_spec__17(lean_object* v_00_u03b2_3326_, lean_object* v_keys_3327_, lean_object* v_vals_3328_, lean_object* v_heq_3329_, lean_object* v_i_3330_, lean_object* v_k_3331_){
_start:
{
uint8_t v___x_3332_; 
v___x_3332_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12_spec__17___redArg(v_keys_3327_, v_i_3330_, v_k_3331_);
return v___x_3332_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12_spec__17___boxed(lean_object* v_00_u03b2_3333_, lean_object* v_keys_3334_, lean_object* v_vals_3335_, lean_object* v_heq_3336_, lean_object* v_i_3337_, lean_object* v_k_3338_){
_start:
{
uint8_t v_res_3339_; lean_object* v_r_3340_; 
v_res_3339_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__8_spec__12_spec__17(v_00_u03b2_3333_, v_keys_3334_, v_vals_3335_, v_heq_3336_, v_i_3337_, v_k_3338_);
lean_dec_ref(v_k_3338_);
lean_dec_ref(v_vals_3335_);
lean_dec_ref(v_keys_3334_);
v_r_3340_ = lean_box(v_res_3339_);
return v_r_3340_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__15_spec__21(lean_object* v_00_u03b2_3341_, lean_object* v_i_3342_, lean_object* v_source_3343_, lean_object* v_target_3344_){
_start:
{
lean_object* v___x_3345_; 
v___x_3345_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__15_spec__21___redArg(v_i_3342_, v_source_3343_, v_target_3344_);
return v___x_3345_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__24_spec__28(lean_object* v_givenName_3346_, uint8_t v_skipAuxDecl_3347_, lean_object* v_auxDeclToFullName_3348_, lean_object* v___x_3349_, lean_object* v_givenNameView_3350_, lean_object* v_as_3351_, lean_object* v_i_3352_, lean_object* v_a_3353_){
_start:
{
lean_object* v___x_3354_; 
v___x_3354_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__24_spec__28___redArg(v_givenName_3346_, v_skipAuxDecl_3347_, v_auxDeclToFullName_3348_, v___x_3349_, v_givenNameView_3350_, v_as_3351_, v_i_3352_);
return v___x_3354_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__24_spec__28___boxed(lean_object* v_givenName_3355_, lean_object* v_skipAuxDecl_3356_, lean_object* v_auxDeclToFullName_3357_, lean_object* v___x_3358_, lean_object* v_givenNameView_3359_, lean_object* v_as_3360_, lean_object* v_i_3361_, lean_object* v_a_3362_){
_start:
{
uint8_t v_skipAuxDecl_boxed_3363_; lean_object* v_res_3364_; 
v_skipAuxDecl_boxed_3363_ = lean_unbox(v_skipAuxDecl_3356_);
v_res_3364_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__19_spec__24_spec__28(v_givenName_3355_, v_skipAuxDecl_boxed_3363_, v_auxDeclToFullName_3357_, v___x_3358_, v_givenNameView_3359_, v_as_3360_, v_i_3361_, v_a_3362_);
lean_dec_ref(v_as_3360_);
lean_dec(v_auxDeclToFullName_3357_);
lean_dec(v_givenName_3355_);
return v_res_3364_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__27_spec__32(lean_object* v_localDecl_x3f_3365_, lean_object* v_givenName_3366_, lean_object* v_as_3367_, lean_object* v_i_3368_, lean_object* v_a_3369_){
_start:
{
lean_object* v___x_3370_; 
v___x_3370_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__27_spec__32___redArg(v_localDecl_x3f_3365_, v_givenName_3366_, v_as_3367_, v_i_3368_);
return v___x_3370_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__27_spec__32___boxed(lean_object* v_localDecl_x3f_3371_, lean_object* v_givenName_3372_, lean_object* v_as_3373_, lean_object* v_i_3374_, lean_object* v_a_3375_){
_start:
{
lean_object* v_res_3376_; 
v_res_3376_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__20_spec__27_spec__32(v_localDecl_x3f_3371_, v_givenName_3372_, v_as_3373_, v_i_3374_, v_a_3375_);
lean_dec_ref(v_as_3373_);
lean_dec(v_givenName_3372_);
lean_dec(v_localDecl_x3f_3371_);
return v_res_3376_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__15_spec__21_spec__32(lean_object* v_00_u03b2_3377_, lean_object* v_x_3378_, lean_object* v_x_3379_){
_start:
{
lean_object* v___x_3380_; 
v___x_3380_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4_spec__9_spec__15_spec__21_spec__32___redArg(v_x_3378_, v_x_3379_);
return v___x_3380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__42(lean_object* v_opt_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_){
_start:
{
lean_object* v___x_3387_; 
v___x_3387_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__42___redArg(v_opt_3381_, v___y_3384_);
return v___x_3387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__42___boxed(lean_object* v_opt_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_){
_start:
{
lean_object* v_res_3394_; 
v_res_3394_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__42(v_opt_3388_, v___y_3389_, v___y_3390_, v___y_3391_, v___y_3392_);
lean_dec(v___y_3392_);
lean_dec_ref(v___y_3391_);
lean_dec(v___y_3390_);
lean_dec_ref(v___y_3389_);
lean_dec_ref(v_opt_3388_);
return v_res_3394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__48(lean_object* v_opt_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_){
_start:
{
lean_object* v___x_3401_; 
v___x_3401_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__48___redArg(v_opt_3395_, v___y_3398_);
return v___x_3401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__48___boxed(lean_object* v_opt_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_){
_start:
{
lean_object* v_res_3408_; 
v_res_3408_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___at___00Lean_unresolveNameGlobal_x3f___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__12_spec__26_spec__37_spec__44_spec__48(v_opt_3402_, v___y_3403_, v___y_3404_, v___y_3405_, v___y_3406_);
lean_dec(v___y_3406_);
lean_dec_ref(v___y_3405_);
lean_dec(v___y_3404_);
lean_dec_ref(v___y_3403_);
lean_dec_ref(v_opt_3402_);
return v_res_3408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_setDeprecated___redArg___lam__0(lean_object* v_declName_3409_, lean_object* v_entry_3410_, lean_object* v_inst_3411_, lean_object* v_inst_3412_, lean_object* v_inst_3413_, lean_object* v_env_3414_){
_start:
{
lean_object* v___x_3415_; lean_object* v___x_3416_; 
v___x_3415_ = l_Lean_Linter_deprecatedAttr;
v___x_3416_ = l_Lean_ParametricAttribute_setParam___redArg(v___x_3415_, v_env_3414_, v_declName_3409_, v_entry_3410_);
if (lean_obj_tag(v___x_3416_) == 0)
{
lean_object* v_a_3417_; lean_object* v___x_3419_; uint8_t v_isShared_3420_; uint8_t v_isSharedCheck_3426_; 
lean_dec_ref(v_inst_3413_);
v_a_3417_ = lean_ctor_get(v___x_3416_, 0);
v_isSharedCheck_3426_ = !lean_is_exclusive(v___x_3416_);
if (v_isSharedCheck_3426_ == 0)
{
v___x_3419_ = v___x_3416_;
v_isShared_3420_ = v_isSharedCheck_3426_;
goto v_resetjp_3418_;
}
else
{
lean_inc(v_a_3417_);
lean_dec(v___x_3416_);
v___x_3419_ = lean_box(0);
v_isShared_3420_ = v_isSharedCheck_3426_;
goto v_resetjp_3418_;
}
v_resetjp_3418_:
{
lean_object* v___x_3422_; 
if (v_isShared_3420_ == 0)
{
lean_ctor_set_tag(v___x_3419_, 3);
v___x_3422_ = v___x_3419_;
goto v_reusejp_3421_;
}
else
{
lean_object* v_reuseFailAlloc_3425_; 
v_reuseFailAlloc_3425_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3425_, 0, v_a_3417_);
v___x_3422_ = v_reuseFailAlloc_3425_;
goto v_reusejp_3421_;
}
v_reusejp_3421_:
{
lean_object* v___x_3423_; lean_object* v___x_3424_; 
v___x_3423_ = l_Lean_MessageData_ofFormat(v___x_3422_);
v___x_3424_ = l_Lean_throwError___redArg(v_inst_3411_, v_inst_3412_, v___x_3423_);
return v___x_3424_;
}
}
}
else
{
lean_object* v_a_3427_; lean_object* v___x_3428_; 
lean_dec_ref(v_inst_3412_);
lean_dec_ref(v_inst_3411_);
v_a_3427_ = lean_ctor_get(v___x_3416_, 0);
lean_inc(v_a_3427_);
lean_dec_ref_known(v___x_3416_, 1);
v___x_3428_ = l_Lean_setEnv___redArg(v_inst_3413_, v_a_3427_);
return v___x_3428_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_setDeprecated___redArg(lean_object* v_inst_3429_, lean_object* v_inst_3430_, lean_object* v_inst_3431_, lean_object* v_declName_3432_, lean_object* v_entry_3433_){
_start:
{
lean_object* v_toBind_3434_; lean_object* v_getEnv_3435_; lean_object* v___f_3436_; lean_object* v___x_3437_; 
v_toBind_3434_ = lean_ctor_get(v_inst_3429_, 1);
lean_inc(v_toBind_3434_);
v_getEnv_3435_ = lean_ctor_get(v_inst_3430_, 0);
lean_inc(v_getEnv_3435_);
v___f_3436_ = lean_alloc_closure((void*)(l_Lean_Linter_setDeprecated___redArg___lam__0), 6, 5);
lean_closure_set(v___f_3436_, 0, v_declName_3432_);
lean_closure_set(v___f_3436_, 1, v_entry_3433_);
lean_closure_set(v___f_3436_, 2, v_inst_3429_);
lean_closure_set(v___f_3436_, 3, v_inst_3431_);
lean_closure_set(v___f_3436_, 4, v_inst_3430_);
v___x_3437_ = lean_apply_4(v_toBind_3434_, lean_box(0), lean_box(0), v_getEnv_3435_, v___f_3436_);
return v___x_3437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_setDeprecated(lean_object* v_m_3438_, lean_object* v_inst_3439_, lean_object* v_inst_3440_, lean_object* v_inst_3441_, lean_object* v_declName_3442_, lean_object* v_entry_3443_){
_start:
{
lean_object* v___x_3444_; 
v___x_3444_ = l_Lean_Linter_setDeprecated___redArg(v_inst_3439_, v_inst_3440_, v_inst_3441_, v_declName_3442_, v_entry_3443_);
return v___x_3444_;
}
}
LEAN_EXPORT uint8_t l_Lean_Linter_isDeprecated(lean_object* v_env_3445_, lean_object* v_declName_3446_){
_start:
{
lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; 
v___x_3447_ = ((lean_object*)(l_Lean_Linter_instInhabitedDeprecationEntry_default));
v___x_3448_ = l_Lean_Linter_deprecatedAttr;
v___x_3449_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v___x_3447_, v___x_3448_, v_env_3445_, v_declName_3446_);
if (lean_obj_tag(v___x_3449_) == 0)
{
uint8_t v___x_3450_; 
v___x_3450_ = 0;
return v___x_3450_;
}
else
{
uint8_t v___x_3451_; 
lean_dec_ref_known(v___x_3449_, 1);
v___x_3451_ = 1;
return v___x_3451_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_isDeprecated___boxed(lean_object* v_env_3452_, lean_object* v_declName_3453_){
_start:
{
uint8_t v_res_3454_; lean_object* v_r_3455_; 
v_res_3454_ = l_Lean_Linter_isDeprecated(v_env_3452_, v_declName_3453_);
v_r_3455_ = lean_box(v_res_3454_);
return v_r_3455_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageData_isDeprecationWarning___lam__0(lean_object* v_x_3456_){
_start:
{
lean_object* v___x_3457_; uint8_t v___x_3458_; 
v___x_3457_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_3458_ = lean_name_eq(v_x_3456_, v___x_3457_);
return v___x_3458_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_isDeprecationWarning___lam__0___boxed(lean_object* v_x_3459_){
_start:
{
uint8_t v_res_3460_; lean_object* v_r_3461_; 
v_res_3460_ = l_Lean_MessageData_isDeprecationWarning___lam__0(v_x_3459_);
lean_dec(v_x_3459_);
v_r_3461_ = lean_box(v_res_3460_);
return v_r_3461_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageData_isDeprecationWarning(lean_object* v_msg_3463_){
_start:
{
lean_object* v___f_3464_; uint8_t v___x_3465_; 
v___f_3464_ = ((lean_object*)(l_Lean_MessageData_isDeprecationWarning___closed__0));
v___x_3465_ = l_Lean_MessageData_hasTag(v___f_3464_, v_msg_3463_);
return v___x_3465_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_isDeprecationWarning___boxed(lean_object* v_msg_3466_){
_start:
{
uint8_t v_res_3467_; lean_object* v_r_3468_; 
v_res_3467_ = l_Lean_MessageData_isDeprecationWarning(v_msg_3466_);
v_r_3468_ = lean_box(v_res_3467_);
return v_r_3468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getDeprecatedNewName(lean_object* v_env_3469_, lean_object* v_declName_3470_){
_start:
{
lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; 
v___x_3471_ = ((lean_object*)(l_Lean_Linter_instInhabitedDeprecationEntry_default));
v___x_3472_ = l_Lean_Linter_deprecatedAttr;
v___x_3473_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v___x_3471_, v___x_3472_, v_env_3469_, v_declName_3470_);
if (lean_obj_tag(v___x_3473_) == 0)
{
lean_object* v___x_3474_; 
v___x_3474_ = lean_box(0);
return v___x_3474_;
}
else
{
lean_object* v_val_3475_; lean_object* v_newName_x3f_3476_; 
v_val_3475_ = lean_ctor_get(v___x_3473_, 0);
lean_inc(v_val_3475_);
lean_dec_ref_known(v___x_3473_, 1);
v_newName_x3f_3476_ = lean_ctor_get(v_val_3475_, 0);
lean_inc(v_newName_x3f_3476_);
lean_dec(v_val_3475_);
return v_newName_x3f_3476_;
}
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0_spec__0(lean_object* v_x_3477_, lean_object* v_x_3478_){
_start:
{
if (lean_obj_tag(v_x_3477_) == 0)
{
if (lean_obj_tag(v_x_3478_) == 0)
{
uint8_t v___x_3479_; 
v___x_3479_ = 1;
return v___x_3479_;
}
else
{
uint8_t v___x_3480_; 
v___x_3480_ = 0;
return v___x_3480_;
}
}
else
{
if (lean_obj_tag(v_x_3478_) == 0)
{
uint8_t v___x_3481_; 
v___x_3481_ = 0;
return v___x_3481_;
}
else
{
lean_object* v_head_3482_; lean_object* v_tail_3483_; lean_object* v_head_3484_; lean_object* v_tail_3485_; uint8_t v___x_3486_; 
v_head_3482_ = lean_ctor_get(v_x_3477_, 0);
v_tail_3483_ = lean_ctor_get(v_x_3477_, 1);
v_head_3484_ = lean_ctor_get(v_x_3478_, 0);
v_tail_3485_ = lean_ctor_get(v_x_3478_, 1);
v___x_3486_ = lean_string_dec_eq(v_head_3482_, v_head_3484_);
if (v___x_3486_ == 0)
{
return v___x_3486_;
}
else
{
v_x_3477_ = v_tail_3483_;
v_x_3478_ = v_tail_3485_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0_spec__0___boxed(lean_object* v_x_3488_, lean_object* v_x_3489_){
_start:
{
uint8_t v_res_3490_; lean_object* v_r_3491_; 
v_res_3490_ = l_List_beq___at___00List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0_spec__0(v_x_3488_, v_x_3489_);
lean_dec(v_x_3489_);
lean_dec(v_x_3488_);
v_r_3491_ = lean_box(v_res_3490_);
return v_r_3491_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0(lean_object* v_x_3492_, lean_object* v_x_3493_){
_start:
{
if (lean_obj_tag(v_x_3492_) == 0)
{
if (lean_obj_tag(v_x_3493_) == 0)
{
uint8_t v___x_3494_; 
v___x_3494_ = 1;
return v___x_3494_;
}
else
{
uint8_t v___x_3495_; 
v___x_3495_ = 0;
return v___x_3495_;
}
}
else
{
if (lean_obj_tag(v_x_3493_) == 0)
{
uint8_t v___x_3496_; 
v___x_3496_ = 0;
return v___x_3496_;
}
else
{
lean_object* v_head_3497_; lean_object* v_head_3498_; lean_object* v_tail_3499_; lean_object* v_tail_3500_; lean_object* v_fst_3501_; lean_object* v_snd_3502_; lean_object* v_fst_3503_; lean_object* v_snd_3504_; uint8_t v___x_3505_; 
v_head_3497_ = lean_ctor_get(v_x_3492_, 0);
v_head_3498_ = lean_ctor_get(v_x_3493_, 0);
v_tail_3499_ = lean_ctor_get(v_x_3492_, 1);
v_tail_3500_ = lean_ctor_get(v_x_3493_, 1);
v_fst_3501_ = lean_ctor_get(v_head_3497_, 0);
v_snd_3502_ = lean_ctor_get(v_head_3497_, 1);
v_fst_3503_ = lean_ctor_get(v_head_3498_, 0);
v_snd_3504_ = lean_ctor_get(v_head_3498_, 1);
v___x_3505_ = lean_name_eq(v_fst_3501_, v_fst_3503_);
if (v___x_3505_ == 0)
{
return v___x_3505_;
}
else
{
uint8_t v___x_3506_; 
v___x_3506_ = l_List_beq___at___00List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0_spec__0(v_snd_3502_, v_snd_3504_);
if (v___x_3506_ == 0)
{
return v___x_3506_;
}
else
{
v_x_3492_ = v_tail_3499_;
v_x_3493_ = v_tail_3500_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0___boxed(lean_object* v_x_3508_, lean_object* v_x_3509_){
_start:
{
uint8_t v_res_3510_; lean_object* v_r_3511_; 
v_res_3510_ = l_List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0(v_x_3508_, v_x_3509_);
lean_dec(v_x_3509_);
lean_dec(v_x_3508_);
v_r_3511_ = lean_box(v_res_3510_);
return v_r_3511_;
}
}
static lean_object* _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__1(void){
_start:
{
lean_object* v___x_3513_; lean_object* v___x_3514_; 
v___x_3513_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__0));
v___x_3514_ = l_Lean_stringToMessageData(v___x_3513_);
return v___x_3514_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f(lean_object* v_declName_3515_, lean_object* v_newName_3516_, lean_object* v_a_3517_, lean_object* v_a_3518_, lean_object* v_a_3519_, lean_object* v_a_3520_){
_start:
{
lean_object* v_ref_3522_; 
v_ref_3522_ = lean_ctor_get(v_a_3519_, 2);
if (lean_obj_tag(v_ref_3522_) == 3)
{
lean_object* v_val_3523_; uint8_t v___x_3524_; 
v_val_3523_ = lean_ctor_get(v_ref_3522_, 2);
v___x_3524_ = l_Lean_Name_hasMacroScopes(v_val_3523_);
if (v___x_3524_ == 0)
{
uint8_t v___x_3525_; lean_object* v___x_3526_; 
v___x_3525_ = 1;
v___x_3526_ = l_Lean_Syntax_getRange_x3f(v_ref_3522_, v___x_3525_);
if (lean_obj_tag(v___x_3526_) == 0)
{
lean_object* v___x_3527_; lean_object* v___x_3528_; 
lean_dec(v_newName_3516_);
lean_dec(v_declName_3515_);
v___x_3527_ = lean_box(0);
v___x_3528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3528_, 0, v___x_3527_);
return v___x_3528_;
}
else
{
lean_object* v___x_3530_; uint8_t v_isShared_3531_; uint8_t v_isSharedCheck_3610_; 
v_isSharedCheck_3610_ = !lean_is_exclusive(v___x_3526_);
if (v_isSharedCheck_3610_ == 0)
{
lean_object* v_unused_3611_; 
v_unused_3611_ = lean_ctor_get(v___x_3526_, 0);
lean_dec(v_unused_3611_);
v___x_3530_ = v___x_3526_;
v_isShared_3531_ = v_isSharedCheck_3610_;
goto v_resetjp_3529_;
}
else
{
lean_dec(v___x_3526_);
v___x_3530_ = lean_box(0);
v_isShared_3531_ = v_isSharedCheck_3610_;
goto v_resetjp_3529_;
}
v_resetjp_3529_:
{
lean_object* v___x_3532_; 
lean_inc(v_val_3523_);
v___x_3532_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29(v_val_3523_, v___x_3525_, v_a_3517_, v_a_3518_, v_a_3519_, v_a_3520_);
if (lean_obj_tag(v___x_3532_) == 0)
{
lean_object* v_a_3533_; lean_object* v___x_3535_; uint8_t v_isShared_3536_; uint8_t v_isSharedCheck_3601_; 
v_a_3533_ = lean_ctor_get(v___x_3532_, 0);
v_isSharedCheck_3601_ = !lean_is_exclusive(v___x_3532_);
if (v_isSharedCheck_3601_ == 0)
{
v___x_3535_ = v___x_3532_;
v_isShared_3536_ = v_isSharedCheck_3601_;
goto v_resetjp_3534_;
}
else
{
lean_inc(v_a_3533_);
lean_dec(v___x_3532_);
v___x_3535_ = lean_box(0);
v_isShared_3536_ = v_isSharedCheck_3601_;
goto v_resetjp_3534_;
}
v_resetjp_3534_:
{
lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; uint8_t v___x_3540_; 
v___x_3537_ = lean_box(0);
v___x_3538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3538_, 0, v_declName_3515_);
lean_ctor_set(v___x_3538_, 1, v___x_3537_);
v___x_3539_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3539_, 0, v___x_3538_);
lean_ctor_set(v___x_3539_, 1, v___x_3537_);
v___x_3540_ = l_List_beq___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f_spec__0(v_a_3533_, v___x_3539_);
lean_dec_ref_known(v___x_3539_, 2);
lean_dec(v_a_3533_);
if (v___x_3540_ == 0)
{
lean_object* v___x_3541_; lean_object* v___x_3543_; 
lean_del_object(v___x_3530_);
lean_dec(v_newName_3516_);
v___x_3541_ = lean_box(0);
if (v_isShared_3536_ == 0)
{
lean_ctor_set(v___x_3535_, 0, v___x_3541_);
v___x_3543_ = v___x_3535_;
goto v_reusejp_3542_;
}
else
{
lean_object* v_reuseFailAlloc_3544_; 
v_reuseFailAlloc_3544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3544_, 0, v___x_3541_);
v___x_3543_ = v_reuseFailAlloc_3544_;
goto v_reusejp_3542_;
}
v_reusejp_3542_:
{
return v___x_3543_;
}
}
else
{
lean_object* v___x_3545_; 
lean_del_object(v___x_3535_);
v___x_3545_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5(v_newName_3516_, v___x_3524_, v_a_3517_, v_a_3518_, v_a_3519_, v_a_3520_);
if (lean_obj_tag(v___x_3545_) == 0)
{
lean_object* v_a_3546_; lean_object* v___x_3548_; uint8_t v_isShared_3549_; uint8_t v_isSharedCheck_3592_; 
v_a_3546_ = lean_ctor_get(v___x_3545_, 0);
v_isSharedCheck_3592_ = !lean_is_exclusive(v___x_3545_);
if (v_isSharedCheck_3592_ == 0)
{
v___x_3548_ = v___x_3545_;
v_isShared_3549_ = v_isSharedCheck_3592_;
goto v_resetjp_3547_;
}
else
{
lean_inc(v_a_3546_);
lean_dec(v___x_3545_);
v___x_3548_ = lean_box(0);
v_isShared_3549_ = v_isSharedCheck_3592_;
goto v_resetjp_3547_;
}
v_resetjp_3547_:
{
if (lean_obj_tag(v_a_3546_) == 1)
{
lean_object* v_val_3550_; lean_object* v___x_3552_; uint8_t v_isShared_3553_; uint8_t v_isSharedCheck_3587_; 
lean_del_object(v___x_3548_);
v_val_3550_ = lean_ctor_get(v_a_3546_, 0);
v_isSharedCheck_3587_ = !lean_is_exclusive(v_a_3546_);
if (v_isSharedCheck_3587_ == 0)
{
v___x_3552_ = v_a_3546_;
v_isShared_3553_ = v_isSharedCheck_3587_;
goto v_resetjp_3551_;
}
else
{
lean_inc(v_val_3550_);
lean_dec(v_a_3546_);
v___x_3552_ = lean_box(0);
v_isShared_3553_ = v_isSharedCheck_3587_;
goto v_resetjp_3551_;
}
v_resetjp_3551_:
{
lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; uint8_t v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3565_; 
v___x_3554_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__1, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__1_once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___closed__1);
v___x_3555_ = l_Lean_Name_toString(v_val_3550_, v___x_3525_);
v___x_3556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3556_, 0, v___x_3555_);
v___x_3557_ = lean_box(0);
v___x_3558_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3558_, 0, v___x_3556_);
lean_ctor_set(v___x_3558_, 1, v___x_3557_);
lean_ctor_set(v___x_3558_, 2, v___x_3557_);
lean_ctor_set(v___x_3558_, 3, v___x_3557_);
lean_ctor_set(v___x_3558_, 4, v___x_3557_);
lean_ctor_set(v___x_3558_, 5, v___x_3557_);
v___x_3559_ = 0;
v___x_3560_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3560_, 0, v___x_3558_);
lean_ctor_set(v___x_3560_, 1, v___x_3557_);
lean_ctor_set(v___x_3560_, 2, v___x_3557_);
lean_ctor_set_uint8(v___x_3560_, sizeof(void*)*3, v___x_3559_);
v___x_3561_ = lean_unsigned_to_nat(1u);
v___x_3562_ = lean_mk_empty_array_with_capacity(v___x_3561_);
v___x_3563_ = lean_array_push(v___x_3562_, v___x_3560_);
lean_inc_ref(v_ref_3522_);
if (v_isShared_3553_ == 0)
{
lean_ctor_set(v___x_3552_, 0, v_ref_3522_);
v___x_3565_ = v___x_3552_;
goto v_reusejp_3564_;
}
else
{
lean_object* v_reuseFailAlloc_3586_; 
v_reuseFailAlloc_3586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3586_, 0, v_ref_3522_);
v___x_3565_ = v_reuseFailAlloc_3586_;
goto v_reusejp_3564_;
}
v_reusejp_3564_:
{
lean_object* v___x_3566_; 
v___x_3566_ = l_Lean_MessageData_hint(v___x_3554_, v___x_3563_, v___x_3565_, v___x_3557_, v___x_3524_, v_a_3519_, v_a_3520_);
lean_dec_ref(v___x_3563_);
if (lean_obj_tag(v___x_3566_) == 0)
{
lean_object* v_a_3567_; lean_object* v___x_3569_; uint8_t v_isShared_3570_; uint8_t v_isSharedCheck_3577_; 
v_a_3567_ = lean_ctor_get(v___x_3566_, 0);
v_isSharedCheck_3577_ = !lean_is_exclusive(v___x_3566_);
if (v_isSharedCheck_3577_ == 0)
{
v___x_3569_ = v___x_3566_;
v_isShared_3570_ = v_isSharedCheck_3577_;
goto v_resetjp_3568_;
}
else
{
lean_inc(v_a_3567_);
lean_dec(v___x_3566_);
v___x_3569_ = lean_box(0);
v_isShared_3570_ = v_isSharedCheck_3577_;
goto v_resetjp_3568_;
}
v_resetjp_3568_:
{
lean_object* v___x_3572_; 
if (v_isShared_3531_ == 0)
{
lean_ctor_set(v___x_3530_, 0, v_a_3567_);
v___x_3572_ = v___x_3530_;
goto v_reusejp_3571_;
}
else
{
lean_object* v_reuseFailAlloc_3576_; 
v_reuseFailAlloc_3576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3576_, 0, v_a_3567_);
v___x_3572_ = v_reuseFailAlloc_3576_;
goto v_reusejp_3571_;
}
v_reusejp_3571_:
{
lean_object* v___x_3574_; 
if (v_isShared_3570_ == 0)
{
lean_ctor_set(v___x_3569_, 0, v___x_3572_);
v___x_3574_ = v___x_3569_;
goto v_reusejp_3573_;
}
else
{
lean_object* v_reuseFailAlloc_3575_; 
v_reuseFailAlloc_3575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3575_, 0, v___x_3572_);
v___x_3574_ = v_reuseFailAlloc_3575_;
goto v_reusejp_3573_;
}
v_reusejp_3573_:
{
return v___x_3574_;
}
}
}
}
else
{
lean_object* v_a_3578_; lean_object* v___x_3580_; uint8_t v_isShared_3581_; uint8_t v_isSharedCheck_3585_; 
lean_del_object(v___x_3530_);
v_a_3578_ = lean_ctor_get(v___x_3566_, 0);
v_isSharedCheck_3585_ = !lean_is_exclusive(v___x_3566_);
if (v_isSharedCheck_3585_ == 0)
{
v___x_3580_ = v___x_3566_;
v_isShared_3581_ = v_isSharedCheck_3585_;
goto v_resetjp_3579_;
}
else
{
lean_inc(v_a_3578_);
lean_dec(v___x_3566_);
v___x_3580_ = lean_box(0);
v_isShared_3581_ = v_isSharedCheck_3585_;
goto v_resetjp_3579_;
}
v_resetjp_3579_:
{
lean_object* v___x_3583_; 
if (v_isShared_3581_ == 0)
{
v___x_3583_ = v___x_3580_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v_a_3578_);
v___x_3583_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3582_;
}
v_reusejp_3582_:
{
return v___x_3583_;
}
}
}
}
}
}
else
{
lean_object* v___x_3588_; lean_object* v___x_3590_; 
lean_dec(v_a_3546_);
lean_del_object(v___x_3530_);
v___x_3588_ = lean_box(0);
if (v_isShared_3549_ == 0)
{
lean_ctor_set(v___x_3548_, 0, v___x_3588_);
v___x_3590_ = v___x_3548_;
goto v_reusejp_3589_;
}
else
{
lean_object* v_reuseFailAlloc_3591_; 
v_reuseFailAlloc_3591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3591_, 0, v___x_3588_);
v___x_3590_ = v_reuseFailAlloc_3591_;
goto v_reusejp_3589_;
}
v_reusejp_3589_:
{
return v___x_3590_;
}
}
}
}
else
{
lean_object* v_a_3593_; lean_object* v___x_3595_; uint8_t v_isShared_3596_; uint8_t v_isSharedCheck_3600_; 
lean_del_object(v___x_3530_);
v_a_3593_ = lean_ctor_get(v___x_3545_, 0);
v_isSharedCheck_3600_ = !lean_is_exclusive(v___x_3545_);
if (v_isSharedCheck_3600_ == 0)
{
v___x_3595_ = v___x_3545_;
v_isShared_3596_ = v_isSharedCheck_3600_;
goto v_resetjp_3594_;
}
else
{
lean_inc(v_a_3593_);
lean_dec(v___x_3545_);
v___x_3595_ = lean_box(0);
v_isShared_3596_ = v_isSharedCheck_3600_;
goto v_resetjp_3594_;
}
v_resetjp_3594_:
{
lean_object* v___x_3598_; 
if (v_isShared_3596_ == 0)
{
v___x_3598_ = v___x_3595_;
goto v_reusejp_3597_;
}
else
{
lean_object* v_reuseFailAlloc_3599_; 
v_reuseFailAlloc_3599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3599_, 0, v_a_3593_);
v___x_3598_ = v_reuseFailAlloc_3599_;
goto v_reusejp_3597_;
}
v_reusejp_3597_:
{
return v___x_3598_;
}
}
}
}
}
}
else
{
lean_object* v_a_3602_; lean_object* v___x_3604_; uint8_t v_isShared_3605_; uint8_t v_isSharedCheck_3609_; 
lean_del_object(v___x_3530_);
lean_dec(v_newName_3516_);
lean_dec(v_declName_3515_);
v_a_3602_ = lean_ctor_get(v___x_3532_, 0);
v_isSharedCheck_3609_ = !lean_is_exclusive(v___x_3532_);
if (v_isSharedCheck_3609_ == 0)
{
v___x_3604_ = v___x_3532_;
v_isShared_3605_ = v_isSharedCheck_3609_;
goto v_resetjp_3603_;
}
else
{
lean_inc(v_a_3602_);
lean_dec(v___x_3532_);
v___x_3604_ = lean_box(0);
v_isShared_3605_ = v_isSharedCheck_3609_;
goto v_resetjp_3603_;
}
v_resetjp_3603_:
{
lean_object* v___x_3607_; 
if (v_isShared_3605_ == 0)
{
v___x_3607_ = v___x_3604_;
goto v_reusejp_3606_;
}
else
{
lean_object* v_reuseFailAlloc_3608_; 
v_reuseFailAlloc_3608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3608_, 0, v_a_3602_);
v___x_3607_ = v_reuseFailAlloc_3608_;
goto v_reusejp_3606_;
}
v_reusejp_3606_:
{
return v___x_3607_;
}
}
}
}
}
}
else
{
lean_object* v___x_3612_; lean_object* v___x_3613_; 
lean_dec(v_newName_3516_);
lean_dec(v_declName_3515_);
v___x_3612_ = lean_box(0);
v___x_3613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3613_, 0, v___x_3612_);
return v___x_3613_;
}
}
else
{
lean_object* v___x_3614_; lean_object* v___x_3615_; 
lean_dec(v_newName_3516_);
lean_dec(v_declName_3515_);
v___x_3614_ = lean_box(0);
v___x_3615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3615_, 0, v___x_3614_);
return v___x_3615_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f___boxed(lean_object* v_declName_3616_, lean_object* v_newName_3617_, lean_object* v_a_3618_, lean_object* v_a_3619_, lean_object* v_a_3620_, lean_object* v_a_3621_, lean_object* v_a_3622_){
_start:
{
lean_object* v_res_3623_; 
v_res_3623_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f(v_declName_3616_, v_newName_3617_, v_a_3618_, v_a_3619_, v_a_3620_, v_a_3621_);
lean_dec(v_a_3621_);
lean_dec_ref(v_a_3620_);
lean_dec(v_a_3619_);
lean_dec_ref(v_a_3618_);
return v_res_3623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___redArg(lean_object* v_o_3624_, lean_object* v___y_3625_){
_start:
{
lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v_env_3629_; lean_object* v___x_3630_; lean_object* v_toEnvExtension_3631_; lean_object* v_asyncMode_3632_; lean_object* v___x_3633_; uint8_t v___x_3634_; lean_object* v___x_3635_; lean_object* v_merged_3636_; lean_object* v___x_3638_; uint8_t v_isShared_3639_; uint8_t v_isSharedCheck_3644_; 
v___x_3627_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_3628_ = lean_st_ref_get(v___y_3625_);
v_env_3629_ = lean_ctor_get(v___x_3628_, 0);
lean_inc_ref(v_env_3629_);
lean_dec(v___x_3628_);
v___x_3630_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_3631_ = lean_ctor_get(v___x_3630_, 0);
v_asyncMode_3632_ = lean_ctor_get(v_toEnvExtension_3631_, 2);
v___x_3633_ = lean_box(0);
v___x_3634_ = 0;
v___x_3635_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3627_, v___x_3630_, v_env_3629_, v_asyncMode_3632_, v___x_3633_, v___x_3634_);
v_merged_3636_ = lean_ctor_get(v___x_3635_, 0);
v_isSharedCheck_3644_ = !lean_is_exclusive(v___x_3635_);
if (v_isSharedCheck_3644_ == 0)
{
lean_object* v_unused_3645_; 
v_unused_3645_ = lean_ctor_get(v___x_3635_, 1);
lean_dec(v_unused_3645_);
v___x_3638_ = v___x_3635_;
v_isShared_3639_ = v_isSharedCheck_3644_;
goto v_resetjp_3637_;
}
else
{
lean_inc(v_merged_3636_);
lean_dec(v___x_3635_);
v___x_3638_ = lean_box(0);
v_isShared_3639_ = v_isSharedCheck_3644_;
goto v_resetjp_3637_;
}
v_resetjp_3637_:
{
lean_object* v___x_3641_; 
if (v_isShared_3639_ == 0)
{
lean_ctor_set(v___x_3638_, 1, v_merged_3636_);
lean_ctor_set(v___x_3638_, 0, v_o_3624_);
v___x_3641_ = v___x_3638_;
goto v_reusejp_3640_;
}
else
{
lean_object* v_reuseFailAlloc_3643_; 
v_reuseFailAlloc_3643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3643_, 0, v_o_3624_);
lean_ctor_set(v_reuseFailAlloc_3643_, 1, v_merged_3636_);
v___x_3641_ = v_reuseFailAlloc_3643_;
goto v_reusejp_3640_;
}
v_reusejp_3640_:
{
lean_object* v___x_3642_; 
v___x_3642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3642_, 0, v___x_3641_);
return v___x_3642_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___redArg___boxed(lean_object* v_o_3646_, lean_object* v___y_3647_, lean_object* v___y_3648_){
_start:
{
lean_object* v_res_3649_; 
v_res_3649_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___redArg(v_o_3646_, v___y_3647_);
lean_dec(v___y_3647_);
return v_res_3649_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0(lean_object* v___y_3650_, lean_object* v___y_3651_, lean_object* v___y_3652_, lean_object* v___y_3653_){
_start:
{
lean_object* v___x_3655_; lean_object* v___x_3656_; 
v___x_3655_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3652_);
v___x_3656_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___redArg(v___x_3655_, v___y_3653_);
return v___x_3656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0___boxed(lean_object* v___y_3657_, lean_object* v___y_3658_, lean_object* v___y_3659_, lean_object* v___y_3660_, lean_object* v___y_3661_){
_start:
{
lean_object* v_res_3662_; 
v_res_3662_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0(v___y_3657_, v___y_3658_, v___y_3659_, v___y_3660_);
lean_dec(v___y_3660_);
lean_dec_ref(v___y_3659_);
lean_dec(v___y_3658_);
lean_dec_ref(v___y_3657_);
return v_res_3662_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__1(void){
_start:
{
lean_object* v___x_3664_; lean_object* v___x_3665_; 
v___x_3664_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__0));
v___x_3665_ = l_Lean_stringToMessageData(v___x_3664_);
return v___x_3665_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__3(void){
_start:
{
lean_object* v___x_3667_; lean_object* v___x_3668_; 
v___x_3667_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__2));
v___x_3668_ = l_Lean_stringToMessageData(v___x_3667_);
return v___x_3668_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__5(void){
_start:
{
lean_object* v___x_3670_; lean_object* v___x_3671_; 
v___x_3670_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__4));
v___x_3671_ = l_Lean_stringToMessageData(v___x_3670_);
return v___x_3671_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__7(void){
_start:
{
lean_object* v___x_3673_; lean_object* v___x_3674_; 
v___x_3673_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__6));
v___x_3674_ = l_Lean_stringToMessageData(v___x_3673_);
return v___x_3674_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__9(void){
_start:
{
lean_object* v___x_3676_; lean_object* v___x_3677_; 
v___x_3676_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__8));
v___x_3677_ = l_Lean_stringToMessageData(v___x_3676_);
return v___x_3677_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__11(void){
_start:
{
lean_object* v___x_3679_; lean_object* v___x_3680_; 
v___x_3679_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__10));
v___x_3680_ = l_Lean_stringToMessageData(v___x_3679_);
return v___x_3680_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__13(void){
_start:
{
lean_object* v___x_3682_; lean_object* v___x_3683_; 
v___x_3682_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__12));
v___x_3683_ = l_Lean_stringToMessageData(v___x_3682_);
return v___x_3683_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__15(void){
_start:
{
lean_object* v___x_3685_; lean_object* v___x_3686_; 
v___x_3685_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__14));
v___x_3686_ = l_Lean_stringToMessageData(v___x_3685_);
return v___x_3686_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__17(void){
_start:
{
lean_object* v___x_3688_; lean_object* v___x_3689_; 
v___x_3688_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__16));
v___x_3689_ = l_Lean_stringToMessageData(v___x_3688_);
return v___x_3689_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__19(void){
_start:
{
lean_object* v___x_3691_; lean_object* v___x_3692_; 
v___x_3691_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__18));
v___x_3692_ = l_Lean_stringToMessageData(v___x_3691_);
return v___x_3692_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__21(void){
_start:
{
lean_object* v___x_3695_; lean_object* v___x_3696_; 
v___x_3695_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__20));
v___x_3696_ = l_Lean_MessageData_ofFormat(v___x_3695_);
return v___x_3696_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__23(void){
_start:
{
lean_object* v___x_3698_; lean_object* v___x_3699_; 
v___x_3698_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__22));
v___x_3699_ = l_Lean_stringToMessageData(v___x_3698_);
return v___x_3699_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__25(void){
_start:
{
lean_object* v___x_3701_; lean_object* v___x_3702_; 
v___x_3701_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__24));
v___x_3702_ = l_Lean_stringToMessageData(v___x_3701_);
return v___x_3702_;
}
}
static lean_object* _init_l_Lean_Linter_checkDeprecated___closed__27(void){
_start:
{
lean_object* v___x_3704_; lean_object* v___x_3705_; 
v___x_3704_ = ((lean_object*)(l_Lean_Linter_checkDeprecated___closed__26));
v___x_3705_ = l_Lean_stringToMessageData(v___x_3704_);
return v___x_3705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_checkDeprecated(lean_object* v_declName_3706_, uint8_t v_allowSuggestion_3707_, lean_object* v_a_3708_, lean_object* v_a_3709_, lean_object* v_a_3710_, lean_object* v_a_3711_){
_start:
{
lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v_a_3715_; lean_object* v___x_3717_; uint8_t v_isShared_3718_; uint8_t v_isSharedCheck_3878_; 
v___x_3713_ = ((lean_object*)(l_Lean_Linter_instInhabitedDeprecationEntry_default));
v___x_3714_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0(v_a_3708_, v_a_3709_, v_a_3710_, v_a_3711_);
v_a_3715_ = lean_ctor_get(v___x_3714_, 0);
v_isSharedCheck_3878_ = !lean_is_exclusive(v___x_3714_);
if (v_isSharedCheck_3878_ == 0)
{
v___x_3717_ = v___x_3714_;
v_isShared_3718_ = v_isSharedCheck_3878_;
goto v_resetjp_3716_;
}
else
{
lean_inc(v_a_3715_);
lean_dec(v___x_3714_);
v___x_3717_ = lean_box(0);
v_isShared_3718_ = v_isSharedCheck_3878_;
goto v_resetjp_3716_;
}
v_resetjp_3716_:
{
lean_object* v___x_3719_; uint8_t v___x_3720_; lean_object* v_extraMsg_3722_; lean_object* v___y_3723_; lean_object* v___y_3724_; lean_object* v___y_3725_; lean_object* v___y_3726_; 
v___x_3719_ = l_Lean_Linter_linter_deprecated;
v___x_3720_ = l_Lean_Linter_getLinterValue(v___x_3719_, v_a_3715_);
lean_dec(v_a_3715_);
if (v___x_3720_ == 0)
{
lean_object* v___x_3736_; lean_object* v___x_3738_; 
lean_dec(v_declName_3706_);
v___x_3736_ = lean_box(0);
if (v_isShared_3718_ == 0)
{
lean_ctor_set(v___x_3717_, 0, v___x_3736_);
v___x_3738_ = v___x_3717_;
goto v_reusejp_3737_;
}
else
{
lean_object* v_reuseFailAlloc_3739_; 
v_reuseFailAlloc_3739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3739_, 0, v___x_3736_);
v___x_3738_ = v_reuseFailAlloc_3739_;
goto v_reusejp_3737_;
}
v_reusejp_3737_:
{
return v___x_3738_;
}
}
else
{
lean_object* v___x_3740_; lean_object* v_env_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; 
v___x_3740_ = lean_st_ref_get(v_a_3711_);
v_env_3741_ = lean_ctor_get(v___x_3740_, 0);
lean_inc_ref(v_env_3741_);
lean_dec(v___x_3740_);
v___x_3742_ = l_Lean_Linter_deprecatedAttr;
lean_inc(v_declName_3706_);
v___x_3743_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v___x_3713_, v___x_3742_, v_env_3741_, v_declName_3706_);
if (lean_obj_tag(v___x_3743_) == 1)
{
lean_object* v_val_3744_; lean_object* v_text_x3f_3745_; 
lean_del_object(v___x_3717_);
v_val_3744_ = lean_ctor_get(v___x_3743_, 0);
lean_inc(v_val_3744_);
lean_dec_ref_known(v___x_3743_, 1);
v_text_x3f_3745_ = lean_ctor_get(v_val_3744_, 1);
if (lean_obj_tag(v_text_x3f_3745_) == 0)
{
lean_object* v_newName_x3f_3746_; 
v_newName_x3f_3746_ = lean_ctor_get(v_val_3744_, 0);
lean_inc(v_newName_x3f_3746_);
lean_dec(v_val_3744_);
if (lean_obj_tag(v_newName_x3f_3746_) == 0)
{
lean_object* v___x_3747_; 
v___x_3747_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__2_spec__4___closed__9);
v_extraMsg_3722_ = v___x_3747_;
v___y_3723_ = v_a_3708_;
v___y_3724_ = v_a_3709_;
v___y_3725_ = v_a_3710_;
v___y_3726_ = v_a_3711_;
goto v___jp_3721_;
}
else
{
lean_object* v_val_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v_env_3755_; lean_object* v___x_3756_; uint8_t v___x_3757_; lean_object* v___x_3758_; 
v_val_3748_ = lean_ctor_get(v_newName_x3f_3746_, 0);
lean_inc_n(v_val_3748_, 2);
lean_dec_ref_known(v_newName_x3f_3746_, 1);
v___x_3749_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__3, &l_Lean_Linter_checkDeprecated___closed__3_once, _init_l_Lean_Linter_checkDeprecated___closed__3);
v___x_3750_ = l_Lean_MessageData_ofConstName(v_val_3748_, v___x_3720_);
lean_inc_ref(v___x_3750_);
v___x_3751_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3751_, 0, v___x_3749_);
lean_ctor_set(v___x_3751_, 1, v___x_3750_);
v___x_3752_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__52_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__52_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__52_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_3753_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3753_, 0, v___x_3751_);
lean_ctor_set(v___x_3753_, 1, v___x_3752_);
v___x_3754_ = lean_st_ref_get(v_a_3711_);
v_env_3755_ = lean_ctor_get(v___x_3754_, 0);
lean_inc_ref_n(v_env_3755_, 2);
lean_dec(v___x_3754_);
v___x_3756_ = l_Lean_Name_getPrefix(v_declName_3706_);
v___x_3757_ = 0;
lean_inc(v_declName_3706_);
v___x_3758_ = l_Lean_Environment_find_x3f(v_env_3755_, v_declName_3706_, v___x_3757_);
if (lean_obj_tag(v___x_3758_) == 1)
{
lean_object* v_val_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; 
v_val_3759_ = lean_ctor_get(v___x_3758_, 0);
lean_inc(v_val_3759_);
lean_dec_ref_known(v___x_3758_, 1);
v___x_3760_ = l_Lean_Name_getPrefix(v_val_3748_);
lean_inc(v_val_3748_);
lean_inc_ref(v_env_3755_);
v___x_3761_ = l_Lean_Environment_find_x3f(v_env_3755_, v_val_3748_, v___x_3757_);
if (lean_obj_tag(v___x_3761_) == 1)
{
lean_object* v_val_3762_; lean_object* v___x_3763_; 
v_val_3762_ = lean_ctor_get(v___x_3761_, 0);
lean_inc(v_val_3762_);
lean_dec_ref_known(v___x_3761_, 1);
v___x_3763_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_areTypesReduciblyDefEq(v_val_3759_, v_val_3762_, v_a_3708_, v_a_3709_, v_a_3710_, v_a_3711_);
if (lean_obj_tag(v___x_3763_) == 0)
{
lean_object* v_a_3764_; lean_object* v_msg_3766_; lean_object* v___y_3767_; lean_object* v___y_3768_; lean_object* v___y_3769_; lean_object* v___y_3770_; lean_object* v___y_3785_; lean_object* v___y_3786_; lean_object* v___y_3787_; lean_object* v___y_3788_; lean_object* v___y_3789_; lean_object* v___y_3790_; lean_object* v___y_3805_; lean_object* v___y_3806_; lean_object* v___y_3807_; lean_object* v___y_3808_; lean_object* v___y_3809_; lean_object* v___y_3810_; lean_object* v_msg_3818_; lean_object* v___y_3819_; lean_object* v___y_3820_; lean_object* v___y_3821_; lean_object* v___y_3822_; uint8_t v___x_3850_; 
v_a_3764_ = lean_ctor_get(v___x_3763_, 0);
lean_inc(v_a_3764_);
lean_dec_ref_known(v___x_3763_, 1);
v___x_3850_ = lean_unbox(v_a_3764_);
if (v___x_3850_ == 0)
{
lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; 
v___x_3851_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__6_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_3852_ = l_Lean_ConstantInfo_type(v_val_3762_);
lean_dec(v_val_3762_);
v___x_3853_ = l_Lean_indentExpr(v___x_3852_);
v___x_3854_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3854_, 0, v___x_3851_);
lean_ctor_set(v___x_3854_, 1, v___x_3853_);
v___x_3855_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__8_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__8_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__8_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_3856_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3856_, 0, v___x_3854_);
lean_ctor_set(v___x_3856_, 1, v___x_3855_);
v___x_3857_ = l_Lean_ConstantInfo_type(v_val_3759_);
lean_dec(v_val_3759_);
v___x_3858_ = l_Lean_indentExpr(v___x_3857_);
v___x_3859_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3859_, 0, v___x_3856_);
lean_ctor_set(v___x_3859_, 1, v___x_3858_);
v___x_3860_ = l_Lean_MessageData_note(v___x_3859_);
v___x_3861_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3861_, 0, v___x_3753_);
lean_ctor_set(v___x_3861_, 1, v___x_3860_);
v_msg_3818_ = v___x_3861_;
v___y_3819_ = v_a_3708_;
v___y_3820_ = v_a_3709_;
v___y_3821_ = v_a_3710_;
v___y_3822_ = v_a_3711_;
goto v___jp_3817_;
}
else
{
lean_dec(v_val_3762_);
lean_dec(v_val_3759_);
v_msg_3818_ = v___x_3753_;
v___y_3819_ = v_a_3708_;
v___y_3820_ = v_a_3709_;
v___y_3821_ = v_a_3710_;
v___y_3822_ = v_a_3711_;
goto v___jp_3817_;
}
v___jp_3765_:
{
if (v_allowSuggestion_3707_ == 0)
{
lean_dec(v_a_3764_);
lean_dec(v_val_3748_);
v_extraMsg_3722_ = v_msg_3766_;
v___y_3723_ = v___y_3767_;
v___y_3724_ = v___y_3768_;
v___y_3725_ = v___y_3769_;
v___y_3726_ = v___y_3770_;
goto v___jp_3721_;
}
else
{
uint8_t v___x_3771_; 
v___x_3771_ = lean_unbox(v_a_3764_);
lean_dec(v_a_3764_);
if (v___x_3771_ == 0)
{
lean_dec(v_val_3748_);
v_extraMsg_3722_ = v_msg_3766_;
v___y_3723_ = v___y_3767_;
v___y_3724_ = v___y_3768_;
v___y_3725_ = v___y_3769_;
v___y_3726_ = v___y_3770_;
goto v___jp_3721_;
}
else
{
lean_object* v___x_3772_; 
lean_inc(v_declName_3706_);
v___x_3772_ = l___private_Lean_Linter_Deprecated_0__Lean_Linter_mkDeprecationHint_x3f(v_declName_3706_, v_val_3748_, v___y_3767_, v___y_3768_, v___y_3769_, v___y_3770_);
if (lean_obj_tag(v___x_3772_) == 0)
{
lean_object* v_a_3773_; 
v_a_3773_ = lean_ctor_get(v___x_3772_, 0);
lean_inc(v_a_3773_);
lean_dec_ref_known(v___x_3772_, 1);
if (lean_obj_tag(v_a_3773_) == 1)
{
lean_object* v_val_3774_; lean_object* v___x_3775_; 
v_val_3774_ = lean_ctor_get(v_a_3773_, 0);
lean_inc(v_val_3774_);
lean_dec_ref_known(v_a_3773_, 1);
v___x_3775_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3775_, 0, v_msg_3766_);
lean_ctor_set(v___x_3775_, 1, v_val_3774_);
v_extraMsg_3722_ = v___x_3775_;
v___y_3723_ = v___y_3767_;
v___y_3724_ = v___y_3768_;
v___y_3725_ = v___y_3769_;
v___y_3726_ = v___y_3770_;
goto v___jp_3721_;
}
else
{
lean_dec(v_a_3773_);
v_extraMsg_3722_ = v_msg_3766_;
v___y_3723_ = v___y_3767_;
v___y_3724_ = v___y_3768_;
v___y_3725_ = v___y_3769_;
v___y_3726_ = v___y_3770_;
goto v___jp_3721_;
}
}
else
{
lean_object* v_a_3776_; lean_object* v___x_3778_; uint8_t v_isShared_3779_; uint8_t v_isSharedCheck_3783_; 
lean_dec_ref(v_msg_3766_);
lean_dec(v_declName_3706_);
v_a_3776_ = lean_ctor_get(v___x_3772_, 0);
v_isSharedCheck_3783_ = !lean_is_exclusive(v___x_3772_);
if (v_isSharedCheck_3783_ == 0)
{
v___x_3778_ = v___x_3772_;
v_isShared_3779_ = v_isSharedCheck_3783_;
goto v_resetjp_3777_;
}
else
{
lean_inc(v_a_3776_);
lean_dec(v___x_3772_);
v___x_3778_ = lean_box(0);
v_isShared_3779_ = v_isSharedCheck_3783_;
goto v_resetjp_3777_;
}
v_resetjp_3777_:
{
lean_object* v___x_3781_; 
if (v_isShared_3779_ == 0)
{
v___x_3781_ = v___x_3778_;
goto v_reusejp_3780_;
}
else
{
lean_object* v_reuseFailAlloc_3782_; 
v_reuseFailAlloc_3782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3782_, 0, v_a_3776_);
v___x_3781_ = v_reuseFailAlloc_3782_;
goto v_reusejp_3780_;
}
v_reusejp_3780_:
{
return v___x_3781_;
}
}
}
}
}
}
v___jp_3784_:
{
lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; 
v___x_3791_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__40_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__40_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__40_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_3792_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3792_, 0, v___x_3791_);
lean_ctor_set(v___x_3792_, 1, v___x_3750_);
v___x_3793_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__5, &l_Lean_Linter_checkDeprecated___closed__5_once, _init_l_Lean_Linter_checkDeprecated___closed__5);
v___x_3794_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3794_, 0, v___x_3792_);
lean_ctor_set(v___x_3794_, 1, v___x_3793_);
v___x_3795_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3795_, 0, v___x_3794_);
lean_ctor_set(v___x_3795_, 1, v___y_3790_);
v___x_3796_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__7, &l_Lean_Linter_checkDeprecated___closed__7_once, _init_l_Lean_Linter_checkDeprecated___closed__7);
v___x_3797_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3797_, 0, v___x_3795_);
lean_ctor_set(v___x_3797_, 1, v___x_3796_);
v___x_3798_ = l_Lean_MessageData_ofName(v___x_3760_);
v___x_3799_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3799_, 0, v___x_3797_);
lean_ctor_set(v___x_3799_, 1, v___x_3798_);
v___x_3800_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__9, &l_Lean_Linter_checkDeprecated___closed__9_once, _init_l_Lean_Linter_checkDeprecated___closed__9);
v___x_3801_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3801_, 0, v___x_3799_);
lean_ctor_set(v___x_3801_, 1, v___x_3800_);
v___x_3802_ = l_Lean_MessageData_note(v___x_3801_);
v___x_3803_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3803_, 0, v___y_3789_);
lean_ctor_set(v___x_3803_, 1, v___x_3802_);
v_msg_3766_ = v___x_3803_;
v___y_3767_ = v___y_3788_;
v___y_3768_ = v___y_3785_;
v___y_3769_ = v___y_3786_;
v___y_3770_ = v___y_3787_;
goto v___jp_3765_;
}
v___jp_3804_:
{
lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; 
v___x_3811_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__11, &l_Lean_Linter_checkDeprecated___closed__11_once, _init_l_Lean_Linter_checkDeprecated___closed__11);
v___x_3812_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3812_, 0, v___x_3811_);
lean_ctor_set(v___x_3812_, 1, v___y_3810_);
v___x_3813_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__13, &l_Lean_Linter_checkDeprecated___closed__13_once, _init_l_Lean_Linter_checkDeprecated___closed__13);
v___x_3814_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3814_, 0, v___x_3812_);
lean_ctor_set(v___x_3814_, 1, v___x_3813_);
v___x_3815_ = l_Lean_MessageData_note(v___x_3814_);
v___x_3816_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3816_, 0, v___y_3809_);
lean_ctor_set(v___x_3816_, 1, v___x_3815_);
v_msg_3766_ = v___x_3816_;
v___y_3767_ = v___y_3808_;
v___y_3768_ = v___y_3805_;
v___y_3769_ = v___y_3806_;
v___y_3770_ = v___y_3807_;
goto v___jp_3765_;
}
v___jp_3817_:
{
uint8_t v___x_3823_; 
v___x_3823_ = l_Lean_Name_isAnonymous(v___x_3756_);
if (v___x_3823_ == 0)
{
uint8_t v___x_3824_; 
v___x_3824_ = lean_name_eq(v___x_3756_, v___x_3760_);
lean_dec(v___x_3756_);
if (v___x_3824_ == 0)
{
lean_dec(v___x_3760_);
lean_dec_ref(v_env_3755_);
lean_dec_ref(v___x_3750_);
if (lean_obj_tag(v_declName_3706_) == 1)
{
lean_object* v_str_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; 
v_str_3825_ = lean_ctor_get(v_declName_3706_, 1);
v___x_3826_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__15, &l_Lean_Linter_checkDeprecated___closed__15_once, _init_l_Lean_Linter_checkDeprecated___closed__15);
lean_inc_ref(v_str_3825_);
v___x_3827_ = l_Lean_stringToMessageData(v_str_3825_);
v___x_3828_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3828_, 0, v___x_3826_);
lean_ctor_set(v___x_3828_, 1, v___x_3827_);
v___x_3829_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__17, &l_Lean_Linter_checkDeprecated___closed__17_once, _init_l_Lean_Linter_checkDeprecated___closed__17);
v___x_3830_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3830_, 0, v___x_3828_);
lean_ctor_set(v___x_3830_, 1, v___x_3829_);
lean_inc(v_val_3748_);
v___x_3831_ = l_Lean_MessageData_ofConstName(v_val_3748_, v___x_3823_);
v___x_3832_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3832_, 0, v___x_3830_);
lean_ctor_set(v___x_3832_, 1, v___x_3831_);
v___x_3833_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__19, &l_Lean_Linter_checkDeprecated___closed__19_once, _init_l_Lean_Linter_checkDeprecated___closed__19);
v___x_3834_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3834_, 0, v___x_3832_);
lean_ctor_set(v___x_3834_, 1, v___x_3833_);
v___y_3805_ = v___y_3820_;
v___y_3806_ = v___y_3821_;
v___y_3807_ = v___y_3822_;
v___y_3808_ = v___y_3819_;
v___y_3809_ = v_msg_3818_;
v___y_3810_ = v___x_3834_;
goto v___jp_3804_;
}
else
{
lean_object* v___x_3835_; 
v___x_3835_ = l_Lean_MessageData_nil;
v___y_3805_ = v___y_3820_;
v___y_3806_ = v___y_3821_;
v___y_3807_ = v___y_3822_;
v___y_3808_ = v___y_3819_;
v___y_3809_ = v_msg_3818_;
v___y_3810_ = v___x_3835_;
goto v___jp_3804_;
}
}
else
{
uint8_t v___x_3836_; 
lean_inc(v_declName_3706_);
lean_inc_ref(v_env_3755_);
v___x_3836_ = l_Lean_isProtected(v_env_3755_, v_declName_3706_);
if (v___x_3836_ == 0)
{
uint8_t v___x_3837_; 
lean_inc(v_val_3748_);
v___x_3837_ = l_Lean_isProtected(v_env_3755_, v_val_3748_);
if (v___x_3837_ == 0)
{
lean_dec(v___x_3760_);
lean_dec_ref(v___x_3750_);
v_msg_3766_ = v_msg_3818_;
v___y_3767_ = v___y_3819_;
v___y_3768_ = v___y_3820_;
v___y_3769_ = v___y_3821_;
v___y_3770_ = v___y_3822_;
goto v___jp_3765_;
}
else
{
lean_object* v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; uint8_t v___x_3841_; 
lean_inc(v___x_3760_);
v___x_3838_ = l_Lean_Name_componentsRev(v___x_3760_);
v___x_3839_ = lean_unsigned_to_nat(1u);
v___x_3840_ = l_List_lengthTR___redArg(v___x_3838_);
v___x_3841_ = lean_nat_dec_lt(v___x_3839_, v___x_3840_);
lean_dec(v___x_3840_);
if (v___x_3841_ == 0)
{
lean_object* v___x_3842_; 
lean_dec(v___x_3838_);
v___x_3842_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__21, &l_Lean_Linter_checkDeprecated___closed__21_once, _init_l_Lean_Linter_checkDeprecated___closed__21);
v___y_3785_ = v___y_3820_;
v___y_3786_ = v___y_3821_;
v___y_3787_ = v___y_3822_;
v___y_3788_ = v___y_3819_;
v___y_3789_ = v_msg_3818_;
v___y_3790_ = v___x_3842_;
goto v___jp_3784_;
}
else
{
lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; 
v___x_3843_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__23, &l_Lean_Linter_checkDeprecated___closed__23_once, _init_l_Lean_Linter_checkDeprecated___closed__23);
v___x_3844_ = lean_unsigned_to_nat(0u);
v___x_3845_ = l_List_get___redArg(v___x_3838_, v___x_3844_);
lean_dec(v___x_3838_);
v___x_3846_ = l_Lean_MessageData_ofName(v___x_3845_);
v___x_3847_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3847_, 0, v___x_3843_);
lean_ctor_set(v___x_3847_, 1, v___x_3846_);
v___x_3848_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__25, &l_Lean_Linter_checkDeprecated___closed__25_once, _init_l_Lean_Linter_checkDeprecated___closed__25);
v___x_3849_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3849_, 0, v___x_3847_);
lean_ctor_set(v___x_3849_, 1, v___x_3848_);
v___y_3785_ = v___y_3820_;
v___y_3786_ = v___y_3821_;
v___y_3787_ = v___y_3822_;
v___y_3788_ = v___y_3819_;
v___y_3789_ = v_msg_3818_;
v___y_3790_ = v___x_3849_;
goto v___jp_3784_;
}
}
}
else
{
lean_dec(v___x_3760_);
lean_dec_ref(v_env_3755_);
lean_dec_ref(v___x_3750_);
v_msg_3766_ = v_msg_3818_;
v___y_3767_ = v___y_3819_;
v___y_3768_ = v___y_3820_;
v___y_3769_ = v___y_3821_;
v___y_3770_ = v___y_3822_;
goto v___jp_3765_;
}
}
}
else
{
lean_dec(v___x_3760_);
lean_dec(v___x_3756_);
lean_dec_ref(v_env_3755_);
lean_dec_ref(v___x_3750_);
v_msg_3766_ = v_msg_3818_;
v___y_3767_ = v___y_3819_;
v___y_3768_ = v___y_3820_;
v___y_3769_ = v___y_3821_;
v___y_3770_ = v___y_3822_;
goto v___jp_3765_;
}
}
}
else
{
lean_object* v_a_3862_; lean_object* v___x_3864_; uint8_t v_isShared_3865_; uint8_t v_isSharedCheck_3869_; 
lean_dec(v_val_3762_);
lean_dec(v___x_3760_);
lean_dec(v_val_3759_);
lean_dec(v___x_3756_);
lean_dec_ref(v_env_3755_);
lean_dec_ref_known(v___x_3753_, 2);
lean_dec_ref(v___x_3750_);
lean_dec(v_val_3748_);
lean_dec(v_declName_3706_);
v_a_3862_ = lean_ctor_get(v___x_3763_, 0);
v_isSharedCheck_3869_ = !lean_is_exclusive(v___x_3763_);
if (v_isSharedCheck_3869_ == 0)
{
v___x_3864_ = v___x_3763_;
v_isShared_3865_ = v_isSharedCheck_3869_;
goto v_resetjp_3863_;
}
else
{
lean_inc(v_a_3862_);
lean_dec(v___x_3763_);
v___x_3864_ = lean_box(0);
v_isShared_3865_ = v_isSharedCheck_3869_;
goto v_resetjp_3863_;
}
v_resetjp_3863_:
{
lean_object* v___x_3867_; 
if (v_isShared_3865_ == 0)
{
v___x_3867_ = v___x_3864_;
goto v_reusejp_3866_;
}
else
{
lean_object* v_reuseFailAlloc_3868_; 
v_reuseFailAlloc_3868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3868_, 0, v_a_3862_);
v___x_3867_ = v_reuseFailAlloc_3868_;
goto v_reusejp_3866_;
}
v_reusejp_3866_:
{
return v___x_3867_;
}
}
}
}
else
{
lean_dec(v___x_3761_);
lean_dec(v___x_3760_);
lean_dec(v_val_3759_);
lean_dec(v___x_3756_);
lean_dec_ref(v_env_3755_);
lean_dec_ref(v___x_3750_);
lean_dec(v_val_3748_);
v_extraMsg_3722_ = v___x_3753_;
v___y_3723_ = v_a_3708_;
v___y_3724_ = v_a_3709_;
v___y_3725_ = v_a_3710_;
v___y_3726_ = v_a_3711_;
goto v___jp_3721_;
}
}
else
{
lean_dec(v___x_3758_);
lean_dec(v___x_3756_);
lean_dec_ref(v_env_3755_);
lean_dec_ref(v___x_3750_);
lean_dec(v_val_3748_);
v_extraMsg_3722_ = v___x_3753_;
v___y_3723_ = v_a_3708_;
v___y_3724_ = v_a_3709_;
v___y_3725_ = v_a_3710_;
v___y_3726_ = v_a_3711_;
goto v___jp_3721_;
}
}
}
else
{
lean_object* v_val_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; 
lean_inc_ref(v_text_x3f_3745_);
lean_dec(v_val_3744_);
v_val_3870_ = lean_ctor_get(v_text_x3f_3745_, 0);
lean_inc(v_val_3870_);
lean_dec_ref_known(v_text_x3f_3745_, 1);
v___x_3871_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__27, &l_Lean_Linter_checkDeprecated___closed__27_once, _init_l_Lean_Linter_checkDeprecated___closed__27);
v___x_3872_ = l_Lean_stringToMessageData(v_val_3870_);
v___x_3873_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3873_, 0, v___x_3871_);
lean_ctor_set(v___x_3873_, 1, v___x_3872_);
v_extraMsg_3722_ = v___x_3873_;
v___y_3723_ = v_a_3708_;
v___y_3724_ = v_a_3709_;
v___y_3725_ = v_a_3710_;
v___y_3726_ = v_a_3711_;
goto v___jp_3721_;
}
}
else
{
lean_object* v___x_3874_; lean_object* v___x_3876_; 
lean_dec(v___x_3743_);
lean_dec(v_declName_3706_);
v___x_3874_ = lean_box(0);
if (v_isShared_3718_ == 0)
{
lean_ctor_set(v___x_3717_, 0, v___x_3874_);
v___x_3876_ = v___x_3717_;
goto v_reusejp_3875_;
}
else
{
lean_object* v_reuseFailAlloc_3877_; 
v_reuseFailAlloc_3877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3877_, 0, v___x_3874_);
v___x_3876_ = v_reuseFailAlloc_3877_;
goto v_reusejp_3875_;
}
v_reusejp_3875_:
{
return v___x_3876_;
}
}
}
v___jp_3721_:
{
lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; 
v___x_3727_ = ((lean_object*)(l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_));
v___x_3728_ = lean_obj_once(&l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__40_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_, &l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__40_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn___lam__3___closed__40_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_);
v___x_3729_ = l_Lean_MessageData_ofConstName(v_declName_3706_, v___x_3720_);
v___x_3730_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3730_, 0, v___x_3728_);
lean_ctor_set(v___x_3730_, 1, v___x_3729_);
v___x_3731_ = lean_obj_once(&l_Lean_Linter_checkDeprecated___closed__1, &l_Lean_Linter_checkDeprecated___closed__1_once, _init_l_Lean_Linter_checkDeprecated___closed__1);
v___x_3732_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3732_, 0, v___x_3730_);
lean_ctor_set(v___x_3732_, 1, v___x_3731_);
v___x_3733_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3733_, 0, v___x_3732_);
lean_ctor_set(v___x_3733_, 1, v_extraMsg_3722_);
v___x_3734_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3734_, 0, v___x_3727_);
lean_ctor_set(v___x_3734_, 1, v___x_3733_);
v___x_3735_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00Lean_unresolveNameGlobalAvoidingLocals_x3f___at___00__private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2__spec__5_spec__11_spec__21_spec__29_spec__36_spec__43(v___x_3734_, v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_);
return v___x_3735_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_checkDeprecated___boxed(lean_object* v_declName_3879_, lean_object* v_allowSuggestion_3880_, lean_object* v_a_3881_, lean_object* v_a_3882_, lean_object* v_a_3883_, lean_object* v_a_3884_, lean_object* v_a_3885_){
_start:
{
uint8_t v_allowSuggestion_boxed_3886_; lean_object* v_res_3887_; 
v_allowSuggestion_boxed_3886_ = lean_unbox(v_allowSuggestion_3880_);
v_res_3887_ = l_Lean_Linter_checkDeprecated(v_declName_3879_, v_allowSuggestion_boxed_3886_, v_a_3881_, v_a_3882_, v_a_3883_, v_a_3884_);
lean_dec(v_a_3884_);
lean_dec_ref(v_a_3883_);
lean_dec(v_a_3882_);
lean_dec_ref(v_a_3881_);
return v_res_3887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0(lean_object* v_o_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_, lean_object* v___y_3892_){
_start:
{
lean_object* v___x_3894_; 
v___x_3894_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___redArg(v_o_3888_, v___y_3892_);
return v___x_3894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0___boxed(lean_object* v_o_3895_, lean_object* v___y_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_, lean_object* v___y_3900_){
_start:
{
lean_object* v_res_3901_; 
v_res_3901_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_checkDeprecated_spec__0_spec__0(v_o_3895_, v___y_3896_, v___y_3897_, v___y_3898_, v___y_3899_);
lean_dec(v___y_3899_);
lean_dec_ref(v___y_3898_);
lean_dec(v___y_3897_);
lean_dec_ref(v___y_3896_);
return v_res_3901_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Init(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_InfoTree_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_ExtraModUses(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Hint(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_MapIdx(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_Format(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_Zoned(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Linter_Deprecated(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_InfoTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Hint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_MapIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Format(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Zoned(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_1975727962____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_linter_deprecated = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_linter_deprecated);
lean_dec_ref(res);
res = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_651724526____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_linter_deprecated_deprecatedTarget = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_linter_deprecated_deprecatedTarget);
lean_dec_ref(res);
res = l___private_Lean_Linter_Deprecated_0__Lean_Linter_initFn_00___x40_Lean_Linter_Deprecated_182370376____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_deprecatedAttr = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_deprecatedAttr);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Linter_Deprecated(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Linter_Init(uint8_t builtin);
lean_object* initialize_Lean_Elab_InfoTree_Main(uint8_t builtin);
lean_object* initialize_Lean_ExtraModUses(uint8_t builtin);
lean_object* initialize_Lean_Meta_Hint(uint8_t builtin);
lean_object* initialize_Init_Data_List_MapIdx(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Std_Time_Format(uint8_t builtin);
lean_object* initialize_Std_Time_Zoned(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Linter_Deprecated(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_InfoTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Hint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_MapIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_Format(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_Zoned(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Deprecated(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Linter_Deprecated(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Linter_Deprecated(builtin);
}
#ifdef __cplusplus
}
#endif
