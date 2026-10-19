// Lean compiler output
// Module: Lean.Elab.DefView
// Imports: public import Lean.Elab.DeclNameGen public import Lean.Elab.DeclUtil
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
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_transformWith___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedSynthNormMemoSlot_default;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_usageRecordingEnabled();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUsesByChecksRef;
extern lean_object* l_Lean_inheritedTraceOptions;
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Std_HashMap_instInhabited___redArg();
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_Language_Snapshot_transform(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandOptDeclSig(lean_object*);
lean_object* l_Lean_Elab_Modifiers_addAttr(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandDeclSig(lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_getCurrMacroScope___redArg(lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTree_transform___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
extern lean_object* l_Lean_Elab_instInhabitedModifiers_default;
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Elab_toAttributeKind___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_Elab_expandOptNamedPrio___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Syntax_mkNumLit(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_mkInstanceName(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_instBEqComputeKind_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Language_instToSnapshotTreeOption___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_instToSnapshotTreeTacticParsedSnapshot_go___boxed(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Elab_Modifiers_filterAttrs(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_addFirstAttr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_def_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_def_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_def_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_def_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_instance_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_instance_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_instance_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_instance_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_theorem_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_theorem_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_theorem_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_theorem_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_example_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_example_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_example_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_example_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_opaque_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_opaque_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_opaque_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_opaque_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_abbrev_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_abbrev_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_abbrev_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_abbrev_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_instInhabitedDefKind_default;
LEAN_EXPORT uint8_t l_Lean_Elab_instInhabitedDefKind;
LEAN_EXPORT uint8_t l_Lean_Elab_instBEqDefKind_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_instBEqDefKind_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_instBEqDefKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instBEqDefKind_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instBEqDefKind___closed__0 = (const lean_object*)&l_Lean_Elab_instBEqDefKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instBEqDefKind = (const lean_object*)&l_Lean_Elab_instBEqDefKind___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Elab_DefKind_isTheorem(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_isTheorem___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_DefKind_isExample(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_isExample___boxed(lean_object*);
static const lean_array_object l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__0 = (const lean_object*)&l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__0_value;
static const lean_string_object l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__1 = (const lean_object*)&l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__1_value;
static const lean_ctor_object l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__1_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__2 = (const lean_object*)&l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__2_value;
static lean_once_cell_t l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__3;
static lean_once_cell_t l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedDefViewElabHeaderData_default;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedDefViewElabHeaderData;
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__0 = (const lean_object*)&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__0_value;
static const lean_closure_object l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__1 = (const lean_object*)&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__1_value;
static const lean_closure_object l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__2 = (const lean_object*)&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__2_value;
static const lean_closure_object l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__3 = (const lean_object*)&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__3_value;
static const lean_closure_object l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__4 = (const lean_object*)&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__4_value;
static const lean_closure_object l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__5 = (const lean_object*)&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__5_value;
static const lean_closure_object l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__6 = (const lean_object*)&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__6_value;
static const lean_ctor_object l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__0_value),((lean_object*)&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__1_value)}};
static const lean_object* l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__7 = (const lean_object*)&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__7_value;
static const lean_ctor_object l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__7_value),((lean_object*)&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__2_value),((lean_object*)&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__3_value),((lean_object*)&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__4_value),((lean_object*)&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__5_value)}};
static const lean_object* l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__8 = (const lean_object*)&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__8_value;
static const lean_ctor_object l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__8_value),((lean_object*)&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__6_value)}};
static const lean_object* l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__9 = (const lean_object*)&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__9_value;
static lean_once_cell_t l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__10;
static const lean_closure_object l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_SnapshotTree_transform___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__11 = (const lean_object*)&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__11_value;
static const lean_closure_object l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__11_value)} };
static const lean_object* l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__12 = (const lean_object*)&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__12_value;
static lean_once_cell_t l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__13;
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot;
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_instToSnapshotTreeTacticParsedSnapshot_go___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___closed__0 = (const lean_object*)&l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___closed__0_value;
static const lean_closure_object l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___closed__0_value)} };
static const lean_object* l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___closed__1 = (const lean_object*)&l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___closed__1_value;
static lean_once_cell_t l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___closed__2;
static lean_once_cell_t l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot;
static const lean_string_object l_Lean_Elab_instImpl___closed__0_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_instImpl___closed__0_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21_ = (const lean_object*)&l_Lean_Elab_instImpl___closed__0_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value;
static const lean_string_object l_Lean_Elab_instImpl___closed__1_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_instImpl___closed__1_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21_ = (const lean_object*)&l_Lean_Elab_instImpl___closed__1_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value;
static const lean_string_object l_Lean_Elab_instImpl___closed__2_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "DefsParsedSnapshot"};
static const lean_object* l_Lean_Elab_instImpl___closed__2_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21_ = (const lean_object*)&l_Lean_Elab_instImpl___closed__2_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value;
static const lean_ctor_object l_Lean_Elab_instImpl___closed__3_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instImpl___closed__0_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_instImpl___closed__3_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instImpl___closed__3_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value_aux_0),((lean_object*)&l_Lean_Elab_instImpl___closed__1_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_instImpl___closed__3_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instImpl___closed__3_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value_aux_1),((lean_object*)&l_Lean_Elab_instImpl___closed__2_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value),LEAN_SCALAR_PTR_LITERAL(203, 62, 250, 36, 153, 122, 46, 61)}};
static const lean_object* l_Lean_Elab_instImpl___closed__3_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21_ = (const lean_object*)&l_Lean_Elab_instImpl___closed__3_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instImpl_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21_ = (const lean_object*)&l_Lean_Elab_instImpl___closed__3_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instTypeNameDefsParsedSnapshot = (const lean_object*)&l_Lean_Elab_instImpl___closed__3_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value;
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___closed__0;
static lean_once_cell_t l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___closed__1;
static lean_once_cell_t l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot;
static lean_once_cell_t l_Lean_Elab_instInhabitedDefView_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instInhabitedDefView_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedDefView_default;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedDefView;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_DefView_isInstance_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instance"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_DefView_isInstance_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_DefView_isInstance_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_DefView_isInstance_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_DefView_isInstance_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(236, 216, 85, 168, 141, 176, 253, 81)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_DefView_isInstance_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_DefView_isInstance_spec__0___closed__1_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_DefView_isInstance_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_DefView_isInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_DefView_isInstance(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefView_isInstance___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_DefView_markDefEq___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "defeq"};
static const lean_object* l_Lean_Elab_DefView_markDefEq___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_DefView_markDefEq___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_DefView_markDefEq___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_DefView_markDefEq___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 220, 195, 245, 59, 218, 252, 66)}};
static const lean_object* l_Lean_Elab_DefView_markDefEq___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_DefView_markDefEq___lam__0___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Elab_DefView_markDefEq___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefView_markDefEq___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Elab_DefView_markDefEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_DefView_markDefEq___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_DefView_markDefEq___closed__0 = (const lean_object*)&l_Lean_Elab_DefView_markDefEq___closed__0_value;
static const lean_ctor_object l_Lean_Elab_DefView_markDefEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_DefView_markDefEq___lam__0___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_DefView_markDefEq___closed__1 = (const lean_object*)&l_Lean_Elab_DefView_markDefEq___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_DefView_markDefEq(lean_object*);
static const lean_string_object l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "inline"};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__0 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__0_value),LEAN_SCALAR_PTR_LITERAL(92, 198, 166, 26, 13, 231, 61, 113)}};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__1 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__2 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__2_value;
static const lean_string_object l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reducible"};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__3 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__3_value),LEAN_SCALAR_PTR_LITERAL(29, 67, 225, 118, 155, 2, 197, 97)}};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__4 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__5 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__5_value;
static const lean_string_object l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__6 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__6_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__7 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkDefViewOfAbbrev(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkDefViewOfDef(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkDefViewOfTheorem(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__6___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__6___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__6___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__15_spec__20_spec__24___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__15_spec__20___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__15___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__14___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8_spec__12_spec__16___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8_spec__12_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8_spec__12___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__0;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__1 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__1_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__2 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__2_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__3_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__4;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__6;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__7;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__8 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__8_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__8_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__10;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__11_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__12;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__13_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__14;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__15_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__16 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__16_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__17_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__18 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__18_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__5_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__5_spec__12___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__21___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_mkDefViewOfInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfInstance___closed__0 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__0_value;
static const lean_string_object l_Lean_Elab_Command_mkDefViewOfInstance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfInstance___closed__1 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_mkDefViewOfInstance___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfInstance___closed__2 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__2_value;
static const lean_string_object l_Lean_Elab_Command_mkDefViewOfInstance___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfInstance___closed__3 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfInstance___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instImpl___closed__0_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfInstance___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfInstance___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__3_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfInstance___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_DefView_isInstance_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(128, 1, 138, 227, 223, 112, 103, 179)}};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfInstance___closed__4 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__4_value;
static const lean_string_object l_Lean_Elab_Command_mkDefViewOfInstance___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "mkInstanceName"};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfInstance___closed__5 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfInstance___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instImpl___closed__1_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfInstance___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_DefView_isInstance_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(82, 202, 238, 225, 213, 103, 187, 44)}};
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfInstance___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__6_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(179, 135, 114, 115, 18, 204, 220, 213)}};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfInstance___closed__6 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Command_mkDefViewOfInstance___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkDefViewOfInstance___closed__7;
static const lean_string_object l_Lean_Elab_Command_mkDefViewOfInstance___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "generated "};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfInstance___closed__8 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Command_mkDefViewOfInstance___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkDefViewOfInstance___closed__9;
static const lean_string_object l_Lean_Elab_Command_mkDefViewOfInstance___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " for "};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfInstance___closed__10 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__10_value;
static lean_once_cell_t l_Lean_Elab_Command_mkDefViewOfInstance___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkDefViewOfInstance___closed__11;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkDefViewOfInstance(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkDefViewOfInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__5_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__5_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8_spec__12(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__15(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8_spec__12_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8_spec__12_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__15_spec__20(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__15_spec__20_spec__24(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_mkDefViewOfOpaque___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfOpaque___closed__0 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfOpaque___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instImpl___closed__0_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfOpaque___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfOpaque___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfOpaque___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__0_value),LEAN_SCALAR_PTR_LITERAL(228, 117, 47, 248, 145, 185, 135, 188)}};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfOpaque___closed__1 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_mkDefViewOfOpaque___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfOpaque___closed__2 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__2_value;
static const lean_string_object l_Lean_Elab_Command_mkDefViewOfOpaque___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfOpaque___closed__3 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__3_value;
static const lean_string_object l_Lean_Elab_Command_mkDefViewOfOpaque___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfOpaque___closed__4 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfOpaque___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instImpl___closed__0_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfOpaque___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfOpaque___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__3_value),LEAN_SCALAR_PTR_LITERAL(128, 225, 226, 49, 186, 161, 212, 105)}};
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfOpaque___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__4_value),LEAN_SCALAR_PTR_LITERAL(245, 187, 99, 45, 217, 244, 244, 120)}};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfOpaque___closed__5 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Command_mkDefViewOfOpaque___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkDefViewOfOpaque___closed__6;
static const lean_string_object l_Lean_Elab_Command_mkDefViewOfOpaque___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfOpaque___closed__7 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__7_value;
static const lean_string_object l_Lean_Elab_Command_mkDefViewOfOpaque___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "defaultOrOfNonempty"};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfOpaque___closed__8 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfOpaque___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instImpl___closed__0_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfOpaque___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfOpaque___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__7_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfOpaque___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__8_value),LEAN_SCALAR_PTR_LITERAL(76, 19, 142, 204, 140, 85, 7, 204)}};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfOpaque___closed__9 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__9_value;
static const lean_string_object l_Lean_Elab_Command_mkDefViewOfOpaque___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "default_or_ofNonempty%"};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfOpaque___closed__10 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__10_value;
static const lean_string_object l_Lean_Elab_Command_mkDefViewOfOpaque___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "unsafe"};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfOpaque___closed__11 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkDefViewOfOpaque(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkDefViewOfOpaque___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfExample___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__7_value),((lean_object*)&l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__0_value)}};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfExample___closed__0 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfExample___closed__0_value;
static const lean_string_object l_Lean_Elab_Command_mkDefViewOfExample___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_example"};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfExample___closed__1 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfExample___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfExample___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfExample___closed__1_value),LEAN_SCALAR_PTR_LITERAL(243, 8, 51, 7, 112, 171, 239, 122)}};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfExample___closed__2 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfExample___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfExample___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instImpl___closed__0_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfExample___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkDefViewOfExample___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfExample___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkDefViewOfExample___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_mkDefViewOfExample___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkDefViewOfExample___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(243, 92, 136, 33, 216, 98, 92, 25)}};
static const lean_object* l_Lean_Elab_Command_mkDefViewOfExample___closed__3 = (const lean_object*)&l_Lean_Elab_Command_mkDefViewOfExample___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkDefViewOfExample(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_isDefLike___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "abbrev"};
static const lean_object* l_Lean_Elab_Command_isDefLike___closed__0 = (const lean_object*)&l_Lean_Elab_Command_isDefLike___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Command_isDefLike___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instImpl___closed__0_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_isDefLike___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_isDefLike___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_isDefLike___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_isDefLike___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_isDefLike___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_isDefLike___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Command_isDefLike___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 181, 25, 109, 89, 238, 86, 99)}};
static const lean_object* l_Lean_Elab_Command_isDefLike___closed__1 = (const lean_object*)&l_Lean_Elab_Command_isDefLike___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_isDefLike___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Elab_Command_isDefLike___closed__2 = (const lean_object*)&l_Lean_Elab_Command_isDefLike___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Command_isDefLike___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instImpl___closed__0_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_isDefLike___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_isDefLike___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_isDefLike___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_isDefLike___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_isDefLike___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_isDefLike___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Command_isDefLike___closed__2_value),LEAN_SCALAR_PTR_LITERAL(248, 187, 217, 228, 39, 184, 218, 135)}};
static const lean_object* l_Lean_Elab_Command_isDefLike___closed__3 = (const lean_object*)&l_Lean_Elab_Command_isDefLike___closed__3_value;
static const lean_string_object l_Lean_Elab_Command_isDefLike___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "theorem"};
static const lean_object* l_Lean_Elab_Command_isDefLike___closed__4 = (const lean_object*)&l_Lean_Elab_Command_isDefLike___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Command_isDefLike___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instImpl___closed__0_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_isDefLike___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_isDefLike___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_isDefLike___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_isDefLike___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_isDefLike___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_isDefLike___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Command_isDefLike___closed__4_value),LEAN_SCALAR_PTR_LITERAL(238, 116, 137, 74, 194, 103, 58, 54)}};
static const lean_object* l_Lean_Elab_Command_isDefLike___closed__5 = (const lean_object*)&l_Lean_Elab_Command_isDefLike___closed__5_value;
static const lean_string_object l_Lean_Elab_Command_isDefLike___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "opaque"};
static const lean_object* l_Lean_Elab_Command_isDefLike___closed__6 = (const lean_object*)&l_Lean_Elab_Command_isDefLike___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Command_isDefLike___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instImpl___closed__0_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_isDefLike___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_isDefLike___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_isDefLike___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_isDefLike___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_isDefLike___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_isDefLike___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Command_isDefLike___closed__6_value),LEAN_SCALAR_PTR_LITERAL(111, 217, 152, 21, 13, 97, 204, 102)}};
static const lean_object* l_Lean_Elab_Command_isDefLike___closed__7 = (const lean_object*)&l_Lean_Elab_Command_isDefLike___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Command_isDefLike___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instImpl___closed__0_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_isDefLike___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_isDefLike___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_isDefLike___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_isDefLike___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_isDefLike___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_isDefLike___closed__8_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_DefView_isInstance_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 156, 84, 218, 244, 57, 142, 153)}};
static const lean_object* l_Lean_Elab_Command_isDefLike___closed__8 = (const lean_object*)&l_Lean_Elab_Command_isDefLike___closed__8_value;
static const lean_string_object l_Lean_Elab_Command_isDefLike___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "example"};
static const lean_object* l_Lean_Elab_Command_isDefLike___closed__9 = (const lean_object*)&l_Lean_Elab_Command_isDefLike___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Command_isDefLike___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instImpl___closed__0_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_isDefLike___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_isDefLike___closed__10_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_isDefLike___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_isDefLike___closed__10_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_isDefLike___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_isDefLike___closed__10_value_aux_2),((lean_object*)&l_Lean_Elab_Command_isDefLike___closed__9_value),LEAN_SCALAR_PTR_LITERAL(108, 28, 224, 32, 144, 38, 51, 230)}};
static const lean_object* l_Lean_Elab_Command_isDefLike___closed__10 = (const lean_object*)&l_Lean_Elab_Command_isDefLike___closed__10_value;
LEAN_EXPORT uint8_t l_Lean_Elab_Command_isDefLike(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_isDefLike___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Command_mkDefView___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "unexpected kind of definition"};
static const lean_object* l_Lean_Elab_Command_mkDefView___closed__0 = (const lean_object*)&l_Lean_Elab_Command_mkDefView___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Command_mkDefView___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkDefView___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkDefView(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkDefView___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instImpl___closed__1_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Elab_Command_isDefLike___closed__2_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__1_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__1_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__1_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__1_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_instImpl___closed__0_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__4_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_instImpl___closed__1_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__4_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__4_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "DefView"};
static const lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__6_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__4_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(143, 122, 8, 89, 37, 107, 94, 7)}};
static const lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__6_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__6_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__7_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__6_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(34, 72, 191, 5, 97, 231, 115, 233)}};
static const lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__7_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__7_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__8_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__7_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_instImpl___closed__0_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value),LEAN_SCALAR_PTR_LITERAL(3, 151, 93, 82, 32, 95, 13, 197)}};
static const lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__8_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__8_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__9_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__8_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_instImpl___closed__1_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value),LEAN_SCALAR_PTR_LITERAL(53, 155, 219, 87, 227, 165, 44, 167)}};
static const lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__9_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__9_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__10_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__9_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_Command_mkDefViewOfInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 240, 120, 150, 30, 251, 20, 103)}};
static const lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__10_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__10_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__11_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__11_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__11_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__12_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__10_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__11_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(41, 175, 96, 159, 50, 57, 89, 46)}};
static const lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__12_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__12_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__13_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__13_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__13_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__14_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__12_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__13_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(68, 80, 179, 32, 181, 32, 199, 108)}};
static const lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__14_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__14_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__15_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__14_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_instImpl___closed__0_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value),LEAN_SCALAR_PTR_LITERAL(37, 248, 167, 23, 141, 24, 1, 218)}};
static const lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__15_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__15_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__16_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__15_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_instImpl___closed__1_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21__value),LEAN_SCALAR_PTR_LITERAL(19, 127, 79, 19, 22, 129, 157, 125)}};
static const lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__16_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__16_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__17_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__16_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__5_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(56, 185, 236, 5, 38, 83, 111, 247)}};
static const lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__17_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__17_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__18_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__17_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1745620379) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(125, 189, 229, 213, 170, 230, 54, 74)}};
static const lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__18_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__18_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__19_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__19_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__19_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__20_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__18_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__19_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(62, 120, 29, 149, 121, 223, 11, 7)}};
static const lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__20_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__20_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__21_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__21_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__21_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__22_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__20_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__21_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(178, 164, 136, 80, 54, 134, 37, 108)}};
static const lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__22_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__22_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__23_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__22_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(139, 231, 231, 180, 118, 203, 197, 41)}};
static const lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__23_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__23_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__1_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__1_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_ctorIdx___impl(uint8_t v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_box(v_x_1_);
v___x_3_ = lean_obj_tag_nat(v___x_2_);
lean_dec(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_ctorIdx___impl___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_4__boxed_5_; lean_object* v_res_6_; 
v_x_4__boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = l_Lean_Elab_DefKind_ctorIdx___impl(v_x_4__boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lean_Elab_DefKind_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = l_Lean_Elab_DefKind_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_def_elim___redArg(lean_object* v_def_22_){
_start:
{
lean_inc(v_def_22_);
return v_def_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_def_elim___redArg___boxed(lean_object* v_def_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_Elab_DefKind_def_elim___redArg(v_def_23_);
lean_dec(v_def_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_def_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_def_28_){
_start:
{
lean_inc(v_def_28_);
return v_def_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_def_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_def_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = l_Lean_Elab_DefKind_def_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_def_32_);
lean_dec(v_def_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_instance_elim___redArg(lean_object* v_instance_35_){
_start:
{
lean_inc(v_instance_35_);
return v_instance_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_instance_elim___redArg___boxed(lean_object* v_instance_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lean_Elab_DefKind_instance_elim___redArg(v_instance_36_);
lean_dec(v_instance_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_instance_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_instance_41_){
_start:
{
lean_inc(v_instance_41_);
return v_instance_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_instance_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_instance_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = l_Lean_Elab_DefKind_instance_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_instance_45_);
lean_dec(v_instance_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_theorem_elim___redArg(lean_object* v_theorem_48_){
_start:
{
lean_inc(v_theorem_48_);
return v_theorem_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_theorem_elim___redArg___boxed(lean_object* v_theorem_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lean_Elab_DefKind_theorem_elim___redArg(v_theorem_49_);
lean_dec(v_theorem_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_theorem_elim(lean_object* v_motive_51_, uint8_t v_t_52_, lean_object* v_h_53_, lean_object* v_theorem_54_){
_start:
{
lean_inc(v_theorem_54_);
return v_theorem_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_theorem_elim___boxed(lean_object* v_motive_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_theorem_58_){
_start:
{
uint8_t v_t_boxed_59_; lean_object* v_res_60_; 
v_t_boxed_59_ = lean_unbox(v_t_56_);
v_res_60_ = l_Lean_Elab_DefKind_theorem_elim(v_motive_55_, v_t_boxed_59_, v_h_57_, v_theorem_58_);
lean_dec(v_theorem_58_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_example_elim___redArg(lean_object* v_example_61_){
_start:
{
lean_inc(v_example_61_);
return v_example_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_example_elim___redArg___boxed(lean_object* v_example_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l_Lean_Elab_DefKind_example_elim___redArg(v_example_62_);
lean_dec(v_example_62_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_example_elim(lean_object* v_motive_64_, uint8_t v_t_65_, lean_object* v_h_66_, lean_object* v_example_67_){
_start:
{
lean_inc(v_example_67_);
return v_example_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_example_elim___boxed(lean_object* v_motive_68_, lean_object* v_t_69_, lean_object* v_h_70_, lean_object* v_example_71_){
_start:
{
uint8_t v_t_boxed_72_; lean_object* v_res_73_; 
v_t_boxed_72_ = lean_unbox(v_t_69_);
v_res_73_ = l_Lean_Elab_DefKind_example_elim(v_motive_68_, v_t_boxed_72_, v_h_70_, v_example_71_);
lean_dec(v_example_71_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_opaque_elim___redArg(lean_object* v_opaque_74_){
_start:
{
lean_inc(v_opaque_74_);
return v_opaque_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_opaque_elim___redArg___boxed(lean_object* v_opaque_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l_Lean_Elab_DefKind_opaque_elim___redArg(v_opaque_75_);
lean_dec(v_opaque_75_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_opaque_elim(lean_object* v_motive_77_, uint8_t v_t_78_, lean_object* v_h_79_, lean_object* v_opaque_80_){
_start:
{
lean_inc(v_opaque_80_);
return v_opaque_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_opaque_elim___boxed(lean_object* v_motive_81_, lean_object* v_t_82_, lean_object* v_h_83_, lean_object* v_opaque_84_){
_start:
{
uint8_t v_t_boxed_85_; lean_object* v_res_86_; 
v_t_boxed_85_ = lean_unbox(v_t_82_);
v_res_86_ = l_Lean_Elab_DefKind_opaque_elim(v_motive_81_, v_t_boxed_85_, v_h_83_, v_opaque_84_);
lean_dec(v_opaque_84_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_abbrev_elim___redArg(lean_object* v_abbrev_87_){
_start:
{
lean_inc(v_abbrev_87_);
return v_abbrev_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_abbrev_elim___redArg___boxed(lean_object* v_abbrev_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l_Lean_Elab_DefKind_abbrev_elim___redArg(v_abbrev_88_);
lean_dec(v_abbrev_88_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_abbrev_elim(lean_object* v_motive_90_, uint8_t v_t_91_, lean_object* v_h_92_, lean_object* v_abbrev_93_){
_start:
{
lean_inc(v_abbrev_93_);
return v_abbrev_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_abbrev_elim___boxed(lean_object* v_motive_94_, lean_object* v_t_95_, lean_object* v_h_96_, lean_object* v_abbrev_97_){
_start:
{
uint8_t v_t_boxed_98_; lean_object* v_res_99_; 
v_t_boxed_98_ = lean_unbox(v_t_95_);
v_res_99_ = l_Lean_Elab_DefKind_abbrev_elim(v_motive_94_, v_t_boxed_98_, v_h_96_, v_abbrev_97_);
lean_dec(v_abbrev_97_);
return v_res_99_;
}
}
static uint8_t _init_l_Lean_Elab_instInhabitedDefKind_default(void){
_start:
{
uint8_t v___x_100_; 
v___x_100_ = 0;
return v___x_100_;
}
}
static uint8_t _init_l_Lean_Elab_instInhabitedDefKind(void){
_start:
{
uint8_t v___x_101_; 
v___x_101_ = 0;
return v___x_101_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_instBEqDefKind_beq(uint8_t v_x_102_, uint8_t v_y_103_){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; uint8_t v___x_108_; 
v___x_104_ = lean_box(v_x_102_);
v___x_105_ = lean_obj_tag_nat(v___x_104_);
lean_dec(v___x_104_);
v___x_106_ = lean_box(v_y_103_);
v___x_107_ = lean_obj_tag_nat(v___x_106_);
lean_dec(v___x_106_);
v___x_108_ = lean_nat_dec_eq(v___x_105_, v___x_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instBEqDefKind_beq___boxed(lean_object* v_x_109_, lean_object* v_y_110_){
_start:
{
uint8_t v_x_24__boxed_111_; uint8_t v_y_25__boxed_112_; uint8_t v_res_113_; lean_object* v_r_114_; 
v_x_24__boxed_111_ = lean_unbox(v_x_109_);
v_y_25__boxed_112_ = lean_unbox(v_y_110_);
v_res_113_ = l_Lean_Elab_instBEqDefKind_beq(v_x_24__boxed_111_, v_y_25__boxed_112_);
v_r_114_ = lean_box(v_res_113_);
return v_r_114_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_DefKind_isTheorem(uint8_t v_x_117_){
_start:
{
if (v_x_117_ == 2)
{
uint8_t v___x_118_; 
v___x_118_ = 1;
return v___x_118_;
}
else
{
uint8_t v___x_119_; 
v___x_119_ = 0;
return v___x_119_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_isTheorem___boxed(lean_object* v_x_120_){
_start:
{
uint8_t v_x_17__boxed_121_; uint8_t v_res_122_; lean_object* v_r_123_; 
v_x_17__boxed_121_ = lean_unbox(v_x_120_);
v_res_122_ = l_Lean_Elab_DefKind_isTheorem(v_x_17__boxed_121_);
v_r_123_ = lean_box(v_res_122_);
return v_r_123_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_DefKind_isExample(uint8_t v_x_124_){
_start:
{
if (v_x_124_ == 3)
{
uint8_t v___x_125_; 
v___x_125_ = 1;
return v___x_125_;
}
else
{
uint8_t v___x_126_; 
v___x_126_ = 0;
return v___x_126_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefKind_isExample___boxed(lean_object* v_x_127_){
_start:
{
uint8_t v_x_17__boxed_128_; uint8_t v_res_129_; lean_object* v_r_130_; 
v_x_17__boxed_128_ = lean_unbox(v_x_127_);
v_res_129_ = l_Lean_Elab_DefKind_isExample(v_x_17__boxed_128_);
v_r_130_ = lean_box(v_res_129_);
return v_r_130_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__3(void){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_136_ = lean_box(0);
v___x_137_ = ((lean_object*)(l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__2));
v___x_138_ = l_Lean_Expr_const___override(v___x_137_, v___x_136_);
return v___x_138_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__4(void){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_139_ = lean_obj_once(&l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__3, &l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__3_once, _init_l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__3);
v___x_140_ = lean_unsigned_to_nat(0u);
v___x_141_ = ((lean_object*)(l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__0));
v___x_142_ = lean_box(0);
v___x_143_ = lean_box(0);
v___x_144_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
lean_ctor_set(v___x_144_, 1, v___x_143_);
lean_ctor_set(v___x_144_, 2, v___x_142_);
lean_ctor_set(v___x_144_, 3, v___x_141_);
lean_ctor_set(v___x_144_, 4, v___x_140_);
lean_ctor_set(v___x_144_, 5, v___x_139_);
return v___x_144_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedDefViewElabHeaderData_default(void){
_start:
{
lean_object* v___x_145_; 
v___x_145_ = lean_obj_once(&l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__4, &l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__4_once, _init_l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__4);
return v___x_145_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedDefViewElabHeaderData(void){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = l_Lean_Elab_instInhabitedDefViewElabHeaderData_default;
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___lam__0(lean_object* v___f_147_, lean_object* v_x_148_, lean_object* v___y_149_){
_start:
{
lean_object* v___x_150_; 
v___x_150_ = l_Lean_Language_SnapshotTask_transformWith___redArg(v_x_148_, v___f_147_, v___y_149_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___lam__0___boxed(lean_object* v___f_151_, lean_object* v_x_152_, lean_object* v___y_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___lam__0(v___f_151_, v_x_152_, v___y_153_);
lean_dec_ref(v___y_153_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___lam__1(lean_object* v___x_155_, lean_object* v___f_156_, lean_object* v_s_157_, lean_object* v___y_158_){
_start:
{
lean_object* v_toSnapshot_159_; lean_object* v_moreSnaps_160_; lean_object* v___x_161_; size_t v_sz_162_; size_t v___x_163_; lean_object* v___x_249__overap_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v_toSnapshot_159_ = lean_ctor_get(v_s_157_, 0);
lean_inc_ref(v_toSnapshot_159_);
v_moreSnaps_160_ = lean_ctor_get(v_s_157_, 3);
lean_inc_ref(v_moreSnaps_160_);
lean_dec_ref(v_s_157_);
v___x_161_ = l_Lean_Language_Snapshot_transform(v_toSnapshot_159_, v___y_158_);
v_sz_162_ = lean_array_size(v_moreSnaps_160_);
v___x_163_ = ((size_t)0ULL);
v___x_249__overap_164_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_155_, v___f_156_, v_sz_162_, v___x_163_, v_moreSnaps_160_);
lean_inc_ref(v___y_158_);
v___x_165_ = lean_apply_1(v___x_249__overap_164_, v___y_158_);
v___x_166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_166_, 0, v___x_161_);
lean_ctor_set(v___x_166_, 1, v___x_165_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___lam__1___boxed(lean_object* v___x_167_, lean_object* v___f_168_, lean_object* v_s_169_, lean_object* v___y_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___lam__1(v___x_167_, v___f_168_, v_s_169_, v___y_170_);
lean_dec_ref(v___y_170_);
return v_res_171_;
}
}
static lean_object* _init_l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__10(void){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_191_ = ((lean_object*)(l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__9));
v___x_192_ = l_ReaderT_instMonad___redArg(v___x_191_);
return v___x_192_;
}
}
static lean_object* _init_l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__13(void){
_start:
{
lean_object* v___f_196_; lean_object* v___x_197_; lean_object* v___f_198_; 
v___f_196_ = ((lean_object*)(l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__12));
v___x_197_ = lean_obj_once(&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__10, &l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__10_once, _init_l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__10);
v___f_198_ = lean_alloc_closure((void*)(l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___lam__1___boxed), 4, 2);
lean_closure_set(v___f_198_, 0, v___x_197_);
lean_closure_set(v___f_198_, 1, v___f_196_);
return v___f_198_;
}
}
static lean_object* _init_l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot(void){
_start:
{
lean_object* v___f_199_; 
v___f_199_ = lean_obj_once(&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__13, &l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__13_once, _init_l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__13);
return v___f_199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___lam__0(lean_object* v___x_200_, lean_object* v_x_201_, lean_object* v___y_202_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = l_Lean_Language_SnapshotTask_transformWith___redArg(v_x_201_, v___x_200_, v___y_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___lam__0___boxed(lean_object* v___x_204_, lean_object* v_x_205_, lean_object* v___y_206_){
_start:
{
lean_object* v_res_207_; 
v_res_207_ = l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___lam__0(v___x_204_, v_x_205_, v___y_206_);
lean_dec_ref(v___y_206_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___lam__2(lean_object* v___x_210_, lean_object* v___f_211_, lean_object* v___f_212_, lean_object* v___f_213_, lean_object* v_s_214_, lean_object* v___y_215_){
_start:
{
lean_object* v_toSnapshot_216_; lean_object* v_tacSnap_x3f_217_; lean_object* v_bodySnap_218_; lean_object* v_moreSnaps_219_; lean_object* v___x_220_; lean_object* v___y_222_; 
v_toSnapshot_216_ = lean_ctor_get(v_s_214_, 0);
lean_inc_ref(v_toSnapshot_216_);
v_tacSnap_x3f_217_ = lean_ctor_get(v_s_214_, 4);
lean_inc(v_tacSnap_x3f_217_);
v_bodySnap_218_ = lean_ctor_get(v_s_214_, 6);
lean_inc_ref(v_bodySnap_218_);
v_moreSnaps_219_ = lean_ctor_get(v_s_214_, 7);
lean_inc_ref(v_moreSnaps_219_);
lean_dec_ref(v_s_214_);
v___x_220_ = l_Lean_Language_Snapshot_transform(v_toSnapshot_216_, v___y_215_);
if (lean_obj_tag(v_tacSnap_x3f_217_) == 0)
{
lean_object* v___x_237_; 
v___x_237_ = ((lean_object*)(l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___lam__2___closed__0));
v___y_222_ = v___x_237_;
goto v___jp_221_;
}
else
{
lean_object* v_val_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v_val_238_ = lean_ctor_get(v_tacSnap_x3f_217_, 0);
lean_inc(v_val_238_);
lean_dec_ref_known(v_tacSnap_x3f_217_, 1);
v___x_239_ = lean_unsigned_to_nat(1u);
v___x_240_ = lean_mk_empty_array_with_capacity(v___x_239_);
v___x_241_ = lean_array_push(v___x_240_, v_val_238_);
v___y_222_ = v___x_241_;
goto v___jp_221_;
}
v___jp_221_:
{
size_t v_sz_223_; size_t v___x_224_; lean_object* v___x_513__overap_225_; lean_object* v___x_226_; lean_object* v___x_227_; size_t v_sz_228_; lean_object* v___x_515__overap_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v_sz_223_ = lean_array_size(v___y_222_);
v___x_224_ = ((size_t)0ULL);
lean_inc_ref(v___x_210_);
v___x_513__overap_225_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_210_, v___f_211_, v_sz_223_, v___x_224_, v___y_222_);
lean_inc_ref_n(v___y_215_, 2);
v___x_226_ = lean_apply_1(v___x_513__overap_225_, v___y_215_);
v___x_227_ = l_Lean_Language_SnapshotTask_transformWith___redArg(v_bodySnap_218_, v___f_212_, v___y_215_);
v_sz_228_ = lean_array_size(v_moreSnaps_219_);
v___x_515__overap_229_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_210_, v___f_213_, v_sz_228_, v___x_224_, v_moreSnaps_219_);
v___x_230_ = lean_apply_1(v___x_515__overap_229_, v___y_215_);
v___x_231_ = lean_unsigned_to_nat(1u);
v___x_232_ = lean_mk_empty_array_with_capacity(v___x_231_);
v___x_233_ = lean_array_push(v___x_232_, v___x_227_);
v___x_234_ = l_Array_append___redArg(v___x_226_, v___x_233_);
lean_dec_ref(v___x_233_);
v___x_235_ = l_Array_append___redArg(v___x_234_, v___x_230_);
lean_dec_ref(v___x_230_);
v___x_236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_236_, 0, v___x_220_);
lean_ctor_set(v___x_236_, 1, v___x_235_);
return v___x_236_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___lam__2___boxed(lean_object* v___x_242_, lean_object* v___f_243_, lean_object* v___f_244_, lean_object* v___f_245_, lean_object* v_s_246_, lean_object* v___y_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___lam__2(v___x_242_, v___f_243_, v___f_244_, v___f_245_, v_s_246_, v___y_247_);
lean_dec_ref(v___y_247_);
return v_res_248_;
}
}
static lean_object* _init_l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___closed__2(void){
_start:
{
lean_object* v___x_252_; lean_object* v___f_253_; 
v___x_252_ = l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot;
v___f_253_ = lean_alloc_closure((void*)(l_Lean_Language_instToSnapshotTreeOption___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_253_, 0, v___x_252_);
return v___f_253_;
}
}
static lean_object* _init_l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___closed__3(void){
_start:
{
lean_object* v___f_254_; lean_object* v___f_255_; lean_object* v___f_256_; lean_object* v___x_257_; lean_object* v___f_258_; 
v___f_254_ = ((lean_object*)(l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__12));
v___f_255_ = lean_obj_once(&l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___closed__2, &l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___closed__2_once, _init_l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___closed__2);
v___f_256_ = ((lean_object*)(l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___closed__1));
v___x_257_ = lean_obj_once(&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__10, &l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__10_once, _init_l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__10);
v___f_258_ = lean_alloc_closure((void*)(l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___lam__2___boxed), 6, 4);
lean_closure_set(v___f_258_, 0, v___x_257_);
lean_closure_set(v___f_258_, 1, v___f_256_);
lean_closure_set(v___f_258_, 2, v___f_255_);
lean_closure_set(v___f_258_, 3, v___f_254_);
return v___f_258_;
}
}
static lean_object* _init_l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot(void){
_start:
{
lean_object* v___f_259_; 
v___f_259_ = lean_obj_once(&l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___closed__3, &l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___closed__3_once, _init_l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot___closed__3);
return v___f_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___lam__0(lean_object* v___f_269_, lean_object* v_x_270_, lean_object* v___y_271_){
_start:
{
lean_object* v_headerProcessedSnap_272_; lean_object* v___x_273_; 
v_headerProcessedSnap_272_ = lean_ctor_get(v_x_270_, 1);
lean_inc_ref(v_headerProcessedSnap_272_);
lean_dec_ref(v_x_270_);
v___x_273_ = l_Lean_Language_SnapshotTask_transformWith___redArg(v_headerProcessedSnap_272_, v___f_269_, v___y_271_);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___lam__0___boxed(lean_object* v___f_274_, lean_object* v_x_275_, lean_object* v___y_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___lam__0(v___f_274_, v_x_275_, v___y_276_);
lean_dec_ref(v___y_276_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___lam__1(lean_object* v___x_278_, lean_object* v___f_279_, lean_object* v_s_280_, lean_object* v___y_281_){
_start:
{
lean_object* v_toSnapshot_282_; lean_object* v_defs_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_295_; 
v_toSnapshot_282_ = lean_ctor_get(v_s_280_, 0);
v_defs_283_ = lean_ctor_get(v_s_280_, 1);
v_isSharedCheck_295_ = !lean_is_exclusive(v_s_280_);
if (v_isSharedCheck_295_ == 0)
{
v___x_285_ = v_s_280_;
v_isShared_286_ = v_isSharedCheck_295_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_defs_283_);
lean_inc(v_toSnapshot_282_);
lean_dec(v_s_280_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_295_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v___x_287_; size_t v_sz_288_; size_t v___x_289_; lean_object* v___x_253__overap_290_; lean_object* v___x_291_; lean_object* v___x_293_; 
v___x_287_ = l_Lean_Language_Snapshot_transform(v_toSnapshot_282_, v___y_281_);
v_sz_288_ = lean_array_size(v_defs_283_);
v___x_289_ = ((size_t)0ULL);
v___x_253__overap_290_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_278_, v___f_279_, v_sz_288_, v___x_289_, v_defs_283_);
lean_inc_ref(v___y_281_);
v___x_291_ = lean_apply_1(v___x_253__overap_290_, v___y_281_);
if (v_isShared_286_ == 0)
{
lean_ctor_set(v___x_285_, 1, v___x_291_);
lean_ctor_set(v___x_285_, 0, v___x_287_);
v___x_293_ = v___x_285_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v___x_287_);
lean_ctor_set(v_reuseFailAlloc_294_, 1, v___x_291_);
v___x_293_ = v_reuseFailAlloc_294_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
return v___x_293_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___lam__1___boxed(lean_object* v___x_296_, lean_object* v___f_297_, lean_object* v_s_298_, lean_object* v___y_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___lam__1(v___x_296_, v___f_297_, v_s_298_, v___y_299_);
lean_dec_ref(v___y_299_);
return v_res_300_;
}
}
static lean_object* _init_l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___closed__0(void){
_start:
{
lean_object* v___x_301_; lean_object* v___f_302_; 
v___x_301_ = l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot;
v___f_302_ = lean_alloc_closure((void*)(l_Lean_Language_instToSnapshotTreeOption___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_302_, 0, v___x_301_);
return v___f_302_;
}
}
static lean_object* _init_l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___closed__1(void){
_start:
{
lean_object* v___f_303_; lean_object* v___f_304_; 
v___f_303_ = lean_obj_once(&l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___closed__0, &l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___closed__0_once, _init_l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___closed__0);
v___f_304_ = lean_alloc_closure((void*)(l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___lam__0___boxed), 3, 1);
lean_closure_set(v___f_304_, 0, v___f_303_);
return v___f_304_;
}
}
static lean_object* _init_l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___closed__2(void){
_start:
{
lean_object* v___f_305_; lean_object* v___x_306_; lean_object* v___f_307_; 
v___f_305_ = lean_obj_once(&l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___closed__1, &l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___closed__1_once, _init_l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___closed__1);
v___x_306_ = lean_obj_once(&l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__10, &l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__10_once, _init_l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot___closed__10);
v___f_307_ = lean_alloc_closure((void*)(l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___lam__1___boxed), 4, 2);
lean_closure_set(v___f_307_, 0, v___x_306_);
lean_closure_set(v___f_307_, 1, v___f_305_);
return v___f_307_;
}
}
static lean_object* _init_l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot(void){
_start:
{
lean_object* v___f_308_; 
v___f_308_ = lean_obj_once(&l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___closed__2, &l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___closed__2_once, _init_l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot___closed__2);
return v___f_308_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedDefView_default___closed__0(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; uint8_t v___x_312_; lean_object* v___x_313_; 
v___x_309_ = lean_box(0);
v___x_310_ = l_Lean_Elab_instInhabitedModifiers_default;
v___x_311_ = lean_box(0);
v___x_312_ = 0;
v___x_313_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_313_, 0, v___x_311_);
lean_ctor_set(v___x_313_, 1, v___x_311_);
lean_ctor_set(v___x_313_, 2, v___x_310_);
lean_ctor_set(v___x_313_, 3, v___x_311_);
lean_ctor_set(v___x_313_, 4, v___x_311_);
lean_ctor_set(v___x_313_, 5, v___x_309_);
lean_ctor_set(v___x_313_, 6, v___x_311_);
lean_ctor_set(v___x_313_, 7, v___x_309_);
lean_ctor_set(v___x_313_, 8, v___x_309_);
lean_ctor_set(v___x_313_, 9, v___x_309_);
lean_ctor_set_uint8(v___x_313_, sizeof(void*)*10, v___x_312_);
return v___x_313_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedDefView_default(void){
_start:
{
lean_object* v___x_314_; 
v___x_314_ = lean_obj_once(&l_Lean_Elab_instInhabitedDefView_default___closed__0, &l_Lean_Elab_instInhabitedDefView_default___closed__0_once, _init_l_Lean_Elab_instInhabitedDefView_default___closed__0);
return v___x_314_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedDefView(void){
_start:
{
lean_object* v___x_315_; 
v___x_315_ = l_Lean_Elab_instInhabitedDefView_default;
return v___x_315_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_DefView_isInstance_spec__0(lean_object* v_as_319_, size_t v_i_320_, size_t v_stop_321_){
_start:
{
uint8_t v___x_322_; 
v___x_322_ = lean_usize_dec_eq(v_i_320_, v_stop_321_);
if (v___x_322_ == 0)
{
lean_object* v___x_323_; lean_object* v_name_324_; lean_object* v___x_325_; uint8_t v___x_326_; 
v___x_323_ = lean_array_uget_borrowed(v_as_319_, v_i_320_);
v_name_324_ = lean_ctor_get(v___x_323_, 0);
v___x_325_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_DefView_isInstance_spec__0___closed__1));
v___x_326_ = lean_name_eq(v_name_324_, v___x_325_);
if (v___x_326_ == 0)
{
size_t v___x_327_; size_t v___x_328_; 
v___x_327_ = ((size_t)1ULL);
v___x_328_ = lean_usize_add(v_i_320_, v___x_327_);
v_i_320_ = v___x_328_;
goto _start;
}
else
{
return v___x_326_;
}
}
else
{
uint8_t v___x_330_; 
v___x_330_ = 0;
return v___x_330_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_DefView_isInstance_spec__0___boxed(lean_object* v_as_331_, lean_object* v_i_332_, lean_object* v_stop_333_){
_start:
{
size_t v_i_boxed_334_; size_t v_stop_boxed_335_; uint8_t v_res_336_; lean_object* v_r_337_; 
v_i_boxed_334_ = lean_unbox_usize(v_i_332_);
lean_dec(v_i_332_);
v_stop_boxed_335_ = lean_unbox_usize(v_stop_333_);
lean_dec(v_stop_333_);
v_res_336_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_DefView_isInstance_spec__0(v_as_331_, v_i_boxed_334_, v_stop_boxed_335_);
lean_dec_ref(v_as_331_);
v_r_337_ = lean_box(v_res_336_);
return v_r_337_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_DefView_isInstance(lean_object* v_view_338_){
_start:
{
lean_object* v_modifiers_339_; lean_object* v_attrs_340_; lean_object* v___x_341_; lean_object* v___x_342_; uint8_t v___x_343_; 
v_modifiers_339_ = lean_ctor_get(v_view_338_, 2);
v_attrs_340_ = lean_ctor_get(v_modifiers_339_, 2);
v___x_341_ = lean_unsigned_to_nat(0u);
v___x_342_ = lean_array_get_size(v_attrs_340_);
v___x_343_ = lean_nat_dec_lt(v___x_341_, v___x_342_);
if (v___x_343_ == 0)
{
return v___x_343_;
}
else
{
if (v___x_343_ == 0)
{
return v___x_343_;
}
else
{
size_t v___x_344_; size_t v___x_345_; uint8_t v___x_346_; 
v___x_344_ = ((size_t)0ULL);
v___x_345_ = lean_usize_of_nat(v___x_342_);
v___x_346_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_DefView_isInstance_spec__0(v_attrs_340_, v___x_344_, v___x_345_);
return v___x_346_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefView_isInstance___boxed(lean_object* v_view_347_){
_start:
{
uint8_t v_res_348_; lean_object* v_r_349_; 
v_res_348_ = l_Lean_Elab_DefView_isInstance(v_view_347_);
lean_dec_ref(v_view_347_);
v_r_349_ = lean_box(v_res_348_);
return v_r_349_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_DefView_markDefEq___lam__0(lean_object* v_x_353_){
_start:
{
lean_object* v_name_354_; lean_object* v___x_355_; uint8_t v___x_356_; 
v_name_354_ = lean_ctor_get(v_x_353_, 0);
v___x_355_ = ((lean_object*)(l_Lean_Elab_DefView_markDefEq___lam__0___closed__1));
v___x_356_ = lean_name_eq(v_name_354_, v___x_355_);
if (v___x_356_ == 0)
{
uint8_t v___x_357_; 
v___x_357_ = 1;
return v___x_357_;
}
else
{
uint8_t v___x_358_; 
v___x_358_ = 0;
return v___x_358_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefView_markDefEq___lam__0___boxed(lean_object* v_x_359_){
_start:
{
uint8_t v_res_360_; lean_object* v_r_361_; 
v_res_360_ = l_Lean_Elab_DefView_markDefEq___lam__0(v_x_359_);
lean_dec_ref(v_x_359_);
v_r_361_ = lean_box(v_res_360_);
return v_r_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_DefView_markDefEq(lean_object* v_view_367_){
_start:
{
uint8_t v_kind_368_; lean_object* v_ref_369_; lean_object* v_headerRef_370_; lean_object* v_modifiers_371_; lean_object* v_declId_372_; lean_object* v_binders_373_; lean_object* v_type_x3f_374_; lean_object* v_value_375_; lean_object* v_docString_x3f_376_; lean_object* v_headerSnap_x3f_377_; lean_object* v_deriving_x3f_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_389_; 
v_kind_368_ = lean_ctor_get_uint8(v_view_367_, sizeof(void*)*10);
v_ref_369_ = lean_ctor_get(v_view_367_, 0);
v_headerRef_370_ = lean_ctor_get(v_view_367_, 1);
v_modifiers_371_ = lean_ctor_get(v_view_367_, 2);
v_declId_372_ = lean_ctor_get(v_view_367_, 3);
v_binders_373_ = lean_ctor_get(v_view_367_, 4);
v_type_x3f_374_ = lean_ctor_get(v_view_367_, 5);
v_value_375_ = lean_ctor_get(v_view_367_, 6);
v_docString_x3f_376_ = lean_ctor_get(v_view_367_, 7);
v_headerSnap_x3f_377_ = lean_ctor_get(v_view_367_, 8);
v_deriving_x3f_378_ = lean_ctor_get(v_view_367_, 9);
v_isSharedCheck_389_ = !lean_is_exclusive(v_view_367_);
if (v_isSharedCheck_389_ == 0)
{
v___x_380_ = v_view_367_;
v_isShared_381_ = v_isSharedCheck_389_;
goto v_resetjp_379_;
}
else
{
lean_inc(v_deriving_x3f_378_);
lean_inc(v_headerSnap_x3f_377_);
lean_inc(v_docString_x3f_376_);
lean_inc(v_value_375_);
lean_inc(v_type_x3f_374_);
lean_inc(v_binders_373_);
lean_inc(v_declId_372_);
lean_inc(v_modifiers_371_);
lean_inc(v_headerRef_370_);
lean_inc(v_ref_369_);
lean_dec(v_view_367_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_389_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
lean_object* v___f_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_387_; 
v___f_382_ = ((lean_object*)(l_Lean_Elab_DefView_markDefEq___closed__0));
v___x_383_ = l_Lean_Elab_Modifiers_filterAttrs(v_modifiers_371_, v___f_382_);
v___x_384_ = ((lean_object*)(l_Lean_Elab_DefView_markDefEq___closed__1));
v___x_385_ = l_Lean_Elab_Modifiers_addFirstAttr(v___x_383_, v___x_384_);
if (v_isShared_381_ == 0)
{
lean_ctor_set(v___x_380_, 2, v___x_385_);
v___x_387_ = v___x_380_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v_ref_369_);
lean_ctor_set(v_reuseFailAlloc_388_, 1, v_headerRef_370_);
lean_ctor_set(v_reuseFailAlloc_388_, 2, v___x_385_);
lean_ctor_set(v_reuseFailAlloc_388_, 3, v_declId_372_);
lean_ctor_set(v_reuseFailAlloc_388_, 4, v_binders_373_);
lean_ctor_set(v_reuseFailAlloc_388_, 5, v_type_x3f_374_);
lean_ctor_set(v_reuseFailAlloc_388_, 6, v_value_375_);
lean_ctor_set(v_reuseFailAlloc_388_, 7, v_docString_x3f_376_);
lean_ctor_set(v_reuseFailAlloc_388_, 8, v_headerSnap_x3f_377_);
lean_ctor_set(v_reuseFailAlloc_388_, 9, v_deriving_x3f_378_);
lean_ctor_set_uint8(v_reuseFailAlloc_388_, sizeof(void*)*10, v_kind_368_);
v___x_387_ = v_reuseFailAlloc_388_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
return v___x_387_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkDefViewOfAbbrev(lean_object* v_modifiers_407_, lean_object* v_stx_408_){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v_fst_412_; lean_object* v_snd_413_; lean_object* v___x_414_; lean_object* v_modifiers_415_; lean_object* v___x_416_; lean_object* v_modifiers_417_; lean_object* v_docString_x3f_418_; uint8_t v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_409_ = lean_unsigned_to_nat(2u);
v___x_410_ = l_Lean_Syntax_getArg(v_stx_408_, v___x_409_);
v___x_411_ = l_Lean_Elab_expandOptDeclSig(v___x_410_);
lean_dec(v___x_410_);
v_fst_412_ = lean_ctor_get(v___x_411_, 0);
lean_inc(v_fst_412_);
v_snd_413_ = lean_ctor_get(v___x_411_, 1);
lean_inc(v_snd_413_);
lean_dec_ref(v___x_411_);
v___x_414_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__2));
v_modifiers_415_ = l_Lean_Elab_Modifiers_addAttr(v_modifiers_407_, v___x_414_);
v___x_416_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__5));
v_modifiers_417_ = l_Lean_Elab_Modifiers_addAttr(v_modifiers_415_, v___x_416_);
v_docString_x3f_418_ = lean_ctor_get(v_modifiers_417_, 1);
lean_inc(v_docString_x3f_418_);
v___x_419_ = 5;
v___x_420_ = l_Lean_Syntax_getArgs(v_stx_408_);
v___x_421_ = lean_unsigned_to_nat(3u);
v___x_422_ = lean_unsigned_to_nat(0u);
v___x_423_ = l_Array_toSubarray___redArg(v___x_420_, v___x_422_, v___x_421_);
v___x_424_ = l_Subarray_copy___redArg(v___x_423_);
v___x_425_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__7));
v___x_426_ = lean_box(2);
v___x_427_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_427_, 0, v___x_426_);
lean_ctor_set(v___x_427_, 1, v___x_425_);
lean_ctor_set(v___x_427_, 2, v___x_424_);
v___x_428_ = lean_unsigned_to_nat(1u);
v___x_429_ = l_Lean_Syntax_getArg(v_stx_408_, v___x_428_);
v___x_430_ = l_Lean_Syntax_getArg(v_stx_408_, v___x_421_);
v___x_431_ = lean_box(0);
v___x_432_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_432_, 0, v_stx_408_);
lean_ctor_set(v___x_432_, 1, v___x_427_);
lean_ctor_set(v___x_432_, 2, v_modifiers_417_);
lean_ctor_set(v___x_432_, 3, v___x_429_);
lean_ctor_set(v___x_432_, 4, v_fst_412_);
lean_ctor_set(v___x_432_, 5, v_snd_413_);
lean_ctor_set(v___x_432_, 6, v___x_430_);
lean_ctor_set(v___x_432_, 7, v_docString_x3f_418_);
lean_ctor_set(v___x_432_, 8, v___x_431_);
lean_ctor_set(v___x_432_, 9, v___x_431_);
lean_ctor_set_uint8(v___x_432_, sizeof(void*)*10, v___x_419_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkDefViewOfDef(lean_object* v_modifiers_433_, lean_object* v_stx_434_){
_start:
{
lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v_fst_438_; lean_object* v_snd_439_; lean_object* v___y_441_; lean_object* v___x_457_; lean_object* v___x_458_; uint8_t v___x_459_; 
v___x_435_ = lean_unsigned_to_nat(2u);
v___x_436_ = l_Lean_Syntax_getArg(v_stx_434_, v___x_435_);
v___x_437_ = l_Lean_Elab_expandOptDeclSig(v___x_436_);
lean_dec(v___x_436_);
v_fst_438_ = lean_ctor_get(v___x_437_, 0);
lean_inc(v_fst_438_);
v_snd_439_ = lean_ctor_get(v___x_437_, 1);
lean_inc(v_snd_439_);
lean_dec_ref(v___x_437_);
v___x_457_ = lean_unsigned_to_nat(4u);
v___x_458_ = l_Lean_Syntax_getArg(v_stx_434_, v___x_457_);
v___x_459_ = l_Lean_Syntax_isNone(v___x_458_);
if (v___x_459_ == 0)
{
lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_460_ = lean_unsigned_to_nat(1u);
v___x_461_ = l_Lean_Syntax_getArg(v___x_458_, v___x_460_);
lean_dec(v___x_458_);
v___x_462_ = l_Lean_Syntax_getSepArgs(v___x_461_);
lean_dec(v___x_461_);
v___x_463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_463_, 0, v___x_462_);
v___y_441_ = v___x_463_;
goto v___jp_440_;
}
else
{
lean_object* v___x_464_; 
lean_dec(v___x_458_);
v___x_464_ = lean_box(0);
v___y_441_ = v___x_464_;
goto v___jp_440_;
}
v___jp_440_:
{
lean_object* v_docString_x3f_442_; uint8_t v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; 
v_docString_x3f_442_ = lean_ctor_get(v_modifiers_433_, 1);
lean_inc(v_docString_x3f_442_);
v___x_443_ = 0;
v___x_444_ = l_Lean_Syntax_getArgs(v_stx_434_);
v___x_445_ = lean_unsigned_to_nat(3u);
v___x_446_ = lean_unsigned_to_nat(0u);
v___x_447_ = l_Array_toSubarray___redArg(v___x_444_, v___x_446_, v___x_445_);
v___x_448_ = l_Subarray_copy___redArg(v___x_447_);
v___x_449_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__7));
v___x_450_ = lean_box(2);
v___x_451_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
lean_ctor_set(v___x_451_, 1, v___x_449_);
lean_ctor_set(v___x_451_, 2, v___x_448_);
v___x_452_ = lean_unsigned_to_nat(1u);
v___x_453_ = l_Lean_Syntax_getArg(v_stx_434_, v___x_452_);
v___x_454_ = l_Lean_Syntax_getArg(v_stx_434_, v___x_445_);
v___x_455_ = lean_box(0);
v___x_456_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_456_, 0, v_stx_434_);
lean_ctor_set(v___x_456_, 1, v___x_451_);
lean_ctor_set(v___x_456_, 2, v_modifiers_433_);
lean_ctor_set(v___x_456_, 3, v___x_453_);
lean_ctor_set(v___x_456_, 4, v_fst_438_);
lean_ctor_set(v___x_456_, 5, v_snd_439_);
lean_ctor_set(v___x_456_, 6, v___x_454_);
lean_ctor_set(v___x_456_, 7, v_docString_x3f_442_);
lean_ctor_set(v___x_456_, 8, v___x_455_);
lean_ctor_set(v___x_456_, 9, v___y_441_);
lean_ctor_set_uint8(v___x_456_, sizeof(void*)*10, v___x_443_);
return v___x_456_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkDefViewOfTheorem(lean_object* v_modifiers_465_, lean_object* v_stx_466_){
_start:
{
lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v_fst_470_; lean_object* v_snd_471_; lean_object* v_docString_x3f_472_; uint8_t v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_467_ = lean_unsigned_to_nat(2u);
v___x_468_ = l_Lean_Syntax_getArg(v_stx_466_, v___x_467_);
v___x_469_ = l_Lean_Elab_expandDeclSig(v___x_468_);
lean_dec(v___x_468_);
v_fst_470_ = lean_ctor_get(v___x_469_, 0);
lean_inc(v_fst_470_);
v_snd_471_ = lean_ctor_get(v___x_469_, 1);
lean_inc(v_snd_471_);
lean_dec_ref(v___x_469_);
v_docString_x3f_472_ = lean_ctor_get(v_modifiers_465_, 1);
lean_inc(v_docString_x3f_472_);
v___x_473_ = 2;
v___x_474_ = l_Lean_Syntax_getArgs(v_stx_466_);
v___x_475_ = lean_unsigned_to_nat(3u);
v___x_476_ = lean_unsigned_to_nat(0u);
v___x_477_ = l_Array_toSubarray___redArg(v___x_474_, v___x_476_, v___x_475_);
v___x_478_ = l_Subarray_copy___redArg(v___x_477_);
v___x_479_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__7));
v___x_480_ = lean_box(2);
v___x_481_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_481_, 0, v___x_480_);
lean_ctor_set(v___x_481_, 1, v___x_479_);
lean_ctor_set(v___x_481_, 2, v___x_478_);
v___x_482_ = lean_unsigned_to_nat(1u);
v___x_483_ = l_Lean_Syntax_getArg(v_stx_466_, v___x_482_);
v___x_484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_484_, 0, v_snd_471_);
v___x_485_ = l_Lean_Syntax_getArg(v_stx_466_, v___x_475_);
v___x_486_ = lean_box(0);
v___x_487_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_487_, 0, v_stx_466_);
lean_ctor_set(v___x_487_, 1, v___x_481_);
lean_ctor_set(v___x_487_, 2, v_modifiers_465_);
lean_ctor_set(v___x_487_, 3, v___x_483_);
lean_ctor_set(v___x_487_, 4, v_fst_470_);
lean_ctor_set(v___x_487_, 5, v___x_484_);
lean_ctor_set(v___x_487_, 6, v___x_485_);
lean_ctor_set(v___x_487_, 7, v_docString_x3f_472_);
lean_ctor_set(v___x_487_, 8, v___x_486_);
lean_ctor_set(v___x_487_, 9, v___x_486_);
lean_ctor_set_uint8(v___x_487_, sizeof(void*)*10, v___x_473_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__2___redArg(lean_object* v___y_488_){
_start:
{
lean_object* v___x_490_; lean_object* v_env_491_; lean_object* v___x_492_; lean_object* v_mainModule_493_; lean_object* v___x_494_; 
v___x_490_ = lean_st_ref_get(v___y_488_);
v_env_491_ = lean_ctor_get(v___x_490_, 0);
lean_inc_ref(v_env_491_);
lean_dec(v___x_490_);
v___x_492_ = l_Lean_Environment_header(v_env_491_);
lean_dec_ref(v_env_491_);
v_mainModule_493_ = lean_ctor_get(v___x_492_, 0);
lean_inc(v_mainModule_493_);
lean_dec_ref(v___x_492_);
v___x_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_494_, 0, v_mainModule_493_);
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__2___redArg___boxed(lean_object* v___y_495_, lean_object* v___y_496_){
_start:
{
lean_object* v_res_497_; 
v_res_497_ = l_Lean_getMainModule___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__2___redArg(v___y_495_);
lean_dec(v___y_495_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__2(lean_object* v___y_498_, lean_object* v___y_499_){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = l_Lean_getMainModule___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__2___redArg(v___y_499_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__2___boxed(lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Lean_getMainModule___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__2(v___y_502_, v___y_503_);
lean_dec(v___y_503_);
lean_dec_ref(v___y_502_);
return v_res_505_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__3(void){
_start:
{
lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_511_ = l_Lean_maxRecDepthErrorMessage;
v___x_512_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_512_, 0, v___x_511_);
return v___x_512_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__4(void){
_start:
{
lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_513_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__3);
v___x_514_ = l_Lean_MessageData_ofFormat(v___x_513_);
return v___x_514_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__5(void){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_515_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__4);
v___x_516_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__2));
v___x_517_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_517_, 0, v___x_516_);
lean_ctor_set(v___x_517_, 1, v___x_515_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg(lean_object* v_ref_518_){
_start:
{
lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_520_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___closed__5);
v___x_521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_521_, 0, v_ref_518_);
lean_ctor_set(v___x_521_, 1, v___x_520_);
v___x_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_522_, 0, v___x_521_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg___boxed(lean_object* v_ref_523_, lean_object* v___y_524_){
_start:
{
lean_object* v_res_525_; 
v_res_525_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg(v_ref_523_);
return v_res_525_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__0___redArg(lean_object* v_x_526_, lean_object* v___y_527_){
_start:
{
if (lean_obj_tag(v_x_526_) == 0)
{
lean_object* v_a_528_; lean_object* v___x_529_; 
v_a_528_ = lean_ctor_get(v_x_526_, 0);
lean_inc(v_a_528_);
v___x_529_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_529_, 0, v_a_528_);
lean_ctor_set(v___x_529_, 1, v___y_527_);
return v___x_529_;
}
else
{
lean_object* v_a_530_; lean_object* v___x_531_; 
v_a_530_ = lean_ctor_get(v_x_526_, 0);
lean_inc(v_a_530_);
v___x_531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_531_, 0, v_a_530_);
lean_ctor_set(v___x_531_, 1, v___y_527_);
return v___x_531_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__0___redArg___boxed(lean_object* v_x_532_, lean_object* v___y_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__0___redArg(v_x_532_, v___y_533_);
lean_dec_ref(v_x_532_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__1(lean_object* v_env_535_, lean_object* v_stx_536_, lean_object* v___y_537_, lean_object* v___y_538_){
_start:
{
lean_object* v___x_539_; 
v___x_539_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_535_, v_stx_536_, v___y_537_, v___y_538_);
if (lean_obj_tag(v___x_539_) == 0)
{
lean_object* v_a_540_; 
v_a_540_ = lean_ctor_get(v___x_539_, 0);
lean_inc(v_a_540_);
if (lean_obj_tag(v_a_540_) == 0)
{
lean_object* v_a_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_549_; 
v_a_541_ = lean_ctor_get(v___x_539_, 1);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_549_ == 0)
{
lean_object* v_unused_550_; 
v_unused_550_ = lean_ctor_get(v___x_539_, 0);
lean_dec(v_unused_550_);
v___x_543_ = v___x_539_;
v_isShared_544_ = v_isSharedCheck_549_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_a_541_);
lean_dec(v___x_539_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_549_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_545_; lean_object* v___x_547_; 
v___x_545_ = lean_box(0);
if (v_isShared_544_ == 0)
{
lean_ctor_set(v___x_543_, 0, v___x_545_);
v___x_547_ = v___x_543_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v___x_545_);
lean_ctor_set(v_reuseFailAlloc_548_, 1, v_a_541_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
}
else
{
lean_object* v_val_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_579_; 
v_val_551_ = lean_ctor_get(v_a_540_, 0);
v_isSharedCheck_579_ = !lean_is_exclusive(v_a_540_);
if (v_isSharedCheck_579_ == 0)
{
v___x_553_ = v_a_540_;
v_isShared_554_ = v_isSharedCheck_579_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_val_551_);
lean_dec(v_a_540_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_579_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v_snd_555_; 
v_snd_555_ = lean_ctor_get(v_val_551_, 1);
lean_inc(v_snd_555_);
lean_dec(v_val_551_);
if (lean_obj_tag(v_snd_555_) == 0)
{
lean_object* v_a_556_; lean_object* v_a_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_565_; 
lean_del_object(v___x_553_);
v_a_556_ = lean_ctor_get(v___x_539_, 1);
lean_inc(v_a_556_);
lean_dec_ref_known(v___x_539_, 2);
v_a_557_ = lean_ctor_get(v_snd_555_, 0);
v_isSharedCheck_565_ = !lean_is_exclusive(v_snd_555_);
if (v_isSharedCheck_565_ == 0)
{
v___x_559_ = v_snd_555_;
v_isShared_560_ = v_isSharedCheck_565_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_a_557_);
lean_dec(v_snd_555_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_565_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_562_; 
if (v_isShared_560_ == 0)
{
v___x_562_ = v___x_559_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v_a_557_);
v___x_562_ = v_reuseFailAlloc_564_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
lean_object* v___x_563_; 
v___x_563_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__0___redArg(v___x_562_, v_a_556_);
lean_dec_ref(v___x_562_);
return v___x_563_;
}
}
}
else
{
lean_object* v_a_566_; lean_object* v_a_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_578_; 
v_a_566_ = lean_ctor_get(v___x_539_, 1);
lean_inc(v_a_566_);
lean_dec_ref_known(v___x_539_, 2);
v_a_567_ = lean_ctor_get(v_snd_555_, 0);
v_isSharedCheck_578_ = !lean_is_exclusive(v_snd_555_);
if (v_isSharedCheck_578_ == 0)
{
v___x_569_ = v_snd_555_;
v_isShared_570_ = v_isSharedCheck_578_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_a_567_);
lean_dec(v_snd_555_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_578_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v___x_572_; 
if (v_isShared_554_ == 0)
{
lean_ctor_set(v___x_553_, 0, v_a_567_);
v___x_572_ = v___x_553_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_a_567_);
v___x_572_ = v_reuseFailAlloc_577_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
lean_object* v___x_574_; 
if (v_isShared_570_ == 0)
{
lean_ctor_set(v___x_569_, 0, v___x_572_);
v___x_574_ = v___x_569_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v___x_572_);
v___x_574_ = v_reuseFailAlloc_576_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
lean_object* v___x_575_; 
v___x_575_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__0___redArg(v___x_574_, v_a_566_);
lean_dec_ref(v___x_574_);
return v___x_575_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_580_; lean_object* v_a_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_588_; 
v_a_580_ = lean_ctor_get(v___x_539_, 0);
v_a_581_ = lean_ctor_get(v___x_539_, 1);
v_isSharedCheck_588_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_588_ == 0)
{
v___x_583_ = v___x_539_;
v_isShared_584_ = v_isSharedCheck_588_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_a_581_);
lean_inc(v_a_580_);
lean_dec(v___x_539_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_588_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v___x_586_; 
if (v_isShared_584_ == 0)
{
v___x_586_ = v___x_583_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v_a_580_);
lean_ctor_set(v_reuseFailAlloc_587_, 1, v_a_581_);
v___x_586_ = v_reuseFailAlloc_587_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
return v___x_586_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__1___boxed(lean_object* v_env_589_, lean_object* v_stx_590_, lean_object* v___y_591_, lean_object* v___y_592_){
_start:
{
lean_object* v_res_593_; 
v_res_593_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__1(v_env_589_, v_stx_590_, v___y_591_, v___y_592_);
lean_dec_ref(v___y_591_);
return v_res_593_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__3(lean_object* v_env_594_, lean_object* v_currNamespace_595_, lean_object* v_openDecls_596_, lean_object* v_n_597_, lean_object* v___y_598_, lean_object* v___y_599_){
_start:
{
lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_600_ = l_Lean_ResolveName_resolveNamespace(v_env_594_, v_currNamespace_595_, v_openDecls_596_, v_n_597_);
v___x_601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_601_, 0, v___x_600_);
lean_ctor_set(v___x_601_, 1, v___y_599_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__3___boxed(lean_object* v_env_602_, lean_object* v_currNamespace_603_, lean_object* v_openDecls_604_, lean_object* v_n_605_, lean_object* v___y_606_, lean_object* v___y_607_){
_start:
{
lean_object* v_res_608_; 
v_res_608_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__3(v_env_602_, v_currNamespace_603_, v_openDecls_604_, v_n_605_, v___y_606_, v___y_607_);
lean_dec_ref(v___y_606_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__2(lean_object* v_currNamespace_609_, lean_object* v___y_610_, lean_object* v___y_611_){
_start:
{
lean_object* v___x_612_; 
v___x_612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_612_, 0, v_currNamespace_609_);
lean_ctor_set(v___x_612_, 1, v___y_611_);
return v___x_612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__2___boxed(lean_object* v_currNamespace_613_, lean_object* v___y_614_, lean_object* v___y_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__2(v_currNamespace_613_, v___y_614_, v___y_615_);
lean_dec_ref(v___y_614_);
return v_res_616_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
v___x_617_ = lean_box(0);
v___x_618_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_619_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_619_, 0, v___x_618_);
lean_ctor_set(v___x_619_, 1, v___x_617_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__6___redArg(){
_start:
{
lean_object* v___x_621_; lean_object* v___x_622_; 
v___x_621_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__6___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__6___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__6___redArg___closed__0);
v___x_622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_622_, 0, v___x_621_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__6___redArg___boxed(lean_object* v___y_623_){
_start:
{
lean_object* v_res_624_; 
v_res_624_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__6___redArg();
return v_res_624_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_625_; 
v___x_625_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_625_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__1(void){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; 
v___x_626_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__0);
v___x_627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_627_, 0, v___x_626_);
return v___x_627_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__2(void){
_start:
{
lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; 
v___x_628_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_629_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__1);
v___x_630_ = lean_unsigned_to_nat(0u);
v___x_631_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_631_, 0, v___x_630_);
lean_ctor_set(v___x_631_, 1, v___x_630_);
lean_ctor_set(v___x_631_, 2, v___x_630_);
lean_ctor_set(v___x_631_, 3, v___x_630_);
lean_ctor_set(v___x_631_, 4, v___x_629_);
lean_ctor_set(v___x_631_, 5, v___x_629_);
lean_ctor_set(v___x_631_, 6, v___x_629_);
lean_ctor_set(v___x_631_, 7, v___x_629_);
lean_ctor_set(v___x_631_, 8, v___x_629_);
lean_ctor_set(v___x_631_, 9, v___x_629_);
lean_ctor_set(v___x_631_, 10, v___x_629_);
lean_ctor_set(v___x_631_, 11, v___x_628_);
return v___x_631_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__3(void){
_start:
{
lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_632_ = lean_unsigned_to_nat(32u);
v___x_633_ = lean_mk_empty_array_with_capacity(v___x_632_);
v___x_634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_634_, 0, v___x_633_);
return v___x_634_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__4(void){
_start:
{
size_t v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; 
v___x_635_ = ((size_t)5ULL);
v___x_636_ = lean_unsigned_to_nat(0u);
v___x_637_ = lean_unsigned_to_nat(32u);
v___x_638_ = lean_mk_empty_array_with_capacity(v___x_637_);
v___x_639_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__3);
v___x_640_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_640_, 0, v___x_639_);
lean_ctor_set(v___x_640_, 1, v___x_638_);
lean_ctor_set(v___x_640_, 2, v___x_636_);
lean_ctor_set(v___x_640_, 3, v___x_636_);
lean_ctor_set_usize(v___x_640_, 4, v___x_635_);
return v___x_640_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__5(void){
_start:
{
lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_641_ = lean_box(1);
v___x_642_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__4);
v___x_643_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__1);
v___x_644_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_644_, 0, v___x_643_);
lean_ctor_set(v___x_644_, 1, v___x_642_);
lean_ctor_set(v___x_644_, 2, v___x_641_);
return v___x_644_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg(lean_object* v_msgData_645_, lean_object* v___y_646_){
_start:
{
lean_object* v___x_648_; lean_object* v_env_649_; uint8_t v___x_650_; lean_object* v_env_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v_scopes_654_; lean_object* v___x_655_; lean_object* v_opts_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_648_ = lean_st_ref_get(v___y_646_);
v_env_649_ = lean_ctor_get(v___x_648_, 0);
lean_inc_ref(v_env_649_);
lean_dec(v___x_648_);
v___x_650_ = 0;
v_env_651_ = l_Lean_Environment_setRecordingDeps(v_env_649_, v___x_650_);
v___x_652_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_653_ = lean_st_ref_get(v___y_646_);
v_scopes_654_ = lean_ctor_get(v___x_653_, 2);
lean_inc(v_scopes_654_);
lean_dec(v___x_653_);
v___x_655_ = l_List_head_x21___redArg(v___x_652_, v_scopes_654_);
lean_dec(v_scopes_654_);
v_opts_656_ = lean_ctor_get(v___x_655_, 1);
lean_inc_ref(v_opts_656_);
lean_dec(v___x_655_);
v___x_657_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__2);
v___x_658_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___closed__5);
v___x_659_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_659_, 0, v_env_651_);
lean_ctor_set(v___x_659_, 1, v___x_657_);
lean_ctor_set(v___x_659_, 2, v___x_658_);
lean_ctor_set(v___x_659_, 3, v_opts_656_);
v___x_660_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_660_, 0, v___x_659_);
lean_ctor_set(v___x_660_, 1, v_msgData_645_);
v___x_661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_661_, 0, v___x_660_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg___boxed(lean_object* v_msgData_662_, lean_object* v___y_663_, lean_object* v___y_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg(v_msgData_662_, v___y_663_);
lean_dec(v___y_663_);
return v_res_665_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1___closed__0(void){
_start:
{
lean_object* v___x_666_; double v___x_667_; 
v___x_666_ = lean_unsigned_to_nat(0u);
v___x_667_ = lean_float_of_nat(v___x_666_);
return v___x_667_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1(lean_object* v_cls_671_, lean_object* v_msg_672_, lean_object* v___y_673_, lean_object* v___y_674_){
_start:
{
lean_object* v___x_676_; 
v___x_676_ = l_Lean_Elab_Command_getRef___redArg(v___y_673_);
if (lean_obj_tag(v___x_676_) == 0)
{
lean_object* v_a_677_; lean_object* v___x_678_; lean_object* v_a_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_727_; 
v_a_677_ = lean_ctor_get(v___x_676_, 0);
lean_inc(v_a_677_);
lean_dec_ref_known(v___x_676_, 1);
v___x_678_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg(v_msg_672_, v___y_674_);
v_a_679_ = lean_ctor_get(v___x_678_, 0);
v_isSharedCheck_727_ = !lean_is_exclusive(v___x_678_);
if (v_isSharedCheck_727_ == 0)
{
v___x_681_ = v___x_678_;
v_isShared_682_ = v_isSharedCheck_727_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_a_679_);
lean_dec(v___x_678_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_727_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
lean_object* v___x_683_; lean_object* v_traceState_684_; lean_object* v_env_685_; lean_object* v_messages_686_; lean_object* v_scopes_687_; lean_object* v_usedQuotCtxts_688_; lean_object* v_nextMacroScope_689_; lean_object* v_maxRecDepth_690_; lean_object* v_ngen_691_; lean_object* v_auxDeclNGen_692_; lean_object* v_infoState_693_; lean_object* v_snapshotTasks_694_; lean_object* v_prevLinterStates_695_; lean_object* v_codeQualityEntryTasks_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_726_; 
v___x_683_ = lean_st_ref_take(v___y_674_);
v_traceState_684_ = lean_ctor_get(v___x_683_, 9);
v_env_685_ = lean_ctor_get(v___x_683_, 0);
v_messages_686_ = lean_ctor_get(v___x_683_, 1);
v_scopes_687_ = lean_ctor_get(v___x_683_, 2);
v_usedQuotCtxts_688_ = lean_ctor_get(v___x_683_, 3);
v_nextMacroScope_689_ = lean_ctor_get(v___x_683_, 4);
v_maxRecDepth_690_ = lean_ctor_get(v___x_683_, 5);
v_ngen_691_ = lean_ctor_get(v___x_683_, 6);
v_auxDeclNGen_692_ = lean_ctor_get(v___x_683_, 7);
v_infoState_693_ = lean_ctor_get(v___x_683_, 8);
v_snapshotTasks_694_ = lean_ctor_get(v___x_683_, 10);
v_prevLinterStates_695_ = lean_ctor_get(v___x_683_, 11);
v_codeQualityEntryTasks_696_ = lean_ctor_get(v___x_683_, 12);
v_isSharedCheck_726_ = !lean_is_exclusive(v___x_683_);
if (v_isSharedCheck_726_ == 0)
{
v___x_698_ = v___x_683_;
v_isShared_699_ = v_isSharedCheck_726_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_codeQualityEntryTasks_696_);
lean_inc(v_prevLinterStates_695_);
lean_inc(v_snapshotTasks_694_);
lean_inc(v_traceState_684_);
lean_inc(v_infoState_693_);
lean_inc(v_auxDeclNGen_692_);
lean_inc(v_ngen_691_);
lean_inc(v_maxRecDepth_690_);
lean_inc(v_nextMacroScope_689_);
lean_inc(v_usedQuotCtxts_688_);
lean_inc(v_scopes_687_);
lean_inc(v_messages_686_);
lean_inc(v_env_685_);
lean_dec(v___x_683_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_726_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
uint64_t v_tid_700_; lean_object* v_traces_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_725_; 
v_tid_700_ = lean_ctor_get_uint64(v_traceState_684_, sizeof(void*)*1);
v_traces_701_ = lean_ctor_get(v_traceState_684_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v_traceState_684_);
if (v_isSharedCheck_725_ == 0)
{
v___x_703_ = v_traceState_684_;
v_isShared_704_ = v_isSharedCheck_725_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_traces_701_);
lean_dec(v_traceState_684_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_725_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_705_; lean_object* v___x_706_; double v___x_707_; uint8_t v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_716_; 
v___x_705_ = lean_box(0);
v___x_706_ = lean_box(0);
v___x_707_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1___closed__0, &l_Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1___closed__0);
v___x_708_ = 0;
v___x_709_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1___closed__1));
v___x_710_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_710_, 0, v_cls_671_);
lean_ctor_set(v___x_710_, 1, v___x_706_);
lean_ctor_set(v___x_710_, 2, v___x_709_);
lean_ctor_set_float(v___x_710_, sizeof(void*)*3, v___x_707_);
lean_ctor_set_float(v___x_710_, sizeof(void*)*3 + 8, v___x_707_);
lean_ctor_set_uint8(v___x_710_, sizeof(void*)*3 + 16, v___x_708_);
v___x_711_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1___closed__2));
v___x_712_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_712_, 0, v___x_710_);
lean_ctor_set(v___x_712_, 1, v_a_679_);
lean_ctor_set(v___x_712_, 2, v___x_711_);
v___x_713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_713_, 0, v_a_677_);
lean_ctor_set(v___x_713_, 1, v___x_712_);
v___x_714_ = l_Lean_PersistentArray_push___redArg(v_traces_701_, v___x_713_);
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 0, v___x_714_);
v___x_716_ = v___x_703_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v___x_714_);
lean_ctor_set_uint64(v_reuseFailAlloc_724_, sizeof(void*)*1, v_tid_700_);
v___x_716_ = v_reuseFailAlloc_724_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
lean_object* v___x_718_; 
if (v_isShared_699_ == 0)
{
lean_ctor_set(v___x_698_, 9, v___x_716_);
v___x_718_ = v___x_698_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v_env_685_);
lean_ctor_set(v_reuseFailAlloc_723_, 1, v_messages_686_);
lean_ctor_set(v_reuseFailAlloc_723_, 2, v_scopes_687_);
lean_ctor_set(v_reuseFailAlloc_723_, 3, v_usedQuotCtxts_688_);
lean_ctor_set(v_reuseFailAlloc_723_, 4, v_nextMacroScope_689_);
lean_ctor_set(v_reuseFailAlloc_723_, 5, v_maxRecDepth_690_);
lean_ctor_set(v_reuseFailAlloc_723_, 6, v_ngen_691_);
lean_ctor_set(v_reuseFailAlloc_723_, 7, v_auxDeclNGen_692_);
lean_ctor_set(v_reuseFailAlloc_723_, 8, v_infoState_693_);
lean_ctor_set(v_reuseFailAlloc_723_, 9, v___x_716_);
lean_ctor_set(v_reuseFailAlloc_723_, 10, v_snapshotTasks_694_);
lean_ctor_set(v_reuseFailAlloc_723_, 11, v_prevLinterStates_695_);
lean_ctor_set(v_reuseFailAlloc_723_, 12, v_codeQualityEntryTasks_696_);
v___x_718_ = v_reuseFailAlloc_723_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
lean_object* v___x_719_; lean_object* v___x_721_; 
v___x_719_ = lean_st_ref_put(v___y_674_, v___x_718_);
if (v_isShared_682_ == 0)
{
lean_ctor_set(v___x_681_, 0, v___x_705_);
v___x_721_ = v___x_681_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v___x_705_);
v___x_721_ = v_reuseFailAlloc_722_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
return v___x_721_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_735_; 
lean_dec_ref(v_msg_672_);
lean_dec(v_cls_671_);
v_a_728_ = lean_ctor_get(v___x_676_, 0);
v_isSharedCheck_735_ = !lean_is_exclusive(v___x_676_);
if (v_isSharedCheck_735_ == 0)
{
v___x_730_ = v___x_676_;
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_a_728_);
lean_dec(v___x_676_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_733_; 
if (v_isShared_731_ == 0)
{
v___x_733_ = v___x_730_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v_a_728_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
return v___x_733_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1___boxed(lean_object* v_cls_736_, lean_object* v_msg_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_){
_start:
{
lean_object* v_res_741_; 
v_res_741_ = l_Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1(v_cls_736_, v_msg_737_, v___y_738_, v___y_739_);
lean_dec(v___y_739_);
lean_dec_ref(v___y_738_);
return v_res_741_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__15_spec__20_spec__24___redArg(lean_object* v_x_742_, lean_object* v_x_743_){
_start:
{
if (lean_obj_tag(v_x_743_) == 0)
{
return v_x_742_;
}
else
{
lean_object* v_key_744_; lean_object* v_value_745_; lean_object* v_tail_746_; lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_769_; 
v_key_744_ = lean_ctor_get(v_x_743_, 0);
v_value_745_ = lean_ctor_get(v_x_743_, 1);
v_tail_746_ = lean_ctor_get(v_x_743_, 2);
v_isSharedCheck_769_ = !lean_is_exclusive(v_x_743_);
if (v_isSharedCheck_769_ == 0)
{
v___x_748_ = v_x_743_;
v_isShared_749_ = v_isSharedCheck_769_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_tail_746_);
lean_inc(v_value_745_);
lean_inc(v_key_744_);
lean_dec(v_x_743_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_769_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
lean_object* v___x_750_; uint64_t v___x_751_; uint64_t v___x_752_; uint64_t v___x_753_; uint64_t v_fold_754_; uint64_t v___x_755_; uint64_t v___x_756_; uint64_t v___x_757_; size_t v___x_758_; size_t v___x_759_; size_t v___x_760_; size_t v___x_761_; size_t v___x_762_; lean_object* v___x_763_; lean_object* v___x_765_; 
v___x_750_ = lean_array_get_size(v_x_742_);
v___x_751_ = l_Lean_instHashableExtraModUse_hash(v_key_744_);
v___x_752_ = 32ULL;
v___x_753_ = lean_uint64_shift_right(v___x_751_, v___x_752_);
v_fold_754_ = lean_uint64_xor(v___x_751_, v___x_753_);
v___x_755_ = 16ULL;
v___x_756_ = lean_uint64_shift_right(v_fold_754_, v___x_755_);
v___x_757_ = lean_uint64_xor(v_fold_754_, v___x_756_);
v___x_758_ = lean_uint64_to_usize(v___x_757_);
v___x_759_ = lean_usize_of_nat(v___x_750_);
v___x_760_ = ((size_t)1ULL);
v___x_761_ = lean_usize_sub(v___x_759_, v___x_760_);
v___x_762_ = lean_usize_land(v___x_758_, v___x_761_);
v___x_763_ = lean_array_uget_borrowed(v_x_742_, v___x_762_);
lean_inc(v___x_763_);
if (v_isShared_749_ == 0)
{
lean_ctor_set(v___x_748_, 2, v___x_763_);
v___x_765_ = v___x_748_;
goto v_reusejp_764_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v_key_744_);
lean_ctor_set(v_reuseFailAlloc_768_, 1, v_value_745_);
lean_ctor_set(v_reuseFailAlloc_768_, 2, v___x_763_);
v___x_765_ = v_reuseFailAlloc_768_;
goto v_reusejp_764_;
}
v_reusejp_764_:
{
lean_object* v___x_766_; 
v___x_766_ = lean_array_uset(v_x_742_, v___x_762_, v___x_765_);
v_x_742_ = v___x_766_;
v_x_743_ = v_tail_746_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__15_spec__20___redArg(lean_object* v_i_770_, lean_object* v_source_771_, lean_object* v_target_772_){
_start:
{
lean_object* v___x_773_; uint8_t v___x_774_; 
v___x_773_ = lean_array_get_size(v_source_771_);
v___x_774_ = lean_nat_dec_lt(v_i_770_, v___x_773_);
if (v___x_774_ == 0)
{
lean_dec_ref(v_source_771_);
lean_dec(v_i_770_);
return v_target_772_;
}
else
{
lean_object* v_es_775_; lean_object* v___x_776_; lean_object* v_source_777_; lean_object* v_target_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
v_es_775_ = lean_array_fget(v_source_771_, v_i_770_);
v___x_776_ = lean_box(0);
v_source_777_ = lean_array_fset(v_source_771_, v_i_770_, v___x_776_);
v_target_778_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__15_spec__20_spec__24___redArg(v_target_772_, v_es_775_);
v___x_779_ = lean_unsigned_to_nat(1u);
v___x_780_ = lean_nat_add(v_i_770_, v___x_779_);
lean_dec(v_i_770_);
v_i_770_ = v___x_780_;
v_source_771_ = v_source_777_;
v_target_772_ = v_target_778_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__15___redArg(lean_object* v_data_782_){
_start:
{
lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v_nbuckets_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_783_ = lean_array_get_size(v_data_782_);
v___x_784_ = lean_unsigned_to_nat(2u);
v_nbuckets_785_ = lean_nat_mul(v___x_783_, v___x_784_);
v___x_786_ = lean_unsigned_to_nat(0u);
v___x_787_ = lean_box(0);
v___x_788_ = lean_mk_array(v_nbuckets_785_, v___x_787_);
v___x_789_ = lean_array_propagate_mark(v_data_782_, v___x_788_);
v___x_790_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__15_spec__20___redArg(v___x_786_, v_data_782_, v___x_789_);
return v___x_790_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__14___redArg(lean_object* v_a_791_, lean_object* v_x_792_){
_start:
{
if (lean_obj_tag(v_x_792_) == 0)
{
uint8_t v___x_793_; 
v___x_793_ = 0;
return v___x_793_;
}
else
{
lean_object* v_key_794_; lean_object* v_tail_795_; uint8_t v___x_796_; 
v_key_794_ = lean_ctor_get(v_x_792_, 0);
v_tail_795_ = lean_ctor_get(v_x_792_, 2);
v___x_796_ = l_Lean_instBEqExtraModUse_beq(v_key_794_, v_a_791_);
if (v___x_796_ == 0)
{
v_x_792_ = v_tail_795_;
goto _start;
}
else
{
return v___x_796_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__14___redArg___boxed(lean_object* v_a_798_, lean_object* v_x_799_){
_start:
{
uint8_t v_res_800_; lean_object* v_r_801_; 
v_res_800_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__14___redArg(v_a_798_, v_x_799_);
lean_dec(v_x_799_);
lean_dec_ref(v_a_798_);
v_r_801_ = lean_box(v_res_800_);
return v_r_801_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9___redArg(lean_object* v_m_802_, lean_object* v_a_803_, lean_object* v_b_804_){
_start:
{
lean_object* v_size_805_; lean_object* v_buckets_806_; lean_object* v___x_807_; uint64_t v___x_808_; uint64_t v___x_809_; uint64_t v___x_810_; uint64_t v_fold_811_; uint64_t v___x_812_; uint64_t v___x_813_; uint64_t v___x_814_; size_t v___x_815_; size_t v___x_816_; size_t v___x_817_; size_t v___x_818_; size_t v___x_819_; lean_object* v_bkt_820_; uint8_t v___x_821_; 
v_size_805_ = lean_ctor_get(v_m_802_, 0);
v_buckets_806_ = lean_ctor_get(v_m_802_, 1);
v___x_807_ = lean_array_get_size(v_buckets_806_);
v___x_808_ = l_Lean_instHashableExtraModUse_hash(v_a_803_);
v___x_809_ = 32ULL;
v___x_810_ = lean_uint64_shift_right(v___x_808_, v___x_809_);
v_fold_811_ = lean_uint64_xor(v___x_808_, v___x_810_);
v___x_812_ = 16ULL;
v___x_813_ = lean_uint64_shift_right(v_fold_811_, v___x_812_);
v___x_814_ = lean_uint64_xor(v_fold_811_, v___x_813_);
v___x_815_ = lean_uint64_to_usize(v___x_814_);
v___x_816_ = lean_usize_of_nat(v___x_807_);
v___x_817_ = ((size_t)1ULL);
v___x_818_ = lean_usize_sub(v___x_816_, v___x_817_);
v___x_819_ = lean_usize_land(v___x_815_, v___x_818_);
v_bkt_820_ = lean_array_uget_borrowed(v_buckets_806_, v___x_819_);
v___x_821_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__14___redArg(v_a_803_, v_bkt_820_);
if (v___x_821_ == 0)
{
lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_842_; 
lean_inc_ref(v_buckets_806_);
lean_inc(v_size_805_);
v_isSharedCheck_842_ = !lean_is_exclusive(v_m_802_);
if (v_isSharedCheck_842_ == 0)
{
lean_object* v_unused_843_; lean_object* v_unused_844_; 
v_unused_843_ = lean_ctor_get(v_m_802_, 1);
lean_dec(v_unused_843_);
v_unused_844_ = lean_ctor_get(v_m_802_, 0);
lean_dec(v_unused_844_);
v___x_823_ = v_m_802_;
v_isShared_824_ = v_isSharedCheck_842_;
goto v_resetjp_822_;
}
else
{
lean_dec(v_m_802_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_842_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
lean_object* v___x_825_; lean_object* v_size_x27_826_; lean_object* v___x_827_; lean_object* v_buckets_x27_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; uint8_t v___x_834_; 
v___x_825_ = lean_unsigned_to_nat(1u);
v_size_x27_826_ = lean_nat_add(v_size_805_, v___x_825_);
lean_dec(v_size_805_);
lean_inc(v_bkt_820_);
v___x_827_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_827_, 0, v_a_803_);
lean_ctor_set(v___x_827_, 1, v_b_804_);
lean_ctor_set(v___x_827_, 2, v_bkt_820_);
v_buckets_x27_828_ = lean_array_uset(v_buckets_806_, v___x_819_, v___x_827_);
v___x_829_ = lean_unsigned_to_nat(4u);
v___x_830_ = lean_nat_mul(v_size_x27_826_, v___x_829_);
v___x_831_ = lean_unsigned_to_nat(3u);
v___x_832_ = lean_nat_div(v___x_830_, v___x_831_);
lean_dec(v___x_830_);
v___x_833_ = lean_array_get_size(v_buckets_x27_828_);
v___x_834_ = lean_nat_dec_le(v___x_832_, v___x_833_);
lean_dec(v___x_832_);
if (v___x_834_ == 0)
{
lean_object* v_val_835_; lean_object* v___x_837_; 
v_val_835_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__15___redArg(v_buckets_x27_828_);
if (v_isShared_824_ == 0)
{
lean_ctor_set(v___x_823_, 1, v_val_835_);
lean_ctor_set(v___x_823_, 0, v_size_x27_826_);
v___x_837_ = v___x_823_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v_size_x27_826_);
lean_ctor_set(v_reuseFailAlloc_838_, 1, v_val_835_);
v___x_837_ = v_reuseFailAlloc_838_;
goto v_reusejp_836_;
}
v_reusejp_836_:
{
return v___x_837_;
}
}
else
{
lean_object* v___x_840_; 
if (v_isShared_824_ == 0)
{
lean_ctor_set(v___x_823_, 1, v_buckets_x27_828_);
lean_ctor_set(v___x_823_, 0, v_size_x27_826_);
v___x_840_ = v___x_823_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v_size_x27_826_);
lean_ctor_set(v_reuseFailAlloc_841_, 1, v_buckets_x27_828_);
v___x_840_ = v_reuseFailAlloc_841_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
return v___x_840_;
}
}
}
}
else
{
lean_dec(v_b_804_);
lean_dec_ref(v_a_803_);
return v_m_802_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___lam__0(lean_object* v___x_845_, lean_object* v_entry_846_, lean_object* v_s_847_){
_start:
{
lean_object* v_addEntryFn_848_; lean_object* v_importedEntries_849_; lean_object* v_state_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_858_; 
v_addEntryFn_848_ = lean_ctor_get(v___x_845_, 3);
lean_inc(v_addEntryFn_848_);
lean_dec_ref(v___x_845_);
v_importedEntries_849_ = lean_ctor_get(v_s_847_, 0);
v_state_850_ = lean_ctor_get(v_s_847_, 1);
v_isSharedCheck_858_ = !lean_is_exclusive(v_s_847_);
if (v_isSharedCheck_858_ == 0)
{
v___x_852_ = v_s_847_;
v_isShared_853_ = v_isSharedCheck_858_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_state_850_);
lean_inc(v_importedEntries_849_);
lean_dec(v_s_847_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_858_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v_state_854_; lean_object* v___x_856_; 
v_state_854_ = lean_apply_2(v_addEntryFn_848_, v_state_850_, v_entry_846_);
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 1, v_state_854_);
v___x_856_ = v___x_852_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v_importedEntries_849_);
lean_ctor_set(v_reuseFailAlloc_857_, 1, v_state_854_);
v___x_856_ = v_reuseFailAlloc_857_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
return v___x_856_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8_spec__12_spec__16___redArg(lean_object* v_keys_859_, lean_object* v_i_860_, lean_object* v_k_861_){
_start:
{
lean_object* v___x_862_; uint8_t v___x_863_; 
v___x_862_ = lean_array_get_size(v_keys_859_);
v___x_863_ = lean_nat_dec_lt(v_i_860_, v___x_862_);
if (v___x_863_ == 0)
{
lean_dec(v_i_860_);
return v___x_863_;
}
else
{
lean_object* v_k_x27_864_; uint8_t v___x_865_; 
v_k_x27_864_ = lean_array_fget_borrowed(v_keys_859_, v_i_860_);
v___x_865_ = l_Lean_instBEqExtraModUse_beq(v_k_861_, v_k_x27_864_);
if (v___x_865_ == 0)
{
lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_866_ = lean_unsigned_to_nat(1u);
v___x_867_ = lean_nat_add(v_i_860_, v___x_866_);
lean_dec(v_i_860_);
v_i_860_ = v___x_867_;
goto _start;
}
else
{
lean_dec(v_i_860_);
return v___x_863_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8_spec__12_spec__16___redArg___boxed(lean_object* v_keys_869_, lean_object* v_i_870_, lean_object* v_k_871_){
_start:
{
uint8_t v_res_872_; lean_object* v_r_873_; 
v_res_872_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8_spec__12_spec__16___redArg(v_keys_869_, v_i_870_, v_k_871_);
lean_dec_ref(v_k_871_);
lean_dec_ref(v_keys_869_);
v_r_873_ = lean_box(v_res_872_);
return v_r_873_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8_spec__12___redArg(lean_object* v_x_874_, size_t v_x_875_, lean_object* v_x_876_){
_start:
{
if (lean_obj_tag(v_x_874_) == 0)
{
lean_object* v_es_877_; lean_object* v___x_878_; size_t v___x_879_; size_t v___x_880_; lean_object* v_j_881_; lean_object* v___x_882_; 
v_es_877_ = lean_ctor_get(v_x_874_, 0);
v___x_878_ = lean_box(2);
v___x_879_ = ((size_t)31ULL);
v___x_880_ = lean_usize_land(v_x_875_, v___x_879_);
v_j_881_ = lean_usize_to_nat(v___x_880_);
v___x_882_ = lean_array_get_borrowed(v___x_878_, v_es_877_, v_j_881_);
lean_dec(v_j_881_);
switch(lean_obj_tag(v___x_882_))
{
case 0:
{
lean_object* v_key_883_; uint8_t v___x_884_; 
v_key_883_ = lean_ctor_get(v___x_882_, 0);
v___x_884_ = l_Lean_instBEqExtraModUse_beq(v_x_876_, v_key_883_);
return v___x_884_;
}
case 1:
{
lean_object* v_node_885_; size_t v___x_886_; size_t v___x_887_; 
v_node_885_ = lean_ctor_get(v___x_882_, 0);
v___x_886_ = ((size_t)5ULL);
v___x_887_ = lean_usize_shift_right(v_x_875_, v___x_886_);
v_x_874_ = v_node_885_;
v_x_875_ = v___x_887_;
goto _start;
}
default: 
{
uint8_t v___x_889_; 
v___x_889_ = 0;
return v___x_889_;
}
}
}
else
{
lean_object* v_ks_890_; lean_object* v___x_891_; uint8_t v___x_892_; 
v_ks_890_ = lean_ctor_get(v_x_874_, 0);
v___x_891_ = lean_unsigned_to_nat(0u);
v___x_892_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8_spec__12_spec__16___redArg(v_ks_890_, v___x_891_, v_x_876_);
return v___x_892_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8_spec__12___redArg___boxed(lean_object* v_x_893_, lean_object* v_x_894_, lean_object* v_x_895_){
_start:
{
size_t v_x_17590__boxed_896_; uint8_t v_res_897_; lean_object* v_r_898_; 
v_x_17590__boxed_896_ = lean_unbox_usize(v_x_894_);
lean_dec(v_x_894_);
v_res_897_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8_spec__12___redArg(v_x_893_, v_x_17590__boxed_896_, v_x_895_);
lean_dec_ref(v_x_895_);
lean_dec_ref(v_x_893_);
v_r_898_ = lean_box(v_res_897_);
return v_r_898_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8___redArg(lean_object* v_x_899_, lean_object* v_x_900_){
_start:
{
uint64_t v___x_901_; size_t v___x_902_; uint8_t v___x_903_; 
v___x_901_ = l_Lean_instHashableExtraModUse_hash(v_x_900_);
v___x_902_ = lean_uint64_to_usize(v___x_901_);
v___x_903_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8_spec__12___redArg(v_x_899_, v___x_902_, v_x_900_);
return v___x_903_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8___redArg___boxed(lean_object* v_x_904_, lean_object* v_x_905_){
_start:
{
uint8_t v_res_906_; lean_object* v_r_907_; 
v_res_906_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8___redArg(v_x_904_, v_x_905_);
lean_dec_ref(v_x_905_);
lean_dec_ref(v_x_904_);
v_r_907_ = lean_box(v_res_906_);
return v_r_907_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_908_; 
v___x_908_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_908_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__4(void){
_start:
{
lean_object* v___x_913_; lean_object* v___x_914_; 
v___x_913_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__3));
v___x_914_ = l_Lean_stringToMessageData(v___x_913_);
return v___x_914_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__6(void){
_start:
{
lean_object* v___x_916_; lean_object* v___x_917_; 
v___x_916_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__5));
v___x_917_ = l_Lean_stringToMessageData(v___x_916_);
return v___x_917_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__7(void){
_start:
{
lean_object* v___x_918_; lean_object* v___x_919_; 
v___x_918_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1___closed__1));
v___x_919_ = l_Lean_stringToMessageData(v___x_918_);
return v___x_919_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__10(void){
_start:
{
lean_object* v_cls_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
v_cls_923_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__2));
v___x_924_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__9));
v___x_925_ = l_Lean_Name_append(v___x_924_, v_cls_923_);
return v___x_925_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__12(void){
_start:
{
lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_927_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__11));
v___x_928_ = l_Lean_stringToMessageData(v___x_927_);
return v___x_928_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__14(void){
_start:
{
lean_object* v___x_930_; lean_object* v___x_931_; 
v___x_930_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__13));
v___x_931_ = l_Lean_stringToMessageData(v___x_930_);
return v___x_931_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3(lean_object* v_mod_936_, uint8_t v_isMeta_937_, lean_object* v_hint_938_, lean_object* v___y_939_, lean_object* v___y_940_){
_start:
{
lean_object* v___y_943_; lean_object* v___y_944_; lean_object* v___y_945_; lean_object* v___y_946_; lean_object* v___y_947_; lean_object* v___y_948_; lean_object* v___y_949_; lean_object* v___y_950_; lean_object* v___y_951_; lean_object* v___y_952_; lean_object* v___y_953_; lean_object* v___y_954_; lean_object* v___y_955_; lean_object* v___y_956_; lean_object* v___y_957_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v_env_963_; uint8_t v_isExporting_964_; lean_object* v_entry_965_; lean_object* v___x_966_; lean_object* v_env_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; uint8_t v___x_972_; 
v___x_961_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__0);
v___x_962_ = lean_st_ref_get(v___y_940_);
v_env_963_ = lean_ctor_get(v___x_962_, 0);
lean_inc_ref(v_env_963_);
lean_dec(v___x_962_);
v_isExporting_964_ = lean_ctor_get_uint8(v_env_963_, sizeof(void*)*13);
lean_dec_ref(v_env_963_);
lean_inc(v_mod_936_);
v_entry_965_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_965_, 0, v_mod_936_);
lean_ctor_set_uint8(v_entry_965_, sizeof(void*)*1, v_isExporting_964_);
lean_ctor_set_uint8(v_entry_965_, sizeof(void*)*1 + 1, v_isMeta_937_);
v___x_966_ = lean_st_ref_get(v___y_940_);
v_env_967_ = lean_ctor_get(v___x_966_, 0);
lean_inc_ref(v_env_967_);
lean_dec(v___x_966_);
v___x_968_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_969_ = lean_box(1);
v___x_970_ = lean_box(0);
v___x_971_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_961_, v___x_968_, v_env_967_, v___x_969_, v___x_970_);
v___x_972_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8___redArg(v___x_971_, v_entry_965_);
lean_dec(v___x_971_);
if (v___x_972_ == 0)
{
lean_object* v___f_973_; uint8_t v___x_974_; lean_object* v___y_976_; lean_object* v___y_999_; lean_object* v_cls_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___y_1012_; lean_object* v___y_1013_; lean_object* v___y_1017_; lean_object* v___y_1018_; lean_object* v_scopes_1030_; lean_object* v___x_1031_; lean_object* v_opts_1032_; uint8_t v_hasTrace_1033_; 
lean_inc_ref(v_entry_965_);
v___f_973_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___lam__0), 3, 2);
lean_closure_set(v___f_973_, 0, v___x_968_);
lean_closure_set(v___f_973_, 1, v_entry_965_);
v___x_974_ = 1;
v_cls_1006_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__2));
v___x_1007_ = l_Lean_inheritedTraceOptions;
v___x_1008_ = lean_st_ref_get(v___x_1007_);
v___x_1009_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1010_ = lean_st_ref_get(v___y_940_);
v_scopes_1030_ = lean_ctor_get(v___x_1010_, 2);
lean_inc(v_scopes_1030_);
lean_dec(v___x_1010_);
v___x_1031_ = l_List_head_x21___redArg(v___x_1009_, v_scopes_1030_);
lean_dec(v_scopes_1030_);
v_opts_1032_ = lean_ctor_get(v___x_1031_, 1);
lean_inc_ref(v_opts_1032_);
lean_dec(v___x_1031_);
v_hasTrace_1033_ = lean_ctor_get_uint8(v_opts_1032_, sizeof(void*)*1);
if (v_hasTrace_1033_ == 0)
{
lean_dec_ref(v_opts_1032_);
lean_dec(v___x_1008_);
lean_dec(v_hint_938_);
lean_dec(v_mod_936_);
v___y_999_ = v___y_940_;
goto v___jp_998_;
}
else
{
lean_object* v___x_1034_; uint8_t v___x_1035_; 
v___x_1034_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__10);
v___x_1035_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1008_, v_opts_1032_, v___x_1034_);
lean_dec_ref(v_opts_1032_);
lean_dec(v___x_1008_);
if (v___x_1035_ == 0)
{
lean_dec(v_hint_938_);
lean_dec(v_mod_936_);
v___y_999_ = v___y_940_;
goto v___jp_998_;
}
else
{
lean_object* v___x_1036_; lean_object* v___y_1038_; 
v___x_1036_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__12);
if (v_isExporting_964_ == 0)
{
lean_object* v___x_1045_; 
v___x_1045_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__17));
v___y_1038_ = v___x_1045_;
goto v___jp_1037_;
}
else
{
lean_object* v___x_1046_; 
v___x_1046_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__18));
v___y_1038_ = v___x_1046_;
goto v___jp_1037_;
}
v___jp_1037_:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; 
lean_inc_ref(v___y_1038_);
v___x_1039_ = l_Lean_stringToMessageData(v___y_1038_);
v___x_1040_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1040_, 0, v___x_1036_);
lean_ctor_set(v___x_1040_, 1, v___x_1039_);
v___x_1041_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__14);
v___x_1042_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1040_);
lean_ctor_set(v___x_1042_, 1, v___x_1041_);
if (v_isMeta_937_ == 0)
{
lean_object* v___x_1043_; 
v___x_1043_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__15));
v___y_1017_ = v___x_1042_;
v___y_1018_ = v___x_1043_;
goto v___jp_1016_;
}
else
{
lean_object* v___x_1044_; 
v___x_1044_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__16));
v___y_1017_ = v___x_1042_;
v___y_1018_ = v___x_1044_;
goto v___jp_1016_;
}
}
}
}
v___jp_975_:
{
lean_object* v___x_977_; lean_object* v_toEnvExtension_978_; lean_object* v_env_979_; lean_object* v_messages_980_; lean_object* v_scopes_981_; lean_object* v_usedQuotCtxts_982_; lean_object* v_nextMacroScope_983_; lean_object* v_maxRecDepth_984_; lean_object* v_ngen_985_; lean_object* v_auxDeclNGen_986_; lean_object* v_infoState_987_; lean_object* v_traceState_988_; lean_object* v_snapshotTasks_989_; lean_object* v_prevLinterStates_990_; lean_object* v_codeQualityEntryTasks_991_; lean_object* v_asyncMode_992_; uint8_t v_logWrites_993_; lean_object* v___x_994_; 
v___x_977_ = lean_st_ref_take(v___y_976_);
v_toEnvExtension_978_ = lean_ctor_get(v___x_968_, 0);
v_env_979_ = lean_ctor_get(v___x_977_, 0);
lean_inc_ref(v_env_979_);
v_messages_980_ = lean_ctor_get(v___x_977_, 1);
lean_inc_ref(v_messages_980_);
v_scopes_981_ = lean_ctor_get(v___x_977_, 2);
lean_inc(v_scopes_981_);
v_usedQuotCtxts_982_ = lean_ctor_get(v___x_977_, 3);
lean_inc(v_usedQuotCtxts_982_);
v_nextMacroScope_983_ = lean_ctor_get(v___x_977_, 4);
lean_inc(v_nextMacroScope_983_);
v_maxRecDepth_984_ = lean_ctor_get(v___x_977_, 5);
lean_inc(v_maxRecDepth_984_);
v_ngen_985_ = lean_ctor_get(v___x_977_, 6);
lean_inc_ref(v_ngen_985_);
v_auxDeclNGen_986_ = lean_ctor_get(v___x_977_, 7);
lean_inc_ref(v_auxDeclNGen_986_);
v_infoState_987_ = lean_ctor_get(v___x_977_, 8);
lean_inc_ref(v_infoState_987_);
v_traceState_988_ = lean_ctor_get(v___x_977_, 9);
lean_inc_ref(v_traceState_988_);
v_snapshotTasks_989_ = lean_ctor_get(v___x_977_, 10);
lean_inc_ref(v_snapshotTasks_989_);
v_prevLinterStates_990_ = lean_ctor_get(v___x_977_, 11);
lean_inc(v_prevLinterStates_990_);
v_codeQualityEntryTasks_991_ = lean_ctor_get(v___x_977_, 12);
lean_inc_ref(v_codeQualityEntryTasks_991_);
lean_dec(v___x_977_);
v_asyncMode_992_ = lean_ctor_get(v_toEnvExtension_978_, 2);
v_logWrites_993_ = lean_ctor_get_uint8(v_toEnvExtension_978_, sizeof(void*)*6);
v___x_994_ = lean_box(0);
if (v_logWrites_993_ == 0)
{
lean_object* v___x_995_; 
lean_inc_ref(v_toEnvExtension_978_);
v___x_995_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_978_, v_env_979_, v___f_973_, v_asyncMode_992_, v___x_970_, v___x_974_);
v___y_943_ = v_scopes_981_;
v___y_944_ = v_snapshotTasks_989_;
v___y_945_ = v_maxRecDepth_984_;
v___y_946_ = v_codeQualityEntryTasks_991_;
v___y_947_ = v_traceState_988_;
v___y_948_ = v_usedQuotCtxts_982_;
v___y_949_ = v_auxDeclNGen_986_;
v___y_950_ = v___y_976_;
v___y_951_ = v_nextMacroScope_983_;
v___y_952_ = v_prevLinterStates_990_;
v___y_953_ = v_messages_980_;
v___y_954_ = v___x_994_;
v___y_955_ = v_ngen_985_;
v___y_956_ = v_infoState_987_;
v___y_957_ = v___x_995_;
goto v___jp_942_;
}
else
{
lean_object* v___x_996_; lean_object* v___x_997_; 
lean_inc_ref_n(v_toEnvExtension_978_, 2);
v___x_996_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_978_, v_env_979_);
lean_dec_ref(v_env_979_);
v___x_997_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_978_, v___x_996_, v___f_973_, v_asyncMode_992_, v___x_970_, v___x_974_);
v___y_943_ = v_scopes_981_;
v___y_944_ = v_snapshotTasks_989_;
v___y_945_ = v_maxRecDepth_984_;
v___y_946_ = v_codeQualityEntryTasks_991_;
v___y_947_ = v_traceState_988_;
v___y_948_ = v_usedQuotCtxts_982_;
v___y_949_ = v_auxDeclNGen_986_;
v___y_950_ = v___y_976_;
v___y_951_ = v_nextMacroScope_983_;
v___y_952_ = v_prevLinterStates_990_;
v___y_953_ = v_messages_980_;
v___y_954_ = v___x_994_;
v___y_955_ = v_ngen_985_;
v___y_956_ = v_infoState_987_;
v___y_957_ = v___x_997_;
goto v___jp_942_;
}
}
v___jp_998_:
{
uint8_t v___x_1000_; 
v___x_1000_ = l_Lean_usageRecordingEnabled();
if (v___x_1000_ == 0)
{
lean_dec_ref_known(v_entry_965_, 1);
v___y_976_ = v___y_999_;
goto v___jp_975_;
}
else
{
lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1001_ = l___private_Lean_ExtraModUses_0__Lean_extraModUsesByChecksRef;
v___x_1002_ = lean_st_ref_take(v___x_1001_);
v___x_1003_ = lean_box(0);
v___x_1004_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9___redArg(v___x_1002_, v_entry_965_, v___x_1003_);
v___x_1005_ = lean_st_ref_put(v___x_1001_, v___x_1004_);
v___y_976_ = v___y_999_;
goto v___jp_975_;
}
}
v___jp_1011_:
{
lean_object* v___x_1014_; lean_object* v___x_1015_; 
v___x_1014_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___y_1012_);
lean_ctor_set(v___x_1014_, 1, v___y_1013_);
v___x_1015_ = l_Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1(v_cls_1006_, v___x_1014_, v___y_939_, v___y_940_);
if (lean_obj_tag(v___x_1015_) == 0)
{
lean_dec_ref_known(v___x_1015_, 1);
v___y_999_ = v___y_940_;
goto v___jp_998_;
}
else
{
lean_dec_ref(v___f_973_);
lean_dec_ref_known(v_entry_965_, 1);
return v___x_1015_;
}
}
v___jp_1016_:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; uint8_t v___x_1025_; 
lean_inc_ref(v___y_1018_);
v___x_1019_ = l_Lean_stringToMessageData(v___y_1018_);
v___x_1020_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1020_, 0, v___y_1017_);
lean_ctor_set(v___x_1020_, 1, v___x_1019_);
v___x_1021_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__4);
v___x_1022_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1022_, 0, v___x_1020_);
lean_ctor_set(v___x_1022_, 1, v___x_1021_);
v___x_1023_ = l_Lean_MessageData_ofName(v_mod_936_);
v___x_1024_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1024_, 0, v___x_1022_);
lean_ctor_set(v___x_1024_, 1, v___x_1023_);
v___x_1025_ = l_Lean_Name_isAnonymous(v_hint_938_);
if (v___x_1025_ == 0)
{
lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; 
v___x_1026_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__6);
v___x_1027_ = l_Lean_MessageData_ofName(v_hint_938_);
v___x_1028_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1026_);
lean_ctor_set(v___x_1028_, 1, v___x_1027_);
v___y_1012_ = v___x_1024_;
v___y_1013_ = v___x_1028_;
goto v___jp_1011_;
}
else
{
lean_object* v___x_1029_; 
lean_dec(v_hint_938_);
v___x_1029_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__7);
v___y_1012_ = v___x_1024_;
v___y_1013_ = v___x_1029_;
goto v___jp_1011_;
}
}
}
else
{
lean_object* v___x_1047_; lean_object* v___x_1048_; 
lean_dec_ref_known(v_entry_965_, 1);
lean_dec(v_hint_938_);
lean_dec(v_mod_936_);
v___x_1047_ = lean_box(0);
v___x_1048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1048_, 0, v___x_1047_);
return v___x_1048_;
}
v___jp_942_:
{
lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; 
v___x_958_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_958_, 0, v___y_957_);
lean_ctor_set(v___x_958_, 1, v___y_953_);
lean_ctor_set(v___x_958_, 2, v___y_943_);
lean_ctor_set(v___x_958_, 3, v___y_948_);
lean_ctor_set(v___x_958_, 4, v___y_951_);
lean_ctor_set(v___x_958_, 5, v___y_945_);
lean_ctor_set(v___x_958_, 6, v___y_955_);
lean_ctor_set(v___x_958_, 7, v___y_949_);
lean_ctor_set(v___x_958_, 8, v___y_956_);
lean_ctor_set(v___x_958_, 9, v___y_947_);
lean_ctor_set(v___x_958_, 10, v___y_944_);
lean_ctor_set(v___x_958_, 11, v___y_952_);
lean_ctor_set(v___x_958_, 12, v___y_946_);
v___x_959_ = lean_st_ref_put(v___y_950_, v___x_958_);
v___x_960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_960_, 0, v___y_954_);
return v___x_960_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___boxed(lean_object* v_mod_1049_, lean_object* v_isMeta_1050_, lean_object* v_hint_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_){
_start:
{
uint8_t v_isMeta_boxed_1055_; lean_object* v_res_1056_; 
v_isMeta_boxed_1055_ = lean_unbox(v_isMeta_1050_);
v_res_1056_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3(v_mod_1049_, v_isMeta_boxed_1055_, v_hint_1051_, v___y_1052_, v___y_1053_);
lean_dec(v___y_1053_);
lean_dec_ref(v___y_1052_);
return v_res_1056_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__4(lean_object* v___x_1057_, lean_object* v_declName_1058_, lean_object* v_as_1059_, size_t v_sz_1060_, size_t v_i_1061_, lean_object* v_b_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_){
_start:
{
uint8_t v___x_1066_; 
v___x_1066_ = lean_usize_dec_lt(v_i_1061_, v_sz_1060_);
if (v___x_1066_ == 0)
{
lean_object* v___x_1067_; 
lean_dec(v_declName_1058_);
v___x_1067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1067_, 0, v_b_1062_);
return v___x_1067_;
}
else
{
lean_object* v___x_1068_; lean_object* v_modules_1069_; lean_object* v___x_1070_; lean_object* v_a_1071_; lean_object* v___x_1072_; lean_object* v_toImport_1073_; lean_object* v_module_1074_; lean_object* v___x_1075_; uint8_t v___x_1076_; lean_object* v___x_1077_; 
v___x_1068_ = l_Lean_Environment_header(v___x_1057_);
v_modules_1069_ = lean_ctor_get(v___x_1068_, 3);
lean_inc_ref(v_modules_1069_);
lean_dec_ref(v___x_1068_);
v___x_1070_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_1071_ = lean_array_uget_borrowed(v_as_1059_, v_i_1061_);
v___x_1072_ = lean_array_get(v___x_1070_, v_modules_1069_, v_a_1071_);
lean_dec_ref(v_modules_1069_);
v_toImport_1073_ = lean_ctor_get(v___x_1072_, 0);
lean_inc_ref(v_toImport_1073_);
lean_dec(v___x_1072_);
v_module_1074_ = lean_ctor_get(v_toImport_1073_, 0);
lean_inc(v_module_1074_);
lean_dec_ref(v_toImport_1073_);
v___x_1075_ = lean_box(0);
v___x_1076_ = 0;
lean_inc(v_declName_1058_);
v___x_1077_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3(v_module_1074_, v___x_1076_, v_declName_1058_, v___y_1063_, v___y_1064_);
if (lean_obj_tag(v___x_1077_) == 0)
{
size_t v___x_1078_; size_t v___x_1079_; 
lean_dec_ref_known(v___x_1077_, 1);
v___x_1078_ = ((size_t)1ULL);
v___x_1079_ = lean_usize_add(v_i_1061_, v___x_1078_);
v_i_1061_ = v___x_1079_;
v_b_1062_ = v___x_1075_;
goto _start;
}
else
{
lean_dec(v_declName_1058_);
return v___x_1077_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__4___boxed(lean_object* v___x_1081_, lean_object* v_declName_1082_, lean_object* v_as_1083_, lean_object* v_sz_1084_, lean_object* v_i_1085_, lean_object* v_b_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_){
_start:
{
size_t v_sz_boxed_1090_; size_t v_i_boxed_1091_; lean_object* v_res_1092_; 
v_sz_boxed_1090_ = lean_unbox_usize(v_sz_1084_);
lean_dec(v_sz_1084_);
v_i_boxed_1091_ = lean_unbox_usize(v_i_1085_);
lean_dec(v_i_1085_);
v_res_1092_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__4(v___x_1081_, v_declName_1082_, v_as_1083_, v_sz_boxed_1090_, v_i_boxed_1091_, v_b_1086_, v___y_1087_, v___y_1088_);
lean_dec(v___y_1088_);
lean_dec_ref(v___y_1087_);
lean_dec_ref(v_as_1083_);
lean_dec_ref(v___x_1081_);
return v_res_1092_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__5_spec__12___redArg(lean_object* v_a_1093_, lean_object* v_x_1094_){
_start:
{
if (lean_obj_tag(v_x_1094_) == 0)
{
lean_object* v___x_1095_; 
v___x_1095_ = lean_box(0);
return v___x_1095_;
}
else
{
lean_object* v_key_1096_; lean_object* v_value_1097_; lean_object* v_tail_1098_; uint8_t v___x_1099_; 
v_key_1096_ = lean_ctor_get(v_x_1094_, 0);
v_value_1097_ = lean_ctor_get(v_x_1094_, 1);
v_tail_1098_ = lean_ctor_get(v_x_1094_, 2);
v___x_1099_ = lean_name_eq(v_key_1096_, v_a_1093_);
if (v___x_1099_ == 0)
{
v_x_1094_ = v_tail_1098_;
goto _start;
}
else
{
lean_object* v___x_1101_; 
lean_inc(v_value_1097_);
v___x_1101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1101_, 0, v_value_1097_);
return v___x_1101_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__5_spec__12___redArg___boxed(lean_object* v_a_1102_, lean_object* v_x_1103_){
_start:
{
lean_object* v_res_1104_; 
v_res_1104_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__5_spec__12___redArg(v_a_1102_, v_x_1103_);
lean_dec(v_x_1103_);
lean_dec(v_a_1102_);
return v_res_1104_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__5___redArg(lean_object* v_m_1105_, lean_object* v_a_1106_){
_start:
{
lean_object* v_buckets_1107_; lean_object* v___x_1108_; uint64_t v___y_1110_; 
v_buckets_1107_ = lean_ctor_get(v_m_1105_, 1);
v___x_1108_ = lean_array_get_size(v_buckets_1107_);
if (lean_obj_tag(v_a_1106_) == 0)
{
uint64_t v___x_1124_; 
v___x_1124_ = 1723ULL;
v___y_1110_ = v___x_1124_;
goto v___jp_1109_;
}
else
{
uint64_t v_hash_1125_; 
v_hash_1125_ = lean_ctor_get_uint64(v_a_1106_, sizeof(void*)*2);
v___y_1110_ = v_hash_1125_;
goto v___jp_1109_;
}
v___jp_1109_:
{
uint64_t v___x_1111_; uint64_t v___x_1112_; uint64_t v_fold_1113_; uint64_t v___x_1114_; uint64_t v___x_1115_; uint64_t v___x_1116_; size_t v___x_1117_; size_t v___x_1118_; size_t v___x_1119_; size_t v___x_1120_; size_t v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; 
v___x_1111_ = 32ULL;
v___x_1112_ = lean_uint64_shift_right(v___y_1110_, v___x_1111_);
v_fold_1113_ = lean_uint64_xor(v___y_1110_, v___x_1112_);
v___x_1114_ = 16ULL;
v___x_1115_ = lean_uint64_shift_right(v_fold_1113_, v___x_1114_);
v___x_1116_ = lean_uint64_xor(v_fold_1113_, v___x_1115_);
v___x_1117_ = lean_uint64_to_usize(v___x_1116_);
v___x_1118_ = lean_usize_of_nat(v___x_1108_);
v___x_1119_ = ((size_t)1ULL);
v___x_1120_ = lean_usize_sub(v___x_1118_, v___x_1119_);
v___x_1121_ = lean_usize_land(v___x_1117_, v___x_1120_);
v___x_1122_ = lean_array_uget_borrowed(v_buckets_1107_, v___x_1121_);
v___x_1123_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__5_spec__12___redArg(v_a_1106_, v___x_1122_);
return v___x_1123_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__5___redArg___boxed(lean_object* v_m_1126_, lean_object* v_a_1127_){
_start:
{
lean_object* v_res_1128_; 
v_res_1128_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__5___redArg(v_m_1126_, v_a_1127_);
lean_dec(v_a_1127_);
lean_dec_ref(v_m_1126_);
return v_res_1128_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1129_; 
v___x_1129_ = l_Std_HashMap_instInhabited___redArg();
return v___x_1129_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1(lean_object* v_declName_1132_, uint8_t v_isMeta_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_){
_start:
{
lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v_env_1142_; lean_object* v___y_1144_; lean_object* v___x_1157_; 
v___x_1137_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1___closed__0);
v___x_1138_ = lean_st_ref_get(v___y_1135_);
v_env_1142_ = lean_ctor_get(v___x_1138_, 0);
lean_inc_ref(v_env_1142_);
lean_dec(v___x_1138_);
v___x_1157_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1142_, v_declName_1132_);
if (lean_obj_tag(v___x_1157_) == 0)
{
lean_dec_ref(v_env_1142_);
lean_dec(v_declName_1132_);
goto v___jp_1139_;
}
else
{
lean_object* v_val_1158_; lean_object* v___x_1159_; lean_object* v_modules_1160_; lean_object* v___x_1161_; uint8_t v___x_1162_; 
v_val_1158_ = lean_ctor_get(v___x_1157_, 0);
lean_inc(v_val_1158_);
lean_dec_ref_known(v___x_1157_, 1);
v___x_1159_ = l_Lean_Environment_header(v_env_1142_);
v_modules_1160_ = lean_ctor_get(v___x_1159_, 3);
lean_inc_ref(v_modules_1160_);
lean_dec_ref(v___x_1159_);
v___x_1161_ = lean_array_get_size(v_modules_1160_);
v___x_1162_ = lean_nat_dec_lt(v_val_1158_, v___x_1161_);
if (v___x_1162_ == 0)
{
lean_dec_ref(v_modules_1160_);
lean_dec(v_val_1158_);
lean_dec_ref(v_env_1142_);
lean_dec(v_declName_1132_);
goto v___jp_1139_;
}
else
{
lean_object* v___x_1163_; lean_object* v___x_1164_; uint8_t v___y_1166_; 
v___x_1163_ = lean_array_fget(v_modules_1160_, v_val_1158_);
lean_dec(v_val_1158_);
lean_dec_ref(v_modules_1160_);
v___x_1164_ = lean_st_ref_get(v___y_1135_);
if (v_isMeta_1133_ == 0)
{
lean_dec(v___x_1164_);
v___y_1166_ = v_isMeta_1133_;
goto v___jp_1165_;
}
else
{
lean_object* v_env_1177_; uint8_t v___x_1178_; 
v_env_1177_ = lean_ctor_get(v___x_1164_, 0);
lean_inc_ref(v_env_1177_);
lean_dec(v___x_1164_);
lean_inc(v_declName_1132_);
v___x_1178_ = l_Lean_isMarkedMeta(v_env_1177_, v_declName_1132_);
if (v___x_1178_ == 0)
{
v___y_1166_ = v_isMeta_1133_;
goto v___jp_1165_;
}
else
{
uint8_t v___x_1179_; 
v___x_1179_ = 0;
v___y_1166_ = v___x_1179_;
goto v___jp_1165_;
}
}
v___jp_1165_:
{
lean_object* v_toImport_1167_; lean_object* v_module_1168_; lean_object* v___x_1169_; 
v_toImport_1167_ = lean_ctor_get(v___x_1163_, 0);
lean_inc_ref(v_toImport_1167_);
lean_dec(v___x_1163_);
v_module_1168_ = lean_ctor_get(v_toImport_1167_, 0);
lean_inc(v_module_1168_);
lean_dec_ref(v_toImport_1167_);
lean_inc(v_declName_1132_);
v___x_1169_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3(v_module_1168_, v___y_1166_, v_declName_1132_, v___y_1134_, v___y_1135_);
if (lean_obj_tag(v___x_1169_) == 0)
{
lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; 
lean_dec_ref_known(v___x_1169_, 1);
v___x_1170_ = l_Lean_indirectModUseExt;
v___x_1171_ = lean_box(1);
v___x_1172_ = lean_box(0);
lean_inc_ref(v_env_1142_);
v___x_1173_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1137_, v___x_1170_, v_env_1142_, v___x_1171_, v___x_1172_);
v___x_1174_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__5___redArg(v___x_1173_, v_declName_1132_);
lean_dec(v___x_1173_);
if (lean_obj_tag(v___x_1174_) == 0)
{
lean_object* v___x_1175_; 
v___x_1175_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1___closed__1));
v___y_1144_ = v___x_1175_;
goto v___jp_1143_;
}
else
{
lean_object* v_val_1176_; 
v_val_1176_ = lean_ctor_get(v___x_1174_, 0);
lean_inc(v_val_1176_);
lean_dec_ref_known(v___x_1174_, 1);
v___y_1144_ = v_val_1176_;
goto v___jp_1143_;
}
}
else
{
lean_dec_ref(v_env_1142_);
lean_dec(v_declName_1132_);
return v___x_1169_;
}
}
}
}
v___jp_1139_:
{
lean_object* v___x_1140_; lean_object* v___x_1141_; 
v___x_1140_ = lean_box(0);
v___x_1141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1140_);
return v___x_1141_;
}
v___jp_1143_:
{
lean_object* v___x_1145_; size_t v_sz_1146_; size_t v___x_1147_; lean_object* v___x_1148_; 
v___x_1145_ = lean_box(0);
v_sz_1146_ = lean_array_size(v___y_1144_);
v___x_1147_ = ((size_t)0ULL);
v___x_1148_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__4(v_env_1142_, v_declName_1132_, v___y_1144_, v_sz_1146_, v___x_1147_, v___x_1145_, v___y_1134_, v___y_1135_);
lean_dec_ref(v___y_1144_);
lean_dec_ref(v_env_1142_);
if (lean_obj_tag(v___x_1148_) == 0)
{
lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1155_; 
v_isSharedCheck_1155_ = !lean_is_exclusive(v___x_1148_);
if (v_isSharedCheck_1155_ == 0)
{
lean_object* v_unused_1156_; 
v_unused_1156_ = lean_ctor_get(v___x_1148_, 0);
lean_dec(v_unused_1156_);
v___x_1150_ = v___x_1148_;
v_isShared_1151_ = v_isSharedCheck_1155_;
goto v_resetjp_1149_;
}
else
{
lean_dec(v___x_1148_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1155_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
lean_object* v___x_1153_; 
if (v_isShared_1151_ == 0)
{
lean_ctor_set(v___x_1150_, 0, v___x_1145_);
v___x_1153_ = v___x_1150_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v___x_1145_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
return v___x_1153_;
}
}
}
else
{
return v___x_1148_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1___boxed(lean_object* v_declName_1180_, lean_object* v_isMeta_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_){
_start:
{
uint8_t v_isMeta_boxed_1185_; lean_object* v_res_1186_; 
v_isMeta_boxed_1185_ = lean_unbox(v_isMeta_1181_);
v_res_1186_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1(v_declName_1180_, v_isMeta_boxed_1185_, v___y_1182_, v___y_1183_);
lean_dec(v___y_1183_);
lean_dec_ref(v___y_1182_);
return v_res_1186_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__2___redArg(lean_object* v_as_x27_1187_, lean_object* v_b_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
if (lean_obj_tag(v_as_x27_1187_) == 0)
{
lean_object* v___x_1192_; 
v___x_1192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1192_, 0, v_b_1188_);
return v___x_1192_;
}
else
{
lean_object* v_head_1193_; lean_object* v_tail_1194_; lean_object* v___x_1195_; uint8_t v___x_1196_; lean_object* v___x_1197_; 
v_head_1193_ = lean_ctor_get(v_as_x27_1187_, 0);
v_tail_1194_ = lean_ctor_get(v_as_x27_1187_, 1);
v___x_1195_ = lean_box(0);
v___x_1196_ = 1;
lean_inc(v_head_1193_);
v___x_1197_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1(v_head_1193_, v___x_1196_, v___y_1189_, v___y_1190_);
if (lean_obj_tag(v___x_1197_) == 0)
{
lean_dec_ref_known(v___x_1197_, 1);
v_as_x27_1187_ = v_tail_1194_;
v_b_1188_ = v___x_1195_;
goto _start;
}
else
{
return v___x_1197_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__2___redArg___boxed(lean_object* v_as_x27_1199_, lean_object* v_b_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_){
_start:
{
lean_object* v_res_1204_; 
v_res_1204_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__2___redArg(v_as_x27_1199_, v_b_1200_, v___y_1201_, v___y_1202_);
lean_dec(v___y_1202_);
lean_dec_ref(v___y_1201_);
lean_dec(v_as_x27_1199_);
return v_res_1204_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__21(lean_object* v_opts_1205_, lean_object* v_opt_1206_){
_start:
{
lean_object* v_name_1207_; lean_object* v_defValue_1208_; lean_object* v_map_1209_; lean_object* v___x_1210_; 
v_name_1207_ = lean_ctor_get(v_opt_1206_, 0);
v_defValue_1208_ = lean_ctor_get(v_opt_1206_, 1);
v_map_1209_ = lean_ctor_get(v_opts_1205_, 0);
v___x_1210_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1209_, v_name_1207_);
if (lean_obj_tag(v___x_1210_) == 0)
{
uint8_t v___x_1211_; 
v___x_1211_ = lean_unbox(v_defValue_1208_);
return v___x_1211_;
}
else
{
lean_object* v_val_1212_; 
v_val_1212_ = lean_ctor_get(v___x_1210_, 0);
lean_inc(v_val_1212_);
lean_dec_ref_known(v___x_1210_, 1);
if (lean_obj_tag(v_val_1212_) == 1)
{
uint8_t v_v_1213_; 
v_v_1213_ = lean_ctor_get_uint8(v_val_1212_, 0);
lean_dec_ref_known(v_val_1212_, 0);
return v_v_1213_;
}
else
{
uint8_t v___x_1214_; 
lean_dec(v_val_1212_);
v___x_1214_ = lean_unbox(v_defValue_1208_);
return v___x_1214_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__21___boxed(lean_object* v_opts_1215_, lean_object* v_opt_1216_){
_start:
{
uint8_t v_res_1217_; lean_object* v_r_1218_; 
v_res_1217_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__21(v_opts_1215_, v_opt_1216_);
lean_dec_ref(v_opt_1216_);
lean_dec_ref(v_opts_1215_);
v_r_1218_ = lean_box(v_res_1217_);
return v_r_1218_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22___closed__0(void){
_start:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; 
v___x_1219_ = lean_box(1);
v___x_1220_ = l_Lean_MessageData_ofFormat(v___x_1219_);
return v___x_1220_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22___closed__3(void){
_start:
{
lean_object* v___x_1224_; lean_object* v___x_1225_; 
v___x_1224_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22___closed__2));
v___x_1225_ = l_Lean_MessageData_ofFormat(v___x_1224_);
return v___x_1225_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22(lean_object* v_x_1226_, lean_object* v_x_1227_){
_start:
{
if (lean_obj_tag(v_x_1227_) == 0)
{
return v_x_1226_;
}
else
{
lean_object* v_head_1228_; lean_object* v_tail_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1251_; 
v_head_1228_ = lean_ctor_get(v_x_1227_, 0);
v_tail_1229_ = lean_ctor_get(v_x_1227_, 1);
v_isSharedCheck_1251_ = !lean_is_exclusive(v_x_1227_);
if (v_isSharedCheck_1251_ == 0)
{
v___x_1231_ = v_x_1227_;
v_isShared_1232_ = v_isSharedCheck_1251_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_tail_1229_);
lean_inc(v_head_1228_);
lean_dec(v_x_1227_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1251_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
lean_object* v_before_1233_; lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1249_; 
v_before_1233_ = lean_ctor_get(v_head_1228_, 0);
v_isSharedCheck_1249_ = !lean_is_exclusive(v_head_1228_);
if (v_isSharedCheck_1249_ == 0)
{
lean_object* v_unused_1250_; 
v_unused_1250_ = lean_ctor_get(v_head_1228_, 1);
lean_dec(v_unused_1250_);
v___x_1235_ = v_head_1228_;
v_isShared_1236_ = v_isSharedCheck_1249_;
goto v_resetjp_1234_;
}
else
{
lean_inc(v_before_1233_);
lean_dec(v_head_1228_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1249_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
lean_object* v___x_1237_; lean_object* v___x_1239_; 
v___x_1237_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22___closed__0);
if (v_isShared_1236_ == 0)
{
lean_ctor_set_tag(v___x_1235_, 7);
lean_ctor_set(v___x_1235_, 1, v___x_1237_);
lean_ctor_set(v___x_1235_, 0, v_x_1226_);
v___x_1239_ = v___x_1235_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v_x_1226_);
lean_ctor_set(v_reuseFailAlloc_1248_, 1, v___x_1237_);
v___x_1239_ = v_reuseFailAlloc_1248_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
lean_object* v___x_1240_; lean_object* v___x_1242_; 
v___x_1240_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22___closed__3);
if (v_isShared_1232_ == 0)
{
lean_ctor_set_tag(v___x_1231_, 7);
lean_ctor_set(v___x_1231_, 1, v___x_1240_);
lean_ctor_set(v___x_1231_, 0, v___x_1239_);
v___x_1242_ = v___x_1231_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v___x_1239_);
lean_ctor_set(v_reuseFailAlloc_1247_, 1, v___x_1240_);
v___x_1242_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; 
v___x_1243_ = l_Lean_MessageData_ofSyntax(v_before_1233_);
v___x_1244_ = l_Lean_indentD(v___x_1243_);
v___x_1245_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1245_, 0, v___x_1242_);
lean_ctor_set(v___x_1245_, 1, v___x_1244_);
v_x_1226_ = v___x_1245_;
v_x_1227_ = v_tail_1229_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17___redArg___closed__2(void){
_start:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; 
v___x_1255_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17___redArg___closed__1));
v___x_1256_ = l_Lean_MessageData_ofFormat(v___x_1255_);
return v___x_1256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17___redArg(lean_object* v_msgData_1257_, lean_object* v_macroStack_1258_, lean_object* v___y_1259_){
_start:
{
lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v_scopes_1263_; lean_object* v___x_1264_; lean_object* v_opts_1265_; lean_object* v___x_1266_; uint8_t v___x_1267_; 
v___x_1261_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1262_ = lean_st_ref_get(v___y_1259_);
v_scopes_1263_ = lean_ctor_get(v___x_1262_, 2);
lean_inc(v_scopes_1263_);
lean_dec(v___x_1262_);
v___x_1264_ = l_List_head_x21___redArg(v___x_1261_, v_scopes_1263_);
lean_dec(v_scopes_1263_);
v_opts_1265_ = lean_ctor_get(v___x_1264_, 1);
lean_inc_ref(v_opts_1265_);
lean_dec(v___x_1264_);
v___x_1266_ = l_Lean_Elab_pp_macroStack;
v___x_1267_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__21(v_opts_1265_, v___x_1266_);
lean_dec_ref(v_opts_1265_);
if (v___x_1267_ == 0)
{
lean_object* v___x_1268_; 
lean_dec(v_macroStack_1258_);
v___x_1268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1268_, 0, v_msgData_1257_);
return v___x_1268_;
}
else
{
if (lean_obj_tag(v_macroStack_1258_) == 0)
{
lean_object* v___x_1269_; 
v___x_1269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1269_, 0, v_msgData_1257_);
return v___x_1269_;
}
else
{
lean_object* v_head_1270_; lean_object* v_after_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1286_; 
v_head_1270_ = lean_ctor_get(v_macroStack_1258_, 0);
lean_inc(v_head_1270_);
v_after_1271_ = lean_ctor_get(v_head_1270_, 1);
v_isSharedCheck_1286_ = !lean_is_exclusive(v_head_1270_);
if (v_isSharedCheck_1286_ == 0)
{
lean_object* v_unused_1287_; 
v_unused_1287_ = lean_ctor_get(v_head_1270_, 0);
lean_dec(v_unused_1287_);
v___x_1273_ = v_head_1270_;
v_isShared_1274_ = v_isSharedCheck_1286_;
goto v_resetjp_1272_;
}
else
{
lean_inc(v_after_1271_);
lean_dec(v_head_1270_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1286_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
lean_object* v___x_1275_; lean_object* v___x_1277_; 
v___x_1275_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22___closed__0);
if (v_isShared_1274_ == 0)
{
lean_ctor_set_tag(v___x_1273_, 7);
lean_ctor_set(v___x_1273_, 1, v___x_1275_);
lean_ctor_set(v___x_1273_, 0, v_msgData_1257_);
v___x_1277_ = v___x_1273_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1285_; 
v_reuseFailAlloc_1285_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1285_, 0, v_msgData_1257_);
lean_ctor_set(v_reuseFailAlloc_1285_, 1, v___x_1275_);
v___x_1277_ = v_reuseFailAlloc_1285_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v_msgData_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; 
v___x_1278_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17___redArg___closed__2);
v___x_1279_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1279_, 0, v___x_1277_);
lean_ctor_set(v___x_1279_, 1, v___x_1278_);
v___x_1280_ = l_Lean_MessageData_ofSyntax(v_after_1271_);
v___x_1281_ = l_Lean_indentD(v___x_1280_);
v_msgData_1282_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1282_, 0, v___x_1279_);
lean_ctor_set(v_msgData_1282_, 1, v___x_1281_);
v___x_1283_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17_spec__22(v_msgData_1282_, v_macroStack_1258_);
v___x_1284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1284_, 0, v___x_1283_);
return v___x_1284_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17___redArg___boxed(lean_object* v_msgData_1288_, lean_object* v_macroStack_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_){
_start:
{
lean_object* v_res_1292_; 
v_res_1292_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17___redArg(v_msgData_1288_, v_macroStack_1289_, v___y_1290_);
lean_dec(v___y_1290_);
return v_res_1292_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9___redArg(lean_object* v_msg_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_){
_start:
{
lean_object* v___x_1297_; 
v___x_1297_ = l_Lean_Elab_Command_getRef___redArg(v___y_1294_);
if (lean_obj_tag(v___x_1297_) == 0)
{
lean_object* v_a_1298_; lean_object* v_macroStack_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v_a_1302_; lean_object* v___x_1303_; lean_object* v_a_1304_; lean_object* v___x_1306_; uint8_t v_isShared_1307_; uint8_t v_isSharedCheck_1312_; 
v_a_1298_ = lean_ctor_get(v___x_1297_, 0);
lean_inc(v_a_1298_);
lean_dec_ref_known(v___x_1297_, 1);
v_macroStack_1299_ = lean_ctor_get(v___y_1294_, 4);
v___x_1300_ = l_Lean_Elab_getBetterRef(v_a_1298_, v_macroStack_1299_);
lean_dec(v_a_1298_);
v___x_1301_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg(v_msg_1293_, v___y_1295_);
v_a_1302_ = lean_ctor_get(v___x_1301_, 0);
lean_inc(v_a_1302_);
lean_dec_ref(v___x_1301_);
lean_inc(v_macroStack_1299_);
v___x_1303_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17___redArg(v_a_1302_, v_macroStack_1299_, v___y_1295_);
v_a_1304_ = lean_ctor_get(v___x_1303_, 0);
v_isSharedCheck_1312_ = !lean_is_exclusive(v___x_1303_);
if (v_isSharedCheck_1312_ == 0)
{
v___x_1306_ = v___x_1303_;
v_isShared_1307_ = v_isSharedCheck_1312_;
goto v_resetjp_1305_;
}
else
{
lean_inc(v_a_1304_);
lean_dec(v___x_1303_);
v___x_1306_ = lean_box(0);
v_isShared_1307_ = v_isSharedCheck_1312_;
goto v_resetjp_1305_;
}
v_resetjp_1305_:
{
lean_object* v___x_1308_; lean_object* v___x_1310_; 
v___x_1308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1300_);
lean_ctor_set(v___x_1308_, 1, v_a_1304_);
if (v_isShared_1307_ == 0)
{
lean_ctor_set_tag(v___x_1306_, 1);
lean_ctor_set(v___x_1306_, 0, v___x_1308_);
v___x_1310_ = v___x_1306_;
goto v_reusejp_1309_;
}
else
{
lean_object* v_reuseFailAlloc_1311_; 
v_reuseFailAlloc_1311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1311_, 0, v___x_1308_);
v___x_1310_ = v_reuseFailAlloc_1311_;
goto v_reusejp_1309_;
}
v_reusejp_1309_:
{
return v___x_1310_;
}
}
}
else
{
lean_object* v_a_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1320_; 
lean_dec_ref(v_msg_1293_);
v_a_1313_ = lean_ctor_get(v___x_1297_, 0);
v_isSharedCheck_1320_ = !lean_is_exclusive(v___x_1297_);
if (v_isSharedCheck_1320_ == 0)
{
v___x_1315_ = v___x_1297_;
v_isShared_1316_ = v_isSharedCheck_1320_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_a_1313_);
lean_dec(v___x_1297_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1320_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v___x_1318_; 
if (v_isShared_1316_ == 0)
{
v___x_1318_ = v___x_1315_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v_a_1313_);
v___x_1318_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
return v___x_1318_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9___redArg___boxed(lean_object* v_msg_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_){
_start:
{
lean_object* v_res_1325_; 
v_res_1325_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9___redArg(v_msg_1321_, v___y_1322_, v___y_1323_);
lean_dec(v___y_1323_);
lean_dec_ref(v___y_1322_);
return v_res_1325_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4___redArg(lean_object* v_ref_1326_, lean_object* v_msg_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_){
_start:
{
lean_object* v___x_1331_; 
v___x_1331_ = l_Lean_Elab_Command_getRef___redArg(v___y_1328_);
if (lean_obj_tag(v___x_1331_) == 0)
{
lean_object* v_a_1332_; lean_object* v_fileName_1333_; lean_object* v_fileMap_1334_; lean_object* v_currRecDepth_1335_; lean_object* v_cmdPos_1336_; lean_object* v_macroStack_1337_; lean_object* v_quotContext_x3f_1338_; lean_object* v_currMacroScope_1339_; lean_object* v_snap_x3f_1340_; lean_object* v_cancelTk_x3f_1341_; uint8_t v_suppressElabErrors_1342_; lean_object* v_ref_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; 
v_a_1332_ = lean_ctor_get(v___x_1331_, 0);
lean_inc(v_a_1332_);
lean_dec_ref_known(v___x_1331_, 1);
v_fileName_1333_ = lean_ctor_get(v___y_1328_, 0);
v_fileMap_1334_ = lean_ctor_get(v___y_1328_, 1);
v_currRecDepth_1335_ = lean_ctor_get(v___y_1328_, 2);
v_cmdPos_1336_ = lean_ctor_get(v___y_1328_, 3);
v_macroStack_1337_ = lean_ctor_get(v___y_1328_, 4);
v_quotContext_x3f_1338_ = lean_ctor_get(v___y_1328_, 5);
v_currMacroScope_1339_ = lean_ctor_get(v___y_1328_, 6);
v_snap_x3f_1340_ = lean_ctor_get(v___y_1328_, 8);
v_cancelTk_x3f_1341_ = lean_ctor_get(v___y_1328_, 9);
v_suppressElabErrors_1342_ = lean_ctor_get_uint8(v___y_1328_, sizeof(void*)*10);
v_ref_1343_ = l_Lean_replaceRef(v_ref_1326_, v_a_1332_);
lean_dec(v_a_1332_);
lean_inc(v_cancelTk_x3f_1341_);
lean_inc(v_snap_x3f_1340_);
lean_inc(v_currMacroScope_1339_);
lean_inc(v_quotContext_x3f_1338_);
lean_inc(v_macroStack_1337_);
lean_inc(v_cmdPos_1336_);
lean_inc(v_currRecDepth_1335_);
lean_inc_ref(v_fileMap_1334_);
lean_inc_ref(v_fileName_1333_);
v___x_1344_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_1344_, 0, v_fileName_1333_);
lean_ctor_set(v___x_1344_, 1, v_fileMap_1334_);
lean_ctor_set(v___x_1344_, 2, v_currRecDepth_1335_);
lean_ctor_set(v___x_1344_, 3, v_cmdPos_1336_);
lean_ctor_set(v___x_1344_, 4, v_macroStack_1337_);
lean_ctor_set(v___x_1344_, 5, v_quotContext_x3f_1338_);
lean_ctor_set(v___x_1344_, 6, v_currMacroScope_1339_);
lean_ctor_set(v___x_1344_, 7, v_ref_1343_);
lean_ctor_set(v___x_1344_, 8, v_snap_x3f_1340_);
lean_ctor_set(v___x_1344_, 9, v_cancelTk_x3f_1341_);
lean_ctor_set_uint8(v___x_1344_, sizeof(void*)*10, v_suppressElabErrors_1342_);
v___x_1345_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9___redArg(v_msg_1327_, v___x_1344_, v___y_1329_);
lean_dec_ref_known(v___x_1344_, 10);
return v___x_1345_;
}
else
{
lean_object* v_a_1346_; lean_object* v___x_1348_; uint8_t v_isShared_1349_; uint8_t v_isSharedCheck_1353_; 
lean_dec_ref(v_msg_1327_);
v_a_1346_ = lean_ctor_get(v___x_1331_, 0);
v_isSharedCheck_1353_ = !lean_is_exclusive(v___x_1331_);
if (v_isSharedCheck_1353_ == 0)
{
v___x_1348_ = v___x_1331_;
v_isShared_1349_ = v_isSharedCheck_1353_;
goto v_resetjp_1347_;
}
else
{
lean_inc(v_a_1346_);
lean_dec(v___x_1331_);
v___x_1348_ = lean_box(0);
v_isShared_1349_ = v_isSharedCheck_1353_;
goto v_resetjp_1347_;
}
v_resetjp_1347_:
{
lean_object* v___x_1351_; 
if (v_isShared_1349_ == 0)
{
v___x_1351_ = v___x_1348_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v_a_1346_);
v___x_1351_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
return v___x_1351_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4___redArg___boxed(lean_object* v_ref_1354_, lean_object* v_msg_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_){
_start:
{
lean_object* v_res_1359_; 
v_res_1359_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4___redArg(v_ref_1354_, v_msg_1355_, v___y_1356_, v___y_1357_);
lean_dec(v___y_1357_);
lean_dec_ref(v___y_1356_);
lean_dec(v_ref_1354_);
return v_res_1359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__0(lean_object* v_env_1360_, lean_object* v_declName_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_){
_start:
{
uint8_t v___x_1364_; lean_object* v_env_1365_; lean_object* v___x_1366_; uint8_t v___x_1367_; uint8_t v___x_1368_; 
v___x_1364_ = 0;
v_env_1365_ = l_Lean_Environment_setExporting(v_env_1360_, v___x_1364_);
lean_inc(v_declName_1361_);
v___x_1366_ = l_Lean_mkPrivateName(v_env_1365_, v_declName_1361_);
v___x_1367_ = 1;
lean_inc_ref(v_env_1365_);
v___x_1368_ = l_Lean_Environment_contains(v_env_1365_, v___x_1366_, v___x_1367_);
if (v___x_1368_ == 0)
{
lean_object* v___x_1369_; uint8_t v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; 
v___x_1369_ = l_Lean_privateToUserName(v_declName_1361_);
v___x_1370_ = l_Lean_Environment_contains(v_env_1365_, v___x_1369_, v___x_1367_);
v___x_1371_ = lean_box(v___x_1370_);
v___x_1372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1372_, 0, v___x_1371_);
lean_ctor_set(v___x_1372_, 1, v___y_1363_);
return v___x_1372_;
}
else
{
lean_object* v___x_1373_; lean_object* v___x_1374_; 
lean_dec_ref(v_env_1365_);
lean_dec(v_declName_1361_);
v___x_1373_ = lean_box(v___x_1368_);
v___x_1374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1374_, 0, v___x_1373_);
lean_ctor_set(v___x_1374_, 1, v___y_1363_);
return v___x_1374_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__0___boxed(lean_object* v_env_1375_, lean_object* v_declName_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_){
_start:
{
lean_object* v_res_1379_; 
v_res_1379_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__0(v_env_1375_, v_declName_1376_, v___y_1377_, v___y_1378_);
lean_dec_ref(v___y_1377_);
return v_res_1379_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__3(lean_object* v_as_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_){
_start:
{
if (lean_obj_tag(v_as_1380_) == 0)
{
lean_object* v___x_1384_; lean_object* v___x_1385_; 
v___x_1384_ = lean_box(0);
v___x_1385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1385_, 0, v___x_1384_);
return v___x_1385_;
}
else
{
lean_object* v_head_1386_; lean_object* v_tail_1387_; lean_object* v_fst_1388_; lean_object* v_snd_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v_scopes_1394_; lean_object* v___x_1395_; lean_object* v_opts_1396_; uint8_t v_hasTrace_1397_; 
v_head_1386_ = lean_ctor_get(v_as_1380_, 0);
lean_inc(v_head_1386_);
v_tail_1387_ = lean_ctor_get(v_as_1380_, 1);
lean_inc(v_tail_1387_);
lean_dec_ref_known(v_as_1380_, 2);
v_fst_1388_ = lean_ctor_get(v_head_1386_, 0);
lean_inc(v_fst_1388_);
v_snd_1389_ = lean_ctor_get(v_head_1386_, 1);
lean_inc(v_snd_1389_);
lean_dec(v_head_1386_);
v___x_1390_ = l_Lean_inheritedTraceOptions;
v___x_1391_ = lean_st_ref_get(v___x_1390_);
v___x_1392_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1393_ = lean_st_ref_get(v___y_1382_);
v_scopes_1394_ = lean_ctor_get(v___x_1393_, 2);
lean_inc(v_scopes_1394_);
lean_dec(v___x_1393_);
v___x_1395_ = l_List_head_x21___redArg(v___x_1392_, v_scopes_1394_);
lean_dec(v_scopes_1394_);
v_opts_1396_ = lean_ctor_get(v___x_1395_, 1);
lean_inc_ref(v_opts_1396_);
lean_dec(v___x_1395_);
v_hasTrace_1397_ = lean_ctor_get_uint8(v_opts_1396_, sizeof(void*)*1);
if (v_hasTrace_1397_ == 0)
{
lean_dec_ref(v_opts_1396_);
lean_dec(v___x_1391_);
lean_dec(v_snd_1389_);
lean_dec(v_fst_1388_);
v_as_1380_ = v_tail_1387_;
goto _start;
}
else
{
lean_object* v___x_1399_; lean_object* v___x_1400_; uint8_t v___x_1401_; 
v___x_1399_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__9));
lean_inc(v_fst_1388_);
v___x_1400_ = l_Lean_Name_append(v___x_1399_, v_fst_1388_);
v___x_1401_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1391_, v_opts_1396_, v___x_1400_);
lean_dec(v___x_1400_);
lean_dec_ref(v_opts_1396_);
lean_dec(v___x_1391_);
if (v___x_1401_ == 0)
{
lean_dec(v_snd_1389_);
lean_dec(v_fst_1388_);
v_as_1380_ = v_tail_1387_;
goto _start;
}
else
{
lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; 
v___x_1403_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1403_, 0, v_snd_1389_);
v___x_1404_ = l_Lean_MessageData_ofFormat(v___x_1403_);
v___x_1405_ = l_Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1(v_fst_1388_, v___x_1404_, v___y_1381_, v___y_1382_);
if (lean_obj_tag(v___x_1405_) == 0)
{
lean_dec_ref_known(v___x_1405_, 1);
v_as_1380_ = v_tail_1387_;
goto _start;
}
else
{
lean_dec(v_tail_1387_);
return v___x_1405_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__3___boxed(lean_object* v_as_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_){
_start:
{
lean_object* v_res_1411_; 
v_res_1411_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__3(v_as_1407_, v___y_1408_, v___y_1409_);
lean_dec(v___y_1409_);
lean_dec_ref(v___y_1408_);
return v_res_1411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__4(lean_object* v_env_1412_, lean_object* v_opts_1413_, lean_object* v_currNamespace_1414_, lean_object* v_openDecls_1415_, lean_object* v_n_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_){
_start:
{
lean_object* v___x_1419_; lean_object* v___x_1420_; 
v___x_1419_ = l_Lean_ResolveName_resolveGlobalName(v_env_1412_, v_opts_1413_, v_currNamespace_1414_, v_openDecls_1415_, v_n_1416_);
v___x_1420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1420_, 0, v___x_1419_);
lean_ctor_set(v___x_1420_, 1, v___y_1418_);
return v___x_1420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__4___boxed(lean_object* v_env_1421_, lean_object* v_opts_1422_, lean_object* v_currNamespace_1423_, lean_object* v_openDecls_1424_, lean_object* v_n_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_){
_start:
{
lean_object* v_res_1428_; 
v_res_1428_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__4(v_env_1421_, v_opts_1422_, v_currNamespace_1423_, v_openDecls_1424_, v_n_1425_, v___y_1426_, v___y_1427_);
lean_dec_ref(v___y_1426_);
lean_dec_ref(v_opts_1422_);
return v_res_1428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg(lean_object* v_x_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_){
_start:
{
lean_object* v___x_1434_; lean_object* v_env_1435_; lean_object* v___f_1436_; lean_object* v___f_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v_scopes_1440_; lean_object* v___x_1441_; lean_object* v_opts_1442_; lean_object* v___x_1443_; 
v___x_1434_ = lean_st_ref_get(v___y_1432_);
v_env_1435_ = lean_ctor_get(v___x_1434_, 0);
lean_inc_ref_n(v_env_1435_, 3);
lean_dec(v___x_1434_);
v___f_1436_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1436_, 0, v_env_1435_);
v___f_1437_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_1437_, 0, v_env_1435_);
v___x_1438_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1439_ = lean_st_ref_get(v___y_1432_);
v_scopes_1440_ = lean_ctor_get(v___x_1439_, 2);
lean_inc(v_scopes_1440_);
lean_dec(v___x_1439_);
v___x_1441_ = l_List_head_x21___redArg(v___x_1438_, v_scopes_1440_);
lean_dec(v_scopes_1440_);
v_opts_1442_ = lean_ctor_get(v___x_1441_, 1);
lean_inc_ref(v_opts_1442_);
lean_dec(v___x_1441_);
v___x_1443_ = l_Lean_Elab_Command_getScope___redArg(v___y_1432_);
if (lean_obj_tag(v___x_1443_) == 0)
{
lean_object* v_a_1444_; lean_object* v_currNamespace_1445_; lean_object* v___f_1446_; lean_object* v___x_1447_; 
v_a_1444_ = lean_ctor_get(v___x_1443_, 0);
lean_inc(v_a_1444_);
lean_dec_ref_known(v___x_1443_, 1);
v_currNamespace_1445_ = lean_ctor_get(v_a_1444_, 2);
lean_inc_n(v_currNamespace_1445_, 2);
lean_dec(v_a_1444_);
v___f_1446_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1446_, 0, v_currNamespace_1445_);
v___x_1447_ = l_Lean_Elab_Command_getScope___redArg(v___y_1432_);
if (lean_obj_tag(v___x_1447_) == 0)
{
lean_object* v_a_1448_; lean_object* v_openDecls_1449_; lean_object* v___f_1450_; lean_object* v___f_1451_; lean_object* v_methods_1452_; lean_object* v___x_1453_; 
v_a_1448_ = lean_ctor_get(v___x_1447_, 0);
lean_inc(v_a_1448_);
lean_dec_ref_known(v___x_1447_, 1);
v_openDecls_1449_ = lean_ctor_get(v_a_1448_, 3);
lean_inc_n(v_openDecls_1449_, 2);
lean_dec(v_a_1448_);
lean_inc(v_currNamespace_1445_);
lean_inc_ref(v_env_1435_);
v___f_1450_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__3___boxed), 6, 3);
lean_closure_set(v___f_1450_, 0, v_env_1435_);
lean_closure_set(v___f_1450_, 1, v_currNamespace_1445_);
lean_closure_set(v___f_1450_, 2, v_openDecls_1449_);
v___f_1451_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___lam__4___boxed), 7, 4);
lean_closure_set(v___f_1451_, 0, v_env_1435_);
lean_closure_set(v___f_1451_, 1, v_opts_1442_);
lean_closure_set(v___f_1451_, 2, v_currNamespace_1445_);
lean_closure_set(v___f_1451_, 3, v_openDecls_1449_);
v_methods_1452_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_methods_1452_, 0, v___f_1437_);
lean_ctor_set(v_methods_1452_, 1, v___f_1446_);
lean_ctor_set(v_methods_1452_, 2, v___f_1436_);
lean_ctor_set(v_methods_1452_, 3, v___f_1450_);
lean_ctor_set(v_methods_1452_, 4, v___f_1451_);
v___x_1453_ = l_Lean_Elab_Command_getRef___redArg(v___y_1431_);
if (lean_obj_tag(v___x_1453_) == 0)
{
lean_object* v_a_1454_; lean_object* v___x_1455_; 
v_a_1454_ = lean_ctor_get(v___x_1453_, 0);
lean_inc(v_a_1454_);
lean_dec_ref_known(v___x_1453_, 1);
v___x_1455_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_1431_);
if (lean_obj_tag(v___x_1455_) == 0)
{
lean_object* v_a_1456_; lean_object* v_currRecDepth_1457_; lean_object* v_quotContext_x3f_1458_; lean_object* v_a_1460_; 
v_a_1456_ = lean_ctor_get(v___x_1455_, 0);
lean_inc(v_a_1456_);
lean_dec_ref_known(v___x_1455_, 1);
v_currRecDepth_1457_ = lean_ctor_get(v___y_1431_, 2);
v_quotContext_x3f_1458_ = lean_ctor_get(v___y_1431_, 5);
if (lean_obj_tag(v_quotContext_x3f_1458_) == 0)
{
lean_object* v___x_1534_; lean_object* v_a_1535_; 
v___x_1534_ = l_Lean_getMainModule___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__2___redArg(v___y_1432_);
v_a_1535_ = lean_ctor_get(v___x_1534_, 0);
lean_inc(v_a_1535_);
lean_dec_ref(v___x_1534_);
v_a_1460_ = v_a_1535_;
goto v___jp_1459_;
}
else
{
lean_object* v_val_1536_; 
v_val_1536_ = lean_ctor_get(v_quotContext_x3f_1458_, 0);
lean_inc(v_val_1536_);
v_a_1460_ = v_val_1536_;
goto v___jp_1459_;
}
v___jp_1459_:
{
lean_object* v___x_1461_; lean_object* v_maxRecDepth_1462_; lean_object* v___x_1463_; lean_object* v_nextMacroScope_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; 
v___x_1461_ = lean_st_ref_get(v___y_1432_);
v_maxRecDepth_1462_ = lean_ctor_get(v___x_1461_, 5);
lean_inc(v_maxRecDepth_1462_);
lean_dec(v___x_1461_);
v___x_1463_ = lean_st_ref_get(v___y_1432_);
v_nextMacroScope_1464_ = lean_ctor_get(v___x_1463_, 4);
lean_inc(v_nextMacroScope_1464_);
lean_dec(v___x_1463_);
lean_inc(v_currRecDepth_1457_);
v___x_1465_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1465_, 0, v_methods_1452_);
lean_ctor_set(v___x_1465_, 1, v_a_1460_);
lean_ctor_set(v___x_1465_, 2, v_a_1456_);
lean_ctor_set(v___x_1465_, 3, v_currRecDepth_1457_);
lean_ctor_set(v___x_1465_, 4, v_maxRecDepth_1462_);
lean_ctor_set(v___x_1465_, 5, v_a_1454_);
v___x_1466_ = lean_box(0);
v___x_1467_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1467_, 0, v_nextMacroScope_1464_);
lean_ctor_set(v___x_1467_, 1, v___x_1466_);
lean_ctor_set(v___x_1467_, 2, v___x_1466_);
v___x_1468_ = lean_apply_2(v_x_1430_, v___x_1465_, v___x_1467_);
if (lean_obj_tag(v___x_1468_) == 0)
{
lean_object* v_a_1469_; lean_object* v_a_1470_; lean_object* v_macroScope_1471_; lean_object* v_traceMsgs_1472_; lean_object* v_expandedMacroDecls_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; 
v_a_1469_ = lean_ctor_get(v___x_1468_, 1);
lean_inc(v_a_1469_);
v_a_1470_ = lean_ctor_get(v___x_1468_, 0);
lean_inc(v_a_1470_);
lean_dec_ref_known(v___x_1468_, 2);
v_macroScope_1471_ = lean_ctor_get(v_a_1469_, 0);
lean_inc(v_macroScope_1471_);
v_traceMsgs_1472_ = lean_ctor_get(v_a_1469_, 1);
lean_inc(v_traceMsgs_1472_);
v_expandedMacroDecls_1473_ = lean_ctor_get(v_a_1469_, 2);
lean_inc(v_expandedMacroDecls_1473_);
lean_dec(v_a_1469_);
v___x_1474_ = lean_box(0);
v___x_1475_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__2___redArg(v_expandedMacroDecls_1473_, v___x_1474_, v___y_1431_, v___y_1432_);
lean_dec(v_expandedMacroDecls_1473_);
if (lean_obj_tag(v___x_1475_) == 0)
{
lean_object* v___x_1476_; lean_object* v_env_1477_; lean_object* v_messages_1478_; lean_object* v_scopes_1479_; lean_object* v_usedQuotCtxts_1480_; lean_object* v_maxRecDepth_1481_; lean_object* v_ngen_1482_; lean_object* v_auxDeclNGen_1483_; lean_object* v_infoState_1484_; lean_object* v_traceState_1485_; lean_object* v_snapshotTasks_1486_; lean_object* v_prevLinterStates_1487_; lean_object* v_codeQualityEntryTasks_1488_; lean_object* v___x_1490_; uint8_t v_isShared_1491_; uint8_t v_isSharedCheck_1514_; 
lean_dec_ref_known(v___x_1475_, 1);
v___x_1476_ = lean_st_ref_take(v___y_1432_);
v_env_1477_ = lean_ctor_get(v___x_1476_, 0);
v_messages_1478_ = lean_ctor_get(v___x_1476_, 1);
v_scopes_1479_ = lean_ctor_get(v___x_1476_, 2);
v_usedQuotCtxts_1480_ = lean_ctor_get(v___x_1476_, 3);
v_maxRecDepth_1481_ = lean_ctor_get(v___x_1476_, 5);
v_ngen_1482_ = lean_ctor_get(v___x_1476_, 6);
v_auxDeclNGen_1483_ = lean_ctor_get(v___x_1476_, 7);
v_infoState_1484_ = lean_ctor_get(v___x_1476_, 8);
v_traceState_1485_ = lean_ctor_get(v___x_1476_, 9);
v_snapshotTasks_1486_ = lean_ctor_get(v___x_1476_, 10);
v_prevLinterStates_1487_ = lean_ctor_get(v___x_1476_, 11);
v_codeQualityEntryTasks_1488_ = lean_ctor_get(v___x_1476_, 12);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1476_);
if (v_isSharedCheck_1514_ == 0)
{
lean_object* v_unused_1515_; 
v_unused_1515_ = lean_ctor_get(v___x_1476_, 4);
lean_dec(v_unused_1515_);
v___x_1490_ = v___x_1476_;
v_isShared_1491_ = v_isSharedCheck_1514_;
goto v_resetjp_1489_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1488_);
lean_inc(v_prevLinterStates_1487_);
lean_inc(v_snapshotTasks_1486_);
lean_inc(v_traceState_1485_);
lean_inc(v_infoState_1484_);
lean_inc(v_auxDeclNGen_1483_);
lean_inc(v_ngen_1482_);
lean_inc(v_maxRecDepth_1481_);
lean_inc(v_usedQuotCtxts_1480_);
lean_inc(v_scopes_1479_);
lean_inc(v_messages_1478_);
lean_inc(v_env_1477_);
lean_dec(v___x_1476_);
v___x_1490_ = lean_box(0);
v_isShared_1491_ = v_isSharedCheck_1514_;
goto v_resetjp_1489_;
}
v_resetjp_1489_:
{
lean_object* v___x_1493_; 
if (v_isShared_1491_ == 0)
{
lean_ctor_set(v___x_1490_, 4, v_macroScope_1471_);
v___x_1493_ = v___x_1490_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v_env_1477_);
lean_ctor_set(v_reuseFailAlloc_1513_, 1, v_messages_1478_);
lean_ctor_set(v_reuseFailAlloc_1513_, 2, v_scopes_1479_);
lean_ctor_set(v_reuseFailAlloc_1513_, 3, v_usedQuotCtxts_1480_);
lean_ctor_set(v_reuseFailAlloc_1513_, 4, v_macroScope_1471_);
lean_ctor_set(v_reuseFailAlloc_1513_, 5, v_maxRecDepth_1481_);
lean_ctor_set(v_reuseFailAlloc_1513_, 6, v_ngen_1482_);
lean_ctor_set(v_reuseFailAlloc_1513_, 7, v_auxDeclNGen_1483_);
lean_ctor_set(v_reuseFailAlloc_1513_, 8, v_infoState_1484_);
lean_ctor_set(v_reuseFailAlloc_1513_, 9, v_traceState_1485_);
lean_ctor_set(v_reuseFailAlloc_1513_, 10, v_snapshotTasks_1486_);
lean_ctor_set(v_reuseFailAlloc_1513_, 11, v_prevLinterStates_1487_);
lean_ctor_set(v_reuseFailAlloc_1513_, 12, v_codeQualityEntryTasks_1488_);
v___x_1493_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; 
v___x_1494_ = lean_st_ref_put(v___y_1432_, v___x_1493_);
v___x_1495_ = l_List_reverse___redArg(v_traceMsgs_1472_);
v___x_1496_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__3(v___x_1495_, v___y_1431_, v___y_1432_);
if (lean_obj_tag(v___x_1496_) == 0)
{
lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1503_; 
v_isSharedCheck_1503_ = !lean_is_exclusive(v___x_1496_);
if (v_isSharedCheck_1503_ == 0)
{
lean_object* v_unused_1504_; 
v_unused_1504_ = lean_ctor_get(v___x_1496_, 0);
lean_dec(v_unused_1504_);
v___x_1498_ = v___x_1496_;
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
else
{
lean_dec(v___x_1496_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v___x_1501_; 
if (v_isShared_1499_ == 0)
{
lean_ctor_set(v___x_1498_, 0, v_a_1470_);
v___x_1501_ = v___x_1498_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v_a_1470_);
v___x_1501_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
return v___x_1501_;
}
}
}
else
{
lean_object* v_a_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1512_; 
lean_dec(v_a_1470_);
v_a_1505_ = lean_ctor_get(v___x_1496_, 0);
v_isSharedCheck_1512_ = !lean_is_exclusive(v___x_1496_);
if (v_isSharedCheck_1512_ == 0)
{
v___x_1507_ = v___x_1496_;
v_isShared_1508_ = v_isSharedCheck_1512_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_a_1505_);
lean_dec(v___x_1496_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1512_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
lean_object* v___x_1510_; 
if (v_isShared_1508_ == 0)
{
v___x_1510_ = v___x_1507_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v_a_1505_);
v___x_1510_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
return v___x_1510_;
}
}
}
}
}
}
else
{
lean_object* v_a_1516_; lean_object* v___x_1518_; uint8_t v_isShared_1519_; uint8_t v_isSharedCheck_1523_; 
lean_dec(v_traceMsgs_1472_);
lean_dec(v_macroScope_1471_);
lean_dec(v_a_1470_);
v_a_1516_ = lean_ctor_get(v___x_1475_, 0);
v_isSharedCheck_1523_ = !lean_is_exclusive(v___x_1475_);
if (v_isSharedCheck_1523_ == 0)
{
v___x_1518_ = v___x_1475_;
v_isShared_1519_ = v_isSharedCheck_1523_;
goto v_resetjp_1517_;
}
else
{
lean_inc(v_a_1516_);
lean_dec(v___x_1475_);
v___x_1518_ = lean_box(0);
v_isShared_1519_ = v_isSharedCheck_1523_;
goto v_resetjp_1517_;
}
v_resetjp_1517_:
{
lean_object* v___x_1521_; 
if (v_isShared_1519_ == 0)
{
v___x_1521_ = v___x_1518_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1522_; 
v_reuseFailAlloc_1522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1522_, 0, v_a_1516_);
v___x_1521_ = v_reuseFailAlloc_1522_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
return v___x_1521_;
}
}
}
}
else
{
lean_object* v_a_1524_; 
v_a_1524_ = lean_ctor_get(v___x_1468_, 0);
lean_inc(v_a_1524_);
lean_dec_ref_known(v___x_1468_, 2);
if (lean_obj_tag(v_a_1524_) == 0)
{
lean_object* v_a_1525_; lean_object* v_a_1526_; lean_object* v___x_1527_; uint8_t v___x_1528_; 
v_a_1525_ = lean_ctor_get(v_a_1524_, 0);
lean_inc(v_a_1525_);
v_a_1526_ = lean_ctor_get(v_a_1524_, 1);
lean_inc_ref(v_a_1526_);
lean_dec_ref_known(v_a_1524_, 2);
v___x_1527_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___closed__0));
v___x_1528_ = lean_string_dec_eq(v_a_1526_, v___x_1527_);
if (v___x_1528_ == 0)
{
lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; 
v___x_1529_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1529_, 0, v_a_1526_);
v___x_1530_ = l_Lean_MessageData_ofFormat(v___x_1529_);
v___x_1531_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4___redArg(v_a_1525_, v___x_1530_, v___y_1431_, v___y_1432_);
lean_dec(v_a_1525_);
return v___x_1531_;
}
else
{
lean_object* v___x_1532_; 
lean_dec_ref(v_a_1526_);
v___x_1532_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg(v_a_1525_);
return v___x_1532_;
}
}
else
{
lean_object* v___x_1533_; 
v___x_1533_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__6___redArg();
return v___x_1533_;
}
}
}
}
else
{
lean_object* v_a_1537_; lean_object* v___x_1539_; uint8_t v_isShared_1540_; uint8_t v_isSharedCheck_1544_; 
lean_dec(v_a_1454_);
lean_dec_ref_known(v_methods_1452_, 5);
lean_dec_ref(v_x_1430_);
v_a_1537_ = lean_ctor_get(v___x_1455_, 0);
v_isSharedCheck_1544_ = !lean_is_exclusive(v___x_1455_);
if (v_isSharedCheck_1544_ == 0)
{
v___x_1539_ = v___x_1455_;
v_isShared_1540_ = v_isSharedCheck_1544_;
goto v_resetjp_1538_;
}
else
{
lean_inc(v_a_1537_);
lean_dec(v___x_1455_);
v___x_1539_ = lean_box(0);
v_isShared_1540_ = v_isSharedCheck_1544_;
goto v_resetjp_1538_;
}
v_resetjp_1538_:
{
lean_object* v___x_1542_; 
if (v_isShared_1540_ == 0)
{
v___x_1542_ = v___x_1539_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v_a_1537_);
v___x_1542_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
return v___x_1542_;
}
}
}
}
else
{
lean_object* v_a_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1552_; 
lean_dec_ref_known(v_methods_1452_, 5);
lean_dec_ref(v_x_1430_);
v_a_1545_ = lean_ctor_get(v___x_1453_, 0);
v_isSharedCheck_1552_ = !lean_is_exclusive(v___x_1453_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1547_ = v___x_1453_;
v_isShared_1548_ = v_isSharedCheck_1552_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_a_1545_);
lean_dec(v___x_1453_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1552_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
lean_object* v___x_1550_; 
if (v_isShared_1548_ == 0)
{
v___x_1550_ = v___x_1547_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v_a_1545_);
v___x_1550_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
return v___x_1550_;
}
}
}
}
else
{
lean_object* v_a_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1560_; 
lean_dec_ref(v___f_1446_);
lean_dec(v_currNamespace_1445_);
lean_dec_ref(v_opts_1442_);
lean_dec_ref(v___f_1437_);
lean_dec_ref(v___f_1436_);
lean_dec_ref(v_env_1435_);
lean_dec_ref(v_x_1430_);
v_a_1553_ = lean_ctor_get(v___x_1447_, 0);
v_isSharedCheck_1560_ = !lean_is_exclusive(v___x_1447_);
if (v_isSharedCheck_1560_ == 0)
{
v___x_1555_ = v___x_1447_;
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_a_1553_);
lean_dec(v___x_1447_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
lean_object* v___x_1558_; 
if (v_isShared_1556_ == 0)
{
v___x_1558_ = v___x_1555_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v_a_1553_);
v___x_1558_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
return v___x_1558_;
}
}
}
}
else
{
lean_object* v_a_1561_; lean_object* v___x_1563_; uint8_t v_isShared_1564_; uint8_t v_isSharedCheck_1568_; 
lean_dec_ref(v_opts_1442_);
lean_dec_ref(v___f_1437_);
lean_dec_ref(v___f_1436_);
lean_dec_ref(v_env_1435_);
lean_dec_ref(v_x_1430_);
v_a_1561_ = lean_ctor_get(v___x_1443_, 0);
v_isSharedCheck_1568_ = !lean_is_exclusive(v___x_1443_);
if (v_isSharedCheck_1568_ == 0)
{
v___x_1563_ = v___x_1443_;
v_isShared_1564_ = v_isSharedCheck_1568_;
goto v_resetjp_1562_;
}
else
{
lean_inc(v_a_1561_);
lean_dec(v___x_1443_);
v___x_1563_ = lean_box(0);
v_isShared_1564_ = v_isSharedCheck_1568_;
goto v_resetjp_1562_;
}
v_resetjp_1562_:
{
lean_object* v___x_1566_; 
if (v_isShared_1564_ == 0)
{
v___x_1566_ = v___x_1563_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1567_; 
v_reuseFailAlloc_1567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1567_, 0, v_a_1561_);
v___x_1566_ = v_reuseFailAlloc_1567_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
return v___x_1566_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg___boxed(lean_object* v_x_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_){
_start:
{
lean_object* v_res_1573_; 
v_res_1573_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg(v_x_1569_, v___y_1570_, v___y_1571_);
lean_dec(v___y_1571_);
lean_dec_ref(v___y_1570_);
return v_res_1573_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkDefViewOfInstance___closed__7(void){
_start:
{
lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; 
v___x_1588_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfInstance___closed__6));
v___x_1589_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3___closed__9));
v___x_1590_ = l_Lean_Name_append(v___x_1589_, v___x_1588_);
return v___x_1590_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkDefViewOfInstance___closed__9(void){
_start:
{
lean_object* v___x_1592_; lean_object* v___x_1593_; 
v___x_1592_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfInstance___closed__8));
v___x_1593_ = l_Lean_stringToMessageData(v___x_1592_);
return v___x_1593_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkDefViewOfInstance___closed__11(void){
_start:
{
lean_object* v___x_1595_; lean_object* v___x_1596_; 
v___x_1595_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfInstance___closed__10));
v___x_1596_ = l_Lean_stringToMessageData(v___x_1595_);
return v___x_1596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkDefViewOfInstance(lean_object* v_modifiers_1597_, lean_object* v_stx_1598_, lean_object* v_a_1599_, lean_object* v_a_1600_){
_start:
{
lean_object* v___x_1602_; lean_object* v___y_1604_; lean_object* v___y_1605_; lean_object* v___y_1606_; lean_object* v___y_1607_; lean_object* v___y_1608_; lean_object* v_declId_1609_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; 
v___x_1602_ = lean_unsigned_to_nat(0u);
v___x_1622_ = l_Lean_Syntax_getArg(v_stx_1598_, v___x_1602_);
v___x_1623_ = lean_alloc_closure((void*)(l_Lean_Elab_toAttributeKind___boxed), 3, 1);
lean_closure_set(v___x_1623_, 0, v___x_1622_);
v___x_1624_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg(v___x_1623_, v_a_1599_, v_a_1600_);
if (lean_obj_tag(v___x_1624_) == 0)
{
lean_object* v_a_1625_; lean_object* v___x_1626_; lean_object* v___y_1628_; lean_object* v___y_1629_; lean_object* v___y_1630_; lean_object* v___y_1631_; lean_object* v___y_1632_; lean_object* v___y_1633_; lean_object* v___y_1634_; lean_object* v___y_1635_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; 
v_a_1625_ = lean_ctor_get(v___x_1624_, 0);
lean_inc(v_a_1625_);
lean_dec_ref_known(v___x_1624_, 1);
v___x_1626_ = lean_unsigned_to_nat(2u);
v___x_1649_ = l_Lean_Syntax_getArg(v_stx_1598_, v___x_1626_);
v___x_1650_ = lean_alloc_closure((void*)(l_Lean_Elab_expandOptNamedPrio___boxed), 3, 1);
lean_closure_set(v___x_1650_, 0, v___x_1649_);
v___x_1651_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg(v___x_1650_, v_a_1599_, v_a_1600_);
if (lean_obj_tag(v___x_1651_) == 0)
{
lean_object* v_a_1652_; lean_object* v___x_1653_; 
v_a_1652_ = lean_ctor_get(v___x_1651_, 0);
lean_inc(v_a_1652_);
lean_dec_ref_known(v___x_1651_, 1);
v___x_1653_ = l_Lean_Elab_Command_getRef___redArg(v_a_1599_);
if (lean_obj_tag(v___x_1653_) == 0)
{
lean_object* v_a_1654_; uint8_t v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1791_; 
v_a_1654_ = lean_ctor_get(v___x_1653_, 0);
lean_inc(v_a_1654_);
lean_dec_ref_known(v___x_1653_, 1);
v___x_1655_ = 0;
v___x_1656_ = l_Lean_SourceInfo_fromRef(v_a_1654_, v___x_1655_);
lean_dec(v_a_1654_);
v___x_1791_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1599_);
if (lean_obj_tag(v___x_1791_) == 0)
{
lean_object* v_quotContext_x3f_1792_; 
lean_dec_ref_known(v___x_1791_, 1);
v_quotContext_x3f_1792_ = lean_ctor_get(v_a_1599_, 5);
if (lean_obj_tag(v_quotContext_x3f_1792_) == 0)
{
lean_object* v___x_1793_; 
v___x_1793_ = l_Lean_getMainModule___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__2___redArg(v_a_1600_);
lean_dec_ref(v___x_1793_);
goto v___jp_1657_;
}
else
{
goto v___jp_1657_;
}
}
else
{
lean_object* v_a_1794_; lean_object* v___x_1796_; uint8_t v_isShared_1797_; uint8_t v_isSharedCheck_1801_; 
lean_dec(v___x_1656_);
lean_dec(v_a_1652_);
lean_dec(v_a_1625_);
lean_dec(v_stx_1598_);
lean_dec_ref(v_modifiers_1597_);
v_a_1794_ = lean_ctor_get(v___x_1791_, 0);
v_isSharedCheck_1801_ = !lean_is_exclusive(v___x_1791_);
if (v_isSharedCheck_1801_ == 0)
{
v___x_1796_ = v___x_1791_;
v_isShared_1797_ = v_isSharedCheck_1801_;
goto v_resetjp_1795_;
}
else
{
lean_inc(v_a_1794_);
lean_dec(v___x_1791_);
v___x_1796_ = lean_box(0);
v_isShared_1797_ = v_isSharedCheck_1801_;
goto v_resetjp_1795_;
}
v_resetjp_1795_:
{
lean_object* v___x_1799_; 
if (v_isShared_1797_ == 0)
{
v___x_1799_ = v___x_1796_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v_a_1794_);
v___x_1799_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
return v___x_1799_;
}
}
}
v___jp_1657_:
{
lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v_fst_1665_; lean_object* v_snd_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1790_; 
v___x_1658_ = ((lean_object*)(l_Lean_Elab_instImpl___closed__0_00___x40_Lean_Elab_DefView_2042677648____hygCtx___hyg_21_));
v___x_1659_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfInstance___closed__2));
v___x_1660_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_DefView_isInstance_spec__0___closed__0));
v___x_1661_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfInstance___closed__4));
v___x_1662_ = lean_unsigned_to_nat(4u);
v___x_1663_ = l_Lean_Syntax_getArg(v_stx_1598_, v___x_1662_);
v___x_1664_ = l_Lean_Elab_expandDeclSig(v___x_1663_);
lean_dec(v___x_1663_);
v_fst_1665_ = lean_ctor_get(v___x_1664_, 0);
v_snd_1666_ = lean_ctor_get(v___x_1664_, 1);
v_isSharedCheck_1790_ = !lean_is_exclusive(v___x_1664_);
if (v_isSharedCheck_1790_ == 0)
{
v___x_1668_ = v___x_1664_;
v_isShared_1669_ = v_isSharedCheck_1790_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_snd_1666_);
lean_inc(v_fst_1665_);
lean_dec(v___x_1664_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1790_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v___x_1671_; 
lean_inc(v___x_1656_);
if (v_isShared_1669_ == 0)
{
lean_ctor_set_tag(v___x_1668_, 2);
lean_ctor_set(v___x_1668_, 1, v___x_1660_);
lean_ctor_set(v___x_1668_, 0, v___x_1656_);
v___x_1671_ = v___x_1668_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1789_; 
v_reuseFailAlloc_1789_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1789_, 0, v___x_1656_);
lean_ctor_set(v_reuseFailAlloc_1789_, 1, v___x_1660_);
v___x_1671_ = v_reuseFailAlloc_1789_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; uint8_t v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; 
v___x_1672_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__7));
v___x_1673_ = l_Nat_reprFast(v_a_1652_);
v___x_1674_ = lean_box(2);
v___x_1675_ = l_Lean_Syntax_mkNumLit(v___x_1673_, v___x_1674_);
lean_inc(v___x_1656_);
v___x_1676_ = l_Lean_Syntax_node1(v___x_1656_, v___x_1672_, v___x_1675_);
v___x_1677_ = l_Lean_Syntax_node2(v___x_1656_, v___x_1661_, v___x_1671_, v___x_1676_);
v___x_1678_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_DefView_isInstance_spec__0___closed__1));
v___x_1679_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1679_, 0, v___x_1678_);
lean_ctor_set(v___x_1679_, 1, v___x_1677_);
v___x_1680_ = lean_unbox(v_a_1625_);
lean_dec(v_a_1625_);
lean_ctor_set_uint8(v___x_1679_, sizeof(void*)*2, v___x_1680_);
v___x_1681_ = l_Lean_Elab_Modifiers_addAttr(v_modifiers_1597_, v___x_1679_);
v___x_1682_ = lean_unsigned_to_nat(3u);
v___x_1683_ = l_Lean_Syntax_getArg(v_stx_1598_, v___x_1682_);
v___x_1684_ = l_Lean_Syntax_getOptional_x3f(v___x_1683_);
lean_dec(v___x_1683_);
if (lean_obj_tag(v___x_1684_) == 0)
{
lean_object* v___x_1685_; lean_object* v___x_1686_; 
v___x_1685_ = l_Lean_Syntax_getArgs(v_fst_1665_);
lean_inc(v_snd_1666_);
v___x_1686_ = l_Lean_Elab_Command_mkInstanceName(v___x_1685_, v_snd_1666_, v_a_1599_, v_a_1600_);
if (lean_obj_tag(v___x_1686_) == 0)
{
lean_object* v_a_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v_scopes_1693_; lean_object* v___x_1694_; lean_object* v_opts_1695_; uint8_t v_hasTrace_1696_; 
v_a_1687_ = lean_ctor_get(v___x_1686_, 0);
lean_inc(v_a_1687_);
lean_dec_ref_known(v___x_1686_, 1);
v___x_1688_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfInstance___closed__6));
v___x_1689_ = l_Lean_inheritedTraceOptions;
v___x_1690_ = lean_st_ref_get(v___x_1689_);
v___x_1691_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1692_ = lean_st_ref_get(v_a_1600_);
v_scopes_1693_ = lean_ctor_get(v___x_1692_, 2);
lean_inc(v_scopes_1693_);
lean_dec(v___x_1692_);
v___x_1694_ = l_List_head_x21___redArg(v___x_1691_, v_scopes_1693_);
lean_dec(v_scopes_1693_);
v_opts_1695_ = lean_ctor_get(v___x_1694_, 1);
lean_inc_ref(v_opts_1695_);
lean_dec(v___x_1694_);
v_hasTrace_1696_ = lean_ctor_get_uint8(v_opts_1695_, sizeof(void*)*1);
if (v_hasTrace_1696_ == 0)
{
lean_dec_ref(v_opts_1695_);
lean_dec(v___x_1690_);
v___y_1628_ = v_snd_1666_;
v___y_1629_ = v___x_1659_;
v___y_1630_ = v___x_1681_;
v___y_1631_ = v___x_1674_;
v___y_1632_ = v___x_1658_;
v___y_1633_ = v_a_1687_;
v___y_1634_ = v_fst_1665_;
v___y_1635_ = v___x_1672_;
goto v___jp_1627_;
}
else
{
lean_object* v___x_1697_; uint8_t v___x_1698_; 
v___x_1697_ = lean_obj_once(&l_Lean_Elab_Command_mkDefViewOfInstance___closed__7, &l_Lean_Elab_Command_mkDefViewOfInstance___closed__7_once, _init_l_Lean_Elab_Command_mkDefViewOfInstance___closed__7);
v___x_1698_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1690_, v_opts_1695_, v___x_1697_);
lean_dec_ref(v_opts_1695_);
lean_dec(v___x_1690_);
if (v___x_1698_ == 0)
{
v___y_1628_ = v_snd_1666_;
v___y_1629_ = v___x_1659_;
v___y_1630_ = v___x_1681_;
v___y_1631_ = v___x_1674_;
v___y_1632_ = v___x_1658_;
v___y_1633_ = v_a_1687_;
v___y_1634_ = v_fst_1665_;
v___y_1635_ = v___x_1672_;
goto v___jp_1627_;
}
else
{
lean_object* v___x_1699_; 
v___x_1699_ = l_Lean_Elab_Command_getScope___redArg(v_a_1600_);
if (lean_obj_tag(v___x_1699_) == 0)
{
lean_object* v_a_1700_; lean_object* v_currNamespace_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; 
v_a_1700_ = lean_ctor_get(v___x_1699_, 0);
lean_inc(v_a_1700_);
lean_dec_ref_known(v___x_1699_, 1);
v_currNamespace_1701_ = lean_ctor_get(v_a_1700_, 2);
lean_inc(v_currNamespace_1701_);
lean_dec(v_a_1700_);
v___x_1702_ = lean_obj_once(&l_Lean_Elab_Command_mkDefViewOfInstance___closed__9, &l_Lean_Elab_Command_mkDefViewOfInstance___closed__9_once, _init_l_Lean_Elab_Command_mkDefViewOfInstance___closed__9);
lean_inc(v_a_1687_);
v___x_1703_ = l_Lean_Name_append(v_currNamespace_1701_, v_a_1687_);
v___x_1704_ = l_Lean_MessageData_ofName(v___x_1703_);
v___x_1705_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1705_, 0, v___x_1702_);
lean_ctor_set(v___x_1705_, 1, v___x_1704_);
v___x_1706_ = l_Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1(v___x_1688_, v___x_1705_, v_a_1599_, v_a_1600_);
if (lean_obj_tag(v___x_1706_) == 0)
{
lean_dec_ref_known(v___x_1706_, 1);
v___y_1628_ = v_snd_1666_;
v___y_1629_ = v___x_1659_;
v___y_1630_ = v___x_1681_;
v___y_1631_ = v___x_1674_;
v___y_1632_ = v___x_1658_;
v___y_1633_ = v_a_1687_;
v___y_1634_ = v_fst_1665_;
v___y_1635_ = v___x_1672_;
goto v___jp_1627_;
}
else
{
lean_object* v_a_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1714_; 
lean_dec(v_a_1687_);
lean_dec_ref(v___x_1681_);
lean_dec(v_snd_1666_);
lean_dec(v_fst_1665_);
lean_dec(v_stx_1598_);
v_a_1707_ = lean_ctor_get(v___x_1706_, 0);
v_isSharedCheck_1714_ = !lean_is_exclusive(v___x_1706_);
if (v_isSharedCheck_1714_ == 0)
{
v___x_1709_ = v___x_1706_;
v_isShared_1710_ = v_isSharedCheck_1714_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_a_1707_);
lean_dec(v___x_1706_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1714_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
lean_object* v___x_1712_; 
if (v_isShared_1710_ == 0)
{
v___x_1712_ = v___x_1709_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1713_; 
v_reuseFailAlloc_1713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1713_, 0, v_a_1707_);
v___x_1712_ = v_reuseFailAlloc_1713_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
return v___x_1712_;
}
}
}
}
else
{
lean_object* v_a_1715_; lean_object* v___x_1717_; uint8_t v_isShared_1718_; uint8_t v_isSharedCheck_1722_; 
lean_dec(v_a_1687_);
lean_dec_ref(v___x_1681_);
lean_dec(v_snd_1666_);
lean_dec(v_fst_1665_);
lean_dec(v_stx_1598_);
v_a_1715_ = lean_ctor_get(v___x_1699_, 0);
v_isSharedCheck_1722_ = !lean_is_exclusive(v___x_1699_);
if (v_isSharedCheck_1722_ == 0)
{
v___x_1717_ = v___x_1699_;
v_isShared_1718_ = v_isSharedCheck_1722_;
goto v_resetjp_1716_;
}
else
{
lean_inc(v_a_1715_);
lean_dec(v___x_1699_);
v___x_1717_ = lean_box(0);
v_isShared_1718_ = v_isSharedCheck_1722_;
goto v_resetjp_1716_;
}
v_resetjp_1716_:
{
lean_object* v___x_1720_; 
if (v_isShared_1718_ == 0)
{
v___x_1720_ = v___x_1717_;
goto v_reusejp_1719_;
}
else
{
lean_object* v_reuseFailAlloc_1721_; 
v_reuseFailAlloc_1721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1721_, 0, v_a_1715_);
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
else
{
lean_object* v_a_1723_; lean_object* v___x_1725_; uint8_t v_isShared_1726_; uint8_t v_isSharedCheck_1730_; 
lean_dec_ref(v___x_1681_);
lean_dec(v_snd_1666_);
lean_dec(v_fst_1665_);
lean_dec(v_stx_1598_);
v_a_1723_ = lean_ctor_get(v___x_1686_, 0);
v_isSharedCheck_1730_ = !lean_is_exclusive(v___x_1686_);
if (v_isSharedCheck_1730_ == 0)
{
v___x_1725_ = v___x_1686_;
v_isShared_1726_ = v_isSharedCheck_1730_;
goto v_resetjp_1724_;
}
else
{
lean_inc(v_a_1723_);
lean_dec(v___x_1686_);
v___x_1725_ = lean_box(0);
v_isShared_1726_ = v_isSharedCheck_1730_;
goto v_resetjp_1724_;
}
v_resetjp_1724_:
{
lean_object* v___x_1728_; 
if (v_isShared_1726_ == 0)
{
v___x_1728_ = v___x_1725_;
goto v_reusejp_1727_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v_a_1723_);
v___x_1728_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1727_;
}
v_reusejp_1727_:
{
return v___x_1728_;
}
}
}
}
else
{
lean_object* v_val_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v_scopes_1737_; lean_object* v___x_1738_; lean_object* v_opts_1739_; uint8_t v_hasTrace_1740_; 
v_val_1731_ = lean_ctor_get(v___x_1684_, 0);
lean_inc(v_val_1731_);
lean_dec_ref_known(v___x_1684_, 1);
v___x_1732_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfInstance___closed__6));
v___x_1733_ = l_Lean_inheritedTraceOptions;
v___x_1734_ = lean_st_ref_get(v___x_1733_);
v___x_1735_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1736_ = lean_st_ref_get(v_a_1600_);
v_scopes_1737_ = lean_ctor_get(v___x_1736_, 2);
lean_inc(v_scopes_1737_);
lean_dec(v___x_1736_);
v___x_1738_ = l_List_head_x21___redArg(v___x_1735_, v_scopes_1737_);
lean_dec(v_scopes_1737_);
v_opts_1739_ = lean_ctor_get(v___x_1738_, 1);
lean_inc_ref(v_opts_1739_);
lean_dec(v___x_1738_);
v_hasTrace_1740_ = lean_ctor_get_uint8(v_opts_1739_, sizeof(void*)*1);
if (v_hasTrace_1740_ == 0)
{
lean_dec_ref(v_opts_1739_);
lean_dec(v___x_1734_);
v___y_1604_ = v_snd_1666_;
v___y_1605_ = v___x_1681_;
v___y_1606_ = v___x_1674_;
v___y_1607_ = v_fst_1665_;
v___y_1608_ = v___x_1672_;
v_declId_1609_ = v_val_1731_;
goto v___jp_1603_;
}
else
{
lean_object* v___x_1741_; uint8_t v___x_1742_; 
v___x_1741_ = lean_obj_once(&l_Lean_Elab_Command_mkDefViewOfInstance___closed__7, &l_Lean_Elab_Command_mkDefViewOfInstance___closed__7_once, _init_l_Lean_Elab_Command_mkDefViewOfInstance___closed__7);
v___x_1742_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1734_, v_opts_1739_, v___x_1741_);
lean_dec_ref(v_opts_1739_);
lean_dec(v___x_1734_);
if (v___x_1742_ == 0)
{
v___y_1604_ = v_snd_1666_;
v___y_1605_ = v___x_1681_;
v___y_1606_ = v___x_1674_;
v___y_1607_ = v_fst_1665_;
v___y_1608_ = v___x_1672_;
v_declId_1609_ = v_val_1731_;
goto v___jp_1603_;
}
else
{
lean_object* v___x_1743_; lean_object* v___x_1744_; 
v___x_1743_ = l_Lean_Syntax_getArgs(v_fst_1665_);
lean_inc(v_snd_1666_);
v___x_1744_ = l_Lean_Elab_Command_mkInstanceName(v___x_1743_, v_snd_1666_, v_a_1599_, v_a_1600_);
if (lean_obj_tag(v___x_1744_) == 0)
{
lean_object* v_a_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v_scopes_1748_; lean_object* v___x_1749_; lean_object* v_opts_1750_; uint8_t v_hasTrace_1751_; 
v_a_1745_ = lean_ctor_get(v___x_1744_, 0);
lean_inc(v_a_1745_);
lean_dec_ref_known(v___x_1744_, 1);
v___x_1746_ = lean_st_ref_get(v___x_1733_);
v___x_1747_ = lean_st_ref_get(v_a_1600_);
v_scopes_1748_ = lean_ctor_get(v___x_1747_, 2);
lean_inc(v_scopes_1748_);
lean_dec(v___x_1747_);
v___x_1749_ = l_List_head_x21___redArg(v___x_1735_, v_scopes_1748_);
lean_dec(v_scopes_1748_);
v_opts_1750_ = lean_ctor_get(v___x_1749_, 1);
lean_inc_ref(v_opts_1750_);
lean_dec(v___x_1749_);
v_hasTrace_1751_ = lean_ctor_get_uint8(v_opts_1750_, sizeof(void*)*1);
if (v_hasTrace_1751_ == 0)
{
lean_dec_ref(v_opts_1750_);
lean_dec(v___x_1746_);
lean_dec(v_a_1745_);
v___y_1604_ = v_snd_1666_;
v___y_1605_ = v___x_1681_;
v___y_1606_ = v___x_1674_;
v___y_1607_ = v_fst_1665_;
v___y_1608_ = v___x_1672_;
v_declId_1609_ = v_val_1731_;
goto v___jp_1603_;
}
else
{
uint8_t v___x_1752_; 
v___x_1752_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1746_, v_opts_1750_, v___x_1741_);
lean_dec_ref(v_opts_1750_);
lean_dec(v___x_1746_);
if (v___x_1752_ == 0)
{
lean_dec(v_a_1745_);
v___y_1604_ = v_snd_1666_;
v___y_1605_ = v___x_1681_;
v___y_1606_ = v___x_1674_;
v___y_1607_ = v_fst_1665_;
v___y_1608_ = v___x_1672_;
v_declId_1609_ = v_val_1731_;
goto v___jp_1603_;
}
else
{
lean_object* v___x_1753_; 
v___x_1753_ = l_Lean_Elab_Command_getScope___redArg(v_a_1600_);
if (lean_obj_tag(v___x_1753_) == 0)
{
lean_object* v_a_1754_; lean_object* v_currNamespace_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; 
v_a_1754_ = lean_ctor_get(v___x_1753_, 0);
lean_inc(v_a_1754_);
lean_dec_ref_known(v___x_1753_, 1);
v_currNamespace_1755_ = lean_ctor_get(v_a_1754_, 2);
lean_inc(v_currNamespace_1755_);
lean_dec(v_a_1754_);
v___x_1756_ = lean_obj_once(&l_Lean_Elab_Command_mkDefViewOfInstance___closed__9, &l_Lean_Elab_Command_mkDefViewOfInstance___closed__9_once, _init_l_Lean_Elab_Command_mkDefViewOfInstance___closed__9);
v___x_1757_ = l_Lean_Name_append(v_currNamespace_1755_, v_a_1745_);
v___x_1758_ = l_Lean_MessageData_ofName(v___x_1757_);
v___x_1759_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1759_, 0, v___x_1756_);
lean_ctor_set(v___x_1759_, 1, v___x_1758_);
v___x_1760_ = lean_obj_once(&l_Lean_Elab_Command_mkDefViewOfInstance___closed__11, &l_Lean_Elab_Command_mkDefViewOfInstance___closed__11_once, _init_l_Lean_Elab_Command_mkDefViewOfInstance___closed__11);
v___x_1761_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1761_, 0, v___x_1759_);
lean_ctor_set(v___x_1761_, 1, v___x_1760_);
lean_inc(v_val_1731_);
v___x_1762_ = l_Lean_MessageData_ofSyntax(v_val_1731_);
v___x_1763_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1763_, 0, v___x_1761_);
lean_ctor_set(v___x_1763_, 1, v___x_1762_);
v___x_1764_ = l_Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1(v___x_1732_, v___x_1763_, v_a_1599_, v_a_1600_);
if (lean_obj_tag(v___x_1764_) == 0)
{
lean_dec_ref_known(v___x_1764_, 1);
v___y_1604_ = v_snd_1666_;
v___y_1605_ = v___x_1681_;
v___y_1606_ = v___x_1674_;
v___y_1607_ = v_fst_1665_;
v___y_1608_ = v___x_1672_;
v_declId_1609_ = v_val_1731_;
goto v___jp_1603_;
}
else
{
lean_object* v_a_1765_; lean_object* v___x_1767_; uint8_t v_isShared_1768_; uint8_t v_isSharedCheck_1772_; 
lean_dec(v_val_1731_);
lean_dec_ref(v___x_1681_);
lean_dec(v_snd_1666_);
lean_dec(v_fst_1665_);
lean_dec(v_stx_1598_);
v_a_1765_ = lean_ctor_get(v___x_1764_, 0);
v_isSharedCheck_1772_ = !lean_is_exclusive(v___x_1764_);
if (v_isSharedCheck_1772_ == 0)
{
v___x_1767_ = v___x_1764_;
v_isShared_1768_ = v_isSharedCheck_1772_;
goto v_resetjp_1766_;
}
else
{
lean_inc(v_a_1765_);
lean_dec(v___x_1764_);
v___x_1767_ = lean_box(0);
v_isShared_1768_ = v_isSharedCheck_1772_;
goto v_resetjp_1766_;
}
v_resetjp_1766_:
{
lean_object* v___x_1770_; 
if (v_isShared_1768_ == 0)
{
v___x_1770_ = v___x_1767_;
goto v_reusejp_1769_;
}
else
{
lean_object* v_reuseFailAlloc_1771_; 
v_reuseFailAlloc_1771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1771_, 0, v_a_1765_);
v___x_1770_ = v_reuseFailAlloc_1771_;
goto v_reusejp_1769_;
}
v_reusejp_1769_:
{
return v___x_1770_;
}
}
}
}
else
{
lean_object* v_a_1773_; lean_object* v___x_1775_; uint8_t v_isShared_1776_; uint8_t v_isSharedCheck_1780_; 
lean_dec(v_a_1745_);
lean_dec(v_val_1731_);
lean_dec_ref(v___x_1681_);
lean_dec(v_snd_1666_);
lean_dec(v_fst_1665_);
lean_dec(v_stx_1598_);
v_a_1773_ = lean_ctor_get(v___x_1753_, 0);
v_isSharedCheck_1780_ = !lean_is_exclusive(v___x_1753_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1775_ = v___x_1753_;
v_isShared_1776_ = v_isSharedCheck_1780_;
goto v_resetjp_1774_;
}
else
{
lean_inc(v_a_1773_);
lean_dec(v___x_1753_);
v___x_1775_ = lean_box(0);
v_isShared_1776_ = v_isSharedCheck_1780_;
goto v_resetjp_1774_;
}
v_resetjp_1774_:
{
lean_object* v___x_1778_; 
if (v_isShared_1776_ == 0)
{
v___x_1778_ = v___x_1775_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v_a_1773_);
v___x_1778_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
return v___x_1778_;
}
}
}
}
}
}
else
{
lean_object* v_a_1781_; lean_object* v___x_1783_; uint8_t v_isShared_1784_; uint8_t v_isSharedCheck_1788_; 
lean_dec(v_val_1731_);
lean_dec_ref(v___x_1681_);
lean_dec(v_snd_1666_);
lean_dec(v_fst_1665_);
lean_dec(v_stx_1598_);
v_a_1781_ = lean_ctor_get(v___x_1744_, 0);
v_isSharedCheck_1788_ = !lean_is_exclusive(v___x_1744_);
if (v_isSharedCheck_1788_ == 0)
{
v___x_1783_ = v___x_1744_;
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
else
{
lean_inc(v_a_1781_);
lean_dec(v___x_1744_);
v___x_1783_ = lean_box(0);
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
v_resetjp_1782_:
{
lean_object* v___x_1786_; 
if (v_isShared_1784_ == 0)
{
v___x_1786_ = v___x_1783_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v_a_1781_);
v___x_1786_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
return v___x_1786_;
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
lean_object* v_a_1802_; lean_object* v___x_1804_; uint8_t v_isShared_1805_; uint8_t v_isSharedCheck_1809_; 
lean_dec(v_a_1652_);
lean_dec(v_a_1625_);
lean_dec(v_stx_1598_);
lean_dec_ref(v_modifiers_1597_);
v_a_1802_ = lean_ctor_get(v___x_1653_, 0);
v_isSharedCheck_1809_ = !lean_is_exclusive(v___x_1653_);
if (v_isSharedCheck_1809_ == 0)
{
v___x_1804_ = v___x_1653_;
v_isShared_1805_ = v_isSharedCheck_1809_;
goto v_resetjp_1803_;
}
else
{
lean_inc(v_a_1802_);
lean_dec(v___x_1653_);
v___x_1804_ = lean_box(0);
v_isShared_1805_ = v_isSharedCheck_1809_;
goto v_resetjp_1803_;
}
v_resetjp_1803_:
{
lean_object* v___x_1807_; 
if (v_isShared_1805_ == 0)
{
v___x_1807_ = v___x_1804_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1808_; 
v_reuseFailAlloc_1808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1808_, 0, v_a_1802_);
v___x_1807_ = v_reuseFailAlloc_1808_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
return v___x_1807_;
}
}
}
}
else
{
lean_object* v_a_1810_; lean_object* v___x_1812_; uint8_t v_isShared_1813_; uint8_t v_isSharedCheck_1817_; 
lean_dec(v_a_1625_);
lean_dec(v_stx_1598_);
lean_dec_ref(v_modifiers_1597_);
v_a_1810_ = lean_ctor_get(v___x_1651_, 0);
v_isSharedCheck_1817_ = !lean_is_exclusive(v___x_1651_);
if (v_isSharedCheck_1817_ == 0)
{
v___x_1812_ = v___x_1651_;
v_isShared_1813_ = v_isSharedCheck_1817_;
goto v_resetjp_1811_;
}
else
{
lean_inc(v_a_1810_);
lean_dec(v___x_1651_);
v___x_1812_ = lean_box(0);
v_isShared_1813_ = v_isSharedCheck_1817_;
goto v_resetjp_1811_;
}
v_resetjp_1811_:
{
lean_object* v___x_1815_; 
if (v_isShared_1813_ == 0)
{
v___x_1815_ = v___x_1812_;
goto v_reusejp_1814_;
}
else
{
lean_object* v_reuseFailAlloc_1816_; 
v_reuseFailAlloc_1816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1816_, 0, v_a_1810_);
v___x_1815_ = v_reuseFailAlloc_1816_;
goto v_reusejp_1814_;
}
v_reusejp_1814_:
{
return v___x_1815_;
}
}
}
v___jp_1627_:
{
lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; uint8_t v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; 
v___x_1636_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfInstance___closed__0));
v___x_1637_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfInstance___closed__1));
lean_inc_ref(v___y_1629_);
lean_inc_ref(v___y_1632_);
v___x_1638_ = l_Lean_Name_mkStr4(v___y_1632_, v___y_1629_, v___x_1636_, v___x_1637_);
v___x_1639_ = lean_unsigned_to_nat(1u);
v___x_1640_ = l_Lean_Syntax_getArg(v_stx_1598_, v___x_1639_);
v___x_1641_ = 1;
v___x_1642_ = l_Lean_mkIdentFrom(v___x_1640_, v___y_1633_, v___x_1641_);
lean_dec(v___x_1640_);
v___x_1643_ = ((lean_object*)(l_Lean_Elab_instInhabitedDefViewElabHeaderData_default___closed__0));
lean_inc(v___y_1635_);
lean_inc_n(v___y_1631_, 2);
v___x_1644_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1644_, 0, v___y_1631_);
lean_ctor_set(v___x_1644_, 1, v___y_1635_);
lean_ctor_set(v___x_1644_, 2, v___x_1643_);
v___x_1645_ = lean_mk_empty_array_with_capacity(v___x_1626_);
v___x_1646_ = lean_array_push(v___x_1645_, v___x_1642_);
v___x_1647_ = lean_array_push(v___x_1646_, v___x_1644_);
v___x_1648_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1648_, 0, v___y_1631_);
lean_ctor_set(v___x_1648_, 1, v___x_1638_);
lean_ctor_set(v___x_1648_, 2, v___x_1647_);
v___y_1604_ = v___y_1628_;
v___y_1605_ = v___y_1630_;
v___y_1606_ = v___y_1631_;
v___y_1607_ = v___y_1634_;
v___y_1608_ = v___y_1635_;
v_declId_1609_ = v___x_1648_;
goto v___jp_1603_;
}
}
else
{
lean_object* v_a_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1825_; 
lean_dec(v_stx_1598_);
lean_dec_ref(v_modifiers_1597_);
v_a_1818_ = lean_ctor_get(v___x_1624_, 0);
v_isSharedCheck_1825_ = !lean_is_exclusive(v___x_1624_);
if (v_isSharedCheck_1825_ == 0)
{
v___x_1820_ = v___x_1624_;
v_isShared_1821_ = v_isSharedCheck_1825_;
goto v_resetjp_1819_;
}
else
{
lean_inc(v_a_1818_);
lean_dec(v___x_1624_);
v___x_1820_ = lean_box(0);
v_isShared_1821_ = v_isSharedCheck_1825_;
goto v_resetjp_1819_;
}
v_resetjp_1819_:
{
lean_object* v___x_1823_; 
if (v_isShared_1821_ == 0)
{
v___x_1823_ = v___x_1820_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v_a_1818_);
v___x_1823_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
return v___x_1823_;
}
}
}
v___jp_1603_:
{
lean_object* v_docString_x3f_1610_; uint8_t v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
v_docString_x3f_1610_ = lean_ctor_get(v___y_1605_, 1);
lean_inc(v_docString_x3f_1610_);
v___x_1611_ = 1;
v___x_1612_ = l_Lean_Syntax_getArgs(v_stx_1598_);
v___x_1613_ = lean_unsigned_to_nat(5u);
v___x_1614_ = l_Array_toSubarray___redArg(v___x_1612_, v___x_1602_, v___x_1613_);
v___x_1615_ = l_Subarray_copy___redArg(v___x_1614_);
v___x_1616_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1616_, 0, v___y_1606_);
lean_ctor_set(v___x_1616_, 1, v___y_1608_);
lean_ctor_set(v___x_1616_, 2, v___x_1615_);
v___x_1617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1617_, 0, v___y_1604_);
v___x_1618_ = l_Lean_Syntax_getArg(v_stx_1598_, v___x_1613_);
v___x_1619_ = lean_box(0);
v___x_1620_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_1620_, 0, v_stx_1598_);
lean_ctor_set(v___x_1620_, 1, v___x_1616_);
lean_ctor_set(v___x_1620_, 2, v___y_1605_);
lean_ctor_set(v___x_1620_, 3, v_declId_1609_);
lean_ctor_set(v___x_1620_, 4, v___y_1607_);
lean_ctor_set(v___x_1620_, 5, v___x_1617_);
lean_ctor_set(v___x_1620_, 6, v___x_1618_);
lean_ctor_set(v___x_1620_, 7, v_docString_x3f_1610_);
lean_ctor_set(v___x_1620_, 8, v___x_1619_);
lean_ctor_set(v___x_1620_, 9, v___x_1619_);
lean_ctor_set_uint8(v___x_1620_, sizeof(void*)*10, v___x_1611_);
v___x_1621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1621_, 0, v___x_1620_);
return v___x_1621_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkDefViewOfInstance___boxed(lean_object* v_modifiers_1826_, lean_object* v_stx_1827_, lean_object* v_a_1828_, lean_object* v_a_1829_, lean_object* v_a_1830_){
_start:
{
lean_object* v_res_1831_; 
v_res_1831_ = l_Lean_Elab_Command_mkDefViewOfInstance(v_modifiers_1826_, v_stx_1827_, v_a_1828_, v_a_1829_);
lean_dec(v_a_1829_);
lean_dec_ref(v_a_1828_);
return v_res_1831_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__0(lean_object* v_00_u03b1_1832_, lean_object* v_x_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_){
_start:
{
lean_object* v___x_1836_; 
v___x_1836_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__0___redArg(v_x_1833_, v___y_1835_);
return v___x_1836_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1837_, lean_object* v_x_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_){
_start:
{
lean_object* v_res_1841_; 
v_res_1841_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__0(v_00_u03b1_1837_, v_x_1838_, v___y_1839_, v___y_1840_);
lean_dec_ref(v___y_1839_);
lean_dec_ref(v_x_1838_);
return v_res_1841_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5(lean_object* v_00_u03b1_1842_, lean_object* v_ref_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_){
_start:
{
lean_object* v___x_1847_; 
v___x_1847_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___redArg(v_ref_1843_);
return v___x_1847_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5___boxed(lean_object* v_00_u03b1_1848_, lean_object* v_ref_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_){
_start:
{
lean_object* v_res_1853_; 
v_res_1853_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__5(v_00_u03b1_1848_, v_ref_1849_, v___y_1850_, v___y_1851_);
lean_dec(v___y_1851_);
lean_dec_ref(v___y_1850_);
return v_res_1853_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__6(lean_object* v_00_u03b1_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_){
_start:
{
lean_object* v___x_1858_; 
v___x_1858_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__6___redArg();
return v___x_1858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__6___boxed(lean_object* v_00_u03b1_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_){
_start:
{
lean_object* v_res_1863_; 
v_res_1863_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__6(v_00_u03b1_1859_, v___y_1860_, v___y_1861_);
lean_dec(v___y_1861_);
lean_dec_ref(v___y_1860_);
return v_res_1863_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0(lean_object* v_00_u03b1_1864_, lean_object* v_x_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_){
_start:
{
lean_object* v___x_1869_; 
v___x_1869_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___redArg(v_x_1865_, v___y_1866_, v___y_1867_);
return v___x_1869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0___boxed(lean_object* v_00_u03b1_1870_, lean_object* v_x_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_){
_start:
{
lean_object* v_res_1875_; 
v_res_1875_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0(v_00_u03b1_1870_, v_x_1871_, v___y_1872_, v___y_1873_);
lean_dec(v___y_1873_);
lean_dec_ref(v___y_1872_);
return v_res_1875_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8(lean_object* v_msgData_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_){
_start:
{
lean_object* v___x_1880_; 
v___x_1880_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___redArg(v_msgData_1876_, v___y_1878_);
return v___x_1880_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8___boxed(lean_object* v_msgData_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_){
_start:
{
lean_object* v_res_1885_; 
v_res_1885_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__1_spec__8(v_msgData_1881_, v___y_1882_, v___y_1883_);
lean_dec(v___y_1883_);
lean_dec_ref(v___y_1882_);
return v_res_1885_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__2(lean_object* v_as_1886_, lean_object* v_as_x27_1887_, lean_object* v_b_1888_, lean_object* v_a_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_){
_start:
{
lean_object* v___x_1893_; 
v___x_1893_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__2___redArg(v_as_x27_1887_, v_b_1888_, v___y_1890_, v___y_1891_);
return v___x_1893_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__2___boxed(lean_object* v_as_1894_, lean_object* v_as_x27_1895_, lean_object* v_b_1896_, lean_object* v_a_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_){
_start:
{
lean_object* v_res_1901_; 
v_res_1901_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__2(v_as_1894_, v_as_x27_1895_, v_b_1896_, v_a_1897_, v___y_1898_, v___y_1899_);
lean_dec(v___y_1899_);
lean_dec_ref(v___y_1898_);
lean_dec(v_as_x27_1895_);
lean_dec(v_as_1894_);
return v_res_1901_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4(lean_object* v_00_u03b1_1902_, lean_object* v_ref_1903_, lean_object* v_msg_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_){
_start:
{
lean_object* v___x_1908_; 
v___x_1908_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4___redArg(v_ref_1903_, v_msg_1904_, v___y_1905_, v___y_1906_);
return v___x_1908_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4___boxed(lean_object* v_00_u03b1_1909_, lean_object* v_ref_1910_, lean_object* v_msg_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_){
_start:
{
lean_object* v_res_1915_; 
v_res_1915_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4(v_00_u03b1_1909_, v_ref_1910_, v_msg_1911_, v___y_1912_, v___y_1913_);
lean_dec(v___y_1913_);
lean_dec_ref(v___y_1912_);
lean_dec(v_ref_1910_);
return v_res_1915_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__5(lean_object* v_00_u03b2_1916_, lean_object* v_m_1917_, lean_object* v_a_1918_){
_start:
{
lean_object* v___x_1919_; 
v___x_1919_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__5___redArg(v_m_1917_, v_a_1918_);
return v___x_1919_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__5___boxed(lean_object* v_00_u03b2_1920_, lean_object* v_m_1921_, lean_object* v_a_1922_){
_start:
{
lean_object* v_res_1923_; 
v_res_1923_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__5(v_00_u03b2_1920_, v_m_1921_, v_a_1922_);
lean_dec(v_a_1922_);
lean_dec_ref(v_m_1921_);
return v_res_1923_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9(lean_object* v_00_u03b1_1924_, lean_object* v_msg_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_){
_start:
{
lean_object* v___x_1929_; 
v___x_1929_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9___redArg(v_msg_1925_, v___y_1926_, v___y_1927_);
return v___x_1929_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9___boxed(lean_object* v_00_u03b1_1930_, lean_object* v_msg_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_){
_start:
{
lean_object* v_res_1935_; 
v_res_1935_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9(v_00_u03b1_1930_, v_msg_1931_, v___y_1932_, v___y_1933_);
lean_dec(v___y_1933_);
lean_dec_ref(v___y_1932_);
return v_res_1935_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8(lean_object* v_00_u03b2_1936_, lean_object* v_x_1937_, lean_object* v_x_1938_){
_start:
{
uint8_t v___x_1939_; 
v___x_1939_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8___redArg(v_x_1937_, v_x_1938_);
return v___x_1939_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8___boxed(lean_object* v_00_u03b2_1940_, lean_object* v_x_1941_, lean_object* v_x_1942_){
_start:
{
uint8_t v_res_1943_; lean_object* v_r_1944_; 
v_res_1943_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8(v_00_u03b2_1940_, v_x_1941_, v_x_1942_);
lean_dec_ref(v_x_1942_);
lean_dec_ref(v_x_1941_);
v_r_1944_ = lean_box(v_res_1943_);
return v_r_1944_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9(lean_object* v_00_u03b2_1945_, lean_object* v_m_1946_, lean_object* v_a_1947_, lean_object* v_b_1948_){
_start:
{
lean_object* v___x_1949_; 
v___x_1949_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9___redArg(v_m_1946_, v_a_1947_, v_b_1948_);
return v___x_1949_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__5_spec__12(lean_object* v_00_u03b2_1950_, lean_object* v_a_1951_, lean_object* v_x_1952_){
_start:
{
lean_object* v___x_1953_; 
v___x_1953_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__5_spec__12___redArg(v_a_1951_, v_x_1952_);
return v___x_1953_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__5_spec__12___boxed(lean_object* v_00_u03b2_1954_, lean_object* v_a_1955_, lean_object* v_x_1956_){
_start:
{
lean_object* v_res_1957_; 
v_res_1957_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__5_spec__12(v_00_u03b2_1954_, v_a_1955_, v_x_1956_);
lean_dec(v_x_1956_);
lean_dec(v_a_1955_);
return v_res_1957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17(lean_object* v_msgData_1958_, lean_object* v_macroStack_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_){
_start:
{
lean_object* v___x_1963_; 
v___x_1963_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17___redArg(v_msgData_1958_, v_macroStack_1959_, v___y_1961_);
return v___x_1963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17___boxed(lean_object* v_msgData_1964_, lean_object* v_macroStack_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_){
_start:
{
lean_object* v_res_1969_; 
v_res_1969_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9_spec__17(v_msgData_1964_, v_macroStack_1965_, v___y_1966_, v___y_1967_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
return v_res_1969_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8_spec__12(lean_object* v_00_u03b2_1970_, lean_object* v_x_1971_, size_t v_x_1972_, lean_object* v_x_1973_){
_start:
{
uint8_t v___x_1974_; 
v___x_1974_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8_spec__12___redArg(v_x_1971_, v_x_1972_, v_x_1973_);
return v___x_1974_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8_spec__12___boxed(lean_object* v_00_u03b2_1975_, lean_object* v_x_1976_, lean_object* v_x_1977_, lean_object* v_x_1978_){
_start:
{
size_t v_x_19326__boxed_1979_; uint8_t v_res_1980_; lean_object* v_r_1981_; 
v_x_19326__boxed_1979_ = lean_unbox_usize(v_x_1977_);
lean_dec(v_x_1977_);
v_res_1980_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8_spec__12(v_00_u03b2_1975_, v_x_1976_, v_x_19326__boxed_1979_, v_x_1978_);
lean_dec_ref(v_x_1978_);
lean_dec_ref(v_x_1976_);
v_r_1981_ = lean_box(v_res_1980_);
return v_r_1981_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__14(lean_object* v_00_u03b2_1982_, lean_object* v_a_1983_, lean_object* v_x_1984_){
_start:
{
uint8_t v___x_1985_; 
v___x_1985_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__14___redArg(v_a_1983_, v_x_1984_);
return v___x_1985_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__14___boxed(lean_object* v_00_u03b2_1986_, lean_object* v_a_1987_, lean_object* v_x_1988_){
_start:
{
uint8_t v_res_1989_; lean_object* v_r_1990_; 
v_res_1989_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__14(v_00_u03b2_1986_, v_a_1987_, v_x_1988_);
lean_dec(v_x_1988_);
lean_dec_ref(v_a_1987_);
v_r_1990_ = lean_box(v_res_1989_);
return v_r_1990_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__15(lean_object* v_00_u03b2_1991_, lean_object* v_data_1992_){
_start:
{
lean_object* v___x_1993_; 
v___x_1993_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__15___redArg(v_data_1992_);
return v___x_1993_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8_spec__12_spec__16(lean_object* v_00_u03b2_1994_, lean_object* v_keys_1995_, lean_object* v_vals_1996_, lean_object* v_heq_1997_, lean_object* v_i_1998_, lean_object* v_k_1999_){
_start:
{
uint8_t v___x_2000_; 
v___x_2000_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8_spec__12_spec__16___redArg(v_keys_1995_, v_i_1998_, v_k_1999_);
return v___x_2000_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8_spec__12_spec__16___boxed(lean_object* v_00_u03b2_2001_, lean_object* v_keys_2002_, lean_object* v_vals_2003_, lean_object* v_heq_2004_, lean_object* v_i_2005_, lean_object* v_k_2006_){
_start:
{
uint8_t v_res_2007_; lean_object* v_r_2008_; 
v_res_2007_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__8_spec__12_spec__16(v_00_u03b2_2001_, v_keys_2002_, v_vals_2003_, v_heq_2004_, v_i_2005_, v_k_2006_);
lean_dec_ref(v_k_2006_);
lean_dec_ref(v_vals_2003_);
lean_dec_ref(v_keys_2002_);
v_r_2008_ = lean_box(v_res_2007_);
return v_r_2008_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__15_spec__20(lean_object* v_00_u03b2_2009_, lean_object* v_i_2010_, lean_object* v_source_2011_, lean_object* v_target_2012_){
_start:
{
lean_object* v___x_2013_; 
v___x_2013_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__15_spec__20___redArg(v_i_2010_, v_source_2011_, v_target_2012_);
return v___x_2013_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__15_spec__20_spec__24(lean_object* v_00_u03b2_2014_, lean_object* v_x_2015_, lean_object* v_x_2016_){
_start:
{
lean_object* v___x_2017_; 
v___x_2017_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__1_spec__3_spec__9_spec__15_spec__20_spec__24___redArg(v_x_2015_, v_x_2016_);
return v___x_2017_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkDefViewOfOpaque___closed__6(void){
_start:
{
lean_object* v___x_2032_; 
v___x_2032_ = l_Array_mkArray0___redArg();
return v___x_2032_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkDefViewOfOpaque(lean_object* v_modifiers_2042_, lean_object* v_stx_2043_, lean_object* v_a_2044_, lean_object* v_a_2045_){
_start:
{
lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v_fst_2050_; lean_object* v_snd_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2181_; 
v___x_2047_ = lean_unsigned_to_nat(2u);
v___x_2048_ = l_Lean_Syntax_getArg(v_stx_2043_, v___x_2047_);
v___x_2049_ = l_Lean_Elab_expandDeclSig(v___x_2048_);
lean_dec(v___x_2048_);
v_fst_2050_ = lean_ctor_get(v___x_2049_, 0);
v_snd_2051_ = lean_ctor_get(v___x_2049_, 1);
v_isSharedCheck_2181_ = !lean_is_exclusive(v___x_2049_);
if (v_isSharedCheck_2181_ == 0)
{
v___x_2053_ = v___x_2049_;
v_isShared_2054_ = v_isSharedCheck_2181_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_snd_2051_);
lean_inc(v_fst_2050_);
lean_dec(v___x_2049_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2181_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v_val_2056_; lean_object* v___y_2074_; lean_object* v___y_2075_; lean_object* v_val_2088_; lean_object* v___y_2089_; lean_object* v___y_2090_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; 
v___x_2114_ = lean_unsigned_to_nat(3u);
v___x_2115_ = l_Lean_Syntax_getArg(v_stx_2043_, v___x_2114_);
v___x_2116_ = l_Lean_Syntax_getOptional_x3f(v___x_2115_);
lean_dec(v___x_2115_);
if (lean_obj_tag(v___x_2116_) == 0)
{
uint8_t v_isUnsafe_2117_; 
v_isUnsafe_2117_ = lean_ctor_get_uint8(v_modifiers_2042_, sizeof(void*)*3 + 4);
if (v_isUnsafe_2117_ == 0)
{
lean_object* v___x_2118_; 
v___x_2118_ = l_Lean_Elab_Command_getRef___redArg(v_a_2044_);
if (lean_obj_tag(v___x_2118_) == 0)
{
lean_object* v_a_2119_; lean_object* v___x_2120_; lean_object* v___x_2129_; 
v_a_2119_ = lean_ctor_get(v___x_2118_, 0);
lean_inc(v_a_2119_);
lean_dec_ref_known(v___x_2118_, 1);
v___x_2120_ = l_Lean_SourceInfo_fromRef(v_a_2119_, v_isUnsafe_2117_);
lean_dec(v_a_2119_);
v___x_2129_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_2044_);
if (lean_obj_tag(v___x_2129_) == 0)
{
lean_object* v_quotContext_x3f_2130_; 
lean_dec_ref_known(v___x_2129_, 1);
v_quotContext_x3f_2130_ = lean_ctor_get(v_a_2044_, 5);
if (lean_obj_tag(v_quotContext_x3f_2130_) == 0)
{
lean_object* v___x_2131_; 
v___x_2131_ = l_Lean_getMainModule___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__2___redArg(v_a_2045_);
lean_dec_ref(v___x_2131_);
goto v___jp_2121_;
}
else
{
goto v___jp_2121_;
}
}
else
{
lean_object* v_a_2132_; lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2139_; 
lean_dec(v___x_2120_);
lean_del_object(v___x_2053_);
lean_dec(v_snd_2051_);
lean_dec(v_fst_2050_);
lean_dec(v_stx_2043_);
lean_dec_ref(v_modifiers_2042_);
v_a_2132_ = lean_ctor_get(v___x_2129_, 0);
v_isSharedCheck_2139_ = !lean_is_exclusive(v___x_2129_);
if (v_isSharedCheck_2139_ == 0)
{
v___x_2134_ = v___x_2129_;
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
else
{
lean_inc(v_a_2132_);
lean_dec(v___x_2129_);
v___x_2134_ = lean_box(0);
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
v_resetjp_2133_:
{
lean_object* v___x_2137_; 
if (v_isShared_2135_ == 0)
{
v___x_2137_ = v___x_2134_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v_a_2132_);
v___x_2137_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2136_;
}
v_reusejp_2136_:
{
return v___x_2137_;
}
}
}
v___jp_2121_:
{
lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; 
v___x_2122_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfOpaque___closed__9));
v___x_2123_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfOpaque___closed__10));
lean_inc_n(v___x_2120_, 2);
v___x_2124_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2124_, 0, v___x_2120_);
lean_ctor_set(v___x_2124_, 1, v___x_2123_);
v___x_2125_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__7));
v___x_2126_ = lean_obj_once(&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__6, &l_Lean_Elab_Command_mkDefViewOfOpaque___closed__6_once, _init_l_Lean_Elab_Command_mkDefViewOfOpaque___closed__6);
v___x_2127_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2127_, 0, v___x_2120_);
lean_ctor_set(v___x_2127_, 1, v___x_2125_);
lean_ctor_set(v___x_2127_, 2, v___x_2126_);
v___x_2128_ = l_Lean_Syntax_node2(v___x_2120_, v___x_2122_, v___x_2124_, v___x_2127_);
v_val_2088_ = v___x_2128_;
v___y_2089_ = v_a_2044_;
v___y_2090_ = v_a_2045_;
goto v___jp_2087_;
}
}
else
{
lean_object* v_a_2140_; lean_object* v___x_2142_; uint8_t v_isShared_2143_; uint8_t v_isSharedCheck_2147_; 
lean_del_object(v___x_2053_);
lean_dec(v_snd_2051_);
lean_dec(v_fst_2050_);
lean_dec(v_stx_2043_);
lean_dec_ref(v_modifiers_2042_);
v_a_2140_ = lean_ctor_get(v___x_2118_, 0);
v_isSharedCheck_2147_ = !lean_is_exclusive(v___x_2118_);
if (v_isSharedCheck_2147_ == 0)
{
v___x_2142_ = v___x_2118_;
v_isShared_2143_ = v_isSharedCheck_2147_;
goto v_resetjp_2141_;
}
else
{
lean_inc(v_a_2140_);
lean_dec(v___x_2118_);
v___x_2142_ = lean_box(0);
v_isShared_2143_ = v_isSharedCheck_2147_;
goto v_resetjp_2141_;
}
v_resetjp_2141_:
{
lean_object* v___x_2145_; 
if (v_isShared_2143_ == 0)
{
v___x_2145_ = v___x_2142_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2146_; 
v_reuseFailAlloc_2146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2146_, 0, v_a_2140_);
v___x_2145_ = v_reuseFailAlloc_2146_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
return v___x_2145_;
}
}
}
}
else
{
lean_object* v___x_2148_; 
v___x_2148_ = l_Lean_Elab_Command_getRef___redArg(v_a_2044_);
if (lean_obj_tag(v___x_2148_) == 0)
{
lean_object* v_a_2149_; uint8_t v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2161_; 
v_a_2149_ = lean_ctor_get(v___x_2148_, 0);
lean_inc(v_a_2149_);
lean_dec_ref_known(v___x_2148_, 1);
v___x_2150_ = 0;
v___x_2151_ = l_Lean_SourceInfo_fromRef(v_a_2149_, v___x_2150_);
lean_dec(v_a_2149_);
v___x_2161_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_2044_);
if (lean_obj_tag(v___x_2161_) == 0)
{
lean_object* v_quotContext_x3f_2162_; 
lean_dec_ref_known(v___x_2161_, 1);
v_quotContext_x3f_2162_ = lean_ctor_get(v_a_2044_, 5);
if (lean_obj_tag(v_quotContext_x3f_2162_) == 0)
{
lean_object* v___x_2163_; 
v___x_2163_ = l_Lean_getMainModule___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__2___redArg(v_a_2045_);
lean_dec_ref(v___x_2163_);
goto v___jp_2152_;
}
else
{
goto v___jp_2152_;
}
}
else
{
lean_object* v_a_2164_; lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2171_; 
lean_dec(v___x_2151_);
lean_del_object(v___x_2053_);
lean_dec(v_snd_2051_);
lean_dec(v_fst_2050_);
lean_dec(v_stx_2043_);
lean_dec_ref(v_modifiers_2042_);
v_a_2164_ = lean_ctor_get(v___x_2161_, 0);
v_isSharedCheck_2171_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2171_ == 0)
{
v___x_2166_ = v___x_2161_;
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
else
{
lean_inc(v_a_2164_);
lean_dec(v___x_2161_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
lean_object* v___x_2169_; 
if (v_isShared_2167_ == 0)
{
v___x_2169_ = v___x_2166_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v_a_2164_);
v___x_2169_ = v_reuseFailAlloc_2170_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
return v___x_2169_;
}
}
}
v___jp_2152_:
{
lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; 
v___x_2153_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfOpaque___closed__9));
v___x_2154_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfOpaque___closed__10));
lean_inc_n(v___x_2151_, 3);
v___x_2155_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2155_, 0, v___x_2151_);
lean_ctor_set(v___x_2155_, 1, v___x_2154_);
v___x_2156_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__7));
v___x_2157_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfOpaque___closed__11));
v___x_2158_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2158_, 0, v___x_2151_);
lean_ctor_set(v___x_2158_, 1, v___x_2157_);
v___x_2159_ = l_Lean_Syntax_node1(v___x_2151_, v___x_2156_, v___x_2158_);
v___x_2160_ = l_Lean_Syntax_node2(v___x_2151_, v___x_2153_, v___x_2155_, v___x_2159_);
v_val_2088_ = v___x_2160_;
v___y_2089_ = v_a_2044_;
v___y_2090_ = v_a_2045_;
goto v___jp_2087_;
}
}
else
{
lean_object* v_a_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2179_; 
lean_del_object(v___x_2053_);
lean_dec(v_snd_2051_);
lean_dec(v_fst_2050_);
lean_dec(v_stx_2043_);
lean_dec_ref(v_modifiers_2042_);
v_a_2172_ = lean_ctor_get(v___x_2148_, 0);
v_isSharedCheck_2179_ = !lean_is_exclusive(v___x_2148_);
if (v_isSharedCheck_2179_ == 0)
{
v___x_2174_ = v___x_2148_;
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_a_2172_);
lean_dec(v___x_2148_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
v_resetjp_2173_:
{
lean_object* v___x_2177_; 
if (v_isShared_2175_ == 0)
{
v___x_2177_ = v___x_2174_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v_a_2172_);
v___x_2177_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2176_;
}
v_reusejp_2176_:
{
return v___x_2177_;
}
}
}
}
}
else
{
lean_object* v_val_2180_; 
lean_del_object(v___x_2053_);
v_val_2180_ = lean_ctor_get(v___x_2116_, 0);
lean_inc(v_val_2180_);
lean_dec_ref_known(v___x_2116_, 1);
v_val_2056_ = v_val_2180_;
goto v___jp_2055_;
}
v___jp_2055_:
{
lean_object* v_docString_x3f_2057_; uint8_t v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; 
v_docString_x3f_2057_ = lean_ctor_get(v_modifiers_2042_, 1);
lean_inc(v_docString_x3f_2057_);
v___x_2058_ = 4;
v___x_2059_ = l_Lean_Syntax_getArgs(v_stx_2043_);
v___x_2060_ = lean_unsigned_to_nat(3u);
v___x_2061_ = lean_unsigned_to_nat(0u);
v___x_2062_ = l_Array_toSubarray___redArg(v___x_2059_, v___x_2061_, v___x_2060_);
v___x_2063_ = l_Subarray_copy___redArg(v___x_2062_);
v___x_2064_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__7));
v___x_2065_ = lean_box(2);
v___x_2066_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2066_, 0, v___x_2065_);
lean_ctor_set(v___x_2066_, 1, v___x_2064_);
lean_ctor_set(v___x_2066_, 2, v___x_2063_);
v___x_2067_ = lean_unsigned_to_nat(1u);
v___x_2068_ = l_Lean_Syntax_getArg(v_stx_2043_, v___x_2067_);
v___x_2069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2069_, 0, v_snd_2051_);
v___x_2070_ = lean_box(0);
v___x_2071_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_2071_, 0, v_stx_2043_);
lean_ctor_set(v___x_2071_, 1, v___x_2066_);
lean_ctor_set(v___x_2071_, 2, v_modifiers_2042_);
lean_ctor_set(v___x_2071_, 3, v___x_2068_);
lean_ctor_set(v___x_2071_, 4, v_fst_2050_);
lean_ctor_set(v___x_2071_, 5, v___x_2069_);
lean_ctor_set(v___x_2071_, 6, v_val_2056_);
lean_ctor_set(v___x_2071_, 7, v_docString_x3f_2057_);
lean_ctor_set(v___x_2071_, 8, v___x_2070_);
lean_ctor_set(v___x_2071_, 9, v___x_2070_);
lean_ctor_set_uint8(v___x_2071_, sizeof(void*)*10, v___x_2058_);
v___x_2072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2072_, 0, v___x_2071_);
return v___x_2072_;
}
v___jp_2073_:
{
lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2079_; 
v___x_2076_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfOpaque___closed__1));
v___x_2077_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfOpaque___closed__2));
lean_inc(v___y_2075_);
if (v_isShared_2054_ == 0)
{
lean_ctor_set_tag(v___x_2053_, 2);
lean_ctor_set(v___x_2053_, 1, v___x_2077_);
lean_ctor_set(v___x_2053_, 0, v___y_2075_);
v___x_2079_ = v___x_2053_;
goto v_reusejp_2078_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v___y_2075_);
lean_ctor_set(v_reuseFailAlloc_2086_, 1, v___x_2077_);
v___x_2079_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2078_;
}
v_reusejp_2078_:
{
lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; 
v___x_2080_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfOpaque___closed__5));
v___x_2081_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__7));
v___x_2082_ = lean_obj_once(&l_Lean_Elab_Command_mkDefViewOfOpaque___closed__6, &l_Lean_Elab_Command_mkDefViewOfOpaque___closed__6_once, _init_l_Lean_Elab_Command_mkDefViewOfOpaque___closed__6);
lean_inc_n(v___y_2075_, 2);
v___x_2083_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2083_, 0, v___y_2075_);
lean_ctor_set(v___x_2083_, 1, v___x_2081_);
lean_ctor_set(v___x_2083_, 2, v___x_2082_);
lean_inc_ref_n(v___x_2083_, 2);
v___x_2084_ = l_Lean_Syntax_node2(v___y_2075_, v___x_2080_, v___x_2083_, v___x_2083_);
v___x_2085_ = l_Lean_Syntax_node4(v___y_2075_, v___x_2076_, v___x_2079_, v___y_2074_, v___x_2084_, v___x_2083_);
v_val_2056_ = v___x_2085_;
goto v___jp_2055_;
}
}
v___jp_2087_:
{
lean_object* v___x_2091_; 
v___x_2091_ = l_Lean_Elab_Command_getRef___redArg(v___y_2089_);
if (lean_obj_tag(v___x_2091_) == 0)
{
lean_object* v_a_2092_; uint8_t v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; 
v_a_2092_ = lean_ctor_get(v___x_2091_, 0);
lean_inc(v_a_2092_);
lean_dec_ref_known(v___x_2091_, 1);
v___x_2093_ = 0;
v___x_2094_ = l_Lean_SourceInfo_fromRef(v_a_2092_, v___x_2093_);
lean_dec(v_a_2092_);
v___x_2095_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_2089_);
if (lean_obj_tag(v___x_2095_) == 0)
{
lean_object* v_quotContext_x3f_2096_; 
lean_dec_ref_known(v___x_2095_, 1);
v_quotContext_x3f_2096_ = lean_ctor_get(v___y_2089_, 5);
if (lean_obj_tag(v_quotContext_x3f_2096_) == 0)
{
lean_object* v___x_2097_; 
v___x_2097_ = l_Lean_getMainModule___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__2___redArg(v___y_2090_);
lean_dec_ref(v___x_2097_);
v___y_2074_ = v_val_2088_;
v___y_2075_ = v___x_2094_;
goto v___jp_2073_;
}
else
{
v___y_2074_ = v_val_2088_;
v___y_2075_ = v___x_2094_;
goto v___jp_2073_;
}
}
else
{
lean_object* v_a_2098_; lean_object* v___x_2100_; uint8_t v_isShared_2101_; uint8_t v_isSharedCheck_2105_; 
lean_dec(v___x_2094_);
lean_dec(v_val_2088_);
lean_del_object(v___x_2053_);
lean_dec(v_snd_2051_);
lean_dec(v_fst_2050_);
lean_dec(v_stx_2043_);
lean_dec_ref(v_modifiers_2042_);
v_a_2098_ = lean_ctor_get(v___x_2095_, 0);
v_isSharedCheck_2105_ = !lean_is_exclusive(v___x_2095_);
if (v_isSharedCheck_2105_ == 0)
{
v___x_2100_ = v___x_2095_;
v_isShared_2101_ = v_isSharedCheck_2105_;
goto v_resetjp_2099_;
}
else
{
lean_inc(v_a_2098_);
lean_dec(v___x_2095_);
v___x_2100_ = lean_box(0);
v_isShared_2101_ = v_isSharedCheck_2105_;
goto v_resetjp_2099_;
}
v_resetjp_2099_:
{
lean_object* v___x_2103_; 
if (v_isShared_2101_ == 0)
{
v___x_2103_ = v___x_2100_;
goto v_reusejp_2102_;
}
else
{
lean_object* v_reuseFailAlloc_2104_; 
v_reuseFailAlloc_2104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2104_, 0, v_a_2098_);
v___x_2103_ = v_reuseFailAlloc_2104_;
goto v_reusejp_2102_;
}
v_reusejp_2102_:
{
return v___x_2103_;
}
}
}
}
else
{
lean_object* v_a_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2113_; 
lean_dec(v_val_2088_);
lean_del_object(v___x_2053_);
lean_dec(v_snd_2051_);
lean_dec(v_fst_2050_);
lean_dec(v_stx_2043_);
lean_dec_ref(v_modifiers_2042_);
v_a_2106_ = lean_ctor_get(v___x_2091_, 0);
v_isSharedCheck_2113_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2113_ == 0)
{
v___x_2108_ = v___x_2091_;
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
else
{
lean_inc(v_a_2106_);
lean_dec(v___x_2091_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkDefViewOfOpaque___boxed(lean_object* v_modifiers_2182_, lean_object* v_stx_2183_, lean_object* v_a_2184_, lean_object* v_a_2185_, lean_object* v_a_2186_){
_start:
{
lean_object* v_res_2187_; 
v_res_2187_ = l_Lean_Elab_Command_mkDefViewOfOpaque(v_modifiers_2182_, v_stx_2183_, v_a_2184_, v_a_2185_);
lean_dec(v_a_2185_);
lean_dec_ref(v_a_2184_);
return v_res_2187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkDefViewOfExample(lean_object* v_modifiers_2200_, lean_object* v_stx_2201_){
_start:
{
lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v_fst_2205_; lean_object* v_snd_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v_docString_x3f_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; uint8_t v___x_2214_; lean_object* v_id_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; uint8_t v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; 
v___x_2202_ = lean_unsigned_to_nat(1u);
v___x_2203_ = l_Lean_Syntax_getArg(v_stx_2201_, v___x_2202_);
v___x_2204_ = l_Lean_Elab_expandOptDeclSig(v___x_2203_);
lean_dec(v___x_2203_);
v_fst_2205_ = lean_ctor_get(v___x_2204_, 0);
lean_inc(v_fst_2205_);
v_snd_2206_ = lean_ctor_get(v___x_2204_, 1);
lean_inc(v_snd_2206_);
lean_dec_ref(v___x_2204_);
v___x_2207_ = lean_unsigned_to_nat(0u);
v___x_2208_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfAbbrev___closed__7));
v___x_2209_ = lean_box(2);
v___x_2210_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfExample___closed__0));
v_docString_x3f_2211_ = lean_ctor_get(v_modifiers_2200_, 1);
lean_inc(v_docString_x3f_2211_);
v___x_2212_ = l_Lean_Syntax_getArg(v_stx_2201_, v___x_2207_);
v___x_2213_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfExample___closed__2));
v___x_2214_ = 1;
v_id_2215_ = l_Lean_mkIdentFrom(v___x_2212_, v___x_2213_, v___x_2214_);
lean_dec(v___x_2212_);
v___x_2216_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfExample___closed__3));
v___x_2217_ = lean_unsigned_to_nat(2u);
v___x_2218_ = lean_mk_empty_array_with_capacity(v___x_2217_);
v___x_2219_ = lean_array_push(v___x_2218_, v_id_2215_);
v___x_2220_ = lean_array_push(v___x_2219_, v___x_2210_);
v___x_2221_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2221_, 0, v___x_2209_);
lean_ctor_set(v___x_2221_, 1, v___x_2216_);
lean_ctor_set(v___x_2221_, 2, v___x_2220_);
v___x_2222_ = 3;
v___x_2223_ = l_Lean_Syntax_getArgs(v_stx_2201_);
v___x_2224_ = l_Array_toSubarray___redArg(v___x_2223_, v___x_2207_, v___x_2217_);
v___x_2225_ = l_Subarray_copy___redArg(v___x_2224_);
v___x_2226_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2226_, 0, v___x_2209_);
lean_ctor_set(v___x_2226_, 1, v___x_2208_);
lean_ctor_set(v___x_2226_, 2, v___x_2225_);
v___x_2227_ = l_Lean_Syntax_getArg(v_stx_2201_, v___x_2217_);
v___x_2228_ = lean_box(0);
v___x_2229_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_2229_, 0, v_stx_2201_);
lean_ctor_set(v___x_2229_, 1, v___x_2226_);
lean_ctor_set(v___x_2229_, 2, v_modifiers_2200_);
lean_ctor_set(v___x_2229_, 3, v___x_2221_);
lean_ctor_set(v___x_2229_, 4, v_fst_2205_);
lean_ctor_set(v___x_2229_, 5, v_snd_2206_);
lean_ctor_set(v___x_2229_, 6, v___x_2227_);
lean_ctor_set(v___x_2229_, 7, v_docString_x3f_2211_);
lean_ctor_set(v___x_2229_, 8, v___x_2228_);
lean_ctor_set(v___x_2229_, 9, v___x_2228_);
lean_ctor_set_uint8(v___x_2229_, sizeof(void*)*10, v___x_2222_);
return v___x_2229_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Command_isDefLike(lean_object* v_stx_2265_){
_start:
{
lean_object* v_declKind_2266_; lean_object* v___x_2267_; uint8_t v___x_2268_; 
v_declKind_2266_ = l_Lean_Syntax_getKind(v_stx_2265_);
v___x_2267_ = ((lean_object*)(l_Lean_Elab_Command_isDefLike___closed__1));
v___x_2268_ = lean_name_eq(v_declKind_2266_, v___x_2267_);
if (v___x_2268_ == 0)
{
lean_object* v___x_2269_; uint8_t v___x_2270_; 
v___x_2269_ = ((lean_object*)(l_Lean_Elab_Command_isDefLike___closed__3));
v___x_2270_ = lean_name_eq(v_declKind_2266_, v___x_2269_);
if (v___x_2270_ == 0)
{
lean_object* v___x_2271_; uint8_t v___x_2272_; 
v___x_2271_ = ((lean_object*)(l_Lean_Elab_Command_isDefLike___closed__5));
v___x_2272_ = lean_name_eq(v_declKind_2266_, v___x_2271_);
if (v___x_2272_ == 0)
{
lean_object* v___x_2273_; uint8_t v___x_2274_; 
v___x_2273_ = ((lean_object*)(l_Lean_Elab_Command_isDefLike___closed__7));
v___x_2274_ = lean_name_eq(v_declKind_2266_, v___x_2273_);
if (v___x_2274_ == 0)
{
lean_object* v___x_2275_; uint8_t v___x_2276_; 
v___x_2275_ = ((lean_object*)(l_Lean_Elab_Command_isDefLike___closed__8));
v___x_2276_ = lean_name_eq(v_declKind_2266_, v___x_2275_);
if (v___x_2276_ == 0)
{
lean_object* v___x_2277_; uint8_t v___x_2278_; 
v___x_2277_ = ((lean_object*)(l_Lean_Elab_Command_isDefLike___closed__10));
v___x_2278_ = lean_name_eq(v_declKind_2266_, v___x_2277_);
lean_dec(v_declKind_2266_);
return v___x_2278_;
}
else
{
lean_dec(v_declKind_2266_);
return v___x_2276_;
}
}
else
{
lean_dec(v_declKind_2266_);
return v___x_2274_;
}
}
else
{
lean_dec(v_declKind_2266_);
return v___x_2272_;
}
}
else
{
lean_dec(v_declKind_2266_);
return v___x_2270_;
}
}
else
{
lean_dec(v_declKind_2266_);
return v___x_2268_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_isDefLike___boxed(lean_object* v_stx_2279_){
_start:
{
uint8_t v_res_2280_; lean_object* v_r_2281_; 
v_res_2280_ = l_Lean_Elab_Command_isDefLike(v_stx_2279_);
v_r_2281_ = lean_box(v_res_2280_);
return v_r_2281_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkDefView___closed__1(void){
_start:
{
lean_object* v___x_2283_; lean_object* v___x_2284_; 
v___x_2283_ = ((lean_object*)(l_Lean_Elab_Command_mkDefView___closed__0));
v___x_2284_ = l_Lean_stringToMessageData(v___x_2283_);
return v___x_2284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkDefView(lean_object* v_modifiers_2285_, lean_object* v_stx_2286_, lean_object* v_a_2287_, lean_object* v_a_2288_){
_start:
{
lean_object* v_declKind_2290_; lean_object* v___x_2291_; 
lean_inc(v_stx_2286_);
v_declKind_2290_ = l_Lean_Syntax_getKind(v_stx_2286_);
v___x_2291_ = l_Lean_Elab_Command_getScope___redArg(v_a_2288_);
if (lean_obj_tag(v___x_2291_) == 0)
{
lean_object* v_a_2292_; lean_object* v___x_2294_; uint8_t v_isShared_2295_; uint8_t v_isSharedCheck_2356_; 
v_a_2292_ = lean_ctor_get(v___x_2291_, 0);
v_isSharedCheck_2356_ = !lean_is_exclusive(v___x_2291_);
if (v_isSharedCheck_2356_ == 0)
{
v___x_2294_ = v___x_2291_;
v_isShared_2295_ = v_isSharedCheck_2356_;
goto v_resetjp_2293_;
}
else
{
lean_inc(v_a_2292_);
lean_dec(v___x_2291_);
v___x_2294_ = lean_box(0);
v_isShared_2295_ = v_isSharedCheck_2356_;
goto v_resetjp_2293_;
}
v_resetjp_2293_:
{
lean_object* v___y_2297_; lean_object* v_stx_2330_; lean_object* v_docString_x3f_2331_; uint8_t v_visibility_2332_; uint8_t v_isProtected_2333_; uint8_t v_computeKind_2334_; uint8_t v_recKind_2335_; uint8_t v_isUnsafe_2336_; lean_object* v_attrs_2337_; uint8_t v___x_2338_; uint8_t v___x_2339_; 
v_stx_2330_ = lean_ctor_get(v_modifiers_2285_, 0);
v_docString_x3f_2331_ = lean_ctor_get(v_modifiers_2285_, 1);
v_visibility_2332_ = lean_ctor_get_uint8(v_modifiers_2285_, sizeof(void*)*3);
v_isProtected_2333_ = lean_ctor_get_uint8(v_modifiers_2285_, sizeof(void*)*3 + 1);
v_computeKind_2334_ = lean_ctor_get_uint8(v_modifiers_2285_, sizeof(void*)*3 + 2);
v_recKind_2335_ = lean_ctor_get_uint8(v_modifiers_2285_, sizeof(void*)*3 + 3);
v_isUnsafe_2336_ = lean_ctor_get_uint8(v_modifiers_2285_, sizeof(void*)*3 + 4);
v_attrs_2337_ = lean_ctor_get(v_modifiers_2285_, 2);
v___x_2338_ = 0;
v___x_2339_ = l_Lean_Elab_instBEqComputeKind_beq(v_computeKind_2334_, v___x_2338_);
if (v___x_2339_ == 0)
{
lean_dec(v_a_2292_);
v___y_2297_ = v_modifiers_2285_;
goto v___jp_2296_;
}
else
{
uint8_t v_isMeta_2340_; 
v_isMeta_2340_ = lean_ctor_get_uint8(v_a_2292_, sizeof(void*)*10 + 2);
lean_dec(v_a_2292_);
if (v_isMeta_2340_ == 0)
{
v___y_2297_ = v_modifiers_2285_;
goto v___jp_2296_;
}
else
{
lean_object* v___x_2341_; uint8_t v___x_2342_; 
v___x_2341_ = ((lean_object*)(l_Lean_Elab_Command_isDefLike___closed__5));
v___x_2342_ = lean_name_eq(v_declKind_2290_, v___x_2341_);
if (v___x_2342_ == 0)
{
lean_object* v___x_2343_; uint8_t v___x_2344_; 
v___x_2343_ = ((lean_object*)(l_Lean_Elab_Command_isDefLike___closed__10));
v___x_2344_ = lean_name_eq(v_declKind_2290_, v___x_2343_);
if (v___x_2344_ == 0)
{
lean_object* v___x_2346_; uint8_t v_isShared_2347_; uint8_t v_isSharedCheck_2352_; 
lean_inc_ref(v_attrs_2337_);
lean_inc(v_docString_x3f_2331_);
lean_inc(v_stx_2330_);
v_isSharedCheck_2352_ = !lean_is_exclusive(v_modifiers_2285_);
if (v_isSharedCheck_2352_ == 0)
{
lean_object* v_unused_2353_; lean_object* v_unused_2354_; lean_object* v_unused_2355_; 
v_unused_2353_ = lean_ctor_get(v_modifiers_2285_, 2);
lean_dec(v_unused_2353_);
v_unused_2354_ = lean_ctor_get(v_modifiers_2285_, 1);
lean_dec(v_unused_2354_);
v_unused_2355_ = lean_ctor_get(v_modifiers_2285_, 0);
lean_dec(v_unused_2355_);
v___x_2346_ = v_modifiers_2285_;
v_isShared_2347_ = v_isSharedCheck_2352_;
goto v_resetjp_2345_;
}
else
{
lean_dec(v_modifiers_2285_);
v___x_2346_ = lean_box(0);
v_isShared_2347_ = v_isSharedCheck_2352_;
goto v_resetjp_2345_;
}
v_resetjp_2345_:
{
uint8_t v___x_2348_; lean_object* v___x_2350_; 
v___x_2348_ = 1;
if (v_isShared_2347_ == 0)
{
v___x_2350_ = v___x_2346_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2351_; 
v_reuseFailAlloc_2351_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_2351_, 0, v_stx_2330_);
lean_ctor_set(v_reuseFailAlloc_2351_, 1, v_docString_x3f_2331_);
lean_ctor_set(v_reuseFailAlloc_2351_, 2, v_attrs_2337_);
lean_ctor_set_uint8(v_reuseFailAlloc_2351_, sizeof(void*)*3, v_visibility_2332_);
lean_ctor_set_uint8(v_reuseFailAlloc_2351_, sizeof(void*)*3 + 1, v_isProtected_2333_);
lean_ctor_set_uint8(v_reuseFailAlloc_2351_, sizeof(void*)*3 + 3, v_recKind_2335_);
lean_ctor_set_uint8(v_reuseFailAlloc_2351_, sizeof(void*)*3 + 4, v_isUnsafe_2336_);
v___x_2350_ = v_reuseFailAlloc_2351_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
lean_ctor_set_uint8(v___x_2350_, sizeof(void*)*3 + 2, v___x_2348_);
v___y_2297_ = v___x_2350_;
goto v___jp_2296_;
}
}
}
else
{
v___y_2297_ = v_modifiers_2285_;
goto v___jp_2296_;
}
}
else
{
v___y_2297_ = v_modifiers_2285_;
goto v___jp_2296_;
}
}
}
v___jp_2296_:
{
lean_object* v___x_2298_; uint8_t v___x_2299_; 
v___x_2298_ = ((lean_object*)(l_Lean_Elab_Command_isDefLike___closed__1));
v___x_2299_ = lean_name_eq(v_declKind_2290_, v___x_2298_);
if (v___x_2299_ == 0)
{
lean_object* v___x_2300_; uint8_t v___x_2301_; 
v___x_2300_ = ((lean_object*)(l_Lean_Elab_Command_isDefLike___closed__3));
v___x_2301_ = lean_name_eq(v_declKind_2290_, v___x_2300_);
if (v___x_2301_ == 0)
{
lean_object* v___x_2302_; uint8_t v___x_2303_; 
v___x_2302_ = ((lean_object*)(l_Lean_Elab_Command_isDefLike___closed__5));
v___x_2303_ = lean_name_eq(v_declKind_2290_, v___x_2302_);
if (v___x_2303_ == 0)
{
lean_object* v___x_2304_; uint8_t v___x_2305_; 
v___x_2304_ = ((lean_object*)(l_Lean_Elab_Command_isDefLike___closed__7));
v___x_2305_ = lean_name_eq(v_declKind_2290_, v___x_2304_);
if (v___x_2305_ == 0)
{
lean_object* v___x_2306_; uint8_t v___x_2307_; 
v___x_2306_ = ((lean_object*)(l_Lean_Elab_Command_isDefLike___closed__8));
v___x_2307_ = lean_name_eq(v_declKind_2290_, v___x_2306_);
if (v___x_2307_ == 0)
{
lean_object* v___x_2308_; uint8_t v___x_2309_; 
v___x_2308_ = ((lean_object*)(l_Lean_Elab_Command_isDefLike___closed__10));
v___x_2309_ = lean_name_eq(v_declKind_2290_, v___x_2308_);
lean_dec(v_declKind_2290_);
if (v___x_2309_ == 0)
{
lean_object* v___x_2310_; lean_object* v___x_2311_; 
lean_dec_ref(v___y_2297_);
lean_del_object(v___x_2294_);
lean_dec(v_stx_2286_);
v___x_2310_ = lean_obj_once(&l_Lean_Elab_Command_mkDefView___closed__1, &l_Lean_Elab_Command_mkDefView___closed__1_once, _init_l_Lean_Elab_Command_mkDefView___closed__1);
v___x_2311_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_mkDefViewOfInstance_spec__0_spec__4_spec__9___redArg(v___x_2310_, v_a_2287_, v_a_2288_);
return v___x_2311_;
}
else
{
lean_object* v___x_2312_; lean_object* v___x_2314_; 
v___x_2312_ = l_Lean_Elab_Command_mkDefViewOfExample(v___y_2297_, v_stx_2286_);
if (v_isShared_2295_ == 0)
{
lean_ctor_set(v___x_2294_, 0, v___x_2312_);
v___x_2314_ = v___x_2294_;
goto v_reusejp_2313_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v___x_2312_);
v___x_2314_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2313_;
}
v_reusejp_2313_:
{
return v___x_2314_;
}
}
}
else
{
lean_object* v___x_2316_; 
lean_del_object(v___x_2294_);
lean_dec(v_declKind_2290_);
v___x_2316_ = l_Lean_Elab_Command_mkDefViewOfInstance(v___y_2297_, v_stx_2286_, v_a_2287_, v_a_2288_);
return v___x_2316_;
}
}
else
{
lean_object* v___x_2317_; 
lean_del_object(v___x_2294_);
lean_dec(v_declKind_2290_);
v___x_2317_ = l_Lean_Elab_Command_mkDefViewOfOpaque(v___y_2297_, v_stx_2286_, v_a_2287_, v_a_2288_);
return v___x_2317_;
}
}
else
{
lean_object* v___x_2318_; lean_object* v___x_2320_; 
lean_dec(v_declKind_2290_);
v___x_2318_ = l_Lean_Elab_Command_mkDefViewOfTheorem(v___y_2297_, v_stx_2286_);
if (v_isShared_2295_ == 0)
{
lean_ctor_set(v___x_2294_, 0, v___x_2318_);
v___x_2320_ = v___x_2294_;
goto v_reusejp_2319_;
}
else
{
lean_object* v_reuseFailAlloc_2321_; 
v_reuseFailAlloc_2321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2321_, 0, v___x_2318_);
v___x_2320_ = v_reuseFailAlloc_2321_;
goto v_reusejp_2319_;
}
v_reusejp_2319_:
{
return v___x_2320_;
}
}
}
else
{
lean_object* v___x_2322_; lean_object* v___x_2324_; 
lean_dec(v_declKind_2290_);
v___x_2322_ = l_Lean_Elab_Command_mkDefViewOfDef(v___y_2297_, v_stx_2286_);
if (v_isShared_2295_ == 0)
{
lean_ctor_set(v___x_2294_, 0, v___x_2322_);
v___x_2324_ = v___x_2294_;
goto v_reusejp_2323_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v___x_2322_);
v___x_2324_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2323_;
}
v_reusejp_2323_:
{
return v___x_2324_;
}
}
}
else
{
lean_object* v___x_2326_; lean_object* v___x_2328_; 
lean_dec(v_declKind_2290_);
v___x_2326_ = l_Lean_Elab_Command_mkDefViewOfAbbrev(v___y_2297_, v_stx_2286_);
if (v_isShared_2295_ == 0)
{
lean_ctor_set(v___x_2294_, 0, v___x_2326_);
v___x_2328_ = v___x_2294_;
goto v_reusejp_2327_;
}
else
{
lean_object* v_reuseFailAlloc_2329_; 
v_reuseFailAlloc_2329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2329_, 0, v___x_2326_);
v___x_2328_ = v_reuseFailAlloc_2329_;
goto v_reusejp_2327_;
}
v_reusejp_2327_:
{
return v___x_2328_;
}
}
}
}
}
else
{
lean_object* v_a_2357_; lean_object* v___x_2359_; uint8_t v_isShared_2360_; uint8_t v_isSharedCheck_2364_; 
lean_dec(v_declKind_2290_);
lean_dec(v_stx_2286_);
lean_dec_ref(v_modifiers_2285_);
v_a_2357_ = lean_ctor_get(v___x_2291_, 0);
v_isSharedCheck_2364_ = !lean_is_exclusive(v___x_2291_);
if (v_isSharedCheck_2364_ == 0)
{
v___x_2359_ = v___x_2291_;
v_isShared_2360_ = v_isSharedCheck_2364_;
goto v_resetjp_2358_;
}
else
{
lean_inc(v_a_2357_);
lean_dec(v___x_2291_);
v___x_2359_ = lean_box(0);
v_isShared_2360_ = v_isSharedCheck_2364_;
goto v_resetjp_2358_;
}
v_resetjp_2358_:
{
lean_object* v___x_2362_; 
if (v_isShared_2360_ == 0)
{
v___x_2362_ = v___x_2359_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v_a_2357_);
v___x_2362_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
return v___x_2362_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkDefView___boxed(lean_object* v_modifiers_2365_, lean_object* v_stx_2366_, lean_object* v_a_2367_, lean_object* v_a_2368_, lean_object* v_a_2369_){
_start:
{
lean_object* v_res_2370_; 
v_res_2370_ = l_Lean_Elab_Command_mkDefView(v_modifiers_2365_, v_stx_2366_, v_a_2367_, v_a_2368_);
lean_dec(v_a_2368_);
lean_dec_ref(v_a_2367_);
return v_res_2370_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2432_; uint8_t v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; 
v___x_2432_ = ((lean_object*)(l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_));
v___x_2433_ = 0;
v___x_2434_ = ((lean_object*)(l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__23_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_));
v___x_2435_ = l_Lean_registerTraceClass(v___x_2432_, v___x_2433_, v___x_2434_);
return v___x_2435_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2____boxed(lean_object* v_a_2436_){
_start:
{
lean_object* v_res_2437_; 
v_res_2437_ = l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_();
return v_res_2437_;
}
}
static lean_object* _init_l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; 
v___x_2438_ = lean_unsigned_to_nat(2390142386u);
v___x_2439_ = ((lean_object*)(l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__17_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_));
v___x_2440_ = l_Lean_Name_num___override(v___x_2439_, v___x_2438_);
return v___x_2440_;
}
}
static lean_object* _init_l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__1_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; 
v___x_2441_ = ((lean_object*)(l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__19_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_));
v___x_2442_ = lean_obj_once(&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2_, &l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__0_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2_);
v___x_2443_ = l_Lean_Name_str___override(v___x_2442_, v___x_2441_);
return v___x_2443_;
}
}
static lean_object* _init_l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; 
v___x_2444_ = ((lean_object*)(l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__21_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_));
v___x_2445_ = lean_obj_once(&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__1_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2_, &l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__1_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__1_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2_);
v___x_2446_ = l_Lean_Name_str___override(v___x_2445_, v___x_2444_);
return v___x_2446_;
}
}
static lean_object* _init_l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2447_ = lean_unsigned_to_nat(2u);
v___x_2448_ = lean_obj_once(&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2_, &l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__2_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2_);
v___x_2449_ = l_Lean_Name_num___override(v___x_2448_, v___x_2447_);
return v___x_2449_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2451_; uint8_t v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; 
v___x_2451_ = ((lean_object*)(l_Lean_Elab_Command_mkDefViewOfInstance___closed__6));
v___x_2452_ = 0;
v___x_2453_ = lean_obj_once(&l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2_, &l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn___closed__3_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2_);
v___x_2454_ = l_Lean_registerTraceClass(v___x_2451_, v___x_2452_, v___x_2453_);
return v___x_2454_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2____boxed(lean_object* v_a_2455_){
_start:
{
lean_object* v_res_2456_; 
v_res_2456_ = l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2_();
return v_res_2456_;
}
}
lean_object* runtime_initialize_Lean_Elab_DeclNameGen(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_DeclUtil(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_DefView(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_DeclNameGen(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DeclUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_instInhabitedDefKind_default = _init_l_Lean_Elab_instInhabitedDefKind_default();
l_Lean_Elab_instInhabitedDefKind = _init_l_Lean_Elab_instInhabitedDefKind();
l_Lean_Elab_instInhabitedDefViewElabHeaderData_default = _init_l_Lean_Elab_instInhabitedDefViewElabHeaderData_default();
lean_mark_persistent(l_Lean_Elab_instInhabitedDefViewElabHeaderData_default);
l_Lean_Elab_instInhabitedDefViewElabHeaderData = _init_l_Lean_Elab_instInhabitedDefViewElabHeaderData();
lean_mark_persistent(l_Lean_Elab_instInhabitedDefViewElabHeaderData);
l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot = _init_l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot();
lean_mark_persistent(l_Lean_Elab_instToSnapshotTreeBodyProcessedSnapshot);
l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot = _init_l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot();
lean_mark_persistent(l_Lean_Elab_instToSnapshotTreeHeaderProcessedSnapshot);
l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot = _init_l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot();
lean_mark_persistent(l_Lean_Elab_instToSnapshotTreeDefsParsedSnapshot);
l_Lean_Elab_instInhabitedDefView_default = _init_l_Lean_Elab_instInhabitedDefView_default();
lean_mark_persistent(l_Lean_Elab_instInhabitedDefView_default);
l_Lean_Elab_instInhabitedDefView = _init_l_Lean_Elab_instInhabitedDefView();
lean_mark_persistent(l_Lean_Elab_instInhabitedDefView);
res = l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_DefView_1745620379____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_DefView_0__Lean_Elab_Command_initFn_00___x40_Lean_Elab_DefView_2390142386____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_DefView(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_DeclNameGen(uint8_t builtin);
lean_object* initialize_Lean_Elab_DeclUtil(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_DefView(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_DeclNameGen(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DeclUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DefView(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_DefView(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_DefView(builtin);
}
#ifdef __cplusplus
}
#endif
