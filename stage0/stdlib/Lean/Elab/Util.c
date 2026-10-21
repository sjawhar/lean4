// Lean compiler output
// Module: Lean.Elab.Util
// Imports: public import Lean.Parser.Extension meta import Lean.Parser.Command public import Lean.KeyedDeclsAttribute import Lean.BuiltinDocAttr public import Lean.ExtraModUses import all Init.Prelude
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedSynthNormMemoSlot_default;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_EStateM_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_seqRight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_pure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_usageRecordingEnabled();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUsesByChecksRef;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
uint8_t l_List_isEmpty___redArg(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Lean_MacroScopesView_review_spec__0(lean_object*, lean_object*);
lean_object* l_EStateM_nonBacktrackable___redArg();
lean_object* l_EStateM_instMonadExceptOfOfBacktrackable___redArg(lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Attribute_Builtin_getId(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_isValidSyntaxNodeKind(lean_object*, lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
size_t lean_array_size(lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
extern lean_object* l_Lean_LocalContext_empty;
lean_object* l_Lean_Exception_getRef(lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_addTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getRefPos___redArg(lean_object*, lean_object*);
lean_object* l_Lean_toMessageList(lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_declareBuiltinDocStringAndRanges(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_init___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_List_forM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_recordExtraModUseFromDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_List_forIn_x27_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwMaxRecDepthAt___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___redArg(lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_evalConstCheck___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Macro_getCurrNamespace(lean_object*, lean_object*);
lean_object* l_Lean_Macro_hasDecl(lean_object*, lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwUnsupported___redArg(lean_object*);
lean_object* l_Lean_evalPrio(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_getEntries___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_liftExcept___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_KVMap_instValueBool;
lean_object* l_Lean_Option_get___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_List_foldl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_logErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_isAbortExceptionId(lean_object*);
lean_object* l_Lean_logError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_InternalExceptionId_getName___boxed(lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_unsetTrailing(lean_object*);
lean_object* l_Lean_Syntax_reprint(lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
lean_object* l_String_toFormat(lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_prettyPrint(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MacroScopesView_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MacroScopesView_format___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_MacroScopesView_equalScope_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_MacroScopesView_equalScope_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MacroScopesView_equalScope(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MacroScopesView_equalScope___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_expandOptNamedPrio___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_expandOptNamedPrio___closed__0 = (const lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value;
static const lean_string_object l_Lean_Elab_expandOptNamedPrio___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_expandOptNamedPrio___closed__1 = (const lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__1_value;
static const lean_string_object l_Lean_Elab_expandOptNamedPrio___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Elab_expandOptNamedPrio___closed__2 = (const lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__2_value;
static const lean_string_object l_Lean_Elab_expandOptNamedPrio___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "namedPrio"};
static const lean_object* l_Lean_Elab_expandOptNamedPrio___closed__3 = (const lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__3_value;
static const lean_ctor_object l_Lean_Elab_expandOptNamedPrio___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_expandOptNamedPrio___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_expandOptNamedPrio___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_expandOptNamedPrio___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__3_value),LEAN_SCALAR_PTR_LITERAL(171, 32, 2, 102, 118, 75, 64, 185)}};
static const lean_object* l_Lean_Elab_expandOptNamedPrio___closed__4 = (const lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptNamedPrio(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptNamedPrio___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Elab_getBetterRef_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Elab_getBetterRef_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Elab_getBetterRef_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Elab_getBetterRef_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getBetterRef___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "pp"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "macroStack"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(249, 51, 192, 169, 230, 180, 160, 93)}};
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(63, 33, 22, 128, 67, 155, 63, 18)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "display macro expansion stack"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(98, 212, 36, 208, 228, 94, 220, 119)}};
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(248, 94, 242, 78, 7, 86, 25, 134)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pp_macroStack;
static const lean_string_object l_Lean_Elab_addMacroStack___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_Lean_Elab_addMacroStack___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___redArg___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___redArg___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_addMacroStack___redArg___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___redArg___lam__1___closed__0;
static lean_once_cell_t l_Lean_Elab_addMacroStack___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___redArg___lam__1___closed__1;
static const lean_string_object l_Lean_Elab_addMacroStack___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___redArg___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_addMacroStack___redArg___lam__1___closed__2_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___redArg___lam__1___closed__2_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___redArg___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_addMacroStack___redArg___lam__1___closed__3_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___redArg___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___redArg___lam__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "invalid syntax node kind `"};
static const lean_object* l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__0 = (const lean_object*)&l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__0_value;
static lean_once_cell_t l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__1;
static const lean_string_object l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__2 = (const lean_object*)&l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__2_value;
static lean_once_cell_t l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_syntaxNodeKindOfAttrParam(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_syntaxNodeKindOfAttrParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Syntax"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___closed__0 = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(45, 144, 98, 72, 115, 31, 20, 74)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___closed__1 = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_mkElabAttribute___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__0 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__0_value;
static const lean_string_object l_Lean_Elab_mkElabAttribute___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__1 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__1_value;
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__2 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__2_value;
static const lean_array_object l_Lean_Elab_mkElabAttribute___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__3 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__3_value;
static const lean_string_object l_Lean_Elab_mkElabAttribute___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__4 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__4_value;
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__5 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__5_value;
static const lean_string_object l_Lean_Elab_mkElabAttribute___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__6 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__6_value;
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__7 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__7_value;
static const lean_string_object l_Lean_Elab_mkElabAttribute___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__8 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__8_value;
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__9 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__9_value;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__10;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__11;
static const lean_string_object l_Lean_Elab_mkElabAttribute___auto__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__12 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__12_value;
static const lean_string_object l_Lean_Elab_mkElabAttribute___auto__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__13 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__13_value;
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__14_value_aux_0),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__14_value_aux_1),((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_mkElabAttribute___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__14_value_aux_2),((lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(113, 211, 58, 33, 138, 196, 138, 106)}};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__14 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__14_value;
static const lean_string_object l_Lean_Elab_mkElabAttribute___auto__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decl_name%"};
static const lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__15 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___auto__1___closed__15_value;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__16;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__17;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__18;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__19;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__20;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__21;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__22;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__23;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__24;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__25;
static lean_once_cell_t l_Lean_Elab_mkElabAttribute___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkElabAttribute___auto__1___closed__26;
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___auto__1;
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___closed__0;
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__23___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__3___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__3___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__3___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__3___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__3___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__6_spec__13_spec__18___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__6_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__6___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__1;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__2;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__3_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__4 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__4_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__6;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__7_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__8;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__9;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__10 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__10_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__11_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__12;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__13_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__14;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__15_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__16;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__17_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__18 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__18_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__19 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__19_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__20 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__20_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___redArg___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_mkElabAttribute___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_mkElabAttribute___redArg___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_mkElabAttribute___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_mkElabAttribute___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " elaborator"};
static const lean_object* l_Lean_Elab_mkElabAttribute___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_mkElabAttribute___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__6_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__6_spec__13_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_mkMacroAttributeUnsafe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "builtin_macro"};
static const lean_object* l_Lean_Elab_mkMacroAttributeUnsafe___closed__0 = (const lean_object*)&l_Lean_Elab_mkMacroAttributeUnsafe___closed__0_value;
static const lean_ctor_object l_Lean_Elab_mkMacroAttributeUnsafe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_mkMacroAttributeUnsafe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 183, 24, 34, 89, 102, 112, 162)}};
static const lean_object* l_Lean_Elab_mkMacroAttributeUnsafe___closed__1 = (const lean_object*)&l_Lean_Elab_mkMacroAttributeUnsafe___closed__1_value;
static const lean_string_object l_Lean_Elab_mkMacroAttributeUnsafe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "macro"};
static const lean_object* l_Lean_Elab_mkMacroAttributeUnsafe___closed__2 = (const lean_object*)&l_Lean_Elab_mkMacroAttributeUnsafe___closed__2_value;
static const lean_ctor_object l_Lean_Elab_mkMacroAttributeUnsafe___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_mkMacroAttributeUnsafe___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 11, 126, 236, 0, 202, 60, 1)}};
static const lean_object* l_Lean_Elab_mkMacroAttributeUnsafe___closed__3 = (const lean_object*)&l_Lean_Elab_mkMacroAttributeUnsafe___closed__3_value;
static const lean_string_object l_Lean_Elab_mkMacroAttributeUnsafe___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Macro"};
static const lean_object* l_Lean_Elab_mkMacroAttributeUnsafe___closed__4 = (const lean_object*)&l_Lean_Elab_mkMacroAttributeUnsafe___closed__4_value;
static const lean_ctor_object l_Lean_Elab_mkMacroAttributeUnsafe___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_mkMacroAttributeUnsafe___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkMacroAttributeUnsafe___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_mkMacroAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(168, 205, 218, 0, 241, 122, 66, 251)}};
static const lean_object* l_Lean_Elab_mkMacroAttributeUnsafe___closed__5 = (const lean_object*)&l_Lean_Elab_mkMacroAttributeUnsafe___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_mkMacroAttributeUnsafe(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkMacroAttributeUnsafe___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "macroAttribute"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(215, 124, 3, 111, 194, 84, 182, 133)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_macroAttribute;
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 390, .m_capacity = 390, .m_length = 387, .m_data = "Registers a macro expander for a given syntax node kind.\n\nA macro expander should have type `Lean.Macro` (which is `Lean.Syntax → Lean.MacroM Lean.Syntax`),\ni.e. should take syntax of the given syntax node kind as a parameter and produce different syntax\nin the same syntax category.\n\nThe `macro_rules` and `macro` commands should usually be preferred over using this attribute\ndirectly."};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_docString__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(140) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(151) << 1) | 1)),((lean_object*)(((size_t)(91) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__1_value),((lean_object*)(((size_t)(91) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(151) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(151) << 1) | 1)),((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__3_value),((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__4_value),((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_expandMacroImpl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadMacroAdapterOfMonadLiftOfMonadQuotation___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadMacroAdapterOfMonadLiftOfMonadQuotation___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadMacroAdapterOfMonadLiftOfMonadQuotation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_liftMacroM___redArg___lam__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_Elab_liftMacroM___redArg___lam__13___closed__0 = (const lean_object*)&l_Lean_Elab_liftMacroM___redArg___lam__13___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__13___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__14___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__15___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__16___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__17___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__18___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__19___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__20___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__21___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__22___boxed(lean_object**);
static const lean_closure_object l_Lean_Elab_liftMacroM___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_instMonad___redArg___lam__0, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_liftMacroM___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__0_value;
static const lean_closure_object l_Lean_Elab_liftMacroM___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_instMonad___redArg___lam__1, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_liftMacroM___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__1_value;
static const lean_closure_object l_Lean_Elab_liftMacroM___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_instMonad___redArg___lam__2, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_liftMacroM___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__2_value;
static const lean_closure_object l_Lean_Elab_liftMacroM___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_map, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_liftMacroM___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Elab_liftMacroM___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__3_value),((lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_liftMacroM___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__4_value;
static const lean_closure_object l_Lean_Elab_liftMacroM___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_pure, .m_arity = 5, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_liftMacroM___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__5_value;
static const lean_closure_object l_Lean_Elab_liftMacroM___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_seqRight, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_liftMacroM___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Elab_liftMacroM___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__4_value),((lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__5_value),((lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__1_value),((lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__2_value),((lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__6_value)}};
static const lean_object* l_Lean_Elab_liftMacroM___redArg___closed__7 = (const lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__7_value;
static const lean_closure_object l_Lean_Elab_liftMacroM___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_bind, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_liftMacroM___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Elab_liftMacroM___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__7_value),((lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__8_value)}};
static const lean_object* l_Lean_Elab_liftMacroM___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__9_value;
static lean_once_cell_t l_Lean_Elab_liftMacroM___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_liftMacroM___redArg___closed__10;
static lean_once_cell_t l_Lean_Elab_liftMacroM___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_liftMacroM___redArg___closed__11;
static lean_once_cell_t l_Lean_Elab_liftMacroM___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_liftMacroM___redArg___closed__12;
static lean_once_cell_t l_Lean_Elab_liftMacroM___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_liftMacroM___redArg___closed__13;
static lean_once_cell_t l_Lean_Elab_liftMacroM___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_liftMacroM___redArg___closed__14;
static const lean_closure_object l_Lean_Elab_liftMacroM___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_pure___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__9_value)} };
static const lean_object* l_Lean_Elab_liftMacroM___redArg___closed__15 = (const lean_object*)&l_Lean_Elab_liftMacroM___redArg___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_adaptMacro___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_adaptMacro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_mkUnusedBaseName_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_mkUnusedBaseName_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkUnusedBaseName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkUnusedBaseName___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_logException___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception: "};
static const lean_object* l_Lean_Elab_logException___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_logException___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_logException___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_logException___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_logException___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_logException___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_logException(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_nestedExceptionToMessageData___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_nestedExceptionToMessageData(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = ", errors "};
static const lean_object* l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwErrorWithNestedErrors___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwErrorWithNestedErrors(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Util"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(214, 78, 200, 72, 47, 79, 142, 191)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(255, 84, 221, 213, 184, 25, 230, 28)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value),LEAN_SCALAR_PTR_LITERAL(50, 230, 224, 210, 33, 91, 167, 71)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(80, 51, 41, 220, 74, 50, 181, 52)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(61, 155, 36, 75, 140, 113, 216, 4)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(160, 108, 121, 158, 225, 216, 58, 115)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_expandOptNamedPrio___closed__0_value),LEAN_SCALAR_PTR_LITERAL(89, 130, 197, 179, 188, 68, 15, 67)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(151, 200, 117, 111, 119, 67, 77, 165)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(5, 178, 137, 191, 232, 27, 150, 24)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2034298159) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(65, 73, 120, 144, 106, 211, 68, 250)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(130, 206, 183, 5, 147, 115, 55, 70)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(142, 61, 92, 97, 132, 90, 23, 86)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(223, 154, 120, 49, 240, 44, 140, 147)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "step"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(217, 235, 194, 189, 11, 11, 236, 225)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "result"};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(217, 235, 194, 189, 11, 11, 236, 225)}};
static const lean_ctor_object l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(254, 13, 218, 138, 0, 214, 255, 58)}};
static const lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_prettyPrint(lean_object* v_stx_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
lean_inc(v_stx_1_);
v___x_2_ = l_Lean_Syntax_unsetTrailing(v_stx_1_);
v___x_3_ = l_Lean_Syntax_reprint(v___x_2_);
if (lean_obj_tag(v___x_3_) == 0)
{
lean_object* v___x_4_; uint8_t v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = 0;
v___x_6_ = l_Lean_Syntax_formatStx(v_stx_1_, v___x_4_, v___x_5_);
return v___x_6_;
}
else
{
lean_object* v_val_7_; lean_object* v___x_8_; 
lean_dec(v_stx_1_);
v_val_7_ = lean_ctor_get(v___x_3_, 0);
lean_inc(v_val_7_);
lean_dec_ref_known(v___x_3_, 1);
v___x_8_ = l_String_toFormat(v_val_7_);
return v___x_8_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MacroScopesView_format(lean_object* v_view_9_, lean_object* v_mainModule_10_){
_start:
{
lean_object* v___y_12_; lean_object* v_name_16_; lean_object* v_imported_17_; lean_object* v_ctx_18_; lean_object* v_scopes_19_; uint8_t v___x_20_; 
v_name_16_ = lean_ctor_get(v_view_9_, 0);
lean_inc(v_name_16_);
v_imported_17_ = lean_ctor_get(v_view_9_, 1);
lean_inc(v_imported_17_);
v_ctx_18_ = lean_ctor_get(v_view_9_, 2);
lean_inc(v_ctx_18_);
v_scopes_19_ = lean_ctor_get(v_view_9_, 3);
lean_inc(v_scopes_19_);
lean_dec_ref(v_view_9_);
v___x_20_ = l_List_isEmpty___redArg(v_scopes_19_);
if (v___x_20_ == 0)
{
uint8_t v___x_21_; 
v___x_21_ = lean_name_eq(v_ctx_18_, v_mainModule_10_);
if (v___x_21_ == 0)
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_22_ = l_Lean_Name_append(v_name_16_, v_imported_17_);
v___x_23_ = l_Lean_Name_append(v___x_22_, v_ctx_18_);
v___x_24_ = l_List_foldl___at___00Lean_MacroScopesView_review_spec__0(v___x_23_, v_scopes_19_);
v___y_12_ = v___x_24_;
goto v___jp_11_;
}
else
{
lean_object* v___x_25_; lean_object* v___x_26_; 
lean_dec(v_ctx_18_);
v___x_25_ = l_Lean_Name_append(v_name_16_, v_imported_17_);
v___x_26_ = l_List_foldl___at___00Lean_MacroScopesView_review_spec__0(v___x_25_, v_scopes_19_);
v___y_12_ = v___x_26_;
goto v___jp_11_;
}
}
else
{
lean_dec(v_scopes_19_);
lean_dec(v_ctx_18_);
lean_dec(v_imported_17_);
v___y_12_ = v_name_16_;
goto v___jp_11_;
}
v___jp_11_:
{
uint8_t v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_13_ = 1;
v___x_14_ = l_Lean_Name_toString(v___y_12_, v___x_13_);
v___x_15_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
return v___x_15_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MacroScopesView_format___boxed(lean_object* v_view_27_, lean_object* v_mainModule_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_MacroScopesView_format(v_view_27_, v_mainModule_28_);
lean_dec(v_mainModule_28_);
return v_res_29_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_MacroScopesView_equalScope_spec__0(lean_object* v_x_30_, lean_object* v_x_31_){
_start:
{
if (lean_obj_tag(v_x_30_) == 0)
{
if (lean_obj_tag(v_x_31_) == 0)
{
uint8_t v___x_32_; 
v___x_32_ = 1;
return v___x_32_;
}
else
{
uint8_t v___x_33_; 
v___x_33_ = 0;
return v___x_33_;
}
}
else
{
if (lean_obj_tag(v_x_31_) == 0)
{
uint8_t v___x_34_; 
v___x_34_ = 0;
return v___x_34_;
}
else
{
lean_object* v_head_35_; lean_object* v_tail_36_; lean_object* v_head_37_; lean_object* v_tail_38_; uint8_t v___x_39_; 
v_head_35_ = lean_ctor_get(v_x_30_, 0);
v_tail_36_ = lean_ctor_get(v_x_30_, 1);
v_head_37_ = lean_ctor_get(v_x_31_, 0);
v_tail_38_ = lean_ctor_get(v_x_31_, 1);
v___x_39_ = lean_nat_dec_eq(v_head_35_, v_head_37_);
if (v___x_39_ == 0)
{
return v___x_39_;
}
else
{
v_x_30_ = v_tail_36_;
v_x_31_ = v_tail_38_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_MacroScopesView_equalScope_spec__0___boxed(lean_object* v_x_41_, lean_object* v_x_42_){
_start:
{
uint8_t v_res_43_; lean_object* v_r_44_; 
v_res_43_ = l_List_beq___at___00Lean_MacroScopesView_equalScope_spec__0(v_x_41_, v_x_42_);
lean_dec(v_x_42_);
lean_dec(v_x_41_);
v_r_44_ = lean_box(v_res_43_);
return v_r_44_;
}
}
LEAN_EXPORT uint8_t l_Lean_MacroScopesView_equalScope(lean_object* v_a_45_, lean_object* v_b_46_){
_start:
{
lean_object* v_imported_47_; lean_object* v_ctx_48_; lean_object* v_scopes_49_; lean_object* v_imported_50_; lean_object* v_ctx_51_; lean_object* v_scopes_52_; uint8_t v___x_53_; 
v_imported_47_ = lean_ctor_get(v_a_45_, 1);
v_ctx_48_ = lean_ctor_get(v_a_45_, 2);
v_scopes_49_ = lean_ctor_get(v_a_45_, 3);
v_imported_50_ = lean_ctor_get(v_b_46_, 1);
v_ctx_51_ = lean_ctor_get(v_b_46_, 2);
v_scopes_52_ = lean_ctor_get(v_b_46_, 3);
v___x_53_ = l_List_beq___at___00Lean_MacroScopesView_equalScope_spec__0(v_scopes_49_, v_scopes_52_);
if (v___x_53_ == 0)
{
return v___x_53_;
}
else
{
uint8_t v___x_54_; 
v___x_54_ = lean_name_eq(v_ctx_48_, v_ctx_51_);
if (v___x_54_ == 0)
{
return v___x_54_;
}
else
{
uint8_t v___x_55_; 
v___x_55_ = lean_name_eq(v_imported_47_, v_imported_50_);
return v___x_55_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MacroScopesView_equalScope___boxed(lean_object* v_a_56_, lean_object* v_b_57_){
_start:
{
uint8_t v_res_58_; lean_object* v_r_59_; 
v_res_58_ = l_Lean_MacroScopesView_equalScope(v_a_56_, v_b_57_);
lean_dec_ref(v_b_57_);
lean_dec_ref(v_a_56_);
v_r_59_ = lean_box(v_res_58_);
return v_r_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptNamedPrio(lean_object* v_stx_69_, lean_object* v_a_70_, lean_object* v_a_71_){
_start:
{
uint8_t v___x_72_; 
v___x_72_ = l_Lean_Syntax_isNone(v_stx_69_);
if (v___x_72_ == 0)
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; uint8_t v___x_76_; 
v___x_73_ = lean_unsigned_to_nat(0u);
v___x_74_ = l_Lean_Syntax_getArg(v_stx_69_, v___x_73_);
v___x_75_ = ((lean_object*)(l_Lean_Elab_expandOptNamedPrio___closed__4));
lean_inc(v___x_74_);
v___x_76_ = l_Lean_Syntax_isOfKind(v___x_74_, v___x_75_);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; 
lean_dec(v___x_74_);
v___x_77_ = l_Lean_Macro_throwUnsupported___redArg(v_a_71_);
return v___x_77_;
}
else
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_78_ = lean_unsigned_to_nat(3u);
v___x_79_ = l_Lean_Syntax_getArg(v___x_74_, v___x_78_);
lean_dec(v___x_74_);
v___x_80_ = l_Lean_evalPrio(v___x_79_, v_a_70_, v_a_71_);
return v___x_80_;
}
}
else
{
lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_81_ = lean_unsigned_to_nat(1000u);
v___x_82_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set(v___x_82_, 1, v_a_71_);
return v___x_82_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptNamedPrio___boxed(lean_object* v_stx_83_, lean_object* v_a_84_, lean_object* v_a_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l_Lean_Elab_expandOptNamedPrio(v_stx_83_, v_a_84_, v_a_85_);
lean_dec_ref(v_a_84_);
lean_dec(v_stx_83_);
return v_res_86_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Elab_getBetterRef_spec__0(lean_object* v_x_87_, lean_object* v_x_88_){
_start:
{
if (lean_obj_tag(v_x_87_) == 0)
{
if (lean_obj_tag(v_x_88_) == 0)
{
uint8_t v___x_89_; 
v___x_89_ = 1;
return v___x_89_;
}
else
{
uint8_t v___x_90_; 
v___x_90_ = 0;
return v___x_90_;
}
}
else
{
if (lean_obj_tag(v_x_88_) == 0)
{
uint8_t v___x_91_; 
v___x_91_ = 0;
return v___x_91_;
}
else
{
lean_object* v_val_92_; lean_object* v_val_93_; uint8_t v_decide_94_; 
v_val_92_ = lean_ctor_get(v_x_87_, 0);
v_val_93_ = lean_ctor_get(v_x_88_, 0);
v_decide_94_ = lean_nat_dec_eq(v_val_92_, v_val_93_);
return v_decide_94_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Elab_getBetterRef_spec__0___boxed(lean_object* v_x_95_, lean_object* v_x_96_){
_start:
{
uint8_t v_res_97_; lean_object* v_r_98_; 
v_res_97_ = l_instBEqOption_beq___at___00Lean_Elab_getBetterRef_spec__0(v_x_95_, v_x_96_);
lean_dec(v_x_96_);
lean_dec(v_x_95_);
v_r_98_ = lean_box(v_res_97_);
return v_r_98_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Elab_getBetterRef_spec__1(lean_object* v___x_99_, lean_object* v_x_100_){
_start:
{
if (lean_obj_tag(v_x_100_) == 0)
{
lean_object* v___x_101_; 
v___x_101_ = lean_box(0);
return v___x_101_;
}
else
{
lean_object* v_head_102_; lean_object* v_tail_103_; lean_object* v_before_104_; uint8_t v___x_105_; lean_object* v___x_106_; uint8_t v___x_107_; 
v_head_102_ = lean_ctor_get(v_x_100_, 0);
v_tail_103_ = lean_ctor_get(v_x_100_, 1);
v_before_104_ = lean_ctor_get(v_head_102_, 0);
v___x_105_ = 0;
v___x_106_ = l_Lean_Syntax_getPos_x3f(v_before_104_, v___x_105_);
v___x_107_ = l_instBEqOption_beq___at___00Lean_Elab_getBetterRef_spec__0(v___x_106_, v___x_99_);
lean_dec(v___x_106_);
if (v___x_107_ == 0)
{
lean_object* v___x_108_; 
lean_inc(v_head_102_);
v___x_108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_108_, 0, v_head_102_);
return v___x_108_;
}
else
{
v_x_100_ = v_tail_103_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Elab_getBetterRef_spec__1___boxed(lean_object* v___x_110_, lean_object* v_x_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = l_List_find_x3f___at___00Lean_Elab_getBetterRef_spec__1(v___x_110_, v_x_111_);
lean_dec(v_x_111_);
lean_dec(v___x_110_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getBetterRef(lean_object* v_ref_113_, lean_object* v_macroStack_114_){
_start:
{
uint8_t v___x_115_; lean_object* v___x_116_; 
v___x_115_ = 0;
v___x_116_ = l_Lean_Syntax_getPos_x3f(v_ref_113_, v___x_115_);
if (lean_obj_tag(v___x_116_) == 0)
{
lean_object* v___x_117_; 
v___x_117_ = l_List_find_x3f___at___00Lean_Elab_getBetterRef_spec__1(v___x_116_, v_macroStack_114_);
if (lean_obj_tag(v___x_117_) == 0)
{
lean_inc(v_ref_113_);
return v_ref_113_;
}
else
{
lean_object* v_val_118_; lean_object* v_before_119_; 
v_val_118_ = lean_ctor_get(v___x_117_, 0);
lean_inc(v_val_118_);
lean_dec_ref_known(v___x_117_, 1);
v_before_119_ = lean_ctor_get(v_val_118_, 0);
lean_inc(v_before_119_);
lean_dec(v_val_118_);
return v_before_119_;
}
}
else
{
lean_dec_ref_known(v___x_116_, 1);
lean_inc(v_ref_113_);
return v_ref_113_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getBetterRef___boxed(lean_object* v_ref_120_, lean_object* v_macroStack_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lean_Elab_getBetterRef(v_ref_120_, v_macroStack_121_);
lean_dec(v_macroStack_121_);
lean_dec(v_ref_120_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__spec__0(lean_object* v_name_123_, lean_object* v_decl_124_, lean_object* v_ref_125_){
_start:
{
lean_object* v_defValue_127_; lean_object* v_descr_128_; lean_object* v_deprecation_x3f_129_; lean_object* v___x_130_; uint8_t v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v_defValue_127_ = lean_ctor_get(v_decl_124_, 0);
v_descr_128_ = lean_ctor_get(v_decl_124_, 1);
v_deprecation_x3f_129_ = lean_ctor_get(v_decl_124_, 2);
v___x_130_ = lean_alloc_ctor(1, 0, 1);
v___x_131_ = lean_unbox(v_defValue_127_);
lean_ctor_set_uint8(v___x_130_, 0, v___x_131_);
lean_inc(v_deprecation_x3f_129_);
lean_inc_ref(v_descr_128_);
lean_inc_n(v_name_123_, 2);
v___x_132_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_132_, 0, v_name_123_);
lean_ctor_set(v___x_132_, 1, v_ref_125_);
lean_ctor_set(v___x_132_, 2, v___x_130_);
lean_ctor_set(v___x_132_, 3, v_descr_128_);
lean_ctor_set(v___x_132_, 4, v_deprecation_x3f_129_);
v___x_133_ = lean_register_option(v_name_123_, v___x_132_);
if (lean_obj_tag(v___x_133_) == 0)
{
lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_141_; 
v_isSharedCheck_141_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_141_ == 0)
{
lean_object* v_unused_142_; 
v_unused_142_ = lean_ctor_get(v___x_133_, 0);
lean_dec(v_unused_142_);
v___x_135_ = v___x_133_;
v_isShared_136_ = v_isSharedCheck_141_;
goto v_resetjp_134_;
}
else
{
lean_dec(v___x_133_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_141_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v___x_137_; lean_object* v___x_139_; 
lean_inc(v_defValue_127_);
v___x_137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_137_, 0, v_name_123_);
lean_ctor_set(v___x_137_, 1, v_defValue_127_);
if (v_isShared_136_ == 0)
{
lean_ctor_set(v___x_135_, 0, v___x_137_);
v___x_139_ = v___x_135_;
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
else
{
lean_object* v_a_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_150_; 
lean_dec(v_name_123_);
v_a_143_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_150_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_150_ == 0)
{
v___x_145_ = v___x_133_;
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_a_143_);
lean_dec(v___x_133_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_148_; 
if (v_isShared_146_ == 0)
{
v___x_148_ = v___x_145_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v_a_143_);
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
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_151_, lean_object* v_decl_152_, lean_object* v_ref_153_, lean_object* v_a_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l_Lean_Option_register___at___00__private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__spec__0(v_name_151_, v_decl_152_, v_ref_153_);
lean_dec_ref(v_decl_152_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_174_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_));
v___x_175_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_));
v___x_176_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_));
v___x_177_ = l_Lean_Option_register___at___00__private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4__spec__0(v___x_174_, v___x_175_, v___x_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4____boxed(lean_object* v_a_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_();
return v_res_179_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = ((lean_object*)(l_Lean_Elab_addMacroStack___redArg___lam__0___closed__1));
v___x_184_ = l_Lean_MessageData_ofFormat(v___x_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___redArg___lam__0(lean_object* v___x_185_, lean_object* v_msgData_186_, lean_object* v_elem_187_){
_start:
{
lean_object* v_before_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_200_; 
v_before_188_ = lean_ctor_get(v_elem_187_, 0);
v_isSharedCheck_200_ = !lean_is_exclusive(v_elem_187_);
if (v_isSharedCheck_200_ == 0)
{
lean_object* v_unused_201_; 
v_unused_201_ = lean_ctor_get(v_elem_187_, 1);
lean_dec(v_unused_201_);
v___x_190_ = v_elem_187_;
v_isShared_191_ = v_isSharedCheck_200_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_before_188_);
lean_dec(v_elem_187_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_200_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_193_; 
if (v_isShared_191_ == 0)
{
lean_ctor_set_tag(v___x_190_, 7);
lean_ctor_set(v___x_190_, 1, v___x_185_);
lean_ctor_set(v___x_190_, 0, v_msgData_186_);
v___x_193_ = v___x_190_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v_msgData_186_);
lean_ctor_set(v_reuseFailAlloc_199_, 1, v___x_185_);
v___x_193_ = v_reuseFailAlloc_199_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_194_ = lean_obj_once(&l_Lean_Elab_addMacroStack___redArg___lam__0___closed__2, &l_Lean_Elab_addMacroStack___redArg___lam__0___closed__2_once, _init_l_Lean_Elab_addMacroStack___redArg___lam__0___closed__2);
v___x_195_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_195_, 0, v___x_193_);
lean_ctor_set(v___x_195_, 1, v___x_194_);
v___x_196_ = l_Lean_MessageData_ofSyntax(v_before_188_);
v___x_197_ = l_Lean_indentD(v___x_196_);
v___x_198_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_195_);
lean_ctor_set(v___x_198_, 1, v___x_197_);
return v___x_198_;
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___redArg___lam__1___closed__0(void){
_start:
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = lean_box(1);
v___x_203_ = l_Lean_MessageData_ofFormat(v___x_202_);
return v___x_203_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_204_; lean_object* v___f_205_; 
v___x_204_ = lean_obj_once(&l_Lean_Elab_addMacroStack___redArg___lam__1___closed__0, &l_Lean_Elab_addMacroStack___redArg___lam__1___closed__0_once, _init_l_Lean_Elab_addMacroStack___redArg___lam__1___closed__0);
v___f_205_ = lean_alloc_closure((void*)(l_Lean_Elab_addMacroStack___redArg___lam__0), 3, 1);
lean_closure_set(v___f_205_, 0, v___x_204_);
return v___f_205_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___redArg___lam__1___closed__4(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_209_ = ((lean_object*)(l_Lean_Elab_addMacroStack___redArg___lam__1___closed__3));
v___x_210_ = l_Lean_MessageData_ofFormat(v___x_209_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___redArg___lam__1(lean_object* v___x_211_, lean_object* v_toPure_212_, lean_object* v_msgData_213_, lean_object* v_macroStack_214_, lean_object* v_____do__lift_215_){
_start:
{
lean_object* v___x_216_; lean_object* v___x_217_; uint8_t v___x_218_; 
v___x_216_ = l_Lean_Elab_pp_macroStack;
v___x_217_ = l_Lean_Option_get___redArg(v___x_211_, v_____do__lift_215_, v___x_216_);
v___x_218_ = lean_unbox(v___x_217_);
lean_dec(v___x_217_);
if (v___x_218_ == 0)
{
lean_object* v___x_219_; 
lean_dec(v_macroStack_214_);
v___x_219_ = lean_apply_2(v_toPure_212_, lean_box(0), v_msgData_213_);
return v___x_219_;
}
else
{
if (lean_obj_tag(v_macroStack_214_) == 0)
{
lean_object* v___x_220_; 
v___x_220_ = lean_apply_2(v_toPure_212_, lean_box(0), v_msgData_213_);
return v___x_220_;
}
else
{
lean_object* v_head_221_; lean_object* v_after_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_238_; 
v_head_221_ = lean_ctor_get(v_macroStack_214_, 0);
lean_inc(v_head_221_);
v_after_222_ = lean_ctor_get(v_head_221_, 1);
v_isSharedCheck_238_ = !lean_is_exclusive(v_head_221_);
if (v_isSharedCheck_238_ == 0)
{
lean_object* v_unused_239_; 
v_unused_239_ = lean_ctor_get(v_head_221_, 0);
lean_dec(v_unused_239_);
v___x_224_ = v_head_221_;
v_isShared_225_ = v_isSharedCheck_238_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_after_222_);
lean_dec(v_head_221_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_238_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v___x_226_; lean_object* v___f_227_; lean_object* v___x_229_; 
v___x_226_ = lean_obj_once(&l_Lean_Elab_addMacroStack___redArg___lam__1___closed__0, &l_Lean_Elab_addMacroStack___redArg___lam__1___closed__0_once, _init_l_Lean_Elab_addMacroStack___redArg___lam__1___closed__0);
v___f_227_ = lean_obj_once(&l_Lean_Elab_addMacroStack___redArg___lam__1___closed__1, &l_Lean_Elab_addMacroStack___redArg___lam__1___closed__1_once, _init_l_Lean_Elab_addMacroStack___redArg___lam__1___closed__1);
if (v_isShared_225_ == 0)
{
lean_ctor_set_tag(v___x_224_, 7);
lean_ctor_set(v___x_224_, 1, v___x_226_);
lean_ctor_set(v___x_224_, 0, v_msgData_213_);
v___x_229_ = v___x_224_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v_msgData_213_);
lean_ctor_set(v_reuseFailAlloc_237_, 1, v___x_226_);
v___x_229_ = v_reuseFailAlloc_237_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v_msgData_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_230_ = lean_obj_once(&l_Lean_Elab_addMacroStack___redArg___lam__1___closed__4, &l_Lean_Elab_addMacroStack___redArg___lam__1___closed__4_once, _init_l_Lean_Elab_addMacroStack___redArg___lam__1___closed__4);
v___x_231_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_231_, 0, v___x_229_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
v___x_232_ = l_Lean_MessageData_ofSyntax(v_after_222_);
v___x_233_ = l_Lean_indentD(v___x_232_);
v_msgData_234_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_234_, 0, v___x_231_);
lean_ctor_set(v_msgData_234_, 1, v___x_233_);
v___x_235_ = l_List_foldl___redArg(v___f_227_, v_msgData_234_, v_macroStack_214_);
v___x_236_ = lean_apply_2(v_toPure_212_, lean_box(0), v___x_235_);
return v___x_236_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___redArg___lam__1___boxed(lean_object* v___x_240_, lean_object* v_toPure_241_, lean_object* v_msgData_242_, lean_object* v_macroStack_243_, lean_object* v_____do__lift_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l_Lean_Elab_addMacroStack___redArg___lam__1(v___x_240_, v_toPure_241_, v_msgData_242_, v_macroStack_243_, v_____do__lift_244_);
lean_dec_ref(v_____do__lift_244_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___redArg(lean_object* v_inst_246_, lean_object* v_inst_247_, lean_object* v_msgData_248_, lean_object* v_macroStack_249_){
_start:
{
lean_object* v___x_250_; lean_object* v_toApplicative_251_; lean_object* v_toBind_252_; lean_object* v_getOptions_253_; lean_object* v_toPure_254_; lean_object* v___f_255_; lean_object* v___x_256_; 
v___x_250_ = l_Lean_KVMap_instValueBool;
v_toApplicative_251_ = lean_ctor_get(v_inst_246_, 0);
lean_inc_ref(v_toApplicative_251_);
v_toBind_252_ = lean_ctor_get(v_inst_246_, 1);
lean_inc(v_toBind_252_);
lean_dec_ref(v_inst_246_);
v_getOptions_253_ = lean_ctor_get(v_inst_247_, 0);
lean_inc(v_getOptions_253_);
lean_dec_ref(v_inst_247_);
v_toPure_254_ = lean_ctor_get(v_toApplicative_251_, 1);
lean_inc(v_toPure_254_);
lean_dec_ref(v_toApplicative_251_);
v___f_255_ = lean_alloc_closure((void*)(l_Lean_Elab_addMacroStack___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_255_, 0, v___x_250_);
lean_closure_set(v___f_255_, 1, v_toPure_254_);
lean_closure_set(v___f_255_, 2, v_msgData_248_);
lean_closure_set(v___f_255_, 3, v_macroStack_249_);
v___x_256_ = lean_apply_4(v_toBind_252_, lean_box(0), lean_box(0), v_getOptions_253_, v___f_255_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack(lean_object* v_m_257_, lean_object* v_inst_258_, lean_object* v_inst_259_, lean_object* v_msgData_260_, lean_object* v_macroStack_261_){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = l_Lean_Elab_addMacroStack___redArg(v_inst_258_, v_inst_259_, v_msgData_260_, v_macroStack_261_);
return v___x_262_;
}
}
static lean_object* _init_l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_264_ = ((lean_object*)(l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__0));
v___x_265_ = l_Lean_stringToMessageData(v___x_264_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0(lean_object* v_inst_266_, lean_object* v_inst_267_, lean_object* v_____r_268_){
_start:
{
lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_269_ = lean_obj_once(&l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1, &l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1);
v___x_270_ = l_Lean_throwError___redArg(v_inst_266_, v_inst_267_, v___x_269_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__1(lean_object* v_k_271_, lean_object* v___f_272_, lean_object* v_toPure_273_, lean_object* v_____do__lift_274_){
_start:
{
uint8_t v___x_275_; 
lean_inc(v_k_271_);
v___x_275_ = l_Lean_Parser_isValidSyntaxNodeKind(v_____do__lift_274_, v_k_271_);
if (v___x_275_ == 0)
{
lean_object* v___x_276_; lean_object* v___x_277_; 
lean_dec(v_toPure_273_);
lean_dec(v_k_271_);
v___x_276_ = lean_box(0);
v___x_277_ = lean_apply_1(v___f_272_, v___x_276_);
return v___x_277_;
}
else
{
lean_object* v___x_278_; 
lean_dec(v___f_272_);
v___x_278_ = lean_apply_2(v_toPure_273_, lean_box(0), v_k_271_);
return v___x_278_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__2(lean_object* v_k_279_, lean_object* v___f_280_, lean_object* v_toPure_281_, lean_object* v_toBind_282_, lean_object* v_getEnv_283_, lean_object* v_____do__lift_284_){
_start:
{
lean_object* v_k_285_; lean_object* v___f_286_; lean_object* v___x_287_; 
v_k_285_ = l_Lean_mkPrivateName(v_____do__lift_284_, v_k_279_);
v___f_286_ = lean_alloc_closure((void*)(l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__1), 4, 3);
lean_closure_set(v___f_286_, 0, v_k_285_);
lean_closure_set(v___f_286_, 1, v___f_280_);
lean_closure_set(v___f_286_, 2, v_toPure_281_);
v___x_287_ = lean_apply_4(v_toBind_282_, lean_box(0), lean_box(0), v_getEnv_283_, v___f_286_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__2___boxed(lean_object* v_k_288_, lean_object* v___f_289_, lean_object* v_toPure_290_, lean_object* v_toBind_291_, lean_object* v_getEnv_292_, lean_object* v_____do__lift_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__2(v_k_288_, v___f_289_, v_toPure_290_, v_toBind_291_, v_getEnv_292_, v_____do__lift_293_);
lean_dec_ref(v_____do__lift_293_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__3(lean_object* v___f_295_, lean_object* v_k_296_, lean_object* v_toBind_297_, lean_object* v_getEnv_298_, lean_object* v___f_299_, lean_object* v_____do__lift_300_){
_start:
{
uint8_t v_isExporting_304_; 
v_isExporting_304_ = lean_ctor_get_uint8(v_____do__lift_300_, sizeof(void*)*13);
if (v_isExporting_304_ == 0)
{
uint8_t v___x_305_; 
v___x_305_ = l_Lean_isPrivateName(v_k_296_);
if (v___x_305_ == 0)
{
lean_object* v___x_306_; 
lean_dec(v___f_295_);
v___x_306_ = lean_apply_4(v_toBind_297_, lean_box(0), lean_box(0), v_getEnv_298_, v___f_299_);
return v___x_306_;
}
else
{
lean_dec(v___f_299_);
lean_dec(v_getEnv_298_);
lean_dec(v_toBind_297_);
goto v___jp_301_;
}
}
else
{
lean_dec(v___f_299_);
lean_dec(v_getEnv_298_);
lean_dec(v_toBind_297_);
goto v___jp_301_;
}
v___jp_301_:
{
lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_302_ = lean_box(0);
v___x_303_ = lean_apply_1(v___f_295_, v___x_302_);
return v___x_303_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__3___boxed(lean_object* v___f_307_, lean_object* v_k_308_, lean_object* v_toBind_309_, lean_object* v_getEnv_310_, lean_object* v___f_311_, lean_object* v_____do__lift_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__3(v___f_307_, v_k_308_, v_toBind_309_, v_getEnv_310_, v___f_311_, v_____do__lift_312_);
lean_dec_ref(v_____do__lift_312_);
lean_dec(v_k_308_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__4(lean_object* v_k_314_, lean_object* v___f_315_, lean_object* v_toBind_316_, lean_object* v_getEnv_317_, lean_object* v___f_318_, lean_object* v_toPure_319_, lean_object* v_____do__lift_320_){
_start:
{
uint8_t v___x_321_; 
lean_inc(v_k_314_);
v___x_321_ = l_Lean_Parser_isValidSyntaxNodeKind(v_____do__lift_320_, v_k_314_);
if (v___x_321_ == 0)
{
lean_object* v___f_322_; lean_object* v___x_323_; 
lean_dec(v_toPure_319_);
lean_inc(v_getEnv_317_);
lean_inc(v_toBind_316_);
v___f_322_ = lean_alloc_closure((void*)(l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__3___boxed), 6, 5);
lean_closure_set(v___f_322_, 0, v___f_315_);
lean_closure_set(v___f_322_, 1, v_k_314_);
lean_closure_set(v___f_322_, 2, v_toBind_316_);
lean_closure_set(v___f_322_, 3, v_getEnv_317_);
lean_closure_set(v___f_322_, 4, v___f_318_);
v___x_323_ = lean_apply_4(v_toBind_316_, lean_box(0), lean_box(0), v_getEnv_317_, v___f_322_);
return v___x_323_;
}
else
{
lean_object* v___x_324_; 
lean_dec(v___f_318_);
lean_dec(v_getEnv_317_);
lean_dec(v_toBind_316_);
lean_dec(v___f_315_);
v___x_324_ = lean_apply_2(v_toPure_319_, lean_box(0), v_k_314_);
return v___x_324_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___redArg(lean_object* v_inst_325_, lean_object* v_inst_326_, lean_object* v_inst_327_, lean_object* v_k_328_){
_start:
{
lean_object* v_toApplicative_329_; lean_object* v_toBind_330_; lean_object* v_getEnv_331_; lean_object* v_toPure_332_; lean_object* v___f_333_; lean_object* v___f_334_; lean_object* v___f_335_; lean_object* v___x_336_; 
v_toApplicative_329_ = lean_ctor_get(v_inst_325_, 0);
v_toBind_330_ = lean_ctor_get(v_inst_325_, 1);
lean_inc_n(v_toBind_330_, 3);
v_getEnv_331_ = lean_ctor_get(v_inst_326_, 0);
lean_inc_n(v_getEnv_331_, 3);
lean_dec_ref(v_inst_326_);
v_toPure_332_ = lean_ctor_get(v_toApplicative_329_, 1);
lean_inc_n(v_toPure_332_, 2);
v___f_333_ = lean_alloc_closure((void*)(l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0), 3, 2);
lean_closure_set(v___f_333_, 0, v_inst_325_);
lean_closure_set(v___f_333_, 1, v_inst_327_);
lean_inc_ref(v___f_333_);
lean_inc(v_k_328_);
v___f_334_ = lean_alloc_closure((void*)(l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__2___boxed), 6, 5);
lean_closure_set(v___f_334_, 0, v_k_328_);
lean_closure_set(v___f_334_, 1, v___f_333_);
lean_closure_set(v___f_334_, 2, v_toPure_332_);
lean_closure_set(v___f_334_, 3, v_toBind_330_);
lean_closure_set(v___f_334_, 4, v_getEnv_331_);
v___f_335_ = lean_alloc_closure((void*)(l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__4), 7, 6);
lean_closure_set(v___f_335_, 0, v_k_328_);
lean_closure_set(v___f_335_, 1, v___f_333_);
lean_closure_set(v___f_335_, 2, v_toBind_330_);
lean_closure_set(v___f_335_, 3, v_getEnv_331_);
lean_closure_set(v___f_335_, 4, v___f_334_);
lean_closure_set(v___f_335_, 5, v_toPure_332_);
v___x_336_ = lean_apply_4(v_toBind_330_, lean_box(0), lean_box(0), v_getEnv_331_, v___f_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind(lean_object* v_m_337_, lean_object* v_inst_338_, lean_object* v_inst_339_, lean_object* v_inst_340_, lean_object* v_k_341_){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = l_Lean_Elab_checkSyntaxNodeKind___redArg(v_inst_338_, v_inst_339_, v_inst_340_, v_k_341_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___redArg___lam__0___boxed(lean_object* v_inst_343_, lean_object* v_inst_344_, lean_object* v_inst_345_, lean_object* v_k_346_, lean_object* v_pre_347_, lean_object* v_x_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___redArg___lam__0(v_inst_343_, v_inst_344_, v_inst_345_, v_k_346_, v_pre_347_, v_x_348_);
lean_dec_ref(v_x_348_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___redArg(lean_object* v_inst_350_, lean_object* v_inst_351_, lean_object* v_inst_352_, lean_object* v_k_353_, lean_object* v_x_354_){
_start:
{
switch(lean_obj_tag(v_x_354_))
{
case 1:
{
lean_object* v_toMonadExceptOf_355_; lean_object* v_pre_356_; lean_object* v_tryCatch_357_; lean_object* v___f_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v_toMonadExceptOf_355_ = lean_ctor_get(v_inst_352_, 0);
v_pre_356_ = lean_ctor_get(v_x_354_, 0);
v_tryCatch_357_ = lean_ctor_get(v_toMonadExceptOf_355_, 1);
lean_inc(v_tryCatch_357_);
lean_inc(v_pre_356_);
lean_inc(v_k_353_);
lean_inc_ref(v_inst_352_);
lean_inc_ref(v_inst_351_);
lean_inc_ref(v_inst_350_);
v___f_358_ = lean_alloc_closure((void*)(l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_358_, 0, v_inst_350_);
lean_closure_set(v___f_358_, 1, v_inst_351_);
lean_closure_set(v___f_358_, 2, v_inst_352_);
lean_closure_set(v___f_358_, 3, v_k_353_);
lean_closure_set(v___f_358_, 4, v_pre_356_);
v___x_359_ = l_Lean_Name_append(v_x_354_, v_k_353_);
v___x_360_ = l_Lean_Elab_checkSyntaxNodeKind___redArg(v_inst_350_, v_inst_351_, v_inst_352_, v___x_359_);
v___x_361_ = lean_apply_3(v_tryCatch_357_, lean_box(0), v___x_360_, v___f_358_);
return v___x_361_;
}
case 0:
{
lean_object* v___x_362_; 
v___x_362_ = l_Lean_Elab_checkSyntaxNodeKind___redArg(v_inst_350_, v_inst_351_, v_inst_352_, v_k_353_);
return v___x_362_;
}
default: 
{
lean_object* v___x_363_; lean_object* v___x_364_; 
lean_dec(v_x_354_);
lean_dec(v_k_353_);
lean_dec_ref(v_inst_351_);
v___x_363_ = lean_obj_once(&l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1, &l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1);
v___x_364_ = l_Lean_throwError___redArg(v_inst_350_, v_inst_352_, v___x_363_);
return v___x_364_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___redArg___lam__0(lean_object* v_inst_365_, lean_object* v_inst_366_, lean_object* v_inst_367_, lean_object* v_k_368_, lean_object* v_pre_369_, lean_object* v_x_370_){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___redArg(v_inst_365_, v_inst_366_, v_inst_367_, v_k_368_, v_pre_369_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces(lean_object* v_m_372_, lean_object* v_inst_373_, lean_object* v_inst_374_, lean_object* v_inst_375_, lean_object* v_k_376_, lean_object* v_x_377_){
_start:
{
lean_object* v___x_378_; 
v___x_378_ = l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___redArg(v_inst_373_, v_inst_374_, v_inst_375_, v_k_376_, v_x_377_);
return v___x_378_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_379_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__1(void){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_380_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__0);
v___x_381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_381_, 0, v___x_380_);
return v___x_381_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__2(void){
_start:
{
lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_382_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_383_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__1);
v___x_384_ = lean_unsigned_to_nat(0u);
v___x_385_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_385_, 0, v___x_384_);
lean_ctor_set(v___x_385_, 1, v___x_384_);
lean_ctor_set(v___x_385_, 2, v___x_384_);
lean_ctor_set(v___x_385_, 3, v___x_384_);
lean_ctor_set(v___x_385_, 4, v___x_383_);
lean_ctor_set(v___x_385_, 5, v___x_383_);
lean_ctor_set(v___x_385_, 6, v___x_383_);
lean_ctor_set(v___x_385_, 7, v___x_383_);
lean_ctor_set(v___x_385_, 8, v___x_383_);
lean_ctor_set(v___x_385_, 9, v___x_383_);
lean_ctor_set(v___x_385_, 10, v___x_383_);
lean_ctor_set(v___x_385_, 11, v___x_382_);
return v___x_385_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__3(void){
_start:
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_386_ = lean_unsigned_to_nat(32u);
v___x_387_ = lean_mk_empty_array_with_capacity(v___x_386_);
v___x_388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_388_, 0, v___x_387_);
return v___x_388_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__4(void){
_start:
{
size_t v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_389_ = ((size_t)5ULL);
v___x_390_ = lean_unsigned_to_nat(0u);
v___x_391_ = lean_unsigned_to_nat(32u);
v___x_392_ = lean_mk_empty_array_with_capacity(v___x_391_);
v___x_393_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__3);
v___x_394_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_394_, 0, v___x_393_);
lean_ctor_set(v___x_394_, 1, v___x_392_);
lean_ctor_set(v___x_394_, 2, v___x_390_);
lean_ctor_set(v___x_394_, 3, v___x_390_);
lean_ctor_set_usize(v___x_394_, 4, v___x_389_);
return v___x_394_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__5(void){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_395_ = lean_box(1);
v___x_396_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__4);
v___x_397_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__1);
v___x_398_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_398_, 0, v___x_397_);
lean_ctor_set(v___x_398_, 1, v___x_396_);
lean_ctor_set(v___x_398_, 2, v___x_395_);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2(lean_object* v_msgData_399_, lean_object* v___y_400_, lean_object* v___y_401_){
_start:
{
lean_object* v___x_403_; lean_object* v_toCold_404_; lean_object* v_env_405_; lean_object* v_options_406_; uint8_t v___x_407_; lean_object* v_env_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_403_ = lean_st_ref_get(v___y_401_);
v_toCold_404_ = lean_ctor_get(v___y_400_, 0);
v_env_405_ = lean_ctor_get(v___x_403_, 0);
lean_inc_ref(v_env_405_);
lean_dec(v___x_403_);
v_options_406_ = lean_ctor_get(v_toCold_404_, 2);
v___x_407_ = 0;
v_env_408_ = l_Lean_Environment_setRecordingDeps(v_env_405_, v___x_407_);
v___x_409_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__2);
v___x_410_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__5);
lean_inc_ref(v_options_406_);
v___x_411_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_411_, 0, v_env_408_);
lean_ctor_set(v___x_411_, 1, v___x_409_);
lean_ctor_set(v___x_411_, 2, v___x_410_);
lean_ctor_set(v___x_411_, 3, v_options_406_);
v___x_412_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_412_, 0, v___x_411_);
lean_ctor_set(v___x_412_, 1, v_msgData_399_);
v___x_413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_413_, 0, v___x_412_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___boxed(lean_object* v_msgData_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2(v_msgData_414_, v___y_415_, v___y_416_);
lean_dec(v___y_416_);
lean_dec_ref(v___y_415_);
return v_res_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1___redArg(lean_object* v_msg_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
lean_object* v_ref_423_; lean_object* v___x_424_; lean_object* v_a_425_; lean_object* v___x_427_; uint8_t v_isShared_428_; uint8_t v_isSharedCheck_433_; 
v_ref_423_ = lean_ctor_get(v___y_420_, 2);
v___x_424_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2(v_msg_419_, v___y_420_, v___y_421_);
v_a_425_ = lean_ctor_get(v___x_424_, 0);
v_isSharedCheck_433_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_433_ == 0)
{
v___x_427_ = v___x_424_;
v_isShared_428_ = v_isSharedCheck_433_;
goto v_resetjp_426_;
}
else
{
lean_inc(v_a_425_);
lean_dec(v___x_424_);
v___x_427_ = lean_box(0);
v_isShared_428_ = v_isSharedCheck_433_;
goto v_resetjp_426_;
}
v_resetjp_426_:
{
lean_object* v___x_429_; lean_object* v___x_431_; 
lean_inc(v_ref_423_);
v___x_429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_429_, 0, v_ref_423_);
lean_ctor_set(v___x_429_, 1, v_a_425_);
if (v_isShared_428_ == 0)
{
lean_ctor_set_tag(v___x_427_, 1);
lean_ctor_set(v___x_427_, 0, v___x_429_);
v___x_431_ = v___x_427_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v___x_429_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1___redArg___boxed(lean_object* v_msg_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1___redArg(v_msg_434_, v___y_435_, v___y_436_);
lean_dec(v___y_436_);
lean_dec_ref(v___y_435_);
return v_res_438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__0(lean_object* v_k_439_, lean_object* v___y_440_, lean_object* v___y_441_){
_start:
{
lean_object* v___y_444_; lean_object* v___y_445_; lean_object* v___x_448_; lean_object* v_env_449_; uint8_t v___x_450_; 
v___x_448_ = lean_st_ref_get(v___y_441_);
v_env_449_ = lean_ctor_get(v___x_448_, 0);
lean_inc_ref(v_env_449_);
lean_dec(v___x_448_);
lean_inc(v_k_439_);
v___x_450_ = l_Lean_Parser_isValidSyntaxNodeKind(v_env_449_, v_k_439_);
if (v___x_450_ == 0)
{
lean_object* v___x_451_; lean_object* v_env_452_; uint8_t v_isExporting_453_; 
v___x_451_ = lean_st_ref_get(v___y_441_);
v_env_452_ = lean_ctor_get(v___x_451_, 0);
lean_inc_ref(v_env_452_);
lean_dec(v___x_451_);
v_isExporting_453_ = lean_ctor_get_uint8(v_env_452_, sizeof(void*)*13);
lean_dec_ref(v_env_452_);
if (v_isExporting_453_ == 0)
{
uint8_t v___x_454_; 
v___x_454_ = l_Lean_isPrivateName(v_k_439_);
if (v___x_454_ == 0)
{
lean_object* v___x_455_; lean_object* v_env_456_; lean_object* v_k_457_; lean_object* v___x_458_; lean_object* v_env_459_; uint8_t v___x_460_; 
v___x_455_ = lean_st_ref_get(v___y_441_);
v_env_456_ = lean_ctor_get(v___x_455_, 0);
lean_inc_ref(v_env_456_);
lean_dec(v___x_455_);
v_k_457_ = l_Lean_mkPrivateName(v_env_456_, v_k_439_);
lean_dec_ref(v_env_456_);
v___x_458_ = lean_st_ref_get(v___y_441_);
v_env_459_ = lean_ctor_get(v___x_458_, 0);
lean_inc_ref(v_env_459_);
lean_dec(v___x_458_);
lean_inc(v_k_457_);
v___x_460_ = l_Lean_Parser_isValidSyntaxNodeKind(v_env_459_, v_k_457_);
if (v___x_460_ == 0)
{
lean_dec(v_k_457_);
v___y_444_ = v___y_440_;
v___y_445_ = v___y_441_;
goto v___jp_443_;
}
else
{
lean_object* v___x_461_; 
v___x_461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_461_, 0, v_k_457_);
return v___x_461_;
}
}
else
{
lean_dec(v_k_439_);
v___y_444_ = v___y_440_;
v___y_445_ = v___y_441_;
goto v___jp_443_;
}
}
else
{
lean_dec(v_k_439_);
v___y_444_ = v___y_440_;
v___y_445_ = v___y_441_;
goto v___jp_443_;
}
}
else
{
lean_object* v___x_462_; 
v___x_462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_462_, 0, v_k_439_);
return v___x_462_;
}
v___jp_443_:
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = lean_obj_once(&l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1, &l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1);
v___x_447_ = l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1___redArg(v___x_446_, v___y_444_, v___y_445_);
return v___x_447_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKind___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__0___boxed(lean_object* v_k_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l_Lean_Elab_checkSyntaxNodeKind___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__0(v_k_463_, v___y_464_, v___y_465_);
lean_dec(v___y_465_);
lean_dec_ref(v___y_464_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0(lean_object* v_k_468_, lean_object* v_x_469_, lean_object* v___y_470_, lean_object* v___y_471_){
_start:
{
switch(lean_obj_tag(v_x_469_))
{
case 1:
{
lean_object* v_pre_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
v_pre_473_ = lean_ctor_get(v_x_469_, 0);
lean_inc(v_pre_473_);
lean_inc(v_k_468_);
v___x_474_ = l_Lean_Name_append(v_x_469_, v_k_468_);
v___x_475_ = l_Lean_Elab_checkSyntaxNodeKind___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__0(v___x_474_, v___y_470_, v___y_471_);
if (lean_obj_tag(v___x_475_) == 0)
{
lean_dec(v_pre_473_);
lean_dec(v_k_468_);
return v___x_475_;
}
else
{
lean_object* v_a_476_; uint8_t v___x_477_; 
v_a_476_ = lean_ctor_get(v___x_475_, 0);
v___x_477_ = l_Lean_Exception_isInterrupt(v_a_476_);
if (v___x_477_ == 0)
{
uint8_t v___x_478_; 
lean_inc(v_a_476_);
v___x_478_ = l_Lean_Exception_isRuntime(v_a_476_);
if (v___x_478_ == 0)
{
lean_dec_ref_known(v___x_475_, 1);
v_x_469_ = v_pre_473_;
goto _start;
}
else
{
lean_dec(v_pre_473_);
lean_dec(v_k_468_);
return v___x_475_;
}
}
else
{
lean_dec(v_pre_473_);
lean_dec(v_k_468_);
return v___x_475_;
}
}
}
case 0:
{
lean_object* v___x_480_; 
v___x_480_ = l_Lean_Elab_checkSyntaxNodeKind___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__0(v_k_468_, v___y_470_, v___y_471_);
return v___x_480_;
}
default: 
{
lean_object* v___x_481_; lean_object* v___x_482_; 
lean_dec(v_x_469_);
lean_dec(v_k_468_);
v___x_481_ = lean_obj_once(&l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1, &l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_checkSyntaxNodeKind___redArg___lam__0___closed__1);
v___x_482_ = l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1___redArg(v___x_481_, v___y_470_, v___y_471_);
return v___x_482_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0___boxed(lean_object* v_k_483_, lean_object* v_x_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0(v_k_483_, v_x_484_, v___y_485_, v___y_486_);
lean_dec(v___y_486_);
lean_dec_ref(v___y_485_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces(lean_object* v_k_489_, lean_object* v_a_490_, lean_object* v_a_491_){
_start:
{
lean_object* v_toCold_493_; lean_object* v_currNamespace_494_; lean_object* v___x_495_; 
v_toCold_493_ = lean_ctor_get(v_a_490_, 0);
v_currNamespace_494_ = lean_ctor_get(v_toCold_493_, 4);
lean_inc(v_currNamespace_494_);
v___x_495_ = l_Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0(v_k_489_, v_currNamespace_494_, v_a_490_, v_a_491_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces___boxed(lean_object* v_k_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = l_Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces(v_k_496_, v_a_497_, v_a_498_);
lean_dec(v_a_498_);
lean_dec_ref(v_a_497_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1(lean_object* v_00_u03b1_501_, lean_object* v_msg_502_, lean_object* v___y_503_, lean_object* v___y_504_){
_start:
{
lean_object* v___x_506_; 
v___x_506_ = l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1___redArg(v_msg_502_, v___y_503_, v___y_504_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1___boxed(lean_object* v_00_u03b1_507_, lean_object* v_msg_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_){
_start:
{
lean_object* v_res_512_; 
v_res_512_ = l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1(v_00_u03b1_507_, v_msg_508_, v___y_509_, v___y_510_);
lean_dec(v___y_510_);
lean_dec_ref(v___y_509_);
return v_res_512_;
}
}
static lean_object* _init_l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__1(void){
_start:
{
lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_514_ = ((lean_object*)(l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__0));
v___x_515_ = l_Lean_stringToMessageData(v___x_514_);
return v___x_515_;
}
}
static lean_object* _init_l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__3(void){
_start:
{
lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_517_ = ((lean_object*)(l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__2));
v___x_518_ = l_Lean_stringToMessageData(v___x_517_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_syntaxNodeKindOfAttrParam(lean_object* v_defaultParserNamespace_519_, lean_object* v_stx_520_, lean_object* v_a_521_, lean_object* v_a_522_){
_start:
{
lean_object* v___x_524_; 
v___x_524_ = l_Lean_Attribute_Builtin_getId(v_stx_520_, v_a_521_, v_a_522_);
if (lean_obj_tag(v___x_524_) == 0)
{
lean_object* v_a_525_; lean_object* v___x_526_; 
v_a_525_ = lean_ctor_get(v___x_524_, 0);
lean_inc_n(v_a_525_, 2);
lean_dec_ref_known(v___x_524_, 1);
v___x_526_ = l_Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces(v_a_525_, v_a_521_, v_a_522_);
if (lean_obj_tag(v___x_526_) == 0)
{
lean_dec(v_a_525_);
lean_dec(v_defaultParserNamespace_519_);
return v___x_526_;
}
else
{
lean_object* v_a_527_; uint8_t v___x_528_; 
v_a_527_ = lean_ctor_get(v___x_526_, 0);
v___x_528_ = l_Lean_Exception_isInterrupt(v_a_527_);
if (v___x_528_ == 0)
{
uint8_t v___x_529_; 
lean_inc(v_a_527_);
v___x_529_ = l_Lean_Exception_isRuntime(v_a_527_);
if (v___x_529_ == 0)
{
lean_object* v___x_530_; lean_object* v___x_531_; 
lean_dec_ref_known(v___x_526_, 1);
lean_inc(v_a_525_);
v___x_530_ = l_Lean_Name_append(v_defaultParserNamespace_519_, v_a_525_);
v___x_531_ = l_Lean_Elab_checkSyntaxNodeKind___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__0(v___x_530_, v_a_521_, v_a_522_);
if (lean_obj_tag(v___x_531_) == 0)
{
lean_dec(v_a_525_);
return v___x_531_;
}
else
{
lean_object* v_a_532_; uint8_t v___x_533_; 
v_a_532_ = lean_ctor_get(v___x_531_, 0);
v___x_533_ = l_Lean_Exception_isInterrupt(v_a_532_);
if (v___x_533_ == 0)
{
uint8_t v___x_534_; 
lean_inc(v_a_532_);
v___x_534_ = l_Lean_Exception_isRuntime(v_a_532_);
if (v___x_534_ == 0)
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
lean_dec_ref_known(v___x_531_, 1);
v___x_535_ = lean_obj_once(&l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__1, &l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__1_once, _init_l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__1);
v___x_536_ = l_Lean_MessageData_ofName(v_a_525_);
v___x_537_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_537_, 0, v___x_535_);
lean_ctor_set(v___x_537_, 1, v___x_536_);
v___x_538_ = lean_obj_once(&l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__3, &l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__3_once, _init_l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__3);
v___x_539_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_539_, 0, v___x_537_);
lean_ctor_set(v___x_539_, 1, v___x_538_);
v___x_540_ = l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1___redArg(v___x_539_, v_a_521_, v_a_522_);
return v___x_540_;
}
else
{
lean_dec(v_a_525_);
return v___x_531_;
}
}
else
{
lean_dec(v_a_525_);
return v___x_531_;
}
}
}
else
{
lean_dec(v_a_525_);
lean_dec(v_defaultParserNamespace_519_);
return v___x_526_;
}
}
else
{
lean_dec(v_a_525_);
lean_dec(v_defaultParserNamespace_519_);
return v___x_526_;
}
}
}
else
{
lean_dec(v_defaultParserNamespace_519_);
return v___x_524_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_syntaxNodeKindOfAttrParam___boxed(lean_object* v_defaultParserNamespace_541_, lean_object* v_stx_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Lean_Elab_syntaxNodeKindOfAttrParam(v_defaultParserNamespace_541_, v_stx_542_, v_a_543_, v_a_544_);
lean_dec(v_a_544_);
lean_dec_ref(v_a_543_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe(lean_object* v_env_551_, lean_object* v_opts_552_, lean_object* v_constName_553_){
_start:
{
lean_object* v___x_554_; lean_object* v___x_555_; 
v___x_554_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___closed__1));
v___x_555_ = l_Lean_Environment_evalConstCheck___redArg(v_env_551_, v_opts_552_, v___x_554_, v_constName_553_);
return v___x_555_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe___boxed(lean_object* v_env_556_, lean_object* v_opts_557_, lean_object* v_constName_558_){
_start:
{
lean_object* v_res_559_; 
v_res_559_ = l___private_Lean_Elab_Util_0__Lean_Elab_evalSyntaxConstantUnsafe(v_env_556_, v_opts_557_, v_constName_558_);
lean_dec_ref(v_opts_557_);
return v_res_559_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__10(void){
_start:
{
lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_584_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___auto__1___closed__8));
v___x_585_ = l_Lean_mkAtom(v___x_584_);
return v___x_585_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__11(void){
_start:
{
lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_586_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__10, &l_Lean_Elab_mkElabAttribute___auto__1___closed__10_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__10);
v___x_587_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___auto__1___closed__3));
v___x_588_ = lean_array_push(v___x_587_, v___x_586_);
return v___x_588_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__16(void){
_start:
{
lean_object* v___x_597_; lean_object* v___x_598_; 
v___x_597_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___auto__1___closed__15));
v___x_598_ = l_Lean_mkAtom(v___x_597_);
return v___x_598_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__17(void){
_start:
{
lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_599_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__16, &l_Lean_Elab_mkElabAttribute___auto__1___closed__16_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__16);
v___x_600_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___auto__1___closed__3));
v___x_601_ = lean_array_push(v___x_600_, v___x_599_);
return v___x_601_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__18(void){
_start:
{
lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_602_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__17, &l_Lean_Elab_mkElabAttribute___auto__1___closed__17_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__17);
v___x_603_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___auto__1___closed__14));
v___x_604_ = lean_box(2);
v___x_605_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_605_, 0, v___x_604_);
lean_ctor_set(v___x_605_, 1, v___x_603_);
lean_ctor_set(v___x_605_, 2, v___x_602_);
return v___x_605_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__19(void){
_start:
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; 
v___x_606_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__18, &l_Lean_Elab_mkElabAttribute___auto__1___closed__18_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__18);
v___x_607_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__11, &l_Lean_Elab_mkElabAttribute___auto__1___closed__11_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__11);
v___x_608_ = lean_array_push(v___x_607_, v___x_606_);
return v___x_608_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__20(void){
_start:
{
lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_609_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__19, &l_Lean_Elab_mkElabAttribute___auto__1___closed__19_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__19);
v___x_610_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___auto__1___closed__9));
v___x_611_ = lean_box(2);
v___x_612_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_612_, 0, v___x_611_);
lean_ctor_set(v___x_612_, 1, v___x_610_);
lean_ctor_set(v___x_612_, 2, v___x_609_);
return v___x_612_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__21(void){
_start:
{
lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_613_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__20, &l_Lean_Elab_mkElabAttribute___auto__1___closed__20_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__20);
v___x_614_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___auto__1___closed__3));
v___x_615_ = lean_array_push(v___x_614_, v___x_613_);
return v___x_615_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__22(void){
_start:
{
lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
v___x_616_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__21, &l_Lean_Elab_mkElabAttribute___auto__1___closed__21_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__21);
v___x_617_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___auto__1___closed__7));
v___x_618_ = lean_box(2);
v___x_619_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_619_, 0, v___x_618_);
lean_ctor_set(v___x_619_, 1, v___x_617_);
lean_ctor_set(v___x_619_, 2, v___x_616_);
return v___x_619_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__23(void){
_start:
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; 
v___x_620_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__22, &l_Lean_Elab_mkElabAttribute___auto__1___closed__22_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__22);
v___x_621_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___auto__1___closed__3));
v___x_622_ = lean_array_push(v___x_621_, v___x_620_);
return v___x_622_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__24(void){
_start:
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_623_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__23, &l_Lean_Elab_mkElabAttribute___auto__1___closed__23_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__23);
v___x_624_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___auto__1___closed__5));
v___x_625_ = lean_box(2);
v___x_626_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_626_, 0, v___x_625_);
lean_ctor_set(v___x_626_, 1, v___x_624_);
lean_ctor_set(v___x_626_, 2, v___x_623_);
return v___x_626_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__25(void){
_start:
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_627_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__24, &l_Lean_Elab_mkElabAttribute___auto__1___closed__24_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__24);
v___x_628_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___auto__1___closed__3));
v___x_629_ = lean_array_push(v___x_628_, v___x_627_);
return v___x_629_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__26(void){
_start:
{
lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
v___x_630_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__25, &l_Lean_Elab_mkElabAttribute___auto__1___closed__25_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__25);
v___x_631_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___auto__1___closed__2));
v___x_632_ = lean_box(2);
v___x_633_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_633_, 0, v___x_632_);
lean_ctor_set(v___x_633_, 1, v___x_631_);
lean_ctor_set(v___x_633_, 2, v___x_630_);
return v___x_633_;
}
}
static lean_object* _init_l_Lean_Elab_mkElabAttribute___auto__1(void){
_start:
{
lean_object* v___x_634_; 
v___x_634_ = lean_obj_once(&l_Lean_Elab_mkElabAttribute___auto__1___closed__26, &l_Lean_Elab_mkElabAttribute___auto__1___closed__26_once, _init_l_Lean_Elab_mkElabAttribute___auto__1___closed__26);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___redArg___lam__0(uint8_t v_builtin_635_, lean_object* v_declName_636_, lean_object* v_kind_637_, lean_object* v___y_638_, lean_object* v___y_639_){
_start:
{
if (v_builtin_635_ == 0)
{
lean_object* v___x_641_; lean_object* v___x_642_; 
lean_dec(v_declName_636_);
v___x_641_ = lean_box(0);
v___x_642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
return v___x_642_;
}
else
{
lean_object* v___x_643_; 
v___x_643_ = l_Lean_declareBuiltinDocStringAndRanges(v_declName_636_, v___y_638_, v___y_639_);
return v___x_643_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___redArg___lam__0___boxed(lean_object* v_builtin_644_, lean_object* v_declName_645_, lean_object* v_kind_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_){
_start:
{
uint8_t v_builtin_boxed_650_; lean_object* v_res_651_; 
v_builtin_boxed_650_ = lean_unbox(v_builtin_644_);
v_res_651_ = l_Lean_Elab_mkElabAttribute___redArg___lam__0(v_builtin_boxed_650_, v_declName_645_, v_kind_646_, v___y_647_, v___y_648_);
lean_dec(v___y_648_);
lean_dec_ref(v___y_647_);
lean_dec(v_kind_646_);
return v_res_651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5_spec__12___redArg(lean_object* v_t_652_, lean_object* v___y_653_){
_start:
{
lean_object* v___x_655_; lean_object* v_infoState_656_; uint8_t v_enabled_657_; 
v___x_655_ = lean_st_ref_get(v___y_653_);
v_infoState_656_ = lean_ctor_get(v___x_655_, 8);
lean_inc_ref(v_infoState_656_);
lean_dec(v___x_655_);
v_enabled_657_ = lean_ctor_get_uint8(v_infoState_656_, sizeof(void*)*3);
lean_dec_ref(v_infoState_656_);
if (v_enabled_657_ == 0)
{
lean_object* v___x_658_; lean_object* v___x_659_; 
lean_dec_ref(v_t_652_);
v___x_658_ = lean_box(0);
v___x_659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_659_, 0, v___x_658_);
return v___x_659_;
}
else
{
lean_object* v___x_660_; lean_object* v_infoState_661_; lean_object* v_env_662_; lean_object* v_nextMacroScope_663_; lean_object* v_ngen_664_; lean_object* v_auxDeclNGen_665_; lean_object* v_traceState_666_; lean_object* v_cache_667_; lean_object* v_recordedDeps_668_; lean_object* v_messages_669_; lean_object* v_snapshotTasks_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_692_; 
v___x_660_ = lean_st_ref_take(v___y_653_);
v_infoState_661_ = lean_ctor_get(v___x_660_, 8);
v_env_662_ = lean_ctor_get(v___x_660_, 0);
v_nextMacroScope_663_ = lean_ctor_get(v___x_660_, 1);
v_ngen_664_ = lean_ctor_get(v___x_660_, 2);
v_auxDeclNGen_665_ = lean_ctor_get(v___x_660_, 3);
v_traceState_666_ = lean_ctor_get(v___x_660_, 4);
v_cache_667_ = lean_ctor_get(v___x_660_, 5);
v_recordedDeps_668_ = lean_ctor_get(v___x_660_, 6);
v_messages_669_ = lean_ctor_get(v___x_660_, 7);
v_snapshotTasks_670_ = lean_ctor_get(v___x_660_, 9);
v_isSharedCheck_692_ = !lean_is_exclusive(v___x_660_);
if (v_isSharedCheck_692_ == 0)
{
v___x_672_ = v___x_660_;
v_isShared_673_ = v_isSharedCheck_692_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_snapshotTasks_670_);
lean_inc(v_infoState_661_);
lean_inc(v_messages_669_);
lean_inc(v_recordedDeps_668_);
lean_inc(v_cache_667_);
lean_inc(v_traceState_666_);
lean_inc(v_auxDeclNGen_665_);
lean_inc(v_ngen_664_);
lean_inc(v_nextMacroScope_663_);
lean_inc(v_env_662_);
lean_dec(v___x_660_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_692_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
uint8_t v_enabled_674_; lean_object* v_assignment_675_; lean_object* v_lazyAssignment_676_; lean_object* v_trees_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_691_; 
v_enabled_674_ = lean_ctor_get_uint8(v_infoState_661_, sizeof(void*)*3);
v_assignment_675_ = lean_ctor_get(v_infoState_661_, 0);
v_lazyAssignment_676_ = lean_ctor_get(v_infoState_661_, 1);
v_trees_677_ = lean_ctor_get(v_infoState_661_, 2);
v_isSharedCheck_691_ = !lean_is_exclusive(v_infoState_661_);
if (v_isSharedCheck_691_ == 0)
{
v___x_679_ = v_infoState_661_;
v_isShared_680_ = v_isSharedCheck_691_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_trees_677_);
lean_inc(v_lazyAssignment_676_);
lean_inc(v_assignment_675_);
lean_dec(v_infoState_661_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_691_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_684_; 
v___x_681_ = lean_box(0);
v___x_682_ = l_Lean_PersistentArray_push___redArg(v_trees_677_, v_t_652_);
if (v_isShared_680_ == 0)
{
lean_ctor_set(v___x_679_, 2, v___x_682_);
v___x_684_ = v___x_679_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v_assignment_675_);
lean_ctor_set(v_reuseFailAlloc_690_, 1, v_lazyAssignment_676_);
lean_ctor_set(v_reuseFailAlloc_690_, 2, v___x_682_);
lean_ctor_set_uint8(v_reuseFailAlloc_690_, sizeof(void*)*3, v_enabled_674_);
v___x_684_ = v_reuseFailAlloc_690_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
lean_object* v___x_686_; 
if (v_isShared_673_ == 0)
{
lean_ctor_set(v___x_672_, 8, v___x_684_);
v___x_686_ = v___x_672_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v_env_662_);
lean_ctor_set(v_reuseFailAlloc_689_, 1, v_nextMacroScope_663_);
lean_ctor_set(v_reuseFailAlloc_689_, 2, v_ngen_664_);
lean_ctor_set(v_reuseFailAlloc_689_, 3, v_auxDeclNGen_665_);
lean_ctor_set(v_reuseFailAlloc_689_, 4, v_traceState_666_);
lean_ctor_set(v_reuseFailAlloc_689_, 5, v_cache_667_);
lean_ctor_set(v_reuseFailAlloc_689_, 6, v_recordedDeps_668_);
lean_ctor_set(v_reuseFailAlloc_689_, 7, v_messages_669_);
lean_ctor_set(v_reuseFailAlloc_689_, 8, v___x_684_);
lean_ctor_set(v_reuseFailAlloc_689_, 9, v_snapshotTasks_670_);
v___x_686_ = v_reuseFailAlloc_689_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_687_ = lean_st_ref_put(v___y_653_, v___x_686_);
v___x_688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_688_, 0, v___x_681_);
return v___x_688_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5_spec__12___redArg___boxed(lean_object* v_t_693_, lean_object* v___y_694_, lean_object* v___y_695_){
_start:
{
lean_object* v_res_696_; 
v_res_696_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5_spec__12___redArg(v_t_693_, v___y_694_);
lean_dec(v___y_694_);
return v_res_696_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___closed__0(void){
_start:
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_697_ = lean_unsigned_to_nat(32u);
v___x_698_ = lean_mk_empty_array_with_capacity(v___x_697_);
v___x_699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_699_, 0, v___x_698_);
return v___x_699_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___closed__1(void){
_start:
{
size_t v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_700_ = ((size_t)5ULL);
v___x_701_ = lean_unsigned_to_nat(0u);
v___x_702_ = lean_unsigned_to_nat(32u);
v___x_703_ = lean_mk_empty_array_with_capacity(v___x_702_);
v___x_704_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___closed__0);
v___x_705_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_705_, 0, v___x_704_);
lean_ctor_set(v___x_705_, 1, v___x_703_);
lean_ctor_set(v___x_705_, 2, v___x_701_);
lean_ctor_set(v___x_705_, 3, v___x_701_);
lean_ctor_set_usize(v___x_705_, 4, v___x_700_);
return v___x_705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5(lean_object* v_t_706_, lean_object* v___y_707_, lean_object* v___y_708_){
_start:
{
lean_object* v___x_710_; lean_object* v_infoState_711_; uint8_t v_enabled_712_; 
v___x_710_ = lean_st_ref_get(v___y_708_);
v_infoState_711_ = lean_ctor_get(v___x_710_, 8);
lean_inc_ref(v_infoState_711_);
lean_dec(v___x_710_);
v_enabled_712_ = lean_ctor_get_uint8(v_infoState_711_, sizeof(void*)*3);
lean_dec_ref(v_infoState_711_);
if (v_enabled_712_ == 0)
{
lean_object* v___x_713_; lean_object* v___x_714_; 
lean_dec_ref(v_t_706_);
v___x_713_ = lean_box(0);
v___x_714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_714_, 0, v___x_713_);
return v___x_714_;
}
else
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_715_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___closed__1);
v___x_716_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_716_, 0, v_t_706_);
lean_ctor_set(v___x_716_, 1, v___x_715_);
v___x_717_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5_spec__12___redArg(v___x_716_, v___y_708_);
return v___x_717_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5___boxed(lean_object* v_t_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5(v_t_718_, v___y_719_, v___y_720_);
lean_dec(v___y_720_);
lean_dec_ref(v___y_719_);
return v_res_722_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__1(void){
_start:
{
lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_724_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__0));
v___x_725_ = l_Lean_stringToMessageData(v___x_724_);
return v___x_725_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__3(void){
_start:
{
lean_object* v___x_727_; lean_object* v___x_728_; 
v___x_727_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__2));
v___x_728_ = l_Lean_stringToMessageData(v___x_727_);
return v___x_728_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__5(void){
_start:
{
lean_object* v___x_730_; lean_object* v___x_731_; 
v___x_730_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__4));
v___x_731_ = l_Lean_stringToMessageData(v___x_730_);
return v___x_731_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__7(void){
_start:
{
lean_object* v___x_733_; lean_object* v___x_734_; 
v___x_733_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__6));
v___x_734_ = l_Lean_stringToMessageData(v___x_733_);
return v___x_734_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__9(void){
_start:
{
lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_736_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__8));
v___x_737_ = l_Lean_stringToMessageData(v___x_736_);
return v___x_737_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__11(void){
_start:
{
lean_object* v___x_739_; lean_object* v___x_740_; 
v___x_739_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__10));
v___x_740_ = l_Lean_stringToMessageData(v___x_739_);
return v___x_740_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__13(void){
_start:
{
lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_742_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__12));
v___x_743_ = l_Lean_stringToMessageData(v___x_742_);
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg(lean_object* v_msg_744_, lean_object* v_declHint_745_, lean_object* v___y_746_){
_start:
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v_env_750_; uint8_t v___x_751_; 
v___x_748_ = lean_box(0);
v___x_749_ = lean_st_ref_get(v___y_746_);
v_env_750_ = lean_ctor_get(v___x_749_, 0);
lean_inc_ref(v_env_750_);
lean_dec(v___x_749_);
v___x_751_ = l_Lean_Name_isAnonymous(v_declHint_745_);
if (v___x_751_ == 0)
{
uint8_t v_isExporting_752_; 
v_isExporting_752_ = lean_ctor_get_uint8(v_env_750_, sizeof(void*)*13);
if (v_isExporting_752_ == 0)
{
lean_object* v___x_753_; 
lean_dec_ref(v_env_750_);
lean_dec(v_declHint_745_);
v___x_753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_753_, 0, v_msg_744_);
return v___x_753_;
}
else
{
lean_object* v___x_754_; uint8_t v___x_755_; 
lean_inc_ref(v_env_750_);
v___x_754_ = l_Lean_Environment_setExporting(v_env_750_, v___x_751_);
lean_inc(v_declHint_745_);
lean_inc_ref(v___x_754_);
v___x_755_ = l_Lean_Environment_contains(v___x_754_, v_declHint_745_, v_isExporting_752_);
if (v___x_755_ == 0)
{
lean_object* v___x_756_; 
lean_dec_ref(v___x_754_);
lean_dec_ref(v_env_750_);
lean_dec(v_declHint_745_);
v___x_756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_756_, 0, v_msg_744_);
return v___x_756_;
}
else
{
lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v_c_762_; lean_object* v___x_763_; 
v___x_757_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__2);
v___x_758_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__5);
v___x_759_ = l_Lean_Options_empty;
v___x_760_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_760_, 0, v___x_754_);
lean_ctor_set(v___x_760_, 1, v___x_757_);
lean_ctor_set(v___x_760_, 2, v___x_758_);
lean_ctor_set(v___x_760_, 3, v___x_759_);
lean_inc(v_declHint_745_);
v___x_761_ = l_Lean_MessageData_ofConstName(v_declHint_745_, v___x_751_);
v_c_762_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_762_, 0, v___x_760_);
lean_ctor_set(v_c_762_, 1, v___x_761_);
v___x_763_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_750_, v_declHint_745_);
if (lean_obj_tag(v___x_763_) == 0)
{
lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
lean_dec_ref(v_env_750_);
lean_dec(v_declHint_745_);
v___x_764_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__1);
v___x_765_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_765_, 0, v___x_764_);
lean_ctor_set(v___x_765_, 1, v_c_762_);
v___x_766_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__3);
v___x_767_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_767_, 0, v___x_765_);
lean_ctor_set(v___x_767_, 1, v___x_766_);
v___x_768_ = l_Lean_MessageData_note(v___x_767_);
v___x_769_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_769_, 0, v_msg_744_);
lean_ctor_set(v___x_769_, 1, v___x_768_);
v___x_770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_770_, 0, v___x_769_);
return v___x_770_;
}
else
{
lean_object* v_val_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_805_; 
v_val_771_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_805_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_805_ == 0)
{
v___x_773_ = v___x_763_;
v_isShared_774_ = v_isSharedCheck_805_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_val_771_);
lean_dec(v___x_763_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_805_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_775_; lean_object* v_moduleNames_776_; lean_object* v_mod_777_; uint8_t v___x_778_; 
v___x_775_ = l_Lean_Environment_header(v_env_750_);
lean_dec_ref(v_env_750_);
v_moduleNames_776_ = lean_ctor_get(v___x_775_, 4);
lean_inc_ref(v_moduleNames_776_);
lean_dec_ref(v___x_775_);
v_mod_777_ = lean_array_get(v___x_748_, v_moduleNames_776_, v_val_771_);
lean_dec(v_val_771_);
lean_dec_ref(v_moduleNames_776_);
v___x_778_ = l_Lean_isPrivateName(v_declHint_745_);
lean_dec(v_declHint_745_);
if (v___x_778_ == 0)
{
lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_790_; 
v___x_779_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__5);
v___x_780_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_780_, 0, v___x_779_);
lean_ctor_set(v___x_780_, 1, v_c_762_);
v___x_781_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__7);
v___x_782_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_782_, 0, v___x_780_);
lean_ctor_set(v___x_782_, 1, v___x_781_);
v___x_783_ = l_Lean_MessageData_ofName(v_mod_777_);
v___x_784_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_784_, 0, v___x_782_);
lean_ctor_set(v___x_784_, 1, v___x_783_);
v___x_785_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__9);
v___x_786_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_786_, 0, v___x_784_);
lean_ctor_set(v___x_786_, 1, v___x_785_);
v___x_787_ = l_Lean_MessageData_note(v___x_786_);
v___x_788_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_788_, 0, v_msg_744_);
lean_ctor_set(v___x_788_, 1, v___x_787_);
if (v_isShared_774_ == 0)
{
lean_ctor_set_tag(v___x_773_, 0);
lean_ctor_set(v___x_773_, 0, v___x_788_);
v___x_790_ = v___x_773_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v___x_788_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
return v___x_790_;
}
}
else
{
lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_803_; 
v___x_792_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__1);
v___x_793_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_793_, 0, v___x_792_);
lean_ctor_set(v___x_793_, 1, v_c_762_);
v___x_794_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__11);
v___x_795_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_795_, 0, v___x_793_);
lean_ctor_set(v___x_795_, 1, v___x_794_);
v___x_796_ = l_Lean_MessageData_ofName(v_mod_777_);
v___x_797_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_797_, 0, v___x_795_);
lean_ctor_set(v___x_797_, 1, v___x_796_);
v___x_798_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___closed__13);
v___x_799_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_799_, 0, v___x_797_);
lean_ctor_set(v___x_799_, 1, v___x_798_);
v___x_800_ = l_Lean_MessageData_note(v___x_799_);
v___x_801_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_801_, 0, v_msg_744_);
lean_ctor_set(v___x_801_, 1, v___x_800_);
if (v_isShared_774_ == 0)
{
lean_ctor_set_tag(v___x_773_, 0);
lean_ctor_set(v___x_773_, 0, v___x_801_);
v___x_803_ = v___x_773_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v___x_801_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_806_; 
lean_dec_ref(v_env_750_);
lean_dec(v_declHint_745_);
v___x_806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_806_, 0, v_msg_744_);
return v___x_806_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg___boxed(lean_object* v_msg_807_, lean_object* v_declHint_808_, lean_object* v___y_809_, lean_object* v___y_810_){
_start:
{
lean_object* v_res_811_; 
v_res_811_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg(v_msg_807_, v_declHint_808_, v___y_809_);
lean_dec(v___y_809_);
return v_res_811_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22(lean_object* v_msg_812_, lean_object* v_declHint_813_, lean_object* v___y_814_, lean_object* v___y_815_){
_start:
{
lean_object* v___x_817_; lean_object* v_a_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_827_; 
v___x_817_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg(v_msg_812_, v_declHint_813_, v___y_815_);
v_a_818_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_827_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_827_ == 0)
{
v___x_820_ = v___x_817_;
v_isShared_821_ = v_isSharedCheck_827_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_a_818_);
lean_dec(v___x_817_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_827_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_825_; 
v___x_822_ = l_Lean_unknownIdentifierMessageTag;
v___x_823_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_823_, 0, v___x_822_);
lean_ctor_set(v___x_823_, 1, v_a_818_);
if (v_isShared_821_ == 0)
{
lean_ctor_set(v___x_820_, 0, v___x_823_);
v___x_825_ = v___x_820_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v___x_823_);
v___x_825_ = v_reuseFailAlloc_826_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
return v___x_825_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22___boxed(lean_object* v_msg_828_, lean_object* v_declHint_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_){
_start:
{
lean_object* v_res_833_; 
v_res_833_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22(v_msg_828_, v_declHint_829_, v___y_830_, v___y_831_);
lean_dec(v___y_831_);
lean_dec_ref(v___y_830_);
return v_res_833_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__23___redArg(lean_object* v_ref_834_, lean_object* v_msg_835_, lean_object* v___y_836_, lean_object* v___y_837_){
_start:
{
lean_object* v_toCold_839_; lean_object* v_currRecDepth_840_; lean_object* v_ref_841_; uint16_t v_optionFlags_842_; uint8_t v_suppressElabErrors_843_; uint8_t v_isRecordingDeps_844_; lean_object* v_ref_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v_toCold_839_ = lean_ctor_get(v___y_836_, 0);
v_currRecDepth_840_ = lean_ctor_get(v___y_836_, 1);
v_ref_841_ = lean_ctor_get(v___y_836_, 2);
v_optionFlags_842_ = lean_ctor_get_uint16(v___y_836_, sizeof(void*)*3);
v_suppressElabErrors_843_ = lean_ctor_get_uint8(v___y_836_, sizeof(void*)*3 + 2);
v_isRecordingDeps_844_ = lean_ctor_get_uint8(v___y_836_, sizeof(void*)*3 + 3);
v_ref_845_ = l_Lean_replaceRef(v_ref_834_, v_ref_841_);
lean_inc(v_currRecDepth_840_);
lean_inc_ref(v_toCold_839_);
v___x_846_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_846_, 0, v_toCold_839_);
lean_ctor_set(v___x_846_, 1, v_currRecDepth_840_);
lean_ctor_set(v___x_846_, 2, v_ref_845_);
lean_ctor_set_uint16(v___x_846_, sizeof(void*)*3, v_optionFlags_842_);
lean_ctor_set_uint8(v___x_846_, sizeof(void*)*3 + 2, v_suppressElabErrors_843_);
lean_ctor_set_uint8(v___x_846_, sizeof(void*)*3 + 3, v_isRecordingDeps_844_);
v___x_847_ = l_Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1___redArg(v_msg_835_, v___x_846_, v___y_837_);
lean_dec_ref_known(v___x_846_, 3);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__23___redArg___boxed(lean_object* v_ref_848_, lean_object* v_msg_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__23___redArg(v_ref_848_, v_msg_849_, v___y_850_, v___y_851_);
lean_dec(v___y_851_);
lean_dec_ref(v___y_850_);
lean_dec(v_ref_848_);
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21___redArg(lean_object* v_ref_854_, lean_object* v_msg_855_, lean_object* v_declHint_856_, lean_object* v___y_857_, lean_object* v___y_858_){
_start:
{
lean_object* v___x_860_; lean_object* v_a_861_; lean_object* v___x_862_; 
v___x_860_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22(v_msg_855_, v_declHint_856_, v___y_857_, v___y_858_);
v_a_861_ = lean_ctor_get(v___x_860_, 0);
lean_inc(v_a_861_);
lean_dec_ref(v___x_860_);
v___x_862_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__23___redArg(v_ref_854_, v_a_861_, v___y_857_, v___y_858_);
return v___x_862_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21___redArg___boxed(lean_object* v_ref_863_, lean_object* v_msg_864_, lean_object* v_declHint_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_){
_start:
{
lean_object* v_res_869_; 
v_res_869_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21___redArg(v_ref_863_, v_msg_864_, v_declHint_865_, v___y_866_, v___y_867_);
lean_dec(v___y_867_);
lean_dec_ref(v___y_866_);
lean_dec(v_ref_863_);
return v_res_869_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18___redArg___closed__1(void){
_start:
{
lean_object* v___x_871_; lean_object* v___x_872_; 
v___x_871_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18___redArg___closed__0));
v___x_872_ = l_Lean_stringToMessageData(v___x_871_);
return v___x_872_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18___redArg(lean_object* v_ref_873_, lean_object* v_constName_874_, lean_object* v___y_875_, lean_object* v___y_876_){
_start:
{
lean_object* v___x_878_; uint8_t v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; 
v___x_878_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18___redArg___closed__1);
v___x_879_ = 0;
lean_inc(v_constName_874_);
v___x_880_ = l_Lean_MessageData_ofConstName(v_constName_874_, v___x_879_);
v___x_881_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_881_, 0, v___x_878_);
lean_ctor_set(v___x_881_, 1, v___x_880_);
v___x_882_ = lean_obj_once(&l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__3, &l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__3_once, _init_l_Lean_Elab_syntaxNodeKindOfAttrParam___closed__3);
v___x_883_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_883_, 0, v___x_881_);
lean_ctor_set(v___x_883_, 1, v___x_882_);
v___x_884_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21___redArg(v_ref_873_, v___x_883_, v_constName_874_, v___y_875_, v___y_876_);
return v___x_884_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18___redArg___boxed(lean_object* v_ref_885_, lean_object* v_constName_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_){
_start:
{
lean_object* v_res_890_; 
v_res_890_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18___redArg(v_ref_885_, v_constName_886_, v___y_887_, v___y_888_);
lean_dec(v___y_888_);
lean_dec_ref(v___y_887_);
lean_dec(v_ref_885_);
return v_res_890_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13___redArg(lean_object* v_constName_891_, lean_object* v___y_892_, lean_object* v___y_893_){
_start:
{
lean_object* v_ref_895_; lean_object* v___x_896_; 
v_ref_895_ = lean_ctor_get(v___y_892_, 2);
v___x_896_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18___redArg(v_ref_895_, v_constName_891_, v___y_892_, v___y_893_);
return v___x_896_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13___redArg___boxed(lean_object* v_constName_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13___redArg(v_constName_897_, v___y_898_, v___y_899_);
lean_dec(v___y_899_);
lean_dec_ref(v___y_898_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9(lean_object* v_constName_902_, lean_object* v___y_903_, lean_object* v___y_904_){
_start:
{
lean_object* v___x_906_; lean_object* v_env_907_; uint8_t v___x_908_; lean_object* v___x_909_; 
v___x_906_ = lean_st_ref_get(v___y_904_);
v_env_907_ = lean_ctor_get(v___x_906_, 0);
lean_inc_ref(v_env_907_);
lean_dec(v___x_906_);
v___x_908_ = 0;
lean_inc(v_constName_902_);
v___x_909_ = l_Lean_Environment_findConstVal_x3f(v_env_907_, v_constName_902_, v___x_908_);
if (lean_obj_tag(v___x_909_) == 0)
{
lean_object* v___x_910_; 
v___x_910_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13___redArg(v_constName_902_, v___y_903_, v___y_904_);
return v___x_910_;
}
else
{
lean_object* v_val_911_; lean_object* v___x_913_; uint8_t v_isShared_914_; uint8_t v_isSharedCheck_918_; 
lean_dec(v_constName_902_);
v_val_911_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_918_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_918_ == 0)
{
v___x_913_ = v___x_909_;
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
else
{
lean_inc(v_val_911_);
lean_dec(v___x_909_);
v___x_913_ = lean_box(0);
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
v_resetjp_912_:
{
lean_object* v___x_916_; 
if (v_isShared_914_ == 0)
{
lean_ctor_set_tag(v___x_913_, 0);
v___x_916_ = v___x_913_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v_val_911_);
v___x_916_ = v_reuseFailAlloc_917_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
return v___x_916_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9___boxed(lean_object* v_constName_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9(v_constName_919_, v___y_920_, v___y_921_);
lean_dec(v___y_921_);
lean_dec_ref(v___y_920_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__10(lean_object* v_a_924_, lean_object* v_a_925_){
_start:
{
if (lean_obj_tag(v_a_924_) == 0)
{
lean_object* v___x_926_; 
v___x_926_ = l_List_reverse___redArg(v_a_925_);
return v___x_926_;
}
else
{
lean_object* v_head_927_; lean_object* v_tail_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_937_; 
v_head_927_ = lean_ctor_get(v_a_924_, 0);
v_tail_928_ = lean_ctor_get(v_a_924_, 1);
v_isSharedCheck_937_ = !lean_is_exclusive(v_a_924_);
if (v_isSharedCheck_937_ == 0)
{
v___x_930_ = v_a_924_;
v_isShared_931_ = v_isSharedCheck_937_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_tail_928_);
lean_inc(v_head_927_);
lean_dec(v_a_924_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_937_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_932_; lean_object* v___x_934_; 
v___x_932_ = l_Lean_mkLevelParam(v_head_927_);
if (v_isShared_931_ == 0)
{
lean_ctor_set(v___x_930_, 1, v_a_925_);
lean_ctor_set(v___x_930_, 0, v___x_932_);
v___x_934_ = v___x_930_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v___x_932_);
lean_ctor_set(v_reuseFailAlloc_936_, 1, v_a_925_);
v___x_934_ = v_reuseFailAlloc_936_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
v_a_924_ = v_tail_928_;
v_a_925_ = v___x_934_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4(lean_object* v_constName_938_, lean_object* v___y_939_, lean_object* v___y_940_){
_start:
{
lean_object* v___x_942_; 
lean_inc(v_constName_938_);
v___x_942_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9(v_constName_938_, v___y_939_, v___y_940_);
if (lean_obj_tag(v___x_942_) == 0)
{
lean_object* v_a_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_954_; 
v_a_943_ = lean_ctor_get(v___x_942_, 0);
v_isSharedCheck_954_ = !lean_is_exclusive(v___x_942_);
if (v_isSharedCheck_954_ == 0)
{
v___x_945_ = v___x_942_;
v_isShared_946_ = v_isSharedCheck_954_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_a_943_);
lean_dec(v___x_942_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_954_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v_levelParams_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_952_; 
v_levelParams_947_ = lean_ctor_get(v_a_943_, 1);
lean_inc(v_levelParams_947_);
lean_dec(v_a_943_);
v___x_948_ = lean_box(0);
v___x_949_ = l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__10(v_levelParams_947_, v___x_948_);
v___x_950_ = l_Lean_mkConst(v_constName_938_, v___x_949_);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 0, v___x_950_);
v___x_952_ = v___x_945_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v___x_950_);
v___x_952_ = v_reuseFailAlloc_953_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
return v___x_952_;
}
}
}
else
{
lean_object* v_a_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_962_; 
lean_dec(v_constName_938_);
v_a_955_ = lean_ctor_get(v___x_942_, 0);
v_isSharedCheck_962_ = !lean_is_exclusive(v___x_942_);
if (v_isSharedCheck_962_ == 0)
{
v___x_957_ = v___x_942_;
v_isShared_958_ = v_isSharedCheck_962_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_a_955_);
lean_dec(v___x_942_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_962_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v___x_960_; 
if (v_isShared_958_ == 0)
{
v___x_960_ = v___x_957_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v_a_955_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4___boxed(lean_object* v_constName_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_){
_start:
{
lean_object* v_res_967_; 
v_res_967_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4(v_constName_963_, v___y_964_, v___y_965_);
lean_dec(v___y_965_);
lean_dec_ref(v___y_964_);
return v_res_967_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1(lean_object* v_stx_968_, lean_object* v_n_969_, lean_object* v_expectedType_x3f_970_, lean_object* v___y_971_, lean_object* v___y_972_){
_start:
{
lean_object* v___x_974_; 
v___x_974_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4(v_n_969_, v___y_971_, v___y_972_);
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v_a_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; uint8_t v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; 
v_a_975_ = lean_ctor_get(v___x_974_, 0);
lean_inc(v_a_975_);
lean_dec_ref_known(v___x_974_, 1);
v___x_976_ = lean_box(0);
v___x_977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_977_, 0, v___x_976_);
lean_ctor_set(v___x_977_, 1, v_stx_968_);
v___x_978_ = l_Lean_LocalContext_empty;
v___x_979_ = 0;
v___x_980_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_980_, 0, v___x_977_);
lean_ctor_set(v___x_980_, 1, v___x_978_);
lean_ctor_set(v___x_980_, 2, v_expectedType_x3f_970_);
lean_ctor_set(v___x_980_, 3, v_a_975_);
lean_ctor_set_uint8(v___x_980_, sizeof(void*)*4, v___x_979_);
lean_ctor_set_uint8(v___x_980_, sizeof(void*)*4 + 1, v___x_979_);
v___x_981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_981_, 0, v___x_980_);
v___x_982_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5(v___x_981_, v___y_971_, v___y_972_);
return v___x_982_;
}
else
{
lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_990_; 
lean_dec(v_expectedType_x3f_970_);
lean_dec(v_stx_968_);
v_a_983_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_990_ == 0)
{
v___x_985_ = v___x_974_;
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_dec(v___x_974_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_988_; 
if (v_isShared_986_ == 0)
{
v___x_988_ = v___x_985_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_a_983_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1___boxed(lean_object* v_stx_991_, lean_object* v_n_992_, lean_object* v_expectedType_x3f_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_){
_start:
{
lean_object* v_res_997_; 
v_res_997_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1(v_stx_991_, v_n_992_, v_expectedType_x3f_993_, v___y_994_, v___y_995_);
lean_dec(v___y_995_);
lean_dec_ref(v___y_994_);
return v_res_997_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___lam__0(lean_object* v___x_998_, lean_object* v_entry_999_, lean_object* v_s_1000_){
_start:
{
lean_object* v_addEntryFn_1001_; lean_object* v_importedEntries_1002_; lean_object* v_state_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1011_; 
v_addEntryFn_1001_ = lean_ctor_get(v___x_998_, 3);
lean_inc(v_addEntryFn_1001_);
lean_dec_ref(v___x_998_);
v_importedEntries_1002_ = lean_ctor_get(v_s_1000_, 0);
v_state_1003_ = lean_ctor_get(v_s_1000_, 1);
v_isSharedCheck_1011_ = !lean_is_exclusive(v_s_1000_);
if (v_isSharedCheck_1011_ == 0)
{
v___x_1005_ = v_s_1000_;
v_isShared_1006_ = v_isSharedCheck_1011_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_state_1003_);
lean_inc(v_importedEntries_1002_);
lean_dec(v_s_1000_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1011_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v_state_1007_; lean_object* v___x_1009_; 
v_state_1007_ = lean_apply_2(v_addEntryFn_1001_, v_state_1003_, v_entry_999_);
if (v_isShared_1006_ == 0)
{
lean_ctor_set(v___x_1005_, 1, v_state_1007_);
v___x_1009_ = v___x_1005_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v_importedEntries_1002_);
lean_ctor_set(v_reuseFailAlloc_1010_, 1, v_state_1007_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3_spec__9___redArg(lean_object* v_keys_1012_, lean_object* v_i_1013_, lean_object* v_k_1014_){
_start:
{
lean_object* v___x_1015_; uint8_t v___x_1016_; 
v___x_1015_ = lean_array_get_size(v_keys_1012_);
v___x_1016_ = lean_nat_dec_lt(v_i_1013_, v___x_1015_);
if (v___x_1016_ == 0)
{
lean_dec(v_i_1013_);
return v___x_1016_;
}
else
{
lean_object* v_k_x27_1017_; uint8_t v___x_1018_; 
v_k_x27_1017_ = lean_array_fget_borrowed(v_keys_1012_, v_i_1013_);
v___x_1018_ = l_Lean_instBEqExtraModUse_beq(v_k_1014_, v_k_x27_1017_);
if (v___x_1018_ == 0)
{
lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1019_ = lean_unsigned_to_nat(1u);
v___x_1020_ = lean_nat_add(v_i_1013_, v___x_1019_);
lean_dec(v_i_1013_);
v_i_1013_ = v___x_1020_;
goto _start;
}
else
{
lean_dec(v_i_1013_);
return v___x_1016_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3_spec__9___redArg___boxed(lean_object* v_keys_1022_, lean_object* v_i_1023_, lean_object* v_k_1024_){
_start:
{
uint8_t v_res_1025_; lean_object* v_r_1026_; 
v_res_1025_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3_spec__9___redArg(v_keys_1022_, v_i_1023_, v_k_1024_);
lean_dec_ref(v_k_1024_);
lean_dec_ref(v_keys_1022_);
v_r_1026_ = lean_box(v_res_1025_);
return v_r_1026_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_x_1027_, size_t v_x_1028_, lean_object* v_x_1029_){
_start:
{
if (lean_obj_tag(v_x_1027_) == 0)
{
lean_object* v_es_1030_; lean_object* v___x_1031_; size_t v___x_1032_; size_t v___x_1033_; lean_object* v_j_1034_; lean_object* v___x_1035_; 
v_es_1030_ = lean_ctor_get(v_x_1027_, 0);
v___x_1031_ = lean_box(2);
v___x_1032_ = ((size_t)31ULL);
v___x_1033_ = lean_usize_land(v_x_1028_, v___x_1032_);
v_j_1034_ = lean_usize_to_nat(v___x_1033_);
v___x_1035_ = lean_array_get_borrowed(v___x_1031_, v_es_1030_, v_j_1034_);
lean_dec(v_j_1034_);
switch(lean_obj_tag(v___x_1035_))
{
case 0:
{
lean_object* v_key_1036_; uint8_t v___x_1037_; 
v_key_1036_ = lean_ctor_get(v___x_1035_, 0);
v___x_1037_ = l_Lean_instBEqExtraModUse_beq(v_x_1029_, v_key_1036_);
return v___x_1037_;
}
case 1:
{
lean_object* v_node_1038_; size_t v___x_1039_; size_t v___x_1040_; 
v_node_1038_ = lean_ctor_get(v___x_1035_, 0);
v___x_1039_ = ((size_t)5ULL);
v___x_1040_ = lean_usize_shift_right(v_x_1028_, v___x_1039_);
v_x_1027_ = v_node_1038_;
v_x_1028_ = v___x_1040_;
goto _start;
}
default: 
{
uint8_t v___x_1042_; 
v___x_1042_ = 0;
return v___x_1042_;
}
}
}
else
{
lean_object* v_ks_1043_; lean_object* v___x_1044_; uint8_t v___x_1045_; 
v_ks_1043_ = lean_ctor_get(v_x_1027_, 0);
v___x_1044_ = lean_unsigned_to_nat(0u);
v___x_1045_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3_spec__9___redArg(v_ks_1043_, v___x_1044_, v_x_1029_);
return v___x_1045_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_x_1046_, lean_object* v_x_1047_, lean_object* v_x_1048_){
_start:
{
size_t v_x_7342__boxed_1049_; uint8_t v_res_1050_; lean_object* v_r_1051_; 
v_x_7342__boxed_1049_ = lean_unbox_usize(v_x_1047_);
lean_dec(v_x_1047_);
v_res_1050_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3___redArg(v_x_1046_, v_x_7342__boxed_1049_, v_x_1048_);
lean_dec_ref(v_x_1048_);
lean_dec_ref(v_x_1046_);
v_r_1051_ = lean_box(v_res_1050_);
return v_r_1051_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1___redArg(lean_object* v_x_1052_, lean_object* v_x_1053_){
_start:
{
uint64_t v___x_1054_; size_t v___x_1055_; uint8_t v___x_1056_; 
v___x_1054_ = l_Lean_instHashableExtraModUse_hash(v_x_1053_);
v___x_1055_ = lean_uint64_to_usize(v___x_1054_);
v___x_1056_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3___redArg(v_x_1052_, v___x_1055_, v_x_1053_);
return v___x_1056_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_1057_, lean_object* v_x_1058_){
_start:
{
uint8_t v_res_1059_; lean_object* v_r_1060_; 
v_res_1059_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1___redArg(v_x_1057_, v_x_1058_);
lean_dec_ref(v_x_1058_);
lean_dec_ref(v_x_1057_);
v_r_1060_ = lean_box(v_res_1059_);
return v_r_1060_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1061_; double v___x_1062_; 
v___x_1061_ = lean_unsigned_to_nat(0u);
v___x_1062_ = lean_float_of_nat(v___x_1061_);
return v___x_1062_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__3(lean_object* v_cls_1066_, lean_object* v_msg_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_){
_start:
{
lean_object* v_ref_1071_; lean_object* v___x_1072_; lean_object* v_a_1073_; lean_object* v___x_1075_; uint8_t v_isShared_1076_; uint8_t v_isSharedCheck_1118_; 
v_ref_1071_ = lean_ctor_get(v___y_1068_, 2);
v___x_1072_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2(v_msg_1067_, v___y_1068_, v___y_1069_);
v_a_1073_ = lean_ctor_get(v___x_1072_, 0);
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1072_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1075_ = v___x_1072_;
v_isShared_1076_ = v_isSharedCheck_1118_;
goto v_resetjp_1074_;
}
else
{
lean_inc(v_a_1073_);
lean_dec(v___x_1072_);
v___x_1075_ = lean_box(0);
v_isShared_1076_ = v_isSharedCheck_1118_;
goto v_resetjp_1074_;
}
v_resetjp_1074_:
{
lean_object* v___x_1077_; lean_object* v_traceState_1078_; lean_object* v_env_1079_; lean_object* v_nextMacroScope_1080_; lean_object* v_ngen_1081_; lean_object* v_auxDeclNGen_1082_; lean_object* v_cache_1083_; lean_object* v_recordedDeps_1084_; lean_object* v_messages_1085_; lean_object* v_infoState_1086_; lean_object* v_snapshotTasks_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1117_; 
v___x_1077_ = lean_st_ref_take(v___y_1069_);
v_traceState_1078_ = lean_ctor_get(v___x_1077_, 4);
v_env_1079_ = lean_ctor_get(v___x_1077_, 0);
v_nextMacroScope_1080_ = lean_ctor_get(v___x_1077_, 1);
v_ngen_1081_ = lean_ctor_get(v___x_1077_, 2);
v_auxDeclNGen_1082_ = lean_ctor_get(v___x_1077_, 3);
v_cache_1083_ = lean_ctor_get(v___x_1077_, 5);
v_recordedDeps_1084_ = lean_ctor_get(v___x_1077_, 6);
v_messages_1085_ = lean_ctor_get(v___x_1077_, 7);
v_infoState_1086_ = lean_ctor_get(v___x_1077_, 8);
v_snapshotTasks_1087_ = lean_ctor_get(v___x_1077_, 9);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1077_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1089_ = v___x_1077_;
v_isShared_1090_ = v_isSharedCheck_1117_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_snapshotTasks_1087_);
lean_inc(v_infoState_1086_);
lean_inc(v_messages_1085_);
lean_inc(v_recordedDeps_1084_);
lean_inc(v_cache_1083_);
lean_inc(v_traceState_1078_);
lean_inc(v_auxDeclNGen_1082_);
lean_inc(v_ngen_1081_);
lean_inc(v_nextMacroScope_1080_);
lean_inc(v_env_1079_);
lean_dec(v___x_1077_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1117_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
uint64_t v_tid_1091_; lean_object* v_traces_1092_; lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1116_; 
v_tid_1091_ = lean_ctor_get_uint64(v_traceState_1078_, sizeof(void*)*1);
v_traces_1092_ = lean_ctor_get(v_traceState_1078_, 0);
v_isSharedCheck_1116_ = !lean_is_exclusive(v_traceState_1078_);
if (v_isSharedCheck_1116_ == 0)
{
v___x_1094_ = v_traceState_1078_;
v_isShared_1095_ = v_isSharedCheck_1116_;
goto v_resetjp_1093_;
}
else
{
lean_inc(v_traces_1092_);
lean_dec(v_traceState_1078_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1116_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; double v___x_1098_; uint8_t v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1107_; 
v___x_1096_ = lean_box(0);
v___x_1097_ = lean_box(0);
v___x_1098_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__3___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__3___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__3___closed__0);
v___x_1099_ = 0;
v___x_1100_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__3___closed__1));
v___x_1101_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1101_, 0, v_cls_1066_);
lean_ctor_set(v___x_1101_, 1, v___x_1097_);
lean_ctor_set(v___x_1101_, 2, v___x_1100_);
lean_ctor_set_float(v___x_1101_, sizeof(void*)*3, v___x_1098_);
lean_ctor_set_float(v___x_1101_, sizeof(void*)*3 + 8, v___x_1098_);
lean_ctor_set_uint8(v___x_1101_, sizeof(void*)*3 + 16, v___x_1099_);
v___x_1102_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__3___closed__2));
v___x_1103_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1101_);
lean_ctor_set(v___x_1103_, 1, v_a_1073_);
lean_ctor_set(v___x_1103_, 2, v___x_1102_);
lean_inc(v_ref_1071_);
v___x_1104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1104_, 0, v_ref_1071_);
lean_ctor_set(v___x_1104_, 1, v___x_1103_);
v___x_1105_ = l_Lean_PersistentArray_push___redArg(v_traces_1092_, v___x_1104_);
if (v_isShared_1095_ == 0)
{
lean_ctor_set(v___x_1094_, 0, v___x_1105_);
v___x_1107_ = v___x_1094_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v___x_1105_);
lean_ctor_set_uint64(v_reuseFailAlloc_1115_, sizeof(void*)*1, v_tid_1091_);
v___x_1107_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
lean_object* v___x_1109_; 
if (v_isShared_1090_ == 0)
{
lean_ctor_set(v___x_1089_, 4, v___x_1107_);
v___x_1109_ = v___x_1089_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v_env_1079_);
lean_ctor_set(v_reuseFailAlloc_1114_, 1, v_nextMacroScope_1080_);
lean_ctor_set(v_reuseFailAlloc_1114_, 2, v_ngen_1081_);
lean_ctor_set(v_reuseFailAlloc_1114_, 3, v_auxDeclNGen_1082_);
lean_ctor_set(v_reuseFailAlloc_1114_, 4, v___x_1107_);
lean_ctor_set(v_reuseFailAlloc_1114_, 5, v_cache_1083_);
lean_ctor_set(v_reuseFailAlloc_1114_, 6, v_recordedDeps_1084_);
lean_ctor_set(v_reuseFailAlloc_1114_, 7, v_messages_1085_);
lean_ctor_set(v_reuseFailAlloc_1114_, 8, v_infoState_1086_);
lean_ctor_set(v_reuseFailAlloc_1114_, 9, v_snapshotTasks_1087_);
v___x_1109_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
lean_object* v___x_1110_; lean_object* v___x_1112_; 
v___x_1110_ = lean_st_ref_put(v___y_1069_, v___x_1109_);
if (v_isShared_1076_ == 0)
{
lean_ctor_set(v___x_1075_, 0, v___x_1096_);
v___x_1112_ = v___x_1075_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v___x_1096_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
return v___x_1112_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__3___boxed(lean_object* v_cls_1119_, lean_object* v_msg_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_){
_start:
{
lean_object* v_res_1124_; 
v_res_1124_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__3(v_cls_1119_, v_msg_1120_, v___y_1121_, v___y_1122_);
lean_dec(v___y_1122_);
lean_dec_ref(v___y_1121_);
return v_res_1124_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__5___redArg(lean_object* v_a_1125_, lean_object* v_x_1126_){
_start:
{
if (lean_obj_tag(v_x_1126_) == 0)
{
uint8_t v___x_1127_; 
v___x_1127_ = 0;
return v___x_1127_;
}
else
{
lean_object* v_key_1128_; lean_object* v_tail_1129_; uint8_t v___x_1130_; 
v_key_1128_ = lean_ctor_get(v_x_1126_, 0);
v_tail_1129_ = lean_ctor_get(v_x_1126_, 2);
v___x_1130_ = l_Lean_instBEqExtraModUse_beq(v_key_1128_, v_a_1125_);
if (v___x_1130_ == 0)
{
v_x_1126_ = v_tail_1129_;
goto _start;
}
else
{
return v___x_1130_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_a_1132_, lean_object* v_x_1133_){
_start:
{
uint8_t v_res_1134_; lean_object* v_r_1135_; 
v_res_1134_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__5___redArg(v_a_1132_, v_x_1133_);
lean_dec(v_x_1133_);
lean_dec_ref(v_a_1132_);
v_r_1135_ = lean_box(v_res_1134_);
return v_r_1135_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__6_spec__13_spec__18___redArg(lean_object* v_x_1136_, lean_object* v_x_1137_){
_start:
{
if (lean_obj_tag(v_x_1137_) == 0)
{
return v_x_1136_;
}
else
{
lean_object* v_key_1138_; lean_object* v_value_1139_; lean_object* v_tail_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1163_; 
v_key_1138_ = lean_ctor_get(v_x_1137_, 0);
v_value_1139_ = lean_ctor_get(v_x_1137_, 1);
v_tail_1140_ = lean_ctor_get(v_x_1137_, 2);
v_isSharedCheck_1163_ = !lean_is_exclusive(v_x_1137_);
if (v_isSharedCheck_1163_ == 0)
{
v___x_1142_ = v_x_1137_;
v_isShared_1143_ = v_isSharedCheck_1163_;
goto v_resetjp_1141_;
}
else
{
lean_inc(v_tail_1140_);
lean_inc(v_value_1139_);
lean_inc(v_key_1138_);
lean_dec(v_x_1137_);
v___x_1142_ = lean_box(0);
v_isShared_1143_ = v_isSharedCheck_1163_;
goto v_resetjp_1141_;
}
v_resetjp_1141_:
{
lean_object* v___x_1144_; uint64_t v___x_1145_; uint64_t v___x_1146_; uint64_t v___x_1147_; uint64_t v_fold_1148_; uint64_t v___x_1149_; uint64_t v___x_1150_; uint64_t v___x_1151_; size_t v___x_1152_; size_t v___x_1153_; size_t v___x_1154_; size_t v___x_1155_; size_t v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1159_; 
v___x_1144_ = lean_array_get_size(v_x_1136_);
v___x_1145_ = l_Lean_instHashableExtraModUse_hash(v_key_1138_);
v___x_1146_ = 32ULL;
v___x_1147_ = lean_uint64_shift_right(v___x_1145_, v___x_1146_);
v_fold_1148_ = lean_uint64_xor(v___x_1145_, v___x_1147_);
v___x_1149_ = 16ULL;
v___x_1150_ = lean_uint64_shift_right(v_fold_1148_, v___x_1149_);
v___x_1151_ = lean_uint64_xor(v_fold_1148_, v___x_1150_);
v___x_1152_ = lean_uint64_to_usize(v___x_1151_);
v___x_1153_ = lean_usize_of_nat(v___x_1144_);
v___x_1154_ = ((size_t)1ULL);
v___x_1155_ = lean_usize_sub(v___x_1153_, v___x_1154_);
v___x_1156_ = lean_usize_land(v___x_1152_, v___x_1155_);
v___x_1157_ = lean_array_uget_borrowed(v_x_1136_, v___x_1156_);
lean_inc(v___x_1157_);
if (v_isShared_1143_ == 0)
{
lean_ctor_set(v___x_1142_, 2, v___x_1157_);
v___x_1159_ = v___x_1142_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1162_, 0, v_key_1138_);
lean_ctor_set(v_reuseFailAlloc_1162_, 1, v_value_1139_);
lean_ctor_set(v_reuseFailAlloc_1162_, 2, v___x_1157_);
v___x_1159_ = v_reuseFailAlloc_1162_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
lean_object* v___x_1160_; 
v___x_1160_ = lean_array_uset(v_x_1136_, v___x_1156_, v___x_1159_);
v_x_1136_ = v___x_1160_;
v_x_1137_ = v_tail_1140_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__6_spec__13___redArg(lean_object* v_i_1164_, lean_object* v_source_1165_, lean_object* v_target_1166_){
_start:
{
lean_object* v___x_1167_; uint8_t v___x_1168_; 
v___x_1167_ = lean_array_get_size(v_source_1165_);
v___x_1168_ = lean_nat_dec_lt(v_i_1164_, v___x_1167_);
if (v___x_1168_ == 0)
{
lean_dec_ref(v_source_1165_);
lean_dec(v_i_1164_);
return v_target_1166_;
}
else
{
lean_object* v_es_1169_; lean_object* v___x_1170_; lean_object* v_source_1171_; lean_object* v_target_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; 
v_es_1169_ = lean_array_fget(v_source_1165_, v_i_1164_);
v___x_1170_ = lean_box(0);
v_source_1171_ = lean_array_fset(v_source_1165_, v_i_1164_, v___x_1170_);
v_target_1172_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__6_spec__13_spec__18___redArg(v_target_1166_, v_es_1169_);
v___x_1173_ = lean_unsigned_to_nat(1u);
v___x_1174_ = lean_nat_add(v_i_1164_, v___x_1173_);
lean_dec(v_i_1164_);
v_i_1164_ = v___x_1174_;
v_source_1165_ = v_source_1171_;
v_target_1166_ = v_target_1172_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__6___redArg(lean_object* v_data_1176_){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v_nbuckets_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___x_1177_ = lean_array_get_size(v_data_1176_);
v___x_1178_ = lean_unsigned_to_nat(2u);
v_nbuckets_1179_ = lean_nat_mul(v___x_1177_, v___x_1178_);
v___x_1180_ = lean_unsigned_to_nat(0u);
v___x_1181_ = lean_box(0);
v___x_1182_ = lean_mk_array(v_nbuckets_1179_, v___x_1181_);
v___x_1183_ = lean_array_propagate_mark(v_data_1176_, v___x_1182_);
v___x_1184_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__6_spec__13___redArg(v___x_1180_, v_data_1176_, v___x_1183_);
return v___x_1184_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2___redArg(lean_object* v_m_1185_, lean_object* v_a_1186_, lean_object* v_b_1187_){
_start:
{
lean_object* v_size_1188_; lean_object* v_buckets_1189_; lean_object* v___x_1190_; uint64_t v___x_1191_; uint64_t v___x_1192_; uint64_t v___x_1193_; uint64_t v_fold_1194_; uint64_t v___x_1195_; uint64_t v___x_1196_; uint64_t v___x_1197_; size_t v___x_1198_; size_t v___x_1199_; size_t v___x_1200_; size_t v___x_1201_; size_t v___x_1202_; lean_object* v_bkt_1203_; uint8_t v___x_1204_; 
v_size_1188_ = lean_ctor_get(v_m_1185_, 0);
v_buckets_1189_ = lean_ctor_get(v_m_1185_, 1);
v___x_1190_ = lean_array_get_size(v_buckets_1189_);
v___x_1191_ = l_Lean_instHashableExtraModUse_hash(v_a_1186_);
v___x_1192_ = 32ULL;
v___x_1193_ = lean_uint64_shift_right(v___x_1191_, v___x_1192_);
v_fold_1194_ = lean_uint64_xor(v___x_1191_, v___x_1193_);
v___x_1195_ = 16ULL;
v___x_1196_ = lean_uint64_shift_right(v_fold_1194_, v___x_1195_);
v___x_1197_ = lean_uint64_xor(v_fold_1194_, v___x_1196_);
v___x_1198_ = lean_uint64_to_usize(v___x_1197_);
v___x_1199_ = lean_usize_of_nat(v___x_1190_);
v___x_1200_ = ((size_t)1ULL);
v___x_1201_ = lean_usize_sub(v___x_1199_, v___x_1200_);
v___x_1202_ = lean_usize_land(v___x_1198_, v___x_1201_);
v_bkt_1203_ = lean_array_uget_borrowed(v_buckets_1189_, v___x_1202_);
v___x_1204_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__5___redArg(v_a_1186_, v_bkt_1203_);
if (v___x_1204_ == 0)
{
lean_object* v___x_1206_; uint8_t v_isShared_1207_; uint8_t v_isSharedCheck_1225_; 
lean_inc_ref(v_buckets_1189_);
lean_inc(v_size_1188_);
v_isSharedCheck_1225_ = !lean_is_exclusive(v_m_1185_);
if (v_isSharedCheck_1225_ == 0)
{
lean_object* v_unused_1226_; lean_object* v_unused_1227_; 
v_unused_1226_ = lean_ctor_get(v_m_1185_, 1);
lean_dec(v_unused_1226_);
v_unused_1227_ = lean_ctor_get(v_m_1185_, 0);
lean_dec(v_unused_1227_);
v___x_1206_ = v_m_1185_;
v_isShared_1207_ = v_isSharedCheck_1225_;
goto v_resetjp_1205_;
}
else
{
lean_dec(v_m_1185_);
v___x_1206_ = lean_box(0);
v_isShared_1207_ = v_isSharedCheck_1225_;
goto v_resetjp_1205_;
}
v_resetjp_1205_:
{
lean_object* v___x_1208_; lean_object* v_size_x27_1209_; lean_object* v___x_1210_; lean_object* v_buckets_x27_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; uint8_t v___x_1217_; 
v___x_1208_ = lean_unsigned_to_nat(1u);
v_size_x27_1209_ = lean_nat_add(v_size_1188_, v___x_1208_);
lean_dec(v_size_1188_);
lean_inc(v_bkt_1203_);
v___x_1210_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1210_, 0, v_a_1186_);
lean_ctor_set(v___x_1210_, 1, v_b_1187_);
lean_ctor_set(v___x_1210_, 2, v_bkt_1203_);
v_buckets_x27_1211_ = lean_array_uset(v_buckets_1189_, v___x_1202_, v___x_1210_);
v___x_1212_ = lean_unsigned_to_nat(4u);
v___x_1213_ = lean_nat_mul(v_size_x27_1209_, v___x_1212_);
v___x_1214_ = lean_unsigned_to_nat(3u);
v___x_1215_ = lean_nat_div(v___x_1213_, v___x_1214_);
lean_dec(v___x_1213_);
v___x_1216_ = lean_array_get_size(v_buckets_x27_1211_);
v___x_1217_ = lean_nat_dec_le(v___x_1215_, v___x_1216_);
lean_dec(v___x_1215_);
if (v___x_1217_ == 0)
{
lean_object* v_val_1218_; lean_object* v___x_1220_; 
v_val_1218_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__6___redArg(v_buckets_x27_1211_);
if (v_isShared_1207_ == 0)
{
lean_ctor_set(v___x_1206_, 1, v_val_1218_);
lean_ctor_set(v___x_1206_, 0, v_size_x27_1209_);
v___x_1220_ = v___x_1206_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v_size_x27_1209_);
lean_ctor_set(v_reuseFailAlloc_1221_, 1, v_val_1218_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
else
{
lean_object* v___x_1223_; 
if (v_isShared_1207_ == 0)
{
lean_ctor_set(v___x_1206_, 1, v_buckets_x27_1211_);
lean_ctor_set(v___x_1206_, 0, v_size_x27_1209_);
v___x_1223_ = v___x_1206_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v_size_x27_1209_);
lean_ctor_set(v_reuseFailAlloc_1224_, 1, v_buckets_x27_1211_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
}
else
{
lean_dec(v_b_1187_);
lean_dec_ref(v_a_1186_);
return v_m_1185_;
}
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1228_; lean_object* v___x_1229_; 
v___x_1228_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_checkSyntaxNodeKindAtNamespaces___at___00Lean_Elab_checkSyntaxNodeKindAtCurrentNamespaces_spec__0_spec__1_spec__2___closed__0);
v___x_1229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1229_, 0, v___x_1228_);
return v___x_1229_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1230_; lean_object* v___x_1231_; 
v___x_1230_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__0);
v___x_1231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1230_);
lean_ctor_set(v___x_1231_, 1, v___x_1230_);
return v___x_1231_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1232_; 
v___x_1232_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_1232_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__6(void){
_start:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1237_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__5));
v___x_1238_ = l_Lean_stringToMessageData(v___x_1237_);
return v___x_1238_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__8(void){
_start:
{
lean_object* v___x_1240_; lean_object* v___x_1241_; 
v___x_1240_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__7));
v___x_1241_ = l_Lean_stringToMessageData(v___x_1240_);
return v___x_1241_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_1242_; lean_object* v___x_1243_; 
v___x_1242_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__3___closed__1));
v___x_1243_ = l_Lean_stringToMessageData(v___x_1242_);
return v___x_1243_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__12(void){
_start:
{
lean_object* v_cls_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; 
v_cls_1247_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__4));
v___x_1248_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__11));
v___x_1249_ = l_Lean_Name_append(v___x_1248_, v_cls_1247_);
return v___x_1249_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__14(void){
_start:
{
lean_object* v___x_1251_; lean_object* v___x_1252_; 
v___x_1251_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__13));
v___x_1252_ = l_Lean_stringToMessageData(v___x_1251_);
return v___x_1252_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__16(void){
_start:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; 
v___x_1254_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__15));
v___x_1255_ = l_Lean_stringToMessageData(v___x_1254_);
return v___x_1255_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0(lean_object* v_mod_1260_, uint8_t v_isMeta_1261_, lean_object* v_hint_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_){
_start:
{
lean_object* v___y_1267_; lean_object* v___y_1268_; lean_object* v___y_1269_; lean_object* v___y_1270_; lean_object* v___y_1271_; lean_object* v___y_1272_; lean_object* v___y_1273_; lean_object* v___y_1274_; lean_object* v___y_1275_; lean_object* v___y_1276_; lean_object* v___y_1277_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v_env_1284_; uint8_t v_isExporting_1285_; lean_object* v_entry_1286_; lean_object* v___x_1287_; lean_object* v_env_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; uint8_t v___x_1293_; 
v___x_1282_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__2);
v___x_1283_ = lean_st_ref_get(v___y_1264_);
v_env_1284_ = lean_ctor_get(v___x_1283_, 0);
lean_inc_ref(v_env_1284_);
lean_dec(v___x_1283_);
v_isExporting_1285_ = lean_ctor_get_uint8(v_env_1284_, sizeof(void*)*13);
lean_dec_ref(v_env_1284_);
lean_inc(v_mod_1260_);
v_entry_1286_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_1286_, 0, v_mod_1260_);
lean_ctor_set_uint8(v_entry_1286_, sizeof(void*)*1, v_isExporting_1285_);
lean_ctor_set_uint8(v_entry_1286_, sizeof(void*)*1 + 1, v_isMeta_1261_);
v___x_1287_ = lean_st_ref_get(v___y_1264_);
v_env_1288_ = lean_ctor_get(v___x_1287_, 0);
lean_inc_ref(v_env_1288_);
lean_dec(v___x_1287_);
v___x_1289_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_1290_ = lean_box(1);
v___x_1291_ = lean_box(0);
v___x_1292_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1282_, v___x_1289_, v_env_1288_, v___x_1290_, v___x_1291_);
v___x_1293_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1___redArg(v___x_1292_, v_entry_1286_);
lean_dec(v___x_1292_);
if (v___x_1293_ == 0)
{
lean_object* v_toCold_1294_; lean_object* v_options_1295_; lean_object* v_inheritedTraceOptions_1296_; uint8_t v_hasTrace_1297_; lean_object* v___f_1298_; uint8_t v___x_1299_; lean_object* v___y_1301_; lean_object* v___y_1320_; 
v_toCold_1294_ = lean_ctor_get(v___y_1263_, 0);
v_options_1295_ = lean_ctor_get(v_toCold_1294_, 2);
v_inheritedTraceOptions_1296_ = lean_ctor_get(v_toCold_1294_, 11);
v_hasTrace_1297_ = lean_ctor_get_uint8(v_options_1295_, sizeof(void*)*1);
lean_inc_ref(v_entry_1286_);
v___f_1298_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___lam__0), 3, 2);
lean_closure_set(v___f_1298_, 0, v___x_1289_);
lean_closure_set(v___f_1298_, 1, v_entry_1286_);
v___x_1299_ = 1;
if (v_hasTrace_1297_ == 0)
{
lean_dec(v_hint_1262_);
lean_dec(v_mod_1260_);
v___y_1320_ = v___y_1264_;
goto v___jp_1319_;
}
else
{
lean_object* v_cls_1327_; lean_object* v___y_1329_; lean_object* v___y_1330_; lean_object* v___y_1334_; lean_object* v___y_1335_; lean_object* v___x_1347_; uint8_t v___x_1348_; 
v_cls_1327_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__4));
v___x_1347_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__12);
v___x_1348_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1296_, v_options_1295_, v___x_1347_);
if (v___x_1348_ == 0)
{
lean_dec(v_hint_1262_);
lean_dec(v_mod_1260_);
v___y_1320_ = v___y_1264_;
goto v___jp_1319_;
}
else
{
lean_object* v___x_1349_; lean_object* v___y_1351_; 
v___x_1349_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__14);
if (v_isExporting_1285_ == 0)
{
lean_object* v___x_1358_; 
v___x_1358_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__19));
v___y_1351_ = v___x_1358_;
goto v___jp_1350_;
}
else
{
lean_object* v___x_1359_; 
v___x_1359_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__20));
v___y_1351_ = v___x_1359_;
goto v___jp_1350_;
}
v___jp_1350_:
{
lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; 
lean_inc_ref(v___y_1351_);
v___x_1352_ = l_Lean_stringToMessageData(v___y_1351_);
v___x_1353_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1353_, 0, v___x_1349_);
lean_ctor_set(v___x_1353_, 1, v___x_1352_);
v___x_1354_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__16);
v___x_1355_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1355_, 0, v___x_1353_);
lean_ctor_set(v___x_1355_, 1, v___x_1354_);
if (v_isMeta_1261_ == 0)
{
lean_object* v___x_1356_; 
v___x_1356_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__17));
v___y_1334_ = v___x_1355_;
v___y_1335_ = v___x_1356_;
goto v___jp_1333_;
}
else
{
lean_object* v___x_1357_; 
v___x_1357_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__18));
v___y_1334_ = v___x_1355_;
v___y_1335_ = v___x_1357_;
goto v___jp_1333_;
}
}
}
v___jp_1328_:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; 
v___x_1331_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1331_, 0, v___y_1329_);
lean_ctor_set(v___x_1331_, 1, v___y_1330_);
v___x_1332_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__3(v_cls_1327_, v___x_1331_, v___y_1263_, v___y_1264_);
if (lean_obj_tag(v___x_1332_) == 0)
{
lean_dec_ref_known(v___x_1332_, 1);
v___y_1320_ = v___y_1264_;
goto v___jp_1319_;
}
else
{
lean_dec_ref(v___f_1298_);
lean_dec_ref_known(v_entry_1286_, 1);
return v___x_1332_;
}
}
v___jp_1333_:
{
lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; uint8_t v___x_1342_; 
lean_inc_ref(v___y_1335_);
v___x_1336_ = l_Lean_stringToMessageData(v___y_1335_);
v___x_1337_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1337_, 0, v___y_1334_);
lean_ctor_set(v___x_1337_, 1, v___x_1336_);
v___x_1338_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__6);
v___x_1339_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1339_, 0, v___x_1337_);
lean_ctor_set(v___x_1339_, 1, v___x_1338_);
v___x_1340_ = l_Lean_MessageData_ofName(v_mod_1260_);
v___x_1341_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1339_);
lean_ctor_set(v___x_1341_, 1, v___x_1340_);
v___x_1342_ = l_Lean_Name_isAnonymous(v_hint_1262_);
if (v___x_1342_ == 0)
{
lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; 
v___x_1343_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__8);
v___x_1344_ = l_Lean_MessageData_ofName(v_hint_1262_);
v___x_1345_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1345_, 0, v___x_1343_);
lean_ctor_set(v___x_1345_, 1, v___x_1344_);
v___y_1329_ = v___x_1341_;
v___y_1330_ = v___x_1345_;
goto v___jp_1328_;
}
else
{
lean_object* v___x_1346_; 
lean_dec(v_hint_1262_);
v___x_1346_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__9);
v___y_1329_ = v___x_1341_;
v___y_1330_ = v___x_1346_;
goto v___jp_1328_;
}
}
}
v___jp_1300_:
{
lean_object* v___x_1302_; lean_object* v_toEnvExtension_1303_; lean_object* v_env_1304_; lean_object* v_nextMacroScope_1305_; lean_object* v_ngen_1306_; lean_object* v_auxDeclNGen_1307_; lean_object* v_traceState_1308_; lean_object* v_recordedDeps_1309_; lean_object* v_messages_1310_; lean_object* v_infoState_1311_; lean_object* v_snapshotTasks_1312_; lean_object* v_asyncMode_1313_; uint8_t v_logWrites_1314_; lean_object* v___x_1315_; 
v___x_1302_ = lean_st_ref_take(v___y_1301_);
v_toEnvExtension_1303_ = lean_ctor_get(v___x_1289_, 0);
v_env_1304_ = lean_ctor_get(v___x_1302_, 0);
lean_inc_ref(v_env_1304_);
v_nextMacroScope_1305_ = lean_ctor_get(v___x_1302_, 1);
lean_inc(v_nextMacroScope_1305_);
v_ngen_1306_ = lean_ctor_get(v___x_1302_, 2);
lean_inc_ref(v_ngen_1306_);
v_auxDeclNGen_1307_ = lean_ctor_get(v___x_1302_, 3);
lean_inc_ref(v_auxDeclNGen_1307_);
v_traceState_1308_ = lean_ctor_get(v___x_1302_, 4);
lean_inc_ref(v_traceState_1308_);
v_recordedDeps_1309_ = lean_ctor_get(v___x_1302_, 6);
lean_inc_ref(v_recordedDeps_1309_);
v_messages_1310_ = lean_ctor_get(v___x_1302_, 7);
lean_inc_ref(v_messages_1310_);
v_infoState_1311_ = lean_ctor_get(v___x_1302_, 8);
lean_inc_ref(v_infoState_1311_);
v_snapshotTasks_1312_ = lean_ctor_get(v___x_1302_, 9);
lean_inc_ref(v_snapshotTasks_1312_);
lean_dec(v___x_1302_);
v_asyncMode_1313_ = lean_ctor_get(v_toEnvExtension_1303_, 2);
v_logWrites_1314_ = lean_ctor_get_uint8(v_toEnvExtension_1303_, sizeof(void*)*6);
v___x_1315_ = lean_box(0);
if (v_logWrites_1314_ == 0)
{
lean_object* v___x_1316_; 
lean_inc_ref(v_toEnvExtension_1303_);
v___x_1316_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1303_, v_env_1304_, v___f_1298_, v_asyncMode_1313_, v___x_1291_, v___x_1299_);
v___y_1267_ = v_auxDeclNGen_1307_;
v___y_1268_ = v___y_1301_;
v___y_1269_ = v_snapshotTasks_1312_;
v___y_1270_ = v_nextMacroScope_1305_;
v___y_1271_ = v_infoState_1311_;
v___y_1272_ = v_traceState_1308_;
v___y_1273_ = v___x_1315_;
v___y_1274_ = v_recordedDeps_1309_;
v___y_1275_ = v_messages_1310_;
v___y_1276_ = v_ngen_1306_;
v___y_1277_ = v___x_1316_;
goto v___jp_1266_;
}
else
{
lean_object* v___x_1317_; lean_object* v___x_1318_; 
lean_inc_ref_n(v_toEnvExtension_1303_, 2);
v___x_1317_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1303_, v_env_1304_);
lean_dec_ref(v_env_1304_);
v___x_1318_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1303_, v___x_1317_, v___f_1298_, v_asyncMode_1313_, v___x_1291_, v___x_1299_);
v___y_1267_ = v_auxDeclNGen_1307_;
v___y_1268_ = v___y_1301_;
v___y_1269_ = v_snapshotTasks_1312_;
v___y_1270_ = v_nextMacroScope_1305_;
v___y_1271_ = v_infoState_1311_;
v___y_1272_ = v_traceState_1308_;
v___y_1273_ = v___x_1315_;
v___y_1274_ = v_recordedDeps_1309_;
v___y_1275_ = v_messages_1310_;
v___y_1276_ = v_ngen_1306_;
v___y_1277_ = v___x_1318_;
goto v___jp_1266_;
}
}
v___jp_1319_:
{
uint8_t v___x_1321_; 
v___x_1321_ = l_Lean_usageRecordingEnabled();
if (v___x_1321_ == 0)
{
lean_dec_ref_known(v_entry_1286_, 1);
v___y_1301_ = v___y_1320_;
goto v___jp_1300_;
}
else
{
lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; 
v___x_1322_ = l___private_Lean_ExtraModUses_0__Lean_extraModUsesByChecksRef;
v___x_1323_ = lean_st_ref_take(v___x_1322_);
v___x_1324_ = lean_box(0);
v___x_1325_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2___redArg(v___x_1323_, v_entry_1286_, v___x_1324_);
v___x_1326_ = lean_st_ref_put(v___x_1322_, v___x_1325_);
v___y_1301_ = v___y_1320_;
goto v___jp_1300_;
}
}
}
else
{
lean_object* v___x_1360_; lean_object* v___x_1361_; 
lean_dec_ref_known(v_entry_1286_, 1);
lean_dec(v_hint_1262_);
lean_dec(v_mod_1260_);
v___x_1360_ = lean_box(0);
v___x_1361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1361_, 0, v___x_1360_);
return v___x_1361_;
}
v___jp_1266_:
{
lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; 
v___x_1278_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__1);
v___x_1279_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1279_, 0, v___y_1277_);
lean_ctor_set(v___x_1279_, 1, v___y_1270_);
lean_ctor_set(v___x_1279_, 2, v___y_1276_);
lean_ctor_set(v___x_1279_, 3, v___y_1267_);
lean_ctor_set(v___x_1279_, 4, v___y_1272_);
lean_ctor_set(v___x_1279_, 5, v___x_1278_);
lean_ctor_set(v___x_1279_, 6, v___y_1274_);
lean_ctor_set(v___x_1279_, 7, v___y_1275_);
lean_ctor_set(v___x_1279_, 8, v___y_1271_);
lean_ctor_set(v___x_1279_, 9, v___y_1269_);
v___x_1280_ = lean_st_ref_put(v___y_1268_, v___x_1279_);
v___x_1281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1281_, 0, v___y_1273_);
return v___x_1281_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___boxed(lean_object* v_mod_1362_, lean_object* v_isMeta_1363_, lean_object* v_hint_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_){
_start:
{
uint8_t v_isMeta_boxed_1368_; lean_object* v_res_1369_; 
v_isMeta_boxed_1368_ = lean_unbox(v_isMeta_1363_);
v_res_1369_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0(v_mod_1362_, v_isMeta_boxed_1368_, v_hint_1364_, v___y_1365_, v___y_1366_);
lean_dec(v___y_1366_);
lean_dec_ref(v___y_1365_);
return v_res_1369_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__1(lean_object* v___x_1370_, lean_object* v_declName_1371_, lean_object* v_as_1372_, size_t v_sz_1373_, size_t v_i_1374_, lean_object* v_b_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_){
_start:
{
uint8_t v___x_1379_; 
v___x_1379_ = lean_usize_dec_lt(v_i_1374_, v_sz_1373_);
if (v___x_1379_ == 0)
{
lean_object* v___x_1380_; 
lean_dec(v_declName_1371_);
v___x_1380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1380_, 0, v_b_1375_);
return v___x_1380_;
}
else
{
lean_object* v___x_1381_; lean_object* v_modules_1382_; lean_object* v___x_1383_; lean_object* v_a_1384_; lean_object* v___x_1385_; lean_object* v_toImport_1386_; lean_object* v_module_1387_; lean_object* v___x_1388_; uint8_t v___x_1389_; lean_object* v___x_1390_; 
v___x_1381_ = l_Lean_Environment_header(v___x_1370_);
v_modules_1382_ = lean_ctor_get(v___x_1381_, 3);
lean_inc_ref(v_modules_1382_);
lean_dec_ref(v___x_1381_);
v___x_1383_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_1384_ = lean_array_uget_borrowed(v_as_1372_, v_i_1374_);
v___x_1385_ = lean_array_get(v___x_1383_, v_modules_1382_, v_a_1384_);
lean_dec_ref(v_modules_1382_);
v_toImport_1386_ = lean_ctor_get(v___x_1385_, 0);
lean_inc_ref(v_toImport_1386_);
lean_dec(v___x_1385_);
v_module_1387_ = lean_ctor_get(v_toImport_1386_, 0);
lean_inc(v_module_1387_);
lean_dec_ref(v_toImport_1386_);
v___x_1388_ = lean_box(0);
v___x_1389_ = 0;
lean_inc(v_declName_1371_);
v___x_1390_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0(v_module_1387_, v___x_1389_, v_declName_1371_, v___y_1376_, v___y_1377_);
if (lean_obj_tag(v___x_1390_) == 0)
{
size_t v___x_1391_; size_t v___x_1392_; 
lean_dec_ref_known(v___x_1390_, 1);
v___x_1391_ = ((size_t)1ULL);
v___x_1392_ = lean_usize_add(v_i_1374_, v___x_1391_);
v_i_1374_ = v___x_1392_;
v_b_1375_ = v___x_1388_;
goto _start;
}
else
{
lean_dec(v_declName_1371_);
return v___x_1390_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__1___boxed(lean_object* v___x_1394_, lean_object* v_declName_1395_, lean_object* v_as_1396_, lean_object* v_sz_1397_, lean_object* v_i_1398_, lean_object* v_b_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_){
_start:
{
size_t v_sz_boxed_1403_; size_t v_i_boxed_1404_; lean_object* v_res_1405_; 
v_sz_boxed_1403_ = lean_unbox_usize(v_sz_1397_);
lean_dec(v_sz_1397_);
v_i_boxed_1404_ = lean_unbox_usize(v_i_1398_);
lean_dec(v_i_1398_);
v_res_1405_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__1(v___x_1394_, v_declName_1395_, v_as_1396_, v_sz_boxed_1403_, v_i_boxed_1404_, v_b_1399_, v___y_1400_, v___y_1401_);
lean_dec(v___y_1401_);
lean_dec_ref(v___y_1400_);
lean_dec_ref(v_as_1396_);
lean_dec_ref(v___x_1394_);
return v_res_1405_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2_spec__6___redArg(lean_object* v_a_1406_, lean_object* v_x_1407_){
_start:
{
if (lean_obj_tag(v_x_1407_) == 0)
{
lean_object* v___x_1408_; 
v___x_1408_ = lean_box(0);
return v___x_1408_;
}
else
{
lean_object* v_key_1409_; lean_object* v_value_1410_; lean_object* v_tail_1411_; uint8_t v___x_1412_; 
v_key_1409_ = lean_ctor_get(v_x_1407_, 0);
v_value_1410_ = lean_ctor_get(v_x_1407_, 1);
v_tail_1411_ = lean_ctor_get(v_x_1407_, 2);
v___x_1412_ = lean_name_eq(v_key_1409_, v_a_1406_);
if (v___x_1412_ == 0)
{
v_x_1407_ = v_tail_1411_;
goto _start;
}
else
{
lean_object* v___x_1414_; 
lean_inc(v_value_1410_);
v___x_1414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1414_, 0, v_value_1410_);
return v___x_1414_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2_spec__6___redArg___boxed(lean_object* v_a_1415_, lean_object* v_x_1416_){
_start:
{
lean_object* v_res_1417_; 
v_res_1417_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2_spec__6___redArg(v_a_1415_, v_x_1416_);
lean_dec(v_x_1416_);
lean_dec(v_a_1415_);
return v_res_1417_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2___redArg(lean_object* v_m_1418_, lean_object* v_a_1419_){
_start:
{
lean_object* v_buckets_1420_; lean_object* v___x_1421_; uint64_t v___y_1423_; 
v_buckets_1420_ = lean_ctor_get(v_m_1418_, 1);
v___x_1421_ = lean_array_get_size(v_buckets_1420_);
if (lean_obj_tag(v_a_1419_) == 0)
{
uint64_t v___x_1437_; 
v___x_1437_ = 1723ULL;
v___y_1423_ = v___x_1437_;
goto v___jp_1422_;
}
else
{
uint64_t v_hash_1438_; 
v_hash_1438_ = lean_ctor_get_uint64(v_a_1419_, sizeof(void*)*2);
v___y_1423_ = v_hash_1438_;
goto v___jp_1422_;
}
v___jp_1422_:
{
uint64_t v___x_1424_; uint64_t v___x_1425_; uint64_t v_fold_1426_; uint64_t v___x_1427_; uint64_t v___x_1428_; uint64_t v___x_1429_; size_t v___x_1430_; size_t v___x_1431_; size_t v___x_1432_; size_t v___x_1433_; size_t v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; 
v___x_1424_ = 32ULL;
v___x_1425_ = lean_uint64_shift_right(v___y_1423_, v___x_1424_);
v_fold_1426_ = lean_uint64_xor(v___y_1423_, v___x_1425_);
v___x_1427_ = 16ULL;
v___x_1428_ = lean_uint64_shift_right(v_fold_1426_, v___x_1427_);
v___x_1429_ = lean_uint64_xor(v_fold_1426_, v___x_1428_);
v___x_1430_ = lean_uint64_to_usize(v___x_1429_);
v___x_1431_ = lean_usize_of_nat(v___x_1421_);
v___x_1432_ = ((size_t)1ULL);
v___x_1433_ = lean_usize_sub(v___x_1431_, v___x_1432_);
v___x_1434_ = lean_usize_land(v___x_1430_, v___x_1433_);
v___x_1435_ = lean_array_uget_borrowed(v_buckets_1420_, v___x_1434_);
v___x_1436_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2_spec__6___redArg(v_a_1419_, v___x_1435_);
return v___x_1436_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2___redArg___boxed(lean_object* v_m_1439_, lean_object* v_a_1440_){
_start:
{
lean_object* v_res_1441_; 
v_res_1441_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2___redArg(v_m_1439_, v_a_1440_);
lean_dec(v_a_1440_);
lean_dec_ref(v_m_1439_);
return v_res_1441_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1442_; 
v___x_1442_ = l_Std_HashMap_instInhabited___redArg();
return v___x_1442_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0(lean_object* v_declName_1445_, uint8_t v_isMeta_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_){
_start:
{
lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v_env_1455_; lean_object* v___y_1457_; lean_object* v___x_1470_; 
v___x_1450_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0___closed__0);
v___x_1451_ = lean_st_ref_get(v___y_1448_);
v_env_1455_ = lean_ctor_get(v___x_1451_, 0);
lean_inc_ref(v_env_1455_);
lean_dec(v___x_1451_);
v___x_1470_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1455_, v_declName_1445_);
if (lean_obj_tag(v___x_1470_) == 0)
{
lean_dec_ref(v_env_1455_);
lean_dec(v_declName_1445_);
goto v___jp_1452_;
}
else
{
lean_object* v_val_1471_; lean_object* v___x_1472_; lean_object* v_modules_1473_; lean_object* v___x_1474_; uint8_t v___x_1475_; 
v_val_1471_ = lean_ctor_get(v___x_1470_, 0);
lean_inc(v_val_1471_);
lean_dec_ref_known(v___x_1470_, 1);
v___x_1472_ = l_Lean_Environment_header(v_env_1455_);
v_modules_1473_ = lean_ctor_get(v___x_1472_, 3);
lean_inc_ref(v_modules_1473_);
lean_dec_ref(v___x_1472_);
v___x_1474_ = lean_array_get_size(v_modules_1473_);
v___x_1475_ = lean_nat_dec_lt(v_val_1471_, v___x_1474_);
if (v___x_1475_ == 0)
{
lean_dec_ref(v_modules_1473_);
lean_dec(v_val_1471_);
lean_dec_ref(v_env_1455_);
lean_dec(v_declName_1445_);
goto v___jp_1452_;
}
else
{
lean_object* v___x_1476_; lean_object* v___x_1477_; uint8_t v___y_1479_; 
v___x_1476_ = lean_array_fget(v_modules_1473_, v_val_1471_);
lean_dec(v_val_1471_);
lean_dec_ref(v_modules_1473_);
v___x_1477_ = lean_st_ref_get(v___y_1448_);
if (v_isMeta_1446_ == 0)
{
lean_dec(v___x_1477_);
v___y_1479_ = v_isMeta_1446_;
goto v___jp_1478_;
}
else
{
lean_object* v_env_1490_; uint8_t v___x_1491_; 
v_env_1490_ = lean_ctor_get(v___x_1477_, 0);
lean_inc_ref(v_env_1490_);
lean_dec(v___x_1477_);
lean_inc(v_declName_1445_);
v___x_1491_ = l_Lean_isMarkedMeta(v_env_1490_, v_declName_1445_);
if (v___x_1491_ == 0)
{
v___y_1479_ = v_isMeta_1446_;
goto v___jp_1478_;
}
else
{
uint8_t v___x_1492_; 
v___x_1492_ = 0;
v___y_1479_ = v___x_1492_;
goto v___jp_1478_;
}
}
v___jp_1478_:
{
lean_object* v_toImport_1480_; lean_object* v_module_1481_; lean_object* v___x_1482_; 
v_toImport_1480_ = lean_ctor_get(v___x_1476_, 0);
lean_inc_ref(v_toImport_1480_);
lean_dec(v___x_1476_);
v_module_1481_ = lean_ctor_get(v_toImport_1480_, 0);
lean_inc(v_module_1481_);
lean_dec_ref(v_toImport_1480_);
lean_inc(v_declName_1445_);
v___x_1482_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0(v_module_1481_, v___y_1479_, v_declName_1445_, v___y_1447_, v___y_1448_);
if (lean_obj_tag(v___x_1482_) == 0)
{
lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; 
lean_dec_ref_known(v___x_1482_, 1);
v___x_1483_ = l_Lean_indirectModUseExt;
v___x_1484_ = lean_box(1);
v___x_1485_ = lean_box(0);
lean_inc_ref(v_env_1455_);
v___x_1486_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1450_, v___x_1483_, v_env_1455_, v___x_1484_, v___x_1485_);
v___x_1487_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2___redArg(v___x_1486_, v_declName_1445_);
lean_dec(v___x_1486_);
if (lean_obj_tag(v___x_1487_) == 0)
{
lean_object* v___x_1488_; 
v___x_1488_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0___closed__1));
v___y_1457_ = v___x_1488_;
goto v___jp_1456_;
}
else
{
lean_object* v_val_1489_; 
v_val_1489_ = lean_ctor_get(v___x_1487_, 0);
lean_inc(v_val_1489_);
lean_dec_ref_known(v___x_1487_, 1);
v___y_1457_ = v_val_1489_;
goto v___jp_1456_;
}
}
else
{
lean_dec_ref(v_env_1455_);
lean_dec(v_declName_1445_);
return v___x_1482_;
}
}
}
}
v___jp_1452_:
{
lean_object* v___x_1453_; lean_object* v___x_1454_; 
v___x_1453_ = lean_box(0);
v___x_1454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1453_);
return v___x_1454_;
}
v___jp_1456_:
{
lean_object* v___x_1458_; size_t v_sz_1459_; size_t v___x_1460_; lean_object* v___x_1461_; 
v___x_1458_ = lean_box(0);
v_sz_1459_ = lean_array_size(v___y_1457_);
v___x_1460_ = ((size_t)0ULL);
v___x_1461_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__1(v_env_1455_, v_declName_1445_, v___y_1457_, v_sz_1459_, v___x_1460_, v___x_1458_, v___y_1447_, v___y_1448_);
lean_dec_ref(v___y_1457_);
lean_dec_ref(v_env_1455_);
if (lean_obj_tag(v___x_1461_) == 0)
{
lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1468_; 
v_isSharedCheck_1468_ = !lean_is_exclusive(v___x_1461_);
if (v_isSharedCheck_1468_ == 0)
{
lean_object* v_unused_1469_; 
v_unused_1469_ = lean_ctor_get(v___x_1461_, 0);
lean_dec(v_unused_1469_);
v___x_1463_ = v___x_1461_;
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
else
{
lean_dec(v___x_1461_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
lean_object* v___x_1466_; 
if (v_isShared_1464_ == 0)
{
lean_ctor_set(v___x_1463_, 0, v___x_1458_);
v___x_1466_ = v___x_1463_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v___x_1458_);
v___x_1466_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
return v___x_1466_;
}
}
}
else
{
return v___x_1461_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0___boxed(lean_object* v_declName_1493_, lean_object* v_isMeta_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_){
_start:
{
uint8_t v_isMeta_boxed_1498_; lean_object* v_res_1499_; 
v_isMeta_boxed_1498_ = lean_unbox(v_isMeta_1494_);
v_res_1499_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0(v_declName_1493_, v_isMeta_boxed_1498_, v___y_1495_, v___y_1496_);
lean_dec(v___y_1496_);
lean_dec_ref(v___y_1495_);
return v_res_1499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___redArg___lam__1(lean_object* v_parserNamespace_1500_, uint8_t v_x_1501_, lean_object* v_stx_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_){
_start:
{
lean_object* v___x_1506_; 
lean_inc(v_stx_1502_);
v___x_1506_ = l_Lean_Elab_syntaxNodeKindOfAttrParam(v_parserNamespace_1500_, v_stx_1502_, v___y_1503_, v___y_1504_);
if (lean_obj_tag(v___x_1506_) == 0)
{
lean_object* v_a_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1559_; 
v_a_1507_ = lean_ctor_get(v___x_1506_, 0);
v_isSharedCheck_1559_ = !lean_is_exclusive(v___x_1506_);
if (v_isSharedCheck_1559_ == 0)
{
v___x_1509_ = v___x_1506_;
v_isShared_1510_ = v_isSharedCheck_1559_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_a_1507_);
lean_dec(v___x_1506_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1559_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1511_; lean_object* v_env_1512_; uint8_t v___x_1513_; uint8_t v___x_1514_; 
v___x_1511_ = lean_st_ref_get(v___y_1504_);
v_env_1512_ = lean_ctor_get(v___x_1511_, 0);
lean_inc_ref(v_env_1512_);
lean_dec(v___x_1511_);
v___x_1513_ = 1;
lean_inc(v_a_1507_);
v___x_1514_ = l_Lean_Environment_contains(v_env_1512_, v_a_1507_, v___x_1513_);
if (v___x_1514_ == 0)
{
lean_object* v___x_1516_; 
lean_dec(v_stx_1502_);
if (v_isShared_1510_ == 0)
{
v___x_1516_ = v___x_1509_;
goto v_reusejp_1515_;
}
else
{
lean_object* v_reuseFailAlloc_1517_; 
v_reuseFailAlloc_1517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1517_, 0, v_a_1507_);
v___x_1516_ = v_reuseFailAlloc_1517_;
goto v_reusejp_1515_;
}
v_reusejp_1515_:
{
return v___x_1516_;
}
}
else
{
uint8_t v___x_1518_; lean_object* v___x_1519_; 
lean_del_object(v___x_1509_);
v___x_1518_ = 0;
lean_inc(v_a_1507_);
v___x_1519_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0(v_a_1507_, v___x_1518_, v___y_1503_, v___y_1504_);
if (lean_obj_tag(v___x_1519_) == 0)
{
lean_object* v___x_1521_; uint8_t v_isShared_1522_; uint8_t v_isSharedCheck_1549_; 
v_isSharedCheck_1549_ = !lean_is_exclusive(v___x_1519_);
if (v_isSharedCheck_1549_ == 0)
{
lean_object* v_unused_1550_; 
v_unused_1550_ = lean_ctor_get(v___x_1519_, 0);
lean_dec(v_unused_1550_);
v___x_1521_ = v___x_1519_;
v_isShared_1522_ = v_isSharedCheck_1549_;
goto v_resetjp_1520_;
}
else
{
lean_dec(v___x_1519_);
v___x_1521_ = lean_box(0);
v_isShared_1522_ = v_isSharedCheck_1549_;
goto v_resetjp_1520_;
}
v_resetjp_1520_:
{
lean_object* v___x_1523_; lean_object* v_infoState_1524_; uint8_t v_enabled_1525_; 
v___x_1523_ = lean_st_ref_get(v___y_1504_);
v_infoState_1524_ = lean_ctor_get(v___x_1523_, 8);
lean_inc_ref(v_infoState_1524_);
lean_dec(v___x_1523_);
v_enabled_1525_ = lean_ctor_get_uint8(v_infoState_1524_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1524_);
if (v_enabled_1525_ == 0)
{
lean_object* v___x_1527_; 
lean_dec(v_stx_1502_);
if (v_isShared_1522_ == 0)
{
lean_ctor_set(v___x_1521_, 0, v_a_1507_);
v___x_1527_ = v___x_1521_;
goto v_reusejp_1526_;
}
else
{
lean_object* v_reuseFailAlloc_1528_; 
v_reuseFailAlloc_1528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1528_, 0, v_a_1507_);
v___x_1527_ = v_reuseFailAlloc_1528_;
goto v_reusejp_1526_;
}
v_reusejp_1526_:
{
return v___x_1527_;
}
}
else
{
lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
lean_del_object(v___x_1521_);
v___x_1529_ = lean_unsigned_to_nat(1u);
v___x_1530_ = l_Lean_Syntax_getArg(v_stx_1502_, v___x_1529_);
lean_dec(v_stx_1502_);
v___x_1531_ = lean_box(0);
lean_inc(v_a_1507_);
v___x_1532_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1(v___x_1530_, v_a_1507_, v___x_1531_, v___y_1503_, v___y_1504_);
if (lean_obj_tag(v___x_1532_) == 0)
{
lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1539_; 
v_isSharedCheck_1539_ = !lean_is_exclusive(v___x_1532_);
if (v_isSharedCheck_1539_ == 0)
{
lean_object* v_unused_1540_; 
v_unused_1540_ = lean_ctor_get(v___x_1532_, 0);
lean_dec(v_unused_1540_);
v___x_1534_ = v___x_1532_;
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
else
{
lean_dec(v___x_1532_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___x_1537_; 
if (v_isShared_1535_ == 0)
{
lean_ctor_set(v___x_1534_, 0, v_a_1507_);
v___x_1537_ = v___x_1534_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v_a_1507_);
v___x_1537_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
return v___x_1537_;
}
}
}
else
{
lean_object* v_a_1541_; lean_object* v___x_1543_; uint8_t v_isShared_1544_; uint8_t v_isSharedCheck_1548_; 
lean_dec(v_a_1507_);
v_a_1541_ = lean_ctor_get(v___x_1532_, 0);
v_isSharedCheck_1548_ = !lean_is_exclusive(v___x_1532_);
if (v_isSharedCheck_1548_ == 0)
{
v___x_1543_ = v___x_1532_;
v_isShared_1544_ = v_isSharedCheck_1548_;
goto v_resetjp_1542_;
}
else
{
lean_inc(v_a_1541_);
lean_dec(v___x_1532_);
v___x_1543_ = lean_box(0);
v_isShared_1544_ = v_isSharedCheck_1548_;
goto v_resetjp_1542_;
}
v_resetjp_1542_:
{
lean_object* v___x_1546_; 
if (v_isShared_1544_ == 0)
{
v___x_1546_ = v___x_1543_;
goto v_reusejp_1545_;
}
else
{
lean_object* v_reuseFailAlloc_1547_; 
v_reuseFailAlloc_1547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1547_, 0, v_a_1541_);
v___x_1546_ = v_reuseFailAlloc_1547_;
goto v_reusejp_1545_;
}
v_reusejp_1545_:
{
return v___x_1546_;
}
}
}
}
}
}
else
{
lean_object* v_a_1551_; lean_object* v___x_1553_; uint8_t v_isShared_1554_; uint8_t v_isSharedCheck_1558_; 
lean_dec(v_a_1507_);
lean_dec(v_stx_1502_);
v_a_1551_ = lean_ctor_get(v___x_1519_, 0);
v_isSharedCheck_1558_ = !lean_is_exclusive(v___x_1519_);
if (v_isSharedCheck_1558_ == 0)
{
v___x_1553_ = v___x_1519_;
v_isShared_1554_ = v_isSharedCheck_1558_;
goto v_resetjp_1552_;
}
else
{
lean_inc(v_a_1551_);
lean_dec(v___x_1519_);
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
lean_ctor_set(v_reuseFailAlloc_1557_, 0, v_a_1551_);
v___x_1556_ = v_reuseFailAlloc_1557_;
goto v_reusejp_1555_;
}
v_reusejp_1555_:
{
return v___x_1556_;
}
}
}
}
}
}
else
{
lean_dec(v_stx_1502_);
return v___x_1506_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___redArg___lam__1___boxed(lean_object* v_parserNamespace_1560_, lean_object* v_x_1561_, lean_object* v_stx_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_){
_start:
{
uint8_t v_x_8102__boxed_1566_; lean_object* v_res_1567_; 
v_x_8102__boxed_1566_ = lean_unbox(v_x_1561_);
v_res_1567_ = l_Lean_Elab_mkElabAttribute___redArg___lam__1(v_parserNamespace_1560_, v_x_8102__boxed_1566_, v_stx_1562_, v___y_1563_, v___y_1564_);
lean_dec(v___y_1564_);
lean_dec_ref(v___y_1563_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___redArg(lean_object* v_attrBuiltinName_1570_, lean_object* v_attrName_1571_, lean_object* v_parserNamespace_1572_, lean_object* v_typeName_1573_, lean_object* v_kind_1574_, lean_object* v_attrDeclName_1575_){
_start:
{
lean_object* v___f_1577_; lean_object* v___f_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; 
v___f_1577_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___redArg___closed__0));
v___f_1578_ = lean_alloc_closure((void*)(l_Lean_Elab_mkElabAttribute___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1578_, 0, v_parserNamespace_1572_);
v___x_1579_ = ((lean_object*)(l_Lean_Elab_mkElabAttribute___redArg___closed__1));
v___x_1580_ = lean_string_append(v_kind_1574_, v___x_1579_);
v___x_1581_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1581_, 0, v_attrBuiltinName_1570_);
lean_ctor_set(v___x_1581_, 1, v_attrName_1571_);
lean_ctor_set(v___x_1581_, 2, v___x_1580_);
lean_ctor_set(v___x_1581_, 3, v_typeName_1573_);
lean_ctor_set(v___x_1581_, 4, v___f_1578_);
lean_ctor_set(v___x_1581_, 5, v___f_1577_);
v___x_1582_ = l_Lean_KeyedDeclsAttribute_init___redArg(v___x_1581_, v_attrDeclName_1575_);
return v___x_1582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___redArg___boxed(lean_object* v_attrBuiltinName_1583_, lean_object* v_attrName_1584_, lean_object* v_parserNamespace_1585_, lean_object* v_typeName_1586_, lean_object* v_kind_1587_, lean_object* v_attrDeclName_1588_, lean_object* v_a_1589_){
_start:
{
lean_object* v_res_1590_; 
v_res_1590_ = l_Lean_Elab_mkElabAttribute___redArg(v_attrBuiltinName_1583_, v_attrName_1584_, v_parserNamespace_1585_, v_typeName_1586_, v_kind_1587_, v_attrDeclName_1588_);
return v_res_1590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute(lean_object* v_00_u03b3_1591_, lean_object* v_attrBuiltinName_1592_, lean_object* v_attrName_1593_, lean_object* v_parserNamespace_1594_, lean_object* v_typeName_1595_, lean_object* v_kind_1596_, lean_object* v_attrDeclName_1597_){
_start:
{
lean_object* v___x_1599_; 
v___x_1599_ = l_Lean_Elab_mkElabAttribute___redArg(v_attrBuiltinName_1592_, v_attrName_1593_, v_parserNamespace_1594_, v_typeName_1595_, v_kind_1596_, v_attrDeclName_1597_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkElabAttribute___boxed(lean_object* v_00_u03b3_1600_, lean_object* v_attrBuiltinName_1601_, lean_object* v_attrName_1602_, lean_object* v_parserNamespace_1603_, lean_object* v_typeName_1604_, lean_object* v_kind_1605_, lean_object* v_attrDeclName_1606_, lean_object* v_a_1607_){
_start:
{
lean_object* v_res_1608_; 
v_res_1608_ = l_Lean_Elab_mkElabAttribute(v_00_u03b3_1600_, v_attrBuiltinName_1601_, v_attrName_1602_, v_parserNamespace_1603_, v_typeName_1604_, v_kind_1605_, v_attrDeclName_1606_);
return v_res_1608_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2(lean_object* v_00_u03b2_1609_, lean_object* v_m_1610_, lean_object* v_a_1611_){
_start:
{
lean_object* v___x_1612_; 
v___x_1612_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2___redArg(v_m_1610_, v_a_1611_);
return v___x_1612_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1613_, lean_object* v_m_1614_, lean_object* v_a_1615_){
_start:
{
lean_object* v_res_1616_; 
v_res_1616_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2(v_00_u03b2_1613_, v_m_1614_, v_a_1615_);
lean_dec(v_a_1615_);
lean_dec_ref(v_m_1614_);
return v_res_1616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5_spec__12(lean_object* v_t_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_){
_start:
{
lean_object* v___x_1621_; 
v___x_1621_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5_spec__12___redArg(v_t_1617_, v___y_1619_);
return v___x_1621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5_spec__12___boxed(lean_object* v_t_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_){
_start:
{
lean_object* v_res_1626_; 
v_res_1626_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__5_spec__12(v_t_1622_, v___y_1623_, v___y_1624_);
lean_dec(v___y_1624_);
lean_dec_ref(v___y_1623_);
return v_res_1626_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1627_, lean_object* v_x_1628_, lean_object* v_x_1629_){
_start:
{
uint8_t v___x_1630_; 
v___x_1630_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1___redArg(v_x_1628_, v_x_1629_);
return v___x_1630_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1631_, lean_object* v_x_1632_, lean_object* v_x_1633_){
_start:
{
uint8_t v_res_1634_; lean_object* v_r_1635_; 
v_res_1634_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1(v_00_u03b2_1631_, v_x_1632_, v_x_1633_);
lean_dec_ref(v_x_1633_);
lean_dec_ref(v_x_1632_);
v_r_1635_ = lean_box(v_res_1634_);
return v_r_1635_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1636_, lean_object* v_m_1637_, lean_object* v_a_1638_, lean_object* v_b_1639_){
_start:
{
lean_object* v___x_1640_; 
v___x_1640_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2___redArg(v_m_1637_, v_a_1638_, v_b_1639_);
return v___x_1640_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2_spec__6(lean_object* v_00_u03b2_1641_, lean_object* v_a_1642_, lean_object* v_x_1643_){
_start:
{
lean_object* v___x_1644_; 
v___x_1644_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2_spec__6___redArg(v_a_1642_, v_x_1643_);
return v___x_1644_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2_spec__6___boxed(lean_object* v_00_u03b2_1645_, lean_object* v_a_1646_, lean_object* v_x_1647_){
_start:
{
lean_object* v_res_1648_; 
v_res_1648_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__2_spec__6(v_00_u03b2_1645_, v_a_1646_, v_x_1647_);
lean_dec(v_x_1647_);
lean_dec(v_a_1646_);
return v_res_1648_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_1649_, lean_object* v_x_1650_, size_t v_x_1651_, lean_object* v_x_1652_){
_start:
{
uint8_t v___x_1653_; 
v___x_1653_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3___redArg(v_x_1650_, v_x_1651_, v_x_1652_);
return v___x_1653_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_1654_, lean_object* v_x_1655_, lean_object* v_x_1656_, lean_object* v_x_1657_){
_start:
{
size_t v_x_8274__boxed_1658_; uint8_t v_res_1659_; lean_object* v_r_1660_; 
v_x_8274__boxed_1658_ = lean_unbox_usize(v_x_1656_);
lean_dec(v_x_1656_);
v_res_1659_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_1654_, v_x_1655_, v_x_8274__boxed_1658_, v_x_1657_);
lean_dec_ref(v_x_1657_);
lean_dec_ref(v_x_1655_);
v_r_1660_ = lean_box(v_res_1659_);
return v_r_1660_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_1661_, lean_object* v_a_1662_, lean_object* v_x_1663_){
_start:
{
uint8_t v___x_1664_; 
v___x_1664_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__5___redArg(v_a_1662_, v_x_1663_);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_1665_, lean_object* v_a_1666_, lean_object* v_x_1667_){
_start:
{
uint8_t v_res_1668_; lean_object* v_r_1669_; 
v_res_1668_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__5(v_00_u03b2_1665_, v_a_1666_, v_x_1667_);
lean_dec(v_x_1667_);
lean_dec_ref(v_a_1666_);
v_r_1669_ = lean_box(v_res_1668_);
return v_r_1669_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__6(lean_object* v_00_u03b2_1670_, lean_object* v_data_1671_){
_start:
{
lean_object* v___x_1672_; 
v___x_1672_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__6___redArg(v_data_1671_);
return v___x_1672_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13(lean_object* v_00_u03b1_1673_, lean_object* v_constName_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_){
_start:
{
lean_object* v___x_1678_; 
v___x_1678_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13___redArg(v_constName_1674_, v___y_1675_, v___y_1676_);
return v___x_1678_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13___boxed(lean_object* v_00_u03b1_1679_, lean_object* v_constName_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_){
_start:
{
lean_object* v_res_1684_; 
v_res_1684_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13(v_00_u03b1_1679_, v_constName_1680_, v___y_1681_, v___y_1682_);
lean_dec(v___y_1682_);
lean_dec_ref(v___y_1681_);
return v_res_1684_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3_spec__9(lean_object* v_00_u03b2_1685_, lean_object* v_keys_1686_, lean_object* v_vals_1687_, lean_object* v_heq_1688_, lean_object* v_i_1689_, lean_object* v_k_1690_){
_start:
{
uint8_t v___x_1691_; 
v___x_1691_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3_spec__9___redArg(v_keys_1686_, v_i_1689_, v_k_1690_);
return v___x_1691_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3_spec__9___boxed(lean_object* v_00_u03b2_1692_, lean_object* v_keys_1693_, lean_object* v_vals_1694_, lean_object* v_heq_1695_, lean_object* v_i_1696_, lean_object* v_k_1697_){
_start:
{
uint8_t v_res_1698_; lean_object* v_r_1699_; 
v_res_1698_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__1_spec__3_spec__9(v_00_u03b2_1692_, v_keys_1693_, v_vals_1694_, v_heq_1695_, v_i_1696_, v_k_1697_);
lean_dec_ref(v_k_1697_);
lean_dec_ref(v_vals_1694_);
lean_dec_ref(v_keys_1693_);
v_r_1699_ = lean_box(v_res_1698_);
return v_r_1699_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__6_spec__13(lean_object* v_00_u03b2_1700_, lean_object* v_i_1701_, lean_object* v_source_1702_, lean_object* v_target_1703_){
_start:
{
lean_object* v___x_1704_; 
v___x_1704_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__6_spec__13___redArg(v_i_1701_, v_source_1702_, v_target_1703_);
return v___x_1704_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18(lean_object* v_00_u03b1_1705_, lean_object* v_ref_1706_, lean_object* v_constName_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_){
_start:
{
lean_object* v___x_1711_; 
v___x_1711_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18___redArg(v_ref_1706_, v_constName_1707_, v___y_1708_, v___y_1709_);
return v___x_1711_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18___boxed(lean_object* v_00_u03b1_1712_, lean_object* v_ref_1713_, lean_object* v_constName_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_){
_start:
{
lean_object* v_res_1718_; 
v_res_1718_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18(v_00_u03b1_1712_, v_ref_1713_, v_constName_1714_, v___y_1715_, v___y_1716_);
lean_dec(v___y_1716_);
lean_dec_ref(v___y_1715_);
lean_dec(v_ref_1713_);
return v_res_1718_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__6_spec__13_spec__18(lean_object* v_00_u03b2_1719_, lean_object* v_x_1720_, lean_object* v_x_1721_){
_start:
{
lean_object* v___x_1722_; 
v___x_1722_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0_spec__2_spec__6_spec__13_spec__18___redArg(v_x_1720_, v_x_1721_);
return v___x_1722_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21(lean_object* v_00_u03b1_1723_, lean_object* v_ref_1724_, lean_object* v_msg_1725_, lean_object* v_declHint_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_){
_start:
{
lean_object* v___x_1730_; 
v___x_1730_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21___redArg(v_ref_1724_, v_msg_1725_, v_declHint_1726_, v___y_1727_, v___y_1728_);
return v___x_1730_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21___boxed(lean_object* v_00_u03b1_1731_, lean_object* v_ref_1732_, lean_object* v_msg_1733_, lean_object* v_declHint_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_){
_start:
{
lean_object* v_res_1738_; 
v_res_1738_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21(v_00_u03b1_1731_, v_ref_1732_, v_msg_1733_, v_declHint_1734_, v___y_1735_, v___y_1736_);
lean_dec(v___y_1736_);
lean_dec_ref(v___y_1735_);
lean_dec(v_ref_1732_);
return v_res_1738_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23(lean_object* v_msg_1739_, lean_object* v_declHint_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_){
_start:
{
lean_object* v___x_1744_; 
v___x_1744_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___redArg(v_msg_1739_, v_declHint_1740_, v___y_1742_);
return v___x_1744_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23___boxed(lean_object* v_msg_1745_, lean_object* v_declHint_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_){
_start:
{
lean_object* v_res_1750_; 
v_res_1750_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__22_spec__23(v_msg_1745_, v_declHint_1746_, v___y_1747_, v___y_1748_);
lean_dec(v___y_1748_);
lean_dec_ref(v___y_1747_);
return v_res_1750_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__23(lean_object* v_00_u03b1_1751_, lean_object* v_ref_1752_, lean_object* v_msg_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_){
_start:
{
lean_object* v___x_1757_; 
v___x_1757_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__23___redArg(v_ref_1752_, v_msg_1753_, v___y_1754_, v___y_1755_);
return v___x_1757_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__23___boxed(lean_object* v_00_u03b1_1758_, lean_object* v_ref_1759_, lean_object* v_msg_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_){
_start:
{
lean_object* v_res_1764_; 
v_res_1764_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_mkElabAttribute_spec__1_spec__4_spec__9_spec__13_spec__18_spec__21_spec__23(v_00_u03b1_1758_, v_ref_1759_, v_msg_1760_, v___y_1761_, v___y_1762_);
lean_dec(v___y_1762_);
lean_dec_ref(v___y_1761_);
lean_dec(v_ref_1759_);
return v_res_1764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkMacroAttributeUnsafe(lean_object* v_ref_1775_){
_start:
{
lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; 
v___x_1777_ = ((lean_object*)(l_Lean_Elab_mkMacroAttributeUnsafe___closed__1));
v___x_1778_ = ((lean_object*)(l_Lean_Elab_mkMacroAttributeUnsafe___closed__2));
v___x_1779_ = ((lean_object*)(l_Lean_Elab_mkMacroAttributeUnsafe___closed__3));
v___x_1780_ = lean_box(0);
v___x_1781_ = ((lean_object*)(l_Lean_Elab_mkMacroAttributeUnsafe___closed__5));
v___x_1782_ = l_Lean_Elab_mkElabAttribute___redArg(v___x_1777_, v___x_1779_, v___x_1780_, v___x_1781_, v___x_1778_, v_ref_1775_);
return v___x_1782_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkMacroAttributeUnsafe___boxed(lean_object* v_ref_1783_, lean_object* v_a_1784_){
_start:
{
lean_object* v_res_1785_; 
v_res_1785_ = l_Lean_Elab_mkMacroAttributeUnsafe(v_ref_1783_);
return v_res_1785_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1792_; lean_object* v___x_1793_; 
v___x_1792_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2_));
v___x_1793_ = l_Lean_Elab_mkMacroAttributeUnsafe(v___x_1792_);
return v___x_1793_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2____boxed(lean_object* v_a_1794_){
_start:
{
lean_object* v_res_1795_; 
v_res_1795_ = l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2_();
return v_res_1795_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_docString__1(){
_start:
{
lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; 
v___x_1798_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2_));
v___x_1799_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_docString__1___closed__0));
v___x_1800_ = l_Lean_addBuiltinDocString(v___x_1798_, v___x_1799_);
return v___x_1800_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_docString__1___boxed(lean_object* v_a_1801_){
_start:
{
lean_object* v_res_1802_; 
v_res_1802_ = l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_docString__1();
return v_res_1802_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3(){
_start:
{
lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; 
v___x_1829_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2_));
v___x_1830_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___closed__6));
v___x_1831_ = l_Lean_addBuiltinDeclarationRanges(v___x_1829_, v___x_1830_);
return v___x_1831_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3___boxed(lean_object* v_a_1832_){
_start:
{
lean_object* v_res_1833_; 
v_res_1833_ = l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3();
return v_res_1833_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___lam__0(lean_object* v_toOLeanEntry_1834_, lean_object* v_a_1835_, lean_object* v_____r_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_){
_start:
{
lean_object* v_declName_1839_; lean_object* v___x_1841_; uint8_t v_isShared_1842_; uint8_t v_isSharedCheck_1850_; 
v_declName_1839_ = lean_ctor_get(v_toOLeanEntry_1834_, 1);
v_isSharedCheck_1850_ = !lean_is_exclusive(v_toOLeanEntry_1834_);
if (v_isSharedCheck_1850_ == 0)
{
lean_object* v_unused_1851_; 
v_unused_1851_ = lean_ctor_get(v_toOLeanEntry_1834_, 0);
lean_dec(v_unused_1851_);
v___x_1841_ = v_toOLeanEntry_1834_;
v_isShared_1842_ = v_isSharedCheck_1850_;
goto v_resetjp_1840_;
}
else
{
lean_inc(v_declName_1839_);
lean_dec(v_toOLeanEntry_1834_);
v___x_1841_ = lean_box(0);
v_isShared_1842_ = v_isSharedCheck_1850_;
goto v_resetjp_1840_;
}
v_resetjp_1840_:
{
lean_object* v___x_1843_; lean_object* v___x_1845_; 
v___x_1843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1843_, 0, v_a_1835_);
if (v_isShared_1842_ == 0)
{
lean_ctor_set(v___x_1841_, 1, v___x_1843_);
lean_ctor_set(v___x_1841_, 0, v_declName_1839_);
v___x_1845_ = v___x_1841_;
goto v_reusejp_1844_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v_declName_1839_);
lean_ctor_set(v_reuseFailAlloc_1849_, 1, v___x_1843_);
v___x_1845_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1844_;
}
v_reusejp_1844_:
{
lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; 
v___x_1846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1846_, 0, v___x_1845_);
v___x_1847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1846_);
v___x_1848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1847_);
lean_ctor_set(v___x_1848_, 1, v___y_1838_);
return v___x_1848_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___lam__0___boxed(lean_object* v_toOLeanEntry_1852_, lean_object* v_a_1853_, lean_object* v_____r_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_){
_start:
{
lean_object* v_res_1857_; 
v_res_1857_ = l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___lam__0(v_toOLeanEntry_1852_, v_a_1853_, v_____r_1854_, v___y_1855_, v___y_1856_);
lean_dec_ref(v___y_1855_);
return v_res_1857_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg(lean_object* v_stx_1861_, lean_object* v_as_x27_1862_, lean_object* v_b_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_){
_start:
{
if (lean_obj_tag(v_as_x27_1862_) == 0)
{
lean_object* v___x_1866_; 
lean_dec(v_stx_1861_);
v___x_1866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1866_, 0, v_b_1863_);
lean_ctor_set(v___x_1866_, 1, v___y_1865_);
return v___x_1866_;
}
else
{
lean_object* v_head_1867_; lean_object* v_tail_1868_; lean_object* v_toOLeanEntry_1869_; uint8_t v_isBuiltin_1870_; lean_object* v_value_1871_; lean_object* v_macroScope_1872_; lean_object* v_traceMsgs_1873_; lean_object* v_expandedMacroDecls_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1939_; 
lean_dec_ref(v_b_1863_);
v_head_1867_ = lean_ctor_get(v_as_x27_1862_, 0);
v_tail_1868_ = lean_ctor_get(v_as_x27_1862_, 1);
v_toOLeanEntry_1869_ = lean_ctor_get(v_head_1867_, 0);
v_isBuiltin_1870_ = lean_ctor_get_uint8(v_head_1867_, sizeof(void*)*2);
v_value_1871_ = lean_ctor_get(v_head_1867_, 1);
v_macroScope_1872_ = lean_ctor_get(v___y_1865_, 0);
v_traceMsgs_1873_ = lean_ctor_get(v___y_1865_, 1);
v_expandedMacroDecls_1874_ = lean_ctor_get(v___y_1865_, 2);
v_isSharedCheck_1939_ = !lean_is_exclusive(v___y_1865_);
if (v_isSharedCheck_1939_ == 0)
{
v___x_1876_ = v___y_1865_;
v_isShared_1877_ = v_isSharedCheck_1939_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_expandedMacroDecls_1874_);
lean_inc(v_traceMsgs_1873_);
lean_inc(v_macroScope_1872_);
lean_dec(v___y_1865_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1939_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v_methods_1878_; lean_object* v_quotContext_1879_; lean_object* v_currRecDepth_1880_; lean_object* v_maxRecDepth_1881_; lean_object* v_ref_1882_; lean_object* v___x_1883_; lean_object* v_a_1885_; lean_object* v_a_1886_; lean_object* v___x_1890_; lean_object* v_a_1892_; lean_object* v_a_1893_; lean_object* v___y_1900_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1909_; 
v_methods_1878_ = lean_ctor_get(v___y_1864_, 0);
v_quotContext_1879_ = lean_ctor_get(v___y_1864_, 1);
v_currRecDepth_1880_ = lean_ctor_get(v___y_1864_, 3);
v_maxRecDepth_1881_ = lean_ctor_get(v___y_1864_, 4);
v_ref_1882_ = lean_ctor_get(v___y_1864_, 5);
v___x_1883_ = lean_box(0);
v___x_1890_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___closed__0));
v___x_1906_ = lean_unsigned_to_nat(1u);
v___x_1907_ = lean_nat_add(v_macroScope_1872_, v___x_1906_);
if (v_isShared_1877_ == 0)
{
lean_ctor_set(v___x_1876_, 0, v___x_1907_);
v___x_1909_ = v___x_1876_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1938_; 
v_reuseFailAlloc_1938_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1938_, 0, v___x_1907_);
lean_ctor_set(v_reuseFailAlloc_1938_, 1, v_traceMsgs_1873_);
lean_ctor_set(v_reuseFailAlloc_1938_, 2, v_expandedMacroDecls_1874_);
v___x_1909_ = v_reuseFailAlloc_1938_;
goto v_reusejp_1908_;
}
v___jp_1884_:
{
lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; 
v___x_1887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1887_, 0, v_a_1885_);
v___x_1888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1888_, 0, v___x_1887_);
lean_ctor_set(v___x_1888_, 1, v___x_1883_);
v___x_1889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1889_, 0, v___x_1888_);
lean_ctor_set(v___x_1889_, 1, v_a_1886_);
return v___x_1889_;
}
v___jp_1891_:
{
if (lean_obj_tag(v_a_1892_) == 1)
{
v_as_x27_1862_ = v_tail_1868_;
v_b_1863_ = v___x_1890_;
v___y_1865_ = v_a_1893_;
goto _start;
}
else
{
lean_object* v_declName_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; 
lean_dec(v_stx_1861_);
v_declName_1895_ = lean_ctor_get(v_toOLeanEntry_1869_, 1);
v___x_1896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1896_, 0, v_a_1892_);
lean_inc(v_declName_1895_);
v___x_1897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1897_, 0, v_declName_1895_);
lean_ctor_set(v___x_1897_, 1, v___x_1896_);
v___x_1898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1898_, 0, v___x_1897_);
v_a_1885_ = v___x_1898_;
v_a_1886_ = v_a_1893_;
goto v___jp_1884_;
}
}
v___jp_1899_:
{
lean_object* v_a_1901_; 
v_a_1901_ = lean_ctor_get(v___y_1900_, 0);
if (lean_obj_tag(v_a_1901_) == 0)
{
lean_object* v_a_1902_; lean_object* v_a_1903_; 
lean_inc_ref(v_a_1901_);
lean_dec(v_stx_1861_);
v_a_1902_ = lean_ctor_get(v___y_1900_, 1);
lean_inc(v_a_1902_);
lean_dec_ref(v___y_1900_);
v_a_1903_ = lean_ctor_get(v_a_1901_, 0);
lean_inc(v_a_1903_);
lean_dec_ref_known(v_a_1901_, 1);
v_a_1885_ = v_a_1903_;
v_a_1886_ = v_a_1902_;
goto v___jp_1884_;
}
else
{
lean_object* v_a_1904_; 
v_a_1904_ = lean_ctor_get(v___y_1900_, 1);
lean_inc(v_a_1904_);
lean_dec_ref(v___y_1900_);
v_as_x27_1862_ = v_tail_1868_;
v_b_1863_ = v___x_1890_;
v___y_1865_ = v_a_1904_;
goto _start;
}
}
v_reusejp_1908_:
{
lean_object* v___x_1910_; lean_object* v___x_1911_; 
lean_inc(v_ref_1882_);
lean_inc(v_maxRecDepth_1881_);
lean_inc(v_currRecDepth_1880_);
lean_inc(v_quotContext_1879_);
lean_inc(v_methods_1878_);
v___x_1910_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1910_, 0, v_methods_1878_);
lean_ctor_set(v___x_1910_, 1, v_quotContext_1879_);
lean_ctor_set(v___x_1910_, 2, v_macroScope_1872_);
lean_ctor_set(v___x_1910_, 3, v_currRecDepth_1880_);
lean_ctor_set(v___x_1910_, 4, v_maxRecDepth_1881_);
lean_ctor_set(v___x_1910_, 5, v_ref_1882_);
lean_inc(v_value_1871_);
lean_inc(v_stx_1861_);
v___x_1911_ = lean_apply_3(v_value_1871_, v_stx_1861_, v___x_1910_, v___x_1909_);
if (lean_obj_tag(v___x_1911_) == 0)
{
if (v_isBuiltin_1870_ == 0)
{
lean_object* v_a_1912_; lean_object* v_a_1913_; lean_object* v___x_1915_; uint8_t v_isShared_1916_; uint8_t v_isSharedCheck_1932_; 
v_a_1912_ = lean_ctor_get(v___x_1911_, 1);
v_a_1913_ = lean_ctor_get(v___x_1911_, 0);
v_isSharedCheck_1932_ = !lean_is_exclusive(v___x_1911_);
if (v_isSharedCheck_1932_ == 0)
{
v___x_1915_ = v___x_1911_;
v_isShared_1916_ = v_isSharedCheck_1932_;
goto v_resetjp_1914_;
}
else
{
lean_inc(v_a_1912_);
lean_inc(v_a_1913_);
lean_dec(v___x_1911_);
v___x_1915_ = lean_box(0);
v_isShared_1916_ = v_isSharedCheck_1932_;
goto v_resetjp_1914_;
}
v_resetjp_1914_:
{
lean_object* v_macroScope_1917_; lean_object* v_traceMsgs_1918_; lean_object* v_expandedMacroDecls_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1931_; 
v_macroScope_1917_ = lean_ctor_get(v_a_1912_, 0);
v_traceMsgs_1918_ = lean_ctor_get(v_a_1912_, 1);
v_expandedMacroDecls_1919_ = lean_ctor_get(v_a_1912_, 2);
v_isSharedCheck_1931_ = !lean_is_exclusive(v_a_1912_);
if (v_isSharedCheck_1931_ == 0)
{
v___x_1921_ = v_a_1912_;
v_isShared_1922_ = v_isSharedCheck_1931_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_expandedMacroDecls_1919_);
lean_inc(v_traceMsgs_1918_);
lean_inc(v_macroScope_1917_);
lean_dec(v_a_1912_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1931_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v_declName_1923_; lean_object* v___x_1925_; 
v_declName_1923_ = lean_ctor_get(v_toOLeanEntry_1869_, 1);
lean_inc(v_declName_1923_);
if (v_isShared_1916_ == 0)
{
lean_ctor_set_tag(v___x_1915_, 1);
lean_ctor_set(v___x_1915_, 1, v_expandedMacroDecls_1919_);
lean_ctor_set(v___x_1915_, 0, v_declName_1923_);
v___x_1925_ = v___x_1915_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v_declName_1923_);
lean_ctor_set(v_reuseFailAlloc_1930_, 1, v_expandedMacroDecls_1919_);
v___x_1925_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
lean_object* v___x_1927_; 
if (v_isShared_1922_ == 0)
{
lean_ctor_set(v___x_1921_, 2, v___x_1925_);
v___x_1927_ = v___x_1921_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1929_; 
v_reuseFailAlloc_1929_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1929_, 0, v_macroScope_1917_);
lean_ctor_set(v_reuseFailAlloc_1929_, 1, v_traceMsgs_1918_);
lean_ctor_set(v_reuseFailAlloc_1929_, 2, v___x_1925_);
v___x_1927_ = v_reuseFailAlloc_1929_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
lean_object* v___x_1928_; 
lean_inc_ref(v_toOLeanEntry_1869_);
v___x_1928_ = l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___lam__0(v_toOLeanEntry_1869_, v_a_1913_, v___x_1883_, v___y_1864_, v___x_1927_);
v___y_1900_ = v___x_1928_;
goto v___jp_1899_;
}
}
}
}
}
else
{
lean_object* v_a_1933_; lean_object* v_a_1934_; lean_object* v___x_1935_; 
v_a_1933_ = lean_ctor_get(v___x_1911_, 0);
lean_inc(v_a_1933_);
v_a_1934_ = lean_ctor_get(v___x_1911_, 1);
lean_inc(v_a_1934_);
lean_dec_ref_known(v___x_1911_, 2);
lean_inc_ref(v_toOLeanEntry_1869_);
v___x_1935_ = l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___lam__0(v_toOLeanEntry_1869_, v_a_1933_, v___x_1883_, v___y_1864_, v_a_1934_);
v___y_1900_ = v___x_1935_;
goto v___jp_1899_;
}
}
else
{
lean_object* v_a_1936_; lean_object* v_a_1937_; 
v_a_1936_ = lean_ctor_get(v___x_1911_, 0);
lean_inc(v_a_1936_);
v_a_1937_ = lean_ctor_get(v___x_1911_, 1);
lean_inc(v_a_1937_);
lean_dec_ref_known(v___x_1911_, 2);
v_a_1892_ = v_a_1936_;
v_a_1893_ = v_a_1937_;
goto v___jp_1891_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___boxed(lean_object* v_stx_1940_, lean_object* v_as_x27_1941_, lean_object* v_b_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_){
_start:
{
lean_object* v_res_1945_; 
v_res_1945_ = l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg(v_stx_1940_, v_as_x27_1941_, v_b_1942_, v___y_1943_, v___y_1944_);
lean_dec_ref(v___y_1943_);
lean_dec(v_as_x27_1941_);
return v_res_1945_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object* v_env_1946_, lean_object* v_stx_1947_, lean_object* v_a_1948_, lean_object* v_a_1949_){
_start:
{
lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v_a_1956_; lean_object* v_fst_1957_; 
v___x_1950_ = l_Lean_Elab_macroAttribute;
lean_inc(v_stx_1947_);
v___x_1951_ = l_Lean_Syntax_getKind(v_stx_1947_);
v___x_1952_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_1950_, v_env_1946_, v___x_1951_);
lean_dec(v___x_1951_);
v___x_1953_ = lean_box(0);
v___x_1954_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg___closed__0));
v___x_1955_ = l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg(v_stx_1947_, v___x_1952_, v___x_1954_, v_a_1948_, v_a_1949_);
lean_dec(v___x_1952_);
v_a_1956_ = lean_ctor_get(v___x_1955_, 0);
v_fst_1957_ = lean_ctor_get(v_a_1956_, 0);
if (lean_obj_tag(v_fst_1957_) == 0)
{
lean_object* v_a_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1965_; 
v_a_1958_ = lean_ctor_get(v___x_1955_, 1);
v_isSharedCheck_1965_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_1965_ == 0)
{
lean_object* v_unused_1966_; 
v_unused_1966_ = lean_ctor_get(v___x_1955_, 0);
lean_dec(v_unused_1966_);
v___x_1960_ = v___x_1955_;
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_a_1958_);
lean_dec(v___x_1955_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1963_; 
if (v_isShared_1961_ == 0)
{
lean_ctor_set(v___x_1960_, 0, v___x_1953_);
v___x_1963_ = v___x_1960_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v___x_1953_);
lean_ctor_set(v_reuseFailAlloc_1964_, 1, v_a_1958_);
v___x_1963_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
return v___x_1963_;
}
}
}
else
{
lean_object* v_a_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1975_; 
lean_inc_ref(v_fst_1957_);
v_a_1967_ = lean_ctor_get(v___x_1955_, 1);
v_isSharedCheck_1975_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_1975_ == 0)
{
lean_object* v_unused_1976_; 
v_unused_1976_ = lean_ctor_get(v___x_1955_, 0);
lean_dec(v_unused_1976_);
v___x_1969_ = v___x_1955_;
v_isShared_1970_ = v_isSharedCheck_1975_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_a_1967_);
lean_dec(v___x_1955_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_1975_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v_val_1971_; lean_object* v___x_1973_; 
v_val_1971_ = lean_ctor_get(v_fst_1957_, 0);
lean_inc(v_val_1971_);
lean_dec_ref_known(v_fst_1957_, 1);
if (v_isShared_1970_ == 0)
{
lean_ctor_set(v___x_1969_, 0, v_val_1971_);
v___x_1973_ = v___x_1969_;
goto v_reusejp_1972_;
}
else
{
lean_object* v_reuseFailAlloc_1974_; 
v_reuseFailAlloc_1974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1974_, 0, v_val_1971_);
lean_ctor_set(v_reuseFailAlloc_1974_, 1, v_a_1967_);
v___x_1973_ = v_reuseFailAlloc_1974_;
goto v_reusejp_1972_;
}
v_reusejp_1972_:
{
return v___x_1973_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandMacroImpl_x3f___boxed(lean_object* v_env_1977_, lean_object* v_stx_1978_, lean_object* v_a_1979_, lean_object* v_a_1980_){
_start:
{
lean_object* v_res_1981_; 
v_res_1981_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_1977_, v_stx_1978_, v_a_1979_, v_a_1980_);
lean_dec_ref(v_a_1979_);
return v_res_1981_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0(lean_object* v_stx_1982_, lean_object* v_as_1983_, lean_object* v_as_x27_1984_, lean_object* v_b_1985_, lean_object* v_a_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_){
_start:
{
lean_object* v___x_1989_; 
v___x_1989_ = l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___redArg(v_stx_1982_, v_as_x27_1984_, v_b_1985_, v___y_1987_, v___y_1988_);
return v___x_1989_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0___boxed(lean_object* v_stx_1990_, lean_object* v_as_1991_, lean_object* v_as_x27_1992_, lean_object* v_b_1993_, lean_object* v_a_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_){
_start:
{
lean_object* v_res_1997_; 
v_res_1997_ = l_List_forIn_x27_loop___at___00Lean_Elab_expandMacroImpl_x3f_spec__0(v_stx_1990_, v_as_1991_, v_as_x27_1992_, v_b_1993_, v_a_1994_, v___y_1995_, v___y_1996_);
lean_dec_ref(v___y_1995_);
lean_dec(v_as_x27_1992_);
lean_dec(v_as_1991_);
return v_res_1997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadMacroAdapterOfMonadLiftOfMonadQuotation___redArg___lam__0(lean_object* v_setNextMacroScope_1998_, lean_object* v_inst_1999_, lean_object* v_s_2000_){
_start:
{
lean_object* v___x_2001_; lean_object* v___x_2002_; 
v___x_2001_ = lean_apply_1(v_setNextMacroScope_1998_, v_s_2000_);
v___x_2002_ = lean_apply_2(v_inst_1999_, lean_box(0), v___x_2001_);
return v___x_2002_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadMacroAdapterOfMonadLiftOfMonadQuotation___redArg(lean_object* v_inst_2003_, lean_object* v_inst_2004_, lean_object* v_inst_2005_){
_start:
{
lean_object* v_getNextMacroScope_2006_; lean_object* v_setNextMacroScope_2007_; lean_object* v___x_2009_; uint8_t v_isShared_2010_; uint8_t v_isSharedCheck_2016_; 
v_getNextMacroScope_2006_ = lean_ctor_get(v_inst_2005_, 1);
v_setNextMacroScope_2007_ = lean_ctor_get(v_inst_2005_, 2);
v_isSharedCheck_2016_ = !lean_is_exclusive(v_inst_2005_);
if (v_isSharedCheck_2016_ == 0)
{
lean_object* v_unused_2017_; 
v_unused_2017_ = lean_ctor_get(v_inst_2005_, 0);
lean_dec(v_unused_2017_);
v___x_2009_ = v_inst_2005_;
v_isShared_2010_ = v_isSharedCheck_2016_;
goto v_resetjp_2008_;
}
else
{
lean_inc(v_setNextMacroScope_2007_);
lean_inc(v_getNextMacroScope_2006_);
lean_dec(v_inst_2005_);
v___x_2009_ = lean_box(0);
v_isShared_2010_ = v_isSharedCheck_2016_;
goto v_resetjp_2008_;
}
v_resetjp_2008_:
{
lean_object* v___f_2011_; lean_object* v___x_2012_; lean_object* v___x_2014_; 
lean_inc(v_inst_2003_);
v___f_2011_ = lean_alloc_closure((void*)(l_Lean_Elab_instMonadMacroAdapterOfMonadLiftOfMonadQuotation___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2011_, 0, v_setNextMacroScope_2007_);
lean_closure_set(v___f_2011_, 1, v_inst_2003_);
v___x_2012_ = lean_apply_2(v_inst_2003_, lean_box(0), v_getNextMacroScope_2006_);
if (v_isShared_2010_ == 0)
{
lean_ctor_set(v___x_2009_, 2, v___f_2011_);
lean_ctor_set(v___x_2009_, 1, v___x_2012_);
lean_ctor_set(v___x_2009_, 0, v_inst_2004_);
v___x_2014_ = v___x_2009_;
goto v_reusejp_2013_;
}
else
{
lean_object* v_reuseFailAlloc_2015_; 
v_reuseFailAlloc_2015_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2015_, 0, v_inst_2004_);
lean_ctor_set(v_reuseFailAlloc_2015_, 1, v___x_2012_);
lean_ctor_set(v_reuseFailAlloc_2015_, 2, v___f_2011_);
v___x_2014_ = v_reuseFailAlloc_2015_;
goto v_reusejp_2013_;
}
v_reusejp_2013_:
{
return v___x_2014_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instMonadMacroAdapterOfMonadLiftOfMonadQuotation(lean_object* v_m_2018_, lean_object* v_n_2019_, lean_object* v_inst_2020_, lean_object* v_inst_2021_, lean_object* v_inst_2022_){
_start:
{
lean_object* v_getNextMacroScope_2023_; lean_object* v_setNextMacroScope_2024_; lean_object* v___x_2026_; uint8_t v_isShared_2027_; uint8_t v_isSharedCheck_2033_; 
v_getNextMacroScope_2023_ = lean_ctor_get(v_inst_2022_, 1);
v_setNextMacroScope_2024_ = lean_ctor_get(v_inst_2022_, 2);
v_isSharedCheck_2033_ = !lean_is_exclusive(v_inst_2022_);
if (v_isSharedCheck_2033_ == 0)
{
lean_object* v_unused_2034_; 
v_unused_2034_ = lean_ctor_get(v_inst_2022_, 0);
lean_dec(v_unused_2034_);
v___x_2026_ = v_inst_2022_;
v_isShared_2027_ = v_isSharedCheck_2033_;
goto v_resetjp_2025_;
}
else
{
lean_inc(v_setNextMacroScope_2024_);
lean_inc(v_getNextMacroScope_2023_);
lean_dec(v_inst_2022_);
v___x_2026_ = lean_box(0);
v_isShared_2027_ = v_isSharedCheck_2033_;
goto v_resetjp_2025_;
}
v_resetjp_2025_:
{
lean_object* v___f_2028_; lean_object* v___x_2029_; lean_object* v___x_2031_; 
lean_inc(v_inst_2020_);
v___f_2028_ = lean_alloc_closure((void*)(l_Lean_Elab_instMonadMacroAdapterOfMonadLiftOfMonadQuotation___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2028_, 0, v_setNextMacroScope_2024_);
lean_closure_set(v___f_2028_, 1, v_inst_2020_);
v___x_2029_ = lean_apply_2(v_inst_2020_, lean_box(0), v_getNextMacroScope_2023_);
if (v_isShared_2027_ == 0)
{
lean_ctor_set(v___x_2026_, 2, v___f_2028_);
lean_ctor_set(v___x_2026_, 1, v___x_2029_);
lean_ctor_set(v___x_2026_, 0, v_inst_2021_);
v___x_2031_ = v___x_2026_;
goto v_reusejp_2030_;
}
else
{
lean_object* v_reuseFailAlloc_2032_; 
v_reuseFailAlloc_2032_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2032_, 0, v_inst_2021_);
lean_ctor_set(v_reuseFailAlloc_2032_, 1, v___x_2029_);
lean_ctor_set(v_reuseFailAlloc_2032_, 2, v___f_2028_);
v___x_2031_ = v_reuseFailAlloc_2032_;
goto v_reusejp_2030_;
}
v_reusejp_2030_:
{
return v___x_2031_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__0(lean_object* v_toPure_2035_, lean_object* v_fst_2036_, lean_object* v_____do__lift_2037_, lean_object* v_____do__lift_2038_){
_start:
{
uint8_t v_hasTrace_2039_; 
v_hasTrace_2039_ = lean_ctor_get_uint8(v_____do__lift_2038_, sizeof(void*)*1);
if (v_hasTrace_2039_ == 0)
{
lean_object* v___x_2040_; lean_object* v___x_2041_; 
lean_dec(v_fst_2036_);
v___x_2040_ = lean_box(v_hasTrace_2039_);
v___x_2041_ = lean_apply_2(v_toPure_2035_, lean_box(0), v___x_2040_);
return v___x_2041_;
}
else
{
lean_object* v___x_2042_; lean_object* v___x_2043_; uint8_t v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; 
v___x_2042_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__11));
v___x_2043_ = l_Lean_Name_append(v___x_2042_, v_fst_2036_);
v___x_2044_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_____do__lift_2037_, v_____do__lift_2038_, v___x_2043_);
lean_dec(v___x_2043_);
v___x_2045_ = lean_box(v___x_2044_);
v___x_2046_ = lean_apply_2(v_toPure_2035_, lean_box(0), v___x_2045_);
return v___x_2046_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__0___boxed(lean_object* v_toPure_2047_, lean_object* v_fst_2048_, lean_object* v_____do__lift_2049_, lean_object* v_____do__lift_2050_){
_start:
{
lean_object* v_res_2051_; 
v_res_2051_ = l_Lean_Elab_liftMacroM___redArg___lam__0(v_toPure_2047_, v_fst_2048_, v_____do__lift_2049_, v_____do__lift_2050_);
lean_dec_ref(v_____do__lift_2050_);
lean_dec_ref(v_____do__lift_2049_);
return v_res_2051_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__1(lean_object* v_inst_2052_, lean_object* v_toPure_2053_, lean_object* v_fst_2054_, lean_object* v_toBind_2055_, lean_object* v_____do__lift_2056_){
_start:
{
lean_object* v_getOptionsUnrestricted_2057_; lean_object* v___f_2058_; lean_object* v___x_2059_; 
v_getOptionsUnrestricted_2057_ = lean_ctor_get(v_inst_2052_, 1);
lean_inc(v_getOptionsUnrestricted_2057_);
lean_dec_ref(v_inst_2052_);
v___f_2058_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_2058_, 0, v_toPure_2053_);
lean_closure_set(v___f_2058_, 1, v_fst_2054_);
lean_closure_set(v___f_2058_, 2, v_____do__lift_2056_);
v___x_2059_ = lean_apply_4(v_toBind_2055_, lean_box(0), lean_box(0), v_getOptionsUnrestricted_2057_, v___f_2058_);
return v___x_2059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__2(lean_object* v_toPure_2060_, lean_object* v_snd_2061_, lean_object* v_inst_2062_, lean_object* v_inst_2063_, lean_object* v_toMonadRef_2064_, lean_object* v_inst_2065_, lean_object* v_fst_2066_, uint8_t v_____do__lift_2067_){
_start:
{
if (v_____do__lift_2067_ == 0)
{
lean_object* v___x_2068_; lean_object* v___x_2069_; 
lean_dec(v_fst_2066_);
lean_dec(v_inst_2065_);
lean_dec_ref(v_toMonadRef_2064_);
lean_dec_ref(v_inst_2063_);
lean_dec_ref(v_inst_2062_);
lean_dec_ref(v_snd_2061_);
v___x_2068_ = lean_box(0);
v___x_2069_ = lean_apply_2(v_toPure_2060_, lean_box(0), v___x_2068_);
return v___x_2069_;
}
else
{
lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; 
lean_dec(v_toPure_2060_);
v___x_2070_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2070_, 0, v_snd_2061_);
v___x_2071_ = l_Lean_MessageData_ofFormat(v___x_2070_);
v___x_2072_ = l_Lean_addTrace___redArg(v_inst_2062_, v_inst_2063_, v_toMonadRef_2064_, v_inst_2065_, v_fst_2066_, v___x_2071_);
return v___x_2072_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__2___boxed(lean_object* v_toPure_2073_, lean_object* v_snd_2074_, lean_object* v_inst_2075_, lean_object* v_inst_2076_, lean_object* v_toMonadRef_2077_, lean_object* v_inst_2078_, lean_object* v_fst_2079_, lean_object* v_____do__lift_2080_){
_start:
{
uint8_t v_____do__lift_1475__boxed_2081_; lean_object* v_res_2082_; 
v_____do__lift_1475__boxed_2081_ = lean_unbox(v_____do__lift_2080_);
v_res_2082_ = l_Lean_Elab_liftMacroM___redArg___lam__2(v_toPure_2073_, v_snd_2074_, v_inst_2075_, v_inst_2076_, v_toMonadRef_2077_, v_inst_2078_, v_fst_2079_, v_____do__lift_1475__boxed_2081_);
return v_res_2082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__3(lean_object* v_inst_2083_, lean_object* v_inst_2084_, lean_object* v_toPure_2085_, lean_object* v_toBind_2086_, lean_object* v_inst_2087_, lean_object* v_toMonadRef_2088_, lean_object* v_inst_2089_, lean_object* v_x_2090_){
_start:
{
lean_object* v_fst_2091_; lean_object* v_snd_2092_; lean_object* v_getInheritedTraceOptions_2093_; lean_object* v___f_2094_; lean_object* v___f_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; 
v_fst_2091_ = lean_ctor_get(v_x_2090_, 0);
lean_inc_n(v_fst_2091_, 2);
v_snd_2092_ = lean_ctor_get(v_x_2090_, 1);
lean_inc(v_snd_2092_);
lean_dec_ref(v_x_2090_);
v_getInheritedTraceOptions_2093_ = lean_ctor_get(v_inst_2083_, 2);
lean_inc(v_getInheritedTraceOptions_2093_);
lean_inc_n(v_toBind_2086_, 2);
lean_inc(v_toPure_2085_);
v___f_2094_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__1), 5, 4);
lean_closure_set(v___f_2094_, 0, v_inst_2084_);
lean_closure_set(v___f_2094_, 1, v_toPure_2085_);
lean_closure_set(v___f_2094_, 2, v_fst_2091_);
lean_closure_set(v___f_2094_, 3, v_toBind_2086_);
v___f_2095_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_2095_, 0, v_toPure_2085_);
lean_closure_set(v___f_2095_, 1, v_snd_2092_);
lean_closure_set(v___f_2095_, 2, v_inst_2087_);
lean_closure_set(v___f_2095_, 3, v_inst_2083_);
lean_closure_set(v___f_2095_, 4, v_toMonadRef_2088_);
lean_closure_set(v___f_2095_, 5, v_inst_2089_);
lean_closure_set(v___f_2095_, 6, v_fst_2091_);
v___x_2096_ = lean_apply_4(v_toBind_2086_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_2093_, v___f_2094_);
v___x_2097_ = lean_apply_4(v_toBind_2086_, lean_box(0), lean_box(0), v___x_2096_, v___f_2095_);
return v___x_2097_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__4(lean_object* v_env_2098_, lean_object* v___x_2099_, lean_object* v___x_2100_, lean_object* v_stx_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_){
_start:
{
lean_object* v___x_2104_; 
v___x_2104_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_2098_, v_stx_2101_, v___y_2102_, v___y_2103_);
if (lean_obj_tag(v___x_2104_) == 0)
{
lean_object* v_a_2105_; 
v_a_2105_ = lean_ctor_get(v___x_2104_, 0);
lean_inc(v_a_2105_);
if (lean_obj_tag(v_a_2105_) == 0)
{
lean_object* v_a_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2114_; 
lean_dec(v___x_2100_);
lean_dec_ref(v___x_2099_);
v_a_2106_ = lean_ctor_get(v___x_2104_, 1);
v_isSharedCheck_2114_ = !lean_is_exclusive(v___x_2104_);
if (v_isSharedCheck_2114_ == 0)
{
lean_object* v_unused_2115_; 
v_unused_2115_ = lean_ctor_get(v___x_2104_, 0);
lean_dec(v_unused_2115_);
v___x_2108_ = v___x_2104_;
v_isShared_2109_ = v_isSharedCheck_2114_;
goto v_resetjp_2107_;
}
else
{
lean_inc(v_a_2106_);
lean_dec(v___x_2104_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2114_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v___x_2110_; lean_object* v___x_2112_; 
v___x_2110_ = lean_box(0);
if (v_isShared_2109_ == 0)
{
lean_ctor_set(v___x_2108_, 0, v___x_2110_);
v___x_2112_ = v___x_2108_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2113_; 
v_reuseFailAlloc_2113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2113_, 0, v___x_2110_);
lean_ctor_set(v_reuseFailAlloc_2113_, 1, v_a_2106_);
v___x_2112_ = v_reuseFailAlloc_2113_;
goto v_reusejp_2111_;
}
v_reusejp_2111_:
{
return v___x_2112_;
}
}
}
else
{
lean_object* v_val_2116_; lean_object* v___x_2118_; uint8_t v_isShared_2119_; uint8_t v_isSharedCheck_2146_; 
v_val_2116_ = lean_ctor_get(v_a_2105_, 0);
v_isSharedCheck_2146_ = !lean_is_exclusive(v_a_2105_);
if (v_isSharedCheck_2146_ == 0)
{
v___x_2118_ = v_a_2105_;
v_isShared_2119_ = v_isSharedCheck_2146_;
goto v_resetjp_2117_;
}
else
{
lean_inc(v_val_2116_);
lean_dec(v_a_2105_);
v___x_2118_ = lean_box(0);
v_isShared_2119_ = v_isSharedCheck_2146_;
goto v_resetjp_2117_;
}
v_resetjp_2117_:
{
lean_object* v_snd_2120_; 
v_snd_2120_ = lean_ctor_get(v_val_2116_, 1);
lean_inc(v_snd_2120_);
lean_dec(v_val_2116_);
if (lean_obj_tag(v_snd_2120_) == 0)
{
lean_object* v_a_2121_; lean_object* v_a_2122_; lean_object* v___x_2124_; uint8_t v_isShared_2125_; uint8_t v_isSharedCheck_2131_; 
lean_del_object(v___x_2118_);
v_a_2121_ = lean_ctor_get(v___x_2104_, 1);
lean_inc(v_a_2121_);
lean_dec_ref_known(v___x_2104_, 2);
v_a_2122_ = lean_ctor_get(v_snd_2120_, 0);
v_isSharedCheck_2131_ = !lean_is_exclusive(v_snd_2120_);
if (v_isSharedCheck_2131_ == 0)
{
v___x_2124_ = v_snd_2120_;
v_isShared_2125_ = v_isSharedCheck_2131_;
goto v_resetjp_2123_;
}
else
{
lean_inc(v_a_2122_);
lean_dec(v_snd_2120_);
v___x_2124_ = lean_box(0);
v_isShared_2125_ = v_isSharedCheck_2131_;
goto v_resetjp_2123_;
}
v_resetjp_2123_:
{
lean_object* v___x_2127_; 
if (v_isShared_2125_ == 0)
{
v___x_2127_ = v___x_2124_;
goto v_reusejp_2126_;
}
else
{
lean_object* v_reuseFailAlloc_2130_; 
v_reuseFailAlloc_2130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2130_, 0, v_a_2122_);
v___x_2127_ = v_reuseFailAlloc_2130_;
goto v_reusejp_2126_;
}
v_reusejp_2126_:
{
lean_object* v___x_1206__overap_2128_; lean_object* v___x_2129_; 
v___x_1206__overap_2128_ = l_liftExcept___redArg(v___x_2099_, v___x_2100_, v___x_2127_);
lean_inc_ref(v___y_2102_);
v___x_2129_ = lean_apply_2(v___x_1206__overap_2128_, v___y_2102_, v_a_2121_);
return v___x_2129_;
}
}
}
else
{
lean_object* v_a_2132_; lean_object* v_a_2133_; lean_object* v___x_2135_; uint8_t v_isShared_2136_; uint8_t v_isSharedCheck_2145_; 
v_a_2132_ = lean_ctor_get(v___x_2104_, 1);
lean_inc(v_a_2132_);
lean_dec_ref_known(v___x_2104_, 2);
v_a_2133_ = lean_ctor_get(v_snd_2120_, 0);
v_isSharedCheck_2145_ = !lean_is_exclusive(v_snd_2120_);
if (v_isSharedCheck_2145_ == 0)
{
v___x_2135_ = v_snd_2120_;
v_isShared_2136_ = v_isSharedCheck_2145_;
goto v_resetjp_2134_;
}
else
{
lean_inc(v_a_2133_);
lean_dec(v_snd_2120_);
v___x_2135_ = lean_box(0);
v_isShared_2136_ = v_isSharedCheck_2145_;
goto v_resetjp_2134_;
}
v_resetjp_2134_:
{
lean_object* v___x_2138_; 
if (v_isShared_2119_ == 0)
{
lean_ctor_set(v___x_2118_, 0, v_a_2133_);
v___x_2138_ = v___x_2118_;
goto v_reusejp_2137_;
}
else
{
lean_object* v_reuseFailAlloc_2144_; 
v_reuseFailAlloc_2144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2144_, 0, v_a_2133_);
v___x_2138_ = v_reuseFailAlloc_2144_;
goto v_reusejp_2137_;
}
v_reusejp_2137_:
{
lean_object* v___x_2140_; 
if (v_isShared_2136_ == 0)
{
lean_ctor_set(v___x_2135_, 0, v___x_2138_);
v___x_2140_ = v___x_2135_;
goto v_reusejp_2139_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v___x_2138_);
v___x_2140_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2139_;
}
v_reusejp_2139_:
{
lean_object* v___x_1210__overap_2141_; lean_object* v___x_2142_; 
v___x_1210__overap_2141_ = l_liftExcept___redArg(v___x_2099_, v___x_2100_, v___x_2140_);
lean_inc_ref(v___y_2102_);
v___x_2142_ = lean_apply_2(v___x_1210__overap_2141_, v___y_2102_, v_a_2132_);
return v___x_2142_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2147_; lean_object* v_a_2148_; lean_object* v___x_2150_; uint8_t v_isShared_2151_; uint8_t v_isSharedCheck_2155_; 
lean_dec(v___x_2100_);
lean_dec_ref(v___x_2099_);
v_a_2147_ = lean_ctor_get(v___x_2104_, 0);
v_a_2148_ = lean_ctor_get(v___x_2104_, 1);
v_isSharedCheck_2155_ = !lean_is_exclusive(v___x_2104_);
if (v_isSharedCheck_2155_ == 0)
{
v___x_2150_ = v___x_2104_;
v_isShared_2151_ = v_isSharedCheck_2155_;
goto v_resetjp_2149_;
}
else
{
lean_inc(v_a_2148_);
lean_inc(v_a_2147_);
lean_dec(v___x_2104_);
v___x_2150_ = lean_box(0);
v_isShared_2151_ = v_isSharedCheck_2155_;
goto v_resetjp_2149_;
}
v_resetjp_2149_:
{
lean_object* v___x_2153_; 
if (v_isShared_2151_ == 0)
{
v___x_2153_ = v___x_2150_;
goto v_reusejp_2152_;
}
else
{
lean_object* v_reuseFailAlloc_2154_; 
v_reuseFailAlloc_2154_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2154_, 0, v_a_2147_);
lean_ctor_set(v_reuseFailAlloc_2154_, 1, v_a_2148_);
v___x_2153_ = v_reuseFailAlloc_2154_;
goto v_reusejp_2152_;
}
v_reusejp_2152_:
{
return v___x_2153_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__4___boxed(lean_object* v_env_2156_, lean_object* v___x_2157_, lean_object* v___x_2158_, lean_object* v_stx_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_){
_start:
{
lean_object* v_res_2162_; 
v_res_2162_ = l_Lean_Elab_liftMacroM___redArg___lam__4(v_env_2156_, v___x_2157_, v___x_2158_, v_stx_2159_, v___y_2160_, v___y_2161_);
lean_dec_ref(v___y_2160_);
return v_res_2162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__5(lean_object* v_env_2163_, lean_object* v_declName_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_){
_start:
{
uint8_t v___x_2167_; lean_object* v_env_2168_; lean_object* v___x_2169_; uint8_t v___x_2170_; uint8_t v___x_2171_; 
v___x_2167_ = 0;
v_env_2168_ = l_Lean_Environment_setExporting(v_env_2163_, v___x_2167_);
lean_inc(v_declName_2164_);
v___x_2169_ = l_Lean_mkPrivateName(v_env_2168_, v_declName_2164_);
v___x_2170_ = 1;
lean_inc_ref(v_env_2168_);
v___x_2171_ = l_Lean_Environment_contains(v_env_2168_, v___x_2169_, v___x_2170_);
if (v___x_2171_ == 0)
{
lean_object* v___x_2172_; uint8_t v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; 
v___x_2172_ = l_Lean_privateToUserName(v_declName_2164_);
v___x_2173_ = l_Lean_Environment_contains(v_env_2168_, v___x_2172_, v___x_2170_);
v___x_2174_ = lean_box(v___x_2173_);
v___x_2175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2175_, 0, v___x_2174_);
lean_ctor_set(v___x_2175_, 1, v___y_2166_);
return v___x_2175_;
}
else
{
lean_object* v___x_2176_; lean_object* v___x_2177_; 
lean_dec_ref(v_env_2168_);
lean_dec(v_declName_2164_);
v___x_2176_ = lean_box(v___x_2171_);
v___x_2177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2177_, 0, v___x_2176_);
lean_ctor_set(v___x_2177_, 1, v___y_2166_);
return v___x_2177_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__5___boxed(lean_object* v_env_2178_, lean_object* v_declName_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_){
_start:
{
lean_object* v_res_2182_; 
v_res_2182_ = l_Lean_Elab_liftMacroM___redArg___lam__5(v_env_2178_, v_declName_2179_, v___y_2180_, v___y_2181_);
lean_dec_ref(v___y_2180_);
return v_res_2182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__6(lean_object* v_env_2183_, lean_object* v_currNamespace_2184_, lean_object* v_openDecls_2185_, lean_object* v_n_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_){
_start:
{
lean_object* v___x_2189_; lean_object* v___x_2190_; 
v___x_2189_ = l_Lean_ResolveName_resolveNamespace(v_env_2183_, v_currNamespace_2184_, v_openDecls_2185_, v_n_2186_);
v___x_2190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2190_, 0, v___x_2189_);
lean_ctor_set(v___x_2190_, 1, v___y_2188_);
return v___x_2190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__6___boxed(lean_object* v_env_2191_, lean_object* v_currNamespace_2192_, lean_object* v_openDecls_2193_, lean_object* v_n_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_){
_start:
{
lean_object* v_res_2197_; 
v_res_2197_ = l_Lean_Elab_liftMacroM___redArg___lam__6(v_env_2191_, v_currNamespace_2192_, v_openDecls_2193_, v_n_2194_, v___y_2195_, v___y_2196_);
lean_dec_ref(v___y_2195_);
return v_res_2197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__7(lean_object* v_env_2198_, lean_object* v_opts_2199_, lean_object* v_currNamespace_2200_, lean_object* v_openDecls_2201_, lean_object* v_n_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_){
_start:
{
lean_object* v___x_2205_; lean_object* v___x_2206_; 
v___x_2205_ = l_Lean_ResolveName_resolveGlobalName(v_env_2198_, v_opts_2199_, v_currNamespace_2200_, v_openDecls_2201_, v_n_2202_);
v___x_2206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2206_, 0, v___x_2205_);
lean_ctor_set(v___x_2206_, 1, v___y_2204_);
return v___x_2206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__7___boxed(lean_object* v_env_2207_, lean_object* v_opts_2208_, lean_object* v_currNamespace_2209_, lean_object* v_openDecls_2210_, lean_object* v_n_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_){
_start:
{
lean_object* v_res_2214_; 
v_res_2214_ = l_Lean_Elab_liftMacroM___redArg___lam__7(v_env_2207_, v_opts_2208_, v_currNamespace_2209_, v_openDecls_2210_, v_n_2211_, v___y_2212_, v___y_2213_);
lean_dec_ref(v___y_2212_);
lean_dec_ref(v_opts_2208_);
return v_res_2214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__8(lean_object* v_toPure_2215_, lean_object* v_a_2216_, lean_object* v_____r_2217_){
_start:
{
lean_object* v___x_2218_; 
v___x_2218_ = lean_apply_2(v_toPure_2215_, lean_box(0), v_a_2216_);
return v___x_2218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__9(lean_object* v_traceMsgs_2219_, lean_object* v_inst_2220_, lean_object* v___f_2221_, lean_object* v_toBind_2222_, lean_object* v___f_2223_, lean_object* v_____r_2224_){
_start:
{
lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; 
v___x_2225_ = l_List_reverse___redArg(v_traceMsgs_2219_);
v___x_2226_ = l_List_forM___redArg(v_inst_2220_, v___x_2225_, v___f_2221_);
v___x_2227_ = lean_apply_4(v_toBind_2222_, lean_box(0), lean_box(0), v___x_2226_, v___f_2223_);
return v___x_2227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__10(lean_object* v_setNextMacroScope_2228_, lean_object* v_macroScope_2229_, lean_object* v_toBind_2230_, lean_object* v___f_2231_, lean_object* v_____s_2232_){
_start:
{
lean_object* v___x_2233_; lean_object* v___x_2234_; 
v___x_2233_ = lean_apply_1(v_setNextMacroScope_2228_, v_macroScope_2229_);
v___x_2234_ = lean_apply_4(v_toBind_2230_, lean_box(0), lean_box(0), v___x_2233_, v___f_2231_);
return v___x_2234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__11(lean_object* v___x_2235_, lean_object* v_toPure_2236_, lean_object* v_____r_2237_){
_start:
{
lean_object* v___x_2238_; lean_object* v___x_2239_; 
v___x_2238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2238_, 0, v___x_2235_);
v___x_2239_ = lean_apply_2(v_toPure_2236_, lean_box(0), v___x_2238_);
return v___x_2239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__12(lean_object* v_inst_2240_, lean_object* v_inst_2241_, lean_object* v_inst_2242_, lean_object* v_inst_2243_, lean_object* v_toMonadRef_2244_, lean_object* v_inst_2245_, lean_object* v_inst_2246_, lean_object* v_toBind_2247_, lean_object* v___f_2248_, lean_object* v_a_2249_, lean_object* v_x_2250_, lean_object* v___y_2251_){
_start:
{
uint8_t v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; 
v___x_2252_ = 1;
v___x_2253_ = l_Lean_recordExtraModUseFromDecl___redArg(v_inst_2240_, v_inst_2241_, v_inst_2242_, v_inst_2243_, v_toMonadRef_2244_, v_inst_2245_, v_inst_2246_, v_a_2249_, v___x_2252_);
v___x_2254_ = lean_apply_4(v_toBind_2247_, lean_box(0), lean_box(0), v___x_2253_, v___f_2248_);
return v___x_2254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__13(lean_object* v_methods_2256_, lean_object* v_____do__lift_2257_, lean_object* v_____do__lift_2258_, lean_object* v_____do__lift_2259_, lean_object* v_____do__lift_2260_, lean_object* v_____do__lift_2261_, lean_object* v_x_2262_, lean_object* v_toPure_2263_, lean_object* v_inst_2264_, lean_object* v___f_2265_, lean_object* v_toBind_2266_, lean_object* v_setNextMacroScope_2267_, lean_object* v_inst_2268_, lean_object* v_inst_2269_, lean_object* v_inst_2270_, lean_object* v_toMonadRef_2271_, lean_object* v_inst_2272_, lean_object* v_inst_2273_, lean_object* v_inst_2274_, lean_object* v_toMonadExceptOf_2275_, lean_object* v_____do__lift_2276_){
_start:
{
lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; 
v___x_2277_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2277_, 0, v_methods_2256_);
lean_ctor_set(v___x_2277_, 1, v_____do__lift_2257_);
lean_ctor_set(v___x_2277_, 2, v_____do__lift_2258_);
lean_ctor_set(v___x_2277_, 3, v_____do__lift_2259_);
lean_ctor_set(v___x_2277_, 4, v_____do__lift_2260_);
lean_ctor_set(v___x_2277_, 5, v_____do__lift_2261_);
v___x_2278_ = lean_box(0);
v___x_2279_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2279_, 0, v_____do__lift_2276_);
lean_ctor_set(v___x_2279_, 1, v___x_2278_);
lean_ctor_set(v___x_2279_, 2, v___x_2278_);
v___x_2280_ = lean_apply_2(v_x_2262_, v___x_2277_, v___x_2279_);
if (lean_obj_tag(v___x_2280_) == 0)
{
lean_object* v_a_2281_; lean_object* v_a_2282_; lean_object* v_macroScope_2283_; lean_object* v_traceMsgs_2284_; lean_object* v_expandedMacroDecls_2285_; lean_object* v___f_2286_; lean_object* v___f_2287_; lean_object* v___f_2288_; lean_object* v___x_2289_; lean_object* v___f_2290_; lean_object* v___f_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; 
lean_dec_ref(v_toMonadExceptOf_2275_);
lean_dec_ref(v_inst_2274_);
v_a_2281_ = lean_ctor_get(v___x_2280_, 1);
lean_inc(v_a_2281_);
v_a_2282_ = lean_ctor_get(v___x_2280_, 0);
lean_inc(v_a_2282_);
lean_dec_ref_known(v___x_2280_, 2);
v_macroScope_2283_ = lean_ctor_get(v_a_2281_, 0);
lean_inc(v_macroScope_2283_);
v_traceMsgs_2284_ = lean_ctor_get(v_a_2281_, 1);
lean_inc(v_traceMsgs_2284_);
v_expandedMacroDecls_2285_ = lean_ctor_get(v_a_2281_, 2);
lean_inc(v_expandedMacroDecls_2285_);
lean_dec(v_a_2281_);
lean_inc(v_toPure_2263_);
v___f_2286_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__8), 3, 2);
lean_closure_set(v___f_2286_, 0, v_toPure_2263_);
lean_closure_set(v___f_2286_, 1, v_a_2282_);
lean_inc_n(v_toBind_2266_, 3);
lean_inc_ref_n(v_inst_2264_, 2);
v___f_2287_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__9), 6, 5);
lean_closure_set(v___f_2287_, 0, v_traceMsgs_2284_);
lean_closure_set(v___f_2287_, 1, v_inst_2264_);
lean_closure_set(v___f_2287_, 2, v___f_2265_);
lean_closure_set(v___f_2287_, 3, v_toBind_2266_);
lean_closure_set(v___f_2287_, 4, v___f_2286_);
v___f_2288_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__10), 5, 4);
lean_closure_set(v___f_2288_, 0, v_setNextMacroScope_2267_);
lean_closure_set(v___f_2288_, 1, v_macroScope_2283_);
lean_closure_set(v___f_2288_, 2, v_toBind_2266_);
lean_closure_set(v___f_2288_, 3, v___f_2287_);
v___x_2289_ = lean_box(0);
v___f_2290_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__11), 3, 2);
lean_closure_set(v___f_2290_, 0, v___x_2289_);
lean_closure_set(v___f_2290_, 1, v_toPure_2263_);
v___f_2291_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__12), 12, 9);
lean_closure_set(v___f_2291_, 0, v_inst_2264_);
lean_closure_set(v___f_2291_, 1, v_inst_2268_);
lean_closure_set(v___f_2291_, 2, v_inst_2269_);
lean_closure_set(v___f_2291_, 3, v_inst_2270_);
lean_closure_set(v___f_2291_, 4, v_toMonadRef_2271_);
lean_closure_set(v___f_2291_, 5, v_inst_2272_);
lean_closure_set(v___f_2291_, 6, v_inst_2273_);
lean_closure_set(v___f_2291_, 7, v_toBind_2266_);
lean_closure_set(v___f_2291_, 8, v___f_2290_);
v___x_2292_ = l_List_forIn_x27_loop___redArg(v_inst_2264_, v___f_2291_, v_expandedMacroDecls_2285_, v___x_2289_);
lean_dec(v_expandedMacroDecls_2285_);
v___x_2293_ = lean_apply_4(v_toBind_2266_, lean_box(0), lean_box(0), v___x_2292_, v___f_2288_);
return v___x_2293_;
}
else
{
lean_object* v_a_2294_; 
lean_dec(v_inst_2273_);
lean_dec(v_inst_2272_);
lean_dec_ref(v_toMonadRef_2271_);
lean_dec_ref(v_inst_2270_);
lean_dec_ref(v_inst_2269_);
lean_dec_ref(v_inst_2268_);
lean_dec(v_setNextMacroScope_2267_);
lean_dec(v_toBind_2266_);
lean_dec(v___f_2265_);
lean_dec(v_toPure_2263_);
v_a_2294_ = lean_ctor_get(v___x_2280_, 0);
lean_inc(v_a_2294_);
lean_dec_ref_known(v___x_2280_, 2);
if (lean_obj_tag(v_a_2294_) == 0)
{
lean_object* v_a_2295_; lean_object* v_a_2296_; lean_object* v___x_2297_; uint8_t v___x_2298_; 
lean_dec_ref(v_toMonadExceptOf_2275_);
v_a_2295_ = lean_ctor_get(v_a_2294_, 0);
lean_inc(v_a_2295_);
v_a_2296_ = lean_ctor_get(v_a_2294_, 1);
lean_inc_ref(v_a_2296_);
lean_dec_ref_known(v_a_2294_, 2);
v___x_2297_ = ((lean_object*)(l_Lean_Elab_liftMacroM___redArg___lam__13___closed__0));
v___x_2298_ = lean_string_dec_eq(v_a_2296_, v___x_2297_);
if (v___x_2298_ == 0)
{
lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; 
v___x_2299_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2299_, 0, v_a_2296_);
v___x_2300_ = l_Lean_MessageData_ofFormat(v___x_2299_);
v___x_2301_ = l_Lean_throwErrorAt___redArg(v_inst_2264_, v_inst_2274_, v_a_2295_, v___x_2300_);
return v___x_2301_;
}
else
{
lean_object* v___x_2302_; 
lean_dec_ref(v_a_2296_);
lean_dec_ref(v_inst_2264_);
v___x_2302_ = l_Lean_throwMaxRecDepthAt___redArg(v_inst_2274_, v_a_2295_);
return v___x_2302_;
}
}
else
{
lean_object* v___x_2303_; 
lean_dec_ref(v_inst_2274_);
lean_dec_ref(v_inst_2264_);
v___x_2303_ = l_Lean_Elab_throwUnsupportedSyntax___redArg(v_toMonadExceptOf_2275_);
return v___x_2303_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__13___boxed(lean_object** _args){
lean_object* v_methods_2304_ = _args[0];
lean_object* v_____do__lift_2305_ = _args[1];
lean_object* v_____do__lift_2306_ = _args[2];
lean_object* v_____do__lift_2307_ = _args[3];
lean_object* v_____do__lift_2308_ = _args[4];
lean_object* v_____do__lift_2309_ = _args[5];
lean_object* v_x_2310_ = _args[6];
lean_object* v_toPure_2311_ = _args[7];
lean_object* v_inst_2312_ = _args[8];
lean_object* v___f_2313_ = _args[9];
lean_object* v_toBind_2314_ = _args[10];
lean_object* v_setNextMacroScope_2315_ = _args[11];
lean_object* v_inst_2316_ = _args[12];
lean_object* v_inst_2317_ = _args[13];
lean_object* v_inst_2318_ = _args[14];
lean_object* v_toMonadRef_2319_ = _args[15];
lean_object* v_inst_2320_ = _args[16];
lean_object* v_inst_2321_ = _args[17];
lean_object* v_inst_2322_ = _args[18];
lean_object* v_toMonadExceptOf_2323_ = _args[19];
lean_object* v_____do__lift_2324_ = _args[20];
_start:
{
lean_object* v_res_2325_; 
v_res_2325_ = l_Lean_Elab_liftMacroM___redArg___lam__13(v_methods_2304_, v_____do__lift_2305_, v_____do__lift_2306_, v_____do__lift_2307_, v_____do__lift_2308_, v_____do__lift_2309_, v_x_2310_, v_toPure_2311_, v_inst_2312_, v___f_2313_, v_toBind_2314_, v_setNextMacroScope_2315_, v_inst_2316_, v_inst_2317_, v_inst_2318_, v_toMonadRef_2319_, v_inst_2320_, v_inst_2321_, v_inst_2322_, v_toMonadExceptOf_2323_, v_____do__lift_2324_);
return v_res_2325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__14(lean_object* v_methods_2326_, lean_object* v_____do__lift_2327_, lean_object* v_____do__lift_2328_, lean_object* v_____do__lift_2329_, lean_object* v_____do__lift_2330_, lean_object* v_x_2331_, lean_object* v_toPure_2332_, lean_object* v_inst_2333_, lean_object* v___f_2334_, lean_object* v_toBind_2335_, lean_object* v_setNextMacroScope_2336_, lean_object* v_inst_2337_, lean_object* v_inst_2338_, lean_object* v_inst_2339_, lean_object* v_toMonadRef_2340_, lean_object* v_inst_2341_, lean_object* v_inst_2342_, lean_object* v_inst_2343_, lean_object* v_toMonadExceptOf_2344_, lean_object* v_getNextMacroScope_2345_, lean_object* v_____do__lift_2346_){
_start:
{
lean_object* v___f_2347_; lean_object* v___x_2348_; 
lean_inc(v_toBind_2335_);
v___f_2347_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__13___boxed), 21, 20);
lean_closure_set(v___f_2347_, 0, v_methods_2326_);
lean_closure_set(v___f_2347_, 1, v_____do__lift_2327_);
lean_closure_set(v___f_2347_, 2, v_____do__lift_2328_);
lean_closure_set(v___f_2347_, 3, v_____do__lift_2329_);
lean_closure_set(v___f_2347_, 4, v_____do__lift_2346_);
lean_closure_set(v___f_2347_, 5, v_____do__lift_2330_);
lean_closure_set(v___f_2347_, 6, v_x_2331_);
lean_closure_set(v___f_2347_, 7, v_toPure_2332_);
lean_closure_set(v___f_2347_, 8, v_inst_2333_);
lean_closure_set(v___f_2347_, 9, v___f_2334_);
lean_closure_set(v___f_2347_, 10, v_toBind_2335_);
lean_closure_set(v___f_2347_, 11, v_setNextMacroScope_2336_);
lean_closure_set(v___f_2347_, 12, v_inst_2337_);
lean_closure_set(v___f_2347_, 13, v_inst_2338_);
lean_closure_set(v___f_2347_, 14, v_inst_2339_);
lean_closure_set(v___f_2347_, 15, v_toMonadRef_2340_);
lean_closure_set(v___f_2347_, 16, v_inst_2341_);
lean_closure_set(v___f_2347_, 17, v_inst_2342_);
lean_closure_set(v___f_2347_, 18, v_inst_2343_);
lean_closure_set(v___f_2347_, 19, v_toMonadExceptOf_2344_);
v___x_2348_ = lean_apply_4(v_toBind_2335_, lean_box(0), lean_box(0), v_getNextMacroScope_2345_, v___f_2347_);
return v___x_2348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__14___boxed(lean_object** _args){
lean_object* v_methods_2349_ = _args[0];
lean_object* v_____do__lift_2350_ = _args[1];
lean_object* v_____do__lift_2351_ = _args[2];
lean_object* v_____do__lift_2352_ = _args[3];
lean_object* v_____do__lift_2353_ = _args[4];
lean_object* v_x_2354_ = _args[5];
lean_object* v_toPure_2355_ = _args[6];
lean_object* v_inst_2356_ = _args[7];
lean_object* v___f_2357_ = _args[8];
lean_object* v_toBind_2358_ = _args[9];
lean_object* v_setNextMacroScope_2359_ = _args[10];
lean_object* v_inst_2360_ = _args[11];
lean_object* v_inst_2361_ = _args[12];
lean_object* v_inst_2362_ = _args[13];
lean_object* v_toMonadRef_2363_ = _args[14];
lean_object* v_inst_2364_ = _args[15];
lean_object* v_inst_2365_ = _args[16];
lean_object* v_inst_2366_ = _args[17];
lean_object* v_toMonadExceptOf_2367_ = _args[18];
lean_object* v_getNextMacroScope_2368_ = _args[19];
lean_object* v_____do__lift_2369_ = _args[20];
_start:
{
lean_object* v_res_2370_; 
v_res_2370_ = l_Lean_Elab_liftMacroM___redArg___lam__14(v_methods_2349_, v_____do__lift_2350_, v_____do__lift_2351_, v_____do__lift_2352_, v_____do__lift_2353_, v_x_2354_, v_toPure_2355_, v_inst_2356_, v___f_2357_, v_toBind_2358_, v_setNextMacroScope_2359_, v_inst_2360_, v_inst_2361_, v_inst_2362_, v_toMonadRef_2363_, v_inst_2364_, v_inst_2365_, v_inst_2366_, v_toMonadExceptOf_2367_, v_getNextMacroScope_2368_, v_____do__lift_2369_);
return v_res_2370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__15(lean_object* v_methods_2371_, lean_object* v_____do__lift_2372_, lean_object* v_____do__lift_2373_, lean_object* v_____do__lift_2374_, lean_object* v_x_2375_, lean_object* v_toPure_2376_, lean_object* v_inst_2377_, lean_object* v___f_2378_, lean_object* v_toBind_2379_, lean_object* v_setNextMacroScope_2380_, lean_object* v_inst_2381_, lean_object* v_inst_2382_, lean_object* v_inst_2383_, lean_object* v_toMonadRef_2384_, lean_object* v_inst_2385_, lean_object* v_inst_2386_, lean_object* v_inst_2387_, lean_object* v_toMonadExceptOf_2388_, lean_object* v_getNextMacroScope_2389_, lean_object* v_getMaxRecDepth_2390_, lean_object* v_____do__lift_2391_){
_start:
{
lean_object* v___f_2392_; lean_object* v___x_2393_; 
lean_inc(v_toBind_2379_);
v___f_2392_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__14___boxed), 21, 20);
lean_closure_set(v___f_2392_, 0, v_methods_2371_);
lean_closure_set(v___f_2392_, 1, v_____do__lift_2372_);
lean_closure_set(v___f_2392_, 2, v_____do__lift_2373_);
lean_closure_set(v___f_2392_, 3, v_____do__lift_2391_);
lean_closure_set(v___f_2392_, 4, v_____do__lift_2374_);
lean_closure_set(v___f_2392_, 5, v_x_2375_);
lean_closure_set(v___f_2392_, 6, v_toPure_2376_);
lean_closure_set(v___f_2392_, 7, v_inst_2377_);
lean_closure_set(v___f_2392_, 8, v___f_2378_);
lean_closure_set(v___f_2392_, 9, v_toBind_2379_);
lean_closure_set(v___f_2392_, 10, v_setNextMacroScope_2380_);
lean_closure_set(v___f_2392_, 11, v_inst_2381_);
lean_closure_set(v___f_2392_, 12, v_inst_2382_);
lean_closure_set(v___f_2392_, 13, v_inst_2383_);
lean_closure_set(v___f_2392_, 14, v_toMonadRef_2384_);
lean_closure_set(v___f_2392_, 15, v_inst_2385_);
lean_closure_set(v___f_2392_, 16, v_inst_2386_);
lean_closure_set(v___f_2392_, 17, v_inst_2387_);
lean_closure_set(v___f_2392_, 18, v_toMonadExceptOf_2388_);
lean_closure_set(v___f_2392_, 19, v_getNextMacroScope_2389_);
v___x_2393_ = lean_apply_4(v_toBind_2379_, lean_box(0), lean_box(0), v_getMaxRecDepth_2390_, v___f_2392_);
return v___x_2393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__15___boxed(lean_object** _args){
lean_object* v_methods_2394_ = _args[0];
lean_object* v_____do__lift_2395_ = _args[1];
lean_object* v_____do__lift_2396_ = _args[2];
lean_object* v_____do__lift_2397_ = _args[3];
lean_object* v_x_2398_ = _args[4];
lean_object* v_toPure_2399_ = _args[5];
lean_object* v_inst_2400_ = _args[6];
lean_object* v___f_2401_ = _args[7];
lean_object* v_toBind_2402_ = _args[8];
lean_object* v_setNextMacroScope_2403_ = _args[9];
lean_object* v_inst_2404_ = _args[10];
lean_object* v_inst_2405_ = _args[11];
lean_object* v_inst_2406_ = _args[12];
lean_object* v_toMonadRef_2407_ = _args[13];
lean_object* v_inst_2408_ = _args[14];
lean_object* v_inst_2409_ = _args[15];
lean_object* v_inst_2410_ = _args[16];
lean_object* v_toMonadExceptOf_2411_ = _args[17];
lean_object* v_getNextMacroScope_2412_ = _args[18];
lean_object* v_getMaxRecDepth_2413_ = _args[19];
lean_object* v_____do__lift_2414_ = _args[20];
_start:
{
lean_object* v_res_2415_; 
v_res_2415_ = l_Lean_Elab_liftMacroM___redArg___lam__15(v_methods_2394_, v_____do__lift_2395_, v_____do__lift_2396_, v_____do__lift_2397_, v_x_2398_, v_toPure_2399_, v_inst_2400_, v___f_2401_, v_toBind_2402_, v_setNextMacroScope_2403_, v_inst_2404_, v_inst_2405_, v_inst_2406_, v_toMonadRef_2407_, v_inst_2408_, v_inst_2409_, v_inst_2410_, v_toMonadExceptOf_2411_, v_getNextMacroScope_2412_, v_getMaxRecDepth_2413_, v_____do__lift_2414_);
return v_res_2415_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__16(lean_object* v_inst_2416_, lean_object* v_methods_2417_, lean_object* v_____do__lift_2418_, lean_object* v_____do__lift_2419_, lean_object* v_x_2420_, lean_object* v_toPure_2421_, lean_object* v_inst_2422_, lean_object* v___f_2423_, lean_object* v_toBind_2424_, lean_object* v_setNextMacroScope_2425_, lean_object* v_inst_2426_, lean_object* v_inst_2427_, lean_object* v_inst_2428_, lean_object* v_toMonadRef_2429_, lean_object* v_inst_2430_, lean_object* v_inst_2431_, lean_object* v_inst_2432_, lean_object* v_toMonadExceptOf_2433_, lean_object* v_getNextMacroScope_2434_, lean_object* v_____do__lift_2435_){
_start:
{
lean_object* v_getRecDepth_2436_; lean_object* v_getMaxRecDepth_2437_; lean_object* v___f_2438_; lean_object* v___x_2439_; 
v_getRecDepth_2436_ = lean_ctor_get(v_inst_2416_, 1);
lean_inc(v_getRecDepth_2436_);
v_getMaxRecDepth_2437_ = lean_ctor_get(v_inst_2416_, 2);
lean_inc(v_getMaxRecDepth_2437_);
lean_dec_ref(v_inst_2416_);
lean_inc(v_toBind_2424_);
v___f_2438_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__15___boxed), 21, 20);
lean_closure_set(v___f_2438_, 0, v_methods_2417_);
lean_closure_set(v___f_2438_, 1, v_____do__lift_2435_);
lean_closure_set(v___f_2438_, 2, v_____do__lift_2418_);
lean_closure_set(v___f_2438_, 3, v_____do__lift_2419_);
lean_closure_set(v___f_2438_, 4, v_x_2420_);
lean_closure_set(v___f_2438_, 5, v_toPure_2421_);
lean_closure_set(v___f_2438_, 6, v_inst_2422_);
lean_closure_set(v___f_2438_, 7, v___f_2423_);
lean_closure_set(v___f_2438_, 8, v_toBind_2424_);
lean_closure_set(v___f_2438_, 9, v_setNextMacroScope_2425_);
lean_closure_set(v___f_2438_, 10, v_inst_2426_);
lean_closure_set(v___f_2438_, 11, v_inst_2427_);
lean_closure_set(v___f_2438_, 12, v_inst_2428_);
lean_closure_set(v___f_2438_, 13, v_toMonadRef_2429_);
lean_closure_set(v___f_2438_, 14, v_inst_2430_);
lean_closure_set(v___f_2438_, 15, v_inst_2431_);
lean_closure_set(v___f_2438_, 16, v_inst_2432_);
lean_closure_set(v___f_2438_, 17, v_toMonadExceptOf_2433_);
lean_closure_set(v___f_2438_, 18, v_getNextMacroScope_2434_);
lean_closure_set(v___f_2438_, 19, v_getMaxRecDepth_2437_);
v___x_2439_ = lean_apply_4(v_toBind_2424_, lean_box(0), lean_box(0), v_getRecDepth_2436_, v___f_2438_);
return v___x_2439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__16___boxed(lean_object** _args){
lean_object* v_inst_2440_ = _args[0];
lean_object* v_methods_2441_ = _args[1];
lean_object* v_____do__lift_2442_ = _args[2];
lean_object* v_____do__lift_2443_ = _args[3];
lean_object* v_x_2444_ = _args[4];
lean_object* v_toPure_2445_ = _args[5];
lean_object* v_inst_2446_ = _args[6];
lean_object* v___f_2447_ = _args[7];
lean_object* v_toBind_2448_ = _args[8];
lean_object* v_setNextMacroScope_2449_ = _args[9];
lean_object* v_inst_2450_ = _args[10];
lean_object* v_inst_2451_ = _args[11];
lean_object* v_inst_2452_ = _args[12];
lean_object* v_toMonadRef_2453_ = _args[13];
lean_object* v_inst_2454_ = _args[14];
lean_object* v_inst_2455_ = _args[15];
lean_object* v_inst_2456_ = _args[16];
lean_object* v_toMonadExceptOf_2457_ = _args[17];
lean_object* v_getNextMacroScope_2458_ = _args[18];
lean_object* v_____do__lift_2459_ = _args[19];
_start:
{
lean_object* v_res_2460_; 
v_res_2460_ = l_Lean_Elab_liftMacroM___redArg___lam__16(v_inst_2440_, v_methods_2441_, v_____do__lift_2442_, v_____do__lift_2443_, v_x_2444_, v_toPure_2445_, v_inst_2446_, v___f_2447_, v_toBind_2448_, v_setNextMacroScope_2449_, v_inst_2450_, v_inst_2451_, v_inst_2452_, v_toMonadRef_2453_, v_inst_2454_, v_inst_2455_, v_inst_2456_, v_toMonadExceptOf_2457_, v_getNextMacroScope_2458_, v_____do__lift_2459_);
return v_res_2460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__17(lean_object* v_inst_2461_, lean_object* v_methods_2462_, lean_object* v_____do__lift_2463_, lean_object* v_x_2464_, lean_object* v_toPure_2465_, lean_object* v_inst_2466_, lean_object* v___f_2467_, lean_object* v_toBind_2468_, lean_object* v_setNextMacroScope_2469_, lean_object* v_inst_2470_, lean_object* v_inst_2471_, lean_object* v_inst_2472_, lean_object* v_toMonadRef_2473_, lean_object* v_inst_2474_, lean_object* v_inst_2475_, lean_object* v_inst_2476_, lean_object* v_toMonadExceptOf_2477_, lean_object* v_getNextMacroScope_2478_, lean_object* v_getContext_2479_, lean_object* v_____do__lift_2480_){
_start:
{
lean_object* v___f_2481_; lean_object* v___x_2482_; 
lean_inc(v_toBind_2468_);
v___f_2481_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__16___boxed), 20, 19);
lean_closure_set(v___f_2481_, 0, v_inst_2461_);
lean_closure_set(v___f_2481_, 1, v_methods_2462_);
lean_closure_set(v___f_2481_, 2, v_____do__lift_2480_);
lean_closure_set(v___f_2481_, 3, v_____do__lift_2463_);
lean_closure_set(v___f_2481_, 4, v_x_2464_);
lean_closure_set(v___f_2481_, 5, v_toPure_2465_);
lean_closure_set(v___f_2481_, 6, v_inst_2466_);
lean_closure_set(v___f_2481_, 7, v___f_2467_);
lean_closure_set(v___f_2481_, 8, v_toBind_2468_);
lean_closure_set(v___f_2481_, 9, v_setNextMacroScope_2469_);
lean_closure_set(v___f_2481_, 10, v_inst_2470_);
lean_closure_set(v___f_2481_, 11, v_inst_2471_);
lean_closure_set(v___f_2481_, 12, v_inst_2472_);
lean_closure_set(v___f_2481_, 13, v_toMonadRef_2473_);
lean_closure_set(v___f_2481_, 14, v_inst_2474_);
lean_closure_set(v___f_2481_, 15, v_inst_2475_);
lean_closure_set(v___f_2481_, 16, v_inst_2476_);
lean_closure_set(v___f_2481_, 17, v_toMonadExceptOf_2477_);
lean_closure_set(v___f_2481_, 18, v_getNextMacroScope_2478_);
v___x_2482_ = lean_apply_4(v_toBind_2468_, lean_box(0), lean_box(0), v_getContext_2479_, v___f_2481_);
return v___x_2482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__17___boxed(lean_object** _args){
lean_object* v_inst_2483_ = _args[0];
lean_object* v_methods_2484_ = _args[1];
lean_object* v_____do__lift_2485_ = _args[2];
lean_object* v_x_2486_ = _args[3];
lean_object* v_toPure_2487_ = _args[4];
lean_object* v_inst_2488_ = _args[5];
lean_object* v___f_2489_ = _args[6];
lean_object* v_toBind_2490_ = _args[7];
lean_object* v_setNextMacroScope_2491_ = _args[8];
lean_object* v_inst_2492_ = _args[9];
lean_object* v_inst_2493_ = _args[10];
lean_object* v_inst_2494_ = _args[11];
lean_object* v_toMonadRef_2495_ = _args[12];
lean_object* v_inst_2496_ = _args[13];
lean_object* v_inst_2497_ = _args[14];
lean_object* v_inst_2498_ = _args[15];
lean_object* v_toMonadExceptOf_2499_ = _args[16];
lean_object* v_getNextMacroScope_2500_ = _args[17];
lean_object* v_getContext_2501_ = _args[18];
lean_object* v_____do__lift_2502_ = _args[19];
_start:
{
lean_object* v_res_2503_; 
v_res_2503_ = l_Lean_Elab_liftMacroM___redArg___lam__17(v_inst_2483_, v_methods_2484_, v_____do__lift_2485_, v_x_2486_, v_toPure_2487_, v_inst_2488_, v___f_2489_, v_toBind_2490_, v_setNextMacroScope_2491_, v_inst_2492_, v_inst_2493_, v_inst_2494_, v_toMonadRef_2495_, v_inst_2496_, v_inst_2497_, v_inst_2498_, v_toMonadExceptOf_2499_, v_getNextMacroScope_2500_, v_getContext_2501_, v_____do__lift_2502_);
return v_res_2503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__18(lean_object* v_toMonadQuotation_2504_, lean_object* v_inst_2505_, lean_object* v_methods_2506_, lean_object* v_x_2507_, lean_object* v_toPure_2508_, lean_object* v_inst_2509_, lean_object* v___f_2510_, lean_object* v_toBind_2511_, lean_object* v_setNextMacroScope_2512_, lean_object* v_inst_2513_, lean_object* v_inst_2514_, lean_object* v_inst_2515_, lean_object* v_toMonadRef_2516_, lean_object* v_inst_2517_, lean_object* v_inst_2518_, lean_object* v_inst_2519_, lean_object* v_toMonadExceptOf_2520_, lean_object* v_getNextMacroScope_2521_, lean_object* v_____do__lift_2522_){
_start:
{
lean_object* v_getCurrMacroScope_2523_; lean_object* v_getContext_2524_; lean_object* v___f_2525_; lean_object* v___x_2526_; 
v_getCurrMacroScope_2523_ = lean_ctor_get(v_toMonadQuotation_2504_, 1);
lean_inc(v_getCurrMacroScope_2523_);
v_getContext_2524_ = lean_ctor_get(v_toMonadQuotation_2504_, 2);
lean_inc(v_getContext_2524_);
lean_dec_ref(v_toMonadQuotation_2504_);
lean_inc(v_toBind_2511_);
v___f_2525_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__17___boxed), 20, 19);
lean_closure_set(v___f_2525_, 0, v_inst_2505_);
lean_closure_set(v___f_2525_, 1, v_methods_2506_);
lean_closure_set(v___f_2525_, 2, v_____do__lift_2522_);
lean_closure_set(v___f_2525_, 3, v_x_2507_);
lean_closure_set(v___f_2525_, 4, v_toPure_2508_);
lean_closure_set(v___f_2525_, 5, v_inst_2509_);
lean_closure_set(v___f_2525_, 6, v___f_2510_);
lean_closure_set(v___f_2525_, 7, v_toBind_2511_);
lean_closure_set(v___f_2525_, 8, v_setNextMacroScope_2512_);
lean_closure_set(v___f_2525_, 9, v_inst_2513_);
lean_closure_set(v___f_2525_, 10, v_inst_2514_);
lean_closure_set(v___f_2525_, 11, v_inst_2515_);
lean_closure_set(v___f_2525_, 12, v_toMonadRef_2516_);
lean_closure_set(v___f_2525_, 13, v_inst_2517_);
lean_closure_set(v___f_2525_, 14, v_inst_2518_);
lean_closure_set(v___f_2525_, 15, v_inst_2519_);
lean_closure_set(v___f_2525_, 16, v_toMonadExceptOf_2520_);
lean_closure_set(v___f_2525_, 17, v_getNextMacroScope_2521_);
lean_closure_set(v___f_2525_, 18, v_getContext_2524_);
v___x_2526_ = lean_apply_4(v_toBind_2511_, lean_box(0), lean_box(0), v_getCurrMacroScope_2523_, v___f_2525_);
return v___x_2526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__18___boxed(lean_object** _args){
lean_object* v_toMonadQuotation_2527_ = _args[0];
lean_object* v_inst_2528_ = _args[1];
lean_object* v_methods_2529_ = _args[2];
lean_object* v_x_2530_ = _args[3];
lean_object* v_toPure_2531_ = _args[4];
lean_object* v_inst_2532_ = _args[5];
lean_object* v___f_2533_ = _args[6];
lean_object* v_toBind_2534_ = _args[7];
lean_object* v_setNextMacroScope_2535_ = _args[8];
lean_object* v_inst_2536_ = _args[9];
lean_object* v_inst_2537_ = _args[10];
lean_object* v_inst_2538_ = _args[11];
lean_object* v_toMonadRef_2539_ = _args[12];
lean_object* v_inst_2540_ = _args[13];
lean_object* v_inst_2541_ = _args[14];
lean_object* v_inst_2542_ = _args[15];
lean_object* v_toMonadExceptOf_2543_ = _args[16];
lean_object* v_getNextMacroScope_2544_ = _args[17];
lean_object* v_____do__lift_2545_ = _args[18];
_start:
{
lean_object* v_res_2546_; 
v_res_2546_ = l_Lean_Elab_liftMacroM___redArg___lam__18(v_toMonadQuotation_2527_, v_inst_2528_, v_methods_2529_, v_x_2530_, v_toPure_2531_, v_inst_2532_, v___f_2533_, v_toBind_2534_, v_setNextMacroScope_2535_, v_inst_2536_, v_inst_2537_, v_inst_2538_, v_toMonadRef_2539_, v_inst_2540_, v_inst_2541_, v_inst_2542_, v_toMonadExceptOf_2543_, v_getNextMacroScope_2544_, v_____do__lift_2545_);
return v_res_2546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__19(lean_object* v_toMonadRef_2547_, lean_object* v_env_2548_, lean_object* v_currNamespace_2549_, lean_object* v_opts_2550_, lean_object* v___x_2551_, lean_object* v___f_2552_, lean_object* v___f_2553_, lean_object* v_toMonadQuotation_2554_, lean_object* v_inst_2555_, lean_object* v_x_2556_, lean_object* v_toPure_2557_, lean_object* v_inst_2558_, lean_object* v___f_2559_, lean_object* v_toBind_2560_, lean_object* v_setNextMacroScope_2561_, lean_object* v_inst_2562_, lean_object* v_inst_2563_, lean_object* v_inst_2564_, lean_object* v_inst_2565_, lean_object* v_inst_2566_, lean_object* v_inst_2567_, lean_object* v_toMonadExceptOf_2568_, lean_object* v_getNextMacroScope_2569_, lean_object* v_openDecls_2570_){
_start:
{
lean_object* v_getRef_2571_; lean_object* v___f_2572_; lean_object* v___f_2573_; lean_object* v___x_2574_; lean_object* v_methods_2575_; lean_object* v___f_2576_; lean_object* v___x_2577_; 
v_getRef_2571_ = lean_ctor_get(v_toMonadRef_2547_, 0);
lean_inc(v_getRef_2571_);
lean_inc(v_openDecls_2570_);
lean_inc_n(v_currNamespace_2549_, 2);
lean_inc_ref(v_env_2548_);
v___f_2572_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__6___boxed), 6, 3);
lean_closure_set(v___f_2572_, 0, v_env_2548_);
lean_closure_set(v___f_2572_, 1, v_currNamespace_2549_);
lean_closure_set(v___f_2572_, 2, v_openDecls_2570_);
v___f_2573_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__7___boxed), 7, 4);
lean_closure_set(v___f_2573_, 0, v_env_2548_);
lean_closure_set(v___f_2573_, 1, v_opts_2550_);
lean_closure_set(v___f_2573_, 2, v_currNamespace_2549_);
lean_closure_set(v___f_2573_, 3, v_openDecls_2570_);
v___x_2574_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 5);
lean_closure_set(v___x_2574_, 0, lean_box(0));
lean_closure_set(v___x_2574_, 1, lean_box(0));
lean_closure_set(v___x_2574_, 2, v___x_2551_);
lean_closure_set(v___x_2574_, 3, lean_box(0));
lean_closure_set(v___x_2574_, 4, v_currNamespace_2549_);
v_methods_2575_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_methods_2575_, 0, v___f_2552_);
lean_ctor_set(v_methods_2575_, 1, v___x_2574_);
lean_ctor_set(v_methods_2575_, 2, v___f_2553_);
lean_ctor_set(v_methods_2575_, 3, v___f_2572_);
lean_ctor_set(v_methods_2575_, 4, v___f_2573_);
lean_inc(v_toBind_2560_);
v___f_2576_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__18___boxed), 19, 18);
lean_closure_set(v___f_2576_, 0, v_toMonadQuotation_2554_);
lean_closure_set(v___f_2576_, 1, v_inst_2555_);
lean_closure_set(v___f_2576_, 2, v_methods_2575_);
lean_closure_set(v___f_2576_, 3, v_x_2556_);
lean_closure_set(v___f_2576_, 4, v_toPure_2557_);
lean_closure_set(v___f_2576_, 5, v_inst_2558_);
lean_closure_set(v___f_2576_, 6, v___f_2559_);
lean_closure_set(v___f_2576_, 7, v_toBind_2560_);
lean_closure_set(v___f_2576_, 8, v_setNextMacroScope_2561_);
lean_closure_set(v___f_2576_, 9, v_inst_2562_);
lean_closure_set(v___f_2576_, 10, v_inst_2563_);
lean_closure_set(v___f_2576_, 11, v_inst_2564_);
lean_closure_set(v___f_2576_, 12, v_toMonadRef_2547_);
lean_closure_set(v___f_2576_, 13, v_inst_2565_);
lean_closure_set(v___f_2576_, 14, v_inst_2566_);
lean_closure_set(v___f_2576_, 15, v_inst_2567_);
lean_closure_set(v___f_2576_, 16, v_toMonadExceptOf_2568_);
lean_closure_set(v___f_2576_, 17, v_getNextMacroScope_2569_);
v___x_2577_ = lean_apply_4(v_toBind_2560_, lean_box(0), lean_box(0), v_getRef_2571_, v___f_2576_);
return v___x_2577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__19___boxed(lean_object** _args){
lean_object* v_toMonadRef_2578_ = _args[0];
lean_object* v_env_2579_ = _args[1];
lean_object* v_currNamespace_2580_ = _args[2];
lean_object* v_opts_2581_ = _args[3];
lean_object* v___x_2582_ = _args[4];
lean_object* v___f_2583_ = _args[5];
lean_object* v___f_2584_ = _args[6];
lean_object* v_toMonadQuotation_2585_ = _args[7];
lean_object* v_inst_2586_ = _args[8];
lean_object* v_x_2587_ = _args[9];
lean_object* v_toPure_2588_ = _args[10];
lean_object* v_inst_2589_ = _args[11];
lean_object* v___f_2590_ = _args[12];
lean_object* v_toBind_2591_ = _args[13];
lean_object* v_setNextMacroScope_2592_ = _args[14];
lean_object* v_inst_2593_ = _args[15];
lean_object* v_inst_2594_ = _args[16];
lean_object* v_inst_2595_ = _args[17];
lean_object* v_inst_2596_ = _args[18];
lean_object* v_inst_2597_ = _args[19];
lean_object* v_inst_2598_ = _args[20];
lean_object* v_toMonadExceptOf_2599_ = _args[21];
lean_object* v_getNextMacroScope_2600_ = _args[22];
lean_object* v_openDecls_2601_ = _args[23];
_start:
{
lean_object* v_res_2602_; 
v_res_2602_ = l_Lean_Elab_liftMacroM___redArg___lam__19(v_toMonadRef_2578_, v_env_2579_, v_currNamespace_2580_, v_opts_2581_, v___x_2582_, v___f_2583_, v___f_2584_, v_toMonadQuotation_2585_, v_inst_2586_, v_x_2587_, v_toPure_2588_, v_inst_2589_, v___f_2590_, v_toBind_2591_, v_setNextMacroScope_2592_, v_inst_2593_, v_inst_2594_, v_inst_2595_, v_inst_2596_, v_inst_2597_, v_inst_2598_, v_toMonadExceptOf_2599_, v_getNextMacroScope_2600_, v_openDecls_2601_);
return v_res_2602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__20(lean_object* v_toMonadRef_2603_, lean_object* v_env_2604_, lean_object* v_opts_2605_, lean_object* v___x_2606_, lean_object* v___f_2607_, lean_object* v___f_2608_, lean_object* v_toMonadQuotation_2609_, lean_object* v_inst_2610_, lean_object* v_x_2611_, lean_object* v_toPure_2612_, lean_object* v_inst_2613_, lean_object* v___f_2614_, lean_object* v_toBind_2615_, lean_object* v_setNextMacroScope_2616_, lean_object* v_inst_2617_, lean_object* v_inst_2618_, lean_object* v_inst_2619_, lean_object* v_inst_2620_, lean_object* v_inst_2621_, lean_object* v_inst_2622_, lean_object* v_toMonadExceptOf_2623_, lean_object* v_getNextMacroScope_2624_, lean_object* v_getOpenDecls_2625_, lean_object* v_currNamespace_2626_){
_start:
{
lean_object* v___f_2627_; lean_object* v___x_2628_; 
lean_inc(v_toBind_2615_);
v___f_2627_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__19___boxed), 24, 23);
lean_closure_set(v___f_2627_, 0, v_toMonadRef_2603_);
lean_closure_set(v___f_2627_, 1, v_env_2604_);
lean_closure_set(v___f_2627_, 2, v_currNamespace_2626_);
lean_closure_set(v___f_2627_, 3, v_opts_2605_);
lean_closure_set(v___f_2627_, 4, v___x_2606_);
lean_closure_set(v___f_2627_, 5, v___f_2607_);
lean_closure_set(v___f_2627_, 6, v___f_2608_);
lean_closure_set(v___f_2627_, 7, v_toMonadQuotation_2609_);
lean_closure_set(v___f_2627_, 8, v_inst_2610_);
lean_closure_set(v___f_2627_, 9, v_x_2611_);
lean_closure_set(v___f_2627_, 10, v_toPure_2612_);
lean_closure_set(v___f_2627_, 11, v_inst_2613_);
lean_closure_set(v___f_2627_, 12, v___f_2614_);
lean_closure_set(v___f_2627_, 13, v_toBind_2615_);
lean_closure_set(v___f_2627_, 14, v_setNextMacroScope_2616_);
lean_closure_set(v___f_2627_, 15, v_inst_2617_);
lean_closure_set(v___f_2627_, 16, v_inst_2618_);
lean_closure_set(v___f_2627_, 17, v_inst_2619_);
lean_closure_set(v___f_2627_, 18, v_inst_2620_);
lean_closure_set(v___f_2627_, 19, v_inst_2621_);
lean_closure_set(v___f_2627_, 20, v_inst_2622_);
lean_closure_set(v___f_2627_, 21, v_toMonadExceptOf_2623_);
lean_closure_set(v___f_2627_, 22, v_getNextMacroScope_2624_);
v___x_2628_ = lean_apply_4(v_toBind_2615_, lean_box(0), lean_box(0), v_getOpenDecls_2625_, v___f_2627_);
return v___x_2628_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__20___boxed(lean_object** _args){
lean_object* v_toMonadRef_2629_ = _args[0];
lean_object* v_env_2630_ = _args[1];
lean_object* v_opts_2631_ = _args[2];
lean_object* v___x_2632_ = _args[3];
lean_object* v___f_2633_ = _args[4];
lean_object* v___f_2634_ = _args[5];
lean_object* v_toMonadQuotation_2635_ = _args[6];
lean_object* v_inst_2636_ = _args[7];
lean_object* v_x_2637_ = _args[8];
lean_object* v_toPure_2638_ = _args[9];
lean_object* v_inst_2639_ = _args[10];
lean_object* v___f_2640_ = _args[11];
lean_object* v_toBind_2641_ = _args[12];
lean_object* v_setNextMacroScope_2642_ = _args[13];
lean_object* v_inst_2643_ = _args[14];
lean_object* v_inst_2644_ = _args[15];
lean_object* v_inst_2645_ = _args[16];
lean_object* v_inst_2646_ = _args[17];
lean_object* v_inst_2647_ = _args[18];
lean_object* v_inst_2648_ = _args[19];
lean_object* v_toMonadExceptOf_2649_ = _args[20];
lean_object* v_getNextMacroScope_2650_ = _args[21];
lean_object* v_getOpenDecls_2651_ = _args[22];
lean_object* v_currNamespace_2652_ = _args[23];
_start:
{
lean_object* v_res_2653_; 
v_res_2653_ = l_Lean_Elab_liftMacroM___redArg___lam__20(v_toMonadRef_2629_, v_env_2630_, v_opts_2631_, v___x_2632_, v___f_2633_, v___f_2634_, v_toMonadQuotation_2635_, v_inst_2636_, v_x_2637_, v_toPure_2638_, v_inst_2639_, v___f_2640_, v_toBind_2641_, v_setNextMacroScope_2642_, v_inst_2643_, v_inst_2644_, v_inst_2645_, v_inst_2646_, v_inst_2647_, v_inst_2648_, v_toMonadExceptOf_2649_, v_getNextMacroScope_2650_, v_getOpenDecls_2651_, v_currNamespace_2652_);
return v_res_2653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__21(lean_object* v_inst_2654_, lean_object* v_toMonadRef_2655_, lean_object* v_env_2656_, lean_object* v___x_2657_, lean_object* v___f_2658_, lean_object* v___f_2659_, lean_object* v_toMonadQuotation_2660_, lean_object* v_inst_2661_, lean_object* v_x_2662_, lean_object* v_toPure_2663_, lean_object* v_inst_2664_, lean_object* v___f_2665_, lean_object* v_toBind_2666_, lean_object* v_setNextMacroScope_2667_, lean_object* v_inst_2668_, lean_object* v_inst_2669_, lean_object* v_inst_2670_, lean_object* v_inst_2671_, lean_object* v_inst_2672_, lean_object* v_inst_2673_, lean_object* v_toMonadExceptOf_2674_, lean_object* v_getNextMacroScope_2675_, lean_object* v_opts_2676_){
_start:
{
lean_object* v_getCurrNamespace_2677_; lean_object* v_getOpenDecls_2678_; lean_object* v___f_2679_; lean_object* v___x_2680_; 
v_getCurrNamespace_2677_ = lean_ctor_get(v_inst_2654_, 0);
lean_inc(v_getCurrNamespace_2677_);
v_getOpenDecls_2678_ = lean_ctor_get(v_inst_2654_, 1);
lean_inc(v_getOpenDecls_2678_);
lean_dec_ref(v_inst_2654_);
lean_inc(v_toBind_2666_);
v___f_2679_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__20___boxed), 24, 23);
lean_closure_set(v___f_2679_, 0, v_toMonadRef_2655_);
lean_closure_set(v___f_2679_, 1, v_env_2656_);
lean_closure_set(v___f_2679_, 2, v_opts_2676_);
lean_closure_set(v___f_2679_, 3, v___x_2657_);
lean_closure_set(v___f_2679_, 4, v___f_2658_);
lean_closure_set(v___f_2679_, 5, v___f_2659_);
lean_closure_set(v___f_2679_, 6, v_toMonadQuotation_2660_);
lean_closure_set(v___f_2679_, 7, v_inst_2661_);
lean_closure_set(v___f_2679_, 8, v_x_2662_);
lean_closure_set(v___f_2679_, 9, v_toPure_2663_);
lean_closure_set(v___f_2679_, 10, v_inst_2664_);
lean_closure_set(v___f_2679_, 11, v___f_2665_);
lean_closure_set(v___f_2679_, 12, v_toBind_2666_);
lean_closure_set(v___f_2679_, 13, v_setNextMacroScope_2667_);
lean_closure_set(v___f_2679_, 14, v_inst_2668_);
lean_closure_set(v___f_2679_, 15, v_inst_2669_);
lean_closure_set(v___f_2679_, 16, v_inst_2670_);
lean_closure_set(v___f_2679_, 17, v_inst_2671_);
lean_closure_set(v___f_2679_, 18, v_inst_2672_);
lean_closure_set(v___f_2679_, 19, v_inst_2673_);
lean_closure_set(v___f_2679_, 20, v_toMonadExceptOf_2674_);
lean_closure_set(v___f_2679_, 21, v_getNextMacroScope_2675_);
lean_closure_set(v___f_2679_, 22, v_getOpenDecls_2678_);
v___x_2680_ = lean_apply_4(v_toBind_2666_, lean_box(0), lean_box(0), v_getCurrNamespace_2677_, v___f_2679_);
return v___x_2680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__21___boxed(lean_object** _args){
lean_object* v_inst_2681_ = _args[0];
lean_object* v_toMonadRef_2682_ = _args[1];
lean_object* v_env_2683_ = _args[2];
lean_object* v___x_2684_ = _args[3];
lean_object* v___f_2685_ = _args[4];
lean_object* v___f_2686_ = _args[5];
lean_object* v_toMonadQuotation_2687_ = _args[6];
lean_object* v_inst_2688_ = _args[7];
lean_object* v_x_2689_ = _args[8];
lean_object* v_toPure_2690_ = _args[9];
lean_object* v_inst_2691_ = _args[10];
lean_object* v___f_2692_ = _args[11];
lean_object* v_toBind_2693_ = _args[12];
lean_object* v_setNextMacroScope_2694_ = _args[13];
lean_object* v_inst_2695_ = _args[14];
lean_object* v_inst_2696_ = _args[15];
lean_object* v_inst_2697_ = _args[16];
lean_object* v_inst_2698_ = _args[17];
lean_object* v_inst_2699_ = _args[18];
lean_object* v_inst_2700_ = _args[19];
lean_object* v_toMonadExceptOf_2701_ = _args[20];
lean_object* v_getNextMacroScope_2702_ = _args[21];
lean_object* v_opts_2703_ = _args[22];
_start:
{
lean_object* v_res_2704_; 
v_res_2704_ = l_Lean_Elab_liftMacroM___redArg___lam__21(v_inst_2681_, v_toMonadRef_2682_, v_env_2683_, v___x_2684_, v___f_2685_, v___f_2686_, v_toMonadQuotation_2687_, v_inst_2688_, v_x_2689_, v_toPure_2690_, v_inst_2691_, v___f_2692_, v_toBind_2693_, v_setNextMacroScope_2694_, v_inst_2695_, v_inst_2696_, v_inst_2697_, v_inst_2698_, v_inst_2699_, v_inst_2700_, v_toMonadExceptOf_2701_, v_getNextMacroScope_2702_, v_opts_2703_);
return v_res_2704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__22(lean_object* v_inst_2705_, lean_object* v___x_2706_, lean_object* v___x_2707_, lean_object* v_inst_2708_, lean_object* v_toMonadRef_2709_, lean_object* v___x_2710_, lean_object* v_toMonadQuotation_2711_, lean_object* v_inst_2712_, lean_object* v_x_2713_, lean_object* v_toPure_2714_, lean_object* v_inst_2715_, lean_object* v___f_2716_, lean_object* v_toBind_2717_, lean_object* v_setNextMacroScope_2718_, lean_object* v_inst_2719_, lean_object* v_inst_2720_, lean_object* v_inst_2721_, lean_object* v_inst_2722_, lean_object* v_inst_2723_, lean_object* v_toMonadExceptOf_2724_, lean_object* v_getNextMacroScope_2725_, lean_object* v_env_2726_){
_start:
{
lean_object* v_getOptions_2727_; lean_object* v___f_2728_; lean_object* v___f_2729_; lean_object* v___f_2730_; lean_object* v___x_2731_; 
v_getOptions_2727_ = lean_ctor_get(v_inst_2705_, 0);
lean_inc(v_getOptions_2727_);
lean_inc_ref_n(v_env_2726_, 2);
v___f_2728_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__4___boxed), 6, 3);
lean_closure_set(v___f_2728_, 0, v_env_2726_);
lean_closure_set(v___f_2728_, 1, v___x_2706_);
lean_closure_set(v___f_2728_, 2, v___x_2707_);
v___f_2729_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__5___boxed), 4, 1);
lean_closure_set(v___f_2729_, 0, v_env_2726_);
lean_inc(v_toBind_2717_);
v___f_2730_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__21___boxed), 23, 22);
lean_closure_set(v___f_2730_, 0, v_inst_2708_);
lean_closure_set(v___f_2730_, 1, v_toMonadRef_2709_);
lean_closure_set(v___f_2730_, 2, v_env_2726_);
lean_closure_set(v___f_2730_, 3, v___x_2710_);
lean_closure_set(v___f_2730_, 4, v___f_2728_);
lean_closure_set(v___f_2730_, 5, v___f_2729_);
lean_closure_set(v___f_2730_, 6, v_toMonadQuotation_2711_);
lean_closure_set(v___f_2730_, 7, v_inst_2712_);
lean_closure_set(v___f_2730_, 8, v_x_2713_);
lean_closure_set(v___f_2730_, 9, v_toPure_2714_);
lean_closure_set(v___f_2730_, 10, v_inst_2715_);
lean_closure_set(v___f_2730_, 11, v___f_2716_);
lean_closure_set(v___f_2730_, 12, v_toBind_2717_);
lean_closure_set(v___f_2730_, 13, v_setNextMacroScope_2718_);
lean_closure_set(v___f_2730_, 14, v_inst_2719_);
lean_closure_set(v___f_2730_, 15, v_inst_2720_);
lean_closure_set(v___f_2730_, 16, v_inst_2705_);
lean_closure_set(v___f_2730_, 17, v_inst_2721_);
lean_closure_set(v___f_2730_, 18, v_inst_2722_);
lean_closure_set(v___f_2730_, 19, v_inst_2723_);
lean_closure_set(v___f_2730_, 20, v_toMonadExceptOf_2724_);
lean_closure_set(v___f_2730_, 21, v_getNextMacroScope_2725_);
v___x_2731_ = lean_apply_4(v_toBind_2717_, lean_box(0), lean_box(0), v_getOptions_2727_, v___f_2730_);
return v___x_2731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg___lam__22___boxed(lean_object** _args){
lean_object* v_inst_2732_ = _args[0];
lean_object* v___x_2733_ = _args[1];
lean_object* v___x_2734_ = _args[2];
lean_object* v_inst_2735_ = _args[3];
lean_object* v_toMonadRef_2736_ = _args[4];
lean_object* v___x_2737_ = _args[5];
lean_object* v_toMonadQuotation_2738_ = _args[6];
lean_object* v_inst_2739_ = _args[7];
lean_object* v_x_2740_ = _args[8];
lean_object* v_toPure_2741_ = _args[9];
lean_object* v_inst_2742_ = _args[10];
lean_object* v___f_2743_ = _args[11];
lean_object* v_toBind_2744_ = _args[12];
lean_object* v_setNextMacroScope_2745_ = _args[13];
lean_object* v_inst_2746_ = _args[14];
lean_object* v_inst_2747_ = _args[15];
lean_object* v_inst_2748_ = _args[16];
lean_object* v_inst_2749_ = _args[17];
lean_object* v_inst_2750_ = _args[18];
lean_object* v_toMonadExceptOf_2751_ = _args[19];
lean_object* v_getNextMacroScope_2752_ = _args[20];
lean_object* v_env_2753_ = _args[21];
_start:
{
lean_object* v_res_2754_; 
v_res_2754_ = l_Lean_Elab_liftMacroM___redArg___lam__22(v_inst_2732_, v___x_2733_, v___x_2734_, v_inst_2735_, v_toMonadRef_2736_, v___x_2737_, v_toMonadQuotation_2738_, v_inst_2739_, v_x_2740_, v_toPure_2741_, v_inst_2742_, v___f_2743_, v_toBind_2744_, v_setNextMacroScope_2745_, v_inst_2746_, v_inst_2747_, v_inst_2748_, v_inst_2749_, v_inst_2750_, v_toMonadExceptOf_2751_, v_getNextMacroScope_2752_, v_env_2753_);
return v_res_2754_;
}
}
static lean_object* _init_l_Lean_Elab_liftMacroM___redArg___closed__10(void){
_start:
{
lean_object* v___x_2774_; 
v___x_2774_ = l_EStateM_nonBacktrackable___redArg();
return v___x_2774_;
}
}
static lean_object* _init_l_Lean_Elab_liftMacroM___redArg___closed__11(void){
_start:
{
lean_object* v___x_2775_; lean_object* v___x_2776_; 
v___x_2775_ = lean_obj_once(&l_Lean_Elab_liftMacroM___redArg___closed__10, &l_Lean_Elab_liftMacroM___redArg___closed__10_once, _init_l_Lean_Elab_liftMacroM___redArg___closed__10);
v___x_2776_ = l_EStateM_instMonadExceptOfOfBacktrackable___redArg(v___x_2775_);
return v___x_2776_;
}
}
static lean_object* _init_l_Lean_Elab_liftMacroM___redArg___closed__12(void){
_start:
{
lean_object* v___x_2777_; lean_object* v___f_2778_; 
v___x_2777_ = lean_obj_once(&l_Lean_Elab_liftMacroM___redArg___closed__11, &l_Lean_Elab_liftMacroM___redArg___closed__11_once, _init_l_Lean_Elab_liftMacroM___redArg___closed__11);
v___f_2778_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2778_, 0, v___x_2777_);
return v___f_2778_;
}
}
static lean_object* _init_l_Lean_Elab_liftMacroM___redArg___closed__13(void){
_start:
{
lean_object* v___x_2779_; lean_object* v___f_2780_; 
v___x_2779_ = lean_obj_once(&l_Lean_Elab_liftMacroM___redArg___closed__11, &l_Lean_Elab_liftMacroM___redArg___closed__11_once, _init_l_Lean_Elab_liftMacroM___redArg___closed__11);
v___f_2780_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_2780_, 0, v___x_2779_);
return v___f_2780_;
}
}
static lean_object* _init_l_Lean_Elab_liftMacroM___redArg___closed__14(void){
_start:
{
lean_object* v___f_2781_; lean_object* v___f_2782_; lean_object* v___x_2783_; 
v___f_2781_ = lean_obj_once(&l_Lean_Elab_liftMacroM___redArg___closed__13, &l_Lean_Elab_liftMacroM___redArg___closed__13_once, _init_l_Lean_Elab_liftMacroM___redArg___closed__13);
v___f_2782_ = lean_obj_once(&l_Lean_Elab_liftMacroM___redArg___closed__12, &l_Lean_Elab_liftMacroM___redArg___closed__12_once, _init_l_Lean_Elab_liftMacroM___redArg___closed__12);
v___x_2783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2783_, 0, v___f_2782_);
lean_ctor_set(v___x_2783_, 1, v___f_2781_);
return v___x_2783_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___redArg(lean_object* v_inst_2786_, lean_object* v_inst_2787_, lean_object* v_inst_2788_, lean_object* v_inst_2789_, lean_object* v_inst_2790_, lean_object* v_inst_2791_, lean_object* v_inst_2792_, lean_object* v_inst_2793_, lean_object* v_inst_2794_, lean_object* v_inst_2795_, lean_object* v_x_2796_){
_start:
{
lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v_toApplicative_2799_; lean_object* v_toBind_2800_; lean_object* v_getEnv_2801_; lean_object* v_toMonadExceptOf_2802_; lean_object* v_toMonadRef_2803_; lean_object* v_toMonadQuotation_2804_; lean_object* v_getNextMacroScope_2805_; lean_object* v_setNextMacroScope_2806_; lean_object* v_toPure_2807_; lean_object* v___x_2808_; lean_object* v___f_2809_; lean_object* v___f_2810_; lean_object* v___x_2811_; 
v___x_2797_ = ((lean_object*)(l_Lean_Elab_liftMacroM___redArg___closed__9));
v___x_2798_ = lean_obj_once(&l_Lean_Elab_liftMacroM___redArg___closed__14, &l_Lean_Elab_liftMacroM___redArg___closed__14_once, _init_l_Lean_Elab_liftMacroM___redArg___closed__14);
v_toApplicative_2799_ = lean_ctor_get(v_inst_2786_, 0);
v_toBind_2800_ = lean_ctor_get(v_inst_2786_, 1);
lean_inc_n(v_toBind_2800_, 3);
v_getEnv_2801_ = lean_ctor_get(v_inst_2788_, 0);
lean_inc(v_getEnv_2801_);
v_toMonadExceptOf_2802_ = lean_ctor_get(v_inst_2790_, 0);
lean_inc_ref(v_toMonadExceptOf_2802_);
v_toMonadRef_2803_ = lean_ctor_get(v_inst_2790_, 1);
lean_inc_ref_n(v_toMonadRef_2803_, 2);
v_toMonadQuotation_2804_ = lean_ctor_get(v_inst_2787_, 0);
lean_inc_ref(v_toMonadQuotation_2804_);
v_getNextMacroScope_2805_ = lean_ctor_get(v_inst_2787_, 1);
lean_inc(v_getNextMacroScope_2805_);
v_setNextMacroScope_2806_ = lean_ctor_get(v_inst_2787_, 2);
lean_inc(v_setNextMacroScope_2806_);
lean_dec_ref(v_inst_2787_);
v_toPure_2807_ = lean_ctor_get(v_toApplicative_2799_, 1);
lean_inc_n(v_toPure_2807_, 2);
v___x_2808_ = ((lean_object*)(l_Lean_Elab_liftMacroM___redArg___closed__15));
lean_inc(v_inst_2794_);
lean_inc_ref(v_inst_2786_);
lean_inc_ref(v_inst_2793_);
lean_inc_ref(v_inst_2792_);
v___f_2809_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__3), 8, 7);
lean_closure_set(v___f_2809_, 0, v_inst_2792_);
lean_closure_set(v___f_2809_, 1, v_inst_2793_);
lean_closure_set(v___f_2809_, 2, v_toPure_2807_);
lean_closure_set(v___f_2809_, 3, v_toBind_2800_);
lean_closure_set(v___f_2809_, 4, v_inst_2786_);
lean_closure_set(v___f_2809_, 5, v_toMonadRef_2803_);
lean_closure_set(v___f_2809_, 6, v_inst_2794_);
v___f_2810_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___redArg___lam__22___boxed), 22, 21);
lean_closure_set(v___f_2810_, 0, v_inst_2793_);
lean_closure_set(v___f_2810_, 1, v___x_2798_);
lean_closure_set(v___f_2810_, 2, v___x_2808_);
lean_closure_set(v___f_2810_, 3, v_inst_2791_);
lean_closure_set(v___f_2810_, 4, v_toMonadRef_2803_);
lean_closure_set(v___f_2810_, 5, v___x_2797_);
lean_closure_set(v___f_2810_, 6, v_toMonadQuotation_2804_);
lean_closure_set(v___f_2810_, 7, v_inst_2789_);
lean_closure_set(v___f_2810_, 8, v_x_2796_);
lean_closure_set(v___f_2810_, 9, v_toPure_2807_);
lean_closure_set(v___f_2810_, 10, v_inst_2786_);
lean_closure_set(v___f_2810_, 11, v___f_2809_);
lean_closure_set(v___f_2810_, 12, v_toBind_2800_);
lean_closure_set(v___f_2810_, 13, v_setNextMacroScope_2806_);
lean_closure_set(v___f_2810_, 14, v_inst_2788_);
lean_closure_set(v___f_2810_, 15, v_inst_2792_);
lean_closure_set(v___f_2810_, 16, v_inst_2794_);
lean_closure_set(v___f_2810_, 17, v_inst_2795_);
lean_closure_set(v___f_2810_, 18, v_inst_2790_);
lean_closure_set(v___f_2810_, 19, v_toMonadExceptOf_2802_);
lean_closure_set(v___f_2810_, 20, v_getNextMacroScope_2805_);
v___x_2811_ = lean_apply_4(v_toBind_2800_, lean_box(0), lean_box(0), v_getEnv_2801_, v___f_2810_);
return v___x_2811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM(lean_object* v_m_2812_, lean_object* v_00_u03b1_2813_, lean_object* v_inst_2814_, lean_object* v_inst_2815_, lean_object* v_inst_2816_, lean_object* v_inst_2817_, lean_object* v_inst_2818_, lean_object* v_inst_2819_, lean_object* v_inst_2820_, lean_object* v_inst_2821_, lean_object* v_inst_2822_, lean_object* v_inst_2823_, lean_object* v_x_2824_){
_start:
{
lean_object* v___x_2825_; 
v___x_2825_ = l_Lean_Elab_liftMacroM___redArg(v_inst_2814_, v_inst_2815_, v_inst_2816_, v_inst_2817_, v_inst_2818_, v_inst_2819_, v_inst_2820_, v_inst_2821_, v_inst_2822_, v_inst_2823_, v_x_2824_);
return v___x_2825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_adaptMacro___redArg(lean_object* v_inst_2826_, lean_object* v_inst_2827_, lean_object* v_inst_2828_, lean_object* v_inst_2829_, lean_object* v_inst_2830_, lean_object* v_inst_2831_, lean_object* v_inst_2832_, lean_object* v_inst_2833_, lean_object* v_inst_2834_, lean_object* v_inst_2835_, lean_object* v_x_2836_, lean_object* v_stx_2837_){
_start:
{
lean_object* v___x_2838_; lean_object* v___x_2839_; 
v___x_2838_ = lean_apply_1(v_x_2836_, v_stx_2837_);
v___x_2839_ = l_Lean_Elab_liftMacroM___redArg(v_inst_2826_, v_inst_2827_, v_inst_2828_, v_inst_2829_, v_inst_2830_, v_inst_2831_, v_inst_2832_, v_inst_2833_, v_inst_2834_, v_inst_2835_, v___x_2838_);
return v___x_2839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_adaptMacro(lean_object* v_m_2840_, lean_object* v_inst_2841_, lean_object* v_inst_2842_, lean_object* v_inst_2843_, lean_object* v_inst_2844_, lean_object* v_inst_2845_, lean_object* v_inst_2846_, lean_object* v_inst_2847_, lean_object* v_inst_2848_, lean_object* v_inst_2849_, lean_object* v_inst_2850_, lean_object* v_x_2851_, lean_object* v_stx_2852_){
_start:
{
lean_object* v___x_2853_; lean_object* v___x_2854_; 
v___x_2853_ = lean_apply_1(v_x_2851_, v_stx_2852_);
v___x_2854_ = l_Lean_Elab_liftMacroM___redArg(v_inst_2841_, v_inst_2842_, v_inst_2843_, v_inst_2844_, v_inst_2845_, v_inst_2846_, v_inst_2847_, v_inst_2848_, v_inst_2849_, v_inst_2850_, v___x_2853_);
return v___x_2854_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_mkUnusedBaseName_loop(lean_object* v_baseName_2855_, lean_object* v_currNamespace_2856_, lean_object* v_idx_2857_, lean_object* v_a_2858_, lean_object* v_a_2859_){
_start:
{
lean_object* v_name_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; 
lean_inc(v_idx_2857_);
lean_inc(v_baseName_2855_);
v_name_2860_ = lean_name_append_index_after(v_baseName_2855_, v_idx_2857_);
lean_inc(v_name_2860_);
lean_inc(v_currNamespace_2856_);
v___x_2861_ = l_Lean_Name_append(v_currNamespace_2856_, v_name_2860_);
v___x_2862_ = l_Lean_Macro_hasDecl(v___x_2861_, v_a_2858_, v_a_2859_);
if (lean_obj_tag(v___x_2862_) == 0)
{
lean_object* v_a_2863_; uint8_t v___x_2864_; 
v_a_2863_ = lean_ctor_get(v___x_2862_, 0);
v___x_2864_ = lean_unbox(v_a_2863_);
if (v___x_2864_ == 0)
{
lean_object* v_a_2865_; lean_object* v___x_2867_; uint8_t v_isShared_2868_; uint8_t v_isSharedCheck_2872_; 
lean_dec(v_idx_2857_);
lean_dec(v_currNamespace_2856_);
lean_dec(v_baseName_2855_);
v_a_2865_ = lean_ctor_get(v___x_2862_, 1);
v_isSharedCheck_2872_ = !lean_is_exclusive(v___x_2862_);
if (v_isSharedCheck_2872_ == 0)
{
lean_object* v_unused_2873_; 
v_unused_2873_ = lean_ctor_get(v___x_2862_, 0);
lean_dec(v_unused_2873_);
v___x_2867_ = v___x_2862_;
v_isShared_2868_ = v_isSharedCheck_2872_;
goto v_resetjp_2866_;
}
else
{
lean_inc(v_a_2865_);
lean_dec(v___x_2862_);
v___x_2867_ = lean_box(0);
v_isShared_2868_ = v_isSharedCheck_2872_;
goto v_resetjp_2866_;
}
v_resetjp_2866_:
{
lean_object* v___x_2870_; 
if (v_isShared_2868_ == 0)
{
lean_ctor_set(v___x_2867_, 0, v_name_2860_);
v___x_2870_ = v___x_2867_;
goto v_reusejp_2869_;
}
else
{
lean_object* v_reuseFailAlloc_2871_; 
v_reuseFailAlloc_2871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2871_, 0, v_name_2860_);
lean_ctor_set(v_reuseFailAlloc_2871_, 1, v_a_2865_);
v___x_2870_ = v_reuseFailAlloc_2871_;
goto v_reusejp_2869_;
}
v_reusejp_2869_:
{
return v___x_2870_;
}
}
}
else
{
lean_object* v_a_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; 
lean_dec(v_name_2860_);
v_a_2874_ = lean_ctor_get(v___x_2862_, 1);
lean_inc(v_a_2874_);
lean_dec_ref_known(v___x_2862_, 2);
v___x_2875_ = lean_unsigned_to_nat(1u);
v___x_2876_ = lean_nat_add(v_idx_2857_, v___x_2875_);
lean_dec(v_idx_2857_);
v_idx_2857_ = v___x_2876_;
v_a_2859_ = v_a_2874_;
goto _start;
}
}
else
{
lean_object* v_a_2878_; lean_object* v_a_2879_; lean_object* v___x_2881_; uint8_t v_isShared_2882_; uint8_t v_isSharedCheck_2886_; 
lean_dec(v_name_2860_);
lean_dec(v_idx_2857_);
lean_dec(v_currNamespace_2856_);
lean_dec(v_baseName_2855_);
v_a_2878_ = lean_ctor_get(v___x_2862_, 0);
v_a_2879_ = lean_ctor_get(v___x_2862_, 1);
v_isSharedCheck_2886_ = !lean_is_exclusive(v___x_2862_);
if (v_isSharedCheck_2886_ == 0)
{
v___x_2881_ = v___x_2862_;
v_isShared_2882_ = v_isSharedCheck_2886_;
goto v_resetjp_2880_;
}
else
{
lean_inc(v_a_2879_);
lean_inc(v_a_2878_);
lean_dec(v___x_2862_);
v___x_2881_ = lean_box(0);
v_isShared_2882_ = v_isSharedCheck_2886_;
goto v_resetjp_2880_;
}
v_resetjp_2880_:
{
lean_object* v___x_2884_; 
if (v_isShared_2882_ == 0)
{
v___x_2884_ = v___x_2881_;
goto v_reusejp_2883_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v_a_2878_);
lean_ctor_set(v_reuseFailAlloc_2885_, 1, v_a_2879_);
v___x_2884_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2883_;
}
v_reusejp_2883_:
{
return v___x_2884_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_mkUnusedBaseName_loop___boxed(lean_object* v_baseName_2887_, lean_object* v_currNamespace_2888_, lean_object* v_idx_2889_, lean_object* v_a_2890_, lean_object* v_a_2891_){
_start:
{
lean_object* v_res_2892_; 
v_res_2892_ = l___private_Lean_Elab_Util_0__Lean_Elab_mkUnusedBaseName_loop(v_baseName_2887_, v_currNamespace_2888_, v_idx_2889_, v_a_2890_, v_a_2891_);
lean_dec_ref(v_a_2890_);
return v_res_2892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkUnusedBaseName(lean_object* v_baseName_2893_, lean_object* v_a_2894_, lean_object* v_a_2895_){
_start:
{
lean_object* v___x_2896_; 
v___x_2896_ = l_Lean_Macro_getCurrNamespace(v_a_2894_, v_a_2895_);
if (lean_obj_tag(v___x_2896_) == 0)
{
lean_object* v_a_2897_; lean_object* v_a_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; 
v_a_2897_ = lean_ctor_get(v___x_2896_, 0);
lean_inc_n(v_a_2897_, 2);
v_a_2898_ = lean_ctor_get(v___x_2896_, 1);
lean_inc(v_a_2898_);
lean_dec_ref_known(v___x_2896_, 2);
lean_inc(v_baseName_2893_);
v___x_2899_ = l_Lean_Name_append(v_a_2897_, v_baseName_2893_);
v___x_2900_ = l_Lean_Macro_hasDecl(v___x_2899_, v_a_2894_, v_a_2898_);
if (lean_obj_tag(v___x_2900_) == 0)
{
lean_object* v_a_2901_; uint8_t v___x_2902_; 
v_a_2901_ = lean_ctor_get(v___x_2900_, 0);
v___x_2902_ = lean_unbox(v_a_2901_);
if (v___x_2902_ == 0)
{
lean_object* v_a_2903_; lean_object* v___x_2905_; uint8_t v_isShared_2906_; uint8_t v_isSharedCheck_2910_; 
lean_dec(v_a_2897_);
v_a_2903_ = lean_ctor_get(v___x_2900_, 1);
v_isSharedCheck_2910_ = !lean_is_exclusive(v___x_2900_);
if (v_isSharedCheck_2910_ == 0)
{
lean_object* v_unused_2911_; 
v_unused_2911_ = lean_ctor_get(v___x_2900_, 0);
lean_dec(v_unused_2911_);
v___x_2905_ = v___x_2900_;
v_isShared_2906_ = v_isSharedCheck_2910_;
goto v_resetjp_2904_;
}
else
{
lean_inc(v_a_2903_);
lean_dec(v___x_2900_);
v___x_2905_ = lean_box(0);
v_isShared_2906_ = v_isSharedCheck_2910_;
goto v_resetjp_2904_;
}
v_resetjp_2904_:
{
lean_object* v___x_2908_; 
if (v_isShared_2906_ == 0)
{
lean_ctor_set(v___x_2905_, 0, v_baseName_2893_);
v___x_2908_ = v___x_2905_;
goto v_reusejp_2907_;
}
else
{
lean_object* v_reuseFailAlloc_2909_; 
v_reuseFailAlloc_2909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2909_, 0, v_baseName_2893_);
lean_ctor_set(v_reuseFailAlloc_2909_, 1, v_a_2903_);
v___x_2908_ = v_reuseFailAlloc_2909_;
goto v_reusejp_2907_;
}
v_reusejp_2907_:
{
return v___x_2908_;
}
}
}
else
{
lean_object* v_a_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; 
v_a_2912_ = lean_ctor_get(v___x_2900_, 1);
lean_inc(v_a_2912_);
lean_dec_ref_known(v___x_2900_, 2);
v___x_2913_ = lean_unsigned_to_nat(1u);
v___x_2914_ = l___private_Lean_Elab_Util_0__Lean_Elab_mkUnusedBaseName_loop(v_baseName_2893_, v_a_2897_, v___x_2913_, v_a_2894_, v_a_2912_);
return v___x_2914_;
}
}
else
{
lean_object* v_a_2915_; lean_object* v_a_2916_; lean_object* v___x_2918_; uint8_t v_isShared_2919_; uint8_t v_isSharedCheck_2923_; 
lean_dec(v_a_2897_);
lean_dec(v_baseName_2893_);
v_a_2915_ = lean_ctor_get(v___x_2900_, 0);
v_a_2916_ = lean_ctor_get(v___x_2900_, 1);
v_isSharedCheck_2923_ = !lean_is_exclusive(v___x_2900_);
if (v_isSharedCheck_2923_ == 0)
{
v___x_2918_ = v___x_2900_;
v_isShared_2919_ = v_isSharedCheck_2923_;
goto v_resetjp_2917_;
}
else
{
lean_inc(v_a_2916_);
lean_inc(v_a_2915_);
lean_dec(v___x_2900_);
v___x_2918_ = lean_box(0);
v_isShared_2919_ = v_isSharedCheck_2923_;
goto v_resetjp_2917_;
}
v_resetjp_2917_:
{
lean_object* v___x_2921_; 
if (v_isShared_2919_ == 0)
{
v___x_2921_ = v___x_2918_;
goto v_reusejp_2920_;
}
else
{
lean_object* v_reuseFailAlloc_2922_; 
v_reuseFailAlloc_2922_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2922_, 0, v_a_2915_);
lean_ctor_set(v_reuseFailAlloc_2922_, 1, v_a_2916_);
v___x_2921_ = v_reuseFailAlloc_2922_;
goto v_reusejp_2920_;
}
v_reusejp_2920_:
{
return v___x_2921_;
}
}
}
}
else
{
lean_dec(v_baseName_2893_);
return v___x_2896_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkUnusedBaseName___boxed(lean_object* v_baseName_2924_, lean_object* v_a_2925_, lean_object* v_a_2926_){
_start:
{
lean_object* v_res_2927_; 
v_res_2927_ = l_Lean_Elab_mkUnusedBaseName(v_baseName_2924_, v_a_2925_, v_a_2926_);
lean_dec_ref(v_a_2925_);
return v_res_2927_;
}
}
static lean_object* _init_l_Lean_Elab_logException___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2929_; lean_object* v___x_2930_; 
v___x_2929_ = ((lean_object*)(l_Lean_Elab_logException___redArg___lam__0___closed__0));
v___x_2930_ = l_Lean_stringToMessageData(v___x_2929_);
return v___x_2930_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___redArg___lam__0(lean_object* v_inst_2931_, lean_object* v_inst_2932_, lean_object* v_inst_2933_, lean_object* v_inst_2934_, lean_object* v_name_2935_){
_start:
{
lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; 
v___x_2936_ = lean_obj_once(&l_Lean_Elab_logException___redArg___lam__0___closed__1, &l_Lean_Elab_logException___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_logException___redArg___lam__0___closed__1);
v___x_2937_ = l_Lean_MessageData_ofName(v_name_2935_);
v___x_2938_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2938_, 0, v___x_2936_);
lean_ctor_set(v___x_2938_, 1, v___x_2937_);
v___x_2939_ = l_Lean_logError___redArg(v_inst_2931_, v_inst_2932_, v_inst_2933_, v_inst_2934_, v___x_2938_);
return v___x_2939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___redArg(lean_object* v_inst_2940_, lean_object* v_inst_2941_, lean_object* v_inst_2942_, lean_object* v_inst_2943_, lean_object* v_inst_2944_, lean_object* v_ex_2945_){
_start:
{
lean_object* v_toApplicative_2946_; lean_object* v_toBind_2947_; lean_object* v_toPure_2948_; 
v_toApplicative_2946_ = lean_ctor_get(v_inst_2940_, 0);
v_toBind_2947_ = lean_ctor_get(v_inst_2940_, 1);
v_toPure_2948_ = lean_ctor_get(v_toApplicative_2946_, 1);
if (lean_obj_tag(v_ex_2945_) == 0)
{
lean_object* v_ref_2952_; lean_object* v_msg_2953_; lean_object* v___x_2954_; 
lean_dec(v_inst_2944_);
v_ref_2952_ = lean_ctor_get(v_ex_2945_, 0);
lean_inc(v_ref_2952_);
v_msg_2953_ = lean_ctor_get(v_ex_2945_, 1);
lean_inc_ref(v_msg_2953_);
lean_dec_ref_known(v_ex_2945_, 2);
v___x_2954_ = l_Lean_logErrorAt___redArg(v_inst_2940_, v_inst_2941_, v_inst_2942_, v_inst_2943_, v_ref_2952_, v_msg_2953_);
return v___x_2954_;
}
else
{
lean_object* v_id_2955_; uint8_t v___x_2956_; 
lean_inc(v_toBind_2947_);
v_id_2955_ = lean_ctor_get(v_ex_2945_, 0);
lean_inc(v_id_2955_);
v___x_2956_ = l_Lean_Elab_isAbortExceptionId(v_id_2955_);
if (v___x_2956_ == 0)
{
uint8_t v___x_2957_; 
v___x_2957_ = l_Lean_Exception_isInterrupt(v_ex_2945_);
lean_dec_ref_known(v_ex_2945_, 2);
if (v___x_2957_ == 0)
{
lean_object* v___f_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; 
v___f_2958_ = lean_alloc_closure((void*)(l_Lean_Elab_logException___redArg___lam__0), 5, 4);
lean_closure_set(v___f_2958_, 0, v_inst_2940_);
lean_closure_set(v___f_2958_, 1, v_inst_2941_);
lean_closure_set(v___f_2958_, 2, v_inst_2942_);
lean_closure_set(v___f_2958_, 3, v_inst_2943_);
v___x_2959_ = lean_alloc_closure((void*)(l_Lean_InternalExceptionId_getName___boxed), 2, 1);
lean_closure_set(v___x_2959_, 0, v_id_2955_);
v___x_2960_ = lean_apply_2(v_inst_2944_, lean_box(0), v___x_2959_);
v___x_2961_ = lean_apply_4(v_toBind_2947_, lean_box(0), lean_box(0), v___x_2960_, v___f_2958_);
return v___x_2961_;
}
else
{
lean_inc(v_toPure_2948_);
lean_dec(v_id_2955_);
lean_dec(v_toBind_2947_);
lean_dec(v_inst_2944_);
lean_dec_ref(v_inst_2943_);
lean_dec(v_inst_2942_);
lean_dec_ref(v_inst_2941_);
lean_dec_ref(v_inst_2940_);
goto v___jp_2949_;
}
}
else
{
lean_inc(v_toPure_2948_);
lean_dec_ref_known(v_ex_2945_, 2);
lean_dec(v_id_2955_);
lean_dec(v_toBind_2947_);
lean_dec(v_inst_2944_);
lean_dec_ref(v_inst_2943_);
lean_dec(v_inst_2942_);
lean_dec_ref(v_inst_2941_);
lean_dec_ref(v_inst_2940_);
goto v___jp_2949_;
}
}
v___jp_2949_:
{
lean_object* v___x_2950_; lean_object* v___x_2951_; 
v___x_2950_ = lean_box(0);
v___x_2951_ = lean_apply_2(v_toPure_2948_, lean_box(0), v___x_2950_);
return v___x_2951_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException(lean_object* v_m_2962_, lean_object* v_inst_2963_, lean_object* v_inst_2964_, lean_object* v_inst_2965_, lean_object* v_inst_2966_, lean_object* v_inst_2967_, lean_object* v_ex_2968_){
_start:
{
lean_object* v___x_2969_; 
v___x_2969_ = l_Lean_Elab_logException___redArg(v_inst_2963_, v_inst_2964_, v_inst_2965_, v_inst_2966_, v_inst_2967_, v_ex_2968_);
return v___x_2969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___redArg___lam__0(lean_object* v_inst_2970_, lean_object* v_inst_2971_, lean_object* v_inst_2972_, lean_object* v_inst_2973_, lean_object* v_inst_2974_, lean_object* v_ex_2975_){
_start:
{
lean_object* v___x_2976_; 
v___x_2976_ = l_Lean_Elab_logException___redArg(v_inst_2970_, v_inst_2971_, v_inst_2972_, v_inst_2973_, v_inst_2974_, v_ex_2975_);
return v___x_2976_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___redArg(lean_object* v_inst_2977_, lean_object* v_inst_2978_, lean_object* v_inst_2979_, lean_object* v_inst_2980_, lean_object* v_inst_2981_, lean_object* v_inst_2982_, lean_object* v_x_2983_){
_start:
{
lean_object* v_tryCatch_2984_; lean_object* v___f_2985_; lean_object* v___x_2986_; 
v_tryCatch_2984_ = lean_ctor_get(v_inst_2979_, 1);
lean_inc(v_tryCatch_2984_);
lean_dec_ref(v_inst_2979_);
v___f_2985_ = lean_alloc_closure((void*)(l_Lean_Elab_withLogging___redArg___lam__0), 6, 5);
lean_closure_set(v___f_2985_, 0, v_inst_2977_);
lean_closure_set(v___f_2985_, 1, v_inst_2978_);
lean_closure_set(v___f_2985_, 2, v_inst_2980_);
lean_closure_set(v___f_2985_, 3, v_inst_2981_);
lean_closure_set(v___f_2985_, 4, v_inst_2982_);
v___x_2986_ = lean_apply_3(v_tryCatch_2984_, lean_box(0), v_x_2983_, v___f_2985_);
return v___x_2986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging(lean_object* v_m_2987_, lean_object* v_inst_2988_, lean_object* v_inst_2989_, lean_object* v_inst_2990_, lean_object* v_inst_2991_, lean_object* v_inst_2992_, lean_object* v_inst_2993_, lean_object* v_x_2994_){
_start:
{
lean_object* v___x_2995_; 
v___x_2995_ = l_Lean_Elab_withLogging___redArg(v_inst_2988_, v_inst_2989_, v_inst_2990_, v_inst_2991_, v_inst_2992_, v_inst_2993_, v_x_2994_);
return v___x_2995_;
}
}
static lean_object* _init_l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2997_; lean_object* v___x_2998_; 
v___x_2997_ = ((lean_object*)(l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___closed__0));
v___x_2998_ = l_Lean_stringToMessageData(v___x_2997_);
return v___x_2998_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0(lean_object* v_val_2999_, lean_object* v_ex_3000_, lean_object* v_toPure_3001_, lean_object* v_____do__lift_3002_){
_start:
{
lean_object* v_exPosition_3003_; lean_object* v_line_3004_; lean_object* v_column_3005_; lean_object* v___x_3007_; uint8_t v_isShared_3008_; uint8_t v_isSharedCheck_3025_; 
v_exPosition_3003_ = l_Lean_FileMap_toPosition(v_____do__lift_3002_, v_val_2999_);
v_line_3004_ = lean_ctor_get(v_exPosition_3003_, 0);
v_column_3005_ = lean_ctor_get(v_exPosition_3003_, 1);
v_isSharedCheck_3025_ = !lean_is_exclusive(v_exPosition_3003_);
if (v_isSharedCheck_3025_ == 0)
{
v___x_3007_ = v_exPosition_3003_;
v_isShared_3008_ = v_isSharedCheck_3025_;
goto v_resetjp_3006_;
}
else
{
lean_inc(v_column_3005_);
lean_inc(v_line_3004_);
lean_dec(v_exPosition_3003_);
v___x_3007_ = lean_box(0);
v_isShared_3008_ = v_isSharedCheck_3025_;
goto v_resetjp_3006_;
}
v_resetjp_3006_:
{
lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3014_; 
v___x_3009_ = l_Nat_reprFast(v_line_3004_);
v___x_3010_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3010_, 0, v___x_3009_);
v___x_3011_ = l_Lean_MessageData_ofFormat(v___x_3010_);
v___x_3012_ = lean_obj_once(&l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___closed__1, &l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___closed__1);
if (v_isShared_3008_ == 0)
{
lean_ctor_set_tag(v___x_3007_, 7);
lean_ctor_set(v___x_3007_, 1, v___x_3012_);
lean_ctor_set(v___x_3007_, 0, v___x_3011_);
v___x_3014_ = v___x_3007_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3024_; 
v_reuseFailAlloc_3024_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3024_, 0, v___x_3011_);
lean_ctor_set(v_reuseFailAlloc_3024_, 1, v___x_3012_);
v___x_3014_ = v_reuseFailAlloc_3024_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; 
v___x_3015_ = l_Nat_reprFast(v_column_3005_);
v___x_3016_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3016_, 0, v___x_3015_);
v___x_3017_ = l_Lean_MessageData_ofFormat(v___x_3016_);
v___x_3018_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3018_, 0, v___x_3014_);
lean_ctor_set(v___x_3018_, 1, v___x_3017_);
v___x_3019_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_mkElabAttribute_spec__0_spec__0___closed__16);
v___x_3020_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3020_, 0, v___x_3018_);
lean_ctor_set(v___x_3020_, 1, v___x_3019_);
v___x_3021_ = l_Lean_Exception_toMessageData(v_ex_3000_);
v___x_3022_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3022_, 0, v___x_3020_);
lean_ctor_set(v___x_3022_, 1, v___x_3021_);
v___x_3023_ = lean_apply_2(v_toPure_3001_, lean_box(0), v___x_3022_);
return v___x_3023_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___boxed(lean_object* v_val_3026_, lean_object* v_ex_3027_, lean_object* v_toPure_3028_, lean_object* v_____do__lift_3029_){
_start:
{
lean_object* v_res_3030_; 
v_res_3030_ = l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0(v_val_3026_, v_ex_3027_, v_toPure_3028_, v_____do__lift_3029_);
lean_dec(v_val_3026_);
return v_res_3030_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__1(lean_object* v_ex_3031_, lean_object* v_toPure_3032_, lean_object* v_toBind_3033_, lean_object* v_toMonadFileMap_3034_, lean_object* v_pos_3035_){
_start:
{
lean_object* v___x_3036_; uint8_t v___x_3037_; lean_object* v___x_3038_; 
v___x_3036_ = l_Lean_Exception_getRef(v_ex_3031_);
v___x_3037_ = 0;
v___x_3038_ = l_Lean_Syntax_getPos_x3f(v___x_3036_, v___x_3037_);
lean_dec(v___x_3036_);
if (lean_obj_tag(v___x_3038_) == 0)
{
lean_object* v___x_3039_; lean_object* v___x_3040_; 
lean_dec(v_toMonadFileMap_3034_);
lean_dec(v_toBind_3033_);
v___x_3039_ = l_Lean_Exception_toMessageData(v_ex_3031_);
v___x_3040_ = lean_apply_2(v_toPure_3032_, lean_box(0), v___x_3039_);
return v___x_3040_;
}
else
{
lean_object* v_val_3041_; uint8_t v_decide_3042_; 
v_val_3041_ = lean_ctor_get(v___x_3038_, 0);
lean_inc(v_val_3041_);
lean_dec_ref_known(v___x_3038_, 1);
v_decide_3042_ = lean_nat_dec_eq(v_pos_3035_, v_val_3041_);
if (v_decide_3042_ == 0)
{
lean_object* v___f_3043_; lean_object* v___x_3044_; 
v___f_3043_ = lean_alloc_closure((void*)(l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_3043_, 0, v_val_3041_);
lean_closure_set(v___f_3043_, 1, v_ex_3031_);
lean_closure_set(v___f_3043_, 2, v_toPure_3032_);
v___x_3044_ = lean_apply_4(v_toBind_3033_, lean_box(0), lean_box(0), v_toMonadFileMap_3034_, v___f_3043_);
return v___x_3044_;
}
else
{
lean_object* v___x_3045_; lean_object* v___x_3046_; 
lean_dec(v_val_3041_);
lean_dec(v_toMonadFileMap_3034_);
lean_dec(v_toBind_3033_);
v___x_3045_ = l_Lean_Exception_toMessageData(v_ex_3031_);
v___x_3046_ = lean_apply_2(v_toPure_3032_, lean_box(0), v___x_3045_);
return v___x_3046_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__1___boxed(lean_object* v_ex_3047_, lean_object* v_toPure_3048_, lean_object* v_toBind_3049_, lean_object* v_toMonadFileMap_3050_, lean_object* v_pos_3051_){
_start:
{
lean_object* v_res_3052_; 
v_res_3052_ = l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__1(v_ex_3047_, v_toPure_3048_, v_toBind_3049_, v_toMonadFileMap_3050_, v_pos_3051_);
lean_dec(v_pos_3051_);
return v_res_3052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_nestedExceptionToMessageData___redArg(lean_object* v_inst_3053_, lean_object* v_inst_3054_, lean_object* v_ex_3055_){
_start:
{
lean_object* v_toApplicative_3056_; lean_object* v_toBind_3057_; lean_object* v_toPure_3058_; lean_object* v_toMonadFileMap_3059_; lean_object* v___x_3060_; lean_object* v___f_3061_; lean_object* v___x_3062_; 
v_toApplicative_3056_ = lean_ctor_get(v_inst_3053_, 0);
v_toBind_3057_ = lean_ctor_get(v_inst_3053_, 1);
lean_inc_n(v_toBind_3057_, 2);
v_toPure_3058_ = lean_ctor_get(v_toApplicative_3056_, 1);
lean_inc(v_toPure_3058_);
v_toMonadFileMap_3059_ = lean_ctor_get(v_inst_3054_, 0);
lean_inc(v_toMonadFileMap_3059_);
v___x_3060_ = l_Lean_getRefPos___redArg(v_inst_3053_, v_inst_3054_);
v___f_3061_ = lean_alloc_closure((void*)(l_Lean_Elab_nestedExceptionToMessageData___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_3061_, 0, v_ex_3055_);
lean_closure_set(v___f_3061_, 1, v_toPure_3058_);
lean_closure_set(v___f_3061_, 2, v_toBind_3057_);
lean_closure_set(v___f_3061_, 3, v_toMonadFileMap_3059_);
v___x_3062_ = lean_apply_4(v_toBind_3057_, lean_box(0), lean_box(0), v___x_3060_, v___f_3061_);
return v___x_3062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_nestedExceptionToMessageData(lean_object* v_m_3063_, lean_object* v_inst_3064_, lean_object* v_inst_3065_, lean_object* v_ex_3066_){
_start:
{
lean_object* v___x_3067_; 
v___x_3067_ = l_Lean_Elab_nestedExceptionToMessageData___redArg(v_inst_3064_, v_inst_3065_, v_ex_3066_);
return v___x_3067_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__0(lean_object* v_inst_3068_, lean_object* v_inst_3069_, lean_object* v_x_3070_){
_start:
{
lean_object* v___x_3071_; 
v___x_3071_ = l_Lean_Elab_nestedExceptionToMessageData___redArg(v_inst_3068_, v_inst_3069_, v_x_3070_);
return v___x_3071_;
}
}
static lean_object* _init_l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3073_; lean_object* v___x_3074_; 
v___x_3073_ = ((lean_object*)(l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1___closed__0));
v___x_3074_ = l_Lean_stringToMessageData(v___x_3073_);
return v___x_3074_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1(lean_object* v_msg_3075_, lean_object* v_inst_3076_, lean_object* v_inst_3077_, lean_object* v_____do__lift_3078_){
_start:
{
lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; 
v___x_3079_ = lean_obj_once(&l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1___closed__1, &l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1___closed__1_once, _init_l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1___closed__1);
v___x_3080_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3080_, 0, v_msg_3075_);
lean_ctor_set(v___x_3080_, 1, v___x_3079_);
v___x_3081_ = l_Lean_toMessageList(v_____do__lift_3078_);
v___x_3082_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3082_, 0, v___x_3080_);
lean_ctor_set(v___x_3082_, 1, v___x_3081_);
v___x_3083_ = l_Lean_throwError___redArg(v_inst_3076_, v_inst_3077_, v___x_3082_);
return v___x_3083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwErrorWithNestedErrors___redArg(lean_object* v_inst_3084_, lean_object* v_inst_3085_, lean_object* v_inst_3086_, lean_object* v_msg_3087_, lean_object* v_exs_3088_){
_start:
{
lean_object* v_toBind_3089_; lean_object* v___f_3090_; lean_object* v___f_3091_; size_t v_sz_3092_; size_t v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; 
v_toBind_3089_ = lean_ctor_get(v_inst_3085_, 1);
lean_inc(v_toBind_3089_);
lean_inc_ref_n(v_inst_3085_, 2);
v___f_3090_ = lean_alloc_closure((void*)(l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3090_, 0, v_inst_3085_);
lean_closure_set(v___f_3090_, 1, v_inst_3086_);
v___f_3091_ = lean_alloc_closure((void*)(l_Lean_Elab_throwErrorWithNestedErrors___redArg___lam__1), 4, 3);
lean_closure_set(v___f_3091_, 0, v_msg_3087_);
lean_closure_set(v___f_3091_, 1, v_inst_3085_);
lean_closure_set(v___f_3091_, 2, v_inst_3084_);
v_sz_3092_ = lean_array_size(v_exs_3088_);
v___x_3093_ = ((size_t)0ULL);
v___x_3094_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_3085_, v___f_3090_, v_sz_3092_, v___x_3093_, v_exs_3088_);
v___x_3095_ = lean_apply_4(v_toBind_3089_, lean_box(0), lean_box(0), v___x_3094_, v___f_3091_);
return v___x_3095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwErrorWithNestedErrors(lean_object* v_m_3096_, lean_object* v_00_u03b1_3097_, lean_object* v_inst_3098_, lean_object* v_inst_3099_, lean_object* v_inst_3100_, lean_object* v_msg_3101_, lean_object* v_exs_3102_){
_start:
{
lean_object* v___x_3103_; 
v___x_3103_ = l_Lean_Elab_throwErrorWithNestedErrors___redArg(v_inst_3098_, v_inst_3099_, v_inst_3100_, v_msg_3101_, v_exs_3102_);
return v___x_3103_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3170_; uint8_t v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; 
v___x_3170_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_));
v___x_3171_ = 0;
v___x_3172_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_));
v___x_3173_ = l_Lean_registerTraceClass(v___x_3170_, v___x_3171_, v___x_3172_);
if (lean_obj_tag(v___x_3173_) == 0)
{
lean_object* v___x_3174_; lean_object* v___x_3175_; 
lean_dec_ref_known(v___x_3173_, 1);
v___x_3174_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_));
v___x_3175_ = l_Lean_registerTraceClass(v___x_3174_, v___x_3171_, v___x_3172_);
if (lean_obj_tag(v___x_3175_) == 0)
{
lean_object* v___x_3176_; uint8_t v___x_3177_; lean_object* v___x_3178_; 
lean_dec_ref_known(v___x_3175_, 1);
v___x_3176_ = ((lean_object*)(l___private_Lean_Elab_Util_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_));
v___x_3177_ = 1;
v___x_3178_ = l_Lean_registerTraceClass(v___x_3176_, v___x_3177_, v___x_3172_);
return v___x_3178_;
}
else
{
return v___x_3175_;
}
}
else
{
return v___x_3173_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2____boxed(lean_object* v_a_3179_){
_start:
{
lean_object* v_res_3180_; 
v_res_3180_ = l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_();
return v_res_3180_;
}
}
lean_object* runtime_initialize_Lean_Parser_Extension(uint8_t builtin);
lean_object* runtime_initialize_Lean_KeyedDeclsAttribute(uint8_t builtin);
lean_object* runtime_initialize_Lean_BuiltinDocAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_ExtraModUses(uint8_t builtin);
lean_object* runtime_initialize_Init_Prelude(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Util(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_KeyedDeclsAttribute(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_BuiltinDocAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1710170986____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_pp_macroStack = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_pp_macroStack);
lean_dec_ref(res);
res = l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_1238572749____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_macroAttribute = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_macroAttribute);
lean_dec_ref(res);
res = l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Util_0__Lean_Elab_macroAttribute___regBuiltin_Lean_Elab_macroAttribute_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Util_0__Lean_Elab_initFn_00___x40_Lean_Elab_Util_2034298159____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Command(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Util(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_mkElabAttribute___auto__1 = _init_l_Lean_Elab_mkElabAttribute___auto__1();
lean_mark_persistent(l_Lean_Elab_mkElabAttribute___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Extension(uint8_t builtin);
lean_object* initialize_Lean_Parser_Command(uint8_t builtin);
lean_object* initialize_Lean_KeyedDeclsAttribute(uint8_t builtin);
lean_object* initialize_Lean_BuiltinDocAttr(uint8_t builtin);
lean_object* initialize_Lean_ExtraModUses(uint8_t builtin);
lean_object* initialize_Init_Prelude(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Util(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_KeyedDeclsAttribute(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_BuiltinDocAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Util(builtin);
}
#ifdef __cplusplus
}
#endif
