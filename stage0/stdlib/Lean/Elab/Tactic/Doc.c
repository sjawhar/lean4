// Lean compiler output
// Module: Lean.Elab.Tactic.Doc
// Imports: import Lean.DocString public import Lean.Elab.Command public import Lean.Parser.Tactic.Doc
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
extern lean_object* l_Lean_Parser_Tactic_Doc_tacticDocExtExt;
lean_object* l_Lean_TSyntax_getDocString(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t l_Lean_Parser_Tactic_Doc_isTactic(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_Doc_alternativeOfTactic(lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_array_size(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_Doc_knownTacticTagExt;
lean_object* l_Lean_instInhabitedPersistentEnvExtensionState___redArg(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_withExprHover(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_Doc_tacticNameExt;
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_constants(lean_object*);
lean_object* l_Lean_ConstMap_find_x3f_x27(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_Lean_Level_param___override(lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
lean_object* l_Std_DTreeMap_Internal_Impl_balance___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_Doc_tacticTagExt;
extern lean_object* l_Lean_Parser_parserExtension;
extern lean_object* l_Lean_Parser_ParserExtension_instInhabitedState_default;
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_nestD(lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_findDocString_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_Doc_getTacticExtensions(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_TSyntax_getString(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "tactic_extension"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__3_value),LEAN_SCALAR_PTR_LITERAL(226, 244, 145, 122, 23, 135, 199, 68)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Malformed tactic extension command"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__7_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__8_value;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__9_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__10_value;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__11_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "` is not a tactic"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__13_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__14;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "` is an alternative form of `"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__15_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__16;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Missing documentation comment"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__17 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__17_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__18;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Doc"};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "elabTacticExtension"};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(197, 62, 21, 167, 211, 43, 164, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(128, 44, 144, 107, 80, 40, 109, 178)}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(30) << 1) | 1)),((lean_object*)(((size_t)(56) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__0_value),((lean_object*)(((size_t)(43) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__1_value),((lean_object*)(((size_t)(56) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)(((size_t)(47) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(17) << 1) | 1)),((lean_object*)(((size_t)(66) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__3_value),((lean_object*)(((size_t)(47) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__4_value),((lean_object*)(((size_t)(66) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___boxed(lean_object*);
static const lean_string_object l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unexpected doc string"};
static const lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__0 = (const lean_object*)&l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__1;
static const lean_string_object l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "versoCommentBody"};
static const lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__2 = (const lean_object*)&l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Malformed 'register_tactic_tag' command"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__2_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "register_tactic_tag"};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__4_value),LEAN_SCALAR_PTR_LITERAL(207, 55, 57, 11, 65, 76, 175, 2)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "elabRegisterTacticTag"};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(197, 62, 21, 167, 211, 43, 164, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 30, 89, 153, 147, 186, 30, 23)}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(46) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(36) << 1) | 1)),((lean_object*)(((size_t)(61) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__0_value),((lean_object*)(((size_t)(46) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__1_value),((lean_object*)(((size_t)(61) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(71) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__3_value),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__4_value),((lean_object*)(((size_t)(71) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___closed__0;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___closed__1;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "$"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4___closed__0_value;
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(158, 68, 185, 128, 48, 210, 24, 186)}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__5_value;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__1_value)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__7_value),((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__3_value),((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__4_value),((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__5_value)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__8_value),((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__6_value)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 76, 33, 121, 85, 143, 17, 224)}};
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__0_value)} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__2;
static const lean_closure_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_param___override, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__8_spec__14(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__0 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__0_value;
static const lean_string_object l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "• "};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__1 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__1_value;
static lean_once_cell_t l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__2;
static const lean_string_object l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 4, .m_data = " — \""};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__3 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__3_value;
static lean_once_cell_t l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__4;
static const lean_string_object l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\""};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__5 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__5_value;
static lean_once_cell_t l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__6;
static const lean_string_object l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__7 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__7_value;
static const lean_ctor_object l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__7_value)}};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__8 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__8_value;
static lean_once_cell_t l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__9;
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___lam__0___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20_spec__23(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20_spec__23___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__18___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__19(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10___closed__0;
static const lean_array_object l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__0;
static const lean_string_object l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Available tags: "};
static const lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__18(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "printTacTags"};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 6, 105, 20, 120, 144, 238, 207)}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "elabPrintTacTags"};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(197, 62, 21, 167, 211, 43, 164, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(202, 38, 126, 200, 28, 172, 117, 128)}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "Displays all available tactic tags, with documentation.\n"};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(98) << 1) | 1)),((lean_object*)(((size_t)(37) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(130) << 1) | 1)),((lean_object*)(((size_t)(17) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__0_value),((lean_object*)(((size_t)(37) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__1_value),((lean_object*)(((size_t)(17) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(98) << 1) | 1)),((lean_object*)(((size_t)(41) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(98) << 1) | 1)),((lean_object*)(((size_t)(57) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__3_value),((lean_object*)(((size_t)(41) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__4_value),((lean_object*)(((size_t)(57) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Doc_allTacticDocs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Doc_allTacticDocs___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___lam__0(lean_object* v___x_1_, lean_object* v___x_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v___x_1_, v___x_2_, v___y_7_, v___y_8_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___lam__0___boxed(lean_object* v___x_11_, lean_object* v___x_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Lean_Elab_Tactic_Doc_elabTacticExtension___lam__0(v___x_11_, v___x_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_, v___y_17_, v___y_18_);
lean_dec(v___y_18_);
lean_dec_ref(v___y_17_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
return v_res_20_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_21_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__0);
v___x_23_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
return v___x_23_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_24_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__1);
v___x_25_ = lean_unsigned_to_nat(0u);
v___x_26_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
lean_ctor_set(v___x_26_, 1, v___x_25_);
lean_ctor_set(v___x_26_, 2, v___x_25_);
lean_ctor_set(v___x_26_, 3, v___x_25_);
lean_ctor_set(v___x_26_, 4, v___x_24_);
lean_ctor_set(v___x_26_, 5, v___x_24_);
lean_ctor_set(v___x_26_, 6, v___x_24_);
lean_ctor_set(v___x_26_, 7, v___x_24_);
lean_ctor_set(v___x_26_, 8, v___x_24_);
lean_ctor_set(v___x_26_, 9, v___x_24_);
return v___x_26_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = lean_unsigned_to_nat(32u);
v___x_28_ = lean_mk_empty_array_with_capacity(v___x_27_);
v___x_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
return v___x_29_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__4(void){
_start:
{
size_t v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_30_ = ((size_t)5ULL);
v___x_31_ = lean_unsigned_to_nat(0u);
v___x_32_ = lean_unsigned_to_nat(32u);
v___x_33_ = lean_mk_empty_array_with_capacity(v___x_32_);
v___x_34_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__3);
v___x_35_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_35_, 0, v___x_34_);
lean_ctor_set(v___x_35_, 1, v___x_33_);
lean_ctor_set(v___x_35_, 2, v___x_31_);
lean_ctor_set(v___x_35_, 3, v___x_31_);
lean_ctor_set_usize(v___x_35_, 4, v___x_30_);
return v___x_35_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_36_ = lean_box(1);
v___x_37_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__4);
v___x_38_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__1);
v___x_39_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_39_, 0, v___x_38_);
lean_ctor_set(v___x_39_, 1, v___x_37_);
lean_ctor_set(v___x_39_, 2, v___x_36_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg(lean_object* v_msgData_40_, lean_object* v___y_41_){
_start:
{
lean_object* v___x_43_; lean_object* v_env_44_; lean_object* v___x_45_; lean_object* v_scopes_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v_opts_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_43_ = lean_st_ref_get(v___y_41_);
v_env_44_ = lean_ctor_get(v___x_43_, 0);
lean_inc_ref(v_env_44_);
lean_dec(v___x_43_);
v___x_45_ = lean_st_ref_get(v___y_41_);
v_scopes_46_ = lean_ctor_get(v___x_45_, 2);
lean_inc(v_scopes_46_);
lean_dec(v___x_45_);
v___x_47_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_48_ = l_List_head_x21___redArg(v___x_47_, v_scopes_46_);
lean_dec(v_scopes_46_);
v_opts_49_ = lean_ctor_get(v___x_48_, 1);
lean_inc_ref(v_opts_49_);
lean_dec(v___x_48_);
v___x_50_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__2);
v___x_51_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__5);
v___x_52_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_52_, 0, v_env_44_);
lean_ctor_set(v___x_52_, 1, v___x_50_);
lean_ctor_set(v___x_52_, 2, v___x_51_);
lean_ctor_set(v___x_52_, 3, v_opts_49_);
v___x_53_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
lean_ctor_set(v___x_53_, 1, v_msgData_40_);
v___x_54_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_54_, 0, v___x_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___boxed(lean_object* v_msgData_55_, lean_object* v___y_56_, lean_object* v___y_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg(v_msgData_55_, v___y_56_);
lean_dec(v___y_56_);
return v_res_58_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = lean_box(1);
v___x_60_ = l_Lean_MessageData_ofFormat(v___x_59_);
return v___x_60_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__3(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__2));
v___x_65_ = l_Lean_MessageData_ofFormat(v___x_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3(lean_object* v_x_66_, lean_object* v_x_67_){
_start:
{
if (lean_obj_tag(v_x_67_) == 0)
{
return v_x_66_;
}
else
{
lean_object* v_head_68_; lean_object* v_tail_69_; lean_object* v___x_71_; uint8_t v_isShared_72_; uint8_t v_isSharedCheck_91_; 
v_head_68_ = lean_ctor_get(v_x_67_, 0);
v_tail_69_ = lean_ctor_get(v_x_67_, 1);
v_isSharedCheck_91_ = !lean_is_exclusive(v_x_67_);
if (v_isSharedCheck_91_ == 0)
{
v___x_71_ = v_x_67_;
v_isShared_72_ = v_isSharedCheck_91_;
goto v_resetjp_70_;
}
else
{
lean_inc(v_tail_69_);
lean_inc(v_head_68_);
lean_dec(v_x_67_);
v___x_71_ = lean_box(0);
v_isShared_72_ = v_isSharedCheck_91_;
goto v_resetjp_70_;
}
v_resetjp_70_:
{
lean_object* v_before_73_; lean_object* v___x_75_; uint8_t v_isShared_76_; uint8_t v_isSharedCheck_89_; 
v_before_73_ = lean_ctor_get(v_head_68_, 0);
v_isSharedCheck_89_ = !lean_is_exclusive(v_head_68_);
if (v_isSharedCheck_89_ == 0)
{
lean_object* v_unused_90_; 
v_unused_90_ = lean_ctor_get(v_head_68_, 1);
lean_dec(v_unused_90_);
v___x_75_ = v_head_68_;
v_isShared_76_ = v_isSharedCheck_89_;
goto v_resetjp_74_;
}
else
{
lean_inc(v_before_73_);
lean_dec(v_head_68_);
v___x_75_ = lean_box(0);
v_isShared_76_ = v_isSharedCheck_89_;
goto v_resetjp_74_;
}
v_resetjp_74_:
{
lean_object* v___x_77_; lean_object* v___x_79_; 
v___x_77_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0);
if (v_isShared_76_ == 0)
{
lean_ctor_set_tag(v___x_75_, 7);
lean_ctor_set(v___x_75_, 1, v___x_77_);
lean_ctor_set(v___x_75_, 0, v_x_66_);
v___x_79_ = v___x_75_;
goto v_reusejp_78_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v_x_66_);
lean_ctor_set(v_reuseFailAlloc_88_, 1, v___x_77_);
v___x_79_ = v_reuseFailAlloc_88_;
goto v_reusejp_78_;
}
v_reusejp_78_:
{
lean_object* v___x_80_; lean_object* v___x_82_; 
v___x_80_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__3);
if (v_isShared_72_ == 0)
{
lean_ctor_set_tag(v___x_71_, 7);
lean_ctor_set(v___x_71_, 1, v___x_80_);
lean_ctor_set(v___x_71_, 0, v___x_79_);
v___x_82_ = v___x_71_;
goto v_reusejp_81_;
}
else
{
lean_object* v_reuseFailAlloc_87_; 
v_reuseFailAlloc_87_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_87_, 0, v___x_79_);
lean_ctor_set(v_reuseFailAlloc_87_, 1, v___x_80_);
v___x_82_ = v_reuseFailAlloc_87_;
goto v_reusejp_81_;
}
v_reusejp_81_:
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_83_ = l_Lean_MessageData_ofSyntax(v_before_73_);
v___x_84_ = l_Lean_indentD(v___x_83_);
v___x_85_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_82_);
lean_ctor_set(v___x_85_, 1, v___x_84_);
v_x_66_ = v___x_85_;
v_x_67_ = v_tail_69_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__2(lean_object* v_opts_92_, lean_object* v_opt_93_){
_start:
{
lean_object* v_name_94_; lean_object* v_defValue_95_; lean_object* v_map_96_; lean_object* v___x_97_; 
v_name_94_ = lean_ctor_get(v_opt_93_, 0);
v_defValue_95_ = lean_ctor_get(v_opt_93_, 1);
v_map_96_ = lean_ctor_get(v_opts_92_, 0);
v___x_97_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_96_, v_name_94_);
if (lean_obj_tag(v___x_97_) == 0)
{
uint8_t v___x_98_; 
v___x_98_ = lean_unbox(v_defValue_95_);
return v___x_98_;
}
else
{
lean_object* v_val_99_; 
v_val_99_ = lean_ctor_get(v___x_97_, 0);
lean_inc(v_val_99_);
lean_dec_ref_known(v___x_97_, 1);
if (lean_obj_tag(v_val_99_) == 1)
{
uint8_t v_v_100_; 
v_v_100_ = lean_ctor_get_uint8(v_val_99_, 0);
lean_dec_ref_known(v_val_99_, 0);
return v_v_100_;
}
else
{
uint8_t v___x_101_; 
lean_dec(v_val_99_);
v___x_101_ = lean_unbox(v_defValue_95_);
return v___x_101_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__2___boxed(lean_object* v_opts_102_, lean_object* v_opt_103_){
_start:
{
uint8_t v_res_104_; lean_object* v_r_105_; 
v_res_104_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__2(v_opts_102_, v_opt_103_);
lean_dec_ref(v_opt_103_);
lean_dec_ref(v_opts_102_);
v_r_105_ = lean_box(v_res_104_);
return v_r_105_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__1));
v___x_110_ = l_Lean_MessageData_ofFormat(v___x_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg(lean_object* v_msgData_111_, lean_object* v_macroStack_112_, lean_object* v___y_113_){
_start:
{
lean_object* v___x_115_; lean_object* v_scopes_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v_opts_119_; lean_object* v___x_120_; uint8_t v___x_121_; 
v___x_115_ = lean_st_ref_get(v___y_113_);
v_scopes_116_ = lean_ctor_get(v___x_115_, 2);
lean_inc(v_scopes_116_);
lean_dec(v___x_115_);
v___x_117_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_118_ = l_List_head_x21___redArg(v___x_117_, v_scopes_116_);
lean_dec(v_scopes_116_);
v_opts_119_ = lean_ctor_get(v___x_118_, 1);
lean_inc_ref(v_opts_119_);
lean_dec(v___x_118_);
v___x_120_ = l_Lean_Elab_pp_macroStack;
v___x_121_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__2(v_opts_119_, v___x_120_);
lean_dec_ref(v_opts_119_);
if (v___x_121_ == 0)
{
lean_object* v___x_122_; 
lean_dec(v_macroStack_112_);
v___x_122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_122_, 0, v_msgData_111_);
return v___x_122_;
}
else
{
if (lean_obj_tag(v_macroStack_112_) == 0)
{
lean_object* v___x_123_; 
v___x_123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_123_, 0, v_msgData_111_);
return v___x_123_;
}
else
{
lean_object* v_head_124_; lean_object* v_after_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_140_; 
v_head_124_ = lean_ctor_get(v_macroStack_112_, 0);
lean_inc(v_head_124_);
v_after_125_ = lean_ctor_get(v_head_124_, 1);
v_isSharedCheck_140_ = !lean_is_exclusive(v_head_124_);
if (v_isSharedCheck_140_ == 0)
{
lean_object* v_unused_141_; 
v_unused_141_ = lean_ctor_get(v_head_124_, 0);
lean_dec(v_unused_141_);
v___x_127_ = v_head_124_;
v_isShared_128_ = v_isSharedCheck_140_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_after_125_);
lean_dec(v_head_124_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_140_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_129_; lean_object* v___x_131_; 
v___x_129_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0);
if (v_isShared_128_ == 0)
{
lean_ctor_set_tag(v___x_127_, 7);
lean_ctor_set(v___x_127_, 1, v___x_129_);
lean_ctor_set(v___x_127_, 0, v_msgData_111_);
v___x_131_ = v___x_127_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v_msgData_111_);
lean_ctor_set(v_reuseFailAlloc_139_, 1, v___x_129_);
v___x_131_ = v_reuseFailAlloc_139_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v_msgData_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_132_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___closed__2);
v___x_133_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_133_, 0, v___x_131_);
lean_ctor_set(v___x_133_, 1, v___x_132_);
v___x_134_ = l_Lean_MessageData_ofSyntax(v_after_125_);
v___x_135_ = l_Lean_indentD(v___x_134_);
v_msgData_136_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_136_, 0, v___x_133_);
lean_ctor_set(v_msgData_136_, 1, v___x_135_);
v___x_137_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3(v_msgData_136_, v_macroStack_112_);
v___x_138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_138_, 0, v___x_137_);
return v___x_138_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg___boxed(lean_object* v_msgData_142_, lean_object* v_macroStack_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg(v_msgData_142_, v_macroStack_143_, v___y_144_);
lean_dec(v___y_144_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(lean_object* v_msg_147_, lean_object* v___y_148_, lean_object* v___y_149_){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = l_Lean_Elab_Command_getRef___redArg(v___y_148_);
if (lean_obj_tag(v___x_151_) == 0)
{
lean_object* v_a_152_; lean_object* v_macroStack_153_; lean_object* v___x_154_; lean_object* v_a_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v_a_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_166_; 
v_a_152_ = lean_ctor_get(v___x_151_, 0);
lean_inc(v_a_152_);
lean_dec_ref_known(v___x_151_, 1);
v_macroStack_153_ = lean_ctor_get(v___y_148_, 4);
v___x_154_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg(v_msg_147_, v___y_149_);
v_a_155_ = lean_ctor_get(v___x_154_, 0);
lean_inc(v_a_155_);
lean_dec_ref(v___x_154_);
v___x_156_ = l_Lean_Elab_getBetterRef(v_a_152_, v_macroStack_153_);
lean_dec(v_a_152_);
lean_inc(v_macroStack_153_);
v___x_157_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg(v_a_155_, v_macroStack_153_, v___y_149_);
v_a_158_ = lean_ctor_get(v___x_157_, 0);
v_isSharedCheck_166_ = !lean_is_exclusive(v___x_157_);
if (v_isSharedCheck_166_ == 0)
{
v___x_160_ = v___x_157_;
v_isShared_161_ = v_isSharedCheck_166_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_a_158_);
lean_dec(v___x_157_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_166_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_162_; lean_object* v___x_164_; 
v___x_162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_162_, 0, v___x_156_);
lean_ctor_set(v___x_162_, 1, v_a_158_);
if (v_isShared_161_ == 0)
{
lean_ctor_set_tag(v___x_160_, 1);
lean_ctor_set(v___x_160_, 0, v___x_162_);
v___x_164_ = v___x_160_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v___x_162_);
v___x_164_ = v_reuseFailAlloc_165_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
return v___x_164_;
}
}
}
else
{
lean_object* v_a_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_174_; 
lean_dec_ref(v_msg_147_);
v_a_167_ = lean_ctor_get(v___x_151_, 0);
v_isSharedCheck_174_ = !lean_is_exclusive(v___x_151_);
if (v_isSharedCheck_174_ == 0)
{
v___x_169_ = v___x_151_;
v_isShared_170_ = v_isSharedCheck_174_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_a_167_);
lean_dec(v___x_151_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_174_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_172_; 
if (v_isShared_170_ == 0)
{
v___x_172_ = v___x_169_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v_a_167_);
v___x_172_ = v_reuseFailAlloc_173_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
return v___x_172_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg___boxed(lean_object* v_msg_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(v_msg_175_, v___y_176_, v___y_177_);
lean_dec(v___y_177_);
lean_dec_ref(v___y_176_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___redArg(lean_object* v_ref_180_, lean_object* v_msg_181_, lean_object* v___y_182_, lean_object* v___y_183_){
_start:
{
lean_object* v___x_185_; 
v___x_185_ = l_Lean_Elab_Command_getRef___redArg(v___y_182_);
if (lean_obj_tag(v___x_185_) == 0)
{
lean_object* v_a_186_; lean_object* v_fileName_187_; lean_object* v_fileMap_188_; lean_object* v_currRecDepth_189_; lean_object* v_cmdPos_190_; lean_object* v_macroStack_191_; lean_object* v_quotContext_x3f_192_; lean_object* v_currMacroScope_193_; lean_object* v_snap_x3f_194_; lean_object* v_cancelTk_x3f_195_; uint8_t v_suppressElabErrors_196_; lean_object* v_ref_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v_a_186_ = lean_ctor_get(v___x_185_, 0);
lean_inc(v_a_186_);
lean_dec_ref_known(v___x_185_, 1);
v_fileName_187_ = lean_ctor_get(v___y_182_, 0);
v_fileMap_188_ = lean_ctor_get(v___y_182_, 1);
v_currRecDepth_189_ = lean_ctor_get(v___y_182_, 2);
v_cmdPos_190_ = lean_ctor_get(v___y_182_, 3);
v_macroStack_191_ = lean_ctor_get(v___y_182_, 4);
v_quotContext_x3f_192_ = lean_ctor_get(v___y_182_, 5);
v_currMacroScope_193_ = lean_ctor_get(v___y_182_, 6);
v_snap_x3f_194_ = lean_ctor_get(v___y_182_, 8);
v_cancelTk_x3f_195_ = lean_ctor_get(v___y_182_, 9);
v_suppressElabErrors_196_ = lean_ctor_get_uint8(v___y_182_, sizeof(void*)*10);
v_ref_197_ = l_Lean_replaceRef(v_ref_180_, v_a_186_);
lean_dec(v_a_186_);
lean_inc(v_cancelTk_x3f_195_);
lean_inc(v_snap_x3f_194_);
lean_inc(v_currMacroScope_193_);
lean_inc(v_quotContext_x3f_192_);
lean_inc(v_macroStack_191_);
lean_inc(v_cmdPos_190_);
lean_inc(v_currRecDepth_189_);
lean_inc_ref(v_fileMap_188_);
lean_inc_ref(v_fileName_187_);
v___x_198_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_198_, 0, v_fileName_187_);
lean_ctor_set(v___x_198_, 1, v_fileMap_188_);
lean_ctor_set(v___x_198_, 2, v_currRecDepth_189_);
lean_ctor_set(v___x_198_, 3, v_cmdPos_190_);
lean_ctor_set(v___x_198_, 4, v_macroStack_191_);
lean_ctor_set(v___x_198_, 5, v_quotContext_x3f_192_);
lean_ctor_set(v___x_198_, 6, v_currMacroScope_193_);
lean_ctor_set(v___x_198_, 7, v_ref_197_);
lean_ctor_set(v___x_198_, 8, v_snap_x3f_194_);
lean_ctor_set(v___x_198_, 9, v_cancelTk_x3f_195_);
lean_ctor_set_uint8(v___x_198_, sizeof(void*)*10, v_suppressElabErrors_196_);
v___x_199_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(v_msg_181_, v___x_198_, v___y_183_);
lean_dec_ref_known(v___x_198_, 10);
return v___x_199_;
}
else
{
lean_object* v_a_200_; lean_object* v___x_202_; uint8_t v_isShared_203_; uint8_t v_isSharedCheck_207_; 
lean_dec_ref(v_msg_181_);
v_a_200_ = lean_ctor_get(v___x_185_, 0);
v_isSharedCheck_207_ = !lean_is_exclusive(v___x_185_);
if (v_isSharedCheck_207_ == 0)
{
v___x_202_ = v___x_185_;
v_isShared_203_ = v_isSharedCheck_207_;
goto v_resetjp_201_;
}
else
{
lean_inc(v_a_200_);
lean_dec(v___x_185_);
v___x_202_ = lean_box(0);
v_isShared_203_ = v_isSharedCheck_207_;
goto v_resetjp_201_;
}
v_resetjp_201_:
{
lean_object* v___x_205_; 
if (v_isShared_203_ == 0)
{
v___x_205_ = v___x_202_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v_a_200_);
v___x_205_ = v_reuseFailAlloc_206_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
return v___x_205_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___redArg___boxed(lean_object* v_ref_208_, lean_object* v_msg_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_){
_start:
{
lean_object* v_res_213_; 
v_res_213_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___redArg(v_ref_208_, v_msg_209_, v___y_210_, v___y_211_);
lean_dec(v___y_211_);
lean_dec_ref(v___y_210_);
lean_dec(v_ref_208_);
return v_res_213_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6(void){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_224_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__5));
v___x_225_ = l_Lean_stringToMessageData(v___x_224_);
return v___x_225_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12(void){
_start:
{
lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_236_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__11));
v___x_237_ = l_Lean_stringToMessageData(v___x_236_);
return v___x_237_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__14(void){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_239_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__13));
v___x_240_ = l_Lean_stringToMessageData(v___x_239_);
return v___x_240_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__16(void){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_242_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__15));
v___x_243_ = l_Lean_stringToMessageData(v___x_242_);
return v___x_243_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__18(void){
_start:
{
lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_245_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__17));
v___x_246_ = l_Lean_stringToMessageData(v___x_245_);
return v___x_246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension(lean_object* v_x_247_, lean_object* v_a_248_, lean_object* v_a_249_){
_start:
{
lean_object* v___x_251_; uint8_t v___x_252_; 
v___x_251_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4));
lean_inc(v_x_247_);
v___x_252_ = l_Lean_Syntax_isOfKind(v_x_247_, v___x_251_);
if (v___x_252_ == 0)
{
lean_object* v___x_253_; lean_object* v___x_254_; 
lean_dec(v_x_247_);
v___x_253_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6);
v___x_254_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(v___x_253_, v_a_248_, v_a_249_);
return v___x_254_;
}
else
{
lean_object* v___x_255_; lean_object* v___x_256_; uint8_t v___x_257_; 
v___x_255_ = lean_unsigned_to_nat(0u);
v___x_256_ = l_Lean_Syntax_getArg(v_x_247_, v___x_255_);
lean_inc(v___x_256_);
v___x_257_ = l_Lean_Syntax_matchesNull(v___x_256_, v___x_255_);
if (v___x_257_ == 0)
{
lean_object* v___x_258_; uint8_t v___x_259_; 
v___x_258_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_256_);
v___x_259_ = l_Lean_Syntax_matchesNull(v___x_256_, v___x_258_);
if (v___x_259_ == 0)
{
lean_object* v___x_260_; lean_object* v___x_261_; 
lean_dec(v___x_256_);
lean_dec(v_x_247_);
v___x_260_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6);
v___x_261_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(v___x_260_, v_a_248_, v_a_249_);
return v___x_261_;
}
else
{
lean_object* v_docs_262_; lean_object* v___x_263_; uint8_t v___x_264_; 
v_docs_262_ = l_Lean_Syntax_getArg(v___x_256_, v___x_255_);
lean_dec(v___x_256_);
v___x_263_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__8));
lean_inc(v_docs_262_);
v___x_264_ = l_Lean_Syntax_isOfKind(v_docs_262_, v___x_263_);
if (v___x_264_ == 0)
{
lean_object* v___x_265_; lean_object* v___x_266_; 
lean_dec(v_docs_262_);
lean_dec(v_x_247_);
v___x_265_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6);
v___x_266_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(v___x_265_, v_a_248_, v_a_249_);
return v___x_266_;
}
else
{
lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; uint8_t v___x_270_; 
v___x_267_ = lean_unsigned_to_nat(2u);
v___x_268_ = l_Lean_Syntax_getArg(v_x_247_, v___x_267_);
lean_dec(v_x_247_);
v___x_269_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__10));
lean_inc(v___x_268_);
v___x_270_ = l_Lean_Syntax_isOfKind(v___x_268_, v___x_269_);
if (v___x_270_ == 0)
{
lean_object* v___x_271_; lean_object* v___x_272_; 
lean_dec(v___x_268_);
lean_dec(v_docs_262_);
v___x_271_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__6);
v___x_272_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(v___x_271_, v_a_248_, v_a_249_);
return v___x_272_;
}
else
{
lean_object* v___x_273_; lean_object* v___f_274_; lean_object* v___x_275_; 
v___x_273_ = lean_box(0);
lean_inc(v___x_268_);
v___f_274_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___lam__0___boxed), 9, 2);
lean_closure_set(v___f_274_, 0, v___x_268_);
lean_closure_set(v___f_274_, 1, v___x_273_);
v___x_275_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___f_274_, v_a_248_, v_a_249_);
if (lean_obj_tag(v___x_275_) == 0)
{
lean_object* v_a_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_343_; 
v_a_276_ = lean_ctor_get(v___x_275_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_275_);
if (v_isSharedCheck_343_ == 0)
{
v___x_278_ = v___x_275_;
v_isShared_279_ = v_isSharedCheck_343_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_a_276_);
lean_dec(v___x_275_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_343_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___y_281_; lean_object* v___y_315_; lean_object* v___y_316_; uint8_t v___y_317_; lean_object* v___y_325_; lean_object* v___y_326_; lean_object* v___x_330_; lean_object* v_env_331_; lean_object* v___x_332_; 
v___x_330_ = lean_st_ref_get(v_a_249_);
v_env_331_ = lean_ctor_get(v___x_330_, 0);
lean_inc_ref(v_env_331_);
lean_dec(v___x_330_);
lean_inc(v_a_276_);
v___x_332_ = l_Lean_Parser_Tactic_Doc_alternativeOfTactic(v_env_331_, v_a_276_);
if (lean_obj_tag(v___x_332_) == 1)
{
lean_object* v_val_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
lean_del_object(v___x_278_);
lean_dec(v_docs_262_);
v_val_333_ = lean_ctor_get(v___x_332_, 0);
lean_inc(v_val_333_);
lean_dec_ref_known(v___x_332_, 1);
v___x_334_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12);
v___x_335_ = l_Lean_MessageData_ofConstName(v_a_276_, v___x_257_);
v___x_336_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_336_, 0, v___x_334_);
lean_ctor_set(v___x_336_, 1, v___x_335_);
v___x_337_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__16, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__16_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__16);
v___x_338_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_338_, 0, v___x_336_);
lean_ctor_set(v___x_338_, 1, v___x_337_);
v___x_339_ = l_Lean_MessageData_ofConstName(v_val_333_, v___x_257_);
v___x_340_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_340_, 0, v___x_338_);
lean_ctor_set(v___x_340_, 1, v___x_339_);
v___x_341_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_341_, 0, v___x_340_);
lean_ctor_set(v___x_341_, 1, v___x_334_);
v___x_342_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___redArg(v___x_268_, v___x_341_, v_a_248_, v_a_249_);
lean_dec(v___x_268_);
return v___x_342_;
}
else
{
lean_dec(v___x_332_);
v___y_325_ = v_a_248_;
v___y_326_ = v_a_249_;
goto v___jp_324_;
}
v___jp_280_:
{
lean_object* v___x_282_; lean_object* v_env_283_; lean_object* v_messages_284_; lean_object* v_scopes_285_; lean_object* v_usedQuotCtxts_286_; lean_object* v_nextMacroScope_287_; lean_object* v_maxRecDepth_288_; lean_object* v_ngen_289_; lean_object* v_auxDeclNGen_290_; lean_object* v_infoState_291_; lean_object* v_traceState_292_; lean_object* v_snapshotTasks_293_; lean_object* v_prevLinterStates_294_; lean_object* v___x_296_; uint8_t v_isShared_297_; uint8_t v_isSharedCheck_313_; 
v___x_282_ = lean_st_ref_take(v___y_281_);
v_env_283_ = lean_ctor_get(v___x_282_, 0);
v_messages_284_ = lean_ctor_get(v___x_282_, 1);
v_scopes_285_ = lean_ctor_get(v___x_282_, 2);
v_usedQuotCtxts_286_ = lean_ctor_get(v___x_282_, 3);
v_nextMacroScope_287_ = lean_ctor_get(v___x_282_, 4);
v_maxRecDepth_288_ = lean_ctor_get(v___x_282_, 5);
v_ngen_289_ = lean_ctor_get(v___x_282_, 6);
v_auxDeclNGen_290_ = lean_ctor_get(v___x_282_, 7);
v_infoState_291_ = lean_ctor_get(v___x_282_, 8);
v_traceState_292_ = lean_ctor_get(v___x_282_, 9);
v_snapshotTasks_293_ = lean_ctor_get(v___x_282_, 10);
v_prevLinterStates_294_ = lean_ctor_get(v___x_282_, 11);
v_isSharedCheck_313_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_313_ == 0)
{
v___x_296_ = v___x_282_;
v_isShared_297_ = v_isSharedCheck_313_;
goto v_resetjp_295_;
}
else
{
lean_inc(v_prevLinterStates_294_);
lean_inc(v_snapshotTasks_293_);
lean_inc(v_traceState_292_);
lean_inc(v_infoState_291_);
lean_inc(v_auxDeclNGen_290_);
lean_inc(v_ngen_289_);
lean_inc(v_maxRecDepth_288_);
lean_inc(v_nextMacroScope_287_);
lean_inc(v_usedQuotCtxts_286_);
lean_inc(v_scopes_285_);
lean_inc(v_messages_284_);
lean_inc(v_env_283_);
lean_dec(v___x_282_);
v___x_296_ = lean_box(0);
v_isShared_297_ = v_isSharedCheck_313_;
goto v_resetjp_295_;
}
v_resetjp_295_:
{
lean_object* v___x_298_; lean_object* v_toEnvExtension_299_; lean_object* v_asyncMode_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_306_; 
v___x_298_ = l_Lean_Parser_Tactic_Doc_tacticDocExtExt;
v_toEnvExtension_299_ = lean_ctor_get(v___x_298_, 0);
v_asyncMode_300_ = lean_ctor_get(v_toEnvExtension_299_, 2);
v___x_301_ = l_Lean_TSyntax_getDocString(v_docs_262_);
lean_dec(v_docs_262_);
v___x_302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_302_, 0, v_a_276_);
lean_ctor_set(v___x_302_, 1, v___x_301_);
v___x_303_ = lean_box(0);
v___x_304_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_298_, v_env_283_, v___x_302_, v_asyncMode_300_, v___x_303_);
if (v_isShared_297_ == 0)
{
lean_ctor_set(v___x_296_, 0, v___x_304_);
v___x_306_ = v___x_296_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v___x_304_);
lean_ctor_set(v_reuseFailAlloc_312_, 1, v_messages_284_);
lean_ctor_set(v_reuseFailAlloc_312_, 2, v_scopes_285_);
lean_ctor_set(v_reuseFailAlloc_312_, 3, v_usedQuotCtxts_286_);
lean_ctor_set(v_reuseFailAlloc_312_, 4, v_nextMacroScope_287_);
lean_ctor_set(v_reuseFailAlloc_312_, 5, v_maxRecDepth_288_);
lean_ctor_set(v_reuseFailAlloc_312_, 6, v_ngen_289_);
lean_ctor_set(v_reuseFailAlloc_312_, 7, v_auxDeclNGen_290_);
lean_ctor_set(v_reuseFailAlloc_312_, 8, v_infoState_291_);
lean_ctor_set(v_reuseFailAlloc_312_, 9, v_traceState_292_);
lean_ctor_set(v_reuseFailAlloc_312_, 10, v_snapshotTasks_293_);
lean_ctor_set(v_reuseFailAlloc_312_, 11, v_prevLinterStates_294_);
v___x_306_ = v_reuseFailAlloc_312_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_310_; 
v___x_307_ = lean_st_ref_set(v___y_281_, v___x_306_);
v___x_308_ = lean_box(0);
if (v_isShared_279_ == 0)
{
lean_ctor_set(v___x_278_, 0, v___x_308_);
v___x_310_ = v___x_278_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v___x_308_);
v___x_310_ = v_reuseFailAlloc_311_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
return v___x_310_;
}
}
}
}
v___jp_314_:
{
if (v___y_317_ == 0)
{
lean_dec(v___x_268_);
v___y_281_ = v___y_315_;
goto v___jp_280_;
}
else
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
lean_del_object(v___x_278_);
lean_dec(v_docs_262_);
v___x_318_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12);
v___x_319_ = l_Lean_MessageData_ofConstName(v_a_276_, v___x_257_);
v___x_320_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_320_, 0, v___x_318_);
lean_ctor_set(v___x_320_, 1, v___x_319_);
v___x_321_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__14, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__14_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__14);
v___x_322_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_322_, 0, v___x_320_);
lean_ctor_set(v___x_322_, 1, v___x_321_);
v___x_323_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___redArg(v___x_268_, v___x_322_, v___y_316_, v___y_315_);
lean_dec(v___x_268_);
return v___x_323_;
}
}
v___jp_324_:
{
lean_object* v___x_327_; lean_object* v_env_328_; uint8_t v___x_329_; 
v___x_327_ = lean_st_ref_get(v___y_326_);
v_env_328_ = lean_ctor_get(v___x_327_, 0);
lean_inc_ref(v_env_328_);
lean_dec(v___x_327_);
v___x_329_ = l_Lean_Parser_Tactic_Doc_isTactic(v_env_328_, v_a_276_);
if (v___x_329_ == 0)
{
v___y_315_ = v___y_326_;
v___y_316_ = v___y_325_;
v___y_317_ = v___x_270_;
goto v___jp_314_;
}
else
{
v___y_315_ = v___y_326_;
v___y_316_ = v___y_325_;
v___y_317_ = v___x_257_;
goto v___jp_314_;
}
}
}
}
else
{
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_351_; 
lean_dec(v___x_268_);
lean_dec(v_docs_262_);
v_a_344_ = lean_ctor_get(v___x_275_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_275_);
if (v_isSharedCheck_351_ == 0)
{
v___x_346_ = v___x_275_;
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_275_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
if (v_isShared_347_ == 0)
{
v___x_349_ = v___x_346_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_a_344_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_352_; lean_object* v_cmd_353_; lean_object* v___x_354_; lean_object* v___x_355_; 
lean_dec(v___x_256_);
v___x_352_ = lean_unsigned_to_nat(1u);
v_cmd_353_ = l_Lean_Syntax_getArg(v_x_247_, v___x_352_);
lean_dec(v_x_247_);
v___x_354_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__18, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__18_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__18);
v___x_355_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___redArg(v_cmd_353_, v___x_354_, v_a_248_, v_a_249_);
lean_dec(v_cmd_353_);
return v___x_355_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabTacticExtension___boxed(lean_object* v_x_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = l_Lean_Elab_Tactic_Doc_elabTacticExtension(v_x_356_, v_a_357_, v_a_358_);
lean_dec(v_a_358_);
lean_dec_ref(v_a_357_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0(lean_object* v_msgData_361_, lean_object* v___y_362_, lean_object* v___y_363_){
_start:
{
lean_object* v___x_365_; 
v___x_365_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg(v_msgData_361_, v___y_363_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___boxed(lean_object* v_msgData_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0(v_msgData_366_, v___y_367_, v___y_368_);
lean_dec(v___y_368_);
lean_dec_ref(v___y_367_);
return v_res_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0(lean_object* v_00_u03b1_371_, lean_object* v_msg_372_, lean_object* v___y_373_, lean_object* v___y_374_){
_start:
{
lean_object* v___x_376_; 
v___x_376_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(v_msg_372_, v___y_373_, v___y_374_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___boxed(lean_object* v_00_u03b1_377_, lean_object* v_msg_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_){
_start:
{
lean_object* v_res_382_; 
v_res_382_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0(v_00_u03b1_377_, v_msg_378_, v___y_379_, v___y_380_);
lean_dec(v___y_380_);
lean_dec_ref(v___y_379_);
return v_res_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1(lean_object* v_00_u03b1_383_, lean_object* v_ref_384_, lean_object* v_msg_385_, lean_object* v___y_386_, lean_object* v___y_387_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___redArg(v_ref_384_, v_msg_385_, v___y_386_, v___y_387_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___boxed(lean_object* v_00_u03b1_390_, lean_object* v_ref_391_, lean_object* v_msg_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1(v_00_u03b1_390_, v_ref_391_, v_msg_392_, v___y_393_, v___y_394_);
lean_dec(v___y_394_);
lean_dec_ref(v___y_393_);
lean_dec(v_ref_391_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1(lean_object* v_msgData_397_, lean_object* v_macroStack_398_, lean_object* v___y_399_, lean_object* v___y_400_){
_start:
{
lean_object* v___x_402_; 
v___x_402_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___redArg(v_msgData_397_, v_macroStack_398_, v___y_400_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1___boxed(lean_object* v_msgData_403_, lean_object* v_macroStack_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1(v_msgData_403_, v_macroStack_404_, v___y_405_, v___y_406_);
lean_dec(v___y_406_);
lean_dec_ref(v___y_405_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1(){
_start:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_420_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_421_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__4));
v___x_422_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4));
v___x_423_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___boxed), 4, 0);
v___x_424_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_420_, v___x_421_, v___x_422_, v___x_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___boxed(lean_object* v_a_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1();
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3(){
_start:
{
lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_453_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1___closed__4));
v___x_454_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___closed__6));
v___x_455_ = l_Lean_addBuiltinDeclarationRanges(v___x_453_, v___x_454_);
return v___x_455_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3___boxed(lean_object* v_a_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3();
return v_res_457_;
}
}
static lean_object* _init_l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__1(void){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_459_ = ((lean_object*)(l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__0));
v___x_460_ = l_Lean_stringToMessageData(v___x_459_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0(lean_object* v_stx_462_, lean_object* v___y_463_, lean_object* v___y_464_){
_start:
{
lean_object* v_val_473_; lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_480_ = lean_unsigned_to_nat(1u);
v___x_481_ = l_Lean_Syntax_getArg(v_stx_462_, v___x_480_);
switch(lean_obj_tag(v___x_481_))
{
case 2:
{
lean_object* v_val_482_; 
lean_dec(v_stx_462_);
v_val_482_ = lean_ctor_get(v___x_481_, 1);
lean_inc_ref(v_val_482_);
lean_dec_ref_known(v___x_481_, 2);
v_val_473_ = v_val_482_;
goto v___jp_472_;
}
case 1:
{
lean_object* v_kind_483_; 
v_kind_483_ = lean_ctor_get(v___x_481_, 1);
lean_inc(v_kind_483_);
if (lean_obj_tag(v_kind_483_) == 1)
{
lean_object* v_pre_484_; 
v_pre_484_ = lean_ctor_get(v_kind_483_, 0);
lean_inc(v_pre_484_);
if (lean_obj_tag(v_pre_484_) == 1)
{
lean_object* v_pre_485_; 
v_pre_485_ = lean_ctor_get(v_pre_484_, 0);
lean_inc(v_pre_485_);
if (lean_obj_tag(v_pre_485_) == 1)
{
lean_object* v_pre_486_; 
v_pre_486_ = lean_ctor_get(v_pre_485_, 0);
lean_inc(v_pre_486_);
if (lean_obj_tag(v_pre_486_) == 1)
{
lean_object* v_pre_487_; 
v_pre_487_ = lean_ctor_get(v_pre_486_, 0);
if (lean_obj_tag(v_pre_487_) == 0)
{
lean_object* v_str_488_; lean_object* v_str_489_; lean_object* v_str_490_; lean_object* v_str_491_; lean_object* v___x_492_; uint8_t v___x_493_; 
v_str_488_ = lean_ctor_get(v_kind_483_, 1);
lean_inc_ref(v_str_488_);
lean_dec_ref_known(v_kind_483_, 2);
v_str_489_ = lean_ctor_get(v_pre_484_, 1);
lean_inc_ref(v_str_489_);
lean_dec_ref_known(v_pre_484_, 2);
v_str_490_ = lean_ctor_get(v_pre_485_, 1);
lean_inc_ref(v_str_490_);
lean_dec_ref_known(v_pre_485_, 2);
v_str_491_ = lean_ctor_get(v_pre_486_, 1);
lean_inc_ref(v_str_491_);
lean_dec_ref_known(v_pre_486_, 2);
v___x_492_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__0));
v___x_493_ = lean_string_dec_eq(v_str_491_, v___x_492_);
lean_dec_ref(v_str_491_);
if (v___x_493_ == 0)
{
lean_dec_ref(v_str_490_);
lean_dec_ref(v_str_489_);
lean_dec_ref(v_str_488_);
lean_dec_ref_known(v___x_481_, 3);
goto v___jp_466_;
}
else
{
lean_object* v___x_494_; uint8_t v___x_495_; 
v___x_494_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__1));
v___x_495_ = lean_string_dec_eq(v_str_490_, v___x_494_);
lean_dec_ref(v_str_490_);
if (v___x_495_ == 0)
{
lean_dec_ref(v_str_489_);
lean_dec_ref(v_str_488_);
lean_dec_ref_known(v___x_481_, 3);
goto v___jp_466_;
}
else
{
lean_object* v___x_496_; uint8_t v___x_497_; 
v___x_496_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__2));
v___x_497_ = lean_string_dec_eq(v_str_489_, v___x_496_);
lean_dec_ref(v_str_489_);
if (v___x_497_ == 0)
{
lean_dec_ref(v_str_488_);
lean_dec_ref_known(v___x_481_, 3);
goto v___jp_466_;
}
else
{
lean_object* v___x_498_; uint8_t v___x_499_; 
v___x_498_ = ((lean_object*)(l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__2));
v___x_499_ = lean_string_dec_eq(v_str_488_, v___x_498_);
lean_dec_ref(v_str_488_);
if (v___x_499_ == 0)
{
lean_dec_ref_known(v___x_481_, 3);
goto v___jp_466_;
}
else
{
lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_500_ = lean_unsigned_to_nat(0u);
v___x_501_ = l_Lean_Syntax_getArg(v___x_481_, v___x_500_);
lean_dec_ref_known(v___x_481_, 3);
if (lean_obj_tag(v___x_501_) == 2)
{
lean_object* v_val_502_; 
lean_dec(v_stx_462_);
v_val_502_ = lean_ctor_get(v___x_501_, 1);
lean_inc_ref(v_val_502_);
lean_dec_ref_known(v___x_501_, 2);
v_val_473_ = v_val_502_;
goto v___jp_472_;
}
else
{
lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; 
lean_dec(v___x_501_);
v___x_503_ = lean_obj_once(&l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__1, &l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__1_once, _init_l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__1);
lean_inc(v_stx_462_);
v___x_504_ = l_Lean_MessageData_ofSyntax(v_stx_462_);
v___x_505_ = l_Lean_indentD(v___x_504_);
v___x_506_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_506_, 0, v___x_503_);
lean_ctor_set(v___x_506_, 1, v___x_505_);
v___x_507_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___redArg(v_stx_462_, v___x_506_, v___y_463_, v___y_464_);
lean_dec(v_stx_462_);
return v___x_507_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_486_, 2);
lean_dec_ref_known(v_pre_485_, 2);
lean_dec_ref_known(v_pre_484_, 2);
lean_dec_ref_known(v_kind_483_, 2);
lean_dec_ref_known(v___x_481_, 3);
goto v___jp_466_;
}
}
else
{
lean_dec_ref_known(v_pre_485_, 2);
lean_dec(v_pre_486_);
lean_dec_ref_known(v_pre_484_, 2);
lean_dec_ref_known(v_kind_483_, 2);
lean_dec_ref_known(v___x_481_, 3);
goto v___jp_466_;
}
}
else
{
lean_dec(v_pre_485_);
lean_dec_ref_known(v_pre_484_, 2);
lean_dec_ref_known(v_kind_483_, 2);
lean_dec_ref_known(v___x_481_, 3);
goto v___jp_466_;
}
}
else
{
lean_dec_ref_known(v_kind_483_, 2);
lean_dec(v_pre_484_);
lean_dec_ref_known(v___x_481_, 3);
goto v___jp_466_;
}
}
else
{
lean_dec_ref_known(v___x_481_, 3);
lean_dec(v_kind_483_);
goto v___jp_466_;
}
}
default: 
{
lean_dec(v___x_481_);
goto v___jp_466_;
}
}
v___jp_466_:
{
lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_467_ = lean_obj_once(&l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__1, &l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__1_once, _init_l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___closed__1);
lean_inc(v_stx_462_);
v___x_468_ = l_Lean_MessageData_ofSyntax(v_stx_462_);
v___x_469_ = l_Lean_indentD(v___x_468_);
v___x_470_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_470_, 0, v___x_467_);
lean_ctor_set(v___x_470_, 1, v___x_469_);
v___x_471_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__1___redArg(v_stx_462_, v___x_470_, v___y_463_, v___y_464_);
lean_dec(v_stx_462_);
return v___x_471_;
}
v___jp_472_:
{
lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_474_ = lean_unsigned_to_nat(0u);
v___x_475_ = lean_string_utf8_byte_size(v_val_473_);
v___x_476_ = lean_unsigned_to_nat(2u);
v___x_477_ = lean_nat_sub(v___x_475_, v___x_476_);
v___x_478_ = lean_string_utf8_extract(v_val_473_, v___x_474_, v___x_477_);
lean_dec(v___x_477_);
lean_dec_ref(v_val_473_);
v___x_479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_479_, 0, v___x_478_);
return v___x_479_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0___boxed(lean_object* v_stx_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_){
_start:
{
lean_object* v_res_512_; 
v_res_512_ = l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0(v_stx_508_, v___y_509_, v___y_510_);
lean_dec(v___y_510_);
lean_dec_ref(v___y_509_);
return v_res_512_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1(void){
_start:
{
lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_514_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__0));
v___x_515_ = l_Lean_stringToMessageData(v___x_514_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag(lean_object* v_x_525_, lean_object* v_a_526_, lean_object* v_a_527_){
_start:
{
lean_object* v___y_530_; lean_object* v___y_531_; lean_object* v___y_532_; lean_object* v_a_533_; lean_object* v_doc_567_; lean_object* v___y_568_; lean_object* v___y_569_; lean_object* v___x_601_; uint8_t v___x_602_; 
v___x_601_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5));
lean_inc(v_x_525_);
v___x_602_ = l_Lean_Syntax_isOfKind(v_x_525_, v___x_601_);
if (v___x_602_ == 0)
{
lean_object* v___x_603_; lean_object* v___x_604_; 
lean_dec(v_x_525_);
v___x_603_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1, &l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1_once, _init_l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1);
v___x_604_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(v___x_603_, v_a_526_, v_a_527_);
return v___x_604_;
}
else
{
lean_object* v___x_605_; lean_object* v___x_606_; uint8_t v___x_607_; 
v___x_605_ = lean_unsigned_to_nat(0u);
v___x_606_ = l_Lean_Syntax_getArg(v_x_525_, v___x_605_);
v___x_607_ = l_Lean_Syntax_isNone(v___x_606_);
if (v___x_607_ == 0)
{
lean_object* v___x_608_; uint8_t v___x_609_; 
v___x_608_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_606_);
v___x_609_ = l_Lean_Syntax_matchesNull(v___x_606_, v___x_608_);
if (v___x_609_ == 0)
{
lean_object* v___x_610_; lean_object* v___x_611_; 
lean_dec(v___x_606_);
lean_dec(v_x_525_);
v___x_610_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1, &l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1_once, _init_l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1);
v___x_611_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(v___x_610_, v_a_526_, v_a_527_);
return v___x_611_;
}
else
{
lean_object* v_doc_612_; lean_object* v___x_613_; uint8_t v___x_614_; 
v_doc_612_ = l_Lean_Syntax_getArg(v___x_606_, v___x_605_);
lean_dec(v___x_606_);
v___x_613_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__8));
lean_inc(v_doc_612_);
v___x_614_ = l_Lean_Syntax_isOfKind(v_doc_612_, v___x_613_);
if (v___x_614_ == 0)
{
lean_object* v___x_615_; lean_object* v___x_616_; 
lean_dec(v_doc_612_);
lean_dec(v_x_525_);
v___x_615_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1, &l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1_once, _init_l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1);
v___x_616_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(v___x_615_, v_a_526_, v_a_527_);
return v___x_616_;
}
else
{
lean_object* v___x_617_; 
v___x_617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_617_, 0, v_doc_612_);
v_doc_567_ = v___x_617_;
v___y_568_ = v_a_526_;
v___y_569_ = v_a_527_;
goto v___jp_566_;
}
}
}
else
{
lean_object* v___x_618_; 
lean_dec(v___x_606_);
v___x_618_ = lean_box(0);
v_doc_567_ = v___x_618_;
v___y_568_ = v_a_526_;
v___y_569_ = v_a_527_;
goto v___jp_566_;
}
}
v___jp_529_:
{
lean_object* v___x_534_; lean_object* v_env_535_; lean_object* v_messages_536_; lean_object* v_scopes_537_; lean_object* v_usedQuotCtxts_538_; lean_object* v_nextMacroScope_539_; lean_object* v_maxRecDepth_540_; lean_object* v_ngen_541_; lean_object* v_auxDeclNGen_542_; lean_object* v_infoState_543_; lean_object* v_traceState_544_; lean_object* v_snapshotTasks_545_; lean_object* v_prevLinterStates_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_565_; 
v___x_534_ = lean_st_ref_take(v___y_531_);
v_env_535_ = lean_ctor_get(v___x_534_, 0);
v_messages_536_ = lean_ctor_get(v___x_534_, 1);
v_scopes_537_ = lean_ctor_get(v___x_534_, 2);
v_usedQuotCtxts_538_ = lean_ctor_get(v___x_534_, 3);
v_nextMacroScope_539_ = lean_ctor_get(v___x_534_, 4);
v_maxRecDepth_540_ = lean_ctor_get(v___x_534_, 5);
v_ngen_541_ = lean_ctor_get(v___x_534_, 6);
v_auxDeclNGen_542_ = lean_ctor_get(v___x_534_, 7);
v_infoState_543_ = lean_ctor_get(v___x_534_, 8);
v_traceState_544_ = lean_ctor_get(v___x_534_, 9);
v_snapshotTasks_545_ = lean_ctor_get(v___x_534_, 10);
v_prevLinterStates_546_ = lean_ctor_get(v___x_534_, 11);
v_isSharedCheck_565_ = !lean_is_exclusive(v___x_534_);
if (v_isSharedCheck_565_ == 0)
{
v___x_548_ = v___x_534_;
v_isShared_549_ = v_isSharedCheck_565_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_prevLinterStates_546_);
lean_inc(v_snapshotTasks_545_);
lean_inc(v_traceState_544_);
lean_inc(v_infoState_543_);
lean_inc(v_auxDeclNGen_542_);
lean_inc(v_ngen_541_);
lean_inc(v_maxRecDepth_540_);
lean_inc(v_nextMacroScope_539_);
lean_inc(v_usedQuotCtxts_538_);
lean_inc(v_scopes_537_);
lean_inc(v_messages_536_);
lean_inc(v_env_535_);
lean_dec(v___x_534_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_565_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
lean_object* v___x_550_; lean_object* v_toEnvExtension_551_; lean_object* v_asyncMode_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_560_; 
v___x_550_ = l_Lean_Parser_Tactic_Doc_knownTacticTagExt;
v_toEnvExtension_551_ = lean_ctor_get(v___x_550_, 0);
v_asyncMode_552_ = lean_ctor_get(v_toEnvExtension_551_, 2);
v___x_553_ = l_Lean_TSyntax_getId(v___y_532_);
lean_dec(v___y_532_);
v___x_554_ = l_Lean_TSyntax_getString(v___y_530_);
lean_dec(v___y_530_);
v___x_555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_555_, 0, v___x_554_);
lean_ctor_set(v___x_555_, 1, v_a_533_);
v___x_556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_556_, 0, v___x_553_);
lean_ctor_set(v___x_556_, 1, v___x_555_);
v___x_557_ = lean_box(0);
v___x_558_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_550_, v_env_535_, v___x_556_, v_asyncMode_552_, v___x_557_);
if (v_isShared_549_ == 0)
{
lean_ctor_set(v___x_548_, 0, v___x_558_);
v___x_560_ = v___x_548_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v___x_558_);
lean_ctor_set(v_reuseFailAlloc_564_, 1, v_messages_536_);
lean_ctor_set(v_reuseFailAlloc_564_, 2, v_scopes_537_);
lean_ctor_set(v_reuseFailAlloc_564_, 3, v_usedQuotCtxts_538_);
lean_ctor_set(v_reuseFailAlloc_564_, 4, v_nextMacroScope_539_);
lean_ctor_set(v_reuseFailAlloc_564_, 5, v_maxRecDepth_540_);
lean_ctor_set(v_reuseFailAlloc_564_, 6, v_ngen_541_);
lean_ctor_set(v_reuseFailAlloc_564_, 7, v_auxDeclNGen_542_);
lean_ctor_set(v_reuseFailAlloc_564_, 8, v_infoState_543_);
lean_ctor_set(v_reuseFailAlloc_564_, 9, v_traceState_544_);
lean_ctor_set(v_reuseFailAlloc_564_, 10, v_snapshotTasks_545_);
lean_ctor_set(v_reuseFailAlloc_564_, 11, v_prevLinterStates_546_);
v___x_560_ = v_reuseFailAlloc_564_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_561_ = lean_st_ref_set(v___y_531_, v___x_560_);
v___x_562_ = lean_box(0);
v___x_563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_563_, 0, v___x_562_);
return v___x_563_;
}
}
}
v___jp_566_:
{
lean_object* v___x_570_; lean_object* v_tag_571_; lean_object* v___x_572_; uint8_t v___x_573_; 
v___x_570_ = lean_unsigned_to_nat(2u);
v_tag_571_ = l_Lean_Syntax_getArg(v_x_525_, v___x_570_);
v___x_572_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__10));
lean_inc(v_tag_571_);
v___x_573_ = l_Lean_Syntax_isOfKind(v_tag_571_, v___x_572_);
if (v___x_573_ == 0)
{
lean_object* v___x_574_; lean_object* v___x_575_; 
lean_dec(v_tag_571_);
lean_dec(v_doc_567_);
lean_dec(v_x_525_);
v___x_574_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1, &l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1_once, _init_l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1);
v___x_575_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(v___x_574_, v___y_568_, v___y_569_);
return v___x_575_;
}
else
{
lean_object* v___x_576_; lean_object* v_user_577_; lean_object* v___x_578_; uint8_t v___x_579_; 
v___x_576_ = lean_unsigned_to_nat(3u);
v_user_577_ = l_Lean_Syntax_getArg(v_x_525_, v___x_576_);
lean_dec(v_x_525_);
v___x_578_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__3));
lean_inc(v_user_577_);
v___x_579_ = l_Lean_Syntax_isOfKind(v_user_577_, v___x_578_);
if (v___x_579_ == 0)
{
lean_object* v___x_580_; lean_object* v___x_581_; 
lean_dec(v_user_577_);
lean_dec(v_tag_571_);
lean_dec(v_doc_567_);
v___x_580_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1, &l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1_once, _init_l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__1);
v___x_581_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0___redArg(v___x_580_, v___y_568_, v___y_569_);
return v___x_581_;
}
else
{
if (lean_obj_tag(v_doc_567_) == 0)
{
lean_object* v___x_582_; 
v___x_582_ = lean_box(0);
v___y_530_ = v_user_577_;
v___y_531_ = v___y_569_;
v___y_532_ = v_tag_571_;
v_a_533_ = v___x_582_;
goto v___jp_529_;
}
else
{
lean_object* v_val_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_600_; 
v_val_583_ = lean_ctor_get(v_doc_567_, 0);
v_isSharedCheck_600_ = !lean_is_exclusive(v_doc_567_);
if (v_isSharedCheck_600_ == 0)
{
v___x_585_ = v_doc_567_;
v_isShared_586_ = v_isSharedCheck_600_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_val_583_);
lean_dec(v_doc_567_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_600_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
lean_object* v___x_587_; 
v___x_587_ = l_Lean_getDocStringText___at___00Lean_Elab_Tactic_Doc_elabRegisterTacticTag_spec__0(v_val_583_, v___y_568_, v___y_569_);
if (lean_obj_tag(v___x_587_) == 0)
{
lean_object* v_a_588_; lean_object* v___x_590_; 
v_a_588_ = lean_ctor_get(v___x_587_, 0);
lean_inc(v_a_588_);
lean_dec_ref_known(v___x_587_, 1);
if (v_isShared_586_ == 0)
{
lean_ctor_set(v___x_585_, 0, v_a_588_);
v___x_590_ = v___x_585_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_a_588_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
v___y_530_ = v_user_577_;
v___y_531_ = v___y_569_;
v___y_532_ = v_tag_571_;
v_a_533_ = v___x_590_;
goto v___jp_529_;
}
}
else
{
lean_object* v_a_592_; lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_599_; 
lean_del_object(v___x_585_);
lean_dec(v_user_577_);
lean_dec(v_tag_571_);
v_a_592_ = lean_ctor_get(v___x_587_, 0);
v_isSharedCheck_599_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_599_ == 0)
{
v___x_594_ = v___x_587_;
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
else
{
lean_inc(v_a_592_);
lean_dec(v___x_587_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
lean_object* v___x_597_; 
if (v_isShared_595_ == 0)
{
v___x_597_ = v___x_594_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_a_592_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___boxed(lean_object* v_x_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag(v_x_619_, v_a_620_, v_a_621_);
lean_dec(v_a_621_);
lean_dec_ref(v_a_620_);
return v_res_623_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1(){
_start:
{
lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_632_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_633_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___closed__5));
v___x_634_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1));
v___x_635_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Doc_elabRegisterTacticTag___boxed), 4, 0);
v___x_636_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_632_, v___x_633_, v___x_634_, v___x_635_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___boxed(lean_object* v_a_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1();
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3(){
_start:
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
v___x_665_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1___closed__1));
v___x_666_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___closed__6));
v___x_667_ = l_Lean_addBuiltinDeclarationRanges(v___x_665_, v___x_666_);
return v___x_667_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3___boxed(lean_object* v_a_668_){
_start:
{
lean_object* v_res_669_; 
v_res_669_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3();
return v_res_669_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg___lam__0(lean_object* v___x_670_, lean_object* v_x_671_){
_start:
{
if (lean_obj_tag(v_x_671_) == 0)
{
lean_object* v___x_672_; 
v___x_672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_672_, 0, v___x_670_);
return v___x_672_;
}
else
{
lean_dec_ref(v___x_670_);
lean_inc_ref(v_x_671_);
return v_x_671_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg___lam__0___boxed(lean_object* v___x_673_, lean_object* v_x_674_){
_start:
{
lean_object* v_res_675_; 
v_res_675_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg___lam__0(v___x_673_, v_x_674_);
lean_dec(v_x_674_);
return v_res_675_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg(lean_object* v___x_676_, lean_object* v_k_677_, lean_object* v_t_678_){
_start:
{
if (lean_obj_tag(v_t_678_) == 0)
{
lean_object* v_size_679_; lean_object* v_k_680_; lean_object* v_v_681_; lean_object* v_l_682_; lean_object* v_r_683_; lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_1009_; 
v_size_679_ = lean_ctor_get(v_t_678_, 0);
v_k_680_ = lean_ctor_get(v_t_678_, 1);
v_v_681_ = lean_ctor_get(v_t_678_, 2);
v_l_682_ = lean_ctor_get(v_t_678_, 3);
v_r_683_ = lean_ctor_get(v_t_678_, 4);
v_isSharedCheck_1009_ = !lean_is_exclusive(v_t_678_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_685_ = v_t_678_;
v_isShared_686_ = v_isSharedCheck_1009_;
goto v_resetjp_684_;
}
else
{
lean_inc(v_r_683_);
lean_inc(v_l_682_);
lean_inc(v_v_681_);
lean_inc(v_k_680_);
lean_inc(v_size_679_);
lean_dec(v_t_678_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_1009_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
uint8_t v___x_687_; 
v___x_687_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_677_, v_k_680_);
switch(v___x_687_)
{
case 0:
{
lean_object* v_impl_688_; lean_object* v___x_689_; 
lean_del_object(v___x_685_);
lean_dec(v_size_679_);
v_impl_688_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg(v___x_676_, v_k_677_, v_l_682_);
v___x_689_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_680_, v_v_681_, v_impl_688_, v_r_683_);
return v___x_689_;
}
case 1:
{
lean_object* v___x_690_; lean_object* v___x_691_; 
lean_dec(v_k_680_);
v___x_690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_690_, 0, v_v_681_);
v___x_691_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg___lam__0(v___x_676_, v___x_690_);
lean_dec_ref_known(v___x_690_, 1);
if (lean_obj_tag(v___x_691_) == 0)
{
lean_del_object(v___x_685_);
lean_dec(v_size_679_);
lean_dec(v_k_677_);
if (lean_obj_tag(v_l_682_) == 0)
{
if (lean_obj_tag(v_r_683_) == 0)
{
lean_object* v_size_692_; lean_object* v_k_693_; lean_object* v_v_694_; lean_object* v_l_695_; lean_object* v_r_696_; lean_object* v_size_697_; lean_object* v_k_698_; lean_object* v_v_699_; lean_object* v_l_700_; lean_object* v_r_701_; lean_object* v___x_702_; uint8_t v___x_703_; 
v_size_692_ = lean_ctor_get(v_l_682_, 0);
v_k_693_ = lean_ctor_get(v_l_682_, 1);
v_v_694_ = lean_ctor_get(v_l_682_, 2);
v_l_695_ = lean_ctor_get(v_l_682_, 3);
v_r_696_ = lean_ctor_get(v_l_682_, 4);
lean_inc(v_r_696_);
v_size_697_ = lean_ctor_get(v_r_683_, 0);
v_k_698_ = lean_ctor_get(v_r_683_, 1);
v_v_699_ = lean_ctor_get(v_r_683_, 2);
v_l_700_ = lean_ctor_get(v_r_683_, 3);
lean_inc(v_l_700_);
v_r_701_ = lean_ctor_get(v_r_683_, 4);
v___x_702_ = lean_unsigned_to_nat(1u);
v___x_703_ = lean_nat_dec_lt(v_size_692_, v_size_697_);
if (v___x_703_ == 0)
{
lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_839_; 
lean_inc(v_l_695_);
lean_inc(v_v_694_);
lean_inc(v_k_693_);
v_isSharedCheck_839_ = !lean_is_exclusive(v_l_682_);
if (v_isSharedCheck_839_ == 0)
{
lean_object* v_unused_840_; lean_object* v_unused_841_; lean_object* v_unused_842_; lean_object* v_unused_843_; lean_object* v_unused_844_; 
v_unused_840_ = lean_ctor_get(v_l_682_, 4);
lean_dec(v_unused_840_);
v_unused_841_ = lean_ctor_get(v_l_682_, 3);
lean_dec(v_unused_841_);
v_unused_842_ = lean_ctor_get(v_l_682_, 2);
lean_dec(v_unused_842_);
v_unused_843_ = lean_ctor_get(v_l_682_, 1);
lean_dec(v_unused_843_);
v_unused_844_ = lean_ctor_get(v_l_682_, 0);
lean_dec(v_unused_844_);
v___x_705_ = v_l_682_;
v_isShared_706_ = v_isSharedCheck_839_;
goto v_resetjp_704_;
}
else
{
lean_dec(v_l_682_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_839_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v___x_707_; lean_object* v_tree_708_; 
v___x_707_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_693_, v_v_694_, v_l_695_, v_r_696_);
v_tree_708_ = lean_ctor_get(v___x_707_, 2);
lean_inc(v_tree_708_);
if (lean_obj_tag(v_tree_708_) == 0)
{
lean_object* v_k_709_; lean_object* v_v_710_; lean_object* v_size_711_; lean_object* v___x_712_; lean_object* v___x_713_; uint8_t v___x_714_; 
v_k_709_ = lean_ctor_get(v___x_707_, 0);
lean_inc(v_k_709_);
v_v_710_ = lean_ctor_get(v___x_707_, 1);
lean_inc(v_v_710_);
lean_dec_ref(v___x_707_);
v_size_711_ = lean_ctor_get(v_tree_708_, 0);
v___x_712_ = lean_unsigned_to_nat(3u);
v___x_713_ = lean_nat_mul(v___x_712_, v_size_711_);
v___x_714_ = lean_nat_dec_lt(v___x_713_, v_size_697_);
lean_dec(v___x_713_);
if (v___x_714_ == 0)
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_718_; 
lean_dec(v_l_700_);
v___x_715_ = lean_nat_add(v___x_702_, v_size_711_);
v___x_716_ = lean_nat_add(v___x_715_, v_size_697_);
lean_dec(v___x_715_);
if (v_isShared_706_ == 0)
{
lean_ctor_set(v___x_705_, 4, v_r_683_);
lean_ctor_set(v___x_705_, 3, v_tree_708_);
lean_ctor_set(v___x_705_, 2, v_v_710_);
lean_ctor_set(v___x_705_, 1, v_k_709_);
lean_ctor_set(v___x_705_, 0, v___x_716_);
v___x_718_ = v___x_705_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v___x_716_);
lean_ctor_set(v_reuseFailAlloc_719_, 1, v_k_709_);
lean_ctor_set(v_reuseFailAlloc_719_, 2, v_v_710_);
lean_ctor_set(v_reuseFailAlloc_719_, 3, v_tree_708_);
lean_ctor_set(v_reuseFailAlloc_719_, 4, v_r_683_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
else
{
lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_774_; 
lean_inc(v_r_701_);
lean_inc(v_v_699_);
lean_inc(v_k_698_);
lean_inc(v_size_697_);
v_isSharedCheck_774_ = !lean_is_exclusive(v_r_683_);
if (v_isSharedCheck_774_ == 0)
{
lean_object* v_unused_775_; lean_object* v_unused_776_; lean_object* v_unused_777_; lean_object* v_unused_778_; lean_object* v_unused_779_; 
v_unused_775_ = lean_ctor_get(v_r_683_, 4);
lean_dec(v_unused_775_);
v_unused_776_ = lean_ctor_get(v_r_683_, 3);
lean_dec(v_unused_776_);
v_unused_777_ = lean_ctor_get(v_r_683_, 2);
lean_dec(v_unused_777_);
v_unused_778_ = lean_ctor_get(v_r_683_, 1);
lean_dec(v_unused_778_);
v_unused_779_ = lean_ctor_get(v_r_683_, 0);
lean_dec(v_unused_779_);
v___x_721_ = v_r_683_;
v_isShared_722_ = v_isSharedCheck_774_;
goto v_resetjp_720_;
}
else
{
lean_dec(v_r_683_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_774_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v_size_723_; lean_object* v_k_724_; lean_object* v_v_725_; lean_object* v_l_726_; lean_object* v_r_727_; lean_object* v_size_728_; lean_object* v___x_729_; lean_object* v___x_730_; uint8_t v___x_731_; 
v_size_723_ = lean_ctor_get(v_l_700_, 0);
v_k_724_ = lean_ctor_get(v_l_700_, 1);
v_v_725_ = lean_ctor_get(v_l_700_, 2);
v_l_726_ = lean_ctor_get(v_l_700_, 3);
v_r_727_ = lean_ctor_get(v_l_700_, 4);
v_size_728_ = lean_ctor_get(v_r_701_, 0);
v___x_729_ = lean_unsigned_to_nat(2u);
v___x_730_ = lean_nat_mul(v___x_729_, v_size_728_);
v___x_731_ = lean_nat_dec_lt(v_size_723_, v___x_730_);
lean_dec(v___x_730_);
if (v___x_731_ == 0)
{
lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_759_; 
lean_inc(v_r_727_);
lean_inc(v_l_726_);
lean_inc(v_v_725_);
lean_inc(v_k_724_);
v_isSharedCheck_759_ = !lean_is_exclusive(v_l_700_);
if (v_isSharedCheck_759_ == 0)
{
lean_object* v_unused_760_; lean_object* v_unused_761_; lean_object* v_unused_762_; lean_object* v_unused_763_; lean_object* v_unused_764_; 
v_unused_760_ = lean_ctor_get(v_l_700_, 4);
lean_dec(v_unused_760_);
v_unused_761_ = lean_ctor_get(v_l_700_, 3);
lean_dec(v_unused_761_);
v_unused_762_ = lean_ctor_get(v_l_700_, 2);
lean_dec(v_unused_762_);
v_unused_763_ = lean_ctor_get(v_l_700_, 1);
lean_dec(v_unused_763_);
v_unused_764_ = lean_ctor_get(v_l_700_, 0);
lean_dec(v_unused_764_);
v___x_733_ = v_l_700_;
v_isShared_734_ = v_isSharedCheck_759_;
goto v_resetjp_732_;
}
else
{
lean_dec(v_l_700_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_759_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___y_738_; lean_object* v___y_739_; lean_object* v___y_740_; lean_object* v___y_749_; 
v___x_735_ = lean_nat_add(v___x_702_, v_size_711_);
v___x_736_ = lean_nat_add(v___x_735_, v_size_697_);
lean_dec(v_size_697_);
if (lean_obj_tag(v_l_726_) == 0)
{
lean_object* v_size_757_; 
v_size_757_ = lean_ctor_get(v_l_726_, 0);
lean_inc(v_size_757_);
v___y_749_ = v_size_757_;
goto v___jp_748_;
}
else
{
lean_object* v___x_758_; 
v___x_758_ = lean_unsigned_to_nat(0u);
v___y_749_ = v___x_758_;
goto v___jp_748_;
}
v___jp_737_:
{
lean_object* v___x_741_; lean_object* v___x_743_; 
v___x_741_ = lean_nat_add(v___y_738_, v___y_740_);
lean_dec(v___y_740_);
lean_dec(v___y_738_);
if (v_isShared_734_ == 0)
{
lean_ctor_set(v___x_733_, 4, v_r_701_);
lean_ctor_set(v___x_733_, 3, v_r_727_);
lean_ctor_set(v___x_733_, 2, v_v_699_);
lean_ctor_set(v___x_733_, 1, v_k_698_);
lean_ctor_set(v___x_733_, 0, v___x_741_);
v___x_743_ = v___x_733_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v___x_741_);
lean_ctor_set(v_reuseFailAlloc_747_, 1, v_k_698_);
lean_ctor_set(v_reuseFailAlloc_747_, 2, v_v_699_);
lean_ctor_set(v_reuseFailAlloc_747_, 3, v_r_727_);
lean_ctor_set(v_reuseFailAlloc_747_, 4, v_r_701_);
v___x_743_ = v_reuseFailAlloc_747_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
lean_object* v___x_745_; 
if (v_isShared_722_ == 0)
{
lean_ctor_set(v___x_721_, 4, v___x_743_);
lean_ctor_set(v___x_721_, 3, v___y_739_);
lean_ctor_set(v___x_721_, 2, v_v_725_);
lean_ctor_set(v___x_721_, 1, v_k_724_);
lean_ctor_set(v___x_721_, 0, v___x_736_);
v___x_745_ = v___x_721_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v___x_736_);
lean_ctor_set(v_reuseFailAlloc_746_, 1, v_k_724_);
lean_ctor_set(v_reuseFailAlloc_746_, 2, v_v_725_);
lean_ctor_set(v_reuseFailAlloc_746_, 3, v___y_739_);
lean_ctor_set(v_reuseFailAlloc_746_, 4, v___x_743_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
}
v___jp_748_:
{
lean_object* v___x_750_; lean_object* v___x_752_; 
v___x_750_ = lean_nat_add(v___x_735_, v___y_749_);
lean_dec(v___y_749_);
lean_dec(v___x_735_);
if (v_isShared_706_ == 0)
{
lean_ctor_set(v___x_705_, 4, v_l_726_);
lean_ctor_set(v___x_705_, 3, v_tree_708_);
lean_ctor_set(v___x_705_, 2, v_v_710_);
lean_ctor_set(v___x_705_, 1, v_k_709_);
lean_ctor_set(v___x_705_, 0, v___x_750_);
v___x_752_ = v___x_705_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v___x_750_);
lean_ctor_set(v_reuseFailAlloc_756_, 1, v_k_709_);
lean_ctor_set(v_reuseFailAlloc_756_, 2, v_v_710_);
lean_ctor_set(v_reuseFailAlloc_756_, 3, v_tree_708_);
lean_ctor_set(v_reuseFailAlloc_756_, 4, v_l_726_);
v___x_752_ = v_reuseFailAlloc_756_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
lean_object* v___x_753_; 
v___x_753_ = lean_nat_add(v___x_702_, v_size_728_);
if (lean_obj_tag(v_r_727_) == 0)
{
lean_object* v_size_754_; 
v_size_754_ = lean_ctor_get(v_r_727_, 0);
lean_inc(v_size_754_);
v___y_738_ = v___x_753_;
v___y_739_ = v___x_752_;
v___y_740_ = v_size_754_;
goto v___jp_737_;
}
else
{
lean_object* v___x_755_; 
v___x_755_ = lean_unsigned_to_nat(0u);
v___y_738_ = v___x_753_;
v___y_739_ = v___x_752_;
v___y_740_ = v___x_755_;
goto v___jp_737_;
}
}
}
}
}
else
{
lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_769_; 
v___x_765_ = lean_nat_add(v___x_702_, v_size_711_);
v___x_766_ = lean_nat_add(v___x_765_, v_size_697_);
lean_dec(v_size_697_);
v___x_767_ = lean_nat_add(v___x_765_, v_size_723_);
lean_dec(v___x_765_);
if (v_isShared_722_ == 0)
{
lean_ctor_set(v___x_721_, 4, v_l_700_);
lean_ctor_set(v___x_721_, 3, v_tree_708_);
lean_ctor_set(v___x_721_, 2, v_v_710_);
lean_ctor_set(v___x_721_, 1, v_k_709_);
lean_ctor_set(v___x_721_, 0, v___x_767_);
v___x_769_ = v___x_721_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v___x_767_);
lean_ctor_set(v_reuseFailAlloc_773_, 1, v_k_709_);
lean_ctor_set(v_reuseFailAlloc_773_, 2, v_v_710_);
lean_ctor_set(v_reuseFailAlloc_773_, 3, v_tree_708_);
lean_ctor_set(v_reuseFailAlloc_773_, 4, v_l_700_);
v___x_769_ = v_reuseFailAlloc_773_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
lean_object* v___x_771_; 
if (v_isShared_706_ == 0)
{
lean_ctor_set(v___x_705_, 4, v_r_701_);
lean_ctor_set(v___x_705_, 3, v___x_769_);
lean_ctor_set(v___x_705_, 2, v_v_699_);
lean_ctor_set(v___x_705_, 1, v_k_698_);
lean_ctor_set(v___x_705_, 0, v___x_766_);
v___x_771_ = v___x_705_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v___x_766_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v_k_698_);
lean_ctor_set(v_reuseFailAlloc_772_, 2, v_v_699_);
lean_ctor_set(v_reuseFailAlloc_772_, 3, v___x_769_);
lean_ctor_set(v_reuseFailAlloc_772_, 4, v_r_701_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
}
}
}
}
}
}
else
{
lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_833_; 
lean_inc(v_r_701_);
lean_inc(v_v_699_);
lean_inc(v_k_698_);
lean_inc(v_size_697_);
v_isSharedCheck_833_ = !lean_is_exclusive(v_r_683_);
if (v_isSharedCheck_833_ == 0)
{
lean_object* v_unused_834_; lean_object* v_unused_835_; lean_object* v_unused_836_; lean_object* v_unused_837_; lean_object* v_unused_838_; 
v_unused_834_ = lean_ctor_get(v_r_683_, 4);
lean_dec(v_unused_834_);
v_unused_835_ = lean_ctor_get(v_r_683_, 3);
lean_dec(v_unused_835_);
v_unused_836_ = lean_ctor_get(v_r_683_, 2);
lean_dec(v_unused_836_);
v_unused_837_ = lean_ctor_get(v_r_683_, 1);
lean_dec(v_unused_837_);
v_unused_838_ = lean_ctor_get(v_r_683_, 0);
lean_dec(v_unused_838_);
v___x_781_ = v_r_683_;
v_isShared_782_ = v_isSharedCheck_833_;
goto v_resetjp_780_;
}
else
{
lean_dec(v_r_683_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_833_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
if (lean_obj_tag(v_l_700_) == 0)
{
if (lean_obj_tag(v_r_701_) == 0)
{
lean_object* v_k_783_; lean_object* v_v_784_; lean_object* v_size_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_789_; 
v_k_783_ = lean_ctor_get(v___x_707_, 0);
lean_inc(v_k_783_);
v_v_784_ = lean_ctor_get(v___x_707_, 1);
lean_inc(v_v_784_);
lean_dec_ref(v___x_707_);
v_size_785_ = lean_ctor_get(v_l_700_, 0);
v___x_786_ = lean_nat_add(v___x_702_, v_size_697_);
lean_dec(v_size_697_);
v___x_787_ = lean_nat_add(v___x_702_, v_size_785_);
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 4, v_l_700_);
lean_ctor_set(v___x_781_, 3, v_tree_708_);
lean_ctor_set(v___x_781_, 2, v_v_784_);
lean_ctor_set(v___x_781_, 1, v_k_783_);
lean_ctor_set(v___x_781_, 0, v___x_787_);
v___x_789_ = v___x_781_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v___x_787_);
lean_ctor_set(v_reuseFailAlloc_793_, 1, v_k_783_);
lean_ctor_set(v_reuseFailAlloc_793_, 2, v_v_784_);
lean_ctor_set(v_reuseFailAlloc_793_, 3, v_tree_708_);
lean_ctor_set(v_reuseFailAlloc_793_, 4, v_l_700_);
v___x_789_ = v_reuseFailAlloc_793_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
lean_object* v___x_791_; 
if (v_isShared_706_ == 0)
{
lean_ctor_set(v___x_705_, 4, v_r_701_);
lean_ctor_set(v___x_705_, 3, v___x_789_);
lean_ctor_set(v___x_705_, 2, v_v_699_);
lean_ctor_set(v___x_705_, 1, v_k_698_);
lean_ctor_set(v___x_705_, 0, v___x_786_);
v___x_791_ = v___x_705_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v___x_786_);
lean_ctor_set(v_reuseFailAlloc_792_, 1, v_k_698_);
lean_ctor_set(v_reuseFailAlloc_792_, 2, v_v_699_);
lean_ctor_set(v_reuseFailAlloc_792_, 3, v___x_789_);
lean_ctor_set(v_reuseFailAlloc_792_, 4, v_r_701_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
else
{
lean_object* v_k_794_; lean_object* v_v_795_; lean_object* v_k_796_; lean_object* v_v_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_811_; 
lean_dec(v_size_697_);
v_k_794_ = lean_ctor_get(v___x_707_, 0);
lean_inc(v_k_794_);
v_v_795_ = lean_ctor_get(v___x_707_, 1);
lean_inc(v_v_795_);
lean_dec_ref(v___x_707_);
v_k_796_ = lean_ctor_get(v_l_700_, 1);
v_v_797_ = lean_ctor_get(v_l_700_, 2);
v_isSharedCheck_811_ = !lean_is_exclusive(v_l_700_);
if (v_isSharedCheck_811_ == 0)
{
lean_object* v_unused_812_; lean_object* v_unused_813_; lean_object* v_unused_814_; 
v_unused_812_ = lean_ctor_get(v_l_700_, 4);
lean_dec(v_unused_812_);
v_unused_813_ = lean_ctor_get(v_l_700_, 3);
lean_dec(v_unused_813_);
v_unused_814_ = lean_ctor_get(v_l_700_, 0);
lean_dec(v_unused_814_);
v___x_799_ = v_l_700_;
v_isShared_800_ = v_isSharedCheck_811_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_v_797_);
lean_inc(v_k_796_);
lean_dec(v_l_700_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_811_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v___x_801_; lean_object* v___x_803_; 
v___x_801_ = lean_unsigned_to_nat(3u);
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 4, v_r_701_);
lean_ctor_set(v___x_799_, 3, v_r_701_);
lean_ctor_set(v___x_799_, 2, v_v_795_);
lean_ctor_set(v___x_799_, 1, v_k_794_);
lean_ctor_set(v___x_799_, 0, v___x_702_);
v___x_803_ = v___x_799_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v___x_702_);
lean_ctor_set(v_reuseFailAlloc_810_, 1, v_k_794_);
lean_ctor_set(v_reuseFailAlloc_810_, 2, v_v_795_);
lean_ctor_set(v_reuseFailAlloc_810_, 3, v_r_701_);
lean_ctor_set(v_reuseFailAlloc_810_, 4, v_r_701_);
v___x_803_ = v_reuseFailAlloc_810_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
lean_object* v___x_805_; 
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 3, v_r_701_);
lean_ctor_set(v___x_781_, 0, v___x_702_);
v___x_805_ = v___x_781_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v___x_702_);
lean_ctor_set(v_reuseFailAlloc_809_, 1, v_k_698_);
lean_ctor_set(v_reuseFailAlloc_809_, 2, v_v_699_);
lean_ctor_set(v_reuseFailAlloc_809_, 3, v_r_701_);
lean_ctor_set(v_reuseFailAlloc_809_, 4, v_r_701_);
v___x_805_ = v_reuseFailAlloc_809_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
lean_object* v___x_807_; 
if (v_isShared_706_ == 0)
{
lean_ctor_set(v___x_705_, 4, v___x_805_);
lean_ctor_set(v___x_705_, 3, v___x_803_);
lean_ctor_set(v___x_705_, 2, v_v_797_);
lean_ctor_set(v___x_705_, 1, v_k_796_);
lean_ctor_set(v___x_705_, 0, v___x_801_);
v___x_807_ = v___x_705_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v___x_801_);
lean_ctor_set(v_reuseFailAlloc_808_, 1, v_k_796_);
lean_ctor_set(v_reuseFailAlloc_808_, 2, v_v_797_);
lean_ctor_set(v_reuseFailAlloc_808_, 3, v___x_803_);
lean_ctor_set(v_reuseFailAlloc_808_, 4, v___x_805_);
v___x_807_ = v_reuseFailAlloc_808_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
return v___x_807_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_701_) == 0)
{
lean_object* v_k_815_; lean_object* v_v_816_; lean_object* v___x_817_; lean_object* v___x_819_; 
lean_dec(v_size_697_);
v_k_815_ = lean_ctor_get(v___x_707_, 0);
lean_inc(v_k_815_);
v_v_816_ = lean_ctor_get(v___x_707_, 1);
lean_inc(v_v_816_);
lean_dec_ref(v___x_707_);
v___x_817_ = lean_unsigned_to_nat(3u);
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 4, v_l_700_);
lean_ctor_set(v___x_781_, 2, v_v_816_);
lean_ctor_set(v___x_781_, 1, v_k_815_);
lean_ctor_set(v___x_781_, 0, v___x_702_);
v___x_819_ = v___x_781_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v___x_702_);
lean_ctor_set(v_reuseFailAlloc_823_, 1, v_k_815_);
lean_ctor_set(v_reuseFailAlloc_823_, 2, v_v_816_);
lean_ctor_set(v_reuseFailAlloc_823_, 3, v_l_700_);
lean_ctor_set(v_reuseFailAlloc_823_, 4, v_l_700_);
v___x_819_ = v_reuseFailAlloc_823_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
lean_object* v___x_821_; 
if (v_isShared_706_ == 0)
{
lean_ctor_set(v___x_705_, 4, v_r_701_);
lean_ctor_set(v___x_705_, 3, v___x_819_);
lean_ctor_set(v___x_705_, 2, v_v_699_);
lean_ctor_set(v___x_705_, 1, v_k_698_);
lean_ctor_set(v___x_705_, 0, v___x_817_);
v___x_821_ = v___x_705_;
goto v_reusejp_820_;
}
else
{
lean_object* v_reuseFailAlloc_822_; 
v_reuseFailAlloc_822_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_822_, 0, v___x_817_);
lean_ctor_set(v_reuseFailAlloc_822_, 1, v_k_698_);
lean_ctor_set(v_reuseFailAlloc_822_, 2, v_v_699_);
lean_ctor_set(v_reuseFailAlloc_822_, 3, v___x_819_);
lean_ctor_set(v_reuseFailAlloc_822_, 4, v_r_701_);
v___x_821_ = v_reuseFailAlloc_822_;
goto v_reusejp_820_;
}
v_reusejp_820_:
{
return v___x_821_;
}
}
}
else
{
lean_object* v_k_824_; lean_object* v_v_825_; lean_object* v___x_827_; 
v_k_824_ = lean_ctor_get(v___x_707_, 0);
lean_inc(v_k_824_);
v_v_825_ = lean_ctor_get(v___x_707_, 1);
lean_inc(v_v_825_);
lean_dec_ref(v___x_707_);
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 3, v_r_701_);
v___x_827_ = v___x_781_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v_size_697_);
lean_ctor_set(v_reuseFailAlloc_832_, 1, v_k_698_);
lean_ctor_set(v_reuseFailAlloc_832_, 2, v_v_699_);
lean_ctor_set(v_reuseFailAlloc_832_, 3, v_r_701_);
lean_ctor_set(v_reuseFailAlloc_832_, 4, v_r_701_);
v___x_827_ = v_reuseFailAlloc_832_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
lean_object* v___x_828_; lean_object* v___x_830_; 
v___x_828_ = lean_unsigned_to_nat(2u);
if (v_isShared_706_ == 0)
{
lean_ctor_set(v___x_705_, 4, v___x_827_);
lean_ctor_set(v___x_705_, 3, v_r_701_);
lean_ctor_set(v___x_705_, 2, v_v_825_);
lean_ctor_set(v___x_705_, 1, v_k_824_);
lean_ctor_set(v___x_705_, 0, v___x_828_);
v___x_830_ = v___x_705_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v___x_828_);
lean_ctor_set(v_reuseFailAlloc_831_, 1, v_k_824_);
lean_ctor_set(v_reuseFailAlloc_831_, 2, v_v_825_);
lean_ctor_set(v_reuseFailAlloc_831_, 3, v_r_701_);
lean_ctor_set(v_reuseFailAlloc_831_, 4, v___x_827_);
v___x_830_ = v_reuseFailAlloc_831_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
return v___x_830_;
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
lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_997_; 
lean_inc(v_r_701_);
lean_inc(v_v_699_);
lean_inc(v_k_698_);
v_isSharedCheck_997_ = !lean_is_exclusive(v_r_683_);
if (v_isSharedCheck_997_ == 0)
{
lean_object* v_unused_998_; lean_object* v_unused_999_; lean_object* v_unused_1000_; lean_object* v_unused_1001_; lean_object* v_unused_1002_; 
v_unused_998_ = lean_ctor_get(v_r_683_, 4);
lean_dec(v_unused_998_);
v_unused_999_ = lean_ctor_get(v_r_683_, 3);
lean_dec(v_unused_999_);
v_unused_1000_ = lean_ctor_get(v_r_683_, 2);
lean_dec(v_unused_1000_);
v_unused_1001_ = lean_ctor_get(v_r_683_, 1);
lean_dec(v_unused_1001_);
v_unused_1002_ = lean_ctor_get(v_r_683_, 0);
lean_dec(v_unused_1002_);
v___x_846_ = v_r_683_;
v_isShared_847_ = v_isSharedCheck_997_;
goto v_resetjp_845_;
}
else
{
lean_dec(v_r_683_);
v___x_846_ = lean_box(0);
v_isShared_847_ = v_isSharedCheck_997_;
goto v_resetjp_845_;
}
v_resetjp_845_:
{
lean_object* v___x_848_; lean_object* v_tree_849_; 
v___x_848_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_698_, v_v_699_, v_l_700_, v_r_701_);
v_tree_849_ = lean_ctor_get(v___x_848_, 2);
lean_inc(v_tree_849_);
if (lean_obj_tag(v_tree_849_) == 0)
{
lean_object* v_k_850_; lean_object* v_v_851_; lean_object* v_size_852_; lean_object* v___x_853_; lean_object* v___x_854_; uint8_t v___x_855_; 
v_k_850_ = lean_ctor_get(v___x_848_, 0);
lean_inc(v_k_850_);
v_v_851_ = lean_ctor_get(v___x_848_, 1);
lean_inc(v_v_851_);
lean_dec_ref(v___x_848_);
v_size_852_ = lean_ctor_get(v_tree_849_, 0);
v___x_853_ = lean_unsigned_to_nat(3u);
v___x_854_ = lean_nat_mul(v___x_853_, v_size_852_);
v___x_855_ = lean_nat_dec_lt(v___x_854_, v_size_692_);
lean_dec(v___x_854_);
if (v___x_855_ == 0)
{
lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_859_; 
lean_dec(v_r_696_);
v___x_856_ = lean_nat_add(v___x_702_, v_size_692_);
v___x_857_ = lean_nat_add(v___x_856_, v_size_852_);
lean_dec(v___x_856_);
if (v_isShared_847_ == 0)
{
lean_ctor_set(v___x_846_, 4, v_tree_849_);
lean_ctor_set(v___x_846_, 3, v_l_682_);
lean_ctor_set(v___x_846_, 2, v_v_851_);
lean_ctor_set(v___x_846_, 1, v_k_850_);
lean_ctor_set(v___x_846_, 0, v___x_857_);
v___x_859_ = v___x_846_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v___x_857_);
lean_ctor_set(v_reuseFailAlloc_860_, 1, v_k_850_);
lean_ctor_set(v_reuseFailAlloc_860_, 2, v_v_851_);
lean_ctor_set(v_reuseFailAlloc_860_, 3, v_l_682_);
lean_ctor_set(v_reuseFailAlloc_860_, 4, v_tree_849_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
else
{
lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_926_; 
lean_inc(v_l_695_);
lean_inc(v_v_694_);
lean_inc(v_k_693_);
lean_inc(v_size_692_);
v_isSharedCheck_926_ = !lean_is_exclusive(v_l_682_);
if (v_isSharedCheck_926_ == 0)
{
lean_object* v_unused_927_; lean_object* v_unused_928_; lean_object* v_unused_929_; lean_object* v_unused_930_; lean_object* v_unused_931_; 
v_unused_927_ = lean_ctor_get(v_l_682_, 4);
lean_dec(v_unused_927_);
v_unused_928_ = lean_ctor_get(v_l_682_, 3);
lean_dec(v_unused_928_);
v_unused_929_ = lean_ctor_get(v_l_682_, 2);
lean_dec(v_unused_929_);
v_unused_930_ = lean_ctor_get(v_l_682_, 1);
lean_dec(v_unused_930_);
v_unused_931_ = lean_ctor_get(v_l_682_, 0);
lean_dec(v_unused_931_);
v___x_862_ = v_l_682_;
v_isShared_863_ = v_isSharedCheck_926_;
goto v_resetjp_861_;
}
else
{
lean_dec(v_l_682_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_926_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v_size_864_; lean_object* v_size_865_; lean_object* v_k_866_; lean_object* v_v_867_; lean_object* v_l_868_; lean_object* v_r_869_; lean_object* v___x_870_; lean_object* v___x_871_; uint8_t v___x_872_; 
v_size_864_ = lean_ctor_get(v_l_695_, 0);
v_size_865_ = lean_ctor_get(v_r_696_, 0);
v_k_866_ = lean_ctor_get(v_r_696_, 1);
v_v_867_ = lean_ctor_get(v_r_696_, 2);
v_l_868_ = lean_ctor_get(v_r_696_, 3);
v_r_869_ = lean_ctor_get(v_r_696_, 4);
v___x_870_ = lean_unsigned_to_nat(2u);
v___x_871_ = lean_nat_mul(v___x_870_, v_size_864_);
v___x_872_ = lean_nat_dec_lt(v_size_865_, v___x_871_);
lean_dec(v___x_871_);
if (v___x_872_ == 0)
{
lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_910_; 
lean_inc(v_r_869_);
lean_inc(v_l_868_);
lean_inc(v_v_867_);
lean_inc(v_k_866_);
lean_del_object(v___x_862_);
v_isSharedCheck_910_ = !lean_is_exclusive(v_r_696_);
if (v_isSharedCheck_910_ == 0)
{
lean_object* v_unused_911_; lean_object* v_unused_912_; lean_object* v_unused_913_; lean_object* v_unused_914_; lean_object* v_unused_915_; 
v_unused_911_ = lean_ctor_get(v_r_696_, 4);
lean_dec(v_unused_911_);
v_unused_912_ = lean_ctor_get(v_r_696_, 3);
lean_dec(v_unused_912_);
v_unused_913_ = lean_ctor_get(v_r_696_, 2);
lean_dec(v_unused_913_);
v_unused_914_ = lean_ctor_get(v_r_696_, 1);
lean_dec(v_unused_914_);
v_unused_915_ = lean_ctor_get(v_r_696_, 0);
lean_dec(v_unused_915_);
v___x_874_ = v_r_696_;
v_isShared_875_ = v_isSharedCheck_910_;
goto v_resetjp_873_;
}
else
{
lean_dec(v_r_696_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_910_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___y_879_; lean_object* v___y_880_; lean_object* v___y_881_; lean_object* v___x_898_; lean_object* v___y_900_; 
v___x_876_ = lean_nat_add(v___x_702_, v_size_692_);
lean_dec(v_size_692_);
v___x_877_ = lean_nat_add(v___x_876_, v_size_852_);
lean_dec(v___x_876_);
v___x_898_ = lean_nat_add(v___x_702_, v_size_864_);
if (lean_obj_tag(v_l_868_) == 0)
{
lean_object* v_size_908_; 
v_size_908_ = lean_ctor_get(v_l_868_, 0);
lean_inc(v_size_908_);
v___y_900_ = v_size_908_;
goto v___jp_899_;
}
else
{
lean_object* v___x_909_; 
v___x_909_ = lean_unsigned_to_nat(0u);
v___y_900_ = v___x_909_;
goto v___jp_899_;
}
v___jp_878_:
{
lean_object* v___x_882_; lean_object* v___x_884_; 
v___x_882_ = lean_nat_add(v___y_879_, v___y_881_);
lean_dec(v___y_881_);
lean_dec(v___y_879_);
lean_inc_ref(v_tree_849_);
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 4, v_tree_849_);
lean_ctor_set(v___x_874_, 3, v_r_869_);
lean_ctor_set(v___x_874_, 2, v_v_851_);
lean_ctor_set(v___x_874_, 1, v_k_850_);
lean_ctor_set(v___x_874_, 0, v___x_882_);
v___x_884_ = v___x_874_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v___x_882_);
lean_ctor_set(v_reuseFailAlloc_897_, 1, v_k_850_);
lean_ctor_set(v_reuseFailAlloc_897_, 2, v_v_851_);
lean_ctor_set(v_reuseFailAlloc_897_, 3, v_r_869_);
lean_ctor_set(v_reuseFailAlloc_897_, 4, v_tree_849_);
v___x_884_ = v_reuseFailAlloc_897_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
lean_object* v___x_886_; uint8_t v_isShared_887_; uint8_t v_isSharedCheck_891_; 
v_isSharedCheck_891_ = !lean_is_exclusive(v_tree_849_);
if (v_isSharedCheck_891_ == 0)
{
lean_object* v_unused_892_; lean_object* v_unused_893_; lean_object* v_unused_894_; lean_object* v_unused_895_; lean_object* v_unused_896_; 
v_unused_892_ = lean_ctor_get(v_tree_849_, 4);
lean_dec(v_unused_892_);
v_unused_893_ = lean_ctor_get(v_tree_849_, 3);
lean_dec(v_unused_893_);
v_unused_894_ = lean_ctor_get(v_tree_849_, 2);
lean_dec(v_unused_894_);
v_unused_895_ = lean_ctor_get(v_tree_849_, 1);
lean_dec(v_unused_895_);
v_unused_896_ = lean_ctor_get(v_tree_849_, 0);
lean_dec(v_unused_896_);
v___x_886_ = v_tree_849_;
v_isShared_887_ = v_isSharedCheck_891_;
goto v_resetjp_885_;
}
else
{
lean_dec(v_tree_849_);
v___x_886_ = lean_box(0);
v_isShared_887_ = v_isSharedCheck_891_;
goto v_resetjp_885_;
}
v_resetjp_885_:
{
lean_object* v___x_889_; 
if (v_isShared_887_ == 0)
{
lean_ctor_set(v___x_886_, 4, v___x_884_);
lean_ctor_set(v___x_886_, 3, v___y_880_);
lean_ctor_set(v___x_886_, 2, v_v_867_);
lean_ctor_set(v___x_886_, 1, v_k_866_);
lean_ctor_set(v___x_886_, 0, v___x_877_);
v___x_889_ = v___x_886_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v___x_877_);
lean_ctor_set(v_reuseFailAlloc_890_, 1, v_k_866_);
lean_ctor_set(v_reuseFailAlloc_890_, 2, v_v_867_);
lean_ctor_set(v_reuseFailAlloc_890_, 3, v___y_880_);
lean_ctor_set(v_reuseFailAlloc_890_, 4, v___x_884_);
v___x_889_ = v_reuseFailAlloc_890_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
return v___x_889_;
}
}
}
}
v___jp_899_:
{
lean_object* v___x_901_; lean_object* v___x_903_; 
v___x_901_ = lean_nat_add(v___x_898_, v___y_900_);
lean_dec(v___y_900_);
lean_dec(v___x_898_);
if (v_isShared_847_ == 0)
{
lean_ctor_set(v___x_846_, 4, v_l_868_);
lean_ctor_set(v___x_846_, 3, v_l_695_);
lean_ctor_set(v___x_846_, 2, v_v_694_);
lean_ctor_set(v___x_846_, 1, v_k_693_);
lean_ctor_set(v___x_846_, 0, v___x_901_);
v___x_903_ = v___x_846_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v___x_901_);
lean_ctor_set(v_reuseFailAlloc_907_, 1, v_k_693_);
lean_ctor_set(v_reuseFailAlloc_907_, 2, v_v_694_);
lean_ctor_set(v_reuseFailAlloc_907_, 3, v_l_695_);
lean_ctor_set(v_reuseFailAlloc_907_, 4, v_l_868_);
v___x_903_ = v_reuseFailAlloc_907_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
lean_object* v___x_904_; 
v___x_904_ = lean_nat_add(v___x_702_, v_size_852_);
if (lean_obj_tag(v_r_869_) == 0)
{
lean_object* v_size_905_; 
v_size_905_ = lean_ctor_get(v_r_869_, 0);
lean_inc(v_size_905_);
v___y_879_ = v___x_904_;
v___y_880_ = v___x_903_;
v___y_881_ = v_size_905_;
goto v___jp_878_;
}
else
{
lean_object* v___x_906_; 
v___x_906_ = lean_unsigned_to_nat(0u);
v___y_879_ = v___x_904_;
v___y_880_ = v___x_903_;
v___y_881_ = v___x_906_;
goto v___jp_878_;
}
}
}
}
}
else
{
lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_921_; 
v___x_916_ = lean_nat_add(v___x_702_, v_size_692_);
lean_dec(v_size_692_);
v___x_917_ = lean_nat_add(v___x_916_, v_size_852_);
lean_dec(v___x_916_);
v___x_918_ = lean_nat_add(v___x_702_, v_size_852_);
v___x_919_ = lean_nat_add(v___x_918_, v_size_865_);
lean_dec(v___x_918_);
if (v_isShared_847_ == 0)
{
lean_ctor_set(v___x_846_, 4, v_tree_849_);
lean_ctor_set(v___x_846_, 3, v_r_696_);
lean_ctor_set(v___x_846_, 2, v_v_851_);
lean_ctor_set(v___x_846_, 1, v_k_850_);
lean_ctor_set(v___x_846_, 0, v___x_919_);
v___x_921_ = v___x_846_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v___x_919_);
lean_ctor_set(v_reuseFailAlloc_925_, 1, v_k_850_);
lean_ctor_set(v_reuseFailAlloc_925_, 2, v_v_851_);
lean_ctor_set(v_reuseFailAlloc_925_, 3, v_r_696_);
lean_ctor_set(v_reuseFailAlloc_925_, 4, v_tree_849_);
v___x_921_ = v_reuseFailAlloc_925_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
lean_object* v___x_923_; 
if (v_isShared_863_ == 0)
{
lean_ctor_set(v___x_862_, 4, v___x_921_);
lean_ctor_set(v___x_862_, 0, v___x_917_);
v___x_923_ = v___x_862_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v___x_917_);
lean_ctor_set(v_reuseFailAlloc_924_, 1, v_k_693_);
lean_ctor_set(v_reuseFailAlloc_924_, 2, v_v_694_);
lean_ctor_set(v_reuseFailAlloc_924_, 3, v_l_695_);
lean_ctor_set(v_reuseFailAlloc_924_, 4, v___x_921_);
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
}
}
else
{
if (lean_obj_tag(v_l_695_) == 0)
{
lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_955_; 
lean_inc_ref(v_l_695_);
lean_inc(v_v_694_);
lean_inc(v_k_693_);
lean_inc(v_size_692_);
v_isSharedCheck_955_ = !lean_is_exclusive(v_l_682_);
if (v_isSharedCheck_955_ == 0)
{
lean_object* v_unused_956_; lean_object* v_unused_957_; lean_object* v_unused_958_; lean_object* v_unused_959_; lean_object* v_unused_960_; 
v_unused_956_ = lean_ctor_get(v_l_682_, 4);
lean_dec(v_unused_956_);
v_unused_957_ = lean_ctor_get(v_l_682_, 3);
lean_dec(v_unused_957_);
v_unused_958_ = lean_ctor_get(v_l_682_, 2);
lean_dec(v_unused_958_);
v_unused_959_ = lean_ctor_get(v_l_682_, 1);
lean_dec(v_unused_959_);
v_unused_960_ = lean_ctor_get(v_l_682_, 0);
lean_dec(v_unused_960_);
v___x_933_ = v_l_682_;
v_isShared_934_ = v_isSharedCheck_955_;
goto v_resetjp_932_;
}
else
{
lean_dec(v_l_682_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_955_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
if (lean_obj_tag(v_r_696_) == 0)
{
lean_object* v_k_935_; lean_object* v_v_936_; lean_object* v_size_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_941_; 
v_k_935_ = lean_ctor_get(v___x_848_, 0);
lean_inc(v_k_935_);
v_v_936_ = lean_ctor_get(v___x_848_, 1);
lean_inc(v_v_936_);
lean_dec_ref(v___x_848_);
v_size_937_ = lean_ctor_get(v_r_696_, 0);
v___x_938_ = lean_nat_add(v___x_702_, v_size_692_);
lean_dec(v_size_692_);
v___x_939_ = lean_nat_add(v___x_702_, v_size_937_);
if (v_isShared_847_ == 0)
{
lean_ctor_set(v___x_846_, 4, v_tree_849_);
lean_ctor_set(v___x_846_, 3, v_r_696_);
lean_ctor_set(v___x_846_, 2, v_v_936_);
lean_ctor_set(v___x_846_, 1, v_k_935_);
lean_ctor_set(v___x_846_, 0, v___x_939_);
v___x_941_ = v___x_846_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v___x_939_);
lean_ctor_set(v_reuseFailAlloc_945_, 1, v_k_935_);
lean_ctor_set(v_reuseFailAlloc_945_, 2, v_v_936_);
lean_ctor_set(v_reuseFailAlloc_945_, 3, v_r_696_);
lean_ctor_set(v_reuseFailAlloc_945_, 4, v_tree_849_);
v___x_941_ = v_reuseFailAlloc_945_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
lean_object* v___x_943_; 
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 4, v___x_941_);
lean_ctor_set(v___x_933_, 0, v___x_938_);
v___x_943_ = v___x_933_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v___x_938_);
lean_ctor_set(v_reuseFailAlloc_944_, 1, v_k_693_);
lean_ctor_set(v_reuseFailAlloc_944_, 2, v_v_694_);
lean_ctor_set(v_reuseFailAlloc_944_, 3, v_l_695_);
lean_ctor_set(v_reuseFailAlloc_944_, 4, v___x_941_);
v___x_943_ = v_reuseFailAlloc_944_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
return v___x_943_;
}
}
}
else
{
lean_object* v_k_946_; lean_object* v_v_947_; lean_object* v___x_948_; lean_object* v___x_950_; 
lean_dec(v_size_692_);
v_k_946_ = lean_ctor_get(v___x_848_, 0);
lean_inc(v_k_946_);
v_v_947_ = lean_ctor_get(v___x_848_, 1);
lean_inc(v_v_947_);
lean_dec_ref(v___x_848_);
v___x_948_ = lean_unsigned_to_nat(3u);
if (v_isShared_847_ == 0)
{
lean_ctor_set(v___x_846_, 4, v_r_696_);
lean_ctor_set(v___x_846_, 3, v_r_696_);
lean_ctor_set(v___x_846_, 2, v_v_947_);
lean_ctor_set(v___x_846_, 1, v_k_946_);
lean_ctor_set(v___x_846_, 0, v___x_702_);
v___x_950_ = v___x_846_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v___x_702_);
lean_ctor_set(v_reuseFailAlloc_954_, 1, v_k_946_);
lean_ctor_set(v_reuseFailAlloc_954_, 2, v_v_947_);
lean_ctor_set(v_reuseFailAlloc_954_, 3, v_r_696_);
lean_ctor_set(v_reuseFailAlloc_954_, 4, v_r_696_);
v___x_950_ = v_reuseFailAlloc_954_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
lean_object* v___x_952_; 
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 4, v___x_950_);
lean_ctor_set(v___x_933_, 0, v___x_948_);
v___x_952_ = v___x_933_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v___x_948_);
lean_ctor_set(v_reuseFailAlloc_953_, 1, v_k_693_);
lean_ctor_set(v_reuseFailAlloc_953_, 2, v_v_694_);
lean_ctor_set(v_reuseFailAlloc_953_, 3, v_l_695_);
lean_ctor_set(v_reuseFailAlloc_953_, 4, v___x_950_);
v___x_952_ = v_reuseFailAlloc_953_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
return v___x_952_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_696_) == 0)
{
lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_985_; 
lean_inc(v_l_695_);
lean_inc(v_v_694_);
lean_inc(v_k_693_);
v_isSharedCheck_985_ = !lean_is_exclusive(v_l_682_);
if (v_isSharedCheck_985_ == 0)
{
lean_object* v_unused_986_; lean_object* v_unused_987_; lean_object* v_unused_988_; lean_object* v_unused_989_; lean_object* v_unused_990_; 
v_unused_986_ = lean_ctor_get(v_l_682_, 4);
lean_dec(v_unused_986_);
v_unused_987_ = lean_ctor_get(v_l_682_, 3);
lean_dec(v_unused_987_);
v_unused_988_ = lean_ctor_get(v_l_682_, 2);
lean_dec(v_unused_988_);
v_unused_989_ = lean_ctor_get(v_l_682_, 1);
lean_dec(v_unused_989_);
v_unused_990_ = lean_ctor_get(v_l_682_, 0);
lean_dec(v_unused_990_);
v___x_962_ = v_l_682_;
v_isShared_963_ = v_isSharedCheck_985_;
goto v_resetjp_961_;
}
else
{
lean_dec(v_l_682_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_985_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v_k_964_; lean_object* v_v_965_; lean_object* v_k_966_; lean_object* v_v_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_981_; 
v_k_964_ = lean_ctor_get(v___x_848_, 0);
lean_inc(v_k_964_);
v_v_965_ = lean_ctor_get(v___x_848_, 1);
lean_inc(v_v_965_);
lean_dec_ref(v___x_848_);
v_k_966_ = lean_ctor_get(v_r_696_, 1);
v_v_967_ = lean_ctor_get(v_r_696_, 2);
v_isSharedCheck_981_ = !lean_is_exclusive(v_r_696_);
if (v_isSharedCheck_981_ == 0)
{
lean_object* v_unused_982_; lean_object* v_unused_983_; lean_object* v_unused_984_; 
v_unused_982_ = lean_ctor_get(v_r_696_, 4);
lean_dec(v_unused_982_);
v_unused_983_ = lean_ctor_get(v_r_696_, 3);
lean_dec(v_unused_983_);
v_unused_984_ = lean_ctor_get(v_r_696_, 0);
lean_dec(v_unused_984_);
v___x_969_ = v_r_696_;
v_isShared_970_ = v_isSharedCheck_981_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_v_967_);
lean_inc(v_k_966_);
lean_dec(v_r_696_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_981_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v___x_971_; lean_object* v___x_973_; 
v___x_971_ = lean_unsigned_to_nat(3u);
if (v_isShared_970_ == 0)
{
lean_ctor_set(v___x_969_, 4, v_l_695_);
lean_ctor_set(v___x_969_, 3, v_l_695_);
lean_ctor_set(v___x_969_, 2, v_v_694_);
lean_ctor_set(v___x_969_, 1, v_k_693_);
lean_ctor_set(v___x_969_, 0, v___x_702_);
v___x_973_ = v___x_969_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v___x_702_);
lean_ctor_set(v_reuseFailAlloc_980_, 1, v_k_693_);
lean_ctor_set(v_reuseFailAlloc_980_, 2, v_v_694_);
lean_ctor_set(v_reuseFailAlloc_980_, 3, v_l_695_);
lean_ctor_set(v_reuseFailAlloc_980_, 4, v_l_695_);
v___x_973_ = v_reuseFailAlloc_980_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
lean_object* v___x_975_; 
if (v_isShared_847_ == 0)
{
lean_ctor_set(v___x_846_, 4, v_l_695_);
lean_ctor_set(v___x_846_, 3, v_l_695_);
lean_ctor_set(v___x_846_, 2, v_v_965_);
lean_ctor_set(v___x_846_, 1, v_k_964_);
lean_ctor_set(v___x_846_, 0, v___x_702_);
v___x_975_ = v___x_846_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v___x_702_);
lean_ctor_set(v_reuseFailAlloc_979_, 1, v_k_964_);
lean_ctor_set(v_reuseFailAlloc_979_, 2, v_v_965_);
lean_ctor_set(v_reuseFailAlloc_979_, 3, v_l_695_);
lean_ctor_set(v_reuseFailAlloc_979_, 4, v_l_695_);
v___x_975_ = v_reuseFailAlloc_979_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
lean_object* v___x_977_; 
if (v_isShared_963_ == 0)
{
lean_ctor_set(v___x_962_, 4, v___x_975_);
lean_ctor_set(v___x_962_, 3, v___x_973_);
lean_ctor_set(v___x_962_, 2, v_v_967_);
lean_ctor_set(v___x_962_, 1, v_k_966_);
lean_ctor_set(v___x_962_, 0, v___x_971_);
v___x_977_ = v___x_962_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v___x_971_);
lean_ctor_set(v_reuseFailAlloc_978_, 1, v_k_966_);
lean_ctor_set(v_reuseFailAlloc_978_, 2, v_v_967_);
lean_ctor_set(v_reuseFailAlloc_978_, 3, v___x_973_);
lean_ctor_set(v_reuseFailAlloc_978_, 4, v___x_975_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
return v___x_977_;
}
}
}
}
}
}
else
{
lean_object* v_k_991_; lean_object* v_v_992_; lean_object* v___x_993_; lean_object* v___x_995_; 
v_k_991_ = lean_ctor_get(v___x_848_, 0);
lean_inc(v_k_991_);
v_v_992_ = lean_ctor_get(v___x_848_, 1);
lean_inc(v_v_992_);
lean_dec_ref(v___x_848_);
v___x_993_ = lean_unsigned_to_nat(2u);
if (v_isShared_847_ == 0)
{
lean_ctor_set(v___x_846_, 4, v_r_696_);
lean_ctor_set(v___x_846_, 3, v_l_682_);
lean_ctor_set(v___x_846_, 2, v_v_992_);
lean_ctor_set(v___x_846_, 1, v_k_991_);
lean_ctor_set(v___x_846_, 0, v___x_993_);
v___x_995_ = v___x_846_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v___x_993_);
lean_ctor_set(v_reuseFailAlloc_996_, 1, v_k_991_);
lean_ctor_set(v_reuseFailAlloc_996_, 2, v_v_992_);
lean_ctor_set(v_reuseFailAlloc_996_, 3, v_l_682_);
lean_ctor_set(v_reuseFailAlloc_996_, 4, v_r_696_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
}
}
}
}
}
else
{
return v_l_682_;
}
}
else
{
return v_r_683_;
}
}
else
{
lean_object* v_val_1003_; lean_object* v___x_1005_; 
v_val_1003_ = lean_ctor_get(v___x_691_, 0);
lean_inc(v_val_1003_);
lean_dec_ref_known(v___x_691_, 1);
if (v_isShared_686_ == 0)
{
lean_ctor_set(v___x_685_, 2, v_val_1003_);
lean_ctor_set(v___x_685_, 1, v_k_677_);
v___x_1005_ = v___x_685_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v_size_679_);
lean_ctor_set(v_reuseFailAlloc_1006_, 1, v_k_677_);
lean_ctor_set(v_reuseFailAlloc_1006_, 2, v_val_1003_);
lean_ctor_set(v_reuseFailAlloc_1006_, 3, v_l_682_);
lean_ctor_set(v_reuseFailAlloc_1006_, 4, v_r_683_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
return v___x_1005_;
}
}
}
default: 
{
lean_object* v_impl_1007_; lean_object* v___x_1008_; 
lean_del_object(v___x_685_);
lean_dec(v_size_679_);
v_impl_1007_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg(v___x_676_, v_k_677_, v_r_683_);
v___x_1008_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_680_, v_v_681_, v_l_682_, v_impl_1007_);
return v___x_1008_;
}
}
}
}
else
{
lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1010_ = lean_box(0);
v___x_1011_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg___lam__0(v___x_676_, v___x_1010_);
if (lean_obj_tag(v___x_1011_) == 0)
{
lean_dec(v_k_677_);
return v_t_678_;
}
else
{
lean_object* v_val_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
v_val_1012_ = lean_ctor_get(v___x_1011_, 0);
lean_inc(v_val_1012_);
lean_dec_ref_known(v___x_1011_, 1);
v___x_1013_ = lean_unsigned_to_nat(1u);
v___x_1014_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1013_);
lean_ctor_set(v___x_1014_, 1, v_k_677_);
lean_ctor_set(v___x_1014_, 2, v_val_1012_);
lean_ctor_set(v___x_1014_, 3, v_t_678_);
lean_ctor_set(v___x_1014_, 4, v_t_678_);
return v___x_1014_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1015_, lean_object* v_i_1016_, lean_object* v_k_1017_){
_start:
{
lean_object* v___x_1018_; uint8_t v___x_1019_; 
v___x_1018_ = lean_array_get_size(v_keys_1015_);
v___x_1019_ = lean_nat_dec_lt(v_i_1016_, v___x_1018_);
if (v___x_1019_ == 0)
{
lean_dec(v_i_1016_);
return v___x_1019_;
}
else
{
lean_object* v_k_x27_1020_; uint8_t v___x_1021_; 
v_k_x27_1020_ = lean_array_fget_borrowed(v_keys_1015_, v_i_1016_);
v___x_1021_ = lean_name_eq(v_k_1017_, v_k_x27_1020_);
if (v___x_1021_ == 0)
{
lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1022_ = lean_unsigned_to_nat(1u);
v___x_1023_ = lean_nat_add(v_i_1016_, v___x_1022_);
lean_dec(v_i_1016_);
v_i_1016_ = v___x_1023_;
goto _start;
}
else
{
lean_dec(v_i_1016_);
return v___x_1021_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1025_, lean_object* v_i_1026_, lean_object* v_k_1027_){
_start:
{
uint8_t v_res_1028_; lean_object* v_r_1029_; 
v_res_1028_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___redArg(v_keys_1025_, v_i_1026_, v_k_1027_);
lean_dec(v_k_1027_);
lean_dec_ref(v_keys_1025_);
v_r_1029_ = lean_box(v_res_1028_);
return v_r_1029_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___redArg(lean_object* v_x_1030_, size_t v_x_1031_, lean_object* v_x_1032_){
_start:
{
if (lean_obj_tag(v_x_1030_) == 0)
{
lean_object* v_es_1033_; lean_object* v___x_1034_; size_t v___x_1035_; size_t v___x_1036_; lean_object* v_j_1037_; lean_object* v___x_1038_; 
v_es_1033_ = lean_ctor_get(v_x_1030_, 0);
v___x_1034_ = lean_box(2);
v___x_1035_ = ((size_t)31ULL);
v___x_1036_ = lean_usize_land(v_x_1031_, v___x_1035_);
v_j_1037_ = lean_usize_to_nat(v___x_1036_);
v___x_1038_ = lean_array_get_borrowed(v___x_1034_, v_es_1033_, v_j_1037_);
lean_dec(v_j_1037_);
switch(lean_obj_tag(v___x_1038_))
{
case 0:
{
lean_object* v_key_1039_; uint8_t v___x_1040_; 
v_key_1039_ = lean_ctor_get(v___x_1038_, 0);
v___x_1040_ = lean_name_eq(v_x_1032_, v_key_1039_);
return v___x_1040_;
}
case 1:
{
lean_object* v_node_1041_; size_t v___x_1042_; size_t v___x_1043_; 
v_node_1041_ = lean_ctor_get(v___x_1038_, 0);
v___x_1042_ = ((size_t)5ULL);
v___x_1043_ = lean_usize_shift_right(v_x_1031_, v___x_1042_);
v_x_1030_ = v_node_1041_;
v_x_1031_ = v___x_1043_;
goto _start;
}
default: 
{
uint8_t v___x_1045_; 
v___x_1045_ = 0;
return v___x_1045_;
}
}
}
else
{
lean_object* v_ks_1046_; lean_object* v___x_1047_; uint8_t v___x_1048_; 
v_ks_1046_ = lean_ctor_get(v_x_1030_, 0);
v___x_1047_ = lean_unsigned_to_nat(0u);
v___x_1048_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___redArg(v_ks_1046_, v___x_1047_, v_x_1032_);
return v___x_1048_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___redArg___boxed(lean_object* v_x_1049_, lean_object* v_x_1050_, lean_object* v_x_1051_){
_start:
{
size_t v_x_4157__boxed_1052_; uint8_t v_res_1053_; lean_object* v_r_1054_; 
v_x_4157__boxed_1052_ = lean_unbox_usize(v_x_1050_);
lean_dec(v_x_1050_);
v_res_1053_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___redArg(v_x_1049_, v_x_4157__boxed_1052_, v_x_1051_);
lean_dec(v_x_1051_);
lean_dec_ref(v_x_1049_);
v_r_1054_ = lean_box(v_res_1053_);
return v_r_1054_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___redArg(lean_object* v_x_1055_, lean_object* v_x_1056_){
_start:
{
uint64_t v___y_1058_; 
if (lean_obj_tag(v_x_1056_) == 0)
{
uint64_t v___x_1061_; 
v___x_1061_ = 1723ULL;
v___y_1058_ = v___x_1061_;
goto v___jp_1057_;
}
else
{
uint64_t v_hash_1062_; 
v_hash_1062_ = lean_ctor_get_uint64(v_x_1056_, sizeof(void*)*2);
v___y_1058_ = v_hash_1062_;
goto v___jp_1057_;
}
v___jp_1057_:
{
size_t v___x_1059_; uint8_t v___x_1060_; 
v___x_1059_ = lean_uint64_to_usize(v___y_1058_);
v___x_1060_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___redArg(v_x_1055_, v___x_1059_, v_x_1056_);
return v___x_1060_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___redArg___boxed(lean_object* v_x_1063_, lean_object* v_x_1064_){
_start:
{
uint8_t v_res_1065_; lean_object* v_r_1066_; 
v_res_1065_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___redArg(v_x_1063_, v_x_1064_);
lean_dec(v_x_1064_);
lean_dec_ref(v_x_1063_);
v_r_1066_ = lean_box(v_res_1065_);
return v_r_1066_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___lam__0(lean_object* v_tactics_1067_, lean_object* v_a_1068_, uint8_t v___x_1069_, lean_object* v_x_1070_, lean_object* v_____s_1071_){
_start:
{
lean_object* v_fst_1072_; lean_object* v_kinds_1073_; uint8_t v___x_1074_; 
v_fst_1072_ = lean_ctor_get(v_x_1070_, 0);
lean_inc(v_fst_1072_);
lean_dec_ref(v_x_1070_);
v_kinds_1073_ = lean_ctor_get(v_tactics_1067_, 1);
v___x_1074_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___redArg(v_kinds_1073_, v_fst_1072_);
if (v___x_1074_ == 0)
{
lean_object* v___x_1075_; 
lean_dec(v_fst_1072_);
lean_dec(v_a_1068_);
v___x_1075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1075_, 0, v_____s_1071_);
return v___x_1075_;
}
else
{
lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
v___x_1076_ = l_Lean_Name_toString(v_a_1068_, v___x_1069_);
v___x_1077_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg(v___x_1076_, v_fst_1072_, v_____s_1071_);
v___x_1078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1077_);
return v___x_1078_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___lam__0___boxed(lean_object* v_tactics_1079_, lean_object* v_a_1080_, lean_object* v___x_1081_, lean_object* v_x_1082_, lean_object* v_____s_1083_){
_start:
{
uint8_t v___x_4213__boxed_1084_; lean_object* v_res_1085_; 
v___x_4213__boxed_1084_ = lean_unbox(v___x_1081_);
v_res_1085_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___lam__0(v_tactics_1079_, v_a_1080_, v___x_4213__boxed_1084_, v_x_1082_, v_____s_1083_);
lean_dec_ref(v_tactics_1079_);
return v_res_1085_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___redArg(lean_object* v_f_1086_, lean_object* v_keys_1087_, lean_object* v_vals_1088_, lean_object* v_i_1089_, lean_object* v_acc_1090_){
_start:
{
lean_object* v___x_1091_; uint8_t v___x_1092_; 
v___x_1091_ = lean_array_get_size(v_keys_1087_);
v___x_1092_ = lean_nat_dec_lt(v_i_1089_, v___x_1091_);
if (v___x_1092_ == 0)
{
lean_object* v___x_1093_; 
lean_dec(v_i_1089_);
lean_dec_ref(v_f_1086_);
v___x_1093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1093_, 0, v_acc_1090_);
return v___x_1093_;
}
else
{
lean_object* v_k_1094_; lean_object* v_v_1095_; lean_object* v___x_1096_; 
v_k_1094_ = lean_array_fget_borrowed(v_keys_1087_, v_i_1089_);
v_v_1095_ = lean_array_fget_borrowed(v_vals_1088_, v_i_1089_);
lean_inc_ref(v_f_1086_);
lean_inc(v_v_1095_);
lean_inc(v_k_1094_);
v___x_1096_ = lean_apply_3(v_f_1086_, v_acc_1090_, v_k_1094_, v_v_1095_);
if (lean_obj_tag(v___x_1096_) == 0)
{
lean_dec(v_i_1089_);
lean_dec_ref(v_f_1086_);
return v___x_1096_;
}
else
{
lean_object* v_a_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v_a_1097_ = lean_ctor_get(v___x_1096_, 0);
lean_inc(v_a_1097_);
lean_dec_ref_known(v___x_1096_, 1);
v___x_1098_ = lean_unsigned_to_nat(1u);
v___x_1099_ = lean_nat_add(v_i_1089_, v___x_1098_);
lean_dec(v_i_1089_);
v_i_1089_ = v___x_1099_;
v_acc_1090_ = v_a_1097_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___redArg___boxed(lean_object* v_f_1101_, lean_object* v_keys_1102_, lean_object* v_vals_1103_, lean_object* v_i_1104_, lean_object* v_acc_1105_){
_start:
{
lean_object* v_res_1106_; 
v_res_1106_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___redArg(v_f_1101_, v_keys_1102_, v_vals_1103_, v_i_1104_, v_acc_1105_);
lean_dec_ref(v_vals_1103_);
lean_dec_ref(v_keys_1102_);
return v_res_1106_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5___redArg(lean_object* v_f_1107_, lean_object* v_x_1108_, lean_object* v_x_1109_){
_start:
{
if (lean_obj_tag(v_x_1108_) == 0)
{
lean_object* v_es_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1130_; 
v_es_1110_ = lean_ctor_get(v_x_1108_, 0);
v_isSharedCheck_1130_ = !lean_is_exclusive(v_x_1108_);
if (v_isSharedCheck_1130_ == 0)
{
v___x_1112_ = v_x_1108_;
v_isShared_1113_ = v_isSharedCheck_1130_;
goto v_resetjp_1111_;
}
else
{
lean_inc(v_es_1110_);
lean_dec(v_x_1108_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1130_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; uint8_t v___x_1116_; 
v___x_1114_ = lean_unsigned_to_nat(0u);
v___x_1115_ = lean_array_get_size(v_es_1110_);
v___x_1116_ = lean_nat_dec_lt(v___x_1114_, v___x_1115_);
if (v___x_1116_ == 0)
{
lean_object* v___x_1118_; 
lean_dec_ref(v_es_1110_);
lean_dec_ref(v_f_1107_);
if (v_isShared_1113_ == 0)
{
lean_ctor_set_tag(v___x_1112_, 1);
lean_ctor_set(v___x_1112_, 0, v_x_1109_);
v___x_1118_ = v___x_1112_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v_x_1109_);
v___x_1118_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
return v___x_1118_;
}
}
else
{
uint8_t v___x_1120_; 
v___x_1120_ = lean_nat_dec_le(v___x_1115_, v___x_1115_);
if (v___x_1120_ == 0)
{
if (v___x_1116_ == 0)
{
lean_object* v___x_1122_; 
lean_dec_ref(v_es_1110_);
lean_dec_ref(v_f_1107_);
if (v_isShared_1113_ == 0)
{
lean_ctor_set_tag(v___x_1112_, 1);
lean_ctor_set(v___x_1112_, 0, v_x_1109_);
v___x_1122_ = v___x_1112_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v_x_1109_);
v___x_1122_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
return v___x_1122_;
}
}
else
{
size_t v___x_1124_; size_t v___x_1125_; lean_object* v___x_1126_; 
lean_del_object(v___x_1112_);
v___x_1124_ = ((size_t)0ULL);
v___x_1125_ = lean_usize_of_nat(v___x_1115_);
v___x_1126_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___redArg(v_f_1107_, v_es_1110_, v___x_1124_, v___x_1125_, v_x_1109_);
lean_dec_ref(v_es_1110_);
return v___x_1126_;
}
}
else
{
size_t v___x_1127_; size_t v___x_1128_; lean_object* v___x_1129_; 
lean_del_object(v___x_1112_);
v___x_1127_ = ((size_t)0ULL);
v___x_1128_ = lean_usize_of_nat(v___x_1115_);
v___x_1129_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___redArg(v_f_1107_, v_es_1110_, v___x_1127_, v___x_1128_, v_x_1109_);
lean_dec_ref(v_es_1110_);
return v___x_1129_;
}
}
}
}
else
{
lean_object* v_ks_1131_; lean_object* v_vs_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; 
v_ks_1131_ = lean_ctor_get(v_x_1108_, 0);
lean_inc_ref(v_ks_1131_);
v_vs_1132_ = lean_ctor_get(v_x_1108_, 1);
lean_inc_ref(v_vs_1132_);
lean_dec_ref_known(v_x_1108_, 2);
v___x_1133_ = lean_unsigned_to_nat(0u);
v___x_1134_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___redArg(v_f_1107_, v_ks_1131_, v_vs_1132_, v___x_1133_, v_x_1109_);
lean_dec_ref(v_vs_1132_);
lean_dec_ref(v_ks_1131_);
return v___x_1134_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___redArg(lean_object* v_f_1135_, lean_object* v_as_1136_, size_t v_i_1137_, size_t v_stop_1138_, lean_object* v_b_1139_){
_start:
{
lean_object* v_a_1141_; lean_object* v___y_1146_; uint8_t v___x_1148_; 
v___x_1148_ = lean_usize_dec_eq(v_i_1137_, v_stop_1138_);
if (v___x_1148_ == 0)
{
lean_object* v___x_1149_; 
v___x_1149_ = lean_array_uget_borrowed(v_as_1136_, v_i_1137_);
switch(lean_obj_tag(v___x_1149_))
{
case 0:
{
lean_object* v_key_1150_; lean_object* v_val_1151_; lean_object* v___x_1152_; 
v_key_1150_ = lean_ctor_get(v___x_1149_, 0);
v_val_1151_ = lean_ctor_get(v___x_1149_, 1);
lean_inc_ref(v_f_1135_);
lean_inc(v_val_1151_);
lean_inc(v_key_1150_);
v___x_1152_ = lean_apply_3(v_f_1135_, v_b_1139_, v_key_1150_, v_val_1151_);
v___y_1146_ = v___x_1152_;
goto v___jp_1145_;
}
case 1:
{
lean_object* v_node_1153_; lean_object* v___x_1154_; 
v_node_1153_ = lean_ctor_get(v___x_1149_, 0);
lean_inc(v_node_1153_);
lean_inc_ref(v_f_1135_);
v___x_1154_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5___redArg(v_f_1135_, v_node_1153_, v_b_1139_);
v___y_1146_ = v___x_1154_;
goto v___jp_1145_;
}
default: 
{
v_a_1141_ = v_b_1139_;
goto v___jp_1140_;
}
}
}
else
{
lean_object* v___x_1155_; 
lean_dec_ref(v_f_1135_);
v___x_1155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1155_, 0, v_b_1139_);
return v___x_1155_;
}
v___jp_1140_:
{
size_t v___x_1142_; size_t v___x_1143_; 
v___x_1142_ = ((size_t)1ULL);
v___x_1143_ = lean_usize_add(v_i_1137_, v___x_1142_);
v_i_1137_ = v___x_1143_;
v_b_1139_ = v_a_1141_;
goto _start;
}
v___jp_1145_:
{
if (lean_obj_tag(v___y_1146_) == 0)
{
lean_dec_ref(v_f_1135_);
return v___y_1146_;
}
else
{
lean_object* v_a_1147_; 
v_a_1147_ = lean_ctor_get(v___y_1146_, 0);
lean_inc(v_a_1147_);
lean_dec_ref_known(v___y_1146_, 1);
v_a_1141_ = v_a_1147_;
goto v___jp_1140_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___redArg___boxed(lean_object* v_f_1156_, lean_object* v_as_1157_, lean_object* v_i_1158_, lean_object* v_stop_1159_, lean_object* v_b_1160_){
_start:
{
size_t v_i_boxed_1161_; size_t v_stop_boxed_1162_; lean_object* v_res_1163_; 
v_i_boxed_1161_ = lean_unbox_usize(v_i_1158_);
lean_dec(v_i_1158_);
v_stop_boxed_1162_ = lean_unbox_usize(v_stop_1159_);
lean_dec(v_stop_1159_);
v_res_1163_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___redArg(v_f_1156_, v_as_1157_, v_i_boxed_1161_, v_stop_boxed_1162_, v_b_1160_);
lean_dec_ref(v_as_1157_);
return v_res_1163_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg___lam__0(lean_object* v_f_1164_, lean_object* v_s_1165_, lean_object* v_a_1166_, lean_object* v_b_1167_){
_start:
{
lean_object* v___x_1168_; lean_object* v___x_1169_; 
v___x_1168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1168_, 0, v_a_1166_);
lean_ctor_set(v___x_1168_, 1, v_b_1167_);
v___x_1169_ = lean_apply_2(v_f_1164_, v___x_1168_, v_s_1165_);
if (lean_obj_tag(v___x_1169_) == 0)
{
lean_object* v_a_1170_; lean_object* v___x_1172_; uint8_t v_isShared_1173_; uint8_t v_isSharedCheck_1177_; 
v_a_1170_ = lean_ctor_get(v___x_1169_, 0);
v_isSharedCheck_1177_ = !lean_is_exclusive(v___x_1169_);
if (v_isSharedCheck_1177_ == 0)
{
v___x_1172_ = v___x_1169_;
v_isShared_1173_ = v_isSharedCheck_1177_;
goto v_resetjp_1171_;
}
else
{
lean_inc(v_a_1170_);
lean_dec(v___x_1169_);
v___x_1172_ = lean_box(0);
v_isShared_1173_ = v_isSharedCheck_1177_;
goto v_resetjp_1171_;
}
v_resetjp_1171_:
{
lean_object* v___x_1175_; 
if (v_isShared_1173_ == 0)
{
v___x_1175_ = v___x_1172_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v_a_1170_);
v___x_1175_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
return v___x_1175_;
}
}
}
else
{
lean_object* v_a_1178_; lean_object* v___x_1180_; uint8_t v_isShared_1181_; uint8_t v_isSharedCheck_1185_; 
v_a_1178_ = lean_ctor_get(v___x_1169_, 0);
v_isSharedCheck_1185_ = !lean_is_exclusive(v___x_1169_);
if (v_isSharedCheck_1185_ == 0)
{
v___x_1180_ = v___x_1169_;
v_isShared_1181_ = v_isSharedCheck_1185_;
goto v_resetjp_1179_;
}
else
{
lean_inc(v_a_1178_);
lean_dec(v___x_1169_);
v___x_1180_ = lean_box(0);
v_isShared_1181_ = v_isSharedCheck_1185_;
goto v_resetjp_1179_;
}
v_resetjp_1179_:
{
lean_object* v___x_1183_; 
if (v_isShared_1181_ == 0)
{
v___x_1183_ = v___x_1180_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v_a_1178_);
v___x_1183_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
return v___x_1183_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg(lean_object* v_map_1186_, lean_object* v_init_1187_, lean_object* v_f_1188_){
_start:
{
lean_object* v___f_1189_; lean_object* v___x_1190_; lean_object* v_a_1191_; 
v___f_1189_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1189_, 0, v_f_1188_);
lean_inc_ref(v_map_1186_);
v___x_1190_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5___redArg(v___f_1189_, v_map_1186_, v_init_1187_);
v_a_1191_ = lean_ctor_get(v___x_1190_, 0);
lean_inc(v_a_1191_);
lean_dec_ref(v___x_1190_);
return v_a_1191_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg___boxed(lean_object* v_map_1192_, lean_object* v_init_1193_, lean_object* v_f_1194_){
_start:
{
lean_object* v_res_1195_; 
v_res_1195_ = l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg(v_map_1192_, v_init_1193_, v_f_1194_);
lean_dec_ref(v_map_1192_);
return v_res_1195_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_1196_; 
v___x_1196_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1196_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1197_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___closed__0, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___closed__0_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___closed__0);
v___x_1198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1198_, 0, v___x_1197_);
return v___x_1198_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg(lean_object* v_tactics_1199_, lean_object* v_a_1200_, uint8_t v___x_1201_, lean_object* v_as_x27_1202_, lean_object* v_b_1203_){
_start:
{
if (lean_obj_tag(v_as_x27_1202_) == 0)
{
lean_dec(v_a_1200_);
lean_dec_ref(v_tactics_1199_);
return v_b_1203_;
}
else
{
lean_object* v_head_1204_; lean_object* v_fst_1205_; lean_object* v_info_1206_; lean_object* v_tail_1207_; lean_object* v_collectKinds_1208_; lean_object* v___x_1209_; lean_object* v___f_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
v_head_1204_ = lean_ctor_get(v_as_x27_1202_, 0);
v_fst_1205_ = lean_ctor_get(v_head_1204_, 0);
v_info_1206_ = lean_ctor_get(v_fst_1205_, 0);
v_tail_1207_ = lean_ctor_get(v_as_x27_1202_, 1);
v_collectKinds_1208_ = lean_ctor_get(v_info_1206_, 1);
v___x_1209_ = lean_box(v___x_1201_);
lean_inc(v_a_1200_);
lean_inc_ref(v_tactics_1199_);
v___f_1210_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_1210_, 0, v_tactics_1199_);
lean_closure_set(v___f_1210_, 1, v_a_1200_);
lean_closure_set(v___f_1210_, 2, v___x_1209_);
v___x_1211_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___closed__1, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___closed__1);
lean_inc_ref(v_collectKinds_1208_);
v___x_1212_ = lean_apply_1(v_collectKinds_1208_, v___x_1211_);
v___x_1213_ = l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg(v___x_1212_, v_b_1203_, v___f_1210_);
lean_dec_ref(v___x_1212_);
v_as_x27_1202_ = v_tail_1207_;
v_b_1203_ = v___x_1213_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg___boxed(lean_object* v_tactics_1215_, lean_object* v_a_1216_, lean_object* v___x_1217_, lean_object* v_as_x27_1218_, lean_object* v_b_1219_){
_start:
{
uint8_t v___x_4387__boxed_1220_; lean_object* v_res_1221_; 
v___x_4387__boxed_1220_ = lean_unbox(v___x_1217_);
v_res_1221_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg(v_tactics_1215_, v_a_1216_, v___x_4387__boxed_1220_, v_as_x27_1218_, v_b_1219_);
lean_dec(v_as_x27_1218_);
return v_res_1221_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4(lean_object* v_tactics_1225_, lean_object* v_init_1226_, lean_object* v_x_1227_){
_start:
{
if (lean_obj_tag(v_x_1227_) == 0)
{
lean_object* v_k_1228_; lean_object* v_v_1229_; lean_object* v_l_1230_; lean_object* v_r_1231_; lean_object* v___x_1232_; lean_object* v_a_1233_; lean_object* v___x_1234_; uint8_t v___x_1235_; 
v_k_1228_ = lean_ctor_get(v_x_1227_, 1);
lean_inc(v_k_1228_);
v_v_1229_ = lean_ctor_get(v_x_1227_, 2);
lean_inc(v_v_1229_);
v_l_1230_ = lean_ctor_get(v_x_1227_, 3);
lean_inc(v_l_1230_);
v_r_1231_ = lean_ctor_get(v_x_1227_, 4);
lean_inc(v_r_1231_);
lean_dec_ref_known(v_x_1227_, 5);
lean_inc_ref(v_tactics_1225_);
v___x_1232_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4(v_tactics_1225_, v_init_1226_, v_l_1230_);
v_a_1233_ = lean_ctor_get(v___x_1232_, 0);
lean_inc(v_a_1233_);
v___x_1234_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4___closed__1));
v___x_1235_ = lean_name_eq(v_k_1228_, v___x_1234_);
if (v___x_1235_ == 0)
{
lean_object* v___x_1236_; 
lean_dec_ref(v___x_1232_);
lean_inc_ref(v_tactics_1225_);
v___x_1236_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg(v_tactics_1225_, v_k_1228_, v___x_1235_, v_v_1229_, v_a_1233_);
lean_dec(v_v_1229_);
v_init_1226_ = v___x_1236_;
v_x_1227_ = v_r_1231_;
goto _start;
}
else
{
lean_object* v_a_1238_; 
lean_dec(v_a_1233_);
lean_dec(v_v_1229_);
lean_dec(v_k_1228_);
v_a_1238_ = lean_ctor_get(v___x_1232_, 0);
lean_inc(v_a_1238_);
lean_dec_ref(v___x_1232_);
v_init_1226_ = v_a_1238_;
v_x_1227_ = v_r_1231_;
goto _start;
}
}
else
{
lean_object* v___x_1240_; 
lean_dec_ref(v_tactics_1225_);
v___x_1240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1240_, 0, v_init_1226_);
return v___x_1240_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens(lean_object* v_tactics_1241_, lean_object* v_table_1242_, lean_object* v_firsts_1243_){
_start:
{
lean_object* v___x_1244_; lean_object* v_a_1245_; 
v___x_1244_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__4(v_tactics_1241_, v_firsts_1243_, v_table_1242_);
v_a_1245_ = lean_ctor_get(v___x_1244_, 0);
lean_inc(v_a_1245_);
lean_dec_ref(v___x_1244_);
return v_a_1245_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0(lean_object* v_00_u03b2_1246_, lean_object* v_x_1247_, lean_object* v_x_1248_){
_start:
{
uint8_t v___x_1249_; 
v___x_1249_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___redArg(v_x_1247_, v_x_1248_);
return v___x_1249_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0___boxed(lean_object* v_00_u03b2_1250_, lean_object* v_x_1251_, lean_object* v_x_1252_){
_start:
{
uint8_t v_res_1253_; lean_object* v_r_1254_; 
v_res_1253_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0(v_00_u03b2_1250_, v_x_1251_, v_x_1252_);
lean_dec(v_x_1252_);
lean_dec_ref(v_x_1251_);
v_r_1254_ = lean_box(v_res_1253_);
return v_r_1254_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1(lean_object* v___x_1255_, lean_object* v_k_1256_, lean_object* v_t_1257_, lean_object* v_hl_1258_){
_start:
{
lean_object* v___x_1259_; 
v___x_1259_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__1___redArg(v___x_1255_, v_k_1256_, v_t_1257_);
return v___x_1259_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2(lean_object* v_00_u03c3_1260_, lean_object* v_00_u03b2_1261_, lean_object* v_map_1262_, lean_object* v_init_1263_, lean_object* v_f_1264_){
_start:
{
lean_object* v___x_1265_; 
v___x_1265_ = l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___redArg(v_map_1262_, v_init_1263_, v_f_1264_);
return v___x_1265_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2___boxed(lean_object* v_00_u03c3_1266_, lean_object* v_00_u03b2_1267_, lean_object* v_map_1268_, lean_object* v_init_1269_, lean_object* v_f_1270_){
_start:
{
lean_object* v_res_1271_; 
v_res_1271_ = l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2(v_00_u03c3_1266_, v_00_u03b2_1267_, v_map_1268_, v_init_1269_, v_f_1270_);
lean_dec_ref(v_map_1268_);
return v_res_1271_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3(lean_object* v_tactics_1272_, lean_object* v_a_1273_, uint8_t v___x_1274_, lean_object* v_as_1275_, lean_object* v_as_x27_1276_, lean_object* v_b_1277_, lean_object* v_a_1278_){
_start:
{
lean_object* v___x_1279_; 
v___x_1279_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___redArg(v_tactics_1272_, v_a_1273_, v___x_1274_, v_as_x27_1276_, v_b_1277_);
return v___x_1279_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3___boxed(lean_object* v_tactics_1280_, lean_object* v_a_1281_, lean_object* v___x_1282_, lean_object* v_as_1283_, lean_object* v_as_x27_1284_, lean_object* v_b_1285_, lean_object* v_a_1286_){
_start:
{
uint8_t v___x_4470__boxed_1287_; lean_object* v_res_1288_; 
v___x_4470__boxed_1287_ = lean_unbox(v___x_1282_);
v_res_1288_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__3(v_tactics_1280_, v_a_1281_, v___x_4470__boxed_1287_, v_as_1283_, v_as_x27_1284_, v_b_1285_, v_a_1286_);
lean_dec(v_as_x27_1284_);
lean_dec(v_as_1283_);
return v_res_1288_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0(lean_object* v_00_u03b2_1289_, lean_object* v_x_1290_, size_t v_x_1291_, lean_object* v_x_1292_){
_start:
{
uint8_t v___x_1293_; 
v___x_1293_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___redArg(v_x_1290_, v_x_1291_, v_x_1292_);
return v___x_1293_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1294_, lean_object* v_x_1295_, lean_object* v_x_1296_, lean_object* v_x_1297_){
_start:
{
size_t v_x_4479__boxed_1298_; uint8_t v_res_1299_; lean_object* v_r_1300_; 
v_x_4479__boxed_1298_ = lean_unbox_usize(v_x_1296_);
lean_dec(v_x_1296_);
v_res_1299_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0(v_00_u03b2_1294_, v_x_1295_, v_x_4479__boxed_1298_, v_x_1297_);
lean_dec(v_x_1297_);
lean_dec_ref(v_x_1295_);
v_r_1300_ = lean_box(v_res_1299_);
return v_r_1300_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3___redArg(lean_object* v_map_1301_, lean_object* v_f_1302_, lean_object* v_init_1303_){
_start:
{
lean_object* v___x_1304_; 
v___x_1304_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5___redArg(v_f_1302_, v_map_1301_, v_init_1303_);
return v___x_1304_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3(lean_object* v_00_u03c3_1305_, lean_object* v_00_u03c3_1306_, lean_object* v_00_u03b2_1307_, lean_object* v_map_1308_, lean_object* v_f_1309_, lean_object* v_init_1310_){
_start:
{
lean_object* v___x_1311_; 
v___x_1311_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5___redArg(v_f_1309_, v_map_1308_, v_init_1310_);
return v___x_1311_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1312_, lean_object* v_keys_1313_, lean_object* v_vals_1314_, lean_object* v_heq_1315_, lean_object* v_i_1316_, lean_object* v_k_1317_){
_start:
{
uint8_t v___x_1318_; 
v___x_1318_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___redArg(v_keys_1313_, v_i_1316_, v_k_1317_);
return v___x_1318_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1319_, lean_object* v_keys_1320_, lean_object* v_vals_1321_, lean_object* v_heq_1322_, lean_object* v_i_1323_, lean_object* v_k_1324_){
_start:
{
uint8_t v_res_1325_; lean_object* v_r_1326_; 
v_res_1325_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__0_spec__0_spec__1(v_00_u03b2_1319_, v_keys_1320_, v_vals_1321_, v_heq_1322_, v_i_1323_, v_k_1324_);
lean_dec(v_k_1324_);
lean_dec_ref(v_vals_1321_);
lean_dec_ref(v_keys_1320_);
v_r_1326_ = lean_box(v_res_1325_);
return v_r_1326_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5(lean_object* v_00_u03c3_1327_, lean_object* v_00_u03c3_1328_, lean_object* v_00_u03b1_1329_, lean_object* v_00_u03b2_1330_, lean_object* v_f_1331_, lean_object* v_x_1332_, lean_object* v_x_1333_){
_start:
{
lean_object* v___x_1334_; 
v___x_1334_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5___redArg(v_f_1331_, v_x_1332_, v_x_1333_);
return v___x_1334_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8(lean_object* v_00_u03b1_1335_, lean_object* v_00_u03b2_1336_, lean_object* v_00_u03c3_1337_, lean_object* v_00_u03c3_1338_, lean_object* v_f_1339_, lean_object* v_as_1340_, size_t v_i_1341_, size_t v_stop_1342_, lean_object* v_b_1343_){
_start:
{
lean_object* v___x_1344_; 
v___x_1344_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___redArg(v_f_1339_, v_as_1340_, v_i_1341_, v_stop_1342_, v_b_1343_);
return v___x_1344_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8___boxed(lean_object* v_00_u03b1_1345_, lean_object* v_00_u03b2_1346_, lean_object* v_00_u03c3_1347_, lean_object* v_00_u03c3_1348_, lean_object* v_f_1349_, lean_object* v_as_1350_, lean_object* v_i_1351_, lean_object* v_stop_1352_, lean_object* v_b_1353_){
_start:
{
size_t v_i_boxed_1354_; size_t v_stop_boxed_1355_; lean_object* v_res_1356_; 
v_i_boxed_1354_ = lean_unbox_usize(v_i_1351_);
lean_dec(v_i_1351_);
v_stop_boxed_1355_ = lean_unbox_usize(v_stop_1352_);
lean_dec(v_stop_1352_);
v_res_1356_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__8(v_00_u03b1_1345_, v_00_u03b2_1346_, v_00_u03c3_1347_, v_00_u03c3_1348_, v_f_1349_, v_as_1350_, v_i_boxed_1354_, v_stop_boxed_1355_, v_b_1353_);
lean_dec_ref(v_as_1350_);
return v_res_1356_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9(lean_object* v_00_u03c3_1357_, lean_object* v_00_u03c3_1358_, lean_object* v_00_u03b1_1359_, lean_object* v_00_u03b2_1360_, lean_object* v_f_1361_, lean_object* v_keys_1362_, lean_object* v_vals_1363_, lean_object* v_heq_1364_, lean_object* v_i_1365_, lean_object* v_acc_1366_){
_start:
{
lean_object* v___x_1367_; 
v___x_1367_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___redArg(v_f_1361_, v_keys_1362_, v_vals_1363_, v_i_1365_, v_acc_1366_);
return v___x_1367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9___boxed(lean_object* v_00_u03c3_1368_, lean_object* v_00_u03c3_1369_, lean_object* v_00_u03b1_1370_, lean_object* v_00_u03b2_1371_, lean_object* v_f_1372_, lean_object* v_keys_1373_, lean_object* v_vals_1374_, lean_object* v_heq_1375_, lean_object* v_i_1376_, lean_object* v_acc_1377_){
_start:
{
lean_object* v_res_1378_; 
v_res_1378_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens_spec__2_spec__3_spec__5_spec__9(v_00_u03c3_1368_, v_00_u03c3_1369_, v_00_u03b1_1370_, v_00_u03b2_1371_, v_f_1372_, v_keys_1373_, v_vals_1374_, v_heq_1375_, v_i_1376_, v_acc_1377_);
lean_dec_ref(v_vals_1374_);
lean_dec_ref(v_keys_1373_);
return v_res_1378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__0(lean_object* v_x1_1379_, lean_object* v_x2_1380_){
_start:
{
lean_object* v_fst_1381_; lean_object* v_snd_1382_; lean_object* v___x_1383_; 
v_fst_1381_ = lean_ctor_get(v_x2_1380_, 0);
lean_inc(v_fst_1381_);
v_snd_1382_ = lean_ctor_get(v_x2_1380_, 1);
lean_inc(v_snd_1382_);
lean_dec_ref(v_x2_1380_);
v___x_1383_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_1381_, v_snd_1382_, v_x1_1379_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1(lean_object* v___f_1403_, lean_object* v_x1_1404_, lean_object* v_x2_1405_){
_start:
{
lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; uint8_t v___x_1409_; 
v___x_1406_ = lean_unsigned_to_nat(0u);
v___x_1407_ = lean_array_get_size(v_x2_1405_);
v___x_1408_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__9));
v___x_1409_ = lean_nat_dec_lt(v___x_1406_, v___x_1407_);
if (v___x_1409_ == 0)
{
lean_dec_ref(v_x2_1405_);
lean_dec_ref(v___f_1403_);
return v_x1_1404_;
}
else
{
uint8_t v___x_1410_; 
v___x_1410_ = lean_nat_dec_le(v___x_1407_, v___x_1407_);
if (v___x_1410_ == 0)
{
if (v___x_1409_ == 0)
{
lean_dec_ref(v_x2_1405_);
lean_dec_ref(v___f_1403_);
return v_x1_1404_;
}
else
{
size_t v___x_1411_; size_t v___x_1412_; lean_object* v___x_1413_; 
v___x_1411_ = ((size_t)0ULL);
v___x_1412_ = lean_usize_of_nat(v___x_1407_);
v___x_1413_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1408_, v___f_1403_, v_x2_1405_, v___x_1411_, v___x_1412_, v_x1_1404_);
return v___x_1413_;
}
}
else
{
size_t v___x_1414_; size_t v___x_1415_; lean_object* v___x_1416_; 
v___x_1414_ = ((size_t)0ULL);
v___x_1415_ = lean_usize_of_nat(v___x_1407_);
v___x_1416_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1408_, v___f_1403_, v_x2_1405_, v___x_1414_, v___x_1415_, v_x1_1404_);
return v___x_1416_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2(lean_object* v___x_1420_, lean_object* v___x_1421_, lean_object* v___x_1422_, lean_object* v___x_1423_, lean_object* v___x_1424_, lean_object* v_toPure_1425_, lean_object* v___f_1426_, lean_object* v_env_1427_){
_start:
{
lean_object* v___x_1428_; lean_object* v_ext_1429_; lean_object* v_toEnvExtension_1430_; lean_object* v_asyncMode_1431_; lean_object* v___x_1432_; lean_object* v_categories_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; 
v___x_1428_ = l_Lean_Parser_parserExtension;
v_ext_1429_ = lean_ctor_get(v___x_1428_, 1);
v_toEnvExtension_1430_ = lean_ctor_get(v_ext_1429_, 0);
v_asyncMode_1431_ = lean_ctor_get(v_toEnvExtension_1430_, 2);
lean_inc_ref(v_env_1427_);
v___x_1432_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_1420_, v___x_1428_, v_env_1427_, v_asyncMode_1431_);
v_categories_1433_ = lean_ctor_get(v___x_1432_, 2);
lean_inc_ref(v_categories_1433_);
lean_dec(v___x_1432_);
v___x_1434_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__1));
v___x_1435_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___x_1421_, v___x_1422_, v_categories_1433_, v___x_1434_);
lean_dec_ref(v_categories_1433_);
if (lean_obj_tag(v___x_1435_) == 1)
{
lean_object* v_val_1436_; lean_object* v___y_1438_; lean_object* v___x_1445_; lean_object* v_toEnvExtension_1446_; lean_object* v_exportEntriesFn_1447_; lean_object* v_asyncMode_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v_importedEntries_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v_exported_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; uint8_t v___x_1460_; 
v_val_1436_ = lean_ctor_get(v___x_1435_, 0);
lean_inc(v_val_1436_);
lean_dec_ref_known(v___x_1435_, 1);
v___x_1445_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v_toEnvExtension_1446_ = lean_ctor_get(v___x_1445_, 0);
v_exportEntriesFn_1447_ = lean_ctor_get(v___x_1445_, 4);
v_asyncMode_1448_ = lean_ctor_get(v_toEnvExtension_1446_, 2);
v___x_1449_ = lean_box(0);
lean_inc_ref_n(v_env_1427_, 2);
v___x_1450_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_1423_, v_toEnvExtension_1446_, v_env_1427_, v_asyncMode_1448_, v___x_1449_);
v_importedEntries_1451_ = lean_ctor_get(v___x_1450_, 0);
lean_inc_ref(v_importedEntries_1451_);
lean_dec(v___x_1450_);
v___x_1452_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1424_, v___x_1445_, v_env_1427_, v_asyncMode_1448_, v___x_1449_);
lean_inc_ref(v_exportEntriesFn_1447_);
v___x_1453_ = lean_apply_2(v_exportEntriesFn_1447_, v_env_1427_, v___x_1452_);
v_exported_1454_ = lean_ctor_get(v___x_1453_, 0);
lean_inc(v_exported_1454_);
lean_dec_ref(v___x_1453_);
v___x_1455_ = lean_box(1);
v___x_1456_ = lean_array_push(v_importedEntries_1451_, v_exported_1454_);
v___x_1457_ = lean_unsigned_to_nat(0u);
v___x_1458_ = lean_array_get_size(v___x_1456_);
v___x_1459_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__1___closed__9));
v___x_1460_ = lean_nat_dec_lt(v___x_1457_, v___x_1458_);
if (v___x_1460_ == 0)
{
lean_dec_ref(v___x_1456_);
lean_dec_ref(v___f_1426_);
v___y_1438_ = v___x_1455_;
goto v___jp_1437_;
}
else
{
uint8_t v___x_1461_; 
v___x_1461_ = lean_nat_dec_le(v___x_1458_, v___x_1458_);
if (v___x_1461_ == 0)
{
if (v___x_1460_ == 0)
{
lean_dec_ref(v___x_1456_);
lean_dec_ref(v___f_1426_);
v___y_1438_ = v___x_1455_;
goto v___jp_1437_;
}
else
{
size_t v___x_1462_; size_t v___x_1463_; lean_object* v___x_1464_; 
v___x_1462_ = ((size_t)0ULL);
v___x_1463_ = lean_usize_of_nat(v___x_1458_);
v___x_1464_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1459_, v___f_1426_, v___x_1456_, v___x_1462_, v___x_1463_, v___x_1455_);
v___y_1438_ = v___x_1464_;
goto v___jp_1437_;
}
}
else
{
size_t v___x_1465_; size_t v___x_1466_; lean_object* v___x_1467_; 
v___x_1465_ = ((size_t)0ULL);
v___x_1466_ = lean_usize_of_nat(v___x_1458_);
v___x_1467_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1459_, v___f_1426_, v___x_1456_, v___x_1465_, v___x_1466_, v___x_1455_);
v___y_1438_ = v___x_1467_;
goto v___jp_1437_;
}
}
v___jp_1437_:
{
lean_object* v_tables_1439_; lean_object* v_leadingTable_1440_; lean_object* v_trailingTable_1441_; lean_object* v_firstTokens_1442_; lean_object* v_firstTokens_1443_; lean_object* v___x_1444_; 
v_tables_1439_ = lean_ctor_get(v_val_1436_, 2);
v_leadingTable_1440_ = lean_ctor_get(v_tables_1439_, 0);
v_trailingTable_1441_ = lean_ctor_get(v_tables_1439_, 2);
lean_inc(v_trailingTable_1441_);
lean_inc(v_leadingTable_1440_);
lean_inc(v_val_1436_);
v_firstTokens_1442_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens(v_val_1436_, v_leadingTable_1440_, v___y_1438_);
v_firstTokens_1443_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens(v_val_1436_, v_trailingTable_1441_, v_firstTokens_1442_);
v___x_1444_ = lean_apply_2(v_toPure_1425_, lean_box(0), v_firstTokens_1443_);
return v___x_1444_;
}
}
else
{
lean_object* v___x_1468_; lean_object* v___x_1469_; 
lean_dec(v___x_1435_);
lean_dec_ref(v_env_1427_);
lean_dec_ref(v___f_1426_);
lean_dec(v___x_1424_);
v___x_1468_ = lean_box(1);
v___x_1469_ = lean_apply_2(v_toPure_1425_, lean_box(0), v___x_1468_);
return v___x_1469_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___boxed(lean_object* v___x_1470_, lean_object* v___x_1471_, lean_object* v___x_1472_, lean_object* v___x_1473_, lean_object* v___x_1474_, lean_object* v_toPure_1475_, lean_object* v___f_1476_, lean_object* v_env_1477_){
_start:
{
lean_object* v_res_1478_; 
v_res_1478_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2(v___x_1470_, v___x_1471_, v___x_1472_, v___x_1473_, v___x_1474_, v_toPure_1475_, v___f_1476_, v_env_1477_);
lean_dec_ref(v___x_1473_);
lean_dec_ref(v___x_1470_);
return v_res_1478_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2(void){
_start:
{
lean_object* v___x_1482_; lean_object* v___x_1483_; 
v___x_1482_ = lean_box(1);
v___x_1483_ = l_Lean_instInhabitedPersistentEnvExtensionState___redArg(v___x_1482_);
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg(lean_object* v_inst_1486_, lean_object* v_inst_1487_){
_start:
{
lean_object* v_toApplicative_1488_; lean_object* v_toBind_1489_; lean_object* v_getEnv_1490_; lean_object* v_toPure_1491_; lean_object* v___f_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___f_1498_; lean_object* v___x_1499_; 
v_toApplicative_1488_ = lean_ctor_get(v_inst_1486_, 0);
lean_inc_ref(v_toApplicative_1488_);
v_toBind_1489_ = lean_ctor_get(v_inst_1486_, 1);
lean_inc(v_toBind_1489_);
lean_dec_ref(v_inst_1486_);
v_getEnv_1490_ = lean_ctor_get(v_inst_1487_, 0);
lean_inc(v_getEnv_1490_);
lean_dec_ref(v_inst_1487_);
v_toPure_1491_ = lean_ctor_get(v_toApplicative_1488_, 1);
lean_inc(v_toPure_1491_);
lean_dec_ref(v_toApplicative_1488_);
v___f_1492_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__1));
v___x_1493_ = lean_box(1);
v___x_1494_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2, &l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2);
v___x_1495_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__3));
v___x_1496_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__4));
v___x_1497_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
v___f_1498_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_1498_, 0, v___x_1497_);
lean_closure_set(v___f_1498_, 1, v___x_1495_);
lean_closure_set(v___f_1498_, 2, v___x_1496_);
lean_closure_set(v___f_1498_, 3, v___x_1494_);
lean_closure_set(v___f_1498_, 4, v___x_1493_);
lean_closure_set(v___f_1498_, 5, v_toPure_1491_);
lean_closure_set(v___f_1498_, 6, v___f_1492_);
v___x_1499_ = lean_apply_4(v_toBind_1489_, lean_box(0), lean_box(0), v_getEnv_1490_, v___f_1498_);
return v___x_1499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens(lean_object* v_m_1500_, lean_object* v_inst_1501_, lean_object* v_inst_1502_){
_start:
{
lean_object* v___x_1503_; 
v___x_1503_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg(v_inst_1501_, v_inst_1502_);
return v___x_1503_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1504_; 
v___x_1504_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1504_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1505_; lean_object* v___x_1506_; 
v___x_1505_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__0, &l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__0_once, _init_l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__0);
v___x_1506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1506_, 0, v___x_1505_);
return v___x_1506_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; 
v___x_1507_ = lean_box(1);
v___x_1508_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg___closed__4);
v___x_1509_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__1, &l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__1_once, _init_l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__1);
v___x_1510_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1510_, 0, v___x_1509_);
lean_ctor_set(v___x_1510_, 1, v___x_1508_);
lean_ctor_set(v___x_1510_, 2, v___x_1507_);
return v___x_1510_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0(lean_object* v_n_1512_, lean_object* v___y_1513_, lean_object* v_toPure_1514_, lean_object* v_firsts_1515_, lean_object* v_____do__lift_1516_){
_start:
{
lean_object* v___y_1518_; lean_object* v_val_1529_; 
if (lean_obj_tag(v_____do__lift_1516_) == 0)
{
lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1531_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__3));
lean_inc(v_n_1512_);
v___x_1532_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(v___x_1531_, v_firsts_1515_, v_n_1512_);
if (lean_obj_tag(v___x_1532_) == 0)
{
uint8_t v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; 
v___x_1533_ = 1;
lean_inc(v_n_1512_);
v___x_1534_ = l_Lean_Name_toString(v_n_1512_, v___x_1533_);
v___x_1535_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1535_, 0, v___x_1534_);
v___y_1518_ = v___x_1535_;
goto v___jp_1517_;
}
else
{
lean_object* v_val_1536_; 
v_val_1536_ = lean_ctor_get(v___x_1532_, 0);
lean_inc(v_val_1536_);
lean_dec_ref_known(v___x_1532_, 1);
v_val_1529_ = v_val_1536_;
goto v___jp_1528_;
}
}
else
{
lean_object* v_val_1537_; 
lean_dec(v_firsts_1515_);
v_val_1537_ = lean_ctor_get(v_____do__lift_1516_, 0);
lean_inc(v_val_1537_);
lean_dec_ref_known(v_____do__lift_1516_, 1);
v_val_1529_ = v_val_1537_;
goto v___jp_1528_;
}
v___jp_1517_:
{
lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; uint8_t v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; 
v___x_1519_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12);
v___x_1520_ = l_Lean_Expr_const___override(v_n_1512_, v___y_1513_);
v___x_1521_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__2, &l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__2_once, _init_l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__2);
v___x_1522_ = lean_box(0);
v___x_1523_ = 0;
v___x_1524_ = l_Lean_MessageData_withExprHover(v___y_1518_, v___x_1520_, v___x_1521_, v___x_1522_, v___x_1522_, v___x_1522_, v___x_1523_);
v___x_1525_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1525_, 0, v___x_1519_);
lean_ctor_set(v___x_1525_, 1, v___x_1524_);
v___x_1526_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1526_, 0, v___x_1525_);
lean_ctor_set(v___x_1526_, 1, v___x_1519_);
v___x_1527_ = lean_apply_2(v_toPure_1514_, lean_box(0), v___x_1526_);
return v___x_1527_;
}
v___jp_1528_:
{
lean_object* v___x_1530_; 
v___x_1530_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1530_, 0, v_val_1529_);
v___y_1518_ = v___x_1530_;
goto v___jp_1517_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__1(lean_object* v_n_1538_, lean_object* v_toPure_1539_, lean_object* v_firsts_1540_, lean_object* v_inst_1541_, lean_object* v_inst_1542_, lean_object* v_toBind_1543_, lean_object* v___f_1544_, lean_object* v_env_1545_){
_start:
{
lean_object* v___y_1547_; lean_object* v___x_1551_; lean_object* v___x_1552_; 
v___x_1551_ = l_Lean_Environment_constants(v_env_1545_);
v___x_1552_ = l_Lean_ConstMap_find_x3f_x27(v___x_1551_, v_n_1538_);
lean_dec_ref(v___x_1551_);
if (lean_obj_tag(v___x_1552_) == 0)
{
lean_object* v___x_1553_; 
lean_dec_ref(v___f_1544_);
v___x_1553_ = lean_box(0);
v___y_1547_ = v___x_1553_;
goto v___jp_1546_;
}
else
{
lean_object* v_val_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; 
v_val_1554_ = lean_ctor_get(v___x_1552_, 0);
lean_inc(v_val_1554_);
lean_dec_ref_known(v___x_1552_, 1);
v___x_1555_ = l_Lean_ConstantInfo_levelParams(v_val_1554_);
lean_dec(v_val_1554_);
v___x_1556_ = lean_box(0);
v___x_1557_ = l_List_mapTR_loop___redArg(v___f_1544_, v___x_1555_, v___x_1556_);
v___y_1547_ = v___x_1557_;
goto v___jp_1546_;
}
v___jp_1546_:
{
lean_object* v___f_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; 
lean_inc(v_n_1538_);
v___f_1548_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0), 5, 4);
lean_closure_set(v___f_1548_, 0, v_n_1538_);
lean_closure_set(v___f_1548_, 1, v___y_1547_);
lean_closure_set(v___f_1548_, 2, v_toPure_1539_);
lean_closure_set(v___f_1548_, 3, v_firsts_1540_);
v___x_1549_ = l_Lean_Parser_Tactic_Doc_customTacticName___redArg(v_inst_1541_, v_inst_1542_, v_n_1538_);
v___x_1550_ = lean_apply_4(v_toBind_1543_, lean_box(0), lean_box(0), v___x_1549_, v___f_1548_);
return v___x_1550_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg(lean_object* v_inst_1559_, lean_object* v_inst_1560_, lean_object* v_firsts_1561_, lean_object* v_n_1562_){
_start:
{
lean_object* v_toApplicative_1563_; lean_object* v_toBind_1564_; lean_object* v_getEnv_1565_; lean_object* v_toPure_1566_; lean_object* v___f_1567_; lean_object* v___f_1568_; lean_object* v___x_1569_; 
v_toApplicative_1563_ = lean_ctor_get(v_inst_1559_, 0);
v_toBind_1564_ = lean_ctor_get(v_inst_1559_, 1);
lean_inc_n(v_toBind_1564_, 2);
v_getEnv_1565_ = lean_ctor_get(v_inst_1560_, 0);
lean_inc(v_getEnv_1565_);
v_toPure_1566_ = lean_ctor_get(v_toApplicative_1563_, 1);
lean_inc(v_toPure_1566_);
v___f_1567_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___closed__0));
v___f_1568_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__1), 8, 7);
lean_closure_set(v___f_1568_, 0, v_n_1562_);
lean_closure_set(v___f_1568_, 1, v_toPure_1566_);
lean_closure_set(v___f_1568_, 2, v_firsts_1561_);
lean_closure_set(v___f_1568_, 3, v_inst_1559_);
lean_closure_set(v___f_1568_, 4, v_inst_1560_);
lean_closure_set(v___f_1568_, 5, v_toBind_1564_);
lean_closure_set(v___f_1568_, 6, v___f_1567_);
v___x_1569_ = lean_apply_4(v_toBind_1564_, lean_box(0), lean_box(0), v_getEnv_1565_, v___f_1568_);
return v___x_1569_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName(lean_object* v_m_1570_, lean_object* v_inst_1571_, lean_object* v_inst_1572_, lean_object* v_firsts_1573_, lean_object* v_n_1574_){
_start:
{
lean_object* v___x_1575_; 
v___x_1575_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg(v_inst_1571_, v_inst_1572_, v_firsts_1573_, v_n_1574_);
return v___x_1575_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4(lean_object* v_s_1578_){
_start:
{
lean_object* v___x_1579_; 
v___x_1579_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___closed__0));
return v___x_1579_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4___boxed(lean_object* v_s_1580_){
_start:
{
lean_object* v_res_1581_; 
v_res_1581_ = l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4(v_s_1580_);
lean_dec_ref(v_s_1580_);
return v_res_1581_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__8_spec__14(lean_object* v_init_1582_, lean_object* v_x_1583_){
_start:
{
if (lean_obj_tag(v_x_1583_) == 0)
{
lean_object* v_k_1584_; lean_object* v_l_1585_; lean_object* v_r_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; 
v_k_1584_ = lean_ctor_get(v_x_1583_, 1);
lean_inc(v_k_1584_);
v_l_1585_ = lean_ctor_get(v_x_1583_, 3);
lean_inc(v_l_1585_);
v_r_1586_ = lean_ctor_get(v_x_1583_, 4);
lean_inc(v_r_1586_);
lean_dec_ref_known(v_x_1583_, 5);
v___x_1587_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__8_spec__14(v_init_1582_, v_l_1585_);
v___x_1588_ = lean_array_push(v___x_1587_, v_k_1584_);
v_init_1582_ = v___x_1588_;
v_x_1583_ = v_r_1586_;
goto _start;
}
else
{
return v_init_1582_;
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___lam__0(uint8_t v___x_1590_, lean_object* v_x1_1591_, lean_object* v_x2_1592_){
_start:
{
lean_object* v___x_1593_; lean_object* v___x_1594_; uint8_t v___x_1595_; 
v___x_1593_ = l_Lean_Name_toString(v_x1_1591_, v___x_1590_);
v___x_1594_ = l_Lean_Name_toString(v_x2_1592_, v___x_1590_);
v___x_1595_ = lean_string_dec_lt(v___x_1593_, v___x_1594_);
lean_dec_ref(v___x_1594_);
lean_dec_ref(v___x_1593_);
return v___x_1595_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___lam__0___boxed(lean_object* v___x_1596_, lean_object* v_x1_1597_, lean_object* v_x2_1598_){
_start:
{
uint8_t v___x_16938__boxed_1599_; uint8_t v_res_1600_; lean_object* v_r_1601_; 
v___x_16938__boxed_1599_ = lean_unbox(v___x_1596_);
v_res_1600_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___lam__0(v___x_16938__boxed_1599_, v_x1_1597_, v_x2_1598_);
v_r_1601_ = lean_box(v_res_1600_);
return v_r_1601_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__16___redArg(lean_object* v_hi_1602_, lean_object* v_pivot_1603_, lean_object* v_as_1604_, lean_object* v_i_1605_, lean_object* v_k_1606_){
_start:
{
uint8_t v___x_1607_; 
v___x_1607_ = lean_nat_dec_lt(v_k_1606_, v_hi_1602_);
if (v___x_1607_ == 0)
{
lean_object* v___x_1608_; lean_object* v___x_1609_; 
lean_dec(v_k_1606_);
lean_dec(v_pivot_1603_);
v___x_1608_ = lean_array_fswap(v_as_1604_, v_i_1605_, v_hi_1602_);
v___x_1609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1609_, 0, v_i_1605_);
lean_ctor_set(v___x_1609_, 1, v___x_1608_);
return v___x_1609_;
}
else
{
lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; uint8_t v___x_1613_; 
v___x_1610_ = lean_array_fget_borrowed(v_as_1604_, v_k_1606_);
lean_inc(v___x_1610_);
v___x_1611_ = l_Lean_Name_toString(v___x_1610_, v___x_1607_);
lean_inc(v_pivot_1603_);
v___x_1612_ = l_Lean_Name_toString(v_pivot_1603_, v___x_1607_);
v___x_1613_ = lean_string_dec_lt(v___x_1611_, v___x_1612_);
lean_dec_ref(v___x_1612_);
lean_dec_ref(v___x_1611_);
if (v___x_1613_ == 0)
{
lean_object* v___x_1614_; lean_object* v___x_1615_; 
v___x_1614_ = lean_unsigned_to_nat(1u);
v___x_1615_ = lean_nat_add(v_k_1606_, v___x_1614_);
lean_dec(v_k_1606_);
v_k_1606_ = v___x_1615_;
goto _start;
}
else
{
lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; 
v___x_1617_ = lean_array_fswap(v_as_1604_, v_i_1605_, v_k_1606_);
v___x_1618_ = lean_unsigned_to_nat(1u);
v___x_1619_ = lean_nat_add(v_i_1605_, v___x_1618_);
lean_dec(v_i_1605_);
v___x_1620_ = lean_nat_add(v_k_1606_, v___x_1618_);
lean_dec(v_k_1606_);
v_as_1604_ = v___x_1617_;
v_i_1605_ = v___x_1619_;
v_k_1606_ = v___x_1620_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__16___redArg___boxed(lean_object* v_hi_1622_, lean_object* v_pivot_1623_, lean_object* v_as_1624_, lean_object* v_i_1625_, lean_object* v_k_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__16___redArg(v_hi_1622_, v_pivot_1623_, v_as_1624_, v_i_1625_, v_k_1626_);
lean_dec(v_hi_1622_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg(lean_object* v_n_1628_, lean_object* v_as_1629_, lean_object* v_lo_1630_, lean_object* v_hi_1631_){
_start:
{
lean_object* v___y_1633_; uint8_t v___x_1643_; 
v___x_1643_ = lean_nat_dec_lt(v_lo_1630_, v_hi_1631_);
if (v___x_1643_ == 0)
{
lean_dec(v_lo_1630_);
return v_as_1629_;
}
else
{
lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v_mid_1646_; lean_object* v___y_1648_; lean_object* v___y_1654_; lean_object* v___x_1659_; lean_object* v___x_1660_; uint8_t v___x_1661_; 
v___x_1644_ = lean_nat_add(v_lo_1630_, v_hi_1631_);
v___x_1645_ = lean_unsigned_to_nat(1u);
v_mid_1646_ = lean_nat_shiftr(v___x_1644_, v___x_1645_);
lean_dec(v___x_1644_);
v___x_1659_ = lean_array_fget_borrowed(v_as_1629_, v_mid_1646_);
v___x_1660_ = lean_array_fget_borrowed(v_as_1629_, v_lo_1630_);
lean_inc(v___x_1660_);
lean_inc(v___x_1659_);
v___x_1661_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___lam__0(v___x_1643_, v___x_1659_, v___x_1660_);
if (v___x_1661_ == 0)
{
v___y_1654_ = v_as_1629_;
goto v___jp_1653_;
}
else
{
lean_object* v___x_1662_; 
v___x_1662_ = lean_array_fswap(v_as_1629_, v_lo_1630_, v_mid_1646_);
v___y_1654_ = v___x_1662_;
goto v___jp_1653_;
}
v___jp_1647_:
{
lean_object* v___x_1649_; lean_object* v___x_1650_; uint8_t v___x_1651_; 
v___x_1649_ = lean_array_fget_borrowed(v___y_1648_, v_mid_1646_);
v___x_1650_ = lean_array_fget_borrowed(v___y_1648_, v_hi_1631_);
lean_inc(v___x_1650_);
lean_inc(v___x_1649_);
v___x_1651_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___lam__0(v___x_1643_, v___x_1649_, v___x_1650_);
if (v___x_1651_ == 0)
{
lean_dec(v_mid_1646_);
v___y_1633_ = v___y_1648_;
goto v___jp_1632_;
}
else
{
lean_object* v___x_1652_; 
v___x_1652_ = lean_array_fswap(v___y_1648_, v_mid_1646_, v_hi_1631_);
lean_dec(v_mid_1646_);
v___y_1633_ = v___x_1652_;
goto v___jp_1632_;
}
}
v___jp_1653_:
{
lean_object* v___x_1655_; lean_object* v___x_1656_; uint8_t v___x_1657_; 
v___x_1655_ = lean_array_fget_borrowed(v___y_1654_, v_hi_1631_);
v___x_1656_ = lean_array_fget_borrowed(v___y_1654_, v_lo_1630_);
lean_inc(v___x_1656_);
lean_inc(v___x_1655_);
v___x_1657_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___lam__0(v___x_1643_, v___x_1655_, v___x_1656_);
if (v___x_1657_ == 0)
{
v___y_1648_ = v___y_1654_;
goto v___jp_1647_;
}
else
{
lean_object* v___x_1658_; 
v___x_1658_ = lean_array_fswap(v___y_1654_, v_lo_1630_, v_hi_1631_);
v___y_1648_ = v___x_1658_;
goto v___jp_1647_;
}
}
}
v___jp_1632_:
{
lean_object* v_pivot_1634_; lean_object* v___x_1635_; lean_object* v_fst_1636_; lean_object* v_snd_1637_; uint8_t v___x_1638_; 
v_pivot_1634_ = lean_array_fget(v___y_1633_, v_hi_1631_);
lean_inc_n(v_lo_1630_, 2);
v___x_1635_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__16___redArg(v_hi_1631_, v_pivot_1634_, v___y_1633_, v_lo_1630_, v_lo_1630_);
v_fst_1636_ = lean_ctor_get(v___x_1635_, 0);
lean_inc(v_fst_1636_);
v_snd_1637_ = lean_ctor_get(v___x_1635_, 1);
lean_inc(v_snd_1637_);
lean_dec_ref(v___x_1635_);
v___x_1638_ = lean_nat_dec_le(v_hi_1631_, v_fst_1636_);
if (v___x_1638_ == 0)
{
lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; 
v___x_1639_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg(v_n_1628_, v_snd_1637_, v_lo_1630_, v_fst_1636_);
v___x_1640_ = lean_unsigned_to_nat(1u);
v___x_1641_ = lean_nat_add(v_fst_1636_, v___x_1640_);
lean_dec(v_fst_1636_);
v_as_1629_ = v___x_1639_;
v_lo_1630_ = v___x_1641_;
goto _start;
}
else
{
lean_dec(v_fst_1636_);
lean_dec(v_lo_1630_);
return v_snd_1637_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg___boxed(lean_object* v_n_1663_, lean_object* v_as_1664_, lean_object* v_lo_1665_, lean_object* v_hi_1666_){
_start:
{
lean_object* v_res_1667_; 
v_res_1667_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg(v_n_1663_, v_as_1664_, v_lo_1665_, v_hi_1666_);
lean_dec(v_hi_1666_);
lean_dec(v_n_1663_);
return v_res_1667_;
}
}
LEAN_EXPORT uint8_t l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___lam__0(lean_object* v_x1_1668_, lean_object* v_x2_1669_){
_start:
{
lean_object* v_fst_1670_; lean_object* v_fst_1671_; uint8_t v___x_1672_; 
v_fst_1670_ = lean_ctor_get(v_x1_1668_, 0);
v_fst_1671_ = lean_ctor_get(v_x2_1669_, 0);
v___x_1672_ = l_Lean_Name_quickLt(v_fst_1670_, v_fst_1671_);
return v___x_1672_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___lam__0___boxed(lean_object* v_x1_1673_, lean_object* v_x2_1674_){
_start:
{
uint8_t v_res_1675_; lean_object* v_r_1676_; 
v_res_1675_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___lam__0(v_x1_1673_, v_x2_1674_);
lean_dec_ref(v_x2_1674_);
lean_dec_ref(v_x1_1673_);
v_r_1676_ = lean_box(v_res_1675_);
return v_r_1676_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg(lean_object* v_as_1677_, lean_object* v_k_1678_, lean_object* v_x_1679_, lean_object* v_x_1680_){
_start:
{
lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v_m_1683_; lean_object* v_a_1684_; uint8_t v___x_1685_; 
v___x_1681_ = lean_nat_add(v_x_1679_, v_x_1680_);
v___x_1682_ = lean_unsigned_to_nat(1u);
v_m_1683_ = lean_nat_shiftr(v___x_1681_, v___x_1682_);
lean_dec(v___x_1681_);
v_a_1684_ = lean_array_fget_borrowed(v_as_1677_, v_m_1683_);
v___x_1685_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___lam__0(v_a_1684_, v_k_1678_);
if (v___x_1685_ == 0)
{
uint8_t v___x_1686_; 
lean_dec(v_x_1680_);
v___x_1686_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___lam__0(v_k_1678_, v_a_1684_);
if (v___x_1686_ == 0)
{
lean_object* v___x_1687_; 
lean_dec(v_m_1683_);
lean_dec(v_x_1679_);
lean_inc(v_a_1684_);
v___x_1687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1687_, 0, v_a_1684_);
return v___x_1687_;
}
else
{
lean_object* v___x_1688_; uint8_t v___x_1689_; 
v___x_1688_ = lean_unsigned_to_nat(0u);
v___x_1689_ = lean_nat_dec_eq(v_m_1683_, v___x_1688_);
if (v___x_1689_ == 0)
{
lean_object* v___x_1690_; uint8_t v___x_1691_; 
v___x_1690_ = lean_nat_sub(v_m_1683_, v___x_1682_);
lean_dec(v_m_1683_);
v___x_1691_ = lean_nat_dec_lt(v___x_1690_, v_x_1679_);
if (v___x_1691_ == 0)
{
v_x_1680_ = v___x_1690_;
goto _start;
}
else
{
lean_object* v___x_1693_; 
lean_dec(v___x_1690_);
lean_dec(v_x_1679_);
v___x_1693_ = lean_box(0);
return v___x_1693_;
}
}
else
{
lean_object* v___x_1694_; 
lean_dec(v_m_1683_);
lean_dec(v_x_1679_);
v___x_1694_ = lean_box(0);
return v___x_1694_;
}
}
}
else
{
lean_object* v___x_1695_; uint8_t v___x_1696_; 
lean_dec(v_x_1679_);
v___x_1695_ = lean_nat_add(v_m_1683_, v___x_1682_);
lean_dec(v_m_1683_);
v___x_1696_ = lean_nat_dec_le(v___x_1695_, v_x_1680_);
if (v___x_1696_ == 0)
{
lean_object* v___x_1697_; 
lean_dec(v___x_1695_);
lean_dec(v_x_1680_);
v___x_1697_ = lean_box(0);
return v___x_1697_;
}
else
{
v_x_1679_ = v___x_1695_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg___boxed(lean_object* v_as_1699_, lean_object* v_k_1700_, lean_object* v_x_1701_, lean_object* v_x_1702_){
_start:
{
lean_object* v_res_1703_; 
v_res_1703_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg(v_as_1699_, v_k_1700_, v_x_1701_, v_x_1702_);
lean_dec_ref(v_k_1700_);
lean_dec_ref(v_as_1699_);
return v_res_1703_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg(lean_object* v_tac_1705_, lean_object* v___y_1706_){
_start:
{
lean_object* v___x_1708_; lean_object* v_env_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; 
v___x_1708_ = lean_st_ref_get(v___y_1706_);
v_env_1712_ = lean_ctor_get(v___x_1708_, 0);
lean_inc_ref(v_env_1712_);
lean_dec(v___x_1708_);
v___x_1713_ = lean_box(1);
v___x_1714_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1712_, v_tac_1705_);
if (lean_obj_tag(v___x_1714_) == 0)
{
lean_object* v___x_1715_; lean_object* v_toEnvExtension_1716_; lean_object* v_asyncMode_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; 
v___x_1715_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v_toEnvExtension_1716_ = lean_ctor_get(v___x_1715_, 0);
v_asyncMode_1717_ = lean_ctor_get(v_toEnvExtension_1716_, 2);
v___x_1718_ = lean_box(0);
v___x_1719_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1713_, v___x_1715_, v_env_1712_, v_asyncMode_1717_, v___x_1718_);
v___x_1720_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1719_, v_tac_1705_);
lean_dec(v_tac_1705_);
lean_dec(v___x_1719_);
v___x_1721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1721_, 0, v___x_1720_);
return v___x_1721_;
}
else
{
lean_object* v_val_1722_; lean_object* v___x_1724_; uint8_t v_isShared_1725_; uint8_t v_isSharedCheck_1750_; 
v_val_1722_ = lean_ctor_get(v___x_1714_, 0);
v_isSharedCheck_1750_ = !lean_is_exclusive(v___x_1714_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1724_ = v___x_1714_;
v_isShared_1725_ = v_isSharedCheck_1750_;
goto v_resetjp_1723_;
}
else
{
lean_inc(v_val_1722_);
lean_dec(v___x_1714_);
v___x_1724_ = lean_box(0);
v_isShared_1725_ = v_isSharedCheck_1750_;
goto v_resetjp_1723_;
}
v_resetjp_1723_:
{
lean_object* v___x_1726_; uint8_t v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; uint8_t v___x_1731_; 
v___x_1726_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v___x_1727_ = 0;
v___x_1728_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_1713_, v___x_1726_, v_env_1712_, v_val_1722_, v___x_1727_);
lean_dec(v_val_1722_);
lean_dec_ref(v_env_1712_);
v___x_1729_ = lean_unsigned_to_nat(0u);
v___x_1730_ = lean_array_get_size(v___x_1728_);
v___x_1731_ = lean_nat_dec_lt(v___x_1729_, v___x_1730_);
if (v___x_1731_ == 0)
{
lean_dec_ref(v___x_1728_);
lean_del_object(v___x_1724_);
lean_dec(v_tac_1705_);
goto v___jp_1709_;
}
else
{
lean_object* v___x_1732_; lean_object* v___x_1733_; uint8_t v___x_1734_; 
v___x_1732_ = lean_unsigned_to_nat(1u);
v___x_1733_ = lean_nat_sub(v___x_1730_, v___x_1732_);
v___x_1734_ = lean_nat_dec_le(v___x_1729_, v___x_1733_);
if (v___x_1734_ == 0)
{
lean_dec(v___x_1733_);
lean_dec_ref(v___x_1728_);
lean_del_object(v___x_1724_);
lean_dec(v_tac_1705_);
goto v___jp_1709_;
}
else
{
lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; 
v___x_1735_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg___closed__0));
v___x_1736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1736_, 0, v_tac_1705_);
lean_ctor_set(v___x_1736_, 1, v___x_1735_);
v___x_1737_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg(v___x_1728_, v___x_1736_, v___x_1729_, v___x_1733_);
lean_dec_ref_known(v___x_1736_, 2);
lean_dec_ref(v___x_1728_);
if (lean_obj_tag(v___x_1737_) == 0)
{
lean_del_object(v___x_1724_);
goto v___jp_1709_;
}
else
{
lean_object* v_val_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1749_; 
v_val_1738_ = lean_ctor_get(v___x_1737_, 0);
v_isSharedCheck_1749_ = !lean_is_exclusive(v___x_1737_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1740_ = v___x_1737_;
v_isShared_1741_ = v_isSharedCheck_1749_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_val_1738_);
lean_dec(v___x_1737_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1749_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v_snd_1742_; lean_object* v___x_1744_; 
v_snd_1742_ = lean_ctor_get(v_val_1738_, 1);
lean_inc(v_snd_1742_);
lean_dec(v_val_1738_);
if (v_isShared_1741_ == 0)
{
lean_ctor_set(v___x_1740_, 0, v_snd_1742_);
v___x_1744_ = v___x_1740_;
goto v_reusejp_1743_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_snd_1742_);
v___x_1744_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1743_;
}
v_reusejp_1743_:
{
lean_object* v___x_1746_; 
if (v_isShared_1725_ == 0)
{
lean_ctor_set_tag(v___x_1724_, 0);
lean_ctor_set(v___x_1724_, 0, v___x_1744_);
v___x_1746_ = v___x_1724_;
goto v_reusejp_1745_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v___x_1744_);
v___x_1746_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1745_;
}
v_reusejp_1745_:
{
return v___x_1746_;
}
}
}
}
}
}
}
}
v___jp_1709_:
{
lean_object* v___x_1710_; lean_object* v___x_1711_; 
v___x_1710_ = lean_box(0);
v___x_1711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1711_, 0, v___x_1710_);
return v___x_1711_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg___boxed(lean_object* v_tac_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_){
_start:
{
lean_object* v_res_1754_; 
v_res_1754_ = l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg(v_tac_1751_, v___y_1752_);
lean_dec(v___y_1752_);
return v_res_1754_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11(lean_object* v_a_1755_, lean_object* v_a_1756_){
_start:
{
if (lean_obj_tag(v_a_1755_) == 0)
{
lean_object* v___x_1757_; 
v___x_1757_ = l_List_reverse___redArg(v_a_1756_);
return v___x_1757_;
}
else
{
lean_object* v_head_1758_; lean_object* v_tail_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1768_; 
v_head_1758_ = lean_ctor_get(v_a_1755_, 0);
v_tail_1759_ = lean_ctor_get(v_a_1755_, 1);
v_isSharedCheck_1768_ = !lean_is_exclusive(v_a_1755_);
if (v_isSharedCheck_1768_ == 0)
{
v___x_1761_ = v_a_1755_;
v_isShared_1762_ = v_isSharedCheck_1768_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_tail_1759_);
lean_inc(v_head_1758_);
lean_dec(v_a_1755_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1768_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
lean_object* v___x_1763_; lean_object* v___x_1765_; 
v___x_1763_ = l_Lean_Level_param___override(v_head_1758_);
if (v_isShared_1762_ == 0)
{
lean_ctor_set(v___x_1761_, 1, v_a_1756_);
lean_ctor_set(v___x_1761_, 0, v___x_1763_);
v___x_1765_ = v___x_1761_;
goto v_reusejp_1764_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v___x_1763_);
lean_ctor_set(v_reuseFailAlloc_1767_, 1, v_a_1756_);
v___x_1765_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1764_;
}
v_reusejp_1764_:
{
v_a_1755_ = v_tail_1759_;
v_a_1756_ = v___x_1765_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___redArg(lean_object* v_t_1769_, lean_object* v_k_1770_){
_start:
{
if (lean_obj_tag(v_t_1769_) == 0)
{
lean_object* v_k_1771_; lean_object* v_v_1772_; lean_object* v_l_1773_; lean_object* v_r_1774_; uint8_t v___x_1775_; 
v_k_1771_ = lean_ctor_get(v_t_1769_, 1);
v_v_1772_ = lean_ctor_get(v_t_1769_, 2);
v_l_1773_ = lean_ctor_get(v_t_1769_, 3);
v_r_1774_ = lean_ctor_get(v_t_1769_, 4);
v___x_1775_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1770_, v_k_1771_);
switch(v___x_1775_)
{
case 0:
{
v_t_1769_ = v_l_1773_;
goto _start;
}
case 1:
{
lean_object* v___x_1777_; 
lean_inc(v_v_1772_);
v___x_1777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1777_, 0, v_v_1772_);
return v___x_1777_;
}
default: 
{
v_t_1769_ = v_r_1774_;
goto _start;
}
}
}
else
{
lean_object* v___x_1779_; 
v___x_1779_ = lean_box(0);
return v___x_1779_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___redArg___boxed(lean_object* v_t_1780_, lean_object* v_k_1781_){
_start:
{
lean_object* v_res_1782_; 
v_res_1782_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___redArg(v_t_1780_, v_k_1781_);
lean_dec(v_k_1781_);
lean_dec(v_t_1780_);
return v_res_1782_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6(lean_object* v_firsts_1783_, lean_object* v_n_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_){
_start:
{
lean_object* v___y_1789_; lean_object* v___y_1790_; lean_object* v___y_1803_; lean_object* v_val_1804_; lean_object* v___x_1806_; lean_object* v___y_1808_; lean_object* v_env_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; 
v___x_1806_ = lean_st_ref_get(v___y_1786_);
v_env_1823_ = lean_ctor_get(v___x_1806_, 0);
lean_inc_ref(v_env_1823_);
lean_dec(v___x_1806_);
v___x_1824_ = l_Lean_Environment_constants(v_env_1823_);
v___x_1825_ = l_Lean_ConstMap_find_x3f_x27(v___x_1824_, v_n_1784_);
lean_dec_ref(v___x_1824_);
if (lean_obj_tag(v___x_1825_) == 0)
{
lean_object* v___x_1826_; 
v___x_1826_ = lean_box(0);
v___y_1808_ = v___x_1826_;
goto v___jp_1807_;
}
else
{
lean_object* v_val_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; 
v_val_1827_ = lean_ctor_get(v___x_1825_, 0);
lean_inc(v_val_1827_);
lean_dec_ref_known(v___x_1825_, 1);
v___x_1828_ = l_Lean_ConstantInfo_levelParams(v_val_1827_);
lean_dec(v_val_1827_);
v___x_1829_ = lean_box(0);
v___x_1830_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__11(v___x_1828_, v___x_1829_);
v___y_1808_ = v___x_1830_;
goto v___jp_1807_;
}
v___jp_1788_:
{
lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; uint8_t v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; 
v___x_1791_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12);
v___x_1792_ = l_Lean_Expr_const___override(v_n_1784_, v___y_1789_);
v___x_1793_ = lean_unsigned_to_nat(32u);
v___x_1794_ = lean_mk_empty_array_with_capacity(v___x_1793_);
lean_dec_ref(v___x_1794_);
v___x_1795_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__2, &l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__2_once, _init_l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___redArg___lam__0___closed__2);
v___x_1796_ = lean_box(0);
v___x_1797_ = 0;
v___x_1798_ = l_Lean_MessageData_withExprHover(v___y_1790_, v___x_1792_, v___x_1795_, v___x_1796_, v___x_1796_, v___x_1796_, v___x_1797_);
v___x_1799_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1799_, 0, v___x_1791_);
lean_ctor_set(v___x_1799_, 1, v___x_1798_);
v___x_1800_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1800_, 0, v___x_1799_);
lean_ctor_set(v___x_1800_, 1, v___x_1791_);
v___x_1801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1801_, 0, v___x_1800_);
return v___x_1801_;
}
v___jp_1802_:
{
lean_object* v___x_1805_; 
v___x_1805_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1805_, 0, v_val_1804_);
v___y_1789_ = v___y_1803_;
v___y_1790_ = v___x_1805_;
goto v___jp_1788_;
}
v___jp_1807_:
{
lean_object* v___x_1809_; lean_object* v_a_1810_; lean_object* v___x_1812_; uint8_t v_isShared_1813_; uint8_t v_isSharedCheck_1822_; 
lean_inc(v_n_1784_);
v___x_1809_ = l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg(v_n_1784_, v___y_1786_);
v_a_1810_ = lean_ctor_get(v___x_1809_, 0);
v_isSharedCheck_1822_ = !lean_is_exclusive(v___x_1809_);
if (v_isSharedCheck_1822_ == 0)
{
v___x_1812_ = v___x_1809_;
v_isShared_1813_ = v_isSharedCheck_1822_;
goto v_resetjp_1811_;
}
else
{
lean_inc(v_a_1810_);
lean_dec(v___x_1809_);
v___x_1812_ = lean_box(0);
v_isShared_1813_ = v_isSharedCheck_1822_;
goto v_resetjp_1811_;
}
v_resetjp_1811_:
{
if (lean_obj_tag(v_a_1810_) == 0)
{
lean_object* v___x_1814_; 
v___x_1814_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___redArg(v_firsts_1783_, v_n_1784_);
if (lean_obj_tag(v___x_1814_) == 0)
{
uint8_t v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1818_; 
v___x_1815_ = 1;
lean_inc(v_n_1784_);
v___x_1816_ = l_Lean_Name_toString(v_n_1784_, v___x_1815_);
if (v_isShared_1813_ == 0)
{
lean_ctor_set_tag(v___x_1812_, 3);
lean_ctor_set(v___x_1812_, 0, v___x_1816_);
v___x_1818_ = v___x_1812_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1819_; 
v_reuseFailAlloc_1819_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1819_, 0, v___x_1816_);
v___x_1818_ = v_reuseFailAlloc_1819_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
v___y_1789_ = v___y_1808_;
v___y_1790_ = v___x_1818_;
goto v___jp_1788_;
}
}
else
{
lean_object* v_val_1820_; 
lean_del_object(v___x_1812_);
v_val_1820_ = lean_ctor_get(v___x_1814_, 0);
lean_inc(v_val_1820_);
lean_dec_ref_known(v___x_1814_, 1);
v___y_1803_ = v___y_1808_;
v_val_1804_ = v_val_1820_;
goto v___jp_1802_;
}
}
else
{
lean_object* v_val_1821_; 
lean_del_object(v___x_1812_);
v_val_1821_ = lean_ctor_get(v_a_1810_, 0);
lean_inc(v_val_1821_);
lean_dec_ref_known(v_a_1810_, 1);
v___y_1803_ = v___y_1808_;
v_val_1804_ = v_val_1821_;
goto v___jp_1802_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6___boxed(lean_object* v_firsts_1831_, lean_object* v_n_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_){
_start:
{
lean_object* v_res_1836_; 
v_res_1836_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6(v_firsts_1831_, v_n_1832_, v___y_1833_, v___y_1834_);
lean_dec(v___y_1834_);
lean_dec_ref(v___y_1833_);
lean_dec(v_firsts_1831_);
return v_res_1836_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__7(lean_object* v_a_1837_, lean_object* v_x_1838_, lean_object* v_x_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_){
_start:
{
if (lean_obj_tag(v_x_1838_) == 0)
{
lean_object* v___x_1843_; lean_object* v___x_1844_; 
v___x_1843_ = l_List_reverse___redArg(v_x_1839_);
v___x_1844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1844_, 0, v___x_1843_);
return v___x_1844_;
}
else
{
lean_object* v_head_1845_; lean_object* v_tail_1846_; lean_object* v___x_1848_; uint8_t v_isShared_1849_; uint8_t v_isSharedCheck_1864_; 
v_head_1845_ = lean_ctor_get(v_x_1838_, 0);
v_tail_1846_ = lean_ctor_get(v_x_1838_, 1);
v_isSharedCheck_1864_ = !lean_is_exclusive(v_x_1838_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1848_ = v_x_1838_;
v_isShared_1849_ = v_isSharedCheck_1864_;
goto v_resetjp_1847_;
}
else
{
lean_inc(v_tail_1846_);
lean_inc(v_head_1845_);
lean_dec(v_x_1838_);
v___x_1848_ = lean_box(0);
v_isShared_1849_ = v_isSharedCheck_1864_;
goto v_resetjp_1847_;
}
v_resetjp_1847_:
{
lean_object* v___x_1850_; 
v___x_1850_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6(v_a_1837_, v_head_1845_, v___y_1840_, v___y_1841_);
if (lean_obj_tag(v___x_1850_) == 0)
{
lean_object* v_a_1851_; lean_object* v___x_1853_; 
v_a_1851_ = lean_ctor_get(v___x_1850_, 0);
lean_inc(v_a_1851_);
lean_dec_ref_known(v___x_1850_, 1);
if (v_isShared_1849_ == 0)
{
lean_ctor_set(v___x_1848_, 1, v_x_1839_);
lean_ctor_set(v___x_1848_, 0, v_a_1851_);
v___x_1853_ = v___x_1848_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1855_; 
v_reuseFailAlloc_1855_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1855_, 0, v_a_1851_);
lean_ctor_set(v_reuseFailAlloc_1855_, 1, v_x_1839_);
v___x_1853_ = v_reuseFailAlloc_1855_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
v_x_1838_ = v_tail_1846_;
v_x_1839_ = v___x_1853_;
goto _start;
}
}
else
{
lean_object* v_a_1856_; lean_object* v___x_1858_; uint8_t v_isShared_1859_; uint8_t v_isSharedCheck_1863_; 
lean_del_object(v___x_1848_);
lean_dec(v_tail_1846_);
lean_dec(v_x_1839_);
v_a_1856_ = lean_ctor_get(v___x_1850_, 0);
v_isSharedCheck_1863_ = !lean_is_exclusive(v___x_1850_);
if (v_isSharedCheck_1863_ == 0)
{
v___x_1858_ = v___x_1850_;
v_isShared_1859_ = v_isSharedCheck_1863_;
goto v_resetjp_1857_;
}
else
{
lean_inc(v_a_1856_);
lean_dec(v___x_1850_);
v___x_1858_ = lean_box(0);
v_isShared_1859_ = v_isSharedCheck_1863_;
goto v_resetjp_1857_;
}
v_resetjp_1857_:
{
lean_object* v___x_1861_; 
if (v_isShared_1859_ == 0)
{
v___x_1861_ = v___x_1858_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v_a_1856_);
v___x_1861_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
return v___x_1861_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__7___boxed(lean_object* v_a_1865_, lean_object* v_x_1866_, lean_object* v_x_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_){
_start:
{
lean_object* v_res_1871_; 
v_res_1871_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__7(v_a_1865_, v_x_1866_, v_x_1867_, v___y_1868_, v___y_1869_);
lean_dec(v___y_1869_);
lean_dec_ref(v___y_1868_);
lean_dec(v_a_1865_);
return v_res_1871_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___redArg(lean_object* v_val_1872_, lean_object* v___x_1873_, lean_object* v___x_1874_, lean_object* v_a_1875_, lean_object* v_b_1876_){
_start:
{
lean_object* v_it_1878_; lean_object* v_startInclusive_1879_; lean_object* v_endExclusive_1880_; 
if (lean_obj_tag(v_a_1875_) == 0)
{
lean_object* v_currPos_1885_; lean_object* v_searcher_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1912_; 
v_currPos_1885_ = lean_ctor_get(v_a_1875_, 0);
v_searcher_1886_ = lean_ctor_get(v_a_1875_, 1);
v_isSharedCheck_1912_ = !lean_is_exclusive(v_a_1875_);
if (v_isSharedCheck_1912_ == 0)
{
v___x_1888_ = v_a_1875_;
v_isShared_1889_ = v_isSharedCheck_1912_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_searcher_1886_);
lean_inc(v_currPos_1885_);
lean_dec(v_a_1875_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1912_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v_startInclusive_1890_; lean_object* v_endExclusive_1891_; lean_object* v___x_1892_; uint8_t v___x_1893_; 
v_startInclusive_1890_ = lean_ctor_get(v___x_1873_, 1);
v_endExclusive_1891_ = lean_ctor_get(v___x_1873_, 2);
v___x_1892_ = lean_nat_sub(v_endExclusive_1891_, v_startInclusive_1890_);
v___x_1893_ = lean_nat_dec_eq(v_searcher_1886_, v___x_1892_);
lean_dec(v___x_1892_);
if (v___x_1893_ == 0)
{
uint32_t v___x_1894_; uint32_t v___x_1895_; uint8_t v___x_1896_; 
v___x_1894_ = 10;
v___x_1895_ = lean_string_utf8_get_fast(v_val_1872_, v_searcher_1886_);
v___x_1896_ = lean_uint32_dec_eq(v___x_1895_, v___x_1894_);
if (v___x_1896_ == 0)
{
lean_object* v___x_1897_; lean_object* v___x_1899_; 
v___x_1897_ = lean_string_utf8_next_fast(v_val_1872_, v_searcher_1886_);
lean_dec(v_searcher_1886_);
if (v_isShared_1889_ == 0)
{
lean_ctor_set(v___x_1888_, 1, v___x_1897_);
v___x_1899_ = v___x_1888_;
goto v_reusejp_1898_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v_currPos_1885_);
lean_ctor_set(v_reuseFailAlloc_1901_, 1, v___x_1897_);
v___x_1899_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1898_;
}
v_reusejp_1898_:
{
v_a_1875_ = v___x_1899_;
goto _start;
}
}
else
{
lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v_slice_1905_; lean_object* v_nextIt_1907_; 
v___x_1902_ = lean_string_utf8_next_fast(v_val_1872_, v_searcher_1886_);
v___x_1903_ = lean_nat_sub(v___x_1902_, v_searcher_1886_);
v___x_1904_ = lean_nat_add(v_searcher_1886_, v___x_1903_);
lean_dec(v___x_1903_);
v_slice_1905_ = l_String_Slice_subslice_x21(v___x_1873_, v_currPos_1885_, v_searcher_1886_);
lean_inc(v___x_1904_);
if (v_isShared_1889_ == 0)
{
lean_ctor_set(v___x_1888_, 1, v___x_1904_);
lean_ctor_set(v___x_1888_, 0, v___x_1904_);
v_nextIt_1907_ = v___x_1888_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v___x_1904_);
lean_ctor_set(v_reuseFailAlloc_1910_, 1, v___x_1904_);
v_nextIt_1907_ = v_reuseFailAlloc_1910_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
lean_object* v_startInclusive_1908_; lean_object* v_endExclusive_1909_; 
v_startInclusive_1908_ = lean_ctor_get(v_slice_1905_, 0);
lean_inc(v_startInclusive_1908_);
v_endExclusive_1909_ = lean_ctor_get(v_slice_1905_, 1);
lean_inc(v_endExclusive_1909_);
lean_dec_ref(v_slice_1905_);
v_it_1878_ = v_nextIt_1907_;
v_startInclusive_1879_ = v_startInclusive_1908_;
v_endExclusive_1880_ = v_endExclusive_1909_;
goto v___jp_1877_;
}
}
}
else
{
lean_object* v___x_1911_; 
lean_del_object(v___x_1888_);
lean_dec(v_searcher_1886_);
v___x_1911_ = lean_box(1);
lean_inc(v___x_1874_);
v_it_1878_ = v___x_1911_;
v_startInclusive_1879_ = v_currPos_1885_;
v_endExclusive_1880_ = v___x_1874_;
goto v___jp_1877_;
}
}
}
else
{
lean_dec(v___x_1874_);
return v_b_1876_;
}
v___jp_1877_:
{
lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; 
v___x_1881_ = lean_string_utf8_extract_fast(v_val_1872_, v_startInclusive_1879_, v_endExclusive_1880_);
lean_dec(v_endExclusive_1880_);
lean_dec(v_startInclusive_1879_);
v___x_1882_ = l_Lean_stringToMessageData(v___x_1881_);
v___x_1883_ = lean_array_push(v_b_1876_, v___x_1882_);
v_a_1875_ = v_it_1878_;
v_b_1876_ = v___x_1883_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___redArg___boxed(lean_object* v_val_1913_, lean_object* v___x_1914_, lean_object* v___x_1915_, lean_object* v_a_1916_, lean_object* v_b_1917_){
_start:
{
lean_object* v_res_1918_; 
v_res_1918_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___redArg(v_val_1913_, v___x_1914_, v___x_1915_, v_a_1916_, v_b_1917_);
lean_dec_ref(v___x_1914_);
lean_dec_ref(v_val_1913_);
return v_res_1918_;
}
}
static lean_object* _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__2(void){
_start:
{
lean_object* v___x_1922_; lean_object* v___x_1923_; 
v___x_1922_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__1));
v___x_1923_ = l_Lean_stringToMessageData(v___x_1922_);
return v___x_1923_;
}
}
static lean_object* _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__4(void){
_start:
{
lean_object* v___x_1925_; lean_object* v___x_1926_; 
v___x_1925_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__3));
v___x_1926_ = l_Lean_stringToMessageData(v___x_1925_);
return v___x_1926_;
}
}
static lean_object* _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__6(void){
_start:
{
lean_object* v___x_1928_; lean_object* v___x_1929_; 
v___x_1928_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__5));
v___x_1929_ = l_Lean_stringToMessageData(v___x_1928_);
return v___x_1929_;
}
}
static lean_object* _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__9(void){
_start:
{
lean_object* v___x_1933_; lean_object* v___x_1934_; 
v___x_1933_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__8));
v___x_1934_ = l_Lean_MessageData_ofFormat(v___x_1933_);
return v___x_1934_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11(lean_object* v_a_1935_, lean_object* v_a_1936_, lean_object* v_x_1937_, lean_object* v_x_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_){
_start:
{
if (lean_obj_tag(v_x_1937_) == 0)
{
lean_object* v___x_1942_; lean_object* v___x_1943_; 
v___x_1942_ = l_List_reverse___redArg(v_x_1938_);
v___x_1943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1943_, 0, v___x_1942_);
return v___x_1943_;
}
else
{
lean_object* v_head_1944_; lean_object* v_tail_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_2042_; 
v_head_1944_ = lean_ctor_get(v_x_1937_, 0);
v_tail_1945_ = lean_ctor_get(v_x_1937_, 1);
v_isSharedCheck_2042_ = !lean_is_exclusive(v_x_1937_);
if (v_isSharedCheck_2042_ == 0)
{
v___x_1947_ = v_x_1937_;
v_isShared_1948_ = v_isSharedCheck_2042_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_tail_1945_);
lean_inc(v_head_1944_);
lean_dec(v_x_1937_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_2042_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
lean_object* v___y_1950_; lean_object* v___y_1951_; lean_object* v___y_1952_; lean_object* v___y_1953_; lean_object* v_snd_1962_; lean_object* v_fst_1963_; lean_object* v___x_1965_; uint8_t v_isShared_1966_; uint8_t v_isSharedCheck_2041_; 
v_snd_1962_ = lean_ctor_get(v_head_1944_, 1);
v_fst_1963_ = lean_ctor_get(v_head_1944_, 0);
v_isSharedCheck_2041_ = !lean_is_exclusive(v_head_1944_);
if (v_isSharedCheck_2041_ == 0)
{
v___x_1965_ = v_head_1944_;
v_isShared_1966_ = v_isSharedCheck_2041_;
goto v_resetjp_1964_;
}
else
{
lean_inc(v_snd_1962_);
lean_inc(v_fst_1963_);
lean_dec(v_head_1944_);
v___x_1965_ = lean_box(0);
v_isShared_1966_ = v_isSharedCheck_2041_;
goto v_resetjp_1964_;
}
v___jp_1949_:
{
lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1959_; 
v___x_1954_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1954_, 0, v___y_1950_);
lean_ctor_set(v___x_1954_, 1, v___y_1953_);
v___x_1955_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1955_, 0, v___x_1954_);
lean_ctor_set(v___x_1955_, 1, v___y_1951_);
v___x_1956_ = l_Lean_MessageData_nestD(v___x_1955_);
lean_inc_ref(v___y_1952_);
v___x_1957_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1957_, 0, v___y_1952_);
lean_ctor_set(v___x_1957_, 1, v___x_1956_);
if (v_isShared_1948_ == 0)
{
lean_ctor_set(v___x_1947_, 1, v_x_1938_);
lean_ctor_set(v___x_1947_, 0, v___x_1957_);
v___x_1959_ = v___x_1947_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1961_; 
v_reuseFailAlloc_1961_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1961_, 0, v___x_1957_);
lean_ctor_set(v_reuseFailAlloc_1961_, 1, v_x_1938_);
v___x_1959_ = v_reuseFailAlloc_1961_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
v_x_1937_ = v_tail_1945_;
v_x_1938_ = v___x_1959_;
goto _start;
}
}
v_resetjp_1964_:
{
lean_object* v_fst_1967_; lean_object* v_snd_1968_; lean_object* v___x_1970_; uint8_t v_isShared_1971_; uint8_t v_isSharedCheck_2040_; 
v_fst_1967_ = lean_ctor_get(v_snd_1962_, 0);
v_snd_1968_ = lean_ctor_get(v_snd_1962_, 1);
v_isSharedCheck_2040_ = !lean_is_exclusive(v_snd_1962_);
if (v_isSharedCheck_2040_ == 0)
{
v___x_1970_ = v_snd_1962_;
v_isShared_1971_ = v_isSharedCheck_2040_;
goto v_resetjp_1969_;
}
else
{
lean_inc(v_snd_1968_);
lean_inc(v_fst_1967_);
lean_dec(v_snd_1962_);
v___x_1970_ = lean_box(0);
v_isShared_1971_ = v_isSharedCheck_2040_;
goto v_resetjp_1969_;
}
v_resetjp_1969_:
{
lean_object* v___y_1973_; lean_object* v___y_1974_; lean_object* v___y_1975_; lean_object* v___y_1976_; lean_object* v_a_1995_; lean_object* v___y_2011_; lean_object* v___x_2020_; 
v___x_2020_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_a_1936_, v_fst_1963_);
if (lean_obj_tag(v___x_2020_) == 0)
{
lean_object* v___x_2021_; 
v___x_2021_ = l_Lean_MessageData_nil;
v_a_1995_ = v___x_2021_;
goto v___jp_1994_;
}
else
{
lean_object* v_val_2022_; 
v_val_2022_ = lean_ctor_get(v___x_2020_, 0);
lean_inc(v_val_2022_);
lean_dec_ref_known(v___x_2020_, 1);
if (lean_obj_tag(v_val_2022_) == 0)
{
lean_object* v_size_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___y_2028_; lean_object* v___y_2029_; lean_object* v___x_2031_; uint8_t v___x_2032_; 
v_size_2023_ = lean_ctor_get(v_val_2022_, 0);
v___x_2024_ = lean_mk_empty_array_with_capacity(v_size_2023_);
v___x_2025_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__8_spec__14(v___x_2024_, v_val_2022_);
v___x_2026_ = lean_array_get_size(v___x_2025_);
v___x_2031_ = lean_unsigned_to_nat(0u);
v___x_2032_ = lean_nat_dec_eq(v___x_2026_, v___x_2031_);
if (v___x_2032_ == 0)
{
lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___y_2036_; uint8_t v___x_2038_; 
v___x_2033_ = lean_unsigned_to_nat(1u);
v___x_2034_ = lean_nat_sub(v___x_2026_, v___x_2033_);
v___x_2038_ = lean_nat_dec_le(v___x_2031_, v___x_2034_);
if (v___x_2038_ == 0)
{
lean_inc(v___x_2034_);
v___y_2036_ = v___x_2034_;
goto v___jp_2035_;
}
else
{
v___y_2036_ = v___x_2031_;
goto v___jp_2035_;
}
v___jp_2035_:
{
uint8_t v___x_2037_; 
v___x_2037_ = lean_nat_dec_le(v___y_2036_, v___x_2034_);
if (v___x_2037_ == 0)
{
lean_dec(v___x_2034_);
lean_inc(v___y_2036_);
v___y_2028_ = v___y_2036_;
v___y_2029_ = v___y_2036_;
goto v___jp_2027_;
}
else
{
v___y_2028_ = v___y_2036_;
v___y_2029_ = v___x_2034_;
goto v___jp_2027_;
}
}
}
else
{
v___y_2011_ = v___x_2025_;
goto v___jp_2010_;
}
v___jp_2027_:
{
lean_object* v___x_2030_; 
v___x_2030_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg(v___x_2026_, v___x_2025_, v___y_2028_, v___y_2029_);
lean_dec(v___y_2029_);
v___y_2011_ = v___x_2030_;
goto v___jp_2010_;
}
}
else
{
lean_object* v___x_2039_; 
v___x_2039_ = l_Lean_MessageData_nil;
v_a_1995_ = v___x_2039_;
goto v___jp_1994_;
}
}
v___jp_1972_:
{
lean_object* v___x_1978_; 
if (v_isShared_1971_ == 0)
{
lean_ctor_set_tag(v___x_1970_, 7);
lean_ctor_set(v___x_1970_, 1, v___y_1976_);
lean_ctor_set(v___x_1970_, 0, v___y_1973_);
v___x_1978_ = v___x_1970_;
goto v_reusejp_1977_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v___y_1973_);
lean_ctor_set(v_reuseFailAlloc_1993_, 1, v___y_1976_);
v___x_1978_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1977_;
}
v_reusejp_1977_:
{
if (lean_obj_tag(v_snd_1968_) == 0)
{
lean_object* v___x_1979_; 
lean_del_object(v___x_1965_);
v___x_1979_ = l_Lean_MessageData_nil;
v___y_1950_ = v___x_1978_;
v___y_1951_ = v___y_1974_;
v___y_1952_ = v___y_1975_;
v___y_1953_ = v___x_1979_;
goto v___jp_1949_;
}
else
{
lean_object* v_val_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1991_; 
v_val_1980_ = lean_ctor_get(v_snd_1968_, 0);
lean_inc_n(v_val_1980_, 2);
lean_dec_ref_known(v_snd_1968_, 1);
v___x_1981_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0);
v___x_1982_ = lean_unsigned_to_nat(0u);
v___x_1983_ = lean_string_utf8_byte_size(v_val_1980_);
v___x_1984_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1984_, 0, v_val_1980_);
lean_ctor_set(v___x_1984_, 1, v___x_1982_);
lean_ctor_set(v___x_1984_, 2, v___x_1983_);
v___x_1985_ = l_String_Slice_splitToSubslice___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__4(v___x_1984_);
v___x_1986_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__0));
v___x_1987_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___redArg(v_val_1980_, v___x_1984_, v___x_1983_, v___x_1985_, v___x_1986_);
lean_dec_ref_known(v___x_1984_, 3);
lean_dec(v_val_1980_);
v___x_1988_ = lean_array_to_list(v___x_1987_);
v___x_1989_ = l_Lean_MessageData_joinSep(v___x_1988_, v___x_1981_);
if (v_isShared_1966_ == 0)
{
lean_ctor_set_tag(v___x_1965_, 7);
lean_ctor_set(v___x_1965_, 1, v___x_1989_);
lean_ctor_set(v___x_1965_, 0, v___x_1981_);
v___x_1991_ = v___x_1965_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v___x_1981_);
lean_ctor_set(v_reuseFailAlloc_1992_, 1, v___x_1989_);
v___x_1991_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
v___y_1950_ = v___x_1978_;
v___y_1951_ = v___y_1974_;
v___y_1952_ = v___y_1975_;
v___y_1953_ = v___x_1991_;
goto v___jp_1949_;
}
}
}
}
v___jp_1994_:
{
lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; uint8_t v___x_2001_; lean_object* v___x_2002_; uint8_t v___x_2003_; 
v___x_1996_ = lean_obj_once(&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__2, &l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__2_once, _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__2);
v___x_1997_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12, &l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12_once, _init_l_Lean_Elab_Tactic_Doc_elabTacticExtension___closed__12);
lean_inc(v_fst_1963_);
v___x_1998_ = l_Lean_MessageData_ofName(v_fst_1963_);
v___x_1999_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1999_, 0, v___x_1997_);
lean_ctor_set(v___x_1999_, 1, v___x_1998_);
v___x_2000_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2000_, 0, v___x_1999_);
lean_ctor_set(v___x_2000_, 1, v___x_1997_);
v___x_2001_ = 1;
v___x_2002_ = l_Lean_Name_toString(v_fst_1963_, v___x_2001_);
v___x_2003_ = lean_string_dec_eq(v___x_2002_, v_fst_1967_);
lean_dec_ref(v___x_2002_);
if (v___x_2003_ == 0)
{
lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; 
v___x_2004_ = lean_obj_once(&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__4, &l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__4_once, _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__4);
v___x_2005_ = l_Lean_stringToMessageData(v_fst_1967_);
v___x_2006_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2006_, 0, v___x_2004_);
lean_ctor_set(v___x_2006_, 1, v___x_2005_);
v___x_2007_ = lean_obj_once(&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__6, &l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__6_once, _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__6);
v___x_2008_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2008_, 0, v___x_2006_);
lean_ctor_set(v___x_2008_, 1, v___x_2007_);
v___y_1973_ = v___x_2000_;
v___y_1974_ = v_a_1995_;
v___y_1975_ = v___x_1996_;
v___y_1976_ = v___x_2008_;
goto v___jp_1972_;
}
else
{
lean_object* v___x_2009_; 
lean_dec(v_fst_1967_);
v___x_2009_ = l_Lean_MessageData_nil;
v___y_1973_ = v___x_2000_;
v___y_1974_ = v_a_1995_;
v___y_1975_ = v___x_1996_;
v___y_1976_ = v___x_2009_;
goto v___jp_1972_;
}
}
v___jp_2010_:
{
lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; 
v___x_2012_ = lean_array_to_list(v___y_2011_);
v___x_2013_ = lean_box(0);
v___x_2014_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__7(v_a_1935_, v___x_2012_, v___x_2013_, v___y_1939_, v___y_1940_);
if (lean_obj_tag(v___x_2014_) == 0)
{
lean_object* v_a_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; 
v_a_2015_ = lean_ctor_get(v___x_2014_, 0);
lean_inc(v_a_2015_);
lean_dec_ref_known(v___x_2014_, 1);
v___x_2016_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0);
v___x_2017_ = lean_obj_once(&l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__9, &l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__9_once, _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___closed__9);
v___x_2018_ = l_Lean_MessageData_joinSep(v_a_2015_, v___x_2017_);
v___x_2019_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2019_, 0, v___x_2016_);
lean_ctor_set(v___x_2019_, 1, v___x_2018_);
v_a_1995_ = v___x_2019_;
goto v___jp_1994_;
}
else
{
lean_del_object(v___x_1970_);
lean_dec(v_snd_1968_);
lean_dec(v_fst_1967_);
lean_del_object(v___x_1965_);
lean_dec(v_fst_1963_);
lean_del_object(v___x_1947_);
lean_dec(v_tail_1945_);
lean_dec(v_x_1938_);
return v___x_2014_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11___boxed(lean_object* v_a_2043_, lean_object* v_a_2044_, lean_object* v_x_2045_, lean_object* v_x_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_){
_start:
{
lean_object* v_res_2050_; 
v_res_2050_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11(v_a_2043_, v_a_2044_, v_x_2045_, v_x_2046_, v___y_2047_, v___y_2048_);
lean_dec(v___y_2048_);
lean_dec_ref(v___y_2047_);
lean_dec(v_a_2044_);
lean_dec(v_a_2043_);
return v_res_2050_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___lam__0(uint8_t v___y_2052_, uint8_t v_suppressElabErrors_2053_, lean_object* v_x_2054_){
_start:
{
if (lean_obj_tag(v_x_2054_) == 1)
{
lean_object* v_pre_2055_; 
v_pre_2055_ = lean_ctor_get(v_x_2054_, 0);
if (lean_obj_tag(v_pre_2055_) == 0)
{
lean_object* v_str_2056_; lean_object* v___x_2057_; uint8_t v___x_2058_; 
v_str_2056_ = lean_ctor_get(v_x_2054_, 1);
v___x_2057_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___lam__0___closed__0));
v___x_2058_ = lean_string_dec_eq(v_str_2056_, v___x_2057_);
if (v___x_2058_ == 0)
{
return v___y_2052_;
}
else
{
return v_suppressElabErrors_2053_;
}
}
else
{
return v___y_2052_;
}
}
else
{
return v___y_2052_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___lam__0___boxed(lean_object* v___y_2059_, lean_object* v_suppressElabErrors_2060_, lean_object* v_x_2061_){
_start:
{
uint8_t v___y_17758__boxed_2062_; uint8_t v_suppressElabErrors_boxed_2063_; uint8_t v_res_2064_; lean_object* v_r_2065_; 
v___y_17758__boxed_2062_ = lean_unbox(v___y_2059_);
v_suppressElabErrors_boxed_2063_ = lean_unbox(v_suppressElabErrors_2060_);
v_res_2064_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___lam__0(v___y_17758__boxed_2062_, v_suppressElabErrors_boxed_2063_, v_x_2061_);
lean_dec(v_x_2061_);
v_r_2065_ = lean_box(v_res_2064_);
return v_r_2065_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30(lean_object* v_ref_2066_, lean_object* v_msgData_2067_, uint8_t v_severity_2068_, uint8_t v_isSilent_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_){
_start:
{
uint8_t v___y_2074_; uint8_t v___y_2075_; lean_object* v___y_2076_; lean_object* v___y_2077_; lean_object* v___y_2078_; lean_object* v___y_2079_; lean_object* v___y_2080_; lean_object* v___y_2081_; uint8_t v___y_2138_; uint8_t v___y_2139_; uint8_t v___y_2140_; lean_object* v___y_2141_; lean_object* v___y_2142_; uint8_t v___y_2166_; uint8_t v___y_2167_; uint8_t v___y_2168_; lean_object* v___y_2169_; lean_object* v___y_2170_; uint8_t v___y_2174_; uint8_t v___y_2175_; uint8_t v___y_2176_; uint8_t v___x_2191_; uint8_t v___y_2193_; uint8_t v___y_2194_; uint8_t v___y_2195_; uint8_t v___y_2197_; uint8_t v___x_2209_; 
v___x_2191_ = 2;
v___x_2209_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2068_, v___x_2191_);
if (v___x_2209_ == 0)
{
v___y_2197_ = v___x_2209_;
goto v___jp_2196_;
}
else
{
uint8_t v___x_2210_; 
lean_inc_ref(v_msgData_2067_);
v___x_2210_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_2067_);
v___y_2197_ = v___x_2210_;
goto v___jp_2196_;
}
v___jp_2073_:
{
lean_object* v___x_2082_; 
v___x_2082_ = l_Lean_Elab_Command_getScope___redArg(v___y_2081_);
if (lean_obj_tag(v___x_2082_) == 0)
{
lean_object* v_a_2083_; lean_object* v___x_2084_; 
v_a_2083_ = lean_ctor_get(v___x_2082_, 0);
lean_inc(v_a_2083_);
lean_dec_ref_known(v___x_2082_, 1);
v___x_2084_ = l_Lean_Elab_Command_getScope___redArg(v___y_2081_);
if (lean_obj_tag(v___x_2084_) == 0)
{
lean_object* v_a_2085_; lean_object* v___x_2087_; uint8_t v_isShared_2088_; uint8_t v_isSharedCheck_2120_; 
v_a_2085_ = lean_ctor_get(v___x_2084_, 0);
v_isSharedCheck_2120_ = !lean_is_exclusive(v___x_2084_);
if (v_isSharedCheck_2120_ == 0)
{
v___x_2087_ = v___x_2084_;
v_isShared_2088_ = v_isSharedCheck_2120_;
goto v_resetjp_2086_;
}
else
{
lean_inc(v_a_2085_);
lean_dec(v___x_2084_);
v___x_2087_ = lean_box(0);
v_isShared_2088_ = v_isSharedCheck_2120_;
goto v_resetjp_2086_;
}
v_resetjp_2086_:
{
lean_object* v___x_2089_; lean_object* v_currNamespace_2090_; lean_object* v_openDecls_2091_; lean_object* v_env_2092_; lean_object* v_messages_2093_; lean_object* v_scopes_2094_; lean_object* v_usedQuotCtxts_2095_; lean_object* v_nextMacroScope_2096_; lean_object* v_maxRecDepth_2097_; lean_object* v_ngen_2098_; lean_object* v_auxDeclNGen_2099_; lean_object* v_infoState_2100_; lean_object* v_traceState_2101_; lean_object* v_snapshotTasks_2102_; lean_object* v_prevLinterStates_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2119_; 
v___x_2089_ = lean_st_ref_take(v___y_2081_);
v_currNamespace_2090_ = lean_ctor_get(v_a_2083_, 2);
lean_inc(v_currNamespace_2090_);
lean_dec(v_a_2083_);
v_openDecls_2091_ = lean_ctor_get(v_a_2085_, 3);
lean_inc(v_openDecls_2091_);
lean_dec(v_a_2085_);
v_env_2092_ = lean_ctor_get(v___x_2089_, 0);
v_messages_2093_ = lean_ctor_get(v___x_2089_, 1);
v_scopes_2094_ = lean_ctor_get(v___x_2089_, 2);
v_usedQuotCtxts_2095_ = lean_ctor_get(v___x_2089_, 3);
v_nextMacroScope_2096_ = lean_ctor_get(v___x_2089_, 4);
v_maxRecDepth_2097_ = lean_ctor_get(v___x_2089_, 5);
v_ngen_2098_ = lean_ctor_get(v___x_2089_, 6);
v_auxDeclNGen_2099_ = lean_ctor_get(v___x_2089_, 7);
v_infoState_2100_ = lean_ctor_get(v___x_2089_, 8);
v_traceState_2101_ = lean_ctor_get(v___x_2089_, 9);
v_snapshotTasks_2102_ = lean_ctor_get(v___x_2089_, 10);
v_prevLinterStates_2103_ = lean_ctor_get(v___x_2089_, 11);
v_isSharedCheck_2119_ = !lean_is_exclusive(v___x_2089_);
if (v_isSharedCheck_2119_ == 0)
{
v___x_2105_ = v___x_2089_;
v_isShared_2106_ = v_isSharedCheck_2119_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_prevLinterStates_2103_);
lean_inc(v_snapshotTasks_2102_);
lean_inc(v_traceState_2101_);
lean_inc(v_infoState_2100_);
lean_inc(v_auxDeclNGen_2099_);
lean_inc(v_ngen_2098_);
lean_inc(v_maxRecDepth_2097_);
lean_inc(v_nextMacroScope_2096_);
lean_inc(v_usedQuotCtxts_2095_);
lean_inc(v_scopes_2094_);
lean_inc(v_messages_2093_);
lean_inc(v_env_2092_);
lean_dec(v___x_2089_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2119_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2112_; 
v___x_2107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2107_, 0, v_currNamespace_2090_);
lean_ctor_set(v___x_2107_, 1, v_openDecls_2091_);
v___x_2108_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2108_, 0, v___x_2107_);
lean_ctor_set(v___x_2108_, 1, v___y_2080_);
lean_inc_ref(v___y_2079_);
lean_inc_ref(v___y_2078_);
v___x_2109_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2109_, 0, v___y_2078_);
lean_ctor_set(v___x_2109_, 1, v___y_2077_);
lean_ctor_set(v___x_2109_, 2, v___y_2076_);
lean_ctor_set(v___x_2109_, 3, v___y_2079_);
lean_ctor_set(v___x_2109_, 4, v___x_2108_);
lean_ctor_set_uint8(v___x_2109_, sizeof(void*)*5, v___y_2074_);
lean_ctor_set_uint8(v___x_2109_, sizeof(void*)*5 + 1, v___y_2075_);
lean_ctor_set_uint8(v___x_2109_, sizeof(void*)*5 + 2, v_isSilent_2069_);
v___x_2110_ = l_Lean_MessageLog_add(v___x_2109_, v_messages_2093_);
if (v_isShared_2106_ == 0)
{
lean_ctor_set(v___x_2105_, 1, v___x_2110_);
v___x_2112_ = v___x_2105_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2118_; 
v_reuseFailAlloc_2118_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_2118_, 0, v_env_2092_);
lean_ctor_set(v_reuseFailAlloc_2118_, 1, v___x_2110_);
lean_ctor_set(v_reuseFailAlloc_2118_, 2, v_scopes_2094_);
lean_ctor_set(v_reuseFailAlloc_2118_, 3, v_usedQuotCtxts_2095_);
lean_ctor_set(v_reuseFailAlloc_2118_, 4, v_nextMacroScope_2096_);
lean_ctor_set(v_reuseFailAlloc_2118_, 5, v_maxRecDepth_2097_);
lean_ctor_set(v_reuseFailAlloc_2118_, 6, v_ngen_2098_);
lean_ctor_set(v_reuseFailAlloc_2118_, 7, v_auxDeclNGen_2099_);
lean_ctor_set(v_reuseFailAlloc_2118_, 8, v_infoState_2100_);
lean_ctor_set(v_reuseFailAlloc_2118_, 9, v_traceState_2101_);
lean_ctor_set(v_reuseFailAlloc_2118_, 10, v_snapshotTasks_2102_);
lean_ctor_set(v_reuseFailAlloc_2118_, 11, v_prevLinterStates_2103_);
v___x_2112_ = v_reuseFailAlloc_2118_;
goto v_reusejp_2111_;
}
v_reusejp_2111_:
{
lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2116_; 
v___x_2113_ = lean_st_ref_set(v___y_2081_, v___x_2112_);
v___x_2114_ = lean_box(0);
if (v_isShared_2088_ == 0)
{
lean_ctor_set(v___x_2087_, 0, v___x_2114_);
v___x_2116_ = v___x_2087_;
goto v_reusejp_2115_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v___x_2114_);
v___x_2116_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2115_;
}
v_reusejp_2115_:
{
return v___x_2116_;
}
}
}
}
}
else
{
lean_object* v_a_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2128_; 
lean_dec(v_a_2083_);
lean_dec_ref(v___y_2080_);
lean_dec_ref(v___y_2077_);
lean_dec(v___y_2076_);
v_a_2121_ = lean_ctor_get(v___x_2084_, 0);
v_isSharedCheck_2128_ = !lean_is_exclusive(v___x_2084_);
if (v_isSharedCheck_2128_ == 0)
{
v___x_2123_ = v___x_2084_;
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_a_2121_);
lean_dec(v___x_2084_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v___x_2126_; 
if (v_isShared_2124_ == 0)
{
v___x_2126_ = v___x_2123_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v_a_2121_);
v___x_2126_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
return v___x_2126_;
}
}
}
}
else
{
lean_object* v_a_2129_; lean_object* v___x_2131_; uint8_t v_isShared_2132_; uint8_t v_isSharedCheck_2136_; 
lean_dec_ref(v___y_2080_);
lean_dec_ref(v___y_2077_);
lean_dec(v___y_2076_);
v_a_2129_ = lean_ctor_get(v___x_2082_, 0);
v_isSharedCheck_2136_ = !lean_is_exclusive(v___x_2082_);
if (v_isSharedCheck_2136_ == 0)
{
v___x_2131_ = v___x_2082_;
v_isShared_2132_ = v_isSharedCheck_2136_;
goto v_resetjp_2130_;
}
else
{
lean_inc(v_a_2129_);
lean_dec(v___x_2082_);
v___x_2131_ = lean_box(0);
v_isShared_2132_ = v_isSharedCheck_2136_;
goto v_resetjp_2130_;
}
v_resetjp_2130_:
{
lean_object* v___x_2134_; 
if (v_isShared_2132_ == 0)
{
v___x_2134_ = v___x_2131_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v_a_2129_);
v___x_2134_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
return v___x_2134_;
}
}
}
}
v___jp_2137_:
{
lean_object* v_fileName_2143_; lean_object* v_fileMap_2144_; uint8_t v_suppressElabErrors_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v_a_2148_; lean_object* v___x_2150_; uint8_t v_isShared_2151_; uint8_t v_isSharedCheck_2164_; 
v_fileName_2143_ = lean_ctor_get(v___y_2070_, 0);
v_fileMap_2144_ = lean_ctor_get(v___y_2070_, 1);
v_suppressElabErrors_2145_ = lean_ctor_get_uint8(v___y_2070_, sizeof(void*)*10);
v___x_2146_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_2067_);
v___x_2147_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__0___redArg(v___x_2146_, v___y_2071_);
v_a_2148_ = lean_ctor_get(v___x_2147_, 0);
v_isSharedCheck_2164_ = !lean_is_exclusive(v___x_2147_);
if (v_isSharedCheck_2164_ == 0)
{
v___x_2150_ = v___x_2147_;
v_isShared_2151_ = v_isSharedCheck_2164_;
goto v_resetjp_2149_;
}
else
{
lean_inc(v_a_2148_);
lean_dec(v___x_2147_);
v___x_2150_ = lean_box(0);
v_isShared_2151_ = v_isSharedCheck_2164_;
goto v_resetjp_2149_;
}
v_resetjp_2149_:
{
lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; 
lean_inc_ref_n(v_fileMap_2144_, 2);
v___x_2152_ = l_Lean_FileMap_toPosition(v_fileMap_2144_, v___y_2141_);
lean_dec(v___y_2141_);
v___x_2153_ = l_Lean_FileMap_toPosition(v_fileMap_2144_, v___y_2142_);
lean_dec(v___y_2142_);
v___x_2154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2154_, 0, v___x_2153_);
v___x_2155_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg___closed__0));
if (v_suppressElabErrors_2145_ == 0)
{
lean_del_object(v___x_2150_);
v___y_2074_ = v___y_2139_;
v___y_2075_ = v___y_2140_;
v___y_2076_ = v___x_2154_;
v___y_2077_ = v___x_2152_;
v___y_2078_ = v_fileName_2143_;
v___y_2079_ = v___x_2155_;
v___y_2080_ = v_a_2148_;
v___y_2081_ = v___y_2071_;
goto v___jp_2073_;
}
else
{
lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___f_2158_; uint8_t v___x_2159_; 
v___x_2156_ = lean_box(v___y_2138_);
v___x_2157_ = lean_box(v_suppressElabErrors_2145_);
v___f_2158_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2158_, 0, v___x_2156_);
lean_closure_set(v___f_2158_, 1, v___x_2157_);
lean_inc(v_a_2148_);
v___x_2159_ = l_Lean_MessageData_hasTag(v___f_2158_, v_a_2148_);
if (v___x_2159_ == 0)
{
lean_object* v___x_2160_; lean_object* v___x_2162_; 
lean_dec_ref_known(v___x_2154_, 1);
lean_dec_ref(v___x_2152_);
lean_dec(v_a_2148_);
v___x_2160_ = lean_box(0);
if (v_isShared_2151_ == 0)
{
lean_ctor_set(v___x_2150_, 0, v___x_2160_);
v___x_2162_ = v___x_2150_;
goto v_reusejp_2161_;
}
else
{
lean_object* v_reuseFailAlloc_2163_; 
v_reuseFailAlloc_2163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2163_, 0, v___x_2160_);
v___x_2162_ = v_reuseFailAlloc_2163_;
goto v_reusejp_2161_;
}
v_reusejp_2161_:
{
return v___x_2162_;
}
}
else
{
lean_del_object(v___x_2150_);
v___y_2074_ = v___y_2139_;
v___y_2075_ = v___y_2140_;
v___y_2076_ = v___x_2154_;
v___y_2077_ = v___x_2152_;
v___y_2078_ = v_fileName_2143_;
v___y_2079_ = v___x_2155_;
v___y_2080_ = v_a_2148_;
v___y_2081_ = v___y_2071_;
goto v___jp_2073_;
}
}
}
}
v___jp_2165_:
{
lean_object* v___x_2171_; 
v___x_2171_ = l_Lean_Syntax_getTailPos_x3f(v___y_2169_, v___y_2167_);
lean_dec(v___y_2169_);
if (lean_obj_tag(v___x_2171_) == 0)
{
lean_inc(v___y_2170_);
v___y_2138_ = v___y_2166_;
v___y_2139_ = v___y_2167_;
v___y_2140_ = v___y_2168_;
v___y_2141_ = v___y_2170_;
v___y_2142_ = v___y_2170_;
goto v___jp_2137_;
}
else
{
lean_object* v_val_2172_; 
v_val_2172_ = lean_ctor_get(v___x_2171_, 0);
lean_inc(v_val_2172_);
lean_dec_ref_known(v___x_2171_, 1);
v___y_2138_ = v___y_2166_;
v___y_2139_ = v___y_2167_;
v___y_2140_ = v___y_2168_;
v___y_2141_ = v___y_2170_;
v___y_2142_ = v_val_2172_;
goto v___jp_2137_;
}
}
v___jp_2173_:
{
lean_object* v___x_2177_; 
v___x_2177_ = l_Lean_Elab_Command_getRef___redArg(v___y_2070_);
if (lean_obj_tag(v___x_2177_) == 0)
{
lean_object* v_a_2178_; lean_object* v_ref_2179_; lean_object* v___x_2180_; 
v_a_2178_ = lean_ctor_get(v___x_2177_, 0);
lean_inc(v_a_2178_);
lean_dec_ref_known(v___x_2177_, 1);
v_ref_2179_ = l_Lean_replaceRef(v_ref_2066_, v_a_2178_);
lean_dec(v_a_2178_);
v___x_2180_ = l_Lean_Syntax_getPos_x3f(v_ref_2179_, v___y_2175_);
if (lean_obj_tag(v___x_2180_) == 0)
{
lean_object* v___x_2181_; 
v___x_2181_ = lean_unsigned_to_nat(0u);
v___y_2166_ = v___y_2174_;
v___y_2167_ = v___y_2175_;
v___y_2168_ = v___y_2176_;
v___y_2169_ = v_ref_2179_;
v___y_2170_ = v___x_2181_;
goto v___jp_2165_;
}
else
{
lean_object* v_val_2182_; 
v_val_2182_ = lean_ctor_get(v___x_2180_, 0);
lean_inc(v_val_2182_);
lean_dec_ref_known(v___x_2180_, 1);
v___y_2166_ = v___y_2174_;
v___y_2167_ = v___y_2175_;
v___y_2168_ = v___y_2176_;
v___y_2169_ = v_ref_2179_;
v___y_2170_ = v_val_2182_;
goto v___jp_2165_;
}
}
else
{
lean_object* v_a_2183_; lean_object* v___x_2185_; uint8_t v_isShared_2186_; uint8_t v_isSharedCheck_2190_; 
lean_dec_ref(v_msgData_2067_);
v_a_2183_ = lean_ctor_get(v___x_2177_, 0);
v_isSharedCheck_2190_ = !lean_is_exclusive(v___x_2177_);
if (v_isSharedCheck_2190_ == 0)
{
v___x_2185_ = v___x_2177_;
v_isShared_2186_ = v_isSharedCheck_2190_;
goto v_resetjp_2184_;
}
else
{
lean_inc(v_a_2183_);
lean_dec(v___x_2177_);
v___x_2185_ = lean_box(0);
v_isShared_2186_ = v_isSharedCheck_2190_;
goto v_resetjp_2184_;
}
v_resetjp_2184_:
{
lean_object* v___x_2188_; 
if (v_isShared_2186_ == 0)
{
v___x_2188_ = v___x_2185_;
goto v_reusejp_2187_;
}
else
{
lean_object* v_reuseFailAlloc_2189_; 
v_reuseFailAlloc_2189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2189_, 0, v_a_2183_);
v___x_2188_ = v_reuseFailAlloc_2189_;
goto v_reusejp_2187_;
}
v_reusejp_2187_:
{
return v___x_2188_;
}
}
}
}
v___jp_2192_:
{
if (v___y_2195_ == 0)
{
v___y_2174_ = v___y_2193_;
v___y_2175_ = v___y_2194_;
v___y_2176_ = v_severity_2068_;
goto v___jp_2173_;
}
else
{
v___y_2174_ = v___y_2193_;
v___y_2175_ = v___y_2194_;
v___y_2176_ = v___x_2191_;
goto v___jp_2173_;
}
}
v___jp_2196_:
{
if (v___y_2197_ == 0)
{
lean_object* v___x_2198_; lean_object* v_scopes_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v_opts_2202_; uint8_t v___x_2203_; uint8_t v___x_2204_; 
v___x_2198_ = lean_st_ref_get(v___y_2071_);
v_scopes_2199_ = lean_ctor_get(v___x_2198_, 2);
lean_inc(v_scopes_2199_);
lean_dec(v___x_2198_);
v___x_2200_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2201_ = l_List_head_x21___redArg(v___x_2200_, v_scopes_2199_);
lean_dec(v_scopes_2199_);
v_opts_2202_ = lean_ctor_get(v___x_2201_, 1);
lean_inc_ref(v_opts_2202_);
lean_dec(v___x_2201_);
v___x_2203_ = 1;
v___x_2204_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2068_, v___x_2203_);
if (v___x_2204_ == 0)
{
lean_dec_ref(v_opts_2202_);
v___y_2193_ = v___y_2197_;
v___y_2194_ = v___y_2197_;
v___y_2195_ = v___x_2204_;
goto v___jp_2192_;
}
else
{
lean_object* v___x_2205_; uint8_t v___x_2206_; 
v___x_2205_ = l_Lean_warningAsError;
v___x_2206_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__2(v_opts_2202_, v___x_2205_);
lean_dec_ref(v_opts_2202_);
v___y_2193_ = v___y_2197_;
v___y_2194_ = v___y_2197_;
v___y_2195_ = v___x_2206_;
goto v___jp_2192_;
}
}
else
{
lean_object* v___x_2207_; lean_object* v___x_2208_; 
lean_dec_ref(v_msgData_2067_);
v___x_2207_ = lean_box(0);
v___x_2208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2208_, 0, v___x_2207_);
return v___x_2208_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30___boxed(lean_object* v_ref_2211_, lean_object* v_msgData_2212_, lean_object* v_severity_2213_, lean_object* v_isSilent_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_){
_start:
{
uint8_t v_severity_boxed_2218_; uint8_t v_isSilent_boxed_2219_; lean_object* v_res_2220_; 
v_severity_boxed_2218_ = lean_unbox(v_severity_2213_);
v_isSilent_boxed_2219_ = lean_unbox(v_isSilent_2214_);
v_res_2220_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30(v_ref_2211_, v_msgData_2212_, v_severity_boxed_2218_, v_isSilent_boxed_2219_, v___y_2215_, v___y_2216_);
lean_dec(v___y_2216_);
lean_dec_ref(v___y_2215_);
lean_dec(v_ref_2211_);
return v_res_2220_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25(lean_object* v_msgData_2221_, uint8_t v_severity_2222_, uint8_t v_isSilent_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_){
_start:
{
lean_object* v___x_2227_; 
v___x_2227_ = l_Lean_Elab_Command_getRef___redArg(v___y_2224_);
if (lean_obj_tag(v___x_2227_) == 0)
{
lean_object* v_a_2228_; lean_object* v___x_2229_; 
v_a_2228_ = lean_ctor_get(v___x_2227_, 0);
lean_inc(v_a_2228_);
lean_dec_ref_known(v___x_2227_, 1);
v___x_2229_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25_spec__30(v_a_2228_, v_msgData_2221_, v_severity_2222_, v_isSilent_2223_, v___y_2224_, v___y_2225_);
lean_dec(v_a_2228_);
return v___x_2229_;
}
else
{
lean_object* v_a_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2237_; 
lean_dec_ref(v_msgData_2221_);
v_a_2230_ = lean_ctor_get(v___x_2227_, 0);
v_isSharedCheck_2237_ = !lean_is_exclusive(v___x_2227_);
if (v_isSharedCheck_2237_ == 0)
{
v___x_2232_ = v___x_2227_;
v_isShared_2233_ = v_isSharedCheck_2237_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_a_2230_);
lean_dec(v___x_2227_);
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
v_reuseFailAlloc_2236_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25___boxed(lean_object* v_msgData_2238_, lean_object* v_severity_2239_, lean_object* v_isSilent_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_){
_start:
{
uint8_t v_severity_boxed_2244_; uint8_t v_isSilent_boxed_2245_; lean_object* v_res_2246_; 
v_severity_boxed_2244_ = lean_unbox(v_severity_2239_);
v_isSilent_boxed_2245_ = lean_unbox(v_isSilent_2240_);
v_res_2246_ = l_Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25(v_msgData_2238_, v_severity_boxed_2244_, v_isSilent_boxed_2245_, v___y_2241_, v___y_2242_);
lean_dec(v___y_2242_);
lean_dec_ref(v___y_2241_);
return v_res_2246_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12(lean_object* v_msgData_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_){
_start:
{
uint8_t v___x_2251_; uint8_t v___x_2252_; lean_object* v___x_2253_; 
v___x_2251_ = 0;
v___x_2252_ = 0;
v___x_2253_ = l_Lean_log___at___00Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12_spec__25(v_msgData_2247_, v___x_2251_, v___x_2252_, v___y_2248_, v___y_2249_);
return v___x_2253_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12___boxed(lean_object* v_msgData_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_){
_start:
{
lean_object* v_res_2258_; 
v_res_2258_ = l_Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12(v_msgData_2254_, v___y_2255_, v___y_2256_);
lean_dec(v___y_2256_);
lean_dec_ref(v___y_2255_);
return v_res_2258_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg(lean_object* v_init_2259_, lean_object* v_x_2260_){
_start:
{
if (lean_obj_tag(v_x_2260_) == 0)
{
lean_object* v_k_2262_; lean_object* v_v_2263_; lean_object* v_l_2264_; lean_object* v_r_2265_; lean_object* v___x_2266_; lean_object* v_a_2267_; lean_object* v_a_2268_; lean_object* v___x_2269_; 
v_k_2262_ = lean_ctor_get(v_x_2260_, 1);
lean_inc(v_k_2262_);
v_v_2263_ = lean_ctor_get(v_x_2260_, 2);
lean_inc(v_v_2263_);
v_l_2264_ = lean_ctor_get(v_x_2260_, 3);
lean_inc(v_l_2264_);
v_r_2265_ = lean_ctor_get(v_x_2260_, 4);
lean_inc(v_r_2265_);
lean_dec_ref_known(v_x_2260_, 5);
v___x_2266_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg(v_init_2259_, v_l_2264_);
v_a_2267_ = lean_ctor_get(v___x_2266_, 0);
lean_inc(v_a_2267_);
lean_dec_ref(v___x_2266_);
v_a_2268_ = lean_ctor_get(v_a_2267_, 0);
lean_inc(v_a_2268_);
lean_dec(v_a_2267_);
v___x_2269_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_2262_, v_v_2263_, v_a_2268_);
v_init_2259_ = v___x_2269_;
v_x_2260_ = v_r_2265_;
goto _start;
}
else
{
lean_object* v___x_2271_; lean_object* v___x_2272_; 
v___x_2271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2271_, 0, v_init_2259_);
v___x_2272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2272_, 0, v___x_2271_);
return v___x_2272_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg___boxed(lean_object* v_init_2273_, lean_object* v_x_2274_, lean_object* v___y_2275_){
_start:
{
lean_object* v_res_2276_; 
v_res_2276_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg(v_init_2273_, v_x_2274_);
return v_res_2276_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20_spec__23(lean_object* v_init_2277_, lean_object* v_x_2278_){
_start:
{
if (lean_obj_tag(v_x_2278_) == 0)
{
lean_object* v_k_2279_; lean_object* v_v_2280_; lean_object* v_l_2281_; lean_object* v_r_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; 
v_k_2279_ = lean_ctor_get(v_x_2278_, 1);
v_v_2280_ = lean_ctor_get(v_x_2278_, 2);
v_l_2281_ = lean_ctor_get(v_x_2278_, 3);
v_r_2282_ = lean_ctor_get(v_x_2278_, 4);
v___x_2283_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20_spec__23(v_init_2277_, v_l_2281_);
lean_inc(v_v_2280_);
lean_inc(v_k_2279_);
v___x_2284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2284_, 0, v_k_2279_);
lean_ctor_set(v___x_2284_, 1, v_v_2280_);
v___x_2285_ = lean_array_push(v___x_2283_, v___x_2284_);
v_init_2277_ = v___x_2285_;
v_x_2278_ = v_r_2282_;
goto _start;
}
else
{
return v_init_2277_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20_spec__23___boxed(lean_object* v_init_2287_, lean_object* v_x_2288_){
_start:
{
lean_object* v_res_2289_; 
v_res_2289_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20_spec__23(v_init_2287_, v_x_2288_);
lean_dec(v_x_2288_);
return v_res_2289_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg___lam__0(uint8_t v___x_2290_, lean_object* v_x1_2291_, lean_object* v_x2_2292_){
_start:
{
lean_object* v_fst_2293_; lean_object* v_fst_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; uint8_t v___x_2297_; 
v_fst_2293_ = lean_ctor_get(v_x1_2291_, 0);
lean_inc(v_fst_2293_);
lean_dec_ref(v_x1_2291_);
v_fst_2294_ = lean_ctor_get(v_x2_2292_, 0);
lean_inc(v_fst_2294_);
lean_dec_ref(v_x2_2292_);
v___x_2295_ = l_Lean_Name_toString(v_fst_2293_, v___x_2290_);
v___x_2296_ = l_Lean_Name_toString(v_fst_2294_, v___x_2290_);
v___x_2297_ = lean_string_dec_lt(v___x_2295_, v___x_2296_);
lean_dec_ref(v___x_2296_);
lean_dec_ref(v___x_2295_);
return v___x_2297_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg___lam__0___boxed(lean_object* v___x_2298_, lean_object* v_x1_2299_, lean_object* v_x2_2300_){
_start:
{
uint8_t v___x_18121__boxed_2301_; uint8_t v_res_2302_; lean_object* v_r_2303_; 
v___x_18121__boxed_2301_ = lean_unbox(v___x_2298_);
v_res_2302_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg___lam__0(v___x_18121__boxed_2301_, v_x1_2299_, v_x2_2300_);
v_r_2303_ = lean_box(v_res_2302_);
return v_r_2303_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25___redArg(lean_object* v_hi_2304_, lean_object* v_pivot_2305_, lean_object* v_as_2306_, lean_object* v_i_2307_, lean_object* v_k_2308_){
_start:
{
uint8_t v___x_2309_; 
v___x_2309_ = lean_nat_dec_lt(v_k_2308_, v_hi_2304_);
if (v___x_2309_ == 0)
{
lean_object* v___x_2310_; lean_object* v___x_2311_; 
lean_dec(v_k_2308_);
lean_dec_ref(v_pivot_2305_);
v___x_2310_ = lean_array_fswap(v_as_2306_, v_i_2307_, v_hi_2304_);
v___x_2311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2311_, 0, v_i_2307_);
lean_ctor_set(v___x_2311_, 1, v___x_2310_);
return v___x_2311_;
}
else
{
lean_object* v___x_2312_; lean_object* v_fst_2313_; lean_object* v_fst_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; uint8_t v___x_2317_; 
v___x_2312_ = lean_array_fget_borrowed(v_as_2306_, v_k_2308_);
v_fst_2313_ = lean_ctor_get(v___x_2312_, 0);
v_fst_2314_ = lean_ctor_get(v_pivot_2305_, 0);
lean_inc(v_fst_2313_);
v___x_2315_ = l_Lean_Name_toString(v_fst_2313_, v___x_2309_);
lean_inc(v_fst_2314_);
v___x_2316_ = l_Lean_Name_toString(v_fst_2314_, v___x_2309_);
v___x_2317_ = lean_string_dec_lt(v___x_2315_, v___x_2316_);
lean_dec_ref(v___x_2316_);
lean_dec_ref(v___x_2315_);
if (v___x_2317_ == 0)
{
lean_object* v___x_2318_; lean_object* v___x_2319_; 
v___x_2318_ = lean_unsigned_to_nat(1u);
v___x_2319_ = lean_nat_add(v_k_2308_, v___x_2318_);
lean_dec(v_k_2308_);
v_k_2308_ = v___x_2319_;
goto _start;
}
else
{
lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; 
v___x_2321_ = lean_array_fswap(v_as_2306_, v_i_2307_, v_k_2308_);
v___x_2322_ = lean_unsigned_to_nat(1u);
v___x_2323_ = lean_nat_add(v_i_2307_, v___x_2322_);
lean_dec(v_i_2307_);
v___x_2324_ = lean_nat_add(v_k_2308_, v___x_2322_);
lean_dec(v_k_2308_);
v_as_2306_ = v___x_2321_;
v_i_2307_ = v___x_2323_;
v_k_2308_ = v___x_2324_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25___redArg___boxed(lean_object* v_hi_2326_, lean_object* v_pivot_2327_, lean_object* v_as_2328_, lean_object* v_i_2329_, lean_object* v_k_2330_){
_start:
{
lean_object* v_res_2331_; 
v_res_2331_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25___redArg(v_hi_2326_, v_pivot_2327_, v_as_2328_, v_i_2329_, v_k_2330_);
lean_dec(v_hi_2326_);
return v_res_2331_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg(lean_object* v_n_2332_, lean_object* v_as_2333_, lean_object* v_lo_2334_, lean_object* v_hi_2335_){
_start:
{
lean_object* v___y_2337_; uint8_t v___x_2347_; 
v___x_2347_ = lean_nat_dec_lt(v_lo_2334_, v_hi_2335_);
if (v___x_2347_ == 0)
{
lean_dec(v_lo_2334_);
return v_as_2333_;
}
else
{
lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v_mid_2350_; lean_object* v___y_2352_; lean_object* v___y_2358_; lean_object* v___x_2363_; lean_object* v___x_2364_; uint8_t v___x_2365_; 
v___x_2348_ = lean_nat_add(v_lo_2334_, v_hi_2335_);
v___x_2349_ = lean_unsigned_to_nat(1u);
v_mid_2350_ = lean_nat_shiftr(v___x_2348_, v___x_2349_);
lean_dec(v___x_2348_);
v___x_2363_ = lean_array_fget_borrowed(v_as_2333_, v_mid_2350_);
v___x_2364_ = lean_array_fget_borrowed(v_as_2333_, v_lo_2334_);
lean_inc(v___x_2364_);
lean_inc(v___x_2363_);
v___x_2365_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg___lam__0(v___x_2347_, v___x_2363_, v___x_2364_);
if (v___x_2365_ == 0)
{
v___y_2358_ = v_as_2333_;
goto v___jp_2357_;
}
else
{
lean_object* v___x_2366_; 
v___x_2366_ = lean_array_fswap(v_as_2333_, v_lo_2334_, v_mid_2350_);
v___y_2358_ = v___x_2366_;
goto v___jp_2357_;
}
v___jp_2351_:
{
lean_object* v___x_2353_; lean_object* v___x_2354_; uint8_t v___x_2355_; 
v___x_2353_ = lean_array_fget_borrowed(v___y_2352_, v_mid_2350_);
v___x_2354_ = lean_array_fget_borrowed(v___y_2352_, v_hi_2335_);
lean_inc(v___x_2354_);
lean_inc(v___x_2353_);
v___x_2355_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg___lam__0(v___x_2347_, v___x_2353_, v___x_2354_);
if (v___x_2355_ == 0)
{
lean_dec(v_mid_2350_);
v___y_2337_ = v___y_2352_;
goto v___jp_2336_;
}
else
{
lean_object* v___x_2356_; 
v___x_2356_ = lean_array_fswap(v___y_2352_, v_mid_2350_, v_hi_2335_);
lean_dec(v_mid_2350_);
v___y_2337_ = v___x_2356_;
goto v___jp_2336_;
}
}
v___jp_2357_:
{
lean_object* v___x_2359_; lean_object* v___x_2360_; uint8_t v___x_2361_; 
v___x_2359_ = lean_array_fget_borrowed(v___y_2358_, v_hi_2335_);
v___x_2360_ = lean_array_fget_borrowed(v___y_2358_, v_lo_2334_);
lean_inc(v___x_2360_);
lean_inc(v___x_2359_);
v___x_2361_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg___lam__0(v___x_2347_, v___x_2359_, v___x_2360_);
if (v___x_2361_ == 0)
{
v___y_2352_ = v___y_2358_;
goto v___jp_2351_;
}
else
{
lean_object* v___x_2362_; 
v___x_2362_ = lean_array_fswap(v___y_2358_, v_lo_2334_, v_hi_2335_);
v___y_2352_ = v___x_2362_;
goto v___jp_2351_;
}
}
}
v___jp_2336_:
{
lean_object* v_pivot_2338_; lean_object* v___x_2339_; lean_object* v_fst_2340_; lean_object* v_snd_2341_; uint8_t v___x_2342_; 
v_pivot_2338_ = lean_array_fget(v___y_2337_, v_hi_2335_);
lean_inc_n(v_lo_2334_, 2);
v___x_2339_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25___redArg(v_hi_2335_, v_pivot_2338_, v___y_2337_, v_lo_2334_, v_lo_2334_);
v_fst_2340_ = lean_ctor_get(v___x_2339_, 0);
lean_inc(v_fst_2340_);
v_snd_2341_ = lean_ctor_get(v___x_2339_, 1);
lean_inc(v_snd_2341_);
lean_dec_ref(v___x_2339_);
v___x_2342_ = lean_nat_dec_le(v_hi_2335_, v_fst_2340_);
if (v___x_2342_ == 0)
{
lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; 
v___x_2343_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg(v_n_2332_, v_snd_2341_, v_lo_2334_, v_fst_2340_);
v___x_2344_ = lean_unsigned_to_nat(1u);
v___x_2345_ = lean_nat_add(v_fst_2340_, v___x_2344_);
lean_dec(v_fst_2340_);
v_as_2333_ = v___x_2343_;
v_lo_2334_ = v___x_2345_;
goto _start;
}
else
{
lean_dec(v_fst_2340_);
lean_dec(v_lo_2334_);
return v_snd_2341_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg___boxed(lean_object* v_n_2367_, lean_object* v_as_2368_, lean_object* v_lo_2369_, lean_object* v_hi_2370_){
_start:
{
lean_object* v_res_2371_; 
v_res_2371_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg(v_n_2367_, v_as_2368_, v_lo_2369_, v_hi_2370_);
lean_dec(v_hi_2370_);
lean_dec(v_n_2367_);
return v_res_2371_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__18___redArg(lean_object* v_as_2372_, size_t v_sz_2373_, size_t v_i_2374_, lean_object* v_b_2375_){
_start:
{
uint8_t v___x_2377_; 
v___x_2377_ = lean_usize_dec_lt(v_i_2374_, v_sz_2373_);
if (v___x_2377_ == 0)
{
lean_object* v___x_2378_; 
v___x_2378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2378_, 0, v_b_2375_);
return v___x_2378_;
}
else
{
lean_object* v_a_2379_; lean_object* v_fst_2380_; lean_object* v_snd_2381_; lean_object* v_found_2382_; size_t v___x_2383_; size_t v___x_2384_; 
v_a_2379_ = lean_array_uget_borrowed(v_as_2372_, v_i_2374_);
v_fst_2380_ = lean_ctor_get(v_a_2379_, 0);
v_snd_2381_ = lean_ctor_get(v_a_2379_, 1);
lean_inc(v_snd_2381_);
lean_inc(v_fst_2380_);
v_found_2382_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_2380_, v_snd_2381_, v_b_2375_);
v___x_2383_ = ((size_t)1ULL);
v___x_2384_ = lean_usize_add(v_i_2374_, v___x_2383_);
v_i_2374_ = v___x_2384_;
v_b_2375_ = v_found_2382_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__18___redArg___boxed(lean_object* v_as_2386_, lean_object* v_sz_2387_, lean_object* v_i_2388_, lean_object* v_b_2389_, lean_object* v___y_2390_){
_start:
{
size_t v_sz_boxed_2391_; size_t v_i_boxed_2392_; lean_object* v_res_2393_; 
v_sz_boxed_2391_ = lean_unbox_usize(v_sz_2387_);
lean_dec(v_sz_2387_);
v_i_boxed_2392_ = lean_unbox_usize(v_i_2388_);
lean_dec(v_i_2388_);
v_res_2393_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__18___redArg(v_as_2386_, v_sz_boxed_2391_, v_i_boxed_2392_, v_b_2389_);
lean_dec_ref(v_as_2386_);
return v_res_2393_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__19(lean_object* v_as_2394_, size_t v_sz_2395_, size_t v_i_2396_, lean_object* v_b_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_){
_start:
{
uint8_t v___x_2401_; 
v___x_2401_ = lean_usize_dec_lt(v_i_2396_, v_sz_2395_);
if (v___x_2401_ == 0)
{
lean_object* v___x_2402_; 
v___x_2402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2402_, 0, v_b_2397_);
return v___x_2402_;
}
else
{
lean_object* v_a_2403_; size_t v_sz_2404_; size_t v___x_2405_; lean_object* v___x_2406_; 
v_a_2403_ = lean_array_uget_borrowed(v_as_2394_, v_i_2396_);
v_sz_2404_ = lean_array_size(v_a_2403_);
v___x_2405_ = ((size_t)0ULL);
v___x_2406_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__18___redArg(v_a_2403_, v_sz_2404_, v___x_2405_, v_b_2397_);
if (lean_obj_tag(v___x_2406_) == 0)
{
lean_object* v_a_2407_; size_t v___x_2408_; size_t v___x_2409_; 
v_a_2407_ = lean_ctor_get(v___x_2406_, 0);
lean_inc(v_a_2407_);
lean_dec_ref_known(v___x_2406_, 1);
v___x_2408_ = ((size_t)1ULL);
v___x_2409_ = lean_usize_add(v_i_2396_, v___x_2408_);
v_i_2396_ = v___x_2409_;
v_b_2397_ = v_a_2407_;
goto _start;
}
else
{
return v___x_2406_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__19___boxed(lean_object* v_as_2411_, lean_object* v_sz_2412_, lean_object* v_i_2413_, lean_object* v_b_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_){
_start:
{
size_t v_sz_boxed_2418_; size_t v_i_boxed_2419_; lean_object* v_res_2420_; 
v_sz_boxed_2418_ = lean_unbox_usize(v_sz_2412_);
lean_dec(v_sz_2412_);
v_i_boxed_2419_ = lean_unbox_usize(v_i_2413_);
lean_dec(v_i_2413_);
v_res_2420_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__19(v_as_2411_, v_sz_boxed_2418_, v_i_boxed_2419_, v_b_2414_, v___y_2415_, v___y_2416_);
lean_dec(v___y_2416_);
lean_dec_ref(v___y_2415_);
lean_dec_ref(v_as_2411_);
return v_res_2420_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10___closed__0(void){
_start:
{
lean_object* v___x_2421_; lean_object* v___x_2422_; 
v___x_2421_ = lean_box(1);
v___x_2422_ = l_Lean_instInhabitedPersistentEnvExtensionState___redArg(v___x_2421_);
return v___x_2422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10(lean_object* v___y_2425_, lean_object* v___y_2426_){
_start:
{
lean_object* v___y_2429_; lean_object* v___y_2433_; lean_object* v___y_2434_; lean_object* v___y_2435_; lean_object* v___y_2436_; lean_object* v___y_2439_; lean_object* v___y_2440_; lean_object* v___y_2441_; lean_object* v___y_2442_; lean_object* v___x_2444_; lean_object* v_env_2445_; lean_object* v___x_2446_; lean_object* v_toEnvExtension_2447_; lean_object* v_asyncMode_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v_a_2454_; lean_object* v_a_2456_; lean_object* v_a_2479_; 
v___x_2444_ = lean_st_ref_get(v___y_2426_);
v_env_2445_ = lean_ctor_get(v___x_2444_, 0);
lean_inc_ref_n(v_env_2445_, 2);
lean_dec(v___x_2444_);
v___x_2446_ = l_Lean_Parser_Tactic_Doc_knownTacticTagExt;
v_toEnvExtension_2447_ = lean_ctor_get(v___x_2446_, 0);
v_asyncMode_2448_ = lean_ctor_get(v_toEnvExtension_2447_, 2);
v___x_2449_ = lean_box(1);
v___x_2450_ = lean_obj_once(&l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10___closed__0, &l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10___closed__0_once, _init_l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10___closed__0);
v___x_2451_ = lean_box(0);
v___x_2452_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2449_, v___x_2446_, v_env_2445_, v_asyncMode_2448_, v___x_2451_);
v___x_2453_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg(v___x_2449_, v___x_2452_);
v_a_2454_ = lean_ctor_get(v___x_2453_, 0);
lean_inc(v_a_2454_);
lean_dec_ref(v___x_2453_);
v_a_2479_ = lean_ctor_get(v_a_2454_, 0);
lean_inc(v_a_2479_);
lean_dec(v_a_2454_);
v_a_2456_ = v_a_2479_;
goto v___jp_2455_;
v___jp_2428_:
{
lean_object* v___x_2430_; lean_object* v___x_2431_; 
v___x_2430_ = lean_array_to_list(v___y_2429_);
v___x_2431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2431_, 0, v___x_2430_);
return v___x_2431_;
}
v___jp_2432_:
{
lean_object* v___x_2437_; 
v___x_2437_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg(v___y_2433_, v___y_2434_, v___y_2435_, v___y_2436_);
lean_dec(v___y_2436_);
lean_dec(v___y_2433_);
v___y_2429_ = v___x_2437_;
goto v___jp_2428_;
}
v___jp_2438_:
{
uint8_t v___x_2443_; 
v___x_2443_ = lean_nat_dec_le(v___y_2442_, v___y_2441_);
if (v___x_2443_ == 0)
{
lean_dec(v___y_2441_);
lean_inc(v___y_2442_);
v___y_2433_ = v___y_2439_;
v___y_2434_ = v___y_2440_;
v___y_2435_ = v___y_2442_;
v___y_2436_ = v___y_2442_;
goto v___jp_2432_;
}
else
{
v___y_2433_ = v___y_2439_;
v___y_2434_ = v___y_2440_;
v___y_2435_ = v___y_2442_;
v___y_2436_ = v___y_2441_;
goto v___jp_2432_;
}
}
v___jp_2455_:
{
lean_object* v___x_2457_; lean_object* v_importedEntries_2458_; size_t v_sz_2459_; size_t v___x_2460_; lean_object* v___x_2461_; 
v___x_2457_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_2450_, v_toEnvExtension_2447_, v_env_2445_, v_asyncMode_2448_, v___x_2451_);
v_importedEntries_2458_ = lean_ctor_get(v___x_2457_, 0);
lean_inc_ref(v_importedEntries_2458_);
lean_dec(v___x_2457_);
v_sz_2459_ = lean_array_size(v_importedEntries_2458_);
v___x_2460_ = ((size_t)0ULL);
v___x_2461_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__19(v_importedEntries_2458_, v_sz_2459_, v___x_2460_, v_a_2456_, v___y_2425_, v___y_2426_);
lean_dec_ref(v_importedEntries_2458_);
if (lean_obj_tag(v___x_2461_) == 0)
{
lean_object* v_a_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v_arr_2465_; lean_object* v___x_2466_; uint8_t v___x_2467_; 
v_a_2462_ = lean_ctor_get(v___x_2461_, 0);
lean_inc(v_a_2462_);
lean_dec_ref_known(v___x_2461_, 1);
v___x_2463_ = lean_unsigned_to_nat(0u);
v___x_2464_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10___closed__1));
v_arr_2465_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20_spec__23(v___x_2464_, v_a_2462_);
lean_dec(v_a_2462_);
v___x_2466_ = lean_array_get_size(v_arr_2465_);
v___x_2467_ = lean_nat_dec_eq(v___x_2466_, v___x_2463_);
if (v___x_2467_ == 0)
{
lean_object* v___x_2468_; lean_object* v___x_2469_; uint8_t v___x_2470_; 
v___x_2468_ = lean_unsigned_to_nat(1u);
v___x_2469_ = lean_nat_sub(v___x_2466_, v___x_2468_);
v___x_2470_ = lean_nat_dec_le(v___x_2463_, v___x_2469_);
if (v___x_2470_ == 0)
{
lean_inc(v___x_2469_);
v___y_2439_ = v___x_2466_;
v___y_2440_ = v_arr_2465_;
v___y_2441_ = v___x_2469_;
v___y_2442_ = v___x_2469_;
goto v___jp_2438_;
}
else
{
v___y_2439_ = v___x_2466_;
v___y_2440_ = v_arr_2465_;
v___y_2441_ = v___x_2469_;
v___y_2442_ = v___x_2463_;
goto v___jp_2438_;
}
}
else
{
v___y_2429_ = v_arr_2465_;
goto v___jp_2428_;
}
}
else
{
lean_object* v_a_2471_; lean_object* v___x_2473_; uint8_t v_isShared_2474_; uint8_t v_isSharedCheck_2478_; 
v_a_2471_ = lean_ctor_get(v___x_2461_, 0);
v_isSharedCheck_2478_ = !lean_is_exclusive(v___x_2461_);
if (v_isSharedCheck_2478_ == 0)
{
v___x_2473_ = v___x_2461_;
v_isShared_2474_ = v_isSharedCheck_2478_;
goto v_resetjp_2472_;
}
else
{
lean_inc(v_a_2471_);
lean_dec(v___x_2461_);
v___x_2473_ = lean_box(0);
v_isShared_2474_ = v_isSharedCheck_2478_;
goto v_resetjp_2472_;
}
v_resetjp_2472_:
{
lean_object* v___x_2476_; 
if (v_isShared_2474_ == 0)
{
v___x_2476_ = v___x_2473_;
goto v_reusejp_2475_;
}
else
{
lean_object* v_reuseFailAlloc_2477_; 
v_reuseFailAlloc_2477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2477_, 0, v_a_2471_);
v___x_2476_ = v_reuseFailAlloc_2477_;
goto v_reusejp_2475_;
}
v_reusejp_2475_:
{
return v___x_2476_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10___boxed(lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_){
_start:
{
lean_object* v_res_2483_; 
v_res_2483_ = l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10(v___y_2480_, v___y_2481_);
lean_dec(v___y_2481_);
lean_dec_ref(v___y_2480_);
return v_res_2483_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg(lean_object* v_t_2484_, lean_object* v_k_2485_, lean_object* v_fallback_2486_){
_start:
{
if (lean_obj_tag(v_t_2484_) == 0)
{
lean_object* v_k_2487_; lean_object* v_v_2488_; lean_object* v_l_2489_; lean_object* v_r_2490_; uint8_t v___x_2491_; 
v_k_2487_ = lean_ctor_get(v_t_2484_, 1);
v_v_2488_ = lean_ctor_get(v_t_2484_, 2);
v_l_2489_ = lean_ctor_get(v_t_2484_, 3);
v_r_2490_ = lean_ctor_get(v_t_2484_, 4);
v___x_2491_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2485_, v_k_2487_);
switch(v___x_2491_)
{
case 0:
{
v_t_2484_ = v_l_2489_;
goto _start;
}
case 1:
{
lean_inc(v_v_2488_);
return v_v_2488_;
}
default: 
{
v_t_2484_ = v_r_2490_;
goto _start;
}
}
}
else
{
lean_inc(v_fallback_2486_);
return v_fallback_2486_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg___boxed(lean_object* v_t_2494_, lean_object* v_k_2495_, lean_object* v_fallback_2496_){
_start:
{
lean_object* v_res_2497_; 
v_res_2497_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg(v_t_2494_, v_k_2495_, v_fallback_2496_);
lean_dec(v_fallback_2496_);
lean_dec(v_k_2495_);
lean_dec(v_t_2494_);
return v_res_2497_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___redArg(lean_object* v_as_2498_, size_t v_sz_2499_, size_t v_i_2500_, lean_object* v_b_2501_){
_start:
{
uint8_t v___x_2503_; 
v___x_2503_ = lean_usize_dec_lt(v_i_2500_, v_sz_2499_);
if (v___x_2503_ == 0)
{
lean_object* v___x_2504_; 
v___x_2504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2504_, 0, v_b_2501_);
return v___x_2504_;
}
else
{
lean_object* v_a_2505_; lean_object* v_fst_2506_; lean_object* v_snd_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; size_t v___x_2512_; size_t v___x_2513_; 
v_a_2505_ = lean_array_uget_borrowed(v_as_2498_, v_i_2500_);
v_fst_2506_ = lean_ctor_get(v_a_2505_, 0);
v_snd_2507_ = lean_ctor_get(v_a_2505_, 1);
v___x_2508_ = l_Lean_NameSet_empty;
v___x_2509_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg(v_b_2501_, v_snd_2507_, v___x_2508_);
lean_inc(v_fst_2506_);
v___x_2510_ = l_Lean_NameSet_insert(v___x_2509_, v_fst_2506_);
lean_inc(v_snd_2507_);
v___x_2511_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_snd_2507_, v___x_2510_, v_b_2501_);
v___x_2512_ = ((size_t)1ULL);
v___x_2513_ = lean_usize_add(v_i_2500_, v___x_2512_);
v_i_2500_ = v___x_2513_;
v_b_2501_ = v___x_2511_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___redArg___boxed(lean_object* v_as_2515_, lean_object* v_sz_2516_, lean_object* v_i_2517_, lean_object* v_b_2518_, lean_object* v___y_2519_){
_start:
{
size_t v_sz_boxed_2520_; size_t v_i_boxed_2521_; lean_object* v_res_2522_; 
v_sz_boxed_2520_ = lean_unbox_usize(v_sz_2516_);
lean_dec(v_sz_2516_);
v_i_boxed_2521_ = lean_unbox_usize(v_i_2517_);
lean_dec(v_i_2517_);
v_res_2522_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___redArg(v_as_2515_, v_sz_boxed_2520_, v_i_boxed_2521_, v_b_2518_);
lean_dec_ref(v_as_2515_);
return v_res_2522_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__2(lean_object* v_as_2523_, size_t v_sz_2524_, size_t v_i_2525_, lean_object* v_b_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_){
_start:
{
uint8_t v___x_2530_; 
v___x_2530_ = lean_usize_dec_lt(v_i_2525_, v_sz_2524_);
if (v___x_2530_ == 0)
{
lean_object* v___x_2531_; 
v___x_2531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2531_, 0, v_b_2526_);
return v___x_2531_;
}
else
{
lean_object* v_a_2532_; size_t v_sz_2533_; size_t v___x_2534_; lean_object* v___x_2535_; 
v_a_2532_ = lean_array_uget_borrowed(v_as_2523_, v_i_2525_);
v_sz_2533_ = lean_array_size(v_a_2532_);
v___x_2534_ = ((size_t)0ULL);
v___x_2535_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___redArg(v_a_2532_, v_sz_2533_, v___x_2534_, v_b_2526_);
if (lean_obj_tag(v___x_2535_) == 0)
{
lean_object* v_a_2536_; size_t v___x_2537_; size_t v___x_2538_; 
v_a_2536_ = lean_ctor_get(v___x_2535_, 0);
lean_inc(v_a_2536_);
lean_dec_ref_known(v___x_2535_, 1);
v___x_2537_ = ((size_t)1ULL);
v___x_2538_ = lean_usize_add(v_i_2525_, v___x_2537_);
v_i_2525_ = v___x_2538_;
v_b_2526_ = v_a_2536_;
goto _start;
}
else
{
return v___x_2535_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__2___boxed(lean_object* v_as_2540_, lean_object* v_sz_2541_, lean_object* v_i_2542_, lean_object* v_b_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_){
_start:
{
size_t v_sz_boxed_2547_; size_t v_i_boxed_2548_; lean_object* v_res_2549_; 
v_sz_boxed_2547_ = lean_unbox_usize(v_sz_2541_);
lean_dec(v_sz_2541_);
v_i_boxed_2548_ = lean_unbox_usize(v_i_2542_);
lean_dec(v_i_2542_);
v_res_2549_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__2(v_as_2540_, v_sz_boxed_2547_, v_i_boxed_2548_, v_b_2543_, v___y_2544_, v___y_2545_);
lean_dec(v___y_2545_);
lean_dec_ref(v___y_2544_);
lean_dec_ref(v_as_2540_);
return v_res_2549_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__3(lean_object* v_as_2550_, size_t v_i_2551_, size_t v_stop_2552_, lean_object* v_b_2553_){
_start:
{
uint8_t v___x_2554_; 
v___x_2554_ = lean_usize_dec_eq(v_i_2551_, v_stop_2552_);
if (v___x_2554_ == 0)
{
lean_object* v___x_2555_; lean_object* v_fst_2556_; lean_object* v_snd_2557_; lean_object* v___x_2558_; size_t v___x_2559_; size_t v___x_2560_; 
v___x_2555_ = lean_array_uget_borrowed(v_as_2550_, v_i_2551_);
v_fst_2556_ = lean_ctor_get(v___x_2555_, 0);
v_snd_2557_ = lean_ctor_get(v___x_2555_, 1);
lean_inc(v_snd_2557_);
lean_inc(v_fst_2556_);
v___x_2558_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_2556_, v_snd_2557_, v_b_2553_);
v___x_2559_ = ((size_t)1ULL);
v___x_2560_ = lean_usize_add(v_i_2551_, v___x_2559_);
v_i_2551_ = v___x_2560_;
v_b_2553_ = v___x_2558_;
goto _start;
}
else
{
return v_b_2553_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__3___boxed(lean_object* v_as_2562_, lean_object* v_i_2563_, lean_object* v_stop_2564_, lean_object* v_b_2565_){
_start:
{
size_t v_i_boxed_2566_; size_t v_stop_boxed_2567_; lean_object* v_res_2568_; 
v_i_boxed_2566_ = lean_unbox_usize(v_i_2563_);
lean_dec(v_i_2563_);
v_stop_boxed_2567_ = lean_unbox_usize(v_stop_2564_);
lean_dec(v_stop_2564_);
v_res_2568_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__3(v_as_2562_, v_i_boxed_2566_, v_stop_boxed_2567_, v_b_2565_);
lean_dec_ref(v_as_2562_);
return v_res_2568_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__5(lean_object* v_as_2569_, size_t v_i_2570_, size_t v_stop_2571_, lean_object* v_b_2572_){
_start:
{
lean_object* v___y_2574_; uint8_t v___x_2578_; 
v___x_2578_ = lean_usize_dec_eq(v_i_2570_, v_stop_2571_);
if (v___x_2578_ == 0)
{
lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; uint8_t v___x_2582_; 
v___x_2579_ = lean_array_uget_borrowed(v_as_2569_, v_i_2570_);
v___x_2580_ = lean_unsigned_to_nat(0u);
v___x_2581_ = lean_array_get_size(v___x_2579_);
v___x_2582_ = lean_nat_dec_lt(v___x_2580_, v___x_2581_);
if (v___x_2582_ == 0)
{
v___y_2574_ = v_b_2572_;
goto v___jp_2573_;
}
else
{
uint8_t v___x_2583_; 
v___x_2583_ = lean_nat_dec_le(v___x_2581_, v___x_2581_);
if (v___x_2583_ == 0)
{
if (v___x_2582_ == 0)
{
v___y_2574_ = v_b_2572_;
goto v___jp_2573_;
}
else
{
size_t v___x_2584_; size_t v___x_2585_; lean_object* v___x_2586_; 
v___x_2584_ = ((size_t)0ULL);
v___x_2585_ = lean_usize_of_nat(v___x_2581_);
v___x_2586_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__3(v___x_2579_, v___x_2584_, v___x_2585_, v_b_2572_);
v___y_2574_ = v___x_2586_;
goto v___jp_2573_;
}
}
else
{
size_t v___x_2587_; size_t v___x_2588_; lean_object* v___x_2589_; 
v___x_2587_ = ((size_t)0ULL);
v___x_2588_ = lean_usize_of_nat(v___x_2581_);
v___x_2589_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__3(v___x_2579_, v___x_2587_, v___x_2588_, v_b_2572_);
v___y_2574_ = v___x_2589_;
goto v___jp_2573_;
}
}
}
else
{
return v_b_2572_;
}
v___jp_2573_:
{
size_t v___x_2575_; size_t v___x_2576_; 
v___x_2575_ = ((size_t)1ULL);
v___x_2576_ = lean_usize_add(v_i_2570_, v___x_2575_);
v_i_2570_ = v___x_2576_;
v_b_2572_ = v___y_2574_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__5___boxed(lean_object* v_as_2590_, lean_object* v_i_2591_, lean_object* v_stop_2592_, lean_object* v_b_2593_){
_start:
{
size_t v_i_boxed_2594_; size_t v_stop_boxed_2595_; lean_object* v_res_2596_; 
v_i_boxed_2594_ = lean_unbox_usize(v_i_2591_);
lean_dec(v_i_2591_);
v_stop_boxed_2595_ = lean_unbox_usize(v_stop_2592_);
lean_dec(v_stop_2592_);
v_res_2596_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__5(v_as_2590_, v_i_boxed_2594_, v_stop_boxed_2595_, v_b_2593_);
lean_dec_ref(v_as_2590_);
return v_res_2596_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___redArg(lean_object* v_keys_2597_, lean_object* v_vals_2598_, lean_object* v_i_2599_, lean_object* v_k_2600_){
_start:
{
lean_object* v___x_2601_; uint8_t v___x_2602_; 
v___x_2601_ = lean_array_get_size(v_keys_2597_);
v___x_2602_ = lean_nat_dec_lt(v_i_2599_, v___x_2601_);
if (v___x_2602_ == 0)
{
lean_object* v___x_2603_; 
lean_dec(v_i_2599_);
v___x_2603_ = lean_box(0);
return v___x_2603_;
}
else
{
lean_object* v_k_x27_2604_; uint8_t v___x_2605_; 
v_k_x27_2604_ = lean_array_fget_borrowed(v_keys_2597_, v_i_2599_);
v___x_2605_ = lean_name_eq(v_k_2600_, v_k_x27_2604_);
if (v___x_2605_ == 0)
{
lean_object* v___x_2606_; lean_object* v___x_2607_; 
v___x_2606_ = lean_unsigned_to_nat(1u);
v___x_2607_ = lean_nat_add(v_i_2599_, v___x_2606_);
lean_dec(v_i_2599_);
v_i_2599_ = v___x_2607_;
goto _start;
}
else
{
lean_object* v___x_2609_; lean_object* v___x_2610_; 
v___x_2609_ = lean_array_fget_borrowed(v_vals_2598_, v_i_2599_);
lean_dec(v_i_2599_);
lean_inc(v___x_2609_);
v___x_2610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2610_, 0, v___x_2609_);
return v___x_2610_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___redArg___boxed(lean_object* v_keys_2611_, lean_object* v_vals_2612_, lean_object* v_i_2613_, lean_object* v_k_2614_){
_start:
{
lean_object* v_res_2615_; 
v_res_2615_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___redArg(v_keys_2611_, v_vals_2612_, v_i_2613_, v_k_2614_);
lean_dec(v_k_2614_);
lean_dec_ref(v_vals_2612_);
lean_dec_ref(v_keys_2611_);
return v_res_2615_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___redArg(lean_object* v_x_2616_, size_t v_x_2617_, lean_object* v_x_2618_){
_start:
{
if (lean_obj_tag(v_x_2616_) == 0)
{
lean_object* v_es_2619_; lean_object* v___x_2620_; size_t v___x_2621_; size_t v___x_2622_; lean_object* v_j_2623_; lean_object* v___x_2624_; 
v_es_2619_ = lean_ctor_get(v_x_2616_, 0);
v___x_2620_ = lean_box(2);
v___x_2621_ = ((size_t)31ULL);
v___x_2622_ = lean_usize_land(v_x_2617_, v___x_2621_);
v_j_2623_ = lean_usize_to_nat(v___x_2622_);
v___x_2624_ = lean_array_get_borrowed(v___x_2620_, v_es_2619_, v_j_2623_);
lean_dec(v_j_2623_);
switch(lean_obj_tag(v___x_2624_))
{
case 0:
{
lean_object* v_key_2625_; lean_object* v_val_2626_; uint8_t v___x_2627_; 
v_key_2625_ = lean_ctor_get(v___x_2624_, 0);
v_val_2626_ = lean_ctor_get(v___x_2624_, 1);
v___x_2627_ = lean_name_eq(v_x_2618_, v_key_2625_);
if (v___x_2627_ == 0)
{
lean_object* v___x_2628_; 
v___x_2628_ = lean_box(0);
return v___x_2628_;
}
else
{
lean_object* v___x_2629_; 
lean_inc(v_val_2626_);
v___x_2629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2629_, 0, v_val_2626_);
return v___x_2629_;
}
}
case 1:
{
lean_object* v_node_2630_; size_t v___x_2631_; size_t v___x_2632_; 
v_node_2630_ = lean_ctor_get(v___x_2624_, 0);
v___x_2631_ = ((size_t)5ULL);
v___x_2632_ = lean_usize_shift_right(v_x_2617_, v___x_2631_);
v_x_2616_ = v_node_2630_;
v_x_2617_ = v___x_2632_;
goto _start;
}
default: 
{
lean_object* v___x_2634_; 
v___x_2634_ = lean_box(0);
return v___x_2634_;
}
}
}
else
{
lean_object* v_ks_2635_; lean_object* v_vs_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; 
v_ks_2635_ = lean_ctor_get(v_x_2616_, 0);
v_vs_2636_ = lean_ctor_get(v_x_2616_, 1);
v___x_2637_ = lean_unsigned_to_nat(0u);
v___x_2638_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___redArg(v_ks_2635_, v_vs_2636_, v___x_2637_, v_x_2618_);
return v___x_2638_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___redArg___boxed(lean_object* v_x_2639_, lean_object* v_x_2640_, lean_object* v_x_2641_){
_start:
{
size_t v_x_18517__boxed_2642_; lean_object* v_res_2643_; 
v_x_18517__boxed_2642_ = lean_unbox_usize(v_x_2640_);
lean_dec(v_x_2640_);
v_res_2643_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___redArg(v_x_2639_, v_x_18517__boxed_2642_, v_x_2641_);
lean_dec(v_x_2641_);
lean_dec_ref(v_x_2639_);
return v_res_2643_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg(lean_object* v_x_2644_, lean_object* v_x_2645_){
_start:
{
uint64_t v___y_2647_; 
if (lean_obj_tag(v_x_2645_) == 0)
{
uint64_t v___x_2650_; 
v___x_2650_ = 1723ULL;
v___y_2647_ = v___x_2650_;
goto v___jp_2646_;
}
else
{
uint64_t v_hash_2651_; 
v_hash_2651_ = lean_ctor_get_uint64(v_x_2645_, sizeof(void*)*2);
v___y_2647_ = v_hash_2651_;
goto v___jp_2646_;
}
v___jp_2646_:
{
size_t v___x_2648_; lean_object* v___x_2649_; 
v___x_2648_ = lean_uint64_to_usize(v___y_2647_);
v___x_2649_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___redArg(v_x_2644_, v___x_2648_, v_x_2645_);
return v___x_2649_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg___boxed(lean_object* v_x_2652_, lean_object* v_x_2653_){
_start:
{
lean_object* v_res_2654_; 
v_res_2654_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg(v_x_2652_, v_x_2653_);
lean_dec(v_x_2653_);
lean_dec_ref(v_x_2652_);
return v_res_2654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___redArg(lean_object* v___y_2655_){
_start:
{
lean_object* v___x_2657_; lean_object* v_env_2658_; lean_object* v___x_2659_; lean_object* v_ext_2660_; lean_object* v_toEnvExtension_2661_; lean_object* v_asyncMode_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v_categories_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; 
v___x_2657_ = lean_st_ref_get(v___y_2655_);
v_env_2658_ = lean_ctor_get(v___x_2657_, 0);
lean_inc_ref_n(v_env_2658_, 2);
lean_dec(v___x_2657_);
v___x_2659_ = l_Lean_Parser_parserExtension;
v_ext_2660_ = lean_ctor_get(v___x_2659_, 1);
v_toEnvExtension_2661_ = lean_ctor_get(v_ext_2660_, 0);
v_asyncMode_2662_ = lean_ctor_get(v_toEnvExtension_2661_, 2);
v___x_2663_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
v___x_2664_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2663_, v___x_2659_, v_env_2658_, v_asyncMode_2662_);
v_categories_2665_ = lean_ctor_get(v___x_2664_, 2);
lean_inc_ref(v_categories_2665_);
lean_dec(v___x_2664_);
v___x_2666_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__1));
v___x_2667_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg(v_categories_2665_, v___x_2666_);
lean_dec_ref(v_categories_2665_);
if (lean_obj_tag(v___x_2667_) == 1)
{
lean_object* v_val_2668_; lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2705_; 
v_val_2668_ = lean_ctor_get(v___x_2667_, 0);
v_isSharedCheck_2705_ = !lean_is_exclusive(v___x_2667_);
if (v_isSharedCheck_2705_ == 0)
{
v___x_2670_ = v___x_2667_;
v_isShared_2671_ = v_isSharedCheck_2705_;
goto v_resetjp_2669_;
}
else
{
lean_inc(v_val_2668_);
lean_dec(v___x_2667_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2705_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v___y_2673_; lean_object* v___x_2682_; lean_object* v_toEnvExtension_2683_; lean_object* v_exportEntriesFn_2684_; lean_object* v_asyncMode_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v_importedEntries_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v_exported_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; uint8_t v___x_2697_; 
v___x_2682_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v_toEnvExtension_2683_ = lean_ctor_get(v___x_2682_, 0);
v_exportEntriesFn_2684_ = lean_ctor_get(v___x_2682_, 4);
v_asyncMode_2685_ = lean_ctor_get(v_toEnvExtension_2683_, 2);
v___x_2686_ = lean_box(1);
v___x_2687_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2, &l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2);
v___x_2688_ = lean_box(0);
lean_inc_ref_n(v_env_2658_, 2);
v___x_2689_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_2687_, v_toEnvExtension_2683_, v_env_2658_, v_asyncMode_2685_, v___x_2688_);
v_importedEntries_2690_ = lean_ctor_get(v___x_2689_, 0);
lean_inc_ref(v_importedEntries_2690_);
lean_dec(v___x_2689_);
v___x_2691_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2686_, v___x_2682_, v_env_2658_, v_asyncMode_2685_, v___x_2688_);
lean_inc_ref(v_exportEntriesFn_2684_);
v___x_2692_ = lean_apply_2(v_exportEntriesFn_2684_, v_env_2658_, v___x_2691_);
v_exported_2693_ = lean_ctor_get(v___x_2692_, 0);
lean_inc(v_exported_2693_);
lean_dec_ref(v___x_2692_);
v___x_2694_ = lean_array_push(v_importedEntries_2690_, v_exported_2693_);
v___x_2695_ = lean_unsigned_to_nat(0u);
v___x_2696_ = lean_array_get_size(v___x_2694_);
v___x_2697_ = lean_nat_dec_lt(v___x_2695_, v___x_2696_);
if (v___x_2697_ == 0)
{
lean_dec_ref(v___x_2694_);
v___y_2673_ = v___x_2686_;
goto v___jp_2672_;
}
else
{
uint8_t v___x_2698_; 
v___x_2698_ = lean_nat_dec_le(v___x_2696_, v___x_2696_);
if (v___x_2698_ == 0)
{
if (v___x_2697_ == 0)
{
lean_dec_ref(v___x_2694_);
v___y_2673_ = v___x_2686_;
goto v___jp_2672_;
}
else
{
size_t v___x_2699_; size_t v___x_2700_; lean_object* v___x_2701_; 
v___x_2699_ = ((size_t)0ULL);
v___x_2700_ = lean_usize_of_nat(v___x_2696_);
v___x_2701_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__5(v___x_2694_, v___x_2699_, v___x_2700_, v___x_2686_);
lean_dec_ref(v___x_2694_);
v___y_2673_ = v___x_2701_;
goto v___jp_2672_;
}
}
else
{
size_t v___x_2702_; size_t v___x_2703_; lean_object* v___x_2704_; 
v___x_2702_ = ((size_t)0ULL);
v___x_2703_ = lean_usize_of_nat(v___x_2696_);
v___x_2704_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__5(v___x_2694_, v___x_2702_, v___x_2703_, v___x_2686_);
lean_dec_ref(v___x_2694_);
v___y_2673_ = v___x_2704_;
goto v___jp_2672_;
}
}
v___jp_2672_:
{
lean_object* v_tables_2674_; lean_object* v_leadingTable_2675_; lean_object* v_trailingTable_2676_; lean_object* v_firstTokens_2677_; lean_object* v_firstTokens_2678_; lean_object* v___x_2680_; 
v_tables_2674_ = lean_ctor_get(v_val_2668_, 2);
v_leadingTable_2675_ = lean_ctor_get(v_tables_2674_, 0);
v_trailingTable_2676_ = lean_ctor_get(v_tables_2674_, 2);
lean_inc(v_trailingTable_2676_);
lean_inc(v_leadingTable_2675_);
lean_inc(v_val_2668_);
v_firstTokens_2677_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens(v_val_2668_, v_leadingTable_2675_, v___y_2673_);
v_firstTokens_2678_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens(v_val_2668_, v_trailingTable_2676_, v_firstTokens_2677_);
if (v_isShared_2671_ == 0)
{
lean_ctor_set_tag(v___x_2670_, 0);
lean_ctor_set(v___x_2670_, 0, v_firstTokens_2678_);
v___x_2680_ = v___x_2670_;
goto v_reusejp_2679_;
}
else
{
lean_object* v_reuseFailAlloc_2681_; 
v_reuseFailAlloc_2681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2681_, 0, v_firstTokens_2678_);
v___x_2680_ = v_reuseFailAlloc_2681_;
goto v_reusejp_2679_;
}
v_reusejp_2679_:
{
return v___x_2680_;
}
}
}
}
else
{
lean_object* v___x_2706_; lean_object* v___x_2707_; 
lean_dec(v___x_2667_);
lean_dec_ref(v_env_2658_);
v___x_2706_ = lean_box(1);
v___x_2707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2707_, 0, v___x_2706_);
return v___x_2707_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___redArg___boxed(lean_object* v___y_2708_, lean_object* v___y_2709_){
_start:
{
lean_object* v_res_2710_; 
v_res_2710_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___redArg(v___y_2708_);
lean_dec(v___y_2708_);
return v_res_2710_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__0(void){
_start:
{
lean_object* v___x_2711_; lean_object* v___x_2712_; 
v___x_2711_ = lean_box(1);
v___x_2712_ = l_Lean_instInhabitedPersistentEnvExtensionState___redArg(v___x_2711_);
return v___x_2712_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__2(void){
_start:
{
lean_object* v___x_2714_; lean_object* v___x_2715_; 
v___x_2714_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__1));
v___x_2715_ = l_Lean_stringToMessageData(v___x_2714_);
return v___x_2715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg(lean_object* v_a_2716_, lean_object* v_a_2717_){
_start:
{
lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v_env_2722_; lean_object* v_env_2723_; lean_object* v_env_2724_; lean_object* v___x_2725_; lean_object* v_toEnvExtension_2726_; lean_object* v_exportEntriesFn_2727_; lean_object* v_asyncMode_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v_importedEntries_2733_; lean_object* v___x_2735_; uint8_t v_isShared_2736_; uint8_t v_isSharedCheck_2785_; 
v___x_2719_ = lean_st_ref_get(v_a_2717_);
v___x_2720_ = lean_st_ref_get(v_a_2717_);
v___x_2721_ = lean_st_ref_get(v_a_2717_);
v_env_2722_ = lean_ctor_get(v___x_2719_, 0);
lean_inc_ref(v_env_2722_);
lean_dec(v___x_2719_);
v_env_2723_ = lean_ctor_get(v___x_2720_, 0);
lean_inc_ref(v_env_2723_);
lean_dec(v___x_2720_);
v_env_2724_ = lean_ctor_get(v___x_2721_, 0);
lean_inc_ref(v_env_2724_);
lean_dec(v___x_2721_);
v___x_2725_ = l_Lean_Parser_Tactic_Doc_tacticTagExt;
v_toEnvExtension_2726_ = lean_ctor_get(v___x_2725_, 0);
v_exportEntriesFn_2727_ = lean_ctor_get(v___x_2725_, 4);
v_asyncMode_2728_ = lean_ctor_get(v_toEnvExtension_2726_, 2);
v___x_2729_ = lean_box(1);
v___x_2730_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__0, &l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__0);
v___x_2731_ = lean_box(0);
v___x_2732_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_2730_, v_toEnvExtension_2726_, v_env_2722_, v_asyncMode_2728_, v___x_2731_);
v_importedEntries_2733_ = lean_ctor_get(v___x_2732_, 0);
v_isSharedCheck_2785_ = !lean_is_exclusive(v___x_2732_);
if (v_isSharedCheck_2785_ == 0)
{
lean_object* v_unused_2786_; 
v_unused_2786_ = lean_ctor_get(v___x_2732_, 1);
lean_dec(v_unused_2786_);
v___x_2735_ = v___x_2732_;
v_isShared_2736_ = v_isSharedCheck_2785_;
goto v_resetjp_2734_;
}
else
{
lean_inc(v_importedEntries_2733_);
lean_dec(v___x_2732_);
v___x_2735_ = lean_box(0);
v_isShared_2736_ = v_isSharedCheck_2785_;
goto v_resetjp_2734_;
}
v_resetjp_2734_:
{
lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v_exported_2739_; lean_object* v___x_2740_; size_t v_sz_2741_; size_t v___x_2742_; lean_object* v___x_2743_; 
v___x_2737_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2729_, v___x_2725_, v_env_2724_, v_asyncMode_2728_, v___x_2731_);
lean_inc_ref(v_exportEntriesFn_2727_);
v___x_2738_ = lean_apply_2(v_exportEntriesFn_2727_, v_env_2723_, v___x_2737_);
v_exported_2739_ = lean_ctor_get(v___x_2738_, 0);
lean_inc(v_exported_2739_);
lean_dec_ref(v___x_2738_);
v___x_2740_ = lean_array_push(v_importedEntries_2733_, v_exported_2739_);
v_sz_2741_ = lean_array_size(v___x_2740_);
v___x_2742_ = ((size_t)0ULL);
v___x_2743_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__2(v___x_2740_, v_sz_2741_, v___x_2742_, v___x_2729_, v_a_2716_, v_a_2717_);
lean_dec_ref(v___x_2740_);
if (lean_obj_tag(v___x_2743_) == 0)
{
lean_object* v_a_2744_; lean_object* v___x_2745_; lean_object* v_a_2746_; lean_object* v___x_2747_; 
v_a_2744_ = lean_ctor_get(v___x_2743_, 0);
lean_inc(v_a_2744_);
lean_dec_ref_known(v___x_2743_, 1);
v___x_2745_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___redArg(v_a_2717_);
v_a_2746_ = lean_ctor_get(v___x_2745_, 0);
lean_inc(v_a_2746_);
lean_dec_ref(v___x_2745_);
v___x_2747_ = l_Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10(v_a_2716_, v_a_2717_);
if (lean_obj_tag(v___x_2747_) == 0)
{
lean_object* v_a_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; 
v_a_2748_ = lean_ctor_get(v___x_2747_, 0);
lean_inc(v_a_2748_);
lean_dec_ref_known(v___x_2747_, 1);
v___x_2749_ = lean_box(0);
v___x_2750_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__11(v_a_2746_, v_a_2744_, v_a_2748_, v___x_2749_, v_a_2716_, v_a_2717_);
lean_dec(v_a_2744_);
lean_dec(v_a_2746_);
if (lean_obj_tag(v___x_2750_) == 0)
{
lean_object* v_a_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2756_; 
v_a_2751_ = lean_ctor_get(v___x_2750_, 0);
lean_inc(v_a_2751_);
lean_dec_ref_known(v___x_2750_, 1);
v___x_2752_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__2, &l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__2);
v___x_2753_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Doc_elabTacticExtension_spec__0_spec__1_spec__3___closed__0);
v___x_2754_ = l_Lean_MessageData_joinSep(v_a_2751_, v___x_2753_);
if (v_isShared_2736_ == 0)
{
lean_ctor_set_tag(v___x_2735_, 7);
lean_ctor_set(v___x_2735_, 1, v___x_2754_);
lean_ctor_set(v___x_2735_, 0, v___x_2753_);
v___x_2756_ = v___x_2735_;
goto v_reusejp_2755_;
}
else
{
lean_object* v_reuseFailAlloc_2760_; 
v_reuseFailAlloc_2760_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2760_, 0, v___x_2753_);
lean_ctor_set(v_reuseFailAlloc_2760_, 1, v___x_2754_);
v___x_2756_ = v_reuseFailAlloc_2760_;
goto v_reusejp_2755_;
}
v_reusejp_2755_:
{
lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; 
v___x_2757_ = l_Lean_MessageData_nestD(v___x_2756_);
v___x_2758_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2758_, 0, v___x_2752_);
lean_ctor_set(v___x_2758_, 1, v___x_2757_);
v___x_2759_ = l_Lean_logInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__12(v___x_2758_, v_a_2716_, v_a_2717_);
return v___x_2759_;
}
}
else
{
lean_object* v_a_2761_; lean_object* v___x_2763_; uint8_t v_isShared_2764_; uint8_t v_isSharedCheck_2768_; 
lean_del_object(v___x_2735_);
v_a_2761_ = lean_ctor_get(v___x_2750_, 0);
v_isSharedCheck_2768_ = !lean_is_exclusive(v___x_2750_);
if (v_isSharedCheck_2768_ == 0)
{
v___x_2763_ = v___x_2750_;
v_isShared_2764_ = v_isSharedCheck_2768_;
goto v_resetjp_2762_;
}
else
{
lean_inc(v_a_2761_);
lean_dec(v___x_2750_);
v___x_2763_ = lean_box(0);
v_isShared_2764_ = v_isSharedCheck_2768_;
goto v_resetjp_2762_;
}
v_resetjp_2762_:
{
lean_object* v___x_2766_; 
if (v_isShared_2764_ == 0)
{
v___x_2766_ = v___x_2763_;
goto v_reusejp_2765_;
}
else
{
lean_object* v_reuseFailAlloc_2767_; 
v_reuseFailAlloc_2767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2767_, 0, v_a_2761_);
v___x_2766_ = v_reuseFailAlloc_2767_;
goto v_reusejp_2765_;
}
v_reusejp_2765_:
{
return v___x_2766_;
}
}
}
}
else
{
lean_object* v_a_2769_; lean_object* v___x_2771_; uint8_t v_isShared_2772_; uint8_t v_isSharedCheck_2776_; 
lean_dec(v_a_2746_);
lean_dec(v_a_2744_);
lean_del_object(v___x_2735_);
v_a_2769_ = lean_ctor_get(v___x_2747_, 0);
v_isSharedCheck_2776_ = !lean_is_exclusive(v___x_2747_);
if (v_isSharedCheck_2776_ == 0)
{
v___x_2771_ = v___x_2747_;
v_isShared_2772_ = v_isSharedCheck_2776_;
goto v_resetjp_2770_;
}
else
{
lean_inc(v_a_2769_);
lean_dec(v___x_2747_);
v___x_2771_ = lean_box(0);
v_isShared_2772_ = v_isSharedCheck_2776_;
goto v_resetjp_2770_;
}
v_resetjp_2770_:
{
lean_object* v___x_2774_; 
if (v_isShared_2772_ == 0)
{
v___x_2774_ = v___x_2771_;
goto v_reusejp_2773_;
}
else
{
lean_object* v_reuseFailAlloc_2775_; 
v_reuseFailAlloc_2775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2775_, 0, v_a_2769_);
v___x_2774_ = v_reuseFailAlloc_2775_;
goto v_reusejp_2773_;
}
v_reusejp_2773_:
{
return v___x_2774_;
}
}
}
}
else
{
lean_object* v_a_2777_; lean_object* v___x_2779_; uint8_t v_isShared_2780_; uint8_t v_isSharedCheck_2784_; 
lean_del_object(v___x_2735_);
v_a_2777_ = lean_ctor_get(v___x_2743_, 0);
v_isSharedCheck_2784_ = !lean_is_exclusive(v___x_2743_);
if (v_isSharedCheck_2784_ == 0)
{
v___x_2779_ = v___x_2743_;
v_isShared_2780_ = v_isSharedCheck_2784_;
goto v_resetjp_2778_;
}
else
{
lean_inc(v_a_2777_);
lean_dec(v___x_2743_);
v___x_2779_ = lean_box(0);
v_isShared_2780_ = v_isSharedCheck_2784_;
goto v_resetjp_2778_;
}
v_resetjp_2778_:
{
lean_object* v___x_2782_; 
if (v_isShared_2780_ == 0)
{
v___x_2782_ = v___x_2779_;
goto v_reusejp_2781_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v_a_2777_);
v___x_2782_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2781_;
}
v_reusejp_2781_:
{
return v___x_2782_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___boxed(lean_object* v_a_2787_, lean_object* v_a_2788_, lean_object* v_a_2789_){
_start:
{
lean_object* v_res_2790_; 
v_res_2790_ = l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg(v_a_2787_, v_a_2788_);
lean_dec(v_a_2788_);
lean_dec_ref(v_a_2787_);
return v_res_2790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags(lean_object* v___stx_2791_, lean_object* v_a_2792_, lean_object* v_a_2793_){
_start:
{
lean_object* v___x_2795_; 
v___x_2795_ = l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg(v_a_2792_, v_a_2793_);
return v___x_2795_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_elabPrintTacTags___boxed(lean_object* v___stx_2796_, lean_object* v_a_2797_, lean_object* v_a_2798_, lean_object* v_a_2799_){
_start:
{
lean_object* v_res_2800_; 
v_res_2800_ = l_Lean_Elab_Tactic_Doc_elabPrintTacTags(v___stx_2796_, v_a_2797_, v_a_2798_);
lean_dec(v_a_2798_);
lean_dec_ref(v_a_2797_);
lean_dec(v___stx_2796_);
return v_res_2800_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0(lean_object* v_00_u03b4_2801_, lean_object* v_t_2802_, lean_object* v_k_2803_, lean_object* v_fallback_2804_){
_start:
{
lean_object* v___x_2805_; 
v___x_2805_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg(v_t_2802_, v_k_2803_, v_fallback_2804_);
return v___x_2805_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___boxed(lean_object* v_00_u03b4_2806_, lean_object* v_t_2807_, lean_object* v_k_2808_, lean_object* v_fallback_2809_){
_start:
{
lean_object* v_res_2810_; 
v_res_2810_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0(v_00_u03b4_2806_, v_t_2807_, v_k_2808_, v_fallback_2809_);
lean_dec(v_fallback_2809_);
lean_dec(v_k_2808_);
lean_dec(v_t_2807_);
return v_res_2810_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1(lean_object* v_as_2811_, size_t v_sz_2812_, size_t v_i_2813_, lean_object* v_b_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_){
_start:
{
lean_object* v___x_2818_; 
v___x_2818_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___redArg(v_as_2811_, v_sz_2812_, v_i_2813_, v_b_2814_);
return v___x_2818_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1___boxed(lean_object* v_as_2819_, lean_object* v_sz_2820_, lean_object* v_i_2821_, lean_object* v_b_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_){
_start:
{
size_t v_sz_boxed_2826_; size_t v_i_boxed_2827_; lean_object* v_res_2828_; 
v_sz_boxed_2826_ = lean_unbox_usize(v_sz_2820_);
lean_dec(v_sz_2820_);
v_i_boxed_2827_ = lean_unbox_usize(v_i_2821_);
lean_dec(v_i_2821_);
v_res_2828_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__1(v_as_2819_, v_sz_boxed_2826_, v_i_boxed_2827_, v_b_2822_, v___y_2823_, v___y_2824_);
lean_dec(v___y_2824_);
lean_dec_ref(v___y_2823_);
lean_dec_ref(v_as_2819_);
return v_res_2828_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3(lean_object* v___y_2829_, lean_object* v___y_2830_){
_start:
{
lean_object* v___x_2832_; 
v___x_2832_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___redArg(v___y_2830_);
return v___x_2832_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3___boxed(lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_){
_start:
{
lean_object* v_res_2836_; 
v_res_2836_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3(v___y_2833_, v___y_2834_);
lean_dec(v___y_2834_);
lean_dec_ref(v___y_2833_);
return v_res_2836_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5(lean_object* v_val_2837_, lean_object* v___x_2838_, lean_object* v___x_2839_, lean_object* v_inst_2840_, lean_object* v_R_2841_, lean_object* v_a_2842_, lean_object* v_b_2843_){
_start:
{
lean_object* v___x_2844_; 
v___x_2844_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___redArg(v_val_2837_, v___x_2838_, v___x_2839_, v_a_2842_, v_b_2843_);
return v___x_2844_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5___boxed(lean_object* v_val_2845_, lean_object* v___x_2846_, lean_object* v___x_2847_, lean_object* v_inst_2848_, lean_object* v_R_2849_, lean_object* v_a_2850_, lean_object* v_b_2851_){
_start:
{
lean_object* v_res_2852_; 
v_res_2852_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__5(v_val_2845_, v___x_2846_, v___x_2847_, v_inst_2848_, v_R_2849_, v_a_2850_, v_b_2851_);
lean_dec_ref(v___x_2846_);
lean_dec_ref(v_val_2845_);
return v_res_2852_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__8(lean_object* v_init_2853_, lean_object* v_t_2854_){
_start:
{
lean_object* v___x_2855_; 
v___x_2855_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__8_spec__14(v_init_2853_, v_t_2854_);
return v___x_2855_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9(lean_object* v_n_2856_, lean_object* v_as_2857_, lean_object* v_lo_2858_, lean_object* v_hi_2859_, lean_object* v_w_2860_, lean_object* v_hlo_2861_, lean_object* v_hhi_2862_){
_start:
{
lean_object* v___x_2863_; 
v___x_2863_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___redArg(v_n_2856_, v_as_2857_, v_lo_2858_, v_hi_2859_);
return v___x_2863_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9___boxed(lean_object* v_n_2864_, lean_object* v_as_2865_, lean_object* v_lo_2866_, lean_object* v_hi_2867_, lean_object* v_w_2868_, lean_object* v_hlo_2869_, lean_object* v_hhi_2870_){
_start:
{
lean_object* v_res_2871_; 
v_res_2871_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9(v_n_2864_, v_as_2865_, v_lo_2866_, v_hi_2867_, v_w_2868_, v_hlo_2869_, v_hhi_2870_);
lean_dec(v_hi_2867_);
lean_dec(v_n_2864_);
return v_res_2871_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4(lean_object* v_00_u03b2_2872_, lean_object* v_x_2873_, lean_object* v_x_2874_){
_start:
{
lean_object* v___x_2875_; 
v___x_2875_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg(v_x_2873_, v_x_2874_);
return v___x_2875_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___boxed(lean_object* v_00_u03b2_2876_, lean_object* v_x_2877_, lean_object* v_x_2878_){
_start:
{
lean_object* v_res_2879_; 
v_res_2879_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4(v_00_u03b2_2876_, v_x_2877_, v_x_2878_);
lean_dec(v_x_2878_);
lean_dec_ref(v_x_2877_);
return v_res_2879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9(lean_object* v_tac_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_){
_start:
{
lean_object* v___x_2884_; 
v___x_2884_ = l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___redArg(v_tac_2880_, v___y_2882_);
return v___x_2884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9___boxed(lean_object* v_tac_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_){
_start:
{
lean_object* v_res_2889_; 
v_res_2889_ = l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9(v_tac_2885_, v___y_2886_, v___y_2887_);
lean_dec(v___y_2887_);
lean_dec_ref(v___y_2886_);
return v_res_2889_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10(lean_object* v_00_u03b4_2890_, lean_object* v_t_2891_, lean_object* v_k_2892_){
_start:
{
lean_object* v___x_2893_; 
v___x_2893_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___redArg(v_t_2891_, v_k_2892_);
return v___x_2893_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___boxed(lean_object* v_00_u03b4_2894_, lean_object* v_t_2895_, lean_object* v_k_2896_){
_start:
{
lean_object* v_res_2897_; 
v_res_2897_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10(v_00_u03b4_2894_, v_t_2895_, v_k_2896_);
lean_dec(v_k_2896_);
lean_dec(v_t_2895_);
return v_res_2897_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__16(lean_object* v_n_2898_, lean_object* v_lo_2899_, lean_object* v_hi_2900_, lean_object* v_hhi_2901_, lean_object* v_pivot_2902_, lean_object* v_as_2903_, lean_object* v_i_2904_, lean_object* v_k_2905_, lean_object* v_ilo_2906_, lean_object* v_ik_2907_, lean_object* v_w_2908_){
_start:
{
lean_object* v___x_2909_; 
v___x_2909_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__16___redArg(v_hi_2900_, v_pivot_2902_, v_as_2903_, v_i_2904_, v_k_2905_);
return v___x_2909_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__16___boxed(lean_object* v_n_2910_, lean_object* v_lo_2911_, lean_object* v_hi_2912_, lean_object* v_hhi_2913_, lean_object* v_pivot_2914_, lean_object* v_as_2915_, lean_object* v_i_2916_, lean_object* v_k_2917_, lean_object* v_ilo_2918_, lean_object* v_ik_2919_, lean_object* v_w_2920_){
_start:
{
lean_object* v_res_2921_; 
v_res_2921_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__9_spec__16(v_n_2910_, v_lo_2911_, v_hi_2912_, v_hhi_2913_, v_pivot_2914_, v_as_2915_, v_i_2916_, v_k_2917_, v_ilo_2918_, v_ik_2919_, v_w_2920_);
lean_dec(v_hi_2912_);
lean_dec(v_lo_2911_);
lean_dec(v_n_2910_);
return v_res_2921_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__18(lean_object* v_as_2922_, size_t v_sz_2923_, size_t v_i_2924_, lean_object* v_b_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_){
_start:
{
lean_object* v___x_2929_; 
v___x_2929_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__18___redArg(v_as_2922_, v_sz_2923_, v_i_2924_, v_b_2925_);
return v___x_2929_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__18___boxed(lean_object* v_as_2930_, lean_object* v_sz_2931_, lean_object* v_i_2932_, lean_object* v_b_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_){
_start:
{
size_t v_sz_boxed_2937_; size_t v_i_boxed_2938_; lean_object* v_res_2939_; 
v_sz_boxed_2937_ = lean_unbox_usize(v_sz_2931_);
lean_dec(v_sz_2931_);
v_i_boxed_2938_ = lean_unbox_usize(v_i_2932_);
lean_dec(v_i_2932_);
v_res_2939_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__18(v_as_2930_, v_sz_boxed_2937_, v_i_boxed_2938_, v_b_2933_, v___y_2934_, v___y_2935_);
lean_dec(v___y_2935_);
lean_dec_ref(v___y_2934_);
lean_dec_ref(v_as_2930_);
return v_res_2939_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20(lean_object* v_init_2940_, lean_object* v_t_2941_){
_start:
{
lean_object* v___x_2942_; 
v___x_2942_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20_spec__23(v_init_2940_, v_t_2941_);
return v___x_2942_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20___boxed(lean_object* v_init_2943_, lean_object* v_t_2944_){
_start:
{
lean_object* v_res_2945_; 
v_res_2945_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__20(v_init_2943_, v_t_2944_);
lean_dec(v_t_2944_);
return v_res_2945_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21(lean_object* v_n_2946_, lean_object* v_as_2947_, lean_object* v_lo_2948_, lean_object* v_hi_2949_, lean_object* v_w_2950_, lean_object* v_hlo_2951_, lean_object* v_hhi_2952_){
_start:
{
lean_object* v___x_2953_; 
v___x_2953_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___redArg(v_n_2946_, v_as_2947_, v_lo_2948_, v_hi_2949_);
return v___x_2953_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21___boxed(lean_object* v_n_2954_, lean_object* v_as_2955_, lean_object* v_lo_2956_, lean_object* v_hi_2957_, lean_object* v_w_2958_, lean_object* v_hlo_2959_, lean_object* v_hhi_2960_){
_start:
{
lean_object* v_res_2961_; 
v_res_2961_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21(v_n_2954_, v_as_2955_, v_lo_2956_, v_hi_2957_, v_w_2958_, v_hlo_2959_, v_hhi_2960_);
lean_dec(v_hi_2957_);
lean_dec(v_n_2954_);
return v_res_2961_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22(lean_object* v_init_2962_, lean_object* v_x_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_){
_start:
{
lean_object* v___x_2967_; 
v___x_2967_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___redArg(v_init_2962_, v_x_2963_);
return v___x_2967_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22___boxed(lean_object* v_init_2968_, lean_object* v_x_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_){
_start:
{
lean_object* v_res_2973_; 
v_res_2973_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__22(v_init_2968_, v_x_2969_, v___y_2970_, v___y_2971_);
lean_dec(v___y_2971_);
lean_dec_ref(v___y_2970_);
return v_res_2973_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6(lean_object* v_00_u03b2_2974_, lean_object* v_x_2975_, size_t v_x_2976_, lean_object* v_x_2977_){
_start:
{
lean_object* v___x_2978_; 
v___x_2978_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___redArg(v_x_2975_, v_x_2976_, v_x_2977_);
return v___x_2978_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6___boxed(lean_object* v_00_u03b2_2979_, lean_object* v_x_2980_, lean_object* v_x_2981_, lean_object* v_x_2982_){
_start:
{
size_t v_x_18902__boxed_2983_; lean_object* v_res_2984_; 
v_x_18902__boxed_2983_ = lean_unbox_usize(v_x_2981_);
lean_dec(v_x_2981_);
v_res_2984_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6(v_00_u03b2_2979_, v_x_2980_, v_x_18902__boxed_2983_, v_x_2982_);
lean_dec(v_x_2982_);
lean_dec_ref(v_x_2980_);
return v_res_2984_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11(lean_object* v_as_2985_, lean_object* v_k_2986_, lean_object* v_x_2987_, lean_object* v_x_2988_, lean_object* v_x_2989_){
_start:
{
lean_object* v___x_2990_; 
v___x_2990_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___redArg(v_as_2985_, v_k_2986_, v_x_2987_, v_x_2988_);
return v___x_2990_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11___boxed(lean_object* v_as_2991_, lean_object* v_k_2992_, lean_object* v_x_2993_, lean_object* v_x_2994_, lean_object* v_x_2995_){
_start:
{
lean_object* v_res_2996_; 
v_res_2996_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__9_spec__11(v_as_2991_, v_k_2992_, v_x_2993_, v_x_2994_, v_x_2995_);
lean_dec_ref(v_k_2992_);
lean_dec_ref(v_as_2991_);
return v_res_2996_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25(lean_object* v_n_2997_, lean_object* v_lo_2998_, lean_object* v_hi_2999_, lean_object* v_hhi_3000_, lean_object* v_pivot_3001_, lean_object* v_as_3002_, lean_object* v_i_3003_, lean_object* v_k_3004_, lean_object* v_ilo_3005_, lean_object* v_ik_3006_, lean_object* v_w_3007_){
_start:
{
lean_object* v___x_3008_; 
v___x_3008_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25___redArg(v_hi_2999_, v_pivot_3001_, v_as_3002_, v_i_3003_, v_k_3004_);
return v___x_3008_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25___boxed(lean_object* v_n_3009_, lean_object* v_lo_3010_, lean_object* v_hi_3011_, lean_object* v_hhi_3012_, lean_object* v_pivot_3013_, lean_object* v_as_3014_, lean_object* v_i_3015_, lean_object* v_k_3016_, lean_object* v_ilo_3017_, lean_object* v_ik_3018_, lean_object* v_w_3019_){
_start:
{
lean_object* v_res_3020_; 
v_res_3020_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTagsWithInfo___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__10_spec__21_spec__25(v_n_3009_, v_lo_3010_, v_hi_3011_, v_hhi_3012_, v_pivot_3013_, v_as_3014_, v_i_3015_, v_k_3016_, v_ilo_3017_, v_ik_3018_, v_w_3019_);
lean_dec(v_hi_3011_);
lean_dec(v_lo_3010_);
lean_dec(v_n_3009_);
return v_res_3020_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15(lean_object* v_00_u03b2_3021_, lean_object* v_keys_3022_, lean_object* v_vals_3023_, lean_object* v_heq_3024_, lean_object* v_i_3025_, lean_object* v_k_3026_){
_start:
{
lean_object* v___x_3027_; 
v___x_3027_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___redArg(v_keys_3022_, v_vals_3023_, v_i_3025_, v_k_3026_);
return v___x_3027_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15___boxed(lean_object* v_00_u03b2_3028_, lean_object* v_keys_3029_, lean_object* v_vals_3030_, lean_object* v_heq_3031_, lean_object* v_i_3032_, lean_object* v_k_3033_){
_start:
{
lean_object* v_res_3034_; 
v_res_3034_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4_spec__6_spec__15(v_00_u03b2_3028_, v_keys_3029_, v_vals_3030_, v_heq_3031_, v_i_3032_, v_k_3033_);
lean_dec(v_k_3033_);
lean_dec_ref(v_vals_3030_);
lean_dec_ref(v_keys_3029_);
return v_res_3034_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1(){
_start:
{
lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; 
v___x_3049_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_3050_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__1));
v___x_3051_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3));
v___x_3052_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Doc_elabPrintTacTags___boxed), 4, 0);
v___x_3053_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3049_, v___x_3050_, v___x_3051_, v___x_3052_);
return v___x_3053_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___boxed(lean_object* v_a_3054_){
_start:
{
lean_object* v_res_3055_; 
v_res_3055_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1();
return v_res_3055_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3(){
_start:
{
lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; 
v___x_3058_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3));
v___x_3059_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3___closed__0));
v___x_3060_ = l_Lean_addBuiltinDocString(v___x_3058_, v___x_3059_);
return v___x_3060_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3___boxed(lean_object* v_a_3061_){
_start:
{
lean_object* v_res_3062_; 
v_res_3062_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3();
return v_res_3062_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5(){
_start:
{
lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; 
v___x_3089_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1___closed__3));
v___x_3090_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___closed__6));
v___x_3091_ = l_Lean_addBuiltinDeclarationRanges(v___x_3089_, v___x_3090_);
return v___x_3091_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5___boxed(lean_object* v_a_3092_){
_start:
{
lean_object* v_res_3093_; 
v_res_3093_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5();
return v_res_3093_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs___lam__0(lean_object* v_env_3094_, lean_object* v___x_3095_, lean_object* v_a_3096_, lean_object* v_a_3097_, uint8_t v_includeUnnamed_3098_, lean_object* v_x_3099_, lean_object* v_____s_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_){
_start:
{
lean_object* v_fst_3106_; lean_object* v___x_3108_; uint8_t v_isShared_3109_; uint8_t v_isSharedCheck_3161_; 
v_fst_3106_ = lean_ctor_get(v_x_3099_, 0);
v_isSharedCheck_3161_ = !lean_is_exclusive(v_x_3099_);
if (v_isSharedCheck_3161_ == 0)
{
lean_object* v_unused_3162_; 
v_unused_3162_ = lean_ctor_get(v_x_3099_, 1);
lean_dec(v_unused_3162_);
v___x_3108_ = v_x_3099_;
v_isShared_3109_ = v_isSharedCheck_3161_;
goto v_resetjp_3107_;
}
else
{
lean_inc(v_fst_3106_);
lean_dec(v_x_3099_);
v___x_3108_ = lean_box(0);
v_isShared_3109_ = v_isSharedCheck_3161_;
goto v_resetjp_3107_;
}
v_resetjp_3107_:
{
lean_object* v_userName_3111_; lean_object* v___y_3112_; lean_object* v___x_3146_; 
lean_inc(v_fst_3106_);
lean_inc_ref(v_env_3094_);
v___x_3146_ = l_Lean_Parser_Tactic_Doc_alternativeOfTactic(v_env_3094_, v_fst_3106_);
if (lean_obj_tag(v___x_3146_) == 1)
{
lean_object* v___x_3148_; uint8_t v_isShared_3149_; uint8_t v_isSharedCheck_3154_; 
lean_del_object(v___x_3108_);
lean_dec(v_fst_3106_);
lean_dec(v___x_3095_);
lean_dec_ref(v_env_3094_);
v_isSharedCheck_3154_ = !lean_is_exclusive(v___x_3146_);
if (v_isSharedCheck_3154_ == 0)
{
lean_object* v_unused_3155_; 
v_unused_3155_ = lean_ctor_get(v___x_3146_, 0);
lean_dec(v_unused_3155_);
v___x_3148_ = v___x_3146_;
v_isShared_3149_ = v_isSharedCheck_3154_;
goto v_resetjp_3147_;
}
else
{
lean_dec(v___x_3146_);
v___x_3148_ = lean_box(0);
v_isShared_3149_ = v_isSharedCheck_3154_;
goto v_resetjp_3147_;
}
v_resetjp_3147_:
{
lean_object* v___x_3151_; 
if (v_isShared_3149_ == 0)
{
lean_ctor_set(v___x_3148_, 0, v_____s_3100_);
v___x_3151_ = v___x_3148_;
goto v_reusejp_3150_;
}
else
{
lean_object* v_reuseFailAlloc_3153_; 
v_reuseFailAlloc_3153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3153_, 0, v_____s_3100_);
v___x_3151_ = v_reuseFailAlloc_3153_;
goto v_reusejp_3150_;
}
v_reusejp_3150_:
{
lean_object* v___x_3152_; 
v___x_3152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3152_, 0, v___x_3151_);
return v___x_3152_;
}
}
}
else
{
lean_object* v___x_3156_; 
lean_dec(v___x_3146_);
v___x_3156_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_showParserName___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__6_spec__10___redArg(v_a_3097_, v_fst_3106_);
if (lean_obj_tag(v___x_3156_) == 1)
{
lean_object* v_val_3157_; 
v_val_3157_ = lean_ctor_get(v___x_3156_, 0);
lean_inc(v_val_3157_);
lean_dec_ref_known(v___x_3156_, 1);
v_userName_3111_ = v_val_3157_;
v___y_3112_ = v___y_3103_;
goto v___jp_3110_;
}
else
{
lean_dec(v___x_3156_);
if (v_includeUnnamed_3098_ == 0)
{
lean_object* v___x_3158_; lean_object* v___x_3159_; 
lean_del_object(v___x_3108_);
lean_dec(v_fst_3106_);
lean_dec(v___x_3095_);
lean_dec_ref(v_env_3094_);
v___x_3158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3158_, 0, v_____s_3100_);
v___x_3159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3159_, 0, v___x_3158_);
return v___x_3159_;
}
else
{
lean_object* v___x_3160_; 
lean_inc(v_fst_3106_);
v___x_3160_ = l_Lean_Name_toString(v_fst_3106_, v_includeUnnamed_3098_);
v_userName_3111_ = v___x_3160_;
v___y_3112_ = v___y_3103_;
goto v___jp_3110_;
}
}
}
v___jp_3110_:
{
uint8_t v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; 
v___x_3113_ = 1;
v___x_3114_ = l_Lean_Options_empty;
v___x_3115_ = lean_box(0);
lean_inc(v_fst_3106_);
lean_inc_ref(v_env_3094_);
v___x_3116_ = l_Lean_findDocString_x3f(v_env_3094_, v_fst_3106_, v___x_3113_, v___x_3114_, v___x_3095_, v___x_3115_);
if (lean_obj_tag(v___x_3116_) == 0)
{
lean_object* v_a_3117_; lean_object* v___x_3119_; uint8_t v_isShared_3120_; uint8_t v_isSharedCheck_3130_; 
lean_del_object(v___x_3108_);
v_a_3117_ = lean_ctor_get(v___x_3116_, 0);
v_isSharedCheck_3130_ = !lean_is_exclusive(v___x_3116_);
if (v_isSharedCheck_3130_ == 0)
{
v___x_3119_ = v___x_3116_;
v_isShared_3120_ = v_isSharedCheck_3130_;
goto v_resetjp_3118_;
}
else
{
lean_inc(v_a_3117_);
lean_dec(v___x_3116_);
v___x_3119_ = lean_box(0);
v_isShared_3120_ = v_isSharedCheck_3130_;
goto v_resetjp_3118_;
}
v_resetjp_3118_:
{
lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3128_; 
v___x_3121_ = l_Lean_NameSet_empty;
v___x_3122_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg(v_a_3096_, v_fst_3106_, v___x_3121_);
lean_inc(v_fst_3106_);
v___x_3123_ = l_Lean_Parser_Tactic_Doc_getTacticExtensions(v_env_3094_, v_fst_3106_);
v___x_3124_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3124_, 0, v_fst_3106_);
lean_ctor_set(v___x_3124_, 1, v_userName_3111_);
lean_ctor_set(v___x_3124_, 2, v___x_3122_);
lean_ctor_set(v___x_3124_, 3, v_a_3117_);
lean_ctor_set(v___x_3124_, 4, v___x_3123_);
v___x_3125_ = lean_array_push(v_____s_3100_, v___x_3124_);
v___x_3126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3126_, 0, v___x_3125_);
if (v_isShared_3120_ == 0)
{
lean_ctor_set(v___x_3119_, 0, v___x_3126_);
v___x_3128_ = v___x_3119_;
goto v_reusejp_3127_;
}
else
{
lean_object* v_reuseFailAlloc_3129_; 
v_reuseFailAlloc_3129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3129_, 0, v___x_3126_);
v___x_3128_ = v_reuseFailAlloc_3129_;
goto v_reusejp_3127_;
}
v_reusejp_3127_:
{
return v___x_3128_;
}
}
}
else
{
lean_object* v_a_3131_; lean_object* v___x_3133_; uint8_t v_isShared_3134_; uint8_t v_isSharedCheck_3145_; 
lean_dec_ref(v_userName_3111_);
lean_dec(v_fst_3106_);
lean_dec_ref(v_____s_3100_);
lean_dec_ref(v_env_3094_);
v_a_3131_ = lean_ctor_get(v___x_3116_, 0);
v_isSharedCheck_3145_ = !lean_is_exclusive(v___x_3116_);
if (v_isSharedCheck_3145_ == 0)
{
v___x_3133_ = v___x_3116_;
v_isShared_3134_ = v_isSharedCheck_3145_;
goto v_resetjp_3132_;
}
else
{
lean_inc(v_a_3131_);
lean_dec(v___x_3116_);
v___x_3133_ = lean_box(0);
v_isShared_3134_ = v_isSharedCheck_3145_;
goto v_resetjp_3132_;
}
v_resetjp_3132_:
{
lean_object* v_ref_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3140_; 
v_ref_3135_ = lean_ctor_get(v___y_3112_, 5);
v___x_3136_ = lean_io_error_to_string(v_a_3131_);
v___x_3137_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3137_, 0, v___x_3136_);
v___x_3138_ = l_Lean_MessageData_ofFormat(v___x_3137_);
lean_inc(v_ref_3135_);
if (v_isShared_3109_ == 0)
{
lean_ctor_set(v___x_3108_, 1, v___x_3138_);
lean_ctor_set(v___x_3108_, 0, v_ref_3135_);
v___x_3140_ = v___x_3108_;
goto v_reusejp_3139_;
}
else
{
lean_object* v_reuseFailAlloc_3144_; 
v_reuseFailAlloc_3144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3144_, 0, v_ref_3135_);
lean_ctor_set(v_reuseFailAlloc_3144_, 1, v___x_3138_);
v___x_3140_ = v_reuseFailAlloc_3144_;
goto v_reusejp_3139_;
}
v_reusejp_3139_:
{
lean_object* v___x_3142_; 
if (v_isShared_3134_ == 0)
{
lean_ctor_set(v___x_3133_, 0, v___x_3140_);
v___x_3142_ = v___x_3133_;
goto v_reusejp_3141_;
}
else
{
lean_object* v_reuseFailAlloc_3143_; 
v_reuseFailAlloc_3143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3143_, 0, v___x_3140_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs___lam__0___boxed(lean_object* v_env_3163_, lean_object* v___x_3164_, lean_object* v_a_3165_, lean_object* v_a_3166_, lean_object* v_includeUnnamed_3167_, lean_object* v_x_3168_, lean_object* v_____s_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_, lean_object* v___y_3173_, lean_object* v___y_3174_){
_start:
{
uint8_t v_includeUnnamed_boxed_3175_; lean_object* v_res_3176_; 
v_includeUnnamed_boxed_3175_ = lean_unbox(v_includeUnnamed_3167_);
v_res_3176_ = l_Lean_Elab_Tactic_Doc_allTacticDocs___lam__0(v_env_3163_, v___x_3164_, v_a_3165_, v_a_3166_, v_includeUnnamed_boxed_3175_, v_x_3168_, v_____s_3169_, v___y_3170_, v___y_3171_, v___y_3172_, v___y_3173_);
lean_dec(v___y_3173_);
lean_dec_ref(v___y_3172_);
lean_dec(v___y_3171_);
lean_dec_ref(v___y_3170_);
lean_dec(v_a_3166_);
lean_dec(v_a_3165_);
return v_res_3176_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___redArg(lean_object* v_as_3177_, size_t v_sz_3178_, size_t v_i_3179_, lean_object* v_b_3180_){
_start:
{
uint8_t v___x_3182_; 
v___x_3182_ = lean_usize_dec_lt(v_i_3179_, v_sz_3178_);
if (v___x_3182_ == 0)
{
lean_object* v___x_3183_; 
v___x_3183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3183_, 0, v_b_3180_);
return v___x_3183_;
}
else
{
lean_object* v_a_3184_; lean_object* v_fst_3185_; lean_object* v_snd_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; size_t v___x_3191_; size_t v___x_3192_; 
v_a_3184_ = lean_array_uget_borrowed(v_as_3177_, v_i_3179_);
v_fst_3185_ = lean_ctor_get(v_a_3184_, 0);
v_snd_3186_ = lean_ctor_get(v_a_3184_, 1);
v___x_3187_ = l_Lean_NameSet_empty;
v___x_3188_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__0___redArg(v_b_3180_, v_fst_3185_, v___x_3187_);
lean_inc(v_snd_3186_);
v___x_3189_ = l_Lean_NameSet_insert(v___x_3188_, v_snd_3186_);
lean_inc(v_fst_3185_);
v___x_3190_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_3185_, v___x_3189_, v_b_3180_);
v___x_3191_ = ((size_t)1ULL);
v___x_3192_ = lean_usize_add(v_i_3179_, v___x_3191_);
v_i_3179_ = v___x_3192_;
v_b_3180_ = v___x_3190_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___redArg___boxed(lean_object* v_as_3194_, lean_object* v_sz_3195_, lean_object* v_i_3196_, lean_object* v_b_3197_, lean_object* v___y_3198_){
_start:
{
size_t v_sz_boxed_3199_; size_t v_i_boxed_3200_; lean_object* v_res_3201_; 
v_sz_boxed_3199_ = lean_unbox_usize(v_sz_3195_);
lean_dec(v_sz_3195_);
v_i_boxed_3200_ = lean_unbox_usize(v_i_3196_);
lean_dec(v_i_3196_);
v_res_3201_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___redArg(v_as_3194_, v_sz_boxed_3199_, v_i_boxed_3200_, v_b_3197_);
lean_dec_ref(v_as_3194_);
return v_res_3201_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__1(lean_object* v_as_3202_, size_t v_sz_3203_, size_t v_i_3204_, lean_object* v_b_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_){
_start:
{
uint8_t v___x_3211_; 
v___x_3211_ = lean_usize_dec_lt(v_i_3204_, v_sz_3203_);
if (v___x_3211_ == 0)
{
lean_object* v___x_3212_; 
v___x_3212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3212_, 0, v_b_3205_);
return v___x_3212_;
}
else
{
lean_object* v_a_3213_; size_t v_sz_3214_; size_t v___x_3215_; lean_object* v___x_3216_; 
v_a_3213_ = lean_array_uget_borrowed(v_as_3202_, v_i_3204_);
v_sz_3214_ = lean_array_size(v_a_3213_);
v___x_3215_ = ((size_t)0ULL);
v___x_3216_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___redArg(v_a_3213_, v_sz_3214_, v___x_3215_, v_b_3205_);
if (lean_obj_tag(v___x_3216_) == 0)
{
lean_object* v_a_3217_; size_t v___x_3218_; size_t v___x_3219_; 
v_a_3217_ = lean_ctor_get(v___x_3216_, 0);
lean_inc(v_a_3217_);
lean_dec_ref_known(v___x_3216_, 1);
v___x_3218_ = ((size_t)1ULL);
v___x_3219_ = lean_usize_add(v_i_3204_, v___x_3218_);
v_i_3204_ = v___x_3219_;
v_b_3205_ = v_a_3217_;
goto _start;
}
else
{
return v___x_3216_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__1___boxed(lean_object* v_as_3221_, lean_object* v_sz_3222_, lean_object* v_i_3223_, lean_object* v_b_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_){
_start:
{
size_t v_sz_boxed_3230_; size_t v_i_boxed_3231_; lean_object* v_res_3232_; 
v_sz_boxed_3230_ = lean_unbox_usize(v_sz_3222_);
lean_dec(v_sz_3222_);
v_i_boxed_3231_ = lean_unbox_usize(v_i_3223_);
lean_dec(v_i_3223_);
v_res_3232_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__1(v_as_3221_, v_sz_boxed_3230_, v_i_boxed_3231_, v_b_3224_, v___y_3225_, v___y_3226_, v___y_3227_, v___y_3228_);
lean_dec(v___y_3228_);
lean_dec_ref(v___y_3227_);
lean_dec(v___y_3226_);
lean_dec_ref(v___y_3225_);
lean_dec_ref(v_as_3221_);
return v_res_3232_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___redArg(lean_object* v_f_3233_, lean_object* v_keys_3234_, lean_object* v_vals_3235_, lean_object* v_i_3236_, lean_object* v_acc_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_){
_start:
{
lean_object* v___x_3243_; uint8_t v___x_3244_; 
v___x_3243_ = lean_array_get_size(v_keys_3234_);
v___x_3244_ = lean_nat_dec_lt(v_i_3236_, v___x_3243_);
if (v___x_3244_ == 0)
{
lean_object* v___x_3245_; lean_object* v___x_3246_; 
lean_dec(v_i_3236_);
lean_dec_ref(v_f_3233_);
v___x_3245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3245_, 0, v_acc_3237_);
v___x_3246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3246_, 0, v___x_3245_);
return v___x_3246_;
}
else
{
lean_object* v_k_3247_; lean_object* v_v_3248_; lean_object* v___x_3249_; 
v_k_3247_ = lean_array_fget_borrowed(v_keys_3234_, v_i_3236_);
v_v_3248_ = lean_array_fget_borrowed(v_vals_3235_, v_i_3236_);
lean_inc_ref(v_f_3233_);
lean_inc(v___y_3241_);
lean_inc_ref(v___y_3240_);
lean_inc(v___y_3239_);
lean_inc_ref(v___y_3238_);
lean_inc(v_v_3248_);
lean_inc(v_k_3247_);
v___x_3249_ = lean_apply_8(v_f_3233_, v_acc_3237_, v_k_3247_, v_v_3248_, v___y_3238_, v___y_3239_, v___y_3240_, v___y_3241_, lean_box(0));
if (lean_obj_tag(v___x_3249_) == 0)
{
lean_object* v_a_3250_; 
v_a_3250_ = lean_ctor_get(v___x_3249_, 0);
lean_inc(v_a_3250_);
if (lean_obj_tag(v_a_3250_) == 0)
{
lean_dec_ref_known(v_a_3250_, 1);
lean_dec(v_i_3236_);
lean_dec_ref(v_f_3233_);
return v___x_3249_;
}
else
{
lean_object* v_a_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; 
lean_dec_ref_known(v___x_3249_, 1);
v_a_3251_ = lean_ctor_get(v_a_3250_, 0);
lean_inc(v_a_3251_);
lean_dec_ref_known(v_a_3250_, 1);
v___x_3252_ = lean_unsigned_to_nat(1u);
v___x_3253_ = lean_nat_add(v_i_3236_, v___x_3252_);
lean_dec(v_i_3236_);
v_i_3236_ = v___x_3253_;
v_acc_3237_ = v_a_3251_;
goto _start;
}
}
else
{
lean_dec(v_i_3236_);
lean_dec_ref(v_f_3233_);
return v___x_3249_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___redArg___boxed(lean_object* v_f_3255_, lean_object* v_keys_3256_, lean_object* v_vals_3257_, lean_object* v_i_3258_, lean_object* v_acc_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_){
_start:
{
lean_object* v_res_3265_; 
v_res_3265_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___redArg(v_f_3255_, v_keys_3256_, v_vals_3257_, v_i_3258_, v_acc_3259_, v___y_3260_, v___y_3261_, v___y_3262_, v___y_3263_);
lean_dec(v___y_3263_);
lean_dec_ref(v___y_3262_);
lean_dec(v___y_3261_);
lean_dec_ref(v___y_3260_);
lean_dec_ref(v_vals_3257_);
lean_dec_ref(v_keys_3256_);
return v_res_3265_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg(lean_object* v_f_3266_, lean_object* v_x_3267_, lean_object* v_x_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_){
_start:
{
if (lean_obj_tag(v_x_3267_) == 0)
{
lean_object* v_es_3274_; lean_object* v___x_3276_; uint8_t v_isShared_3277_; uint8_t v_isSharedCheck_3296_; 
v_es_3274_ = lean_ctor_get(v_x_3267_, 0);
v_isSharedCheck_3296_ = !lean_is_exclusive(v_x_3267_);
if (v_isSharedCheck_3296_ == 0)
{
v___x_3276_ = v_x_3267_;
v_isShared_3277_ = v_isSharedCheck_3296_;
goto v_resetjp_3275_;
}
else
{
lean_inc(v_es_3274_);
lean_dec(v_x_3267_);
v___x_3276_ = lean_box(0);
v_isShared_3277_ = v_isSharedCheck_3296_;
goto v_resetjp_3275_;
}
v_resetjp_3275_:
{
lean_object* v___x_3278_; lean_object* v___x_3279_; uint8_t v___x_3280_; 
v___x_3278_ = lean_unsigned_to_nat(0u);
v___x_3279_ = lean_array_get_size(v_es_3274_);
v___x_3280_ = lean_nat_dec_lt(v___x_3278_, v___x_3279_);
if (v___x_3280_ == 0)
{
lean_object* v___x_3282_; 
lean_dec_ref(v_es_3274_);
lean_dec_ref(v_f_3266_);
if (v_isShared_3277_ == 0)
{
lean_ctor_set_tag(v___x_3276_, 1);
lean_ctor_set(v___x_3276_, 0, v_x_3268_);
v___x_3282_ = v___x_3276_;
goto v_reusejp_3281_;
}
else
{
lean_object* v_reuseFailAlloc_3284_; 
v_reuseFailAlloc_3284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3284_, 0, v_x_3268_);
v___x_3282_ = v_reuseFailAlloc_3284_;
goto v_reusejp_3281_;
}
v_reusejp_3281_:
{
lean_object* v___x_3283_; 
v___x_3283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3283_, 0, v___x_3282_);
return v___x_3283_;
}
}
else
{
uint8_t v___x_3285_; 
v___x_3285_ = lean_nat_dec_le(v___x_3279_, v___x_3279_);
if (v___x_3285_ == 0)
{
if (v___x_3280_ == 0)
{
lean_object* v___x_3287_; 
lean_dec_ref(v_es_3274_);
lean_dec_ref(v_f_3266_);
if (v_isShared_3277_ == 0)
{
lean_ctor_set_tag(v___x_3276_, 1);
lean_ctor_set(v___x_3276_, 0, v_x_3268_);
v___x_3287_ = v___x_3276_;
goto v_reusejp_3286_;
}
else
{
lean_object* v_reuseFailAlloc_3289_; 
v_reuseFailAlloc_3289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3289_, 0, v_x_3268_);
v___x_3287_ = v_reuseFailAlloc_3289_;
goto v_reusejp_3286_;
}
v_reusejp_3286_:
{
lean_object* v___x_3288_; 
v___x_3288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3288_, 0, v___x_3287_);
return v___x_3288_;
}
}
else
{
size_t v___x_3290_; size_t v___x_3291_; lean_object* v___x_3292_; 
lean_del_object(v___x_3276_);
v___x_3290_ = ((size_t)0ULL);
v___x_3291_ = lean_usize_of_nat(v___x_3279_);
v___x_3292_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___redArg(v_f_3266_, v_es_3274_, v___x_3290_, v___x_3291_, v_x_3268_, v___y_3269_, v___y_3270_, v___y_3271_, v___y_3272_);
lean_dec_ref(v_es_3274_);
return v___x_3292_;
}
}
else
{
size_t v___x_3293_; size_t v___x_3294_; lean_object* v___x_3295_; 
lean_del_object(v___x_3276_);
v___x_3293_ = ((size_t)0ULL);
v___x_3294_ = lean_usize_of_nat(v___x_3279_);
v___x_3295_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___redArg(v_f_3266_, v_es_3274_, v___x_3293_, v___x_3294_, v_x_3268_, v___y_3269_, v___y_3270_, v___y_3271_, v___y_3272_);
lean_dec_ref(v_es_3274_);
return v___x_3295_;
}
}
}
}
else
{
lean_object* v_ks_3297_; lean_object* v_vs_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; 
v_ks_3297_ = lean_ctor_get(v_x_3267_, 0);
lean_inc_ref(v_ks_3297_);
v_vs_3298_ = lean_ctor_get(v_x_3267_, 1);
lean_inc_ref(v_vs_3298_);
lean_dec_ref_known(v_x_3267_, 2);
v___x_3299_ = lean_unsigned_to_nat(0u);
v___x_3300_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___redArg(v_f_3266_, v_ks_3297_, v_vs_3298_, v___x_3299_, v_x_3268_, v___y_3269_, v___y_3270_, v___y_3271_, v___y_3272_);
lean_dec_ref(v_vs_3298_);
lean_dec_ref(v_ks_3297_);
return v___x_3300_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___redArg(lean_object* v_f_3301_, lean_object* v_as_3302_, size_t v_i_3303_, size_t v_stop_3304_, lean_object* v_b_3305_, lean_object* v___y_3306_, lean_object* v___y_3307_, lean_object* v___y_3308_, lean_object* v___y_3309_){
_start:
{
lean_object* v_a_3312_; lean_object* v___y_3317_; uint8_t v___x_3320_; 
v___x_3320_ = lean_usize_dec_eq(v_i_3303_, v_stop_3304_);
if (v___x_3320_ == 0)
{
lean_object* v___x_3321_; 
v___x_3321_ = lean_array_uget_borrowed(v_as_3302_, v_i_3303_);
switch(lean_obj_tag(v___x_3321_))
{
case 0:
{
lean_object* v_key_3322_; lean_object* v_val_3323_; lean_object* v___x_3324_; 
v_key_3322_ = lean_ctor_get(v___x_3321_, 0);
v_val_3323_ = lean_ctor_get(v___x_3321_, 1);
lean_inc_ref(v_f_3301_);
lean_inc(v___y_3309_);
lean_inc_ref(v___y_3308_);
lean_inc(v___y_3307_);
lean_inc_ref(v___y_3306_);
lean_inc(v_val_3323_);
lean_inc(v_key_3322_);
v___x_3324_ = lean_apply_8(v_f_3301_, v_b_3305_, v_key_3322_, v_val_3323_, v___y_3306_, v___y_3307_, v___y_3308_, v___y_3309_, lean_box(0));
v___y_3317_ = v___x_3324_;
goto v___jp_3316_;
}
case 1:
{
lean_object* v_node_3325_; lean_object* v___x_3326_; 
v_node_3325_ = lean_ctor_get(v___x_3321_, 0);
lean_inc(v_node_3325_);
lean_inc_ref(v_f_3301_);
v___x_3326_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg(v_f_3301_, v_node_3325_, v_b_3305_, v___y_3306_, v___y_3307_, v___y_3308_, v___y_3309_);
v___y_3317_ = v___x_3326_;
goto v___jp_3316_;
}
default: 
{
v_a_3312_ = v_b_3305_;
goto v___jp_3311_;
}
}
}
else
{
lean_object* v___x_3327_; lean_object* v___x_3328_; 
lean_dec_ref(v_f_3301_);
v___x_3327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3327_, 0, v_b_3305_);
v___x_3328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3328_, 0, v___x_3327_);
return v___x_3328_;
}
v___jp_3311_:
{
size_t v___x_3313_; size_t v___x_3314_; 
v___x_3313_ = ((size_t)1ULL);
v___x_3314_ = lean_usize_add(v_i_3303_, v___x_3313_);
v_i_3303_ = v___x_3314_;
v_b_3305_ = v_a_3312_;
goto _start;
}
v___jp_3316_:
{
if (lean_obj_tag(v___y_3317_) == 0)
{
lean_object* v_a_3318_; 
v_a_3318_ = lean_ctor_get(v___y_3317_, 0);
if (lean_obj_tag(v_a_3318_) == 0)
{
lean_dec_ref(v_f_3301_);
return v___y_3317_;
}
else
{
lean_object* v_a_3319_; 
lean_inc_ref(v_a_3318_);
lean_dec_ref_known(v___y_3317_, 1);
v_a_3319_ = lean_ctor_get(v_a_3318_, 0);
lean_inc(v_a_3319_);
lean_dec_ref_known(v_a_3318_, 1);
v_a_3312_ = v_a_3319_;
goto v___jp_3311_;
}
}
else
{
lean_dec_ref(v_f_3301_);
return v___y_3317_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___redArg___boxed(lean_object* v_f_3329_, lean_object* v_as_3330_, lean_object* v_i_3331_, lean_object* v_stop_3332_, lean_object* v_b_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_){
_start:
{
size_t v_i_boxed_3339_; size_t v_stop_boxed_3340_; lean_object* v_res_3341_; 
v_i_boxed_3339_ = lean_unbox_usize(v_i_3331_);
lean_dec(v_i_3331_);
v_stop_boxed_3340_ = lean_unbox_usize(v_stop_3332_);
lean_dec(v_stop_3332_);
v_res_3341_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___redArg(v_f_3329_, v_as_3330_, v_i_boxed_3339_, v_stop_boxed_3340_, v_b_3333_, v___y_3334_, v___y_3335_, v___y_3336_, v___y_3337_);
lean_dec(v___y_3337_);
lean_dec_ref(v___y_3336_);
lean_dec(v___y_3335_);
lean_dec_ref(v___y_3334_);
lean_dec_ref(v_as_3330_);
return v_res_3341_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg___boxed(lean_object* v_f_3342_, lean_object* v_x_3343_, lean_object* v_x_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_, lean_object* v___y_3348_, lean_object* v___y_3349_){
_start:
{
lean_object* v_res_3350_; 
v_res_3350_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg(v_f_3342_, v_x_3343_, v_x_3344_, v___y_3345_, v___y_3346_, v___y_3347_, v___y_3348_);
lean_dec(v___y_3348_);
lean_dec_ref(v___y_3347_);
lean_dec(v___y_3346_);
lean_dec_ref(v___y_3345_);
return v_res_3350_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg___lam__0(lean_object* v_f_3351_, lean_object* v_s_3352_, lean_object* v_a_3353_, lean_object* v_b_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_){
_start:
{
lean_object* v___x_3360_; lean_object* v___x_3361_; 
v___x_3360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3360_, 0, v_a_3353_);
lean_ctor_set(v___x_3360_, 1, v_b_3354_);
lean_inc(v___y_3358_);
lean_inc_ref(v___y_3357_);
lean_inc(v___y_3356_);
lean_inc_ref(v___y_3355_);
v___x_3361_ = lean_apply_7(v_f_3351_, v___x_3360_, v_s_3352_, v___y_3355_, v___y_3356_, v___y_3357_, v___y_3358_, lean_box(0));
if (lean_obj_tag(v___x_3361_) == 0)
{
lean_object* v_a_3362_; lean_object* v___x_3364_; uint8_t v_isShared_3365_; uint8_t v_isSharedCheck_3388_; 
v_a_3362_ = lean_ctor_get(v___x_3361_, 0);
v_isSharedCheck_3388_ = !lean_is_exclusive(v___x_3361_);
if (v_isSharedCheck_3388_ == 0)
{
v___x_3364_ = v___x_3361_;
v_isShared_3365_ = v_isSharedCheck_3388_;
goto v_resetjp_3363_;
}
else
{
lean_inc(v_a_3362_);
lean_dec(v___x_3361_);
v___x_3364_ = lean_box(0);
v_isShared_3365_ = v_isSharedCheck_3388_;
goto v_resetjp_3363_;
}
v_resetjp_3363_:
{
if (lean_obj_tag(v_a_3362_) == 0)
{
lean_object* v_a_3366_; lean_object* v___x_3368_; uint8_t v_isShared_3369_; uint8_t v_isSharedCheck_3376_; 
v_a_3366_ = lean_ctor_get(v_a_3362_, 0);
v_isSharedCheck_3376_ = !lean_is_exclusive(v_a_3362_);
if (v_isSharedCheck_3376_ == 0)
{
v___x_3368_ = v_a_3362_;
v_isShared_3369_ = v_isSharedCheck_3376_;
goto v_resetjp_3367_;
}
else
{
lean_inc(v_a_3366_);
lean_dec(v_a_3362_);
v___x_3368_ = lean_box(0);
v_isShared_3369_ = v_isSharedCheck_3376_;
goto v_resetjp_3367_;
}
v_resetjp_3367_:
{
lean_object* v___x_3371_; 
if (v_isShared_3369_ == 0)
{
v___x_3371_ = v___x_3368_;
goto v_reusejp_3370_;
}
else
{
lean_object* v_reuseFailAlloc_3375_; 
v_reuseFailAlloc_3375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3375_, 0, v_a_3366_);
v___x_3371_ = v_reuseFailAlloc_3375_;
goto v_reusejp_3370_;
}
v_reusejp_3370_:
{
lean_object* v___x_3373_; 
if (v_isShared_3365_ == 0)
{
lean_ctor_set(v___x_3364_, 0, v___x_3371_);
v___x_3373_ = v___x_3364_;
goto v_reusejp_3372_;
}
else
{
lean_object* v_reuseFailAlloc_3374_; 
v_reuseFailAlloc_3374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3374_, 0, v___x_3371_);
v___x_3373_ = v_reuseFailAlloc_3374_;
goto v_reusejp_3372_;
}
v_reusejp_3372_:
{
return v___x_3373_;
}
}
}
}
else
{
lean_object* v_a_3377_; lean_object* v___x_3379_; uint8_t v_isShared_3380_; uint8_t v_isSharedCheck_3387_; 
v_a_3377_ = lean_ctor_get(v_a_3362_, 0);
v_isSharedCheck_3387_ = !lean_is_exclusive(v_a_3362_);
if (v_isSharedCheck_3387_ == 0)
{
v___x_3379_ = v_a_3362_;
v_isShared_3380_ = v_isSharedCheck_3387_;
goto v_resetjp_3378_;
}
else
{
lean_inc(v_a_3377_);
lean_dec(v_a_3362_);
v___x_3379_ = lean_box(0);
v_isShared_3380_ = v_isSharedCheck_3387_;
goto v_resetjp_3378_;
}
v_resetjp_3378_:
{
lean_object* v___x_3382_; 
if (v_isShared_3380_ == 0)
{
v___x_3382_ = v___x_3379_;
goto v_reusejp_3381_;
}
else
{
lean_object* v_reuseFailAlloc_3386_; 
v_reuseFailAlloc_3386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3386_, 0, v_a_3377_);
v___x_3382_ = v_reuseFailAlloc_3386_;
goto v_reusejp_3381_;
}
v_reusejp_3381_:
{
lean_object* v___x_3384_; 
if (v_isShared_3365_ == 0)
{
lean_ctor_set(v___x_3364_, 0, v___x_3382_);
v___x_3384_ = v___x_3364_;
goto v_reusejp_3383_;
}
else
{
lean_object* v_reuseFailAlloc_3385_; 
v_reuseFailAlloc_3385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3385_, 0, v___x_3382_);
v___x_3384_ = v_reuseFailAlloc_3385_;
goto v_reusejp_3383_;
}
v_reusejp_3383_:
{
return v___x_3384_;
}
}
}
}
}
}
else
{
lean_object* v_a_3389_; lean_object* v___x_3391_; uint8_t v_isShared_3392_; uint8_t v_isSharedCheck_3396_; 
v_a_3389_ = lean_ctor_get(v___x_3361_, 0);
v_isSharedCheck_3396_ = !lean_is_exclusive(v___x_3361_);
if (v_isSharedCheck_3396_ == 0)
{
v___x_3391_ = v___x_3361_;
v_isShared_3392_ = v_isSharedCheck_3396_;
goto v_resetjp_3390_;
}
else
{
lean_inc(v_a_3389_);
lean_dec(v___x_3361_);
v___x_3391_ = lean_box(0);
v_isShared_3392_ = v_isSharedCheck_3396_;
goto v_resetjp_3390_;
}
v_resetjp_3390_:
{
lean_object* v___x_3394_; 
if (v_isShared_3392_ == 0)
{
v___x_3394_ = v___x_3391_;
goto v_reusejp_3393_;
}
else
{
lean_object* v_reuseFailAlloc_3395_; 
v_reuseFailAlloc_3395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3395_, 0, v_a_3389_);
v___x_3394_ = v_reuseFailAlloc_3395_;
goto v_reusejp_3393_;
}
v_reusejp_3393_:
{
return v___x_3394_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg___lam__0___boxed(lean_object* v_f_3397_, lean_object* v_s_3398_, lean_object* v_a_3399_, lean_object* v_b_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_){
_start:
{
lean_object* v_res_3406_; 
v_res_3406_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg___lam__0(v_f_3397_, v_s_3398_, v_a_3399_, v_b_3400_, v___y_3401_, v___y_3402_, v___y_3403_, v___y_3404_);
lean_dec(v___y_3404_);
lean_dec_ref(v___y_3403_);
lean_dec(v___y_3402_);
lean_dec_ref(v___y_3401_);
return v_res_3406_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg(lean_object* v_map_3407_, lean_object* v_init_3408_, lean_object* v_f_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_){
_start:
{
lean_object* v___f_3415_; lean_object* v___x_3416_; 
v___f_3415_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg___lam__0___boxed), 9, 1);
lean_closure_set(v___f_3415_, 0, v_f_3409_);
lean_inc_ref(v_map_3407_);
v___x_3416_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg(v___f_3415_, v_map_3407_, v_init_3408_, v___y_3410_, v___y_3411_, v___y_3412_, v___y_3413_);
if (lean_obj_tag(v___x_3416_) == 0)
{
lean_object* v_a_3417_; lean_object* v___x_3419_; uint8_t v_isShared_3420_; uint8_t v_isSharedCheck_3425_; 
v_a_3417_ = lean_ctor_get(v___x_3416_, 0);
v_isSharedCheck_3425_ = !lean_is_exclusive(v___x_3416_);
if (v_isSharedCheck_3425_ == 0)
{
v___x_3419_ = v___x_3416_;
v_isShared_3420_ = v_isSharedCheck_3425_;
goto v_resetjp_3418_;
}
else
{
lean_inc(v_a_3417_);
lean_dec(v___x_3416_);
v___x_3419_ = lean_box(0);
v_isShared_3420_ = v_isSharedCheck_3425_;
goto v_resetjp_3418_;
}
v_resetjp_3418_:
{
lean_object* v_a_3421_; lean_object* v___x_3423_; 
v_a_3421_ = lean_ctor_get(v_a_3417_, 0);
lean_inc(v_a_3421_);
lean_dec(v_a_3417_);
if (v_isShared_3420_ == 0)
{
lean_ctor_set(v___x_3419_, 0, v_a_3421_);
v___x_3423_ = v___x_3419_;
goto v_reusejp_3422_;
}
else
{
lean_object* v_reuseFailAlloc_3424_; 
v_reuseFailAlloc_3424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3424_, 0, v_a_3421_);
v___x_3423_ = v_reuseFailAlloc_3424_;
goto v_reusejp_3422_;
}
v_reusejp_3422_:
{
return v___x_3423_;
}
}
}
else
{
lean_object* v_a_3426_; lean_object* v___x_3428_; uint8_t v_isShared_3429_; uint8_t v_isSharedCheck_3433_; 
v_a_3426_ = lean_ctor_get(v___x_3416_, 0);
v_isSharedCheck_3433_ = !lean_is_exclusive(v___x_3416_);
if (v_isSharedCheck_3433_ == 0)
{
v___x_3428_ = v___x_3416_;
v_isShared_3429_ = v_isSharedCheck_3433_;
goto v_resetjp_3427_;
}
else
{
lean_inc(v_a_3426_);
lean_dec(v___x_3416_);
v___x_3428_ = lean_box(0);
v_isShared_3429_ = v_isSharedCheck_3433_;
goto v_resetjp_3427_;
}
v_resetjp_3427_:
{
lean_object* v___x_3431_; 
if (v_isShared_3429_ == 0)
{
v___x_3431_ = v___x_3428_;
goto v_reusejp_3430_;
}
else
{
lean_object* v_reuseFailAlloc_3432_; 
v_reuseFailAlloc_3432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3432_, 0, v_a_3426_);
v___x_3431_ = v_reuseFailAlloc_3432_;
goto v_reusejp_3430_;
}
v_reusejp_3430_:
{
return v___x_3431_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg___boxed(lean_object* v_map_3434_, lean_object* v_init_3435_, lean_object* v_f_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_){
_start:
{
lean_object* v_res_3442_; 
v_res_3442_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg(v_map_3434_, v_init_3435_, v_f_3436_, v___y_3437_, v___y_3438_, v___y_3439_, v___y_3440_);
lean_dec(v___y_3440_);
lean_dec_ref(v___y_3439_);
lean_dec(v___y_3438_);
lean_dec_ref(v___y_3437_);
lean_dec_ref(v_map_3434_);
return v_res_3442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___redArg(lean_object* v___y_3443_){
_start:
{
lean_object* v___x_3445_; lean_object* v_env_3446_; lean_object* v___x_3447_; lean_object* v_ext_3448_; lean_object* v_toEnvExtension_3449_; lean_object* v_asyncMode_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v_categories_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; 
v___x_3445_ = lean_st_ref_get(v___y_3443_);
v_env_3446_ = lean_ctor_get(v___x_3445_, 0);
lean_inc_ref_n(v_env_3446_, 2);
lean_dec(v___x_3445_);
v___x_3447_ = l_Lean_Parser_parserExtension;
v_ext_3448_ = lean_ctor_get(v___x_3447_, 1);
v_toEnvExtension_3449_ = lean_ctor_get(v_ext_3448_, 0);
v_asyncMode_3450_ = lean_ctor_get(v_toEnvExtension_3449_, 2);
v___x_3451_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
v___x_3452_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_3451_, v___x_3447_, v_env_3446_, v_asyncMode_3450_);
v_categories_3453_ = lean_ctor_get(v___x_3452_, 2);
lean_inc_ref(v_categories_3453_);
lean_dec(v___x_3452_);
v___x_3454_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__1));
v___x_3455_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg(v_categories_3453_, v___x_3454_);
lean_dec_ref(v_categories_3453_);
if (lean_obj_tag(v___x_3455_) == 1)
{
lean_object* v_val_3456_; lean_object* v___x_3458_; uint8_t v_isShared_3459_; uint8_t v_isSharedCheck_3493_; 
v_val_3456_ = lean_ctor_get(v___x_3455_, 0);
v_isSharedCheck_3493_ = !lean_is_exclusive(v___x_3455_);
if (v_isSharedCheck_3493_ == 0)
{
v___x_3458_ = v___x_3455_;
v_isShared_3459_ = v_isSharedCheck_3493_;
goto v_resetjp_3457_;
}
else
{
lean_inc(v_val_3456_);
lean_dec(v___x_3455_);
v___x_3458_ = lean_box(0);
v_isShared_3459_ = v_isSharedCheck_3493_;
goto v_resetjp_3457_;
}
v_resetjp_3457_:
{
lean_object* v___y_3461_; lean_object* v___x_3470_; lean_object* v_toEnvExtension_3471_; lean_object* v_exportEntriesFn_3472_; lean_object* v_asyncMode_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v_importedEntries_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v_exported_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; uint8_t v___x_3485_; 
v___x_3470_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v_toEnvExtension_3471_ = lean_ctor_get(v___x_3470_, 0);
v_exportEntriesFn_3472_ = lean_ctor_get(v___x_3470_, 4);
v_asyncMode_3473_ = lean_ctor_get(v_toEnvExtension_3471_, 2);
v___x_3474_ = lean_box(1);
v___x_3475_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2, &l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___closed__2);
v___x_3476_ = lean_box(0);
lean_inc_ref_n(v_env_3446_, 2);
v___x_3477_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_3475_, v_toEnvExtension_3471_, v_env_3446_, v_asyncMode_3473_, v___x_3476_);
v_importedEntries_3478_ = lean_ctor_get(v___x_3477_, 0);
lean_inc_ref(v_importedEntries_3478_);
lean_dec(v___x_3477_);
v___x_3479_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3474_, v___x_3470_, v_env_3446_, v_asyncMode_3473_, v___x_3476_);
lean_inc_ref(v_exportEntriesFn_3472_);
v___x_3480_ = lean_apply_2(v_exportEntriesFn_3472_, v_env_3446_, v___x_3479_);
v_exported_3481_ = lean_ctor_get(v___x_3480_, 0);
lean_inc(v_exported_3481_);
lean_dec_ref(v___x_3480_);
v___x_3482_ = lean_array_push(v_importedEntries_3478_, v_exported_3481_);
v___x_3483_ = lean_unsigned_to_nat(0u);
v___x_3484_ = lean_array_get_size(v___x_3482_);
v___x_3485_ = lean_nat_dec_lt(v___x_3483_, v___x_3484_);
if (v___x_3485_ == 0)
{
lean_dec_ref(v___x_3482_);
v___y_3461_ = v___x_3474_;
goto v___jp_3460_;
}
else
{
uint8_t v___x_3486_; 
v___x_3486_ = lean_nat_dec_le(v___x_3484_, v___x_3484_);
if (v___x_3486_ == 0)
{
if (v___x_3485_ == 0)
{
lean_dec_ref(v___x_3482_);
v___y_3461_ = v___x_3474_;
goto v___jp_3460_;
}
else
{
size_t v___x_3487_; size_t v___x_3488_; lean_object* v___x_3489_; 
v___x_3487_ = ((size_t)0ULL);
v___x_3488_ = lean_usize_of_nat(v___x_3484_);
v___x_3489_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__5(v___x_3482_, v___x_3487_, v___x_3488_, v___x_3474_);
lean_dec_ref(v___x_3482_);
v___y_3461_ = v___x_3489_;
goto v___jp_3460_;
}
}
else
{
size_t v___x_3490_; size_t v___x_3491_; lean_object* v___x_3492_; 
v___x_3490_ = ((size_t)0ULL);
v___x_3491_ = lean_usize_of_nat(v___x_3484_);
v___x_3492_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__5(v___x_3482_, v___x_3490_, v___x_3491_, v___x_3474_);
lean_dec_ref(v___x_3482_);
v___y_3461_ = v___x_3492_;
goto v___jp_3460_;
}
}
v___jp_3460_:
{
lean_object* v_tables_3462_; lean_object* v_leadingTable_3463_; lean_object* v_trailingTable_3464_; lean_object* v_firstTokens_3465_; lean_object* v_firstTokens_3466_; lean_object* v___x_3468_; 
v_tables_3462_ = lean_ctor_get(v_val_3456_, 2);
v_leadingTable_3463_ = lean_ctor_get(v_tables_3462_, 0);
v_trailingTable_3464_ = lean_ctor_get(v_tables_3462_, 2);
lean_inc(v_trailingTable_3464_);
lean_inc(v_leadingTable_3463_);
lean_inc(v_val_3456_);
v_firstTokens_3465_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens(v_val_3456_, v_leadingTable_3463_, v___y_3461_);
v_firstTokens_3466_ = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_firstTacticTokens_addFirstTokens(v_val_3456_, v_trailingTable_3464_, v_firstTokens_3465_);
if (v_isShared_3459_ == 0)
{
lean_ctor_set_tag(v___x_3458_, 0);
lean_ctor_set(v___x_3458_, 0, v_firstTokens_3466_);
v___x_3468_ = v___x_3458_;
goto v_reusejp_3467_;
}
else
{
lean_object* v_reuseFailAlloc_3469_; 
v_reuseFailAlloc_3469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3469_, 0, v_firstTokens_3466_);
v___x_3468_ = v_reuseFailAlloc_3469_;
goto v_reusejp_3467_;
}
v_reusejp_3467_:
{
return v___x_3468_;
}
}
}
}
else
{
lean_object* v___x_3494_; lean_object* v___x_3495_; 
lean_dec(v___x_3455_);
lean_dec_ref(v_env_3446_);
v___x_3494_ = lean_box(1);
v___x_3495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3495_, 0, v___x_3494_);
return v___x_3495_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___redArg___boxed(lean_object* v___y_3496_, lean_object* v___y_3497_){
_start:
{
lean_object* v_res_3498_; 
v_res_3498_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___redArg(v___y_3496_);
lean_dec(v___y_3496_);
return v_res_3498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs(uint8_t v_includeUnnamed_3501_, lean_object* v_a_3502_, lean_object* v_a_3503_, lean_object* v_a_3504_, lean_object* v_a_3505_){
_start:
{
lean_object* v___x_3507_; lean_object* v_env_3508_; lean_object* v___x_3509_; lean_object* v_toEnvExtension_3510_; lean_object* v_exportEntriesFn_3511_; lean_object* v_asyncMode_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v_importedEntries_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v_exported_3520_; lean_object* v___x_3521_; size_t v_sz_3522_; size_t v___x_3523_; lean_object* v___x_3524_; 
v___x_3507_ = lean_st_ref_get(v_a_3505_);
v_env_3508_ = lean_ctor_get(v___x_3507_, 0);
lean_inc_ref_n(v_env_3508_, 4);
lean_dec(v___x_3507_);
v___x_3509_ = l_Lean_Parser_Tactic_Doc_tacticTagExt;
v_toEnvExtension_3510_ = lean_ctor_get(v___x_3509_, 0);
v_exportEntriesFn_3511_ = lean_ctor_get(v___x_3509_, 4);
v_asyncMode_3512_ = lean_ctor_get(v_toEnvExtension_3510_, 2);
v___x_3513_ = lean_box(1);
v___x_3514_ = lean_obj_once(&l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__0, &l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_Doc_elabPrintTacTags___redArg___closed__0);
v___x_3515_ = lean_box(0);
v___x_3516_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_3514_, v_toEnvExtension_3510_, v_env_3508_, v_asyncMode_3512_, v___x_3515_);
v_importedEntries_3517_ = lean_ctor_get(v___x_3516_, 0);
lean_inc_ref(v_importedEntries_3517_);
lean_dec(v___x_3516_);
v___x_3518_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3513_, v___x_3509_, v_env_3508_, v_asyncMode_3512_, v___x_3515_);
lean_inc_ref(v_exportEntriesFn_3511_);
v___x_3519_ = lean_apply_2(v_exportEntriesFn_3511_, v_env_3508_, v___x_3518_);
v_exported_3520_ = lean_ctor_get(v___x_3519_, 0);
lean_inc(v_exported_3520_);
lean_dec_ref(v___x_3519_);
v___x_3521_ = lean_array_push(v_importedEntries_3517_, v_exported_3520_);
v_sz_3522_ = lean_array_size(v___x_3521_);
v___x_3523_ = ((size_t)0ULL);
v___x_3524_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__1(v___x_3521_, v_sz_3522_, v___x_3523_, v___x_3513_, v_a_3502_, v_a_3503_, v_a_3504_, v_a_3505_);
lean_dec_ref(v___x_3521_);
if (lean_obj_tag(v___x_3524_) == 0)
{
lean_object* v_a_3525_; lean_object* v___x_3527_; uint8_t v_isShared_3528_; uint8_t v_isSharedCheck_3549_; 
v_a_3525_ = lean_ctor_get(v___x_3524_, 0);
v_isSharedCheck_3549_ = !lean_is_exclusive(v___x_3524_);
if (v_isSharedCheck_3549_ == 0)
{
v___x_3527_ = v___x_3524_;
v_isShared_3528_ = v_isSharedCheck_3549_;
goto v_resetjp_3526_;
}
else
{
lean_inc(v_a_3525_);
lean_dec(v___x_3524_);
v___x_3527_ = lean_box(0);
v_isShared_3528_ = v_isSharedCheck_3549_;
goto v_resetjp_3526_;
}
v_resetjp_3526_:
{
lean_object* v___x_3529_; lean_object* v_ext_3530_; lean_object* v_toEnvExtension_3531_; lean_object* v_asyncMode_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v_categories_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; 
v___x_3529_ = l_Lean_Parser_parserExtension;
v_ext_3530_ = lean_ctor_get(v___x_3529_, 1);
v_toEnvExtension_3531_ = lean_ctor_get(v_ext_3530_, 0);
v_asyncMode_3532_ = lean_ctor_get(v_toEnvExtension_3531_, 2);
v___x_3533_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
lean_inc_ref(v_env_3508_);
v___x_3534_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_3533_, v___x_3529_, v_env_3508_, v_asyncMode_3532_);
v_categories_3535_ = lean_ctor_get(v___x_3534_, 2);
lean_inc_ref(v_categories_3535_);
lean_dec(v___x_3534_);
v___x_3536_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_allTacticDocs___closed__0));
v___x_3537_ = ((lean_object*)(l_Lean_Elab_Tactic_Doc_firstTacticTokens___redArg___lam__2___closed__1));
v___x_3538_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_elabPrintTacTags_spec__3_spec__4___redArg(v_categories_3535_, v___x_3537_);
lean_dec_ref(v_categories_3535_);
if (lean_obj_tag(v___x_3538_) == 1)
{
lean_object* v_val_3539_; lean_object* v___x_3540_; lean_object* v_a_3541_; lean_object* v_kinds_3542_; lean_object* v___x_3543_; lean_object* v___f_3544_; lean_object* v___x_3545_; 
lean_del_object(v___x_3527_);
v_val_3539_ = lean_ctor_get(v___x_3538_, 0);
lean_inc(v_val_3539_);
lean_dec_ref_known(v___x_3538_, 1);
v___x_3540_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___redArg(v_a_3505_);
v_a_3541_ = lean_ctor_get(v___x_3540_, 0);
lean_inc(v_a_3541_);
lean_dec_ref(v___x_3540_);
v_kinds_3542_ = lean_ctor_get(v_val_3539_, 1);
lean_inc_ref(v_kinds_3542_);
lean_dec(v_val_3539_);
v___x_3543_ = lean_box(v_includeUnnamed_3501_);
v___f_3544_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Doc_allTacticDocs___lam__0___boxed), 12, 5);
lean_closure_set(v___f_3544_, 0, v_env_3508_);
lean_closure_set(v___f_3544_, 1, v___x_3515_);
lean_closure_set(v___f_3544_, 2, v_a_3525_);
lean_closure_set(v___f_3544_, 3, v_a_3541_);
lean_closure_set(v___f_3544_, 4, v___x_3543_);
v___x_3545_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg(v_kinds_3542_, v___x_3536_, v___f_3544_, v_a_3502_, v_a_3503_, v_a_3504_, v_a_3505_);
lean_dec_ref(v_kinds_3542_);
return v___x_3545_;
}
else
{
lean_object* v___x_3547_; 
lean_dec(v___x_3538_);
lean_dec(v_a_3525_);
lean_dec_ref(v_env_3508_);
if (v_isShared_3528_ == 0)
{
lean_ctor_set(v___x_3527_, 0, v___x_3536_);
v___x_3547_ = v___x_3527_;
goto v_reusejp_3546_;
}
else
{
lean_object* v_reuseFailAlloc_3548_; 
v_reuseFailAlloc_3548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3548_, 0, v___x_3536_);
v___x_3547_ = v_reuseFailAlloc_3548_;
goto v_reusejp_3546_;
}
v_reusejp_3546_:
{
return v___x_3547_;
}
}
}
}
else
{
lean_object* v_a_3550_; lean_object* v___x_3552_; uint8_t v_isShared_3553_; uint8_t v_isSharedCheck_3557_; 
lean_dec_ref(v_env_3508_);
v_a_3550_ = lean_ctor_get(v___x_3524_, 0);
v_isSharedCheck_3557_ = !lean_is_exclusive(v___x_3524_);
if (v_isSharedCheck_3557_ == 0)
{
v___x_3552_ = v___x_3524_;
v_isShared_3553_ = v_isSharedCheck_3557_;
goto v_resetjp_3551_;
}
else
{
lean_inc(v_a_3550_);
lean_dec(v___x_3524_);
v___x_3552_ = lean_box(0);
v_isShared_3553_ = v_isSharedCheck_3557_;
goto v_resetjp_3551_;
}
v_resetjp_3551_:
{
lean_object* v___x_3555_; 
if (v_isShared_3553_ == 0)
{
v___x_3555_ = v___x_3552_;
goto v_reusejp_3554_;
}
else
{
lean_object* v_reuseFailAlloc_3556_; 
v_reuseFailAlloc_3556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3556_, 0, v_a_3550_);
v___x_3555_ = v_reuseFailAlloc_3556_;
goto v_reusejp_3554_;
}
v_reusejp_3554_:
{
return v___x_3555_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs___boxed(lean_object* v_includeUnnamed_3558_, lean_object* v_a_3559_, lean_object* v_a_3560_, lean_object* v_a_3561_, lean_object* v_a_3562_, lean_object* v_a_3563_){
_start:
{
uint8_t v_includeUnnamed_boxed_3564_; lean_object* v_res_3565_; 
v_includeUnnamed_boxed_3564_ = lean_unbox(v_includeUnnamed_3558_);
v_res_3565_ = l_Lean_Elab_Tactic_Doc_allTacticDocs(v_includeUnnamed_boxed_3564_, v_a_3559_, v_a_3560_, v_a_3561_, v_a_3562_);
lean_dec(v_a_3562_);
lean_dec_ref(v_a_3561_);
lean_dec(v_a_3560_);
lean_dec_ref(v_a_3559_);
return v_res_3565_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0(lean_object* v_as_3566_, size_t v_sz_3567_, size_t v_i_3568_, lean_object* v_b_3569_, lean_object* v___y_3570_, lean_object* v___y_3571_, lean_object* v___y_3572_, lean_object* v___y_3573_){
_start:
{
lean_object* v___x_3575_; 
v___x_3575_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___redArg(v_as_3566_, v_sz_3567_, v_i_3568_, v_b_3569_);
return v___x_3575_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0___boxed(lean_object* v_as_3576_, lean_object* v_sz_3577_, lean_object* v_i_3578_, lean_object* v_b_3579_, lean_object* v___y_3580_, lean_object* v___y_3581_, lean_object* v___y_3582_, lean_object* v___y_3583_, lean_object* v___y_3584_){
_start:
{
size_t v_sz_boxed_3585_; size_t v_i_boxed_3586_; lean_object* v_res_3587_; 
v_sz_boxed_3585_ = lean_unbox_usize(v_sz_3577_);
lean_dec(v_sz_3577_);
v_i_boxed_3586_ = lean_unbox_usize(v_i_3578_);
lean_dec(v_i_3578_);
v_res_3587_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__0(v_as_3576_, v_sz_boxed_3585_, v_i_boxed_3586_, v_b_3579_, v___y_3580_, v___y_3581_, v___y_3582_, v___y_3583_);
lean_dec(v___y_3583_);
lean_dec_ref(v___y_3582_);
lean_dec(v___y_3581_);
lean_dec_ref(v___y_3580_);
lean_dec_ref(v_as_3576_);
return v_res_3587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2(lean_object* v___y_3588_, lean_object* v___y_3589_, lean_object* v___y_3590_, lean_object* v___y_3591_){
_start:
{
lean_object* v___x_3593_; 
v___x_3593_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___redArg(v___y_3591_);
return v___x_3593_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2___boxed(lean_object* v___y_3594_, lean_object* v___y_3595_, lean_object* v___y_3596_, lean_object* v___y_3597_, lean_object* v___y_3598_){
_start:
{
lean_object* v_res_3599_; 
v_res_3599_ = l_Lean_Elab_Tactic_Doc_firstTacticTokens___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__2(v___y_3594_, v___y_3595_, v___y_3596_, v___y_3597_);
lean_dec(v___y_3597_);
lean_dec_ref(v___y_3596_);
lean_dec(v___y_3595_);
lean_dec_ref(v___y_3594_);
return v_res_3599_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3(lean_object* v_00_u03c3_3600_, lean_object* v_00_u03b2_3601_, lean_object* v_map_3602_, lean_object* v_init_3603_, lean_object* v_f_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_, lean_object* v___y_3607_, lean_object* v___y_3608_){
_start:
{
lean_object* v___x_3610_; 
v___x_3610_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___redArg(v_map_3602_, v_init_3603_, v_f_3604_, v___y_3605_, v___y_3606_, v___y_3607_, v___y_3608_);
return v___x_3610_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3___boxed(lean_object* v_00_u03c3_3611_, lean_object* v_00_u03b2_3612_, lean_object* v_map_3613_, lean_object* v_init_3614_, lean_object* v_f_3615_, lean_object* v___y_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_){
_start:
{
lean_object* v_res_3621_; 
v_res_3621_ = l_Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3(v_00_u03c3_3611_, v_00_u03b2_3612_, v_map_3613_, v_init_3614_, v_f_3615_, v___y_3616_, v___y_3617_, v___y_3618_, v___y_3619_);
lean_dec(v___y_3619_);
lean_dec_ref(v___y_3618_);
lean_dec(v___y_3617_);
lean_dec_ref(v___y_3616_);
lean_dec_ref(v_map_3613_);
return v_res_3621_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3___redArg(lean_object* v_map_3622_, lean_object* v_f_3623_, lean_object* v_init_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_){
_start:
{
lean_object* v___x_3630_; 
v___x_3630_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg(v_f_3623_, v_map_3622_, v_init_3624_, v___y_3625_, v___y_3626_, v___y_3627_, v___y_3628_);
return v___x_3630_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3___redArg___boxed(lean_object* v_map_3631_, lean_object* v_f_3632_, lean_object* v_init_3633_, lean_object* v___y_3634_, lean_object* v___y_3635_, lean_object* v___y_3636_, lean_object* v___y_3637_, lean_object* v___y_3638_){
_start:
{
lean_object* v_res_3639_; 
v_res_3639_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3___redArg(v_map_3631_, v_f_3632_, v_init_3633_, v___y_3634_, v___y_3635_, v___y_3636_, v___y_3637_);
lean_dec(v___y_3637_);
lean_dec_ref(v___y_3636_);
lean_dec(v___y_3635_);
lean_dec_ref(v___y_3634_);
return v_res_3639_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3(lean_object* v_00_u03c3_3640_, lean_object* v_00_u03c3_3641_, lean_object* v_00_u03b2_3642_, lean_object* v_map_3643_, lean_object* v_f_3644_, lean_object* v_init_3645_, lean_object* v___y_3646_, lean_object* v___y_3647_, lean_object* v___y_3648_, lean_object* v___y_3649_){
_start:
{
lean_object* v___x_3651_; 
v___x_3651_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg(v_f_3644_, v_map_3643_, v_init_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_);
return v___x_3651_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3___boxed(lean_object* v_00_u03c3_3652_, lean_object* v_00_u03c3_3653_, lean_object* v_00_u03b2_3654_, lean_object* v_map_3655_, lean_object* v_f_3656_, lean_object* v_init_3657_, lean_object* v___y_3658_, lean_object* v___y_3659_, lean_object* v___y_3660_, lean_object* v___y_3661_, lean_object* v___y_3662_){
_start:
{
lean_object* v_res_3663_; 
v_res_3663_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3(v_00_u03c3_3652_, v_00_u03c3_3653_, v_00_u03b2_3654_, v_map_3655_, v_f_3656_, v_init_3657_, v___y_3658_, v___y_3659_, v___y_3660_, v___y_3661_);
lean_dec(v___y_3661_);
lean_dec_ref(v___y_3660_);
lean_dec(v___y_3659_);
lean_dec_ref(v___y_3658_);
return v_res_3663_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4(lean_object* v_00_u03c3_3664_, lean_object* v_00_u03c3_3665_, lean_object* v_00_u03b1_3666_, lean_object* v_00_u03b2_3667_, lean_object* v_f_3668_, lean_object* v_x_3669_, lean_object* v_x_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_){
_start:
{
lean_object* v___x_3676_; 
v___x_3676_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___redArg(v_f_3668_, v_x_3669_, v_x_3670_, v___y_3671_, v___y_3672_, v___y_3673_, v___y_3674_);
return v___x_3676_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4___boxed(lean_object* v_00_u03c3_3677_, lean_object* v_00_u03c3_3678_, lean_object* v_00_u03b1_3679_, lean_object* v_00_u03b2_3680_, lean_object* v_f_3681_, lean_object* v_x_3682_, lean_object* v_x_3683_, lean_object* v___y_3684_, lean_object* v___y_3685_, lean_object* v___y_3686_, lean_object* v___y_3687_, lean_object* v___y_3688_){
_start:
{
lean_object* v_res_3689_; 
v_res_3689_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4(v_00_u03c3_3677_, v_00_u03c3_3678_, v_00_u03b1_3679_, v_00_u03b2_3680_, v_f_3681_, v_x_3682_, v_x_3683_, v___y_3684_, v___y_3685_, v___y_3686_, v___y_3687_);
lean_dec(v___y_3687_);
lean_dec_ref(v___y_3686_);
lean_dec(v___y_3685_);
lean_dec_ref(v___y_3684_);
return v_res_3689_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5(lean_object* v_00_u03b1_3690_, lean_object* v_00_u03b2_3691_, lean_object* v_00_u03c3_3692_, lean_object* v_00_u03c3_3693_, lean_object* v_f_3694_, lean_object* v_as_3695_, size_t v_i_3696_, size_t v_stop_3697_, lean_object* v_b_3698_, lean_object* v___y_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_){
_start:
{
lean_object* v___x_3704_; 
v___x_3704_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___redArg(v_f_3694_, v_as_3695_, v_i_3696_, v_stop_3697_, v_b_3698_, v___y_3699_, v___y_3700_, v___y_3701_, v___y_3702_);
return v___x_3704_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5___boxed(lean_object* v_00_u03b1_3705_, lean_object* v_00_u03b2_3706_, lean_object* v_00_u03c3_3707_, lean_object* v_00_u03c3_3708_, lean_object* v_f_3709_, lean_object* v_as_3710_, lean_object* v_i_3711_, lean_object* v_stop_3712_, lean_object* v_b_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_){
_start:
{
size_t v_i_boxed_3719_; size_t v_stop_boxed_3720_; lean_object* v_res_3721_; 
v_i_boxed_3719_ = lean_unbox_usize(v_i_3711_);
lean_dec(v_i_3711_);
v_stop_boxed_3720_ = lean_unbox_usize(v_stop_3712_);
lean_dec(v_stop_3712_);
v_res_3721_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__5(v_00_u03b1_3705_, v_00_u03b2_3706_, v_00_u03c3_3707_, v_00_u03c3_3708_, v_f_3709_, v_as_3710_, v_i_boxed_3719_, v_stop_boxed_3720_, v_b_3713_, v___y_3714_, v___y_3715_, v___y_3716_, v___y_3717_);
lean_dec(v___y_3717_);
lean_dec_ref(v___y_3716_);
lean_dec(v___y_3715_);
lean_dec_ref(v___y_3714_);
lean_dec_ref(v_as_3710_);
return v_res_3721_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6(lean_object* v_00_u03c3_3722_, lean_object* v_00_u03c3_3723_, lean_object* v_00_u03b1_3724_, lean_object* v_00_u03b2_3725_, lean_object* v_f_3726_, lean_object* v_keys_3727_, lean_object* v_vals_3728_, lean_object* v_heq_3729_, lean_object* v_i_3730_, lean_object* v_acc_3731_, lean_object* v___y_3732_, lean_object* v___y_3733_, lean_object* v___y_3734_, lean_object* v___y_3735_){
_start:
{
lean_object* v___x_3737_; 
v___x_3737_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___redArg(v_f_3726_, v_keys_3727_, v_vals_3728_, v_i_3730_, v_acc_3731_, v___y_3732_, v___y_3733_, v___y_3734_, v___y_3735_);
return v___x_3737_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6___boxed(lean_object* v_00_u03c3_3738_, lean_object* v_00_u03c3_3739_, lean_object* v_00_u03b1_3740_, lean_object* v_00_u03b2_3741_, lean_object* v_f_3742_, lean_object* v_keys_3743_, lean_object* v_vals_3744_, lean_object* v_heq_3745_, lean_object* v_i_3746_, lean_object* v_acc_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_){
_start:
{
lean_object* v_res_3753_; 
v_res_3753_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00Lean_Elab_Tactic_Doc_allTacticDocs_spec__3_spec__3_spec__4_spec__6(v_00_u03c3_3738_, v_00_u03c3_3739_, v_00_u03b1_3740_, v_00_u03b2_3741_, v_f_3742_, v_keys_3743_, v_vals_3744_, v_heq_3745_, v_i_3746_, v_acc_3747_, v___y_3748_, v___y_3749_, v___y_3750_, v___y_3751_);
lean_dec(v___y_3751_);
lean_dec_ref(v___y_3750_);
lean_dec(v___y_3749_);
lean_dec_ref(v___y_3748_);
lean_dec_ref(v_vals_3744_);
lean_dec_ref(v_keys_3743_);
return v_res_3753_;
}
}
lean_object* runtime_initialize_Lean_DocString(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Tactic_Doc(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Doc(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabTacticExtension___regBuiltin_Lean_Elab_Tactic_Doc_elabTacticExtension_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabRegisterTacticTag___regBuiltin_Lean_Elab_Tactic_Doc_elabRegisterTacticTag_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Doc_0__Lean_Elab_Tactic_Doc_elabPrintTacTags___regBuiltin_Lean_Elab_Tactic_Doc_elabPrintTacTags_declRange__5();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Doc(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_DocString(uint8_t builtin);
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_Parser_Tactic_Doc(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Doc(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Doc(builtin);
}
#ifdef __cplusplus
}
#endif
