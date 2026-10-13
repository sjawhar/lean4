// Lean compiler output
// Module: Lean.ResolveName
// Imports: public import Lean.Modifiers public import Lean.Exception public import Lean.Namespace public import Lean.Log
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_filterTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwUnknownConstantAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_dbgToString___boxed(lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_List_toString___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MacroScopesView_isSuffixOf(lean_object*, lean_object*);
lean_object* l_Lean_privateToUserName_x3f(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
uint8_t l_Lean_Name_isAtomic(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_SMap_instInhabited(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_Lean_isProtected(lean_object*, lean_object*);
uint8_t l_Lean_Environment_containsOnBranch(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_registerEnvExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited(lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Environment_containsLocally(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_mkPrivateNameCore(lean_object*, lean_object*);
uint8_t l_Lean_Environment_moduleDeclares(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
lean_object* l_List_eraseDupsBy___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_rootNamespace;
lean_object* l_Lean_Environment_mainModule(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_components(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_List_find_x3f___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_KVMap_instValueBool;
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_logWarning___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_getM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
uint8_t l_Lean_Environment_isNamespace(lean_object*, lean_object*);
uint8_t l_Lean_initializing();
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_OptionT_instAlternative___redArg(lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_pure(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_Name_componentsRev(lean_object*);
lean_object* l_Lean_Name_appendCore(lean_object*, lean_object*);
lean_object* l_OptionT_lift(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadEnvOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_lift___redArg___lam__0(lean_object*, lean_object*);
lean_object* l_Lean_instMonadLogOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_x27_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Name_instToString___lam__0(lean_object*);
lean_object* l_List_filterMapTR_go___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Option_isNone___boxed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwReservedNameNotAvailable___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "failed to declare `"};
static const lean_object* l_Lean_throwReservedNameNotAvailable___redArg___closed__0 = (const lean_object*)&l_Lean_throwReservedNameNotAvailable___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwReservedNameNotAvailable___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwReservedNameNotAvailable___redArg___closed__1;
static const lean_string_object l_Lean_throwReservedNameNotAvailable___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "` because `"};
static const lean_object* l_Lean_throwReservedNameNotAvailable___redArg___closed__2 = (const lean_object*)&l_Lean_throwReservedNameNotAvailable___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwReservedNameNotAvailable___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwReservedNameNotAvailable___redArg___closed__3;
static const lean_string_object l_Lean_throwReservedNameNotAvailable___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "` has already been declared"};
static const lean_object* l_Lean_throwReservedNameNotAvailable___redArg___closed__4 = (const lean_object*)&l_Lean_throwReservedNameNotAvailable___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwReservedNameNotAvailable___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwReservedNameNotAvailable___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwReservedNameNotAvailable___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwReservedNameNotAvailable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_reservedNamePredicatesRef;
static const lean_string_object l_Lean_registerReservedNamePredicate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 110, .m_capacity = 110, .m_length = 109, .m_data = "failed to register reserved name suffix predicate, this operation can only be performed during initialization"};
static const lean_object* l_Lean_registerReservedNamePredicate___closed__0 = (const lean_object*)&l_Lean_registerReservedNamePredicate___closed__0_value;
static lean_once_cell_t l_Lean_registerReservedNamePredicate___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerReservedNamePredicate___closed__1;
LEAN_EXPORT lean_object* l_Lean_registerReservedNamePredicate(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerReservedNamePredicate___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_reservedNamePredicatesExt;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_isReservedName___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isReservedName___closed__0;
LEAN_EXPORT uint8_t lean_is_reserved_name(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReservedName___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_addAliasEntry_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_addAliasEntry_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addAliasEntry(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2____boxed(lean_object*);
static const lean_closure_object l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ResolveName_0__Lean_initFn___lam__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "aliasExtension"};
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_initFn___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_initFn___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(255, 78, 120, 122, 20, 252, 110, 252)}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ResolveName_0__Lean_initFn___closed__5_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_addAliasEntry, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__5_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__5_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_initFn___closed__6_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__5_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__6_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__6_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_aliasExtension;
LEAN_EXPORT lean_object* l_Lean_addAlias(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_getAliasState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_getAliasState___closed__0 = (const lean_object*)&l_Lean_getAliasState___closed__0_value;
static const lean_closure_object l_Lean_getAliasState___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_getAliasState___closed__1 = (const lean_object*)&l_Lean_getAliasState___closed__1_value;
static lean_once_cell_t l_Lean_getAliasState___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getAliasState___closed__2;
LEAN_EXPORT lean_object* l_Lean_getAliasState(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_getAliases_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_getAliases_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAliases(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_getAliases___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getRevAliases___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getRevAliases___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getRevAliases(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "backward"};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "privateInPublic"};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(77, 196, 98, 49, 58, 220, 29, 220)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 137, 140, 74, 72, 128, 49, 11)}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 227, .m_capacity = 227, .m_length = 226, .m_data = "(module system) Export `private` declarations, allowing for arbitrary access to them while code is being ported to the module system. Such accesses will generate warnings\n    unless `backward.privateInPublic.warn` is disabled."};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__5_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ResolveName"};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__5_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__5_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__5_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(213, 127, 67, 6, 186, 49, 191, 64)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(131, 161, 136, 183, 131, 203, 158, 84)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(94, 154, 217, 244, 61, 155, 3, 144)}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ResolveName_backward_privateInPublic;
static const lean_string_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "warn"};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(77, 196, 98, 49, 58, 220, 29, 220)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 137, 140, 74, 72, 128, 49, 11)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(44, 52, 68, 203, 224, 27, 156, 169)}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 126, .m_capacity = 126, .m_length = 125, .m_data = "(module system) Warn on accesses to `private` declarations that are allowed only by `backward.privateInPublic` being enabled."};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__5_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(213, 127, 67, 6, 186, 49, 191, 64)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(131, 161, 136, 183, 131, 203, 158, 84)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(94, 154, 217, 244, 61, 155, 3, 144)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__0_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(50, 1, 203, 3, 164, 240, 100, 244)}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ResolveName_backward_privateInPublic_warn;
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__1_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 136, 64, 34, 247, 93, 254, 97)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__2_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0___closed__0 = (const lean_object*)&l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveGlobalName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_ResolveName_resolveNamespaceUsingScope_x3f_spec__0(lean_object*);
static const lean_string_object l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lean.ResolveName"};
static const lean_object* l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__0 = (const lean_object*)&l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__0_value;
static const lean_string_object l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Lean.ResolveName.resolveNamespaceUsingScope\?"};
static const lean_object* l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__1 = (const lean_object*)&l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__1_value;
static const lean_string_object l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__2 = (const lean_object*)&l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__2_value;
static lean_once_cell_t l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3;
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespaceUsingScope_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespaceUsingOpenDecls(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadResolveNameOfMonadLift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadResolveNameOfMonadLift(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_checkPrivateInPublic___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Private declaration `"};
static const lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_checkPrivateInPublic___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1;
static const lean_string_object l_Lean_checkPrivateInPublic___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 167, .m_capacity = 167, .m_length = 166, .m_data = "` accessed publicly; this is allowed only because the `backward.privateInPublic` option is enabled. \n\nDisable `backward.privateInPublic.warn` to silence this warning."};
static const lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_checkPrivateInPublic___redArg___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_resolveGlobalName___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__6(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_resolveGlobalName___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_resolveGlobalName___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveGlobalName___redArg___closed__0 = (const lean_object*)&l_Lean_resolveGlobalName___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_resolveNamespaceCore___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "unknown namespace `"};
static const lean_object* l_Lean_resolveNamespaceCore___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_resolveNamespaceCore___redArg___lam__1___closed__0_value;
static const lean_string_object l_Lean_resolveNamespaceCore___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_resolveNamespaceCore___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_resolveNamespaceCore___redArg___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_resolveNamespace___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_resolveNamespace___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveNamespace___redArg___closed__0 = (const lean_object*)&l_Lean_resolveNamespace___redArg___closed__0_value;
static const lean_array_object l_Lean_resolveNamespace___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_resolveNamespace___redArg___closed__1 = (const lean_object*)&l_Lean_resolveNamespace___redArg___closed__1_value;
static const lean_string_object l_Lean_resolveNamespace___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "expected identifier"};
static const lean_object* l_Lean_resolveNamespace___redArg___closed__2 = (const lean_object*)&l_Lean_resolveNamespace___redArg___closed__2_value;
static const lean_ctor_object l_Lean_resolveNamespace___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_resolveNamespace___redArg___closed__2_value)}};
static const lean_object* l_Lean_resolveNamespace___redArg___closed__3 = (const lean_object*)&l_Lean_resolveNamespace___redArg___closed__3_value;
static lean_once_cell_t l_Lean_resolveNamespace___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_resolveNamespace___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "ambiguous namespace `"};
static const lean_object* l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "`, possible interpretations: `"};
static const lean_object* l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_resolveUniqueNamespace___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_instToString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveUniqueNamespace___redArg___closed__0 = (const lean_object*)&l_Lean_resolveUniqueNamespace___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_filterFieldList___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_filterFieldList___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_filterFieldList___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_filterFieldList___redArg___closed__0 = (const lean_object*)&l_Lean_filterFieldList___redArg___closed__0_value;
static const lean_closure_object l_Lean_filterFieldList___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_filterFieldList___redArg___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_filterFieldList___redArg___closed__1 = (const lean_object*)&l_Lean_filterFieldList___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lean_ensureNoOverload___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ensureNoOverload___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ensureNoOverload___redArg___closed__0 = (const lean_object*)&l_Lean_ensureNoOverload___redArg___closed__0_value;
static const lean_string_object l_Lean_ensureNoOverload___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Ambiguous identifier `"};
static const lean_object* l_Lean_ensureNoOverload___redArg___closed__1 = (const lean_object*)&l_Lean_ensureNoOverload___redArg___closed__1_value;
static lean_once_cell_t l_Lean_ensureNoOverload___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ensureNoOverload___redArg___closed__2;
static const lean_string_object l_Lean_ensureNoOverload___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "`; possible interpretations: "};
static const lean_object* l_Lean_ensureNoOverload___redArg___closed__3 = (const lean_object*)&l_Lean_ensureNoOverload___redArg___closed__3_value;
static lean_once_cell_t l_Lean_ensureNoOverload___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ensureNoOverload___redArg___closed__4;
static const lean_closure_object l_Lean_ensureNoOverload___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofExpr, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ensureNoOverload___redArg___closed__5 = (const lean_object*)&l_Lean_ensureNoOverload___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_preprocessSyntaxAndResolve___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_preprocessSyntaxAndResolve___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___closed__0 = (const lean_object*)&l_Lean_preprocessSyntaxAndResolve___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ensureNonAmbiguous___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.ensureNonAmbiguous"};
static const lean_object* l_Lean_ensureNonAmbiguous___redArg___closed__0 = (const lean_object*)&l_Lean_ensureNonAmbiguous___redArg___closed__0_value;
static lean_once_cell_t l_Lean_ensureNonAmbiguous___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ensureNonAmbiguous___redArg___closed__1;
static const lean_closure_object l_Lean_ensureNonAmbiguous___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_dbgToString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ensureNonAmbiguous___redArg___closed__2 = (const lean_object*)&l_Lean_ensureNonAmbiguous___redArg___closed__2_value;
static const lean_string_object l_Lean_ensureNonAmbiguous___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ambiguous identifier `"};
static const lean_object* l_Lean_ensureNonAmbiguous___redArg___closed__3 = (const lean_object*)&l_Lean_ensureNonAmbiguous___redArg___closed__3_value;
static const lean_string_object l_Lean_ensureNonAmbiguous___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "`, possible interpretations: "};
static const lean_object* l_Lean_ensureNonAmbiguous___redArg___closed__4 = (const lean_object*)&l_Lean_ensureNonAmbiguous___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_resolveLocalName___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__0_value;
static const lean_closure_object l_Lean_resolveLocalName___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__1 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__1_value;
static const lean_closure_object l_Lean_resolveLocalName___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__2 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__2_value;
static const lean_closure_object l_Lean_resolveLocalName___redArg___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__3 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__3_value;
static const lean_closure_object l_Lean_resolveLocalName___redArg___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__4 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__4_value;
static const lean_closure_object l_Lean_resolveLocalName___redArg___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__5 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__5_value;
static const lean_closure_object l_Lean_resolveLocalName___redArg___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__6 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__6_value;
static const lean_ctor_object l_Lean_resolveLocalName___redArg___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__0_value),((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__1_value)}};
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__7 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__7_value;
static const lean_ctor_object l_Lean_resolveLocalName___redArg___lam__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__7_value),((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__2_value),((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__3_value),((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__4_value),((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__5_value)}};
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__8 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__8_value;
static const lean_ctor_object l_Lean_resolveLocalName___redArg___lam__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__8_value),((lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__6_value)}};
static const lean_object* l_Lean_resolveLocalName___redArg___lam__3___closed__9 = (const lean_object*)&l_Lean_resolveLocalName___redArg___lam__3___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_resolveLocalName___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___closed__0 = (const lean_object*)&l_Lean_resolveLocalName___redArg___closed__0_value;
static const lean_closure_object l_Lean_resolveLocalName___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_resolveLocalName___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveLocalName___redArg___closed__1 = (const lean_object*)&l_Lean_resolveLocalName___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0 = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__0_value)}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4___boxed(lean_object**);
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___closed__0 = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Option_isNone___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_throwReservedNameNotAvailable___redArg___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = ((lean_object*)(l_Lean_throwReservedNameNotAvailable___redArg___closed__0));
v___x_3_ = l_Lean_stringToMessageData(v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_throwReservedNameNotAvailable___redArg___closed__3(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = ((lean_object*)(l_Lean_throwReservedNameNotAvailable___redArg___closed__2));
v___x_6_ = l_Lean_stringToMessageData(v___x_5_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_throwReservedNameNotAvailable___redArg___closed__5(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = ((lean_object*)(l_Lean_throwReservedNameNotAvailable___redArg___closed__4));
v___x_9_ = l_Lean_stringToMessageData(v___x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwReservedNameNotAvailable___redArg(lean_object* v_inst_10_, lean_object* v_inst_11_, lean_object* v_declName_12_, lean_object* v_reservedName_13_){
_start:
{
lean_object* v___x_14_; uint8_t v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; uint8_t v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_14_ = lean_obj_once(&l_Lean_throwReservedNameNotAvailable___redArg___closed__1, &l_Lean_throwReservedNameNotAvailable___redArg___closed__1_once, _init_l_Lean_throwReservedNameNotAvailable___redArg___closed__1);
v___x_15_ = 0;
v___x_16_ = l_Lean_MessageData_ofConstName(v_declName_12_, v___x_15_);
v___x_17_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_17_, 0, v___x_14_);
lean_ctor_set(v___x_17_, 1, v___x_16_);
v___x_18_ = lean_obj_once(&l_Lean_throwReservedNameNotAvailable___redArg___closed__3, &l_Lean_throwReservedNameNotAvailable___redArg___closed__3_once, _init_l_Lean_throwReservedNameNotAvailable___redArg___closed__3);
v___x_19_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_19_, 0, v___x_17_);
lean_ctor_set(v___x_19_, 1, v___x_18_);
v___x_20_ = 1;
v___x_21_ = l_Lean_MessageData_ofConstName(v_reservedName_13_, v___x_20_);
v___x_22_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_22_, 0, v___x_19_);
lean_ctor_set(v___x_22_, 1, v___x_21_);
v___x_23_ = lean_obj_once(&l_Lean_throwReservedNameNotAvailable___redArg___closed__5, &l_Lean_throwReservedNameNotAvailable___redArg___closed__5_once, _init_l_Lean_throwReservedNameNotAvailable___redArg___closed__5);
v___x_24_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_24_, 0, v___x_22_);
lean_ctor_set(v___x_24_, 1, v___x_23_);
v___x_25_ = l_Lean_throwError___redArg(v_inst_10_, v_inst_11_, v___x_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwReservedNameNotAvailable(lean_object* v_m_26_, lean_object* v_inst_27_, lean_object* v_inst_28_, lean_object* v_declName_29_, lean_object* v_reservedName_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lean_throwReservedNameNotAvailable___redArg(v_inst_27_, v_inst_28_, v_declName_29_, v_reservedName_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___redArg___lam__0(lean_object* v_reservedName_32_, lean_object* v_toApplicative_33_, lean_object* v_inst_34_, lean_object* v_inst_35_, lean_object* v_declName_36_, lean_object* v_____do__lift_37_){
_start:
{
uint8_t v___x_38_; uint8_t v___x_39_; 
v___x_38_ = 1;
lean_inc(v_reservedName_32_);
v___x_39_ = l_Lean_Environment_contains(v_____do__lift_37_, v_reservedName_32_, v___x_38_);
if (v___x_39_ == 0)
{
lean_object* v_toPure_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
lean_dec(v_declName_36_);
lean_dec_ref(v_inst_35_);
lean_dec_ref(v_inst_34_);
lean_dec(v_reservedName_32_);
v_toPure_40_ = lean_ctor_get(v_toApplicative_33_, 1);
lean_inc(v_toPure_40_);
lean_dec_ref(v_toApplicative_33_);
v___x_41_ = lean_box(0);
v___x_42_ = lean_apply_2(v_toPure_40_, lean_box(0), v___x_41_);
return v___x_42_;
}
else
{
lean_object* v___x_43_; 
lean_dec_ref(v_toApplicative_33_);
v___x_43_ = l_Lean_throwReservedNameNotAvailable___redArg(v_inst_34_, v_inst_35_, v_declName_36_, v_reservedName_32_);
return v___x_43_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___redArg(lean_object* v_inst_44_, lean_object* v_inst_45_, lean_object* v_inst_46_, lean_object* v_declName_47_, lean_object* v_suffix_48_){
_start:
{
lean_object* v_toApplicative_49_; lean_object* v_toBind_50_; lean_object* v_getEnv_51_; lean_object* v_reservedName_52_; lean_object* v___f_53_; lean_object* v___x_54_; 
v_toApplicative_49_ = lean_ctor_get(v_inst_44_, 0);
lean_inc_ref(v_toApplicative_49_);
v_toBind_50_ = lean_ctor_get(v_inst_44_, 1);
lean_inc(v_toBind_50_);
v_getEnv_51_ = lean_ctor_get(v_inst_45_, 0);
lean_inc(v_getEnv_51_);
lean_dec_ref(v_inst_45_);
lean_inc(v_declName_47_);
v_reservedName_52_ = l_Lean_Name_str___override(v_declName_47_, v_suffix_48_);
v___f_53_ = lean_alloc_closure((void*)(l_Lean_ensureReservedNameAvailable___redArg___lam__0), 6, 5);
lean_closure_set(v___f_53_, 0, v_reservedName_52_);
lean_closure_set(v___f_53_, 1, v_toApplicative_49_);
lean_closure_set(v___f_53_, 2, v_inst_44_);
lean_closure_set(v___f_53_, 3, v_inst_46_);
lean_closure_set(v___f_53_, 4, v_declName_47_);
v___x_54_ = lean_apply_4(v_toBind_50_, lean_box(0), lean_box(0), v_getEnv_51_, v___f_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable(lean_object* v_m_55_, lean_object* v_inst_56_, lean_object* v_inst_57_, lean_object* v_inst_58_, lean_object* v_declName_59_, lean_object* v_suffix_60_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = l_Lean_ensureReservedNameAvailable___redArg(v_inst_56_, v_inst_57_, v_inst_58_, v_declName_59_, v_suffix_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_65_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2_));
v___x_66_ = lean_st_mk_ref(v___x_65_);
v___x_67_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2____boxed(lean_object* v_a_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2_();
return v_res_69_;
}
}
static lean_object* _init_l_Lean_registerReservedNamePredicate___closed__1(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = ((lean_object*)(l_Lean_registerReservedNamePredicate___closed__0));
v___x_72_ = lean_mk_io_user_error(v___x_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerReservedNamePredicate(lean_object* v_p_73_){
_start:
{
uint8_t v___x_75_; 
v___x_75_ = l_Lean_initializing();
if (v___x_75_ == 0)
{
lean_object* v___x_76_; lean_object* v___x_77_; 
lean_dec_ref(v_p_73_);
v___x_76_ = lean_obj_once(&l_Lean_registerReservedNamePredicate___closed__1, &l_Lean_registerReservedNamePredicate___closed__1_once, _init_l_Lean_registerReservedNamePredicate___closed__1);
v___x_77_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
return v___x_77_;
}
else
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_78_ = l_Lean_reservedNamePredicatesRef;
v___x_79_ = lean_st_ref_take(v___x_78_);
v___x_80_ = lean_array_push(v___x_79_, v_p_73_);
v___x_81_ = lean_st_ref_set(v___x_78_, v___x_80_);
v___x_82_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
return v___x_82_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerReservedNamePredicate___boxed(lean_object* v_p_83_, lean_object* v_a_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_registerReservedNamePredicate(v_p_83_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2_(lean_object* v___x_86_){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_88_ = lean_st_ref_get(v___x_86_);
v___x_89_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_89_, 0, v___x_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2____boxed(lean_object* v___x_90_, lean_object* v___y_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2_(v___x_90_);
lean_dec(v___x_90_);
return v_res_92_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_93_; lean_object* v___f_94_; 
v___x_93_ = l_Lean_reservedNamePredicatesRef;
v___f_94_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_94_, 0, v___x_93_);
return v___f_94_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___f_96_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2_, &l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2__once, _init_l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2_);
v___x_97_ = lean_box(0);
v___x_98_ = lean_box(2);
v___x_99_ = l_Lean_registerEnvExtension___redArg(v___f_96_, v___x_97_, v___x_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2____boxed(lean_object* v_a_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2_();
return v_res_101_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0(lean_object* v_env_102_, lean_object* v_name_103_, lean_object* v_as_104_, size_t v_i_105_, size_t v_stop_106_){
_start:
{
uint8_t v___x_107_; 
v___x_107_ = lean_usize_dec_eq(v_i_105_, v_stop_106_);
if (v___x_107_ == 0)
{
lean_object* v___x_161__overap_108_; lean_object* v___x_109_; uint8_t v___x_110_; 
v___x_161__overap_108_ = lean_array_uget_borrowed(v_as_104_, v_i_105_);
lean_inc(v___x_161__overap_108_);
lean_inc(v_name_103_);
lean_inc_ref(v_env_102_);
v___x_109_ = lean_apply_2(v___x_161__overap_108_, v_env_102_, v_name_103_);
v___x_110_ = lean_unbox(v___x_109_);
if (v___x_110_ == 0)
{
size_t v___x_111_; size_t v___x_112_; 
v___x_111_ = ((size_t)1ULL);
v___x_112_ = lean_usize_add(v_i_105_, v___x_111_);
v_i_105_ = v___x_112_;
goto _start;
}
else
{
uint8_t v___x_114_; 
lean_dec(v_name_103_);
lean_dec_ref(v_env_102_);
v___x_114_ = lean_unbox(v___x_109_);
return v___x_114_;
}
}
else
{
uint8_t v___x_115_; 
lean_dec(v_name_103_);
lean_dec_ref(v_env_102_);
v___x_115_ = 0;
return v___x_115_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0___boxed(lean_object* v_env_116_, lean_object* v_name_117_, lean_object* v_as_118_, lean_object* v_i_119_, lean_object* v_stop_120_){
_start:
{
size_t v_i_boxed_121_; size_t v_stop_boxed_122_; uint8_t v_res_123_; lean_object* v_r_124_; 
v_i_boxed_121_ = lean_unbox_usize(v_i_119_);
lean_dec(v_i_119_);
v_stop_boxed_122_ = lean_unbox_usize(v_stop_120_);
lean_dec(v_stop_120_);
v_res_123_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0(v_env_116_, v_name_117_, v_as_118_, v_i_boxed_121_, v_stop_boxed_122_);
lean_dec_ref(v_as_118_);
v_r_124_ = lean_box(v_res_123_);
return v_r_124_;
}
}
static lean_object* _init_l_Lean_isReservedName___closed__0(void){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = l_Array_instInhabited(lean_box(0));
return v___x_125_;
}
}
LEAN_EXPORT uint8_t lean_is_reserved_name(lean_object* v_env_126_, lean_object* v_name_127_){
_start:
{
lean_object* v___x_128_; lean_object* v_asyncMode_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; uint8_t v___x_135_; 
v___x_128_ = l_Lean_reservedNamePredicatesExt;
v_asyncMode_129_ = lean_ctor_get(v___x_128_, 2);
v___x_130_ = lean_obj_once(&l_Lean_isReservedName___closed__0, &l_Lean_isReservedName___closed__0_once, _init_l_Lean_isReservedName___closed__0);
v___x_131_ = lean_box(0);
lean_inc_ref(v_env_126_);
v___x_132_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_130_, v___x_128_, v_env_126_, v_asyncMode_129_, v___x_131_);
v___x_133_ = lean_unsigned_to_nat(0u);
v___x_134_ = lean_array_get_size(v___x_132_);
v___x_135_ = lean_nat_dec_lt(v___x_133_, v___x_134_);
if (v___x_135_ == 0)
{
lean_dec(v___x_132_);
lean_dec(v_name_127_);
lean_dec_ref(v_env_126_);
return v___x_135_;
}
else
{
if (v___x_135_ == 0)
{
lean_dec(v___x_132_);
lean_dec(v_name_127_);
lean_dec_ref(v_env_126_);
return v___x_135_;
}
else
{
size_t v___x_136_; size_t v___x_137_; uint8_t v___x_138_; 
v___x_136_ = ((size_t)0ULL);
v___x_137_ = lean_usize_of_nat(v___x_134_);
v___x_138_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0(v_env_126_, v_name_127_, v___x_132_, v___x_136_, v___x_137_);
lean_dec(v___x_132_);
return v___x_138_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isReservedName___boxed(lean_object* v_env_139_, lean_object* v_name_140_){
_start:
{
uint8_t v_res_141_; lean_object* v_r_142_; 
v_res_141_ = lean_is_reserved_name(v_env_139_, v_name_140_);
v_r_142_ = lean_box(v_res_141_);
return v_r_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11___redArg(lean_object* v_x_143_, lean_object* v_x_144_, lean_object* v_x_145_, lean_object* v_x_146_){
_start:
{
lean_object* v_ks_147_; lean_object* v_vs_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_172_; 
v_ks_147_ = lean_ctor_get(v_x_143_, 0);
v_vs_148_ = lean_ctor_get(v_x_143_, 1);
v_isSharedCheck_172_ = !lean_is_exclusive(v_x_143_);
if (v_isSharedCheck_172_ == 0)
{
v___x_150_ = v_x_143_;
v_isShared_151_ = v_isSharedCheck_172_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_vs_148_);
lean_inc(v_ks_147_);
lean_dec(v_x_143_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_172_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_152_; uint8_t v___x_153_; 
v___x_152_ = lean_array_get_size(v_ks_147_);
v___x_153_ = lean_nat_dec_lt(v_x_144_, v___x_152_);
if (v___x_153_ == 0)
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_157_; 
lean_dec(v_x_144_);
v___x_154_ = lean_array_push(v_ks_147_, v_x_145_);
v___x_155_ = lean_array_push(v_vs_148_, v_x_146_);
if (v_isShared_151_ == 0)
{
lean_ctor_set(v___x_150_, 1, v___x_155_);
lean_ctor_set(v___x_150_, 0, v___x_154_);
v___x_157_ = v___x_150_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v___x_154_);
lean_ctor_set(v_reuseFailAlloc_158_, 1, v___x_155_);
v___x_157_ = v_reuseFailAlloc_158_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
return v___x_157_;
}
}
else
{
lean_object* v_k_x27_159_; uint8_t v___x_160_; 
v_k_x27_159_ = lean_array_fget_borrowed(v_ks_147_, v_x_144_);
v___x_160_ = lean_name_eq(v_x_145_, v_k_x27_159_);
if (v___x_160_ == 0)
{
lean_object* v___x_162_; 
if (v_isShared_151_ == 0)
{
v___x_162_ = v___x_150_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_ks_147_);
lean_ctor_set(v_reuseFailAlloc_166_, 1, v_vs_148_);
v___x_162_ = v_reuseFailAlloc_166_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_163_ = lean_unsigned_to_nat(1u);
v___x_164_ = lean_nat_add(v_x_144_, v___x_163_);
lean_dec(v_x_144_);
v_x_143_ = v___x_162_;
v_x_144_ = v___x_164_;
goto _start;
}
}
else
{
lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_170_; 
v___x_167_ = lean_array_fset(v_ks_147_, v_x_144_, v_x_145_);
v___x_168_ = lean_array_fset(v_vs_148_, v_x_144_, v_x_146_);
lean_dec(v_x_144_);
if (v_isShared_151_ == 0)
{
lean_ctor_set(v___x_150_, 1, v___x_168_);
lean_ctor_set(v___x_150_, 0, v___x_167_);
v___x_170_ = v___x_150_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v___x_167_);
lean_ctor_set(v_reuseFailAlloc_171_, 1, v___x_168_);
v___x_170_ = v_reuseFailAlloc_171_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
return v___x_170_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9___redArg(lean_object* v_n_173_, lean_object* v_k_174_, lean_object* v_v_175_){
_start:
{
lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_176_ = lean_unsigned_to_nat(0u);
v___x_177_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11___redArg(v_n_173_, v___x_176_, v_k_174_, v_v_175_);
return v___x_177_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_178_; 
v___x_178_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(lean_object* v_x_179_, size_t v_x_180_, size_t v_x_181_, lean_object* v_x_182_, lean_object* v_x_183_){
_start:
{
if (lean_obj_tag(v_x_179_) == 0)
{
lean_object* v_es_184_; size_t v___x_185_; size_t v___x_186_; lean_object* v_j_187_; lean_object* v___x_188_; uint8_t v___x_189_; 
v_es_184_ = lean_ctor_get(v_x_179_, 0);
v___x_185_ = ((size_t)31ULL);
v___x_186_ = lean_usize_land(v_x_180_, v___x_185_);
v_j_187_ = lean_usize_to_nat(v___x_186_);
v___x_188_ = lean_array_get_size(v_es_184_);
v___x_189_ = lean_nat_dec_lt(v_j_187_, v___x_188_);
if (v___x_189_ == 0)
{
lean_dec(v_j_187_);
lean_dec(v_x_183_);
lean_dec(v_x_182_);
return v_x_179_;
}
else
{
lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_228_; 
lean_inc_ref(v_es_184_);
v_isSharedCheck_228_ = !lean_is_exclusive(v_x_179_);
if (v_isSharedCheck_228_ == 0)
{
lean_object* v_unused_229_; 
v_unused_229_ = lean_ctor_get(v_x_179_, 0);
lean_dec(v_unused_229_);
v___x_191_ = v_x_179_;
v_isShared_192_ = v_isSharedCheck_228_;
goto v_resetjp_190_;
}
else
{
lean_dec(v_x_179_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_228_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v_v_193_; lean_object* v___x_194_; lean_object* v_xs_x27_195_; lean_object* v___y_197_; 
v_v_193_ = lean_array_fget(v_es_184_, v_j_187_);
v___x_194_ = lean_box(0);
v_xs_x27_195_ = lean_array_fset(v_es_184_, v_j_187_, v___x_194_);
switch(lean_obj_tag(v_v_193_))
{
case 0:
{
lean_object* v_key_202_; lean_object* v_val_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_213_; 
v_key_202_ = lean_ctor_get(v_v_193_, 0);
v_val_203_ = lean_ctor_get(v_v_193_, 1);
v_isSharedCheck_213_ = !lean_is_exclusive(v_v_193_);
if (v_isSharedCheck_213_ == 0)
{
v___x_205_ = v_v_193_;
v_isShared_206_ = v_isSharedCheck_213_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_val_203_);
lean_inc(v_key_202_);
lean_dec(v_v_193_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_213_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
uint8_t v___x_207_; 
v___x_207_ = lean_name_eq(v_x_182_, v_key_202_);
if (v___x_207_ == 0)
{
lean_object* v___x_208_; lean_object* v___x_209_; 
lean_del_object(v___x_205_);
v___x_208_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_202_, v_val_203_, v_x_182_, v_x_183_);
v___x_209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_209_, 0, v___x_208_);
v___y_197_ = v___x_209_;
goto v___jp_196_;
}
else
{
lean_object* v___x_211_; 
lean_dec(v_val_203_);
lean_dec(v_key_202_);
if (v_isShared_206_ == 0)
{
lean_ctor_set(v___x_205_, 1, v_x_183_);
lean_ctor_set(v___x_205_, 0, v_x_182_);
v___x_211_ = v___x_205_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v_x_182_);
lean_ctor_set(v_reuseFailAlloc_212_, 1, v_x_183_);
v___x_211_ = v_reuseFailAlloc_212_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
v___y_197_ = v___x_211_;
goto v___jp_196_;
}
}
}
}
case 1:
{
lean_object* v_node_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_226_; 
v_node_214_ = lean_ctor_get(v_v_193_, 0);
v_isSharedCheck_226_ = !lean_is_exclusive(v_v_193_);
if (v_isSharedCheck_226_ == 0)
{
v___x_216_ = v_v_193_;
v_isShared_217_ = v_isSharedCheck_226_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_node_214_);
lean_dec(v_v_193_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_226_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
size_t v___x_218_; size_t v___x_219_; size_t v___x_220_; size_t v___x_221_; lean_object* v___x_222_; lean_object* v___x_224_; 
v___x_218_ = ((size_t)5ULL);
v___x_219_ = lean_usize_shift_right(v_x_180_, v___x_218_);
v___x_220_ = ((size_t)1ULL);
v___x_221_ = lean_usize_add(v_x_181_, v___x_220_);
v___x_222_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(v_node_214_, v___x_219_, v___x_221_, v_x_182_, v_x_183_);
if (v_isShared_217_ == 0)
{
lean_ctor_set(v___x_216_, 0, v___x_222_);
v___x_224_ = v___x_216_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v___x_222_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
v___y_197_ = v___x_224_;
goto v___jp_196_;
}
}
}
default: 
{
lean_object* v___x_227_; 
v___x_227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_227_, 0, v_x_182_);
lean_ctor_set(v___x_227_, 1, v_x_183_);
v___y_197_ = v___x_227_;
goto v___jp_196_;
}
}
v___jp_196_:
{
lean_object* v___x_198_; lean_object* v___x_200_; 
v___x_198_ = lean_array_fset(v_xs_x27_195_, v_j_187_, v___y_197_);
lean_dec(v_j_187_);
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 0, v___x_198_);
v___x_200_ = v___x_191_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v___x_198_);
v___x_200_ = v_reuseFailAlloc_201_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
return v___x_200_;
}
}
}
}
}
else
{
lean_object* v_ks_230_; lean_object* v_vs_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_251_; 
v_ks_230_ = lean_ctor_get(v_x_179_, 0);
v_vs_231_ = lean_ctor_get(v_x_179_, 1);
v_isSharedCheck_251_ = !lean_is_exclusive(v_x_179_);
if (v_isSharedCheck_251_ == 0)
{
v___x_233_ = v_x_179_;
v_isShared_234_ = v_isSharedCheck_251_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_vs_231_);
lean_inc(v_ks_230_);
lean_dec(v_x_179_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_251_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_236_; 
if (v_isShared_234_ == 0)
{
v___x_236_ = v___x_233_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v_ks_230_);
lean_ctor_set(v_reuseFailAlloc_250_, 1, v_vs_231_);
v___x_236_ = v_reuseFailAlloc_250_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
lean_object* v_newNode_237_; uint8_t v___y_239_; size_t v___x_245_; uint8_t v___x_246_; 
v_newNode_237_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9___redArg(v___x_236_, v_x_182_, v_x_183_);
v___x_245_ = ((size_t)7ULL);
v___x_246_ = lean_usize_dec_le(v___x_245_, v_x_181_);
if (v___x_246_ == 0)
{
lean_object* v___x_247_; lean_object* v___x_248_; uint8_t v___x_249_; 
v___x_247_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_237_);
v___x_248_ = lean_unsigned_to_nat(4u);
v___x_249_ = lean_nat_dec_lt(v___x_247_, v___x_248_);
lean_dec(v___x_247_);
v___y_239_ = v___x_249_;
goto v___jp_238_;
}
else
{
v___y_239_ = v___x_246_;
goto v___jp_238_;
}
v___jp_238_:
{
if (v___y_239_ == 0)
{
lean_object* v_ks_240_; lean_object* v_vs_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
v_ks_240_ = lean_ctor_get(v_newNode_237_, 0);
lean_inc_ref(v_ks_240_);
v_vs_241_ = lean_ctor_get(v_newNode_237_, 1);
lean_inc_ref(v_vs_241_);
lean_dec_ref(v_newNode_237_);
v___x_242_ = lean_unsigned_to_nat(0u);
v___x_243_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0);
v___x_244_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg(v_x_181_, v_ks_240_, v_vs_241_, v___x_242_, v___x_243_);
lean_dec_ref(v_vs_241_);
lean_dec_ref(v_ks_240_);
return v___x_244_;
}
else
{
return v_newNode_237_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg(size_t v_depth_252_, lean_object* v_keys_253_, lean_object* v_vals_254_, lean_object* v_i_255_, lean_object* v_entries_256_){
_start:
{
lean_object* v___x_257_; uint8_t v___x_258_; 
v___x_257_ = lean_array_get_size(v_keys_253_);
v___x_258_ = lean_nat_dec_lt(v_i_255_, v___x_257_);
if (v___x_258_ == 0)
{
lean_dec(v_i_255_);
return v_entries_256_;
}
else
{
lean_object* v_k_259_; lean_object* v_v_260_; uint64_t v___y_262_; 
v_k_259_ = lean_array_fget_borrowed(v_keys_253_, v_i_255_);
v_v_260_ = lean_array_fget_borrowed(v_vals_254_, v_i_255_);
if (lean_obj_tag(v_k_259_) == 0)
{
uint64_t v___x_273_; 
v___x_273_ = 1723ULL;
v___y_262_ = v___x_273_;
goto v___jp_261_;
}
else
{
uint64_t v_hash_274_; 
v_hash_274_ = lean_ctor_get_uint64(v_k_259_, sizeof(void*)*2);
v___y_262_ = v_hash_274_;
goto v___jp_261_;
}
v___jp_261_:
{
size_t v_h_263_; size_t v___x_264_; lean_object* v___x_265_; size_t v___x_266_; size_t v___x_267_; size_t v___x_268_; size_t v_h_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v_h_263_ = lean_uint64_to_usize(v___y_262_);
v___x_264_ = ((size_t)5ULL);
v___x_265_ = lean_unsigned_to_nat(1u);
v___x_266_ = ((size_t)1ULL);
v___x_267_ = lean_usize_sub(v_depth_252_, v___x_266_);
v___x_268_ = lean_usize_mul(v___x_264_, v___x_267_);
v_h_269_ = lean_usize_shift_right(v_h_263_, v___x_268_);
v___x_270_ = lean_nat_add(v_i_255_, v___x_265_);
lean_dec(v_i_255_);
lean_inc(v_v_260_);
lean_inc(v_k_259_);
v___x_271_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(v_entries_256_, v_h_269_, v_depth_252_, v_k_259_, v_v_260_);
v_i_255_ = v___x_270_;
v_entries_256_ = v___x_271_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg___boxed(lean_object* v_depth_275_, lean_object* v_keys_276_, lean_object* v_vals_277_, lean_object* v_i_278_, lean_object* v_entries_279_){
_start:
{
size_t v_depth_boxed_280_; lean_object* v_res_281_; 
v_depth_boxed_280_ = lean_unbox_usize(v_depth_275_);
lean_dec(v_depth_275_);
v_res_281_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg(v_depth_boxed_280_, v_keys_276_, v_vals_277_, v_i_278_, v_entries_279_);
lean_dec_ref(v_vals_277_);
lean_dec_ref(v_keys_276_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___boxed(lean_object* v_x_282_, lean_object* v_x_283_, lean_object* v_x_284_, lean_object* v_x_285_, lean_object* v_x_286_){
_start:
{
size_t v_x_1084__boxed_287_; size_t v_x_1085__boxed_288_; lean_object* v_res_289_; 
v_x_1084__boxed_287_ = lean_unbox_usize(v_x_283_);
lean_dec(v_x_283_);
v_x_1085__boxed_288_ = lean_unbox_usize(v_x_284_);
lean_dec(v_x_284_);
v_res_289_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(v_x_282_, v_x_1084__boxed_287_, v_x_1085__boxed_288_, v_x_285_, v_x_286_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3___redArg(lean_object* v_x_290_, lean_object* v_x_291_, lean_object* v_x_292_){
_start:
{
uint64_t v___y_294_; 
if (lean_obj_tag(v_x_291_) == 0)
{
uint64_t v___x_298_; 
v___x_298_ = 1723ULL;
v___y_294_ = v___x_298_;
goto v___jp_293_;
}
else
{
uint64_t v_hash_299_; 
v_hash_299_ = lean_ctor_get_uint64(v_x_291_, sizeof(void*)*2);
v___y_294_ = v_hash_299_;
goto v___jp_293_;
}
v___jp_293_:
{
size_t v___x_295_; size_t v___x_296_; lean_object* v___x_297_; 
v___x_295_ = lean_uint64_to_usize(v___y_294_);
v___x_296_ = ((size_t)1ULL);
v___x_297_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(v_x_290_, v___x_295_, v___x_296_, v_x_291_, v_x_292_);
return v___x_297_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16___redArg(lean_object* v_x_300_, lean_object* v_x_301_){
_start:
{
if (lean_obj_tag(v_x_301_) == 0)
{
return v_x_300_;
}
else
{
lean_object* v_key_302_; lean_object* v_value_303_; lean_object* v_tail_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_330_; 
v_key_302_ = lean_ctor_get(v_x_301_, 0);
v_value_303_ = lean_ctor_get(v_x_301_, 1);
v_tail_304_ = lean_ctor_get(v_x_301_, 2);
v_isSharedCheck_330_ = !lean_is_exclusive(v_x_301_);
if (v_isSharedCheck_330_ == 0)
{
v___x_306_ = v_x_301_;
v_isShared_307_ = v_isSharedCheck_330_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_tail_304_);
lean_inc(v_value_303_);
lean_inc(v_key_302_);
lean_dec(v_x_301_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_330_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_308_; uint64_t v___y_310_; 
v___x_308_ = lean_array_get_size(v_x_300_);
if (lean_obj_tag(v_key_302_) == 0)
{
uint64_t v___x_328_; 
v___x_328_ = 1723ULL;
v___y_310_ = v___x_328_;
goto v___jp_309_;
}
else
{
uint64_t v_hash_329_; 
v_hash_329_ = lean_ctor_get_uint64(v_key_302_, sizeof(void*)*2);
v___y_310_ = v_hash_329_;
goto v___jp_309_;
}
v___jp_309_:
{
uint64_t v___x_311_; uint64_t v___x_312_; uint64_t v_fold_313_; uint64_t v___x_314_; uint64_t v___x_315_; uint64_t v___x_316_; size_t v___x_317_; size_t v___x_318_; size_t v___x_319_; size_t v___x_320_; size_t v___x_321_; lean_object* v___x_322_; lean_object* v___x_324_; 
v___x_311_ = 32ULL;
v___x_312_ = lean_uint64_shift_right(v___y_310_, v___x_311_);
v_fold_313_ = lean_uint64_xor(v___y_310_, v___x_312_);
v___x_314_ = 16ULL;
v___x_315_ = lean_uint64_shift_right(v_fold_313_, v___x_314_);
v___x_316_ = lean_uint64_xor(v_fold_313_, v___x_315_);
v___x_317_ = lean_uint64_to_usize(v___x_316_);
v___x_318_ = lean_usize_of_nat(v___x_308_);
v___x_319_ = ((size_t)1ULL);
v___x_320_ = lean_usize_sub(v___x_318_, v___x_319_);
v___x_321_ = lean_usize_land(v___x_317_, v___x_320_);
v___x_322_ = lean_array_uget_borrowed(v_x_300_, v___x_321_);
lean_inc(v___x_322_);
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 2, v___x_322_);
v___x_324_ = v___x_306_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v_key_302_);
lean_ctor_set(v_reuseFailAlloc_327_, 1, v_value_303_);
lean_ctor_set(v_reuseFailAlloc_327_, 2, v___x_322_);
v___x_324_ = v_reuseFailAlloc_327_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
lean_object* v___x_325_; 
v___x_325_ = lean_array_uset(v_x_300_, v___x_321_, v___x_324_);
v_x_300_ = v___x_325_;
v_x_301_ = v_tail_304_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14___redArg(lean_object* v_i_331_, lean_object* v_source_332_, lean_object* v_target_333_){
_start:
{
lean_object* v___x_334_; uint8_t v___x_335_; 
v___x_334_ = lean_array_get_size(v_source_332_);
v___x_335_ = lean_nat_dec_lt(v_i_331_, v___x_334_);
if (v___x_335_ == 0)
{
lean_dec_ref(v_source_332_);
lean_dec(v_i_331_);
return v_target_333_;
}
else
{
lean_object* v_es_336_; lean_object* v___x_337_; lean_object* v_source_338_; lean_object* v_target_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v_es_336_ = lean_array_fget(v_source_332_, v_i_331_);
v___x_337_ = lean_box(0);
v_source_338_ = lean_array_fset(v_source_332_, v_i_331_, v___x_337_);
v_target_339_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16___redArg(v_target_333_, v_es_336_);
v___x_340_ = lean_unsigned_to_nat(1u);
v___x_341_ = lean_nat_add(v_i_331_, v___x_340_);
lean_dec(v_i_331_);
v_i_331_ = v___x_341_;
v_source_332_ = v_source_338_;
v_target_333_ = v_target_339_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9___redArg(lean_object* v_data_343_){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v_nbuckets_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_344_ = lean_array_get_size(v_data_343_);
v___x_345_ = lean_unsigned_to_nat(2u);
v_nbuckets_346_ = lean_nat_mul(v___x_344_, v___x_345_);
v___x_347_ = lean_unsigned_to_nat(0u);
v___x_348_ = lean_box(0);
v___x_349_ = lean_mk_array(v_nbuckets_346_, v___x_348_);
v___x_350_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14___redArg(v___x_347_, v_data_343_, v___x_349_);
return v___x_350_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg(lean_object* v_a_351_, lean_object* v_x_352_){
_start:
{
if (lean_obj_tag(v_x_352_) == 0)
{
uint8_t v___x_353_; 
v___x_353_ = 0;
return v___x_353_;
}
else
{
lean_object* v_key_354_; lean_object* v_tail_355_; uint8_t v___x_356_; 
v_key_354_ = lean_ctor_get(v_x_352_, 0);
v_tail_355_ = lean_ctor_get(v_x_352_, 2);
v___x_356_ = lean_name_eq(v_key_354_, v_a_351_);
if (v___x_356_ == 0)
{
v_x_352_ = v_tail_355_;
goto _start;
}
else
{
return v___x_356_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg___boxed(lean_object* v_a_358_, lean_object* v_x_359_){
_start:
{
uint8_t v_res_360_; lean_object* v_r_361_; 
v_res_360_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg(v_a_358_, v_x_359_);
lean_dec(v_x_359_);
lean_dec(v_a_358_);
v_r_361_ = lean_box(v_res_360_);
return v_r_361_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10___redArg(lean_object* v_a_362_, lean_object* v_b_363_, lean_object* v_x_364_){
_start:
{
if (lean_obj_tag(v_x_364_) == 0)
{
lean_dec(v_b_363_);
lean_dec(v_a_362_);
return v_x_364_;
}
else
{
lean_object* v_key_365_; lean_object* v_value_366_; lean_object* v_tail_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_379_; 
v_key_365_ = lean_ctor_get(v_x_364_, 0);
v_value_366_ = lean_ctor_get(v_x_364_, 1);
v_tail_367_ = lean_ctor_get(v_x_364_, 2);
v_isSharedCheck_379_ = !lean_is_exclusive(v_x_364_);
if (v_isSharedCheck_379_ == 0)
{
v___x_369_ = v_x_364_;
v_isShared_370_ = v_isSharedCheck_379_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_tail_367_);
lean_inc(v_value_366_);
lean_inc(v_key_365_);
lean_dec(v_x_364_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_379_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
uint8_t v___x_371_; 
v___x_371_ = lean_name_eq(v_key_365_, v_a_362_);
if (v___x_371_ == 0)
{
lean_object* v___x_372_; lean_object* v___x_374_; 
v___x_372_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10___redArg(v_a_362_, v_b_363_, v_tail_367_);
if (v_isShared_370_ == 0)
{
lean_ctor_set(v___x_369_, 2, v___x_372_);
v___x_374_ = v___x_369_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v_key_365_);
lean_ctor_set(v_reuseFailAlloc_375_, 1, v_value_366_);
lean_ctor_set(v_reuseFailAlloc_375_, 2, v___x_372_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
else
{
lean_object* v___x_377_; 
lean_dec(v_value_366_);
lean_dec(v_key_365_);
if (v_isShared_370_ == 0)
{
lean_ctor_set(v___x_369_, 1, v_b_363_);
lean_ctor_set(v___x_369_, 0, v_a_362_);
v___x_377_ = v___x_369_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_a_362_);
lean_ctor_set(v_reuseFailAlloc_378_, 1, v_b_363_);
lean_ctor_set(v_reuseFailAlloc_378_, 2, v_tail_367_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
return v___x_377_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4___redArg(lean_object* v_m_380_, lean_object* v_a_381_, lean_object* v_b_382_){
_start:
{
lean_object* v_size_383_; lean_object* v_buckets_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_430_; 
v_size_383_ = lean_ctor_get(v_m_380_, 0);
v_buckets_384_ = lean_ctor_get(v_m_380_, 1);
v_isSharedCheck_430_ = !lean_is_exclusive(v_m_380_);
if (v_isSharedCheck_430_ == 0)
{
v___x_386_ = v_m_380_;
v_isShared_387_ = v_isSharedCheck_430_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_buckets_384_);
lean_inc(v_size_383_);
lean_dec(v_m_380_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_430_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_388_; uint64_t v___y_390_; 
v___x_388_ = lean_array_get_size(v_buckets_384_);
if (lean_obj_tag(v_a_381_) == 0)
{
uint64_t v___x_428_; 
v___x_428_ = 1723ULL;
v___y_390_ = v___x_428_;
goto v___jp_389_;
}
else
{
uint64_t v_hash_429_; 
v_hash_429_ = lean_ctor_get_uint64(v_a_381_, sizeof(void*)*2);
v___y_390_ = v_hash_429_;
goto v___jp_389_;
}
v___jp_389_:
{
uint64_t v___x_391_; uint64_t v___x_392_; uint64_t v_fold_393_; uint64_t v___x_394_; uint64_t v___x_395_; uint64_t v___x_396_; size_t v___x_397_; size_t v___x_398_; size_t v___x_399_; size_t v___x_400_; size_t v___x_401_; lean_object* v_bkt_402_; uint8_t v___x_403_; 
v___x_391_ = 32ULL;
v___x_392_ = lean_uint64_shift_right(v___y_390_, v___x_391_);
v_fold_393_ = lean_uint64_xor(v___y_390_, v___x_392_);
v___x_394_ = 16ULL;
v___x_395_ = lean_uint64_shift_right(v_fold_393_, v___x_394_);
v___x_396_ = lean_uint64_xor(v_fold_393_, v___x_395_);
v___x_397_ = lean_uint64_to_usize(v___x_396_);
v___x_398_ = lean_usize_of_nat(v___x_388_);
v___x_399_ = ((size_t)1ULL);
v___x_400_ = lean_usize_sub(v___x_398_, v___x_399_);
v___x_401_ = lean_usize_land(v___x_397_, v___x_400_);
v_bkt_402_ = lean_array_uget_borrowed(v_buckets_384_, v___x_401_);
v___x_403_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg(v_a_381_, v_bkt_402_);
if (v___x_403_ == 0)
{
lean_object* v___x_404_; lean_object* v_size_x27_405_; lean_object* v___x_406_; lean_object* v_buckets_x27_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; uint8_t v___x_413_; 
v___x_404_ = lean_unsigned_to_nat(1u);
v_size_x27_405_ = lean_nat_add(v_size_383_, v___x_404_);
lean_dec(v_size_383_);
lean_inc(v_bkt_402_);
v___x_406_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_406_, 0, v_a_381_);
lean_ctor_set(v___x_406_, 1, v_b_382_);
lean_ctor_set(v___x_406_, 2, v_bkt_402_);
v_buckets_x27_407_ = lean_array_uset(v_buckets_384_, v___x_401_, v___x_406_);
v___x_408_ = lean_unsigned_to_nat(4u);
v___x_409_ = lean_nat_mul(v_size_x27_405_, v___x_408_);
v___x_410_ = lean_unsigned_to_nat(3u);
v___x_411_ = lean_nat_div(v___x_409_, v___x_410_);
lean_dec(v___x_409_);
v___x_412_ = lean_array_get_size(v_buckets_x27_407_);
v___x_413_ = lean_nat_dec_le(v___x_411_, v___x_412_);
lean_dec(v___x_411_);
if (v___x_413_ == 0)
{
lean_object* v_val_414_; lean_object* v___x_416_; 
v_val_414_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9___redArg(v_buckets_x27_407_);
if (v_isShared_387_ == 0)
{
lean_ctor_set(v___x_386_, 1, v_val_414_);
lean_ctor_set(v___x_386_, 0, v_size_x27_405_);
v___x_416_ = v___x_386_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v_size_x27_405_);
lean_ctor_set(v_reuseFailAlloc_417_, 1, v_val_414_);
v___x_416_ = v_reuseFailAlloc_417_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
return v___x_416_;
}
}
else
{
lean_object* v___x_419_; 
if (v_isShared_387_ == 0)
{
lean_ctor_set(v___x_386_, 1, v_buckets_x27_407_);
lean_ctor_set(v___x_386_, 0, v_size_x27_405_);
v___x_419_ = v___x_386_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v_size_x27_405_);
lean_ctor_set(v_reuseFailAlloc_420_, 1, v_buckets_x27_407_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
return v___x_419_;
}
}
}
else
{
lean_object* v___x_421_; lean_object* v_buckets_x27_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_426_; 
lean_inc(v_bkt_402_);
v___x_421_ = lean_box(0);
v_buckets_x27_422_ = lean_array_uset(v_buckets_384_, v___x_401_, v___x_421_);
v___x_423_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10___redArg(v_a_381_, v_b_382_, v_bkt_402_);
v___x_424_ = lean_array_uset(v_buckets_x27_422_, v___x_401_, v___x_423_);
if (v_isShared_387_ == 0)
{
lean_ctor_set(v___x_386_, 1, v___x_424_);
v___x_426_ = v___x_386_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_size_383_);
lean_ctor_set(v_reuseFailAlloc_427_, 1, v___x_424_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1___redArg(lean_object* v_x_431_, lean_object* v_x_432_, lean_object* v_x_433_){
_start:
{
uint8_t v_stage_u2081_434_; 
v_stage_u2081_434_ = lean_ctor_get_uint8(v_x_431_, sizeof(void*)*2);
if (v_stage_u2081_434_ == 0)
{
lean_object* v_map_u2081_435_; lean_object* v_map_u2082_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_444_; 
v_map_u2081_435_ = lean_ctor_get(v_x_431_, 0);
v_map_u2082_436_ = lean_ctor_get(v_x_431_, 1);
v_isSharedCheck_444_ = !lean_is_exclusive(v_x_431_);
if (v_isSharedCheck_444_ == 0)
{
v___x_438_ = v_x_431_;
v_isShared_439_ = v_isSharedCheck_444_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_map_u2082_436_);
lean_inc(v_map_u2081_435_);
lean_dec(v_x_431_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_444_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_440_; lean_object* v___x_442_; 
v___x_440_ = l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3___redArg(v_map_u2082_436_, v_x_432_, v_x_433_);
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 1, v___x_440_);
v___x_442_ = v___x_438_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v_map_u2081_435_);
lean_ctor_set(v_reuseFailAlloc_443_, 1, v___x_440_);
lean_ctor_set_uint8(v_reuseFailAlloc_443_, sizeof(void*)*2, v_stage_u2081_434_);
v___x_442_ = v_reuseFailAlloc_443_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
return v___x_442_;
}
}
}
else
{
lean_object* v_map_u2081_445_; lean_object* v_map_u2082_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_454_; 
v_map_u2081_445_ = lean_ctor_get(v_x_431_, 0);
v_map_u2082_446_ = lean_ctor_get(v_x_431_, 1);
v_isSharedCheck_454_ = !lean_is_exclusive(v_x_431_);
if (v_isSharedCheck_454_ == 0)
{
v___x_448_ = v_x_431_;
v_isShared_449_ = v_isSharedCheck_454_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_map_u2082_446_);
lean_inc(v_map_u2081_445_);
lean_dec(v_x_431_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_454_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v___x_450_; lean_object* v___x_452_; 
v___x_450_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4___redArg(v_map_u2081_445_, v_x_432_, v_x_433_);
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 0, v___x_450_);
v___x_452_ = v___x_448_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v___x_450_);
lean_ctor_set(v_reuseFailAlloc_453_, 1, v_map_u2082_446_);
lean_ctor_set_uint8(v_reuseFailAlloc_453_, sizeof(void*)*2, v_stage_u2081_434_);
v___x_452_ = v_reuseFailAlloc_453_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
return v___x_452_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg(lean_object* v_a_455_, lean_object* v_x_456_){
_start:
{
if (lean_obj_tag(v_x_456_) == 0)
{
lean_object* v___x_457_; 
v___x_457_ = lean_box(0);
return v___x_457_;
}
else
{
lean_object* v_key_458_; lean_object* v_value_459_; lean_object* v_tail_460_; uint8_t v___x_461_; 
v_key_458_ = lean_ctor_get(v_x_456_, 0);
v_value_459_ = lean_ctor_get(v_x_456_, 1);
v_tail_460_ = lean_ctor_get(v_x_456_, 2);
v___x_461_ = lean_name_eq(v_key_458_, v_a_455_);
if (v___x_461_ == 0)
{
v_x_456_ = v_tail_460_;
goto _start;
}
else
{
lean_object* v___x_463_; 
lean_inc(v_value_459_);
v___x_463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_463_, 0, v_value_459_);
return v___x_463_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_a_464_, lean_object* v_x_465_){
_start:
{
lean_object* v_res_466_; 
v_res_466_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg(v_a_464_, v_x_465_);
lean_dec(v_x_465_);
lean_dec(v_a_464_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(lean_object* v_m_467_, lean_object* v_a_468_){
_start:
{
lean_object* v_buckets_469_; lean_object* v___x_470_; uint64_t v___y_472_; 
v_buckets_469_ = lean_ctor_get(v_m_467_, 1);
v___x_470_ = lean_array_get_size(v_buckets_469_);
if (lean_obj_tag(v_a_468_) == 0)
{
uint64_t v___x_486_; 
v___x_486_ = 1723ULL;
v___y_472_ = v___x_486_;
goto v___jp_471_;
}
else
{
uint64_t v_hash_487_; 
v_hash_487_ = lean_ctor_get_uint64(v_a_468_, sizeof(void*)*2);
v___y_472_ = v_hash_487_;
goto v___jp_471_;
}
v___jp_471_:
{
uint64_t v___x_473_; uint64_t v___x_474_; uint64_t v_fold_475_; uint64_t v___x_476_; uint64_t v___x_477_; uint64_t v___x_478_; size_t v___x_479_; size_t v___x_480_; size_t v___x_481_; size_t v___x_482_; size_t v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_473_ = 32ULL;
v___x_474_ = lean_uint64_shift_right(v___y_472_, v___x_473_);
v_fold_475_ = lean_uint64_xor(v___y_472_, v___x_474_);
v___x_476_ = 16ULL;
v___x_477_ = lean_uint64_shift_right(v_fold_475_, v___x_476_);
v___x_478_ = lean_uint64_xor(v_fold_475_, v___x_477_);
v___x_479_ = lean_uint64_to_usize(v___x_478_);
v___x_480_ = lean_usize_of_nat(v___x_470_);
v___x_481_ = ((size_t)1ULL);
v___x_482_ = lean_usize_sub(v___x_480_, v___x_481_);
v___x_483_ = lean_usize_land(v___x_479_, v___x_482_);
v___x_484_ = lean_array_uget_borrowed(v_buckets_469_, v___x_483_);
v___x_485_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg(v_a_468_, v___x_484_);
return v___x_485_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg___boxed(lean_object* v_m_488_, lean_object* v_a_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(v_m_488_, v_a_489_);
lean_dec(v_a_489_);
lean_dec_ref(v_m_488_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_keys_491_, lean_object* v_vals_492_, lean_object* v_i_493_, lean_object* v_k_494_){
_start:
{
lean_object* v___x_495_; uint8_t v___x_496_; 
v___x_495_ = lean_array_get_size(v_keys_491_);
v___x_496_ = lean_nat_dec_lt(v_i_493_, v___x_495_);
if (v___x_496_ == 0)
{
lean_object* v___x_497_; 
lean_dec(v_i_493_);
v___x_497_ = lean_box(0);
return v___x_497_;
}
else
{
lean_object* v_k_x27_498_; uint8_t v___x_499_; 
v_k_x27_498_ = lean_array_fget_borrowed(v_keys_491_, v_i_493_);
v___x_499_ = lean_name_eq(v_k_494_, v_k_x27_498_);
if (v___x_499_ == 0)
{
lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_500_ = lean_unsigned_to_nat(1u);
v___x_501_ = lean_nat_add(v_i_493_, v___x_500_);
lean_dec(v_i_493_);
v_i_493_ = v___x_501_;
goto _start;
}
else
{
lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_503_ = lean_array_fget_borrowed(v_vals_492_, v_i_493_);
lean_dec(v_i_493_);
lean_inc(v___x_503_);
v___x_504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_504_, 0, v___x_503_);
return v___x_504_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_keys_505_, lean_object* v_vals_506_, lean_object* v_i_507_, lean_object* v_k_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg(v_keys_505_, v_vals_506_, v_i_507_, v_k_508_);
lean_dec(v_k_508_);
lean_dec_ref(v_vals_506_);
lean_dec_ref(v_keys_505_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg(lean_object* v_x_510_, size_t v_x_511_, lean_object* v_x_512_){
_start:
{
if (lean_obj_tag(v_x_510_) == 0)
{
lean_object* v_es_513_; lean_object* v___x_514_; size_t v___x_515_; size_t v___x_516_; lean_object* v_j_517_; lean_object* v___x_518_; 
v_es_513_ = lean_ctor_get(v_x_510_, 0);
v___x_514_ = lean_box(2);
v___x_515_ = ((size_t)31ULL);
v___x_516_ = lean_usize_land(v_x_511_, v___x_515_);
v_j_517_ = lean_usize_to_nat(v___x_516_);
v___x_518_ = lean_array_get_borrowed(v___x_514_, v_es_513_, v_j_517_);
lean_dec(v_j_517_);
switch(lean_obj_tag(v___x_518_))
{
case 0:
{
lean_object* v_key_519_; lean_object* v_val_520_; uint8_t v___x_521_; 
v_key_519_ = lean_ctor_get(v___x_518_, 0);
v_val_520_ = lean_ctor_get(v___x_518_, 1);
v___x_521_ = lean_name_eq(v_x_512_, v_key_519_);
if (v___x_521_ == 0)
{
lean_object* v___x_522_; 
v___x_522_ = lean_box(0);
return v___x_522_;
}
else
{
lean_object* v___x_523_; 
lean_inc(v_val_520_);
v___x_523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_523_, 0, v_val_520_);
return v___x_523_;
}
}
case 1:
{
lean_object* v_node_524_; size_t v___x_525_; size_t v___x_526_; 
v_node_524_ = lean_ctor_get(v___x_518_, 0);
v___x_525_ = ((size_t)5ULL);
v___x_526_ = lean_usize_shift_right(v_x_511_, v___x_525_);
v_x_510_ = v_node_524_;
v_x_511_ = v___x_526_;
goto _start;
}
default: 
{
lean_object* v___x_528_; 
v___x_528_ = lean_box(0);
return v___x_528_;
}
}
}
else
{
lean_object* v_ks_529_; lean_object* v_vs_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v_ks_529_ = lean_ctor_get(v_x_510_, 0);
v_vs_530_ = lean_ctor_get(v_x_510_, 1);
v___x_531_ = lean_unsigned_to_nat(0u);
v___x_532_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg(v_ks_529_, v_vs_530_, v___x_531_, v_x_512_);
return v___x_532_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_533_, lean_object* v_x_534_, lean_object* v_x_535_){
_start:
{
size_t v_x_1590__boxed_536_; lean_object* v_res_537_; 
v_x_1590__boxed_536_ = lean_unbox_usize(v_x_534_);
lean_dec(v_x_534_);
v_res_537_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg(v_x_533_, v_x_1590__boxed_536_, v_x_535_);
lean_dec(v_x_535_);
lean_dec_ref(v_x_533_);
return v_res_537_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg(lean_object* v_x_538_, lean_object* v_x_539_){
_start:
{
uint64_t v___y_541_; 
if (lean_obj_tag(v_x_539_) == 0)
{
uint64_t v___x_544_; 
v___x_544_ = 1723ULL;
v___y_541_ = v___x_544_;
goto v___jp_540_;
}
else
{
uint64_t v_hash_545_; 
v_hash_545_ = lean_ctor_get_uint64(v_x_539_, sizeof(void*)*2);
v___y_541_ = v_hash_545_;
goto v___jp_540_;
}
v___jp_540_:
{
size_t v___x_542_; lean_object* v___x_543_; 
v___x_542_ = lean_uint64_to_usize(v___y_541_);
v___x_543_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg(v_x_538_, v___x_542_, v_x_539_);
return v___x_543_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg___boxed(lean_object* v_x_546_, lean_object* v_x_547_){
_start:
{
lean_object* v_res_548_; 
v_res_548_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg(v_x_546_, v_x_547_);
lean_dec(v_x_547_);
lean_dec_ref(v_x_546_);
return v_res_548_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(lean_object* v_x_549_, lean_object* v_x_550_){
_start:
{
uint8_t v_stage_u2081_551_; 
v_stage_u2081_551_ = lean_ctor_get_uint8(v_x_549_, sizeof(void*)*2);
if (v_stage_u2081_551_ == 0)
{
lean_object* v_map_u2081_552_; lean_object* v_map_u2082_553_; lean_object* v___x_554_; 
v_map_u2081_552_ = lean_ctor_get(v_x_549_, 0);
v_map_u2082_553_ = lean_ctor_get(v_x_549_, 1);
v___x_554_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg(v_map_u2082_553_, v_x_550_);
if (lean_obj_tag(v___x_554_) == 0)
{
lean_object* v___x_555_; 
v___x_555_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(v_map_u2081_552_, v_x_550_);
return v___x_555_;
}
else
{
return v___x_554_;
}
}
else
{
lean_object* v_map_u2081_556_; lean_object* v___x_557_; 
v_map_u2081_556_ = lean_ctor_get(v_x_549_, 0);
v___x_557_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(v_map_u2081_556_, v_x_550_);
return v___x_557_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg___boxed(lean_object* v_x_558_, lean_object* v_x_559_){
_start:
{
lean_object* v_res_560_; 
v_res_560_ = l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(v_x_558_, v_x_559_);
lean_dec(v_x_559_);
lean_dec_ref(v_x_558_);
return v_res_560_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_addAliasEntry_spec__2(lean_object* v_a_561_, lean_object* v_x_562_){
_start:
{
if (lean_obj_tag(v_x_562_) == 0)
{
uint8_t v___x_563_; 
v___x_563_ = 0;
return v___x_563_;
}
else
{
lean_object* v_head_564_; lean_object* v_tail_565_; uint8_t v___x_566_; 
v_head_564_ = lean_ctor_get(v_x_562_, 0);
v_tail_565_ = lean_ctor_get(v_x_562_, 1);
v___x_566_ = lean_name_eq(v_a_561_, v_head_564_);
if (v___x_566_ == 0)
{
v_x_562_ = v_tail_565_;
goto _start;
}
else
{
return v___x_566_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_addAliasEntry_spec__2___boxed(lean_object* v_a_568_, lean_object* v_x_569_){
_start:
{
uint8_t v_res_570_; lean_object* v_r_571_; 
v_res_570_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_a_568_, v_x_569_);
lean_dec(v_x_569_);
lean_dec(v_a_568_);
v_r_571_ = lean_box(v_res_570_);
return v_r_571_;
}
}
LEAN_EXPORT lean_object* l_Lean_addAliasEntry(lean_object* v_s_572_, lean_object* v_e_573_){
_start:
{
lean_object* v_fst_574_; lean_object* v_snd_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_591_; 
v_fst_574_ = lean_ctor_get(v_e_573_, 0);
v_snd_575_ = lean_ctor_get(v_e_573_, 1);
v_isSharedCheck_591_ = !lean_is_exclusive(v_e_573_);
if (v_isSharedCheck_591_ == 0)
{
v___x_577_ = v_e_573_;
v_isShared_578_ = v_isSharedCheck_591_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_snd_575_);
lean_inc(v_fst_574_);
lean_dec(v_e_573_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_591_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v___x_579_; 
v___x_579_ = l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(v_s_572_, v_fst_574_);
if (lean_obj_tag(v___x_579_) == 0)
{
lean_object* v___x_580_; lean_object* v___x_582_; 
v___x_580_ = lean_box(0);
if (v_isShared_578_ == 0)
{
lean_ctor_set_tag(v___x_577_, 1);
lean_ctor_set(v___x_577_, 1, v___x_580_);
lean_ctor_set(v___x_577_, 0, v_snd_575_);
v___x_582_ = v___x_577_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v_snd_575_);
lean_ctor_set(v_reuseFailAlloc_584_, 1, v___x_580_);
v___x_582_ = v_reuseFailAlloc_584_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
lean_object* v___x_583_; 
v___x_583_ = l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1___redArg(v_s_572_, v_fst_574_, v___x_582_);
return v___x_583_;
}
}
else
{
lean_object* v_val_585_; uint8_t v___x_586_; 
v_val_585_ = lean_ctor_get(v___x_579_, 0);
lean_inc(v_val_585_);
lean_dec_ref_known(v___x_579_, 1);
v___x_586_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_snd_575_, v_val_585_);
if (v___x_586_ == 0)
{
lean_object* v___x_588_; 
if (v_isShared_578_ == 0)
{
lean_ctor_set_tag(v___x_577_, 1);
lean_ctor_set(v___x_577_, 1, v_val_585_);
lean_ctor_set(v___x_577_, 0, v_snd_575_);
v___x_588_ = v___x_577_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v_snd_575_);
lean_ctor_set(v_reuseFailAlloc_590_, 1, v_val_585_);
v___x_588_ = v_reuseFailAlloc_590_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
lean_object* v___x_589_; 
v___x_589_ = l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1___redArg(v_s_572_, v_fst_574_, v___x_588_);
return v___x_589_;
}
}
else
{
lean_dec(v_val_585_);
lean_del_object(v___x_577_);
lean_dec(v_snd_575_);
lean_dec(v_fst_574_);
return v_s_572_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0(lean_object* v_00_u03b2_592_, lean_object* v_x_593_, lean_object* v_x_594_){
_start:
{
lean_object* v___x_595_; 
v___x_595_ = l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(v_x_593_, v_x_594_);
return v___x_595_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___boxed(lean_object* v_00_u03b2_596_, lean_object* v_x_597_, lean_object* v_x_598_){
_start:
{
lean_object* v_res_599_; 
v_res_599_ = l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0(v_00_u03b2_596_, v_x_597_, v_x_598_);
lean_dec(v_x_598_);
lean_dec_ref(v_x_597_);
return v_res_599_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1(lean_object* v_00_u03b2_600_, lean_object* v_x_601_, lean_object* v_x_602_, lean_object* v_x_603_){
_start:
{
lean_object* v___x_604_; 
v___x_604_ = l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1___redArg(v_x_601_, v_x_602_, v_x_603_);
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0(lean_object* v_00_u03b2_605_, lean_object* v_x_606_, lean_object* v_x_607_){
_start:
{
lean_object* v___x_608_; 
v___x_608_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg(v_x_606_, v_x_607_);
return v___x_608_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___boxed(lean_object* v_00_u03b2_609_, lean_object* v_x_610_, lean_object* v_x_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0(v_00_u03b2_609_, v_x_610_, v_x_611_);
lean_dec(v_x_611_);
lean_dec_ref(v_x_610_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1(lean_object* v_00_u03b2_613_, lean_object* v_m_614_, lean_object* v_a_615_){
_start:
{
lean_object* v___x_616_; 
v___x_616_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(v_m_614_, v_a_615_);
return v___x_616_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___boxed(lean_object* v_00_u03b2_617_, lean_object* v_m_618_, lean_object* v_a_619_){
_start:
{
lean_object* v_res_620_; 
v_res_620_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1(v_00_u03b2_617_, v_m_618_, v_a_619_);
lean_dec(v_a_619_);
lean_dec_ref(v_m_618_);
return v_res_620_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3(lean_object* v_00_u03b2_621_, lean_object* v_x_622_, lean_object* v_x_623_, lean_object* v_x_624_){
_start:
{
lean_object* v___x_625_; 
v___x_625_ = l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3___redArg(v_x_622_, v_x_623_, v_x_624_);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4(lean_object* v_00_u03b2_626_, lean_object* v_m_627_, lean_object* v_a_628_, lean_object* v_b_629_){
_start:
{
lean_object* v___x_630_; 
v___x_630_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4___redArg(v_m_627_, v_a_628_, v_b_629_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_631_, lean_object* v_x_632_, size_t v_x_633_, lean_object* v_x_634_){
_start:
{
lean_object* v___x_635_; 
v___x_635_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg(v_x_632_, v_x_633_, v_x_634_);
return v___x_635_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_636_, lean_object* v_x_637_, lean_object* v_x_638_, lean_object* v_x_639_){
_start:
{
size_t v_x_1755__boxed_640_; lean_object* v_res_641_; 
v_x_1755__boxed_640_ = lean_unbox_usize(v_x_638_);
lean_dec(v_x_638_);
v_res_641_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1(v_00_u03b2_636_, v_x_637_, v_x_1755__boxed_640_, v_x_639_);
lean_dec(v_x_639_);
lean_dec_ref(v_x_637_);
return v_res_641_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_642_, lean_object* v_a_643_, lean_object* v_x_644_){
_start:
{
lean_object* v___x_645_; 
v___x_645_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg(v_a_643_, v_x_644_);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_646_, lean_object* v_a_647_, lean_object* v_x_648_){
_start:
{
lean_object* v_res_649_; 
v_res_649_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3(v_00_u03b2_646_, v_a_647_, v_x_648_);
lean_dec(v_x_648_);
lean_dec(v_a_647_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6(lean_object* v_00_u03b2_650_, lean_object* v_x_651_, size_t v_x_652_, size_t v_x_653_, lean_object* v_x_654_, lean_object* v_x_655_){
_start:
{
lean_object* v___x_656_; 
v___x_656_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(v_x_651_, v_x_652_, v_x_653_, v_x_654_, v_x_655_);
return v___x_656_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___boxed(lean_object* v_00_u03b2_657_, lean_object* v_x_658_, lean_object* v_x_659_, lean_object* v_x_660_, lean_object* v_x_661_, lean_object* v_x_662_){
_start:
{
size_t v_x_1771__boxed_663_; size_t v_x_1772__boxed_664_; lean_object* v_res_665_; 
v_x_1771__boxed_663_ = lean_unbox_usize(v_x_659_);
lean_dec(v_x_659_);
v_x_1772__boxed_664_ = lean_unbox_usize(v_x_660_);
lean_dec(v_x_660_);
v_res_665_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6(v_00_u03b2_657_, v_x_658_, v_x_1771__boxed_663_, v_x_1772__boxed_664_, v_x_661_, v_x_662_);
return v_res_665_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8(lean_object* v_00_u03b2_666_, lean_object* v_a_667_, lean_object* v_x_668_){
_start:
{
uint8_t v___x_669_; 
v___x_669_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg(v_a_667_, v_x_668_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___boxed(lean_object* v_00_u03b2_670_, lean_object* v_a_671_, lean_object* v_x_672_){
_start:
{
uint8_t v_res_673_; lean_object* v_r_674_; 
v_res_673_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8(v_00_u03b2_670_, v_a_671_, v_x_672_);
lean_dec(v_x_672_);
lean_dec(v_a_671_);
v_r_674_ = lean_box(v_res_673_);
return v_r_674_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9(lean_object* v_00_u03b2_675_, lean_object* v_data_676_){
_start:
{
lean_object* v___x_677_; 
v___x_677_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9___redArg(v_data_676_);
return v___x_677_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10(lean_object* v_00_u03b2_678_, lean_object* v_a_679_, lean_object* v_b_680_, lean_object* v_x_681_){
_start:
{
lean_object* v___x_682_; 
v___x_682_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10___redArg(v_a_679_, v_b_680_, v_x_681_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_683_, lean_object* v_keys_684_, lean_object* v_vals_685_, lean_object* v_heq_686_, lean_object* v_i_687_, lean_object* v_k_688_){
_start:
{
lean_object* v___x_689_; 
v___x_689_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg(v_keys_684_, v_vals_685_, v_i_687_, v_k_688_);
return v___x_689_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b2_690_, lean_object* v_keys_691_, lean_object* v_vals_692_, lean_object* v_heq_693_, lean_object* v_i_694_, lean_object* v_k_695_){
_start:
{
lean_object* v_res_696_; 
v_res_696_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4(v_00_u03b2_690_, v_keys_691_, v_vals_692_, v_heq_693_, v_i_694_, v_k_695_);
lean_dec(v_k_695_);
lean_dec_ref(v_vals_692_);
lean_dec_ref(v_keys_691_);
return v_res_696_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9(lean_object* v_00_u03b2_697_, lean_object* v_n_698_, lean_object* v_k_699_, lean_object* v_v_700_){
_start:
{
lean_object* v___x_701_; 
v___x_701_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9___redArg(v_n_698_, v_k_699_, v_v_700_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10(lean_object* v_00_u03b2_702_, size_t v_depth_703_, lean_object* v_keys_704_, lean_object* v_vals_705_, lean_object* v_heq_706_, lean_object* v_i_707_, lean_object* v_entries_708_){
_start:
{
lean_object* v___x_709_; 
v___x_709_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg(v_depth_703_, v_keys_704_, v_vals_705_, v_i_707_, v_entries_708_);
return v___x_709_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___boxed(lean_object* v_00_u03b2_710_, lean_object* v_depth_711_, lean_object* v_keys_712_, lean_object* v_vals_713_, lean_object* v_heq_714_, lean_object* v_i_715_, lean_object* v_entries_716_){
_start:
{
size_t v_depth_boxed_717_; lean_object* v_res_718_; 
v_depth_boxed_717_ = lean_unbox_usize(v_depth_711_);
lean_dec(v_depth_711_);
v_res_718_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10(v_00_u03b2_710_, v_depth_boxed_717_, v_keys_712_, v_vals_713_, v_heq_714_, v_i_715_, v_entries_716_);
lean_dec_ref(v_vals_713_);
lean_dec_ref(v_keys_712_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14(lean_object* v_00_u03b2_719_, lean_object* v_i_720_, lean_object* v_source_721_, lean_object* v_target_722_){
_start:
{
lean_object* v___x_723_; 
v___x_723_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14___redArg(v_i_720_, v_source_721_, v_target_722_);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11(lean_object* v_00_u03b2_724_, lean_object* v_x_725_, lean_object* v_x_726_, lean_object* v_x_727_, lean_object* v_x_728_){
_start:
{
lean_object* v___x_729_; 
v___x_729_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11___redArg(v_x_725_, v_x_726_, v_x_727_, v_x_728_);
return v___x_729_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16(lean_object* v_00_u03b2_730_, lean_object* v_x_731_, lean_object* v_x_732_){
_start:
{
lean_object* v___x_733_; 
v___x_733_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16___redArg(v_x_731_, v_x_732_);
return v___x_733_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__1___redArg(lean_object* v_m_734_){
_start:
{
uint8_t v_stage_u2081_735_; 
v_stage_u2081_735_ = lean_ctor_get_uint8(v_m_734_, sizeof(void*)*2);
if (v_stage_u2081_735_ == 0)
{
return v_m_734_;
}
else
{
lean_object* v_map_u2081_736_; lean_object* v_map_u2082_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_745_; 
v_map_u2081_736_ = lean_ctor_get(v_m_734_, 0);
v_map_u2082_737_ = lean_ctor_get(v_m_734_, 1);
v_isSharedCheck_745_ = !lean_is_exclusive(v_m_734_);
if (v_isSharedCheck_745_ == 0)
{
v___x_739_ = v_m_734_;
v_isShared_740_ = v_isSharedCheck_745_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_map_u2082_737_);
lean_inc(v_map_u2081_736_);
lean_dec(v_m_734_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_745_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
uint8_t v___x_741_; lean_object* v___x_743_; 
v___x_741_ = 0;
if (v_isShared_740_ == 0)
{
v___x_743_ = v___x_739_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v_map_u2081_736_);
lean_ctor_set(v_reuseFailAlloc_744_, 1, v_map_u2082_737_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
lean_ctor_set_uint8(v___x_743_, sizeof(void*)*2, v___x_741_);
return v___x_743_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__1(lean_object* v_00_u03b2_746_, lean_object* v_m_747_){
_start:
{
lean_object* v___x_748_; 
v___x_748_ = l_Lean_SMap_switch___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__1___redArg(v_m_747_);
return v___x_748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(lean_object* v_es_749_){
_start:
{
lean_object* v___x_750_; 
v___x_750_ = lean_array_mk(v_es_749_);
return v___x_750_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_as_751_, size_t v_i_752_, size_t v_stop_753_, lean_object* v_b_754_){
_start:
{
uint8_t v___x_755_; 
v___x_755_ = lean_usize_dec_eq(v_i_752_, v_stop_753_);
if (v___x_755_ == 0)
{
lean_object* v___x_756_; lean_object* v___x_757_; size_t v___x_758_; size_t v___x_759_; 
v___x_756_ = lean_array_uget_borrowed(v_as_751_, v_i_752_);
lean_inc(v___x_756_);
v___x_757_ = l_Lean_addAliasEntry(v_b_754_, v___x_756_);
v___x_758_ = ((size_t)1ULL);
v___x_759_ = lean_usize_add(v_i_752_, v___x_758_);
v_i_752_ = v___x_759_;
v_b_754_ = v___x_757_;
goto _start;
}
else
{
return v_b_754_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_as_761_, lean_object* v_i_762_, lean_object* v_stop_763_, lean_object* v_b_764_){
_start:
{
size_t v_i_boxed_765_; size_t v_stop_boxed_766_; lean_object* v_res_767_; 
v_i_boxed_765_ = lean_unbox_usize(v_i_762_);
lean_dec(v_i_762_);
v_stop_boxed_766_ = lean_unbox_usize(v_stop_763_);
lean_dec(v_stop_763_);
v_res_767_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0(v_as_761_, v_i_boxed_765_, v_stop_boxed_766_, v_b_764_);
lean_dec_ref(v_as_761_);
return v_res_767_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_as_768_, size_t v_i_769_, size_t v_stop_770_, lean_object* v_b_771_){
_start:
{
lean_object* v___y_773_; uint8_t v___x_777_; 
v___x_777_ = lean_usize_dec_eq(v_i_769_, v_stop_770_);
if (v___x_777_ == 0)
{
lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; uint8_t v___x_781_; 
v___x_778_ = lean_array_uget_borrowed(v_as_768_, v_i_769_);
v___x_779_ = lean_unsigned_to_nat(0u);
v___x_780_ = lean_array_get_size(v___x_778_);
v___x_781_ = lean_nat_dec_lt(v___x_779_, v___x_780_);
if (v___x_781_ == 0)
{
v___y_773_ = v_b_771_;
goto v___jp_772_;
}
else
{
uint8_t v___x_782_; 
v___x_782_ = lean_nat_dec_le(v___x_780_, v___x_780_);
if (v___x_782_ == 0)
{
if (v___x_781_ == 0)
{
v___y_773_ = v_b_771_;
goto v___jp_772_;
}
else
{
size_t v___x_783_; size_t v___x_784_; lean_object* v___x_785_; 
v___x_783_ = ((size_t)0ULL);
v___x_784_ = lean_usize_of_nat(v___x_780_);
v___x_785_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0(v___x_778_, v___x_783_, v___x_784_, v_b_771_);
v___y_773_ = v___x_785_;
goto v___jp_772_;
}
}
else
{
size_t v___x_786_; size_t v___x_787_; lean_object* v___x_788_; 
v___x_786_ = ((size_t)0ULL);
v___x_787_ = lean_usize_of_nat(v___x_780_);
v___x_788_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0(v___x_778_, v___x_786_, v___x_787_, v_b_771_);
v___y_773_ = v___x_788_;
goto v___jp_772_;
}
}
}
else
{
return v_b_771_;
}
v___jp_772_:
{
size_t v___x_774_; size_t v___x_775_; 
v___x_774_ = ((size_t)1ULL);
v___x_775_ = lean_usize_add(v_i_769_, v___x_774_);
v_i_769_ = v___x_775_;
v_b_771_ = v___y_773_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object* v_as_789_, lean_object* v_i_790_, lean_object* v_stop_791_, lean_object* v_b_792_){
_start:
{
size_t v_i_boxed_793_; size_t v_stop_boxed_794_; lean_object* v_res_795_; 
v_i_boxed_793_ = lean_unbox_usize(v_i_790_);
lean_dec(v_i_790_);
v_stop_boxed_794_ = lean_unbox_usize(v_stop_791_);
lean_dec(v_stop_791_);
v_res_795_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1(v_as_789_, v_i_boxed_793_, v_stop_boxed_794_, v_b_792_);
lean_dec_ref(v_as_789_);
return v_res_795_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0(lean_object* v_initState_796_, lean_object* v_as_797_){
_start:
{
lean_object* v___x_798_; lean_object* v___x_799_; uint8_t v___x_800_; 
v___x_798_ = lean_unsigned_to_nat(0u);
v___x_799_ = lean_array_get_size(v_as_797_);
v___x_800_ = lean_nat_dec_lt(v___x_798_, v___x_799_);
if (v___x_800_ == 0)
{
return v_initState_796_;
}
else
{
uint8_t v___x_801_; 
v___x_801_ = lean_nat_dec_le(v___x_799_, v___x_799_);
if (v___x_801_ == 0)
{
if (v___x_800_ == 0)
{
return v_initState_796_;
}
else
{
size_t v___x_802_; size_t v___x_803_; lean_object* v___x_804_; 
v___x_802_ = ((size_t)0ULL);
v___x_803_ = lean_usize_of_nat(v___x_799_);
v___x_804_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1(v_as_797_, v___x_802_, v___x_803_, v_initState_796_);
return v___x_804_;
}
}
else
{
size_t v___x_805_; size_t v___x_806_; lean_object* v___x_807_; 
v___x_805_ = ((size_t)0ULL);
v___x_806_ = lean_usize_of_nat(v___x_799_);
v___x_807_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1(v_as_797_, v___x_805_, v___x_806_, v_initState_796_);
return v___x_807_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0___boxed(lean_object* v_initState_808_, lean_object* v_as_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l_Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0(v_initState_808_, v_as_809_);
lean_dec_ref(v_as_809_);
return v_res_810_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_811_ = lean_box(0);
v___x_812_ = lean_unsigned_to_nat(16u);
v___x_813_ = lean_mk_array(v___x_812_, v___x_811_);
return v___x_813_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_814_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_, &l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once, _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_);
v___x_815_ = lean_unsigned_to_nat(0u);
v___x_816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_816_, 0, v___x_815_);
lean_ctor_set(v___x_816_, 1, v___x_814_);
return v___x_816_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_817_; 
v___x_817_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_817_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_818_; lean_object* v___x_819_; 
v___x_818_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_, &l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once, _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_);
v___x_819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_819_, 0, v___x_818_);
return v___x_819_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_820_; lean_object* v___x_821_; uint8_t v___x_822_; lean_object* v___x_823_; 
v___x_820_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_, &l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once, _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_);
v___x_821_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_, &l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once, _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_);
v___x_822_ = 1;
v___x_823_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_823_, 0, v___x_821_);
lean_ctor_set(v___x_823_, 1, v___x_820_);
lean_ctor_set_uint8(v___x_823_, sizeof(void*)*2, v___x_822_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(lean_object* v_es_824_){
_start:
{
lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_825_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_, &l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once, _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_);
v___x_826_ = l_Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0(v___x_825_, v_es_824_);
v___x_827_ = l_Lean_SMap_switch___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__1___redArg(v___x_826_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2____boxed(lean_object* v_es_828_){
_start:
{
lean_object* v_res_829_; 
v_res_829_ = l___private_Lean_ResolveName_0__Lean_initFn___lam__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(v_es_828_);
lean_dec_ref(v_es_828_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_846_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_initFn___closed__6_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_));
v___x_847_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_846_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2____boxed(lean_object* v_a_848_){
_start:
{
lean_object* v_res_849_; 
v_res_849_ = l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_();
return v_res_849_;
}
}
LEAN_EXPORT lean_object* l_Lean_addAlias(lean_object* v_env_850_, lean_object* v_a_851_, lean_object* v_e_852_){
_start:
{
lean_object* v___x_853_; lean_object* v_toEnvExtension_854_; lean_object* v_asyncMode_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; 
v___x_853_ = l_Lean_aliasExtension;
v_toEnvExtension_854_ = lean_ctor_get(v___x_853_, 0);
v_asyncMode_855_ = lean_ctor_get(v_toEnvExtension_854_, 2);
v___x_856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_856_, 0, v_a_851_);
lean_ctor_set(v___x_856_, 1, v_e_852_);
v___x_857_ = lean_box(0);
v___x_858_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_853_, v_env_850_, v___x_856_, v_asyncMode_855_, v___x_857_);
return v___x_858_;
}
}
static lean_object* _init_l_Lean_getAliasState___closed__2(void){
_start:
{
lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_861_ = ((lean_object*)(l_Lean_getAliasState___closed__1));
v___x_862_ = ((lean_object*)(l_Lean_getAliasState___closed__0));
v___x_863_ = l_Lean_SMap_instInhabited(lean_box(0), lean_box(0), v___x_862_, v___x_861_);
return v___x_863_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAliasState(lean_object* v_env_864_){
_start:
{
lean_object* v___x_865_; lean_object* v_toEnvExtension_866_; lean_object* v_asyncMode_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_865_ = l_Lean_aliasExtension;
v_toEnvExtension_866_ = lean_ctor_get(v___x_865_, 0);
v_asyncMode_867_ = lean_ctor_get(v_toEnvExtension_866_, 2);
v___x_868_ = lean_obj_once(&l_Lean_getAliasState___closed__2, &l_Lean_getAliasState___closed__2_once, _init_l_Lean_getAliasState___closed__2);
v___x_869_ = lean_box(0);
v___x_870_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_868_, v___x_865_, v_env_864_, v_asyncMode_867_, v___x_869_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_getAliases_spec__0(lean_object* v_env_871_, uint8_t v_skipProtected_872_, lean_object* v_a_873_, lean_object* v_a_874_){
_start:
{
if (lean_obj_tag(v_a_873_) == 0)
{
lean_object* v___x_875_; 
lean_dec_ref(v_env_871_);
v___x_875_ = l_List_reverse___redArg(v_a_874_);
return v___x_875_;
}
else
{
lean_object* v_head_876_; lean_object* v_tail_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_888_; 
v_head_876_ = lean_ctor_get(v_a_873_, 0);
v_tail_877_ = lean_ctor_get(v_a_873_, 1);
v_isSharedCheck_888_ = !lean_is_exclusive(v_a_873_);
if (v_isSharedCheck_888_ == 0)
{
v___x_879_ = v_a_873_;
v_isShared_880_ = v_isSharedCheck_888_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_tail_877_);
lean_inc(v_head_876_);
lean_dec(v_a_873_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_888_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
uint8_t v___x_881_; 
lean_inc(v_head_876_);
lean_inc_ref(v_env_871_);
v___x_881_ = l_Lean_isProtected(v_env_871_, v_head_876_);
if (v___x_881_ == 0)
{
if (v_skipProtected_872_ == 0)
{
lean_del_object(v___x_879_);
lean_dec(v_head_876_);
v_a_873_ = v_tail_877_;
goto _start;
}
else
{
lean_object* v___x_884_; 
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 1, v_a_874_);
v___x_884_ = v___x_879_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_head_876_);
lean_ctor_set(v_reuseFailAlloc_886_, 1, v_a_874_);
v___x_884_ = v_reuseFailAlloc_886_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
v_a_873_ = v_tail_877_;
v_a_874_ = v___x_884_;
goto _start;
}
}
}
else
{
lean_del_object(v___x_879_);
lean_dec(v_head_876_);
v_a_873_ = v_tail_877_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_getAliases_spec__0___boxed(lean_object* v_env_889_, lean_object* v_skipProtected_890_, lean_object* v_a_891_, lean_object* v_a_892_){
_start:
{
uint8_t v_skipProtected_boxed_893_; lean_object* v_res_894_; 
v_skipProtected_boxed_893_ = lean_unbox(v_skipProtected_890_);
v_res_894_ = l_List_filterTR_loop___at___00Lean_getAliases_spec__0(v_env_889_, v_skipProtected_boxed_893_, v_a_891_, v_a_892_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAliases(lean_object* v_env_895_, lean_object* v_a_896_, uint8_t v_skipProtected_897_){
_start:
{
lean_object* v___x_898_; lean_object* v_toEnvExtension_899_; lean_object* v_asyncMode_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_898_ = l_Lean_aliasExtension;
v_toEnvExtension_899_ = lean_ctor_get(v___x_898_, 0);
v_asyncMode_900_ = lean_ctor_get(v_toEnvExtension_899_, 2);
v___x_901_ = lean_obj_once(&l_Lean_getAliasState___closed__2, &l_Lean_getAliasState___closed__2_once, _init_l_Lean_getAliasState___closed__2);
v___x_902_ = lean_box(0);
lean_inc_ref(v_env_895_);
v___x_903_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_901_, v___x_898_, v_env_895_, v_asyncMode_900_, v___x_902_);
v___x_904_ = l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(v___x_903_, v_a_896_);
lean_dec(v___x_903_);
if (lean_obj_tag(v___x_904_) == 0)
{
lean_object* v___x_905_; 
lean_dec_ref(v_env_895_);
v___x_905_ = lean_box(0);
return v___x_905_;
}
else
{
if (v_skipProtected_897_ == 0)
{
lean_object* v_val_906_; 
lean_dec_ref(v_env_895_);
v_val_906_ = lean_ctor_get(v___x_904_, 0);
lean_inc(v_val_906_);
lean_dec_ref_known(v___x_904_, 1);
return v_val_906_;
}
else
{
lean_object* v_val_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
v_val_907_ = lean_ctor_get(v___x_904_, 0);
lean_inc(v_val_907_);
lean_dec_ref_known(v___x_904_, 1);
v___x_908_ = lean_box(0);
v___x_909_ = l_List_filterTR_loop___at___00Lean_getAliases_spec__0(v_env_895_, v_skipProtected_897_, v_val_907_, v___x_908_);
return v___x_909_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getAliases___boxed(lean_object* v_env_910_, lean_object* v_a_911_, lean_object* v_skipProtected_912_){
_start:
{
uint8_t v_skipProtected_boxed_913_; lean_object* v_res_914_; 
v_skipProtected_boxed_913_ = lean_unbox(v_skipProtected_912_);
v_res_914_ = l_Lean_getAliases(v_env_910_, v_a_911_, v_skipProtected_boxed_913_);
lean_dec(v_a_911_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l_Lean_getRevAliases___lam__0(lean_object* v_e_915_, lean_object* v_as_916_, lean_object* v_a_917_, lean_object* v_es_918_){
_start:
{
uint8_t v___x_919_; 
v___x_919_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_e_915_, v_es_918_);
if (v___x_919_ == 0)
{
lean_dec(v_a_917_);
return v_as_916_;
}
else
{
lean_object* v___x_920_; 
v___x_920_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_920_, 0, v_a_917_);
lean_ctor_set(v___x_920_, 1, v_as_916_);
return v___x_920_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getRevAliases___lam__0___boxed(lean_object* v_e_921_, lean_object* v_as_922_, lean_object* v_a_923_, lean_object* v_es_924_){
_start:
{
lean_object* v_res_925_; 
v_res_925_ = l_Lean_getRevAliases___lam__0(v_e_921_, v_as_922_, v_a_923_, v_es_924_);
lean_dec(v_es_924_);
lean_dec(v_e_921_);
return v_res_925_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg(lean_object* v_f_926_, lean_object* v_keys_927_, lean_object* v_vals_928_, lean_object* v_i_929_, lean_object* v_acc_930_){
_start:
{
lean_object* v___x_931_; uint8_t v___x_932_; 
v___x_931_ = lean_array_get_size(v_keys_927_);
v___x_932_ = lean_nat_dec_lt(v_i_929_, v___x_931_);
if (v___x_932_ == 0)
{
lean_dec(v_i_929_);
lean_dec(v_f_926_);
return v_acc_930_;
}
else
{
lean_object* v_k_933_; lean_object* v_v_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; 
v_k_933_ = lean_array_fget_borrowed(v_keys_927_, v_i_929_);
v_v_934_ = lean_array_fget_borrowed(v_vals_928_, v_i_929_);
lean_inc(v_f_926_);
lean_inc(v_v_934_);
lean_inc(v_k_933_);
v___x_935_ = lean_apply_3(v_f_926_, v_acc_930_, v_k_933_, v_v_934_);
v___x_936_ = lean_unsigned_to_nat(1u);
v___x_937_ = lean_nat_add(v_i_929_, v___x_936_);
lean_dec(v_i_929_);
v_i_929_ = v___x_937_;
v_acc_930_ = v___x_935_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg___boxed(lean_object* v_f_939_, lean_object* v_keys_940_, lean_object* v_vals_941_, lean_object* v_i_942_, lean_object* v_acc_943_){
_start:
{
lean_object* v_res_944_; 
v_res_944_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg(v_f_939_, v_keys_940_, v_vals_941_, v_i_942_, v_acc_943_);
lean_dec_ref(v_vals_941_);
lean_dec_ref(v_keys_940_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_f_945_, lean_object* v_x_946_, lean_object* v_x_947_){
_start:
{
if (lean_obj_tag(v_x_946_) == 0)
{
lean_object* v_es_948_; lean_object* v___x_949_; lean_object* v___x_950_; uint8_t v___x_951_; 
v_es_948_ = lean_ctor_get(v_x_946_, 0);
v___x_949_ = lean_unsigned_to_nat(0u);
v___x_950_ = lean_array_get_size(v_es_948_);
v___x_951_ = lean_nat_dec_lt(v___x_949_, v___x_950_);
if (v___x_951_ == 0)
{
lean_dec(v_f_945_);
return v_x_947_;
}
else
{
uint8_t v___x_952_; 
v___x_952_ = lean_nat_dec_le(v___x_950_, v___x_950_);
if (v___x_952_ == 0)
{
if (v___x_951_ == 0)
{
lean_dec(v_f_945_);
return v_x_947_;
}
else
{
size_t v___x_953_; size_t v___x_954_; lean_object* v___x_955_; 
v___x_953_ = ((size_t)0ULL);
v___x_954_ = lean_usize_of_nat(v___x_950_);
v___x_955_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(v_f_945_, v_es_948_, v___x_953_, v___x_954_, v_x_947_);
return v___x_955_;
}
}
else
{
size_t v___x_956_; size_t v___x_957_; lean_object* v___x_958_; 
v___x_956_ = ((size_t)0ULL);
v___x_957_ = lean_usize_of_nat(v___x_950_);
v___x_958_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(v_f_945_, v_es_948_, v___x_956_, v___x_957_, v_x_947_);
return v___x_958_;
}
}
}
else
{
lean_object* v_ks_959_; lean_object* v_vs_960_; lean_object* v___x_961_; lean_object* v___x_962_; 
v_ks_959_ = lean_ctor_get(v_x_946_, 0);
v_vs_960_ = lean_ctor_get(v_x_946_, 1);
v___x_961_ = lean_unsigned_to_nat(0u);
v___x_962_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg(v_f_945_, v_ks_959_, v_vs_960_, v___x_961_, v_x_947_);
return v___x_962_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(lean_object* v_f_963_, lean_object* v_as_964_, size_t v_i_965_, size_t v_stop_966_, lean_object* v_b_967_){
_start:
{
lean_object* v___y_969_; uint8_t v___x_973_; 
v___x_973_ = lean_usize_dec_eq(v_i_965_, v_stop_966_);
if (v___x_973_ == 0)
{
lean_object* v___x_974_; 
v___x_974_ = lean_array_uget_borrowed(v_as_964_, v_i_965_);
switch(lean_obj_tag(v___x_974_))
{
case 0:
{
lean_object* v_key_975_; lean_object* v_val_976_; lean_object* v___x_977_; 
v_key_975_ = lean_ctor_get(v___x_974_, 0);
v_val_976_ = lean_ctor_get(v___x_974_, 1);
lean_inc(v_f_963_);
lean_inc(v_val_976_);
lean_inc(v_key_975_);
v___x_977_ = lean_apply_3(v_f_963_, v_b_967_, v_key_975_, v_val_976_);
v___y_969_ = v___x_977_;
goto v___jp_968_;
}
case 1:
{
lean_object* v_node_978_; lean_object* v___x_979_; 
v_node_978_ = lean_ctor_get(v___x_974_, 0);
lean_inc(v_f_963_);
v___x_979_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v_f_963_, v_node_978_, v_b_967_);
v___y_969_ = v___x_979_;
goto v___jp_968_;
}
default: 
{
v___y_969_ = v_b_967_;
goto v___jp_968_;
}
}
}
else
{
lean_dec(v_f_963_);
return v_b_967_;
}
v___jp_968_:
{
size_t v___x_970_; size_t v___x_971_; 
v___x_970_ = ((size_t)1ULL);
v___x_971_ = lean_usize_add(v_i_965_, v___x_970_);
v_i_965_ = v___x_971_;
v_b_967_ = v___y_969_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg___boxed(lean_object* v_f_980_, lean_object* v_as_981_, lean_object* v_i_982_, lean_object* v_stop_983_, lean_object* v_b_984_){
_start:
{
size_t v_i_boxed_985_; size_t v_stop_boxed_986_; lean_object* v_res_987_; 
v_i_boxed_985_ = lean_unbox_usize(v_i_982_);
lean_dec(v_i_982_);
v_stop_boxed_986_ = lean_unbox_usize(v_stop_983_);
lean_dec(v_stop_983_);
v_res_987_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(v_f_980_, v_as_981_, v_i_boxed_985_, v_stop_boxed_986_, v_b_984_);
lean_dec_ref(v_as_981_);
return v_res_987_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_f_988_, lean_object* v_x_989_, lean_object* v_x_990_){
_start:
{
lean_object* v_res_991_; 
v_res_991_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v_f_988_, v_x_989_, v_x_990_);
lean_dec_ref(v_x_989_);
return v_res_991_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg___lam__0(lean_object* v_f_992_, lean_object* v_x1_993_, lean_object* v_x2_994_, lean_object* v_x3_995_){
_start:
{
lean_object* v___x_996_; 
v___x_996_ = lean_apply_3(v_f_992_, v_x1_993_, v_x2_994_, v_x3_995_);
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(lean_object* v_map_997_, lean_object* v_f_998_, lean_object* v_init_999_){
_start:
{
lean_object* v___f_1000_; lean_object* v___x_1001_; 
v___f_1000_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1000_, 0, v_f_998_);
v___x_1001_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v___f_1000_, v_map_997_, v_init_999_);
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg___boxed(lean_object* v_map_1002_, lean_object* v_f_1003_, lean_object* v_init_1004_){
_start:
{
lean_object* v_res_1005_; 
v_res_1005_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(v_map_1002_, v_f_1003_, v_init_1004_);
lean_dec_ref(v_map_1002_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0___redArg(lean_object* v_f_1006_, lean_object* v_x_1007_, lean_object* v_x_1008_){
_start:
{
if (lean_obj_tag(v_x_1008_) == 0)
{
lean_dec(v_f_1006_);
return v_x_1007_;
}
else
{
lean_object* v_key_1009_; lean_object* v_value_1010_; lean_object* v_tail_1011_; lean_object* v___x_1012_; 
v_key_1009_ = lean_ctor_get(v_x_1008_, 0);
lean_inc(v_key_1009_);
v_value_1010_ = lean_ctor_get(v_x_1008_, 1);
lean_inc(v_value_1010_);
v_tail_1011_ = lean_ctor_get(v_x_1008_, 2);
lean_inc(v_tail_1011_);
lean_dec_ref_known(v_x_1008_, 3);
lean_inc(v_f_1006_);
v___x_1012_ = lean_apply_3(v_f_1006_, v_x_1007_, v_key_1009_, v_value_1010_);
v_x_1007_ = v___x_1012_;
v_x_1008_ = v_tail_1011_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg(lean_object* v_f_1014_, lean_object* v_as_1015_, size_t v_i_1016_, size_t v_stop_1017_, lean_object* v_b_1018_){
_start:
{
uint8_t v___x_1019_; 
v___x_1019_ = lean_usize_dec_eq(v_i_1016_, v_stop_1017_);
if (v___x_1019_ == 0)
{
lean_object* v___x_1020_; lean_object* v___x_1021_; size_t v___x_1022_; size_t v___x_1023_; 
v___x_1020_ = lean_array_uget_borrowed(v_as_1015_, v_i_1016_);
lean_inc(v___x_1020_);
lean_inc(v_f_1014_);
v___x_1021_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0___redArg(v_f_1014_, v_b_1018_, v___x_1020_);
v___x_1022_ = ((size_t)1ULL);
v___x_1023_ = lean_usize_add(v_i_1016_, v___x_1022_);
v_i_1016_ = v___x_1023_;
v_b_1018_ = v___x_1021_;
goto _start;
}
else
{
lean_dec(v_f_1014_);
return v_b_1018_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg___boxed(lean_object* v_f_1025_, lean_object* v_as_1026_, lean_object* v_i_1027_, lean_object* v_stop_1028_, lean_object* v_b_1029_){
_start:
{
size_t v_i_boxed_1030_; size_t v_stop_boxed_1031_; lean_object* v_res_1032_; 
v_i_boxed_1030_ = lean_unbox_usize(v_i_1027_);
lean_dec(v_i_1027_);
v_stop_boxed_1031_ = lean_unbox_usize(v_stop_1028_);
lean_dec(v_stop_1028_);
v_res_1032_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg(v_f_1025_, v_as_1026_, v_i_boxed_1030_, v_stop_boxed_1031_, v_b_1029_);
lean_dec_ref(v_as_1026_);
return v_res_1032_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg(lean_object* v_f_1033_, lean_object* v_init_1034_, lean_object* v_m_1035_){
_start:
{
lean_object* v_map_u2081_1036_; lean_object* v_map_u2082_1037_; lean_object* v_buckets_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; uint8_t v___x_1041_; 
v_map_u2081_1036_ = lean_ctor_get(v_m_1035_, 0);
v_map_u2082_1037_ = lean_ctor_get(v_m_1035_, 1);
v_buckets_1038_ = lean_ctor_get(v_map_u2081_1036_, 1);
v___x_1039_ = lean_unsigned_to_nat(0u);
v___x_1040_ = lean_array_get_size(v_buckets_1038_);
v___x_1041_ = lean_nat_dec_lt(v___x_1039_, v___x_1040_);
if (v___x_1041_ == 0)
{
lean_object* v___x_1042_; 
v___x_1042_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(v_map_u2082_1037_, v_f_1033_, v_init_1034_);
return v___x_1042_;
}
else
{
uint8_t v___x_1043_; 
v___x_1043_ = lean_nat_dec_le(v___x_1040_, v___x_1040_);
if (v___x_1043_ == 0)
{
if (v___x_1041_ == 0)
{
lean_object* v___x_1044_; 
v___x_1044_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(v_map_u2082_1037_, v_f_1033_, v_init_1034_);
return v___x_1044_;
}
else
{
size_t v___x_1045_; size_t v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; 
v___x_1045_ = ((size_t)0ULL);
v___x_1046_ = lean_usize_of_nat(v___x_1040_);
lean_inc(v_f_1033_);
v___x_1047_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg(v_f_1033_, v_buckets_1038_, v___x_1045_, v___x_1046_, v_init_1034_);
v___x_1048_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(v_map_u2082_1037_, v_f_1033_, v___x_1047_);
return v___x_1048_;
}
}
else
{
size_t v___x_1049_; size_t v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1049_ = ((size_t)0ULL);
v___x_1050_ = lean_usize_of_nat(v___x_1040_);
lean_inc(v_f_1033_);
v___x_1051_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg(v_f_1033_, v_buckets_1038_, v___x_1049_, v___x_1050_, v_init_1034_);
v___x_1052_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(v_map_u2082_1037_, v_f_1033_, v___x_1051_);
return v___x_1052_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg___boxed(lean_object* v_f_1053_, lean_object* v_init_1054_, lean_object* v_m_1055_){
_start:
{
lean_object* v_res_1056_; 
v_res_1056_ = l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg(v_f_1053_, v_init_1054_, v_m_1055_);
lean_dec_ref(v_m_1055_);
return v_res_1056_;
}
}
LEAN_EXPORT lean_object* l_Lean_getRevAliases(lean_object* v_env_1057_, lean_object* v_e_1058_){
_start:
{
lean_object* v___x_1059_; lean_object* v_toEnvExtension_1060_; lean_object* v_asyncMode_1061_; lean_object* v___f_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1059_ = l_Lean_aliasExtension;
v_toEnvExtension_1060_ = lean_ctor_get(v___x_1059_, 0);
v_asyncMode_1061_ = lean_ctor_get(v_toEnvExtension_1060_, 2);
v___f_1062_ = lean_alloc_closure((void*)(l_Lean_getRevAliases___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1062_, 0, v_e_1058_);
v___x_1063_ = lean_obj_once(&l_Lean_getAliasState___closed__2, &l_Lean_getAliasState___closed__2_once, _init_l_Lean_getAliasState___closed__2);
v___x_1064_ = lean_box(0);
v___x_1065_ = lean_box(0);
v___x_1066_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1063_, v___x_1059_, v_env_1057_, v_asyncMode_1061_, v___x_1065_);
v___x_1067_ = l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg(v___f_1062_, v___x_1064_, v___x_1066_);
lean_dec(v___x_1066_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0(lean_object* v_00_u03b2_1068_, lean_object* v_00_u03c3_1069_, lean_object* v_f_1070_, lean_object* v_init_1071_, lean_object* v_m_1072_){
_start:
{
lean_object* v___x_1073_; 
v___x_1073_ = l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg(v_f_1070_, v_init_1071_, v_m_1072_);
return v___x_1073_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___boxed(lean_object* v_00_u03b2_1074_, lean_object* v_00_u03c3_1075_, lean_object* v_f_1076_, lean_object* v_init_1077_, lean_object* v_m_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0(v_00_u03b2_1074_, v_00_u03c3_1075_, v_f_1076_, v_init_1077_, v_m_1078_);
lean_dec_ref(v_m_1078_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0(lean_object* v_00_u03b2_1080_, lean_object* v_00_u03c3_1081_, lean_object* v_f_1082_, lean_object* v_x_1083_, lean_object* v_x_1084_){
_start:
{
lean_object* v___x_1085_; 
v___x_1085_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0___redArg(v_f_1082_, v_x_1083_, v_x_1084_);
return v___x_1085_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1(lean_object* v_00_u03c3_1086_, lean_object* v_00_u03b2_1087_, lean_object* v_map_1088_, lean_object* v_f_1089_, lean_object* v_init_1090_){
_start:
{
lean_object* v___x_1091_; 
v___x_1091_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(v_map_1088_, v_f_1089_, v_init_1090_);
return v___x_1091_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___boxed(lean_object* v_00_u03c3_1092_, lean_object* v_00_u03b2_1093_, lean_object* v_map_1094_, lean_object* v_f_1095_, lean_object* v_init_1096_){
_start:
{
lean_object* v_res_1097_; 
v_res_1097_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1(v_00_u03c3_1092_, v_00_u03b2_1093_, v_map_1094_, v_f_1095_, v_init_1096_);
lean_dec_ref(v_map_1094_);
return v_res_1097_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2(lean_object* v_00_u03b2_1098_, lean_object* v_00_u03c3_1099_, lean_object* v_f_1100_, lean_object* v_as_1101_, size_t v_i_1102_, size_t v_stop_1103_, lean_object* v_b_1104_){
_start:
{
lean_object* v___x_1105_; 
v___x_1105_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg(v_f_1100_, v_as_1101_, v_i_1102_, v_stop_1103_, v_b_1104_);
return v___x_1105_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1106_, lean_object* v_00_u03c3_1107_, lean_object* v_f_1108_, lean_object* v_as_1109_, lean_object* v_i_1110_, lean_object* v_stop_1111_, lean_object* v_b_1112_){
_start:
{
size_t v_i_boxed_1113_; size_t v_stop_boxed_1114_; lean_object* v_res_1115_; 
v_i_boxed_1113_ = lean_unbox_usize(v_i_1110_);
lean_dec(v_i_1110_);
v_stop_boxed_1114_ = lean_unbox_usize(v_stop_1111_);
lean_dec(v_stop_1111_);
v_res_1115_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2(v_00_u03b2_1106_, v_00_u03c3_1107_, v_f_1108_, v_as_1109_, v_i_boxed_1113_, v_stop_boxed_1114_, v_b_1112_);
lean_dec_ref(v_as_1109_);
return v_res_1115_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___redArg(lean_object* v_map_1116_, lean_object* v_f_1117_, lean_object* v_init_1118_){
_start:
{
lean_object* v___x_1119_; 
v___x_1119_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v_f_1117_, v_map_1116_, v_init_1118_);
return v___x_1119_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_map_1120_, lean_object* v_f_1121_, lean_object* v_init_1122_){
_start:
{
lean_object* v_res_1123_; 
v_res_1123_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___redArg(v_map_1120_, v_f_1121_, v_init_1122_);
lean_dec_ref(v_map_1120_);
return v_res_1123_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2(lean_object* v_00_u03c3_1124_, lean_object* v_00_u03b2_1125_, lean_object* v_map_1126_, lean_object* v_f_1127_, lean_object* v_init_1128_){
_start:
{
lean_object* v___x_1129_; 
v___x_1129_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v_f_1127_, v_map_1126_, v_init_1128_);
return v___x_1129_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03c3_1130_, lean_object* v_00_u03b2_1131_, lean_object* v_map_1132_, lean_object* v_f_1133_, lean_object* v_init_1134_){
_start:
{
lean_object* v_res_1135_; 
v_res_1135_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2(v_00_u03c3_1130_, v_00_u03b2_1131_, v_map_1132_, v_f_1133_, v_init_1134_);
lean_dec_ref(v_map_1132_);
return v_res_1135_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03c3_1136_, lean_object* v_00_u03b1_1137_, lean_object* v_00_u03b2_1138_, lean_object* v_f_1139_, lean_object* v_x_1140_, lean_object* v_x_1141_){
_start:
{
lean_object* v___x_1142_; 
v___x_1142_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v_f_1139_, v_x_1140_, v_x_1141_);
return v___x_1142_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_00_u03c3_1143_, lean_object* v_00_u03b1_1144_, lean_object* v_00_u03b2_1145_, lean_object* v_f_1146_, lean_object* v_x_1147_, lean_object* v_x_1148_){
_start:
{
lean_object* v_res_1149_; 
v_res_1149_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3(v_00_u03c3_1143_, v_00_u03b1_1144_, v_00_u03b2_1145_, v_f_1146_, v_x_1147_, v_x_1148_);
lean_dec_ref(v_x_1147_);
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5(lean_object* v_00_u03b1_1150_, lean_object* v_00_u03b2_1151_, lean_object* v_00_u03c3_1152_, lean_object* v_f_1153_, lean_object* v_as_1154_, size_t v_i_1155_, size_t v_stop_1156_, lean_object* v_b_1157_){
_start:
{
lean_object* v___x_1158_; 
v___x_1158_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(v_f_1153_, v_as_1154_, v_i_1155_, v_stop_1156_, v_b_1157_);
return v___x_1158_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___boxed(lean_object* v_00_u03b1_1159_, lean_object* v_00_u03b2_1160_, lean_object* v_00_u03c3_1161_, lean_object* v_f_1162_, lean_object* v_as_1163_, lean_object* v_i_1164_, lean_object* v_stop_1165_, lean_object* v_b_1166_){
_start:
{
size_t v_i_boxed_1167_; size_t v_stop_boxed_1168_; lean_object* v_res_1169_; 
v_i_boxed_1167_ = lean_unbox_usize(v_i_1164_);
lean_dec(v_i_1164_);
v_stop_boxed_1168_ = lean_unbox_usize(v_stop_1165_);
lean_dec(v_stop_1165_);
v_res_1169_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5(v_00_u03b1_1159_, v_00_u03b2_1160_, v_00_u03c3_1161_, v_f_1162_, v_as_1163_, v_i_boxed_1167_, v_stop_boxed_1168_, v_b_1166_);
lean_dec_ref(v_as_1163_);
return v_res_1169_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6(lean_object* v_00_u03c3_1170_, lean_object* v_00_u03b1_1171_, lean_object* v_00_u03b2_1172_, lean_object* v_f_1173_, lean_object* v_keys_1174_, lean_object* v_vals_1175_, lean_object* v_heq_1176_, lean_object* v_i_1177_, lean_object* v_acc_1178_){
_start:
{
lean_object* v___x_1179_; 
v___x_1179_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg(v_f_1173_, v_keys_1174_, v_vals_1175_, v_i_1177_, v_acc_1178_);
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___boxed(lean_object* v_00_u03c3_1180_, lean_object* v_00_u03b1_1181_, lean_object* v_00_u03b2_1182_, lean_object* v_f_1183_, lean_object* v_keys_1184_, lean_object* v_vals_1185_, lean_object* v_heq_1186_, lean_object* v_i_1187_, lean_object* v_acc_1188_){
_start:
{
lean_object* v_res_1189_; 
v_res_1189_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6(v_00_u03c3_1180_, v_00_u03b1_1181_, v_00_u03b2_1182_, v_f_1183_, v_keys_1184_, v_vals_1185_, v_heq_1186_, v_i_1187_, v_acc_1188_);
lean_dec_ref(v_vals_1185_);
lean_dec_ref(v_keys_1184_);
return v_res_1189_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(lean_object* v_env_1190_, lean_object* v_declName_1191_, uint8_t v_localOnly_1192_){
_start:
{
uint8_t v___x_1193_; 
v___x_1193_ = 1;
if (v_localOnly_1192_ == 0)
{
uint8_t v___x_1194_; 
v___x_1194_ = l_Lean_Environment_containsOnBranch(v_env_1190_, v_declName_1191_);
if (v___x_1194_ == 0)
{
uint8_t v___x_1195_; 
lean_inc(v_declName_1191_);
lean_inc_ref(v_env_1190_);
v___x_1195_ = lean_is_reserved_name(v_env_1190_, v_declName_1191_);
if (v___x_1195_ == 0)
{
uint8_t v___x_1196_; 
v___x_1196_ = l_Lean_Environment_contains(v_env_1190_, v_declName_1191_, v___x_1193_);
return v___x_1196_;
}
else
{
lean_dec(v_declName_1191_);
lean_dec_ref(v_env_1190_);
return v___x_1193_;
}
}
else
{
lean_dec(v_declName_1191_);
lean_dec_ref(v_env_1190_);
return v___x_1193_;
}
}
else
{
uint8_t v___x_1197_; 
lean_inc(v_declName_1191_);
v___x_1197_ = l_Lean_Environment_containsLocally(v_env_1190_, v_declName_1191_);
if (v___x_1197_ == 0)
{
uint8_t v___x_1198_; 
v___x_1198_ = lean_is_reserved_name(v_env_1190_, v_declName_1191_);
return v___x_1198_;
}
else
{
lean_dec(v_declName_1191_);
lean_dec_ref(v_env_1190_);
return v___x_1193_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved___boxed(lean_object* v_env_1199_, lean_object* v_declName_1200_, lean_object* v_localOnly_1201_){
_start:
{
uint8_t v_localOnly_boxed_1202_; uint8_t v_res_1203_; lean_object* v_r_1204_; 
v_localOnly_boxed_1202_ = lean_unbox(v_localOnly_1201_);
v_res_1203_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1199_, v_declName_1200_, v_localOnly_boxed_1202_);
v_r_1204_ = lean_box(v_res_1203_);
return v_r_1204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(lean_object* v_name_1205_, lean_object* v_decl_1206_, lean_object* v_ref_1207_){
_start:
{
lean_object* v_defValue_1209_; lean_object* v_descr_1210_; lean_object* v_deprecation_x3f_1211_; lean_object* v___x_1212_; uint8_t v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; 
v_defValue_1209_ = lean_ctor_get(v_decl_1206_, 0);
v_descr_1210_ = lean_ctor_get(v_decl_1206_, 1);
v_deprecation_x3f_1211_ = lean_ctor_get(v_decl_1206_, 2);
v___x_1212_ = lean_alloc_ctor(1, 0, 1);
v___x_1213_ = lean_unbox(v_defValue_1209_);
lean_ctor_set_uint8(v___x_1212_, 0, v___x_1213_);
lean_inc(v_deprecation_x3f_1211_);
lean_inc_ref(v_descr_1210_);
lean_inc_n(v_name_1205_, 2);
v___x_1214_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1214_, 0, v_name_1205_);
lean_ctor_set(v___x_1214_, 1, v_ref_1207_);
lean_ctor_set(v___x_1214_, 2, v___x_1212_);
lean_ctor_set(v___x_1214_, 3, v_descr_1210_);
lean_ctor_set(v___x_1214_, 4, v_deprecation_x3f_1211_);
v___x_1215_ = lean_register_option(v_name_1205_, v___x_1214_);
if (lean_obj_tag(v___x_1215_) == 0)
{
lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1223_; 
v_isSharedCheck_1223_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1223_ == 0)
{
lean_object* v_unused_1224_; 
v_unused_1224_ = lean_ctor_get(v___x_1215_, 0);
lean_dec(v_unused_1224_);
v___x_1217_ = v___x_1215_;
v_isShared_1218_ = v_isSharedCheck_1223_;
goto v_resetjp_1216_;
}
else
{
lean_dec(v___x_1215_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1223_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1219_; lean_object* v___x_1221_; 
lean_inc(v_defValue_1209_);
v___x_1219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1219_, 0, v_name_1205_);
lean_ctor_set(v___x_1219_, 1, v_defValue_1209_);
if (v_isShared_1218_ == 0)
{
lean_ctor_set(v___x_1217_, 0, v___x_1219_);
v___x_1221_ = v___x_1217_;
goto v_reusejp_1220_;
}
else
{
lean_object* v_reuseFailAlloc_1222_; 
v_reuseFailAlloc_1222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1222_, 0, v___x_1219_);
v___x_1221_ = v_reuseFailAlloc_1222_;
goto v_reusejp_1220_;
}
v_reusejp_1220_:
{
return v___x_1221_;
}
}
}
else
{
lean_object* v_a_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1232_; 
lean_dec(v_name_1205_);
v_a_1225_ = lean_ctor_get(v___x_1215_, 0);
v_isSharedCheck_1232_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1227_ = v___x_1215_;
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_a_1225_);
lean_dec(v___x_1215_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v___x_1230_; 
if (v_isShared_1228_ == 0)
{
v___x_1230_ = v___x_1227_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_a_1225_);
v___x_1230_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1229_;
}
v_reusejp_1229_:
{
return v___x_1230_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_1233_, lean_object* v_decl_1234_, lean_object* v_ref_1235_, lean_object* v_a_1236_){
_start:
{
lean_object* v_res_1237_; 
v_res_1237_ = l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(v_name_1233_, v_decl_1234_, v_ref_1235_);
lean_dec_ref(v_decl_1234_);
return v_res_1237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; 
v___x_1256_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_));
v___x_1257_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_));
v___x_1258_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_));
v___x_1259_ = l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(v___x_1256_, v___x_1257_, v___x_1258_);
return v___x_1259_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4____boxed(lean_object* v_a_1260_){
_start:
{
lean_object* v_res_1261_; 
v_res_1261_ = l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_();
return v_res_1261_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___x_1280_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_));
v___x_1281_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_));
v___x_1282_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_));
v___x_1283_ = l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(v___x_1280_, v___x_1281_, v___x_1282_);
return v___x_1283_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4____boxed(lean_object* v_a_1284_){
_start:
{
lean_object* v_res_1285_; 
v_res_1285_ = l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_();
return v_res_1285_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1(lean_object* v_opts_1286_, lean_object* v_opt_1287_){
_start:
{
lean_object* v_name_1288_; lean_object* v_defValue_1289_; lean_object* v_map_1290_; lean_object* v___x_1291_; 
v_name_1288_ = lean_ctor_get(v_opt_1287_, 0);
v_defValue_1289_ = lean_ctor_get(v_opt_1287_, 1);
v_map_1290_ = lean_ctor_get(v_opts_1286_, 0);
v___x_1291_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1290_, v_name_1288_);
if (lean_obj_tag(v___x_1291_) == 0)
{
uint8_t v___x_1292_; 
v___x_1292_ = lean_unbox(v_defValue_1289_);
return v___x_1292_;
}
else
{
lean_object* v_val_1293_; 
v_val_1293_ = lean_ctor_get(v___x_1291_, 0);
lean_inc(v_val_1293_);
lean_dec_ref_known(v___x_1291_, 1);
if (lean_obj_tag(v_val_1293_) == 1)
{
uint8_t v_v_1294_; 
v_v_1294_ = lean_ctor_get_uint8(v_val_1293_, 0);
lean_dec_ref_known(v_val_1293_, 0);
return v_v_1294_;
}
else
{
uint8_t v___x_1295_; 
lean_dec(v_val_1293_);
v___x_1295_ = lean_unbox(v_defValue_1289_);
return v___x_1295_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1___boxed(lean_object* v_opts_1296_, lean_object* v_opt_1297_){
_start:
{
uint8_t v_res_1298_; lean_object* v_r_1299_; 
v_res_1298_ = l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1(v_opts_1296_, v_opt_1297_);
lean_dec_ref(v_opt_1297_);
lean_dec_ref(v_opts_1296_);
v_r_1299_ = lean_box(v_res_1298_);
return v_r_1299_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0(lean_object* v_declName_1303_, lean_object* v_env_1304_, lean_object* v_as_1305_, size_t v_sz_1306_, size_t v_i_1307_, lean_object* v_b_1308_){
_start:
{
uint8_t v___x_1309_; 
v___x_1309_ = lean_usize_dec_lt(v_i_1307_, v_sz_1306_);
if (v___x_1309_ == 0)
{
lean_dec_ref(v_env_1304_);
lean_dec(v_declName_1303_);
lean_inc_ref(v_b_1308_);
return v_b_1308_;
}
else
{
lean_object* v_a_1310_; lean_object* v_toImport_1311_; lean_object* v_module_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; uint8_t v___y_1317_; uint8_t v___x_1324_; 
v_a_1310_ = lean_array_uget_borrowed(v_as_1305_, v_i_1307_);
v_toImport_1311_ = lean_ctor_get(v_a_1310_, 0);
v_module_1312_ = lean_ctor_get(v_toImport_1311_, 0);
v___x_1313_ = lean_box(0);
v___x_1314_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___closed__0));
lean_inc(v_declName_1303_);
lean_inc(v_module_1312_);
v___x_1315_ = l_Lean_mkPrivateNameCore(v_module_1312_, v_declName_1303_);
lean_inc(v___x_1315_);
v___x_1324_ = l_Lean_Environment_moduleDeclares(v_env_1304_, v_module_1312_, v___x_1315_);
if (v___x_1324_ == 0)
{
uint8_t v___x_1325_; 
lean_inc(v___x_1315_);
lean_inc_ref(v_env_1304_);
v___x_1325_ = lean_is_reserved_name(v_env_1304_, v___x_1315_);
v___y_1317_ = v___x_1325_;
goto v___jp_1316_;
}
else
{
v___y_1317_ = v___x_1324_;
goto v___jp_1316_;
}
v___jp_1316_:
{
if (v___y_1317_ == 0)
{
size_t v___x_1318_; size_t v___x_1319_; 
lean_dec(v___x_1315_);
v___x_1318_ = ((size_t)1ULL);
v___x_1319_ = lean_usize_add(v_i_1307_, v___x_1318_);
v_i_1307_ = v___x_1319_;
v_b_1308_ = v___x_1314_;
goto _start;
}
else
{
lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; 
lean_dec_ref(v_env_1304_);
lean_dec(v_declName_1303_);
v___x_1321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1315_);
v___x_1322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1322_, 0, v___x_1321_);
v___x_1323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1322_);
lean_ctor_set(v___x_1323_, 1, v___x_1313_);
return v___x_1323_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___boxed(lean_object* v_declName_1326_, lean_object* v_env_1327_, lean_object* v_as_1328_, lean_object* v_sz_1329_, lean_object* v_i_1330_, lean_object* v_b_1331_){
_start:
{
size_t v_sz_boxed_1332_; size_t v_i_boxed_1333_; lean_object* v_res_1334_; 
v_sz_boxed_1332_ = lean_unbox_usize(v_sz_1329_);
lean_dec(v_sz_1329_);
v_i_boxed_1333_ = lean_unbox_usize(v_i_1330_);
lean_dec(v_i_1330_);
v_res_1334_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0(v_declName_1326_, v_env_1327_, v_as_1328_, v_sz_boxed_1332_, v_i_boxed_1333_, v_b_1331_);
lean_dec_ref(v_b_1331_);
lean_dec_ref(v_as_1328_);
return v_res_1334_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(lean_object* v_env_1335_, lean_object* v_opts_1336_, lean_object* v_declName_1337_, uint8_t v_localOnly_1338_){
_start:
{
lean_object* v___y_1340_; uint8_t v_isExporting_1358_; 
v_isExporting_1358_ = lean_ctor_get_uint8(v_env_1335_, sizeof(void*)*8);
if (v_isExporting_1358_ == 0)
{
goto v___jp_1349_;
}
else
{
lean_object* v___x_1359_; uint8_t v___x_1360_; 
v___x_1359_ = l_Lean_ResolveName_backward_privateInPublic;
v___x_1360_ = l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1(v_opts_1336_, v___x_1359_);
if (v___x_1360_ == 0)
{
lean_object* v___x_1361_; 
lean_dec(v_declName_1337_);
lean_dec_ref(v_env_1335_);
v___x_1361_ = lean_box(0);
return v___x_1361_;
}
else
{
goto v___jp_1349_;
}
}
v___jp_1339_:
{
lean_object* v_importAllModules_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; size_t v_sz_1344_; size_t v___x_1345_; lean_object* v___x_1346_; lean_object* v_fst_1347_; 
v_importAllModules_1341_ = lean_ctor_get(v___y_1340_, 5);
lean_inc_ref(v_importAllModules_1341_);
lean_dec_ref(v___y_1340_);
v___x_1342_ = lean_box(0);
v___x_1343_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___closed__0));
v_sz_1344_ = lean_array_size(v_importAllModules_1341_);
v___x_1345_ = ((size_t)0ULL);
v___x_1346_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0(v_declName_1337_, v_env_1335_, v_importAllModules_1341_, v_sz_1344_, v___x_1345_, v___x_1343_);
lean_dec_ref(v_importAllModules_1341_);
v_fst_1347_ = lean_ctor_get(v___x_1346_, 0);
lean_inc(v_fst_1347_);
lean_dec_ref(v___x_1346_);
if (lean_obj_tag(v_fst_1347_) == 0)
{
return v___x_1342_;
}
else
{
lean_object* v_val_1348_; 
v_val_1348_ = lean_ctor_get(v_fst_1347_, 0);
lean_inc(v_val_1348_);
lean_dec_ref_known(v_fst_1347_, 1);
return v_val_1348_;
}
}
v___jp_1349_:
{
uint8_t v___x_1350_; lean_object* v___x_1351_; uint8_t v___x_1352_; 
v___x_1350_ = 1;
lean_inc(v_declName_1337_);
v___x_1351_ = l_Lean_mkPrivateName(v_env_1335_, v_declName_1337_);
lean_inc(v___x_1351_);
lean_inc_ref(v_env_1335_);
v___x_1352_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1335_, v___x_1351_, v___x_1350_);
if (v___x_1352_ == 0)
{
lean_object* v___x_1353_; uint8_t v_isModule_1354_; 
lean_dec(v___x_1351_);
v___x_1353_ = l_Lean_Environment_header(v_env_1335_);
v_isModule_1354_ = lean_ctor_get_uint8(v___x_1353_, sizeof(void*)*7 + 4);
if (v_isModule_1354_ == 0)
{
lean_object* v___x_1355_; 
lean_dec_ref(v___x_1353_);
lean_dec(v_declName_1337_);
lean_dec_ref(v_env_1335_);
v___x_1355_ = lean_box(0);
return v___x_1355_;
}
else
{
if (v_localOnly_1338_ == 0)
{
v___y_1340_ = v___x_1353_;
goto v___jp_1339_;
}
else
{
if (v___x_1352_ == 0)
{
lean_object* v___x_1356_; 
lean_dec_ref(v___x_1353_);
lean_dec(v_declName_1337_);
lean_dec_ref(v_env_1335_);
v___x_1356_ = lean_box(0);
return v___x_1356_;
}
else
{
v___y_1340_ = v___x_1353_;
goto v___jp_1339_;
}
}
}
}
else
{
lean_object* v___x_1357_; 
lean_dec(v_declName_1337_);
lean_dec_ref(v_env_1335_);
v___x_1357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1357_, 0, v___x_1351_);
return v___x_1357_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName___boxed(lean_object* v_env_1362_, lean_object* v_opts_1363_, lean_object* v_declName_1364_, lean_object* v_localOnly_1365_){
_start:
{
uint8_t v_localOnly_boxed_1366_; lean_object* v_res_1367_; 
v_localOnly_boxed_1366_ = lean_unbox(v_localOnly_1365_);
v_res_1367_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(v_env_1362_, v_opts_1363_, v_declName_1364_, v_localOnly_boxed_1366_);
lean_dec_ref(v_opts_1363_);
return v_res_1367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(lean_object* v_env_1368_, lean_object* v_opts_1369_, lean_object* v_ns_1370_, lean_object* v_id_1371_, uint8_t v_localOnly_1372_){
_start:
{
lean_object* v_resolvedId_1373_; uint8_t v___x_1374_; lean_object* v_resolvedIds_1375_; 
lean_inc(v_id_1371_);
v_resolvedId_1373_ = l_Lean_Name_append(v_ns_1370_, v_id_1371_);
v___x_1374_ = l_Lean_Name_isAtomic(v_id_1371_);
lean_dec(v_id_1371_);
lean_inc_ref(v_env_1368_);
v_resolvedIds_1375_ = l_Lean_getAliases(v_env_1368_, v_resolvedId_1373_, v___x_1374_);
if (v___x_1374_ == 0)
{
goto v___jp_1376_;
}
else
{
uint8_t v___x_1382_; 
lean_inc(v_resolvedId_1373_);
lean_inc_ref(v_env_1368_);
v___x_1382_ = l_Lean_isProtected(v_env_1368_, v_resolvedId_1373_);
if (v___x_1382_ == 0)
{
goto v___jp_1376_;
}
else
{
lean_dec(v_resolvedId_1373_);
lean_dec_ref(v_env_1368_);
return v_resolvedIds_1375_;
}
}
v___jp_1376_:
{
uint8_t v___x_1377_; 
lean_inc(v_resolvedId_1373_);
lean_inc_ref(v_env_1368_);
v___x_1377_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1368_, v_resolvedId_1373_, v_localOnly_1372_);
if (v___x_1377_ == 0)
{
lean_object* v___x_1378_; 
v___x_1378_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(v_env_1368_, v_opts_1369_, v_resolvedId_1373_, v_localOnly_1372_);
if (lean_obj_tag(v___x_1378_) == 1)
{
lean_object* v_val_1379_; lean_object* v___x_1380_; 
v_val_1379_ = lean_ctor_get(v___x_1378_, 0);
lean_inc(v_val_1379_);
lean_dec_ref_known(v___x_1378_, 1);
v___x_1380_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1380_, 0, v_val_1379_);
lean_ctor_set(v___x_1380_, 1, v_resolvedIds_1375_);
return v___x_1380_;
}
else
{
lean_dec(v___x_1378_);
return v_resolvedIds_1375_;
}
}
else
{
lean_object* v___x_1381_; 
lean_dec_ref(v_env_1368_);
v___x_1381_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1381_, 0, v_resolvedId_1373_);
lean_ctor_set(v___x_1381_, 1, v_resolvedIds_1375_);
return v___x_1381_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName___boxed(lean_object* v_env_1383_, lean_object* v_opts_1384_, lean_object* v_ns_1385_, lean_object* v_id_1386_, lean_object* v_localOnly_1387_){
_start:
{
uint8_t v_localOnly_boxed_1388_; lean_object* v_res_1389_; 
v_localOnly_boxed_1388_ = lean_unbox(v_localOnly_1387_);
v_res_1389_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(v_env_1383_, v_opts_1384_, v_ns_1385_, v_id_1386_, v_localOnly_boxed_1388_);
lean_dec_ref(v_opts_1384_);
return v_res_1389_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace(lean_object* v_env_1390_, lean_object* v_opts_1391_, lean_object* v_id_1392_, uint8_t v_localOnly_1393_, lean_object* v_x_1394_){
_start:
{
if (lean_obj_tag(v_x_1394_) == 1)
{
lean_object* v_pre_1395_; lean_object* v___x_1396_; 
v_pre_1395_ = lean_ctor_get(v_x_1394_, 0);
lean_inc(v_pre_1395_);
lean_inc(v_id_1392_);
lean_inc_ref(v_env_1390_);
v___x_1396_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(v_env_1390_, v_opts_1391_, v_x_1394_, v_id_1392_, v_localOnly_1393_);
if (lean_obj_tag(v___x_1396_) == 0)
{
v_x_1394_ = v_pre_1395_;
goto _start;
}
else
{
lean_dec(v_pre_1395_);
lean_dec(v_id_1392_);
lean_dec_ref(v_env_1390_);
return v___x_1396_;
}
}
else
{
lean_object* v___x_1398_; 
lean_dec(v_x_1394_);
lean_dec(v_id_1392_);
lean_dec_ref(v_env_1390_);
v___x_1398_ = lean_box(0);
return v___x_1398_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace___boxed(lean_object* v_env_1399_, lean_object* v_opts_1400_, lean_object* v_id_1401_, lean_object* v_localOnly_1402_, lean_object* v_x_1403_){
_start:
{
uint8_t v_localOnly_boxed_1404_; lean_object* v_res_1405_; 
v_localOnly_boxed_1404_ = lean_unbox(v_localOnly_1402_);
v_res_1405_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace(v_env_1399_, v_opts_1400_, v_id_1401_, v_localOnly_boxed_1404_, v_x_1403_);
lean_dec_ref(v_opts_1400_);
return v_res_1405_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact(lean_object* v_env_1406_, lean_object* v_opts_1407_, lean_object* v_id_1408_, uint8_t v_localOnly_1409_){
_start:
{
uint8_t v___x_1410_; 
v___x_1410_ = l_Lean_Name_isAtomic(v_id_1408_);
if (v___x_1410_ == 0)
{
lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v_resolvedId_1413_; uint8_t v___x_1414_; 
v___x_1411_ = l_Lean_rootNamespace;
v___x_1412_ = lean_box(0);
v_resolvedId_1413_ = l_Lean_Name_replacePrefix(v_id_1408_, v___x_1411_, v___x_1412_);
lean_inc(v_resolvedId_1413_);
lean_inc_ref(v_env_1406_);
v___x_1414_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1406_, v_resolvedId_1413_, v_localOnly_1409_);
if (v___x_1414_ == 0)
{
lean_object* v___x_1415_; 
v___x_1415_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(v_env_1406_, v_opts_1407_, v_resolvedId_1413_, v_localOnly_1409_);
return v___x_1415_;
}
else
{
lean_object* v___x_1416_; 
lean_dec_ref(v_env_1406_);
v___x_1416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1416_, 0, v_resolvedId_1413_);
return v___x_1416_;
}
}
else
{
lean_object* v___x_1417_; 
lean_dec(v_id_1408_);
lean_dec_ref(v_env_1406_);
v___x_1417_ = lean_box(0);
return v___x_1417_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact___boxed(lean_object* v_env_1418_, lean_object* v_opts_1419_, lean_object* v_id_1420_, lean_object* v_localOnly_1421_){
_start:
{
uint8_t v_localOnly_boxed_1422_; lean_object* v_res_1423_; 
v_localOnly_boxed_1422_ = lean_unbox(v_localOnly_1421_);
v_res_1423_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact(v_env_1418_, v_opts_1419_, v_id_1420_, v_localOnly_boxed_1422_);
lean_dec_ref(v_opts_1419_);
return v_res_1423_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls(lean_object* v_env_1424_, lean_object* v_opts_1425_, lean_object* v_id_1426_, uint8_t v_localOnly_1427_, lean_object* v_x_1428_, lean_object* v_x_1429_){
_start:
{
if (lean_obj_tag(v_x_1428_) == 0)
{
lean_dec(v_id_1426_);
lean_dec_ref(v_env_1424_);
return v_x_1429_;
}
else
{
lean_object* v_head_1430_; 
v_head_1430_ = lean_ctor_get(v_x_1428_, 0);
lean_inc(v_head_1430_);
if (lean_obj_tag(v_head_1430_) == 0)
{
lean_object* v_tail_1431_; lean_object* v_ns_1432_; lean_object* v_except_1433_; uint8_t v___x_1434_; 
v_tail_1431_ = lean_ctor_get(v_x_1428_, 1);
lean_inc(v_tail_1431_);
lean_dec_ref_known(v_x_1428_, 2);
v_ns_1432_ = lean_ctor_get(v_head_1430_, 0);
lean_inc(v_ns_1432_);
v_except_1433_ = lean_ctor_get(v_head_1430_, 1);
lean_inc(v_except_1433_);
lean_dec_ref_known(v_head_1430_, 2);
v___x_1434_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_id_1426_, v_except_1433_);
lean_dec(v_except_1433_);
if (v___x_1434_ == 0)
{
lean_object* v_newResolvedIds_1435_; lean_object* v___x_1436_; 
lean_inc(v_id_1426_);
lean_inc_ref(v_env_1424_);
v_newResolvedIds_1435_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(v_env_1424_, v_opts_1425_, v_ns_1432_, v_id_1426_, v_localOnly_1427_);
v___x_1436_ = l_List_appendTR___redArg(v_newResolvedIds_1435_, v_x_1429_);
v_x_1428_ = v_tail_1431_;
v_x_1429_ = v___x_1436_;
goto _start;
}
else
{
lean_dec(v_ns_1432_);
v_x_1428_ = v_tail_1431_;
goto _start;
}
}
else
{
lean_object* v_tail_1439_; lean_object* v___x_1441_; uint8_t v_isShared_1442_; uint8_t v_isSharedCheck_1459_; 
v_tail_1439_ = lean_ctor_get(v_x_1428_, 1);
v_isSharedCheck_1459_ = !lean_is_exclusive(v_x_1428_);
if (v_isSharedCheck_1459_ == 0)
{
lean_object* v_unused_1460_; 
v_unused_1460_ = lean_ctor_get(v_x_1428_, 0);
lean_dec(v_unused_1460_);
v___x_1441_ = v_x_1428_;
v_isShared_1442_ = v_isSharedCheck_1459_;
goto v_resetjp_1440_;
}
else
{
lean_inc(v_tail_1439_);
lean_dec(v_x_1428_);
v___x_1441_ = lean_box(0);
v_isShared_1442_ = v_isSharedCheck_1459_;
goto v_resetjp_1440_;
}
v_resetjp_1440_:
{
lean_object* v_id_1443_; lean_object* v_declName_1444_; uint8_t v___x_1445_; 
v_id_1443_ = lean_ctor_get(v_head_1430_, 0);
lean_inc(v_id_1443_);
v_declName_1444_ = lean_ctor_get(v_head_1430_, 1);
lean_inc(v_declName_1444_);
lean_dec_ref_known(v_head_1430_, 2);
v___x_1445_ = lean_name_eq(v_id_1443_, v_id_1426_);
if (v___x_1445_ == 0)
{
uint8_t v___x_1446_; 
v___x_1446_ = l_Lean_Name_isPrefixOf(v_id_1443_, v_id_1426_);
if (v___x_1446_ == 0)
{
lean_dec(v_declName_1444_);
lean_dec(v_id_1443_);
lean_del_object(v___x_1441_);
v_x_1428_ = v_tail_1439_;
goto _start;
}
else
{
lean_object* v_candidate_1448_; uint8_t v___x_1449_; 
lean_inc(v_id_1426_);
v_candidate_1448_ = l_Lean_Name_replacePrefix(v_id_1426_, v_id_1443_, v_declName_1444_);
lean_dec(v_declName_1444_);
lean_dec(v_id_1443_);
lean_inc(v_candidate_1448_);
lean_inc_ref(v_env_1424_);
v___x_1449_ = l_Lean_Environment_contains(v_env_1424_, v_candidate_1448_, v___x_1446_);
if (v___x_1449_ == 0)
{
lean_dec(v_candidate_1448_);
lean_del_object(v___x_1441_);
v_x_1428_ = v_tail_1439_;
goto _start;
}
else
{
lean_object* v___x_1452_; 
if (v_isShared_1442_ == 0)
{
lean_ctor_set(v___x_1441_, 1, v_x_1429_);
lean_ctor_set(v___x_1441_, 0, v_candidate_1448_);
v___x_1452_ = v___x_1441_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v_candidate_1448_);
lean_ctor_set(v_reuseFailAlloc_1454_, 1, v_x_1429_);
v___x_1452_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
v_x_1428_ = v_tail_1439_;
v_x_1429_ = v___x_1452_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_1456_; 
lean_dec(v_id_1443_);
if (v_isShared_1442_ == 0)
{
lean_ctor_set(v___x_1441_, 1, v_x_1429_);
lean_ctor_set(v___x_1441_, 0, v_declName_1444_);
v___x_1456_ = v___x_1441_;
goto v_reusejp_1455_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v_declName_1444_);
lean_ctor_set(v_reuseFailAlloc_1458_, 1, v_x_1429_);
v___x_1456_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1455_;
}
v_reusejp_1455_:
{
v_x_1428_ = v_tail_1439_;
v_x_1429_ = v___x_1456_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls___boxed(lean_object* v_env_1461_, lean_object* v_opts_1462_, lean_object* v_id_1463_, lean_object* v_localOnly_1464_, lean_object* v_x_1465_, lean_object* v_x_1466_){
_start:
{
uint8_t v_localOnly_boxed_1467_; lean_object* v_res_1468_; 
v_localOnly_boxed_1467_ = lean_unbox(v_localOnly_1464_);
v_res_1468_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls(v_env_1461_, v_opts_1462_, v_id_1463_, v_localOnly_boxed_1467_, v_x_1465_, v_x_1466_);
lean_dec_ref(v_opts_1462_);
return v_res_1468_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg(lean_object* v_main_1479_, lean_object* v_as_x27_1480_, lean_object* v_b_1481_){
_start:
{
if (lean_obj_tag(v_as_x27_1480_) == 0)
{
return v_b_1481_;
}
else
{
lean_object* v_head_1482_; lean_object* v_tail_1483_; lean_object* v_snd_1484_; lean_object* v___x_1486_; uint8_t v_isShared_1487_; uint8_t v_isSharedCheck_1513_; 
v_head_1482_ = lean_ctor_get(v_as_x27_1480_, 0);
v_tail_1483_ = lean_ctor_get(v_as_x27_1480_, 1);
v_snd_1484_ = lean_ctor_get(v_b_1481_, 1);
v_isSharedCheck_1513_ = !lean_is_exclusive(v_b_1481_);
if (v_isSharedCheck_1513_ == 0)
{
lean_object* v_unused_1514_; 
v_unused_1514_ = lean_ctor_get(v_b_1481_, 0);
lean_dec(v_unused_1514_);
v___x_1486_ = v_b_1481_;
v_isShared_1487_ = v_isSharedCheck_1513_;
goto v_resetjp_1485_;
}
else
{
lean_inc(v_snd_1484_);
lean_dec(v_b_1481_);
v___x_1486_ = lean_box(0);
v_isShared_1487_ = v_isSharedCheck_1513_;
goto v_resetjp_1485_;
}
v_resetjp_1485_:
{
lean_object* v___x_1488_; 
v___x_1488_ = lean_box(0);
switch(lean_obj_tag(v_head_1482_))
{
case 2:
{
lean_object* v___x_1489_; uint8_t v___y_1491_; uint8_t v___x_1500_; 
v___x_1489_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__0));
v___x_1500_ = lean_name_eq(v_snd_1484_, v_main_1479_);
if (v___x_1500_ == 0)
{
lean_object* v_hygCtx_1501_; uint8_t v___x_1502_; 
v_hygCtx_1501_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__2));
v___x_1502_ = lean_name_eq(v_snd_1484_, v_hygCtx_1501_);
v___y_1491_ = v___x_1502_;
goto v___jp_1490_;
}
else
{
v___y_1491_ = v___x_1500_;
goto v___jp_1490_;
}
v___jp_1490_:
{
if (v___y_1491_ == 0)
{
uint8_t v___x_1492_; 
v___x_1492_ = l_Lean_Name_isAnonymous(v_snd_1484_);
if (v___x_1492_ == 0)
{
lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1496_; 
v___x_1493_ = lean_box(v___x_1492_);
v___x_1494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1494_, 0, v___x_1493_);
if (v_isShared_1487_ == 0)
{
lean_ctor_set(v___x_1486_, 0, v___x_1494_);
v___x_1496_ = v___x_1486_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v___x_1494_);
lean_ctor_set(v_reuseFailAlloc_1497_, 1, v_snd_1484_);
v___x_1496_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
return v___x_1496_;
}
}
else
{
lean_del_object(v___x_1486_);
lean_dec(v_snd_1484_);
v_as_x27_1480_ = v_tail_1483_;
v_b_1481_ = v___x_1489_;
goto _start;
}
}
else
{
lean_del_object(v___x_1486_);
lean_dec(v_snd_1484_);
v_as_x27_1480_ = v_tail_1483_;
v_b_1481_ = v___x_1489_;
goto _start;
}
}
}
case 1:
{
lean_object* v_str_1503_; lean_object* v___x_1504_; lean_object* v___x_1506_; 
v_str_1503_ = lean_ctor_get(v_head_1482_, 1);
lean_inc_ref(v_str_1503_);
v___x_1504_ = l_Lean_Name_str___override(v_snd_1484_, v_str_1503_);
if (v_isShared_1487_ == 0)
{
lean_ctor_set(v___x_1486_, 1, v___x_1504_);
lean_ctor_set(v___x_1486_, 0, v___x_1488_);
v___x_1506_ = v___x_1486_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v___x_1488_);
lean_ctor_set(v_reuseFailAlloc_1508_, 1, v___x_1504_);
v___x_1506_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1505_;
}
v_reusejp_1505_:
{
v_as_x27_1480_ = v_tail_1483_;
v_b_1481_ = v___x_1506_;
goto _start;
}
}
default: 
{
lean_object* v___x_1509_; lean_object* v___x_1511_; 
v___x_1509_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__3));
if (v_isShared_1487_ == 0)
{
lean_ctor_set(v___x_1486_, 0, v___x_1509_);
v___x_1511_ = v___x_1486_;
goto v_reusejp_1510_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v___x_1509_);
lean_ctor_set(v_reuseFailAlloc_1512_, 1, v_snd_1484_);
v___x_1511_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1510_;
}
v_reusejp_1510_:
{
return v___x_1511_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___boxed(lean_object* v_main_1515_, lean_object* v_as_x27_1516_, lean_object* v_b_1517_){
_start:
{
lean_object* v_res_1518_; 
v_res_1518_ = l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg(v_main_1515_, v_as_x27_1516_, v_b_1517_);
lean_dec(v_as_x27_1516_);
lean_dec(v_main_1515_);
return v_res_1518_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo(lean_object* v_main_1519_, lean_object* v_imported_1520_, lean_object* v_ctx_1521_){
_start:
{
lean_object* v_hygCtx_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v_fst_1528_; lean_object* v_snd_1529_; uint8_t v___y_1531_; 
v_hygCtx_1522_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__2));
v___x_1523_ = l_Lean_Name_components(v_imported_1520_);
v___x_1524_ = l_Lean_Name_components(v_ctx_1521_);
v___x_1525_ = l_List_appendTR___redArg(v___x_1523_, v___x_1524_);
v___x_1526_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__0));
v___x_1527_ = l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg(v_main_1519_, v___x_1525_, v___x_1526_);
lean_dec(v___x_1525_);
v_fst_1528_ = lean_ctor_get(v___x_1527_, 0);
lean_inc(v_fst_1528_);
v_snd_1529_ = lean_ctor_get(v___x_1527_, 1);
lean_inc(v_snd_1529_);
lean_dec_ref(v___x_1527_);
if (lean_obj_tag(v_fst_1528_) == 0)
{
uint8_t v___x_1533_; 
v___x_1533_ = lean_name_eq(v_snd_1529_, v_main_1519_);
if (v___x_1533_ == 0)
{
uint8_t v___x_1534_; 
v___x_1534_ = lean_name_eq(v_snd_1529_, v_hygCtx_1522_);
v___y_1531_ = v___x_1534_;
goto v___jp_1530_;
}
else
{
v___y_1531_ = v___x_1533_;
goto v___jp_1530_;
}
}
else
{
lean_object* v_val_1535_; uint8_t v___x_1536_; 
lean_dec(v_snd_1529_);
v_val_1535_ = lean_ctor_get(v_fst_1528_, 0);
lean_inc(v_val_1535_);
lean_dec_ref_known(v_fst_1528_, 1);
v___x_1536_ = lean_unbox(v_val_1535_);
lean_dec(v_val_1535_);
return v___x_1536_;
}
v___jp_1530_:
{
if (v___y_1531_ == 0)
{
uint8_t v___x_1532_; 
v___x_1532_ = l_Lean_Name_isAnonymous(v_snd_1529_);
lean_dec(v_snd_1529_);
return v___x_1532_;
}
else
{
lean_dec(v_snd_1529_);
return v___y_1531_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo___boxed(lean_object* v_main_1537_, lean_object* v_imported_1538_, lean_object* v_ctx_1539_){
_start:
{
uint8_t v_res_1540_; lean_object* v_r_1541_; 
v_res_1540_ = l___private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo(v_main_1537_, v_imported_1538_, v_ctx_1539_);
lean_dec(v_main_1537_);
v_r_1541_ = lean_box(v_res_1540_);
return v_r_1541_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0(lean_object* v_main_1542_, lean_object* v_as_1543_, lean_object* v_as_x27_1544_, lean_object* v_b_1545_, lean_object* v_a_1546_){
_start:
{
lean_object* v___x_1547_; 
v___x_1547_ = l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg(v_main_1542_, v_as_x27_1544_, v_b_1545_);
return v___x_1547_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___boxed(lean_object* v_main_1548_, lean_object* v_as_1549_, lean_object* v_as_x27_1550_, lean_object* v_b_1551_, lean_object* v_a_1552_){
_start:
{
lean_object* v_res_1553_; 
v_res_1553_ = l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0(v_main_1548_, v_as_1549_, v_as_x27_1550_, v_b_1551_, v_a_1552_);
lean_dec(v_as_x27_1550_);
lean_dec(v_as_1549_);
lean_dec(v_main_1548_);
return v_res_1553_;
}
}
LEAN_EXPORT lean_object* l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0(lean_object* v_as_1555_){
_start:
{
lean_object* v___f_1556_; lean_object* v___x_1557_; 
v___f_1556_ = ((lean_object*)(l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0___closed__0));
v___x_1557_ = l_List_eraseDupsBy___redArg(v___f_1556_, v_as_1555_);
return v___x_1557_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__1(lean_object* v_projs_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_){
_start:
{
if (lean_obj_tag(v_a_1559_) == 0)
{
lean_object* v___x_1561_; 
lean_dec(v_projs_1558_);
v___x_1561_ = l_List_reverse___redArg(v_a_1560_);
return v___x_1561_;
}
else
{
lean_object* v_head_1562_; lean_object* v_tail_1563_; lean_object* v___x_1565_; uint8_t v_isShared_1566_; uint8_t v_isSharedCheck_1572_; 
v_head_1562_ = lean_ctor_get(v_a_1559_, 0);
v_tail_1563_ = lean_ctor_get(v_a_1559_, 1);
v_isSharedCheck_1572_ = !lean_is_exclusive(v_a_1559_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1565_ = v_a_1559_;
v_isShared_1566_ = v_isSharedCheck_1572_;
goto v_resetjp_1564_;
}
else
{
lean_inc(v_tail_1563_);
lean_inc(v_head_1562_);
lean_dec(v_a_1559_);
v___x_1565_ = lean_box(0);
v_isShared_1566_ = v_isSharedCheck_1572_;
goto v_resetjp_1564_;
}
v_resetjp_1564_:
{
lean_object* v___x_1567_; lean_object* v___x_1569_; 
lean_inc(v_projs_1558_);
v___x_1567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1567_, 0, v_head_1562_);
lean_ctor_set(v___x_1567_, 1, v_projs_1558_);
if (v_isShared_1566_ == 0)
{
lean_ctor_set(v___x_1565_, 1, v_a_1560_);
lean_ctor_set(v___x_1565_, 0, v___x_1567_);
v___x_1569_ = v___x_1565_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v___x_1567_);
lean_ctor_set(v_reuseFailAlloc_1571_, 1, v_a_1560_);
v___x_1569_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
v_a_1559_ = v_tail_1563_;
v_a_1560_ = v___x_1569_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop(lean_object* v_env_1573_, lean_object* v_opts_1574_, lean_object* v_ns_1575_, lean_object* v_openDecls_1576_, lean_object* v_extractionResult_1577_, uint8_t v_localOnly_1578_, lean_object* v_id_1579_, lean_object* v_projs_1580_){
_start:
{
if (lean_obj_tag(v_id_1579_) == 1)
{
lean_object* v_pre_1581_; lean_object* v_str_1582_; lean_object* v_imported_1583_; lean_object* v_ctx_1584_; lean_object* v_scopes_1585_; lean_object* v___x_1586_; lean_object* v_id_1587_; lean_object* v___y_1589_; lean_object* v___x_1599_; lean_object* v___y_1601_; 
v_pre_1581_ = lean_ctor_get(v_id_1579_, 0);
lean_inc(v_pre_1581_);
v_str_1582_ = lean_ctor_get(v_id_1579_, 1);
lean_inc_ref(v_str_1582_);
v_imported_1583_ = lean_ctor_get(v_extractionResult_1577_, 1);
v_ctx_1584_ = lean_ctor_get(v_extractionResult_1577_, 2);
v_scopes_1585_ = lean_ctor_get(v_extractionResult_1577_, 3);
lean_inc(v_scopes_1585_);
lean_inc(v_ctx_1584_);
lean_inc(v_imported_1583_);
v___x_1586_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1586_, 0, v_id_1579_);
lean_ctor_set(v___x_1586_, 1, v_imported_1583_);
lean_ctor_set(v___x_1586_, 2, v_ctx_1584_);
lean_ctor_set(v___x_1586_, 3, v_scopes_1585_);
v_id_1587_ = l_Lean_MacroScopesView_review(v___x_1586_);
lean_inc(v_ns_1575_);
lean_inc(v_id_1587_);
lean_inc_ref(v_env_1573_);
v___x_1599_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace(v_env_1573_, v_opts_1574_, v_id_1587_, v_localOnly_1578_, v_ns_1575_);
if (lean_obj_tag(v___x_1599_) == 0)
{
lean_object* v___x_1606_; 
lean_inc(v_id_1587_);
lean_inc_ref(v_env_1573_);
v___x_1606_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact(v_env_1573_, v_opts_1574_, v_id_1587_, v_localOnly_1578_);
if (lean_obj_tag(v___x_1606_) == 0)
{
uint8_t v___x_1607_; 
lean_inc(v_id_1587_);
lean_inc_ref(v_env_1573_);
v___x_1607_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1573_, v_id_1587_, v_localOnly_1578_);
if (v___x_1607_ == 0)
{
v___y_1601_ = v___x_1599_;
goto v___jp_1600_;
}
else
{
lean_object* v___x_1608_; 
lean_inc(v_id_1587_);
v___x_1608_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1608_, 0, v_id_1587_);
lean_ctor_set(v___x_1608_, 1, v___x_1599_);
v___y_1601_ = v___x_1608_;
goto v___jp_1600_;
}
}
else
{
lean_object* v_val_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; 
lean_dec(v_id_1587_);
lean_dec_ref(v_str_1582_);
lean_dec(v_pre_1581_);
lean_dec(v_openDecls_1576_);
lean_dec(v_ns_1575_);
lean_dec_ref(v_env_1573_);
v_val_1609_ = lean_ctor_get(v___x_1606_, 0);
lean_inc(v_val_1609_);
lean_dec_ref_known(v___x_1606_, 1);
v___x_1610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1610_, 0, v_val_1609_);
lean_ctor_set(v___x_1610_, 1, v_projs_1580_);
v___x_1611_ = lean_box(0);
v___x_1612_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1612_, 0, v___x_1610_);
lean_ctor_set(v___x_1612_, 1, v___x_1611_);
return v___x_1612_;
}
}
else
{
lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; 
lean_dec(v_id_1587_);
lean_dec_ref(v_str_1582_);
lean_dec(v_pre_1581_);
lean_dec(v_openDecls_1576_);
lean_dec(v_ns_1575_);
lean_dec_ref(v_env_1573_);
v___x_1613_ = l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0(v___x_1599_);
v___x_1614_ = lean_box(0);
v___x_1615_ = l_List_mapTR_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__1(v_projs_1580_, v___x_1613_, v___x_1614_);
return v___x_1615_;
}
v___jp_1588_:
{
lean_object* v_resolvedIds_1590_; uint8_t v___x_1591_; lean_object* v___x_1592_; lean_object* v_resolvedIds_1593_; 
lean_inc(v_openDecls_1576_);
lean_inc(v_id_1587_);
lean_inc_ref_n(v_env_1573_, 2);
v_resolvedIds_1590_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls(v_env_1573_, v_opts_1574_, v_id_1587_, v_localOnly_1578_, v_openDecls_1576_, v___y_1589_);
v___x_1591_ = l_Lean_Name_isAtomic(v_id_1587_);
v___x_1592_ = l_Lean_getAliases(v_env_1573_, v_id_1587_, v___x_1591_);
lean_dec(v_id_1587_);
v_resolvedIds_1593_ = l_List_appendTR___redArg(v___x_1592_, v_resolvedIds_1590_);
if (lean_obj_tag(v_resolvedIds_1593_) == 0)
{
lean_object* v___x_1594_; 
v___x_1594_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1594_, 0, v_str_1582_);
lean_ctor_set(v___x_1594_, 1, v_projs_1580_);
v_id_1579_ = v_pre_1581_;
v_projs_1580_ = v___x_1594_;
goto _start;
}
else
{
lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; 
lean_dec_ref(v_str_1582_);
lean_dec(v_pre_1581_);
lean_dec(v_openDecls_1576_);
lean_dec(v_ns_1575_);
lean_dec_ref(v_env_1573_);
v___x_1596_ = l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0(v_resolvedIds_1593_);
v___x_1597_ = lean_box(0);
v___x_1598_ = l_List_mapTR_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__1(v_projs_1580_, v___x_1596_, v___x_1597_);
return v___x_1598_;
}
}
v___jp_1600_:
{
lean_object* v___x_1602_; 
lean_inc(v_id_1587_);
lean_inc_ref(v_env_1573_);
v___x_1602_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(v_env_1573_, v_opts_1574_, v_id_1587_, v_localOnly_1578_);
if (lean_obj_tag(v___x_1602_) == 1)
{
lean_object* v_val_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; 
v_val_1603_ = lean_ctor_get(v___x_1602_, 0);
lean_inc(v_val_1603_);
lean_dec_ref_known(v___x_1602_, 1);
v___x_1604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1604_, 0, v_val_1603_);
lean_ctor_set(v___x_1604_, 1, v___x_1599_);
v___x_1605_ = l_List_appendTR___redArg(v___x_1604_, v___y_1601_);
v___y_1589_ = v___x_1605_;
goto v___jp_1588_;
}
else
{
lean_dec(v___x_1602_);
lean_dec(v___x_1599_);
v___y_1589_ = v___y_1601_;
goto v___jp_1588_;
}
}
}
else
{
lean_object* v___x_1616_; 
lean_dec(v_projs_1580_);
lean_dec(v_id_1579_);
lean_dec(v_openDecls_1576_);
lean_dec(v_ns_1575_);
lean_dec_ref(v_env_1573_);
v___x_1616_ = lean_box(0);
return v___x_1616_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop___boxed(lean_object* v_env_1617_, lean_object* v_opts_1618_, lean_object* v_ns_1619_, lean_object* v_openDecls_1620_, lean_object* v_extractionResult_1621_, lean_object* v_localOnly_1622_, lean_object* v_id_1623_, lean_object* v_projs_1624_){
_start:
{
uint8_t v_localOnly_boxed_1625_; lean_object* v_res_1626_; 
v_localOnly_boxed_1625_ = lean_unbox(v_localOnly_1622_);
v_res_1626_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop(v_env_1617_, v_opts_1618_, v_ns_1619_, v_openDecls_1620_, v_extractionResult_1621_, v_localOnly_boxed_1625_, v_id_1623_, v_projs_1624_);
lean_dec_ref(v_extractionResult_1621_);
lean_dec_ref(v_opts_1618_);
return v_res_1626_;
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object* v_env_1627_, lean_object* v_opts_1628_, lean_object* v_ns_1629_, lean_object* v_openDecls_1630_, lean_object* v_id_1631_){
_start:
{
lean_object* v_extractionResult_1632_; uint8_t v___y_1634_; lean_object* v_imported_1638_; lean_object* v_ctx_1639_; lean_object* v_scopes_1640_; uint8_t v___x_1641_; 
v_extractionResult_1632_ = l_Lean_extractMacroScopes(v_id_1631_);
v_imported_1638_ = lean_ctor_get(v_extractionResult_1632_, 1);
lean_inc(v_imported_1638_);
v_ctx_1639_ = lean_ctor_get(v_extractionResult_1632_, 2);
lean_inc(v_ctx_1639_);
v_scopes_1640_ = lean_ctor_get(v_extractionResult_1632_, 3);
lean_inc(v_scopes_1640_);
v___x_1641_ = l_List_isEmpty___redArg(v_scopes_1640_);
lean_dec(v_scopes_1640_);
if (v___x_1641_ == 0)
{
lean_object* v___x_1642_; uint8_t v___x_1643_; 
v___x_1642_ = l_Lean_Environment_mainModule(v_env_1627_);
v___x_1643_ = l___private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo(v___x_1642_, v_imported_1638_, v_ctx_1639_);
lean_dec(v___x_1642_);
v___y_1634_ = v___x_1643_;
goto v___jp_1633_;
}
else
{
uint8_t v___x_1644_; 
lean_dec(v_ctx_1639_);
lean_dec(v_imported_1638_);
v___x_1644_ = 0;
v___y_1634_ = v___x_1644_;
goto v___jp_1633_;
}
v___jp_1633_:
{
lean_object* v_name_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; 
v_name_1635_ = lean_ctor_get(v_extractionResult_1632_, 0);
lean_inc(v_name_1635_);
v___x_1636_ = lean_box(0);
v___x_1637_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop(v_env_1627_, v_opts_1628_, v_ns_1629_, v_openDecls_1630_, v_extractionResult_1632_, v___y_1634_, v_name_1635_, v___x_1636_);
lean_dec_ref(v_extractionResult_1632_);
return v___x_1637_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveGlobalName___boxed(lean_object* v_env_1645_, lean_object* v_opts_1646_, lean_object* v_ns_1647_, lean_object* v_openDecls_1648_, lean_object* v_id_1649_){
_start:
{
lean_object* v_res_1650_; 
v_res_1650_ = l_Lean_ResolveName_resolveGlobalName(v_env_1645_, v_opts_1646_, v_ns_1647_, v_openDecls_1648_, v_id_1649_);
lean_dec_ref(v_opts_1646_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_ResolveName_resolveNamespaceUsingScope_x3f_spec__0(lean_object* v_msg_1651_){
_start:
{
lean_object* v___x_1652_; lean_object* v___x_1653_; 
v___x_1652_ = lean_box(0);
v___x_1653_ = lean_panic_fn_borrowed(v___x_1652_, v_msg_1651_);
return v___x_1653_;
}
}
static lean_object* _init_l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3(void){
_start:
{
lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; 
v___x_1657_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__2));
v___x_1658_ = lean_unsigned_to_nat(9u);
v___x_1659_ = lean_unsigned_to_nat(270u);
v___x_1660_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__1));
v___x_1661_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__0));
v___x_1662_ = l_mkPanicMessageWithDecl(v___x_1661_, v___x_1660_, v___x_1659_, v___x_1658_, v___x_1657_);
return v___x_1662_;
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespaceUsingScope_x3f(lean_object* v_env_1663_, lean_object* v_n_1664_, lean_object* v_ns_1665_){
_start:
{
switch(lean_obj_tag(v_ns_1665_))
{
case 1:
{
lean_object* v_pre_1666_; lean_object* v___x_1667_; uint8_t v___x_1668_; 
v_pre_1666_ = lean_ctor_get(v_ns_1665_, 0);
lean_inc(v_pre_1666_);
lean_inc(v_n_1664_);
v___x_1667_ = l_Lean_Name_append(v_ns_1665_, v_n_1664_);
lean_inc_ref(v_env_1663_);
v___x_1668_ = l_Lean_Environment_isNamespace(v_env_1663_, v___x_1667_);
if (v___x_1668_ == 0)
{
lean_dec(v___x_1667_);
v_ns_1665_ = v_pre_1666_;
goto _start;
}
else
{
lean_object* v___x_1670_; 
lean_dec(v_pre_1666_);
lean_dec(v_n_1664_);
lean_dec_ref(v_env_1663_);
v___x_1670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1670_, 0, v___x_1667_);
return v___x_1670_;
}
}
case 0:
{
lean_object* v___x_1671_; lean_object* v_n_1672_; uint8_t v___x_1673_; 
v___x_1671_ = l_Lean_rootNamespace;
v_n_1672_ = l_Lean_Name_replacePrefix(v_n_1664_, v___x_1671_, v_ns_1665_);
v___x_1673_ = l_Lean_Environment_isNamespace(v_env_1663_, v_n_1672_);
if (v___x_1673_ == 0)
{
lean_object* v___x_1674_; 
lean_dec(v_n_1672_);
v___x_1674_ = lean_box(0);
return v___x_1674_;
}
else
{
lean_object* v___x_1675_; 
v___x_1675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1675_, 0, v_n_1672_);
return v___x_1675_;
}
}
default: 
{
lean_object* v___x_1676_; lean_object* v___x_1677_; 
lean_dec(v_ns_1665_);
lean_dec(v_n_1664_);
lean_dec_ref(v_env_1663_);
v___x_1676_ = lean_obj_once(&l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3, &l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3_once, _init_l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3);
v___x_1677_ = l_panic___at___00Lean_ResolveName_resolveNamespaceUsingScope_x3f_spec__0(v___x_1676_);
return v___x_1677_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespaceUsingOpenDecls(lean_object* v_env_1678_, lean_object* v_n_1679_, lean_object* v_x_1680_){
_start:
{
if (lean_obj_tag(v_x_1680_) == 0)
{
lean_object* v___x_1681_; 
lean_dec(v_n_1679_);
lean_dec_ref(v_env_1678_);
v___x_1681_ = lean_box(0);
return v___x_1681_;
}
else
{
lean_object* v_head_1682_; 
v_head_1682_ = lean_ctor_get(v_x_1680_, 0);
if (lean_obj_tag(v_head_1682_) == 0)
{
lean_object* v_tail_1683_; lean_object* v___x_1685_; uint8_t v_isShared_1686_; uint8_t v_isSharedCheck_1700_; 
lean_inc_ref(v_head_1682_);
v_tail_1683_ = lean_ctor_get(v_x_1680_, 1);
v_isSharedCheck_1700_ = !lean_is_exclusive(v_x_1680_);
if (v_isSharedCheck_1700_ == 0)
{
lean_object* v_unused_1701_; 
v_unused_1701_ = lean_ctor_get(v_x_1680_, 0);
lean_dec(v_unused_1701_);
v___x_1685_ = v_x_1680_;
v_isShared_1686_ = v_isSharedCheck_1700_;
goto v_resetjp_1684_;
}
else
{
lean_inc(v_tail_1683_);
lean_dec(v_x_1680_);
v___x_1685_ = lean_box(0);
v_isShared_1686_ = v_isSharedCheck_1700_;
goto v_resetjp_1684_;
}
v_resetjp_1684_:
{
lean_object* v_ns_1687_; lean_object* v_except_1688_; lean_object* v___x_1689_; uint8_t v___y_1691_; uint8_t v___x_1697_; 
v_ns_1687_ = lean_ctor_get(v_head_1682_, 0);
lean_inc(v_ns_1687_);
v_except_1688_ = lean_ctor_get(v_head_1682_, 1);
lean_inc(v_except_1688_);
lean_dec_ref_known(v_head_1682_, 2);
lean_inc(v_n_1679_);
v___x_1689_ = l_Lean_Name_append(v_ns_1687_, v_n_1679_);
lean_inc_ref(v_env_1678_);
v___x_1697_ = l_Lean_Environment_isNamespace(v_env_1678_, v___x_1689_);
if (v___x_1697_ == 0)
{
lean_dec(v_except_1688_);
v___y_1691_ = v___x_1697_;
goto v___jp_1690_;
}
else
{
uint8_t v___x_1698_; 
v___x_1698_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_n_1679_, v_except_1688_);
lean_dec(v_except_1688_);
if (v___x_1698_ == 0)
{
v___y_1691_ = v___x_1697_;
goto v___jp_1690_;
}
else
{
lean_dec(v___x_1689_);
lean_del_object(v___x_1685_);
v_x_1680_ = v_tail_1683_;
goto _start;
}
}
v___jp_1690_:
{
if (v___y_1691_ == 0)
{
lean_dec(v___x_1689_);
lean_del_object(v___x_1685_);
v_x_1680_ = v_tail_1683_;
goto _start;
}
else
{
lean_object* v___x_1693_; lean_object* v___x_1695_; 
v___x_1693_ = l_Lean_ResolveName_resolveNamespaceUsingOpenDecls(v_env_1678_, v_n_1679_, v_tail_1683_);
if (v_isShared_1686_ == 0)
{
lean_ctor_set(v___x_1685_, 1, v___x_1693_);
lean_ctor_set(v___x_1685_, 0, v___x_1689_);
v___x_1695_ = v___x_1685_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v___x_1689_);
lean_ctor_set(v_reuseFailAlloc_1696_, 1, v___x_1693_);
v___x_1695_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
return v___x_1695_;
}
}
}
}
}
else
{
lean_object* v_tail_1702_; 
v_tail_1702_ = lean_ctor_get(v_x_1680_, 1);
lean_inc(v_tail_1702_);
lean_dec_ref_known(v_x_1680_, 2);
v_x_1680_ = v_tail_1702_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespace(lean_object* v_env_1704_, lean_object* v_ns_1705_, lean_object* v_openDecls_1706_, lean_object* v_id_1707_){
_start:
{
lean_object* v___x_1708_; 
lean_inc(v_id_1707_);
lean_inc_ref(v_env_1704_);
v___x_1708_ = l_Lean_ResolveName_resolveNamespaceUsingScope_x3f(v_env_1704_, v_id_1707_, v_ns_1705_);
if (lean_obj_tag(v___x_1708_) == 0)
{
lean_object* v___x_1709_; 
v___x_1709_ = l_Lean_ResolveName_resolveNamespaceUsingOpenDecls(v_env_1704_, v_id_1707_, v_openDecls_1706_);
return v___x_1709_;
}
else
{
lean_object* v_val_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; 
v_val_1710_ = lean_ctor_get(v___x_1708_, 0);
lean_inc(v_val_1710_);
lean_dec_ref_known(v___x_1708_, 1);
v___x_1711_ = l_Lean_ResolveName_resolveNamespaceUsingOpenDecls(v_env_1704_, v_id_1707_, v_openDecls_1706_);
v___x_1712_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1712_, 0, v_val_1710_);
lean_ctor_set(v___x_1712_, 1, v___x_1711_);
return v___x_1712_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadResolveNameOfMonadLift___redArg(lean_object* v_inst_1713_, lean_object* v_inst_1714_){
_start:
{
lean_object* v_getCurrNamespace_1715_; lean_object* v_getOpenDecls_1716_; lean_object* v___x_1718_; uint8_t v_isShared_1719_; uint8_t v_isSharedCheck_1725_; 
v_getCurrNamespace_1715_ = lean_ctor_get(v_inst_1714_, 0);
v_getOpenDecls_1716_ = lean_ctor_get(v_inst_1714_, 1);
v_isSharedCheck_1725_ = !lean_is_exclusive(v_inst_1714_);
if (v_isSharedCheck_1725_ == 0)
{
v___x_1718_ = v_inst_1714_;
v_isShared_1719_ = v_isSharedCheck_1725_;
goto v_resetjp_1717_;
}
else
{
lean_inc(v_getOpenDecls_1716_);
lean_inc(v_getCurrNamespace_1715_);
lean_dec(v_inst_1714_);
v___x_1718_ = lean_box(0);
v_isShared_1719_ = v_isSharedCheck_1725_;
goto v_resetjp_1717_;
}
v_resetjp_1717_:
{
lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1723_; 
lean_inc(v_inst_1713_);
v___x_1720_ = lean_apply_2(v_inst_1713_, lean_box(0), v_getCurrNamespace_1715_);
v___x_1721_ = lean_apply_2(v_inst_1713_, lean_box(0), v_getOpenDecls_1716_);
if (v_isShared_1719_ == 0)
{
lean_ctor_set(v___x_1718_, 1, v___x_1721_);
lean_ctor_set(v___x_1718_, 0, v___x_1720_);
v___x_1723_ = v___x_1718_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1724_; 
v_reuseFailAlloc_1724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1724_, 0, v___x_1720_);
lean_ctor_set(v_reuseFailAlloc_1724_, 1, v___x_1721_);
v___x_1723_ = v_reuseFailAlloc_1724_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
return v___x_1723_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadResolveNameOfMonadLift(lean_object* v_m_1726_, lean_object* v_n_1727_, lean_object* v_inst_1728_, lean_object* v_inst_1729_){
_start:
{
lean_object* v___x_1730_; 
v___x_1730_ = l_Lean_instMonadResolveNameOfMonadLift___redArg(v_inst_1728_, v_inst_1729_);
return v___x_1730_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1732_; lean_object* v___x_1733_; 
v___x_1732_ = ((lean_object*)(l_Lean_checkPrivateInPublic___redArg___lam__0___closed__0));
v___x_1733_ = l_Lean_stringToMessageData(v___x_1732_);
return v___x_1733_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1735_ = ((lean_object*)(l_Lean_checkPrivateInPublic___redArg___lam__0___closed__2));
v___x_1736_ = l_Lean_stringToMessageData(v___x_1735_);
return v___x_1736_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0(lean_object* v_____do__lift_1737_, lean_object* v_toApplicative_1738_, lean_object* v_id_1739_, lean_object* v_inst_1740_, lean_object* v_inst_1741_, lean_object* v_inst_1742_, lean_object* v_inst_1743_, uint8_t v_____do__lift_1744_){
_start:
{
uint8_t v_isExporting_1749_; 
v_isExporting_1749_ = lean_ctor_get_uint8(v_____do__lift_1737_, sizeof(void*)*8);
if (v_isExporting_1749_ == 0)
{
lean_dec(v_inst_1743_);
lean_dec(v_inst_1742_);
lean_dec_ref(v_inst_1741_);
lean_dec_ref(v_inst_1740_);
lean_dec(v_id_1739_);
goto v___jp_1745_;
}
else
{
uint8_t v___x_1750_; 
v___x_1750_ = l_Lean_isPrivateName(v_id_1739_);
if (v___x_1750_ == 0)
{
lean_dec(v_inst_1743_);
lean_dec(v_inst_1742_);
lean_dec_ref(v_inst_1741_);
lean_dec_ref(v_inst_1740_);
lean_dec(v_id_1739_);
goto v___jp_1745_;
}
else
{
if (v_____do__lift_1744_ == 0)
{
lean_dec(v_inst_1743_);
lean_dec(v_inst_1742_);
lean_dec_ref(v_inst_1741_);
lean_dec_ref(v_inst_1740_);
lean_dec(v_id_1739_);
goto v___jp_1745_;
}
else
{
lean_object* v___x_1751_; uint8_t v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; 
lean_dec_ref(v_toApplicative_1738_);
v___x_1751_ = lean_obj_once(&l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1, &l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1_once, _init_l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1);
v___x_1752_ = 0;
v___x_1753_ = l_Lean_MessageData_ofConstName(v_id_1739_, v___x_1752_);
v___x_1754_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1754_, 0, v___x_1751_);
lean_ctor_set(v___x_1754_, 1, v___x_1753_);
v___x_1755_ = lean_obj_once(&l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3, &l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3_once, _init_l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3);
v___x_1756_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1756_, 0, v___x_1754_);
lean_ctor_set(v___x_1756_, 1, v___x_1755_);
v___x_1757_ = l_Lean_logWarning___redArg(v_inst_1740_, v_inst_1741_, v_inst_1742_, v_inst_1743_, v___x_1756_);
return v___x_1757_;
}
}
}
v___jp_1745_:
{
lean_object* v_toPure_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; 
v_toPure_1746_ = lean_ctor_get(v_toApplicative_1738_, 1);
lean_inc(v_toPure_1746_);
lean_dec_ref(v_toApplicative_1738_);
v___x_1747_ = lean_box(0);
v___x_1748_ = lean_apply_2(v_toPure_1746_, lean_box(0), v___x_1747_);
return v___x_1748_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0___boxed(lean_object* v_____do__lift_1758_, lean_object* v_toApplicative_1759_, lean_object* v_id_1760_, lean_object* v_inst_1761_, lean_object* v_inst_1762_, lean_object* v_inst_1763_, lean_object* v_inst_1764_, lean_object* v_____do__lift_1765_){
_start:
{
uint8_t v_____do__lift_231__boxed_1766_; lean_object* v_res_1767_; 
v_____do__lift_231__boxed_1766_ = lean_unbox(v_____do__lift_1765_);
v_res_1767_ = l_Lean_checkPrivateInPublic___redArg___lam__0(v_____do__lift_1758_, v_toApplicative_1759_, v_id_1760_, v_inst_1761_, v_inst_1762_, v_inst_1763_, v_inst_1764_, v_____do__lift_231__boxed_1766_);
lean_dec_ref(v_____do__lift_1758_);
return v_res_1767_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__1(lean_object* v_toApplicative_1768_, lean_object* v_id_1769_, lean_object* v_inst_1770_, lean_object* v_inst_1771_, lean_object* v_inst_1772_, lean_object* v_inst_1773_, lean_object* v___x_1774_, lean_object* v_toBind_1775_, lean_object* v_____do__lift_1776_){
_start:
{
lean_object* v___f_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; 
lean_inc(v_inst_1773_);
lean_inc_ref(v_inst_1770_);
v___f_1777_ = lean_alloc_closure((void*)(l_Lean_checkPrivateInPublic___redArg___lam__0___boxed), 8, 7);
lean_closure_set(v___f_1777_, 0, v_____do__lift_1776_);
lean_closure_set(v___f_1777_, 1, v_toApplicative_1768_);
lean_closure_set(v___f_1777_, 2, v_id_1769_);
lean_closure_set(v___f_1777_, 3, v_inst_1770_);
lean_closure_set(v___f_1777_, 4, v_inst_1771_);
lean_closure_set(v___f_1777_, 5, v_inst_1772_);
lean_closure_set(v___f_1777_, 6, v_inst_1773_);
v___x_1778_ = l_Lean_ResolveName_backward_privateInPublic_warn;
v___x_1779_ = l_Lean_Option_getM___redArg(v_inst_1770_, v_inst_1773_, v___x_1774_, v___x_1778_);
v___x_1780_ = lean_apply_4(v_toBind_1775_, lean_box(0), lean_box(0), v___x_1779_, v___f_1777_);
return v___x_1780_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg(lean_object* v_inst_1781_, lean_object* v_inst_1782_, lean_object* v_inst_1783_, lean_object* v_inst_1784_, lean_object* v_inst_1785_, lean_object* v_id_1786_){
_start:
{
lean_object* v___x_1787_; lean_object* v_toApplicative_1788_; lean_object* v_toBind_1789_; lean_object* v_getEnv_1790_; lean_object* v___f_1791_; lean_object* v___x_1792_; 
v___x_1787_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1788_ = lean_ctor_get(v_inst_1781_, 0);
lean_inc_ref(v_toApplicative_1788_);
v_toBind_1789_ = lean_ctor_get(v_inst_1781_, 1);
lean_inc_n(v_toBind_1789_, 2);
v_getEnv_1790_ = lean_ctor_get(v_inst_1782_, 0);
lean_inc(v_getEnv_1790_);
lean_dec_ref(v_inst_1782_);
v___f_1791_ = lean_alloc_closure((void*)(l_Lean_checkPrivateInPublic___redArg___lam__1), 9, 8);
lean_closure_set(v___f_1791_, 0, v_toApplicative_1788_);
lean_closure_set(v___f_1791_, 1, v_id_1786_);
lean_closure_set(v___f_1791_, 2, v_inst_1781_);
lean_closure_set(v___f_1791_, 3, v_inst_1784_);
lean_closure_set(v___f_1791_, 4, v_inst_1785_);
lean_closure_set(v___f_1791_, 5, v_inst_1783_);
lean_closure_set(v___f_1791_, 6, v___x_1787_);
lean_closure_set(v___f_1791_, 7, v_toBind_1789_);
v___x_1792_ = lean_apply_4(v_toBind_1789_, lean_box(0), lean_box(0), v_getEnv_1790_, v___f_1791_);
return v___x_1792_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic(lean_object* v_m_1793_, lean_object* v_inst_1794_, lean_object* v_inst_1795_, lean_object* v_inst_1796_, lean_object* v_inst_1797_, lean_object* v_inst_1798_, lean_object* v_id_1799_){
_start:
{
lean_object* v___x_1800_; 
v___x_1800_ = l_Lean_checkPrivateInPublic___redArg(v_inst_1794_, v_inst_1795_, v_inst_1796_, v_inst_1797_, v_inst_1798_, v_id_1799_);
return v___x_1800_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__0(lean_object* v_env_1801_, lean_object* v_n_1802_, lean_object* v_toApplicative_1803_, uint8_t v___y_1804_, uint8_t v___x_1805_, lean_object* v_____r_1806_){
_start:
{
lean_object* v___x_1807_; 
v___x_1807_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1801_, v_n_1802_);
if (lean_obj_tag(v___x_1807_) == 0)
{
lean_object* v_toPure_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; 
v_toPure_1808_ = lean_ctor_get(v_toApplicative_1803_, 1);
lean_inc(v_toPure_1808_);
lean_dec_ref(v_toApplicative_1803_);
v___x_1809_ = lean_box(v___y_1804_);
v___x_1810_ = lean_apply_2(v_toPure_1808_, lean_box(0), v___x_1809_);
return v___x_1810_;
}
else
{
lean_object* v_val_1811_; lean_object* v_toPure_1812_; lean_object* v___x_1813_; uint8_t v_isModule_1814_; 
v_val_1811_ = lean_ctor_get(v___x_1807_, 0);
lean_inc(v_val_1811_);
lean_dec_ref_known(v___x_1807_, 1);
v_toPure_1812_ = lean_ctor_get(v_toApplicative_1803_, 1);
lean_inc(v_toPure_1812_);
lean_dec_ref(v_toApplicative_1803_);
v___x_1813_ = l_Lean_Environment_header(v_env_1801_);
v_isModule_1814_ = lean_ctor_get_uint8(v___x_1813_, sizeof(void*)*7 + 4);
if (v_isModule_1814_ == 0)
{
lean_object* v___x_1815_; lean_object* v___x_1816_; 
lean_dec_ref(v___x_1813_);
lean_dec(v_val_1811_);
v___x_1815_ = lean_box(v___x_1805_);
v___x_1816_ = lean_apply_2(v_toPure_1812_, lean_box(0), v___x_1815_);
return v___x_1816_;
}
else
{
lean_object* v_modules_1817_; lean_object* v___x_1818_; uint8_t v___x_1819_; 
v_modules_1817_ = lean_ctor_get(v___x_1813_, 3);
lean_inc_ref(v_modules_1817_);
lean_dec_ref(v___x_1813_);
v___x_1818_ = lean_array_get_size(v_modules_1817_);
v___x_1819_ = lean_nat_dec_lt(v_val_1811_, v___x_1818_);
if (v___x_1819_ == 0)
{
lean_object* v___x_1820_; lean_object* v___x_1821_; 
lean_dec_ref(v_modules_1817_);
lean_dec(v_val_1811_);
v___x_1820_ = lean_box(v_isModule_1814_);
v___x_1821_ = lean_apply_2(v_toPure_1812_, lean_box(0), v___x_1820_);
return v___x_1821_;
}
else
{
lean_object* v___x_1822_; lean_object* v_toImport_1823_; uint8_t v_importAll_1824_; 
v___x_1822_ = lean_array_fget(v_modules_1817_, v_val_1811_);
lean_dec(v_val_1811_);
lean_dec_ref(v_modules_1817_);
v_toImport_1823_ = lean_ctor_get(v___x_1822_, 0);
lean_inc_ref(v_toImport_1823_);
lean_dec(v___x_1822_);
v_importAll_1824_ = lean_ctor_get_uint8(v_toImport_1823_, sizeof(void*)*1);
lean_dec_ref(v_toImport_1823_);
if (v_importAll_1824_ == 0)
{
lean_object* v___x_1825_; lean_object* v___x_1826_; 
v___x_1825_ = lean_box(v_isModule_1814_);
v___x_1826_ = lean_apply_2(v_toPure_1812_, lean_box(0), v___x_1825_);
return v___x_1826_;
}
else
{
lean_object* v___x_1827_; lean_object* v___x_1828_; 
v___x_1827_ = lean_box(v___y_1804_);
v___x_1828_ = lean_apply_2(v_toPure_1812_, lean_box(0), v___x_1827_);
return v___x_1828_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__0___boxed(lean_object* v_env_1829_, lean_object* v_n_1830_, lean_object* v_toApplicative_1831_, lean_object* v___y_1832_, lean_object* v___x_1833_, lean_object* v_____r_1834_){
_start:
{
uint8_t v___y_758__boxed_1835_; uint8_t v___x_759__boxed_1836_; lean_object* v_res_1837_; 
v___y_758__boxed_1835_ = lean_unbox(v___y_1832_);
v___x_759__boxed_1836_ = lean_unbox(v___x_1833_);
v_res_1837_ = l_Lean_isInaccessiblePrivateName___redArg___lam__0(v_env_1829_, v_n_1830_, v_toApplicative_1831_, v___y_758__boxed_1835_, v___x_759__boxed_1836_, v_____r_1834_);
lean_dec(v_n_1830_);
lean_dec_ref(v_env_1829_);
return v_res_1837_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__1(lean_object* v_env_1838_, lean_object* v_n_1839_, lean_object* v_toApplicative_1840_, uint8_t v___x_1841_, lean_object* v_inst_1842_, lean_object* v_inst_1843_, lean_object* v_inst_1844_, lean_object* v_inst_1845_, lean_object* v_inst_1846_, lean_object* v_toBind_1847_, uint8_t v___x_1848_, uint8_t v_____do__lift_1849_){
_start:
{
uint8_t v___y_1851_; uint8_t v_isExporting_1857_; 
v_isExporting_1857_ = lean_ctor_get_uint8(v_env_1838_, sizeof(void*)*8);
if (v_isExporting_1857_ == 0)
{
v___y_1851_ = v_isExporting_1857_;
goto v___jp_1850_;
}
else
{
if (v_____do__lift_1849_ == 0)
{
lean_object* v_toPure_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; 
lean_dec(v_toBind_1847_);
lean_dec(v_inst_1846_);
lean_dec_ref(v_inst_1845_);
lean_dec(v_inst_1844_);
lean_dec_ref(v_inst_1843_);
lean_dec_ref(v_inst_1842_);
lean_dec(v_n_1839_);
lean_dec_ref(v_env_1838_);
v_toPure_1858_ = lean_ctor_get(v_toApplicative_1840_, 1);
lean_inc(v_toPure_1858_);
lean_dec_ref(v_toApplicative_1840_);
v___x_1859_ = lean_box(v___x_1841_);
v___x_1860_ = lean_apply_2(v_toPure_1858_, lean_box(0), v___x_1859_);
return v___x_1860_;
}
else
{
v___y_1851_ = v___x_1848_;
goto v___jp_1850_;
}
}
v___jp_1850_:
{
lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___f_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; 
v___x_1852_ = lean_box(v___y_1851_);
v___x_1853_ = lean_box(v___x_1841_);
lean_inc(v_n_1839_);
v___f_1854_ = lean_alloc_closure((void*)(l_Lean_isInaccessiblePrivateName___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1854_, 0, v_env_1838_);
lean_closure_set(v___f_1854_, 1, v_n_1839_);
lean_closure_set(v___f_1854_, 2, v_toApplicative_1840_);
lean_closure_set(v___f_1854_, 3, v___x_1852_);
lean_closure_set(v___f_1854_, 4, v___x_1853_);
v___x_1855_ = l_Lean_checkPrivateInPublic___redArg(v_inst_1842_, v_inst_1843_, v_inst_1844_, v_inst_1845_, v_inst_1846_, v_n_1839_);
v___x_1856_ = lean_apply_4(v_toBind_1847_, lean_box(0), lean_box(0), v___x_1855_, v___f_1854_);
return v___x_1856_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__1___boxed(lean_object* v_env_1861_, lean_object* v_n_1862_, lean_object* v_toApplicative_1863_, lean_object* v___x_1864_, lean_object* v_inst_1865_, lean_object* v_inst_1866_, lean_object* v_inst_1867_, lean_object* v_inst_1868_, lean_object* v_inst_1869_, lean_object* v_toBind_1870_, lean_object* v___x_1871_, lean_object* v_____do__lift_1872_){
_start:
{
uint8_t v___x_799__boxed_1873_; uint8_t v___x_805__boxed_1874_; uint8_t v_____do__lift_806__boxed_1875_; lean_object* v_res_1876_; 
v___x_799__boxed_1873_ = lean_unbox(v___x_1864_);
v___x_805__boxed_1874_ = lean_unbox(v___x_1871_);
v_____do__lift_806__boxed_1875_ = lean_unbox(v_____do__lift_1872_);
v_res_1876_ = l_Lean_isInaccessiblePrivateName___redArg___lam__1(v_env_1861_, v_n_1862_, v_toApplicative_1863_, v___x_799__boxed_1873_, v_inst_1865_, v_inst_1866_, v_inst_1867_, v_inst_1868_, v_inst_1869_, v_toBind_1870_, v___x_805__boxed_1874_, v_____do__lift_806__boxed_1875_);
return v_res_1876_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__2(lean_object* v_n_1877_, lean_object* v_toApplicative_1878_, uint8_t v___x_1879_, lean_object* v_inst_1880_, lean_object* v_inst_1881_, lean_object* v_inst_1882_, lean_object* v_inst_1883_, lean_object* v_inst_1884_, lean_object* v_toBind_1885_, uint8_t v___x_1886_, lean_object* v_env_1887_){
_start:
{
lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___f_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; 
v___x_1888_ = lean_box(v___x_1879_);
v___x_1889_ = lean_box(v___x_1886_);
lean_inc(v_toBind_1885_);
lean_inc(v_inst_1882_);
lean_inc_ref(v_inst_1880_);
v___f_1890_ = lean_alloc_closure((void*)(l_Lean_isInaccessiblePrivateName___redArg___lam__1___boxed), 12, 11);
lean_closure_set(v___f_1890_, 0, v_env_1887_);
lean_closure_set(v___f_1890_, 1, v_n_1877_);
lean_closure_set(v___f_1890_, 2, v_toApplicative_1878_);
lean_closure_set(v___f_1890_, 3, v___x_1888_);
lean_closure_set(v___f_1890_, 4, v_inst_1880_);
lean_closure_set(v___f_1890_, 5, v_inst_1881_);
lean_closure_set(v___f_1890_, 6, v_inst_1882_);
lean_closure_set(v___f_1890_, 7, v_inst_1883_);
lean_closure_set(v___f_1890_, 8, v_inst_1884_);
lean_closure_set(v___f_1890_, 9, v_toBind_1885_);
lean_closure_set(v___f_1890_, 10, v___x_1889_);
v___x_1891_ = l_Lean_KVMap_instValueBool;
v___x_1892_ = l_Lean_ResolveName_backward_privateInPublic;
v___x_1893_ = l_Lean_Option_getM___redArg(v_inst_1880_, v_inst_1882_, v___x_1891_, v___x_1892_);
v___x_1894_ = lean_apply_4(v_toBind_1885_, lean_box(0), lean_box(0), v___x_1893_, v___f_1890_);
return v___x_1894_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__2___boxed(lean_object* v_n_1895_, lean_object* v_toApplicative_1896_, lean_object* v___x_1897_, lean_object* v_inst_1898_, lean_object* v_inst_1899_, lean_object* v_inst_1900_, lean_object* v_inst_1901_, lean_object* v_inst_1902_, lean_object* v_toBind_1903_, lean_object* v___x_1904_, lean_object* v_env_1905_){
_start:
{
uint8_t v___x_841__boxed_1906_; uint8_t v___x_847__boxed_1907_; lean_object* v_res_1908_; 
v___x_841__boxed_1906_ = lean_unbox(v___x_1897_);
v___x_847__boxed_1907_ = lean_unbox(v___x_1904_);
v_res_1908_ = l_Lean_isInaccessiblePrivateName___redArg___lam__2(v_n_1895_, v_toApplicative_1896_, v___x_841__boxed_1906_, v_inst_1898_, v_inst_1899_, v_inst_1900_, v_inst_1901_, v_inst_1902_, v_toBind_1903_, v___x_847__boxed_1907_, v_env_1905_);
return v_res_1908_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg(lean_object* v_inst_1909_, lean_object* v_inst_1910_, lean_object* v_inst_1911_, lean_object* v_inst_1912_, lean_object* v_inst_1913_, lean_object* v_n_1914_){
_start:
{
uint8_t v___x_1915_; 
v___x_1915_ = l_Lean_isPrivateName(v_n_1914_);
if (v___x_1915_ == 0)
{
lean_object* v_toApplicative_1916_; lean_object* v_toPure_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; 
lean_dec(v_n_1914_);
lean_dec(v_inst_1913_);
lean_dec_ref(v_inst_1912_);
lean_dec(v_inst_1910_);
lean_dec_ref(v_inst_1909_);
v_toApplicative_1916_ = lean_ctor_get(v_inst_1911_, 0);
lean_inc_ref(v_toApplicative_1916_);
lean_dec_ref(v_inst_1911_);
v_toPure_1917_ = lean_ctor_get(v_toApplicative_1916_, 1);
lean_inc(v_toPure_1917_);
lean_dec_ref(v_toApplicative_1916_);
v___x_1918_ = lean_box(v___x_1915_);
v___x_1919_ = lean_apply_2(v_toPure_1917_, lean_box(0), v___x_1918_);
return v___x_1919_;
}
else
{
lean_object* v_toApplicative_1920_; lean_object* v_toBind_1921_; lean_object* v_getEnv_1922_; uint8_t v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___f_1926_; lean_object* v___x_1927_; 
v_toApplicative_1920_ = lean_ctor_get(v_inst_1911_, 0);
lean_inc_ref(v_toApplicative_1920_);
v_toBind_1921_ = lean_ctor_get(v_inst_1911_, 1);
lean_inc_n(v_toBind_1921_, 2);
v_getEnv_1922_ = lean_ctor_get(v_inst_1912_, 0);
lean_inc(v_getEnv_1922_);
v___x_1923_ = 0;
v___x_1924_ = lean_box(v___x_1915_);
v___x_1925_ = lean_box(v___x_1923_);
v___f_1926_ = lean_alloc_closure((void*)(l_Lean_isInaccessiblePrivateName___redArg___lam__2___boxed), 11, 10);
lean_closure_set(v___f_1926_, 0, v_n_1914_);
lean_closure_set(v___f_1926_, 1, v_toApplicative_1920_);
lean_closure_set(v___f_1926_, 2, v___x_1924_);
lean_closure_set(v___f_1926_, 3, v_inst_1911_);
lean_closure_set(v___f_1926_, 4, v_inst_1912_);
lean_closure_set(v___f_1926_, 5, v_inst_1913_);
lean_closure_set(v___f_1926_, 6, v_inst_1909_);
lean_closure_set(v___f_1926_, 7, v_inst_1910_);
lean_closure_set(v___f_1926_, 8, v_toBind_1921_);
lean_closure_set(v___f_1926_, 9, v___x_1925_);
v___x_1927_ = lean_apply_4(v_toBind_1921_, lean_box(0), lean_box(0), v_getEnv_1922_, v___f_1926_);
return v___x_1927_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName(lean_object* v_m_1928_, lean_object* v_inst_1929_, lean_object* v_inst_1930_, lean_object* v_inst_1931_, lean_object* v_inst_1932_, lean_object* v_inst_1933_, lean_object* v_n_1934_){
_start:
{
lean_object* v___x_1935_; 
v___x_1935_ = l_Lean_isInaccessiblePrivateName___redArg(v_inst_1929_, v_inst_1930_, v_inst_1931_, v_inst_1932_, v_inst_1933_, v_n_1934_);
return v___x_1935_;
}
}
LEAN_EXPORT uint8_t l_Lean_resolveGlobalName___redArg___lam__0(lean_object* v_x_1936_){
_start:
{
lean_object* v_fst_1937_; uint8_t v___x_1938_; 
v_fst_1937_ = lean_ctor_get(v_x_1936_, 0);
v___x_1938_ = l_Lean_isPrivateName(v_fst_1937_);
return v___x_1938_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__0___boxed(lean_object* v_x_1939_){
_start:
{
uint8_t v_res_1940_; lean_object* v_r_1941_; 
v_res_1940_ = l_Lean_resolveGlobalName___redArg___lam__0(v_x_1939_);
lean_dec_ref(v_x_1939_);
v_r_1941_ = lean_box(v_res_1940_);
return v_r_1941_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__1(lean_object* v_toPure_1942_, lean_object* v_res_1943_, lean_object* v_____r_1944_){
_start:
{
lean_object* v___x_1945_; 
v___x_1945_ = lean_apply_2(v_toPure_1942_, lean_box(0), v_res_1943_);
return v___x_1945_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__2(uint8_t v_enableLog_1946_, lean_object* v_toPure_1947_, lean_object* v_res_1948_, lean_object* v___f_1949_, lean_object* v_inst_1950_, lean_object* v_inst_1951_, lean_object* v_inst_1952_, lean_object* v_inst_1953_, lean_object* v_inst_1954_, lean_object* v_toBind_1955_, lean_object* v___f_1956_, lean_object* v_____do__lift_1957_){
_start:
{
if (v_enableLog_1946_ == 0)
{
lean_object* v___x_1958_; 
lean_dec(v___f_1956_);
lean_dec(v_toBind_1955_);
lean_dec(v_inst_1954_);
lean_dec_ref(v_inst_1953_);
lean_dec(v_inst_1952_);
lean_dec_ref(v_inst_1951_);
lean_dec_ref(v_inst_1950_);
lean_dec_ref(v___f_1949_);
v___x_1958_ = lean_apply_2(v_toPure_1947_, lean_box(0), v_res_1948_);
return v___x_1958_;
}
else
{
uint8_t v_isExporting_1959_; 
v_isExporting_1959_ = lean_ctor_get_uint8(v_____do__lift_1957_, sizeof(void*)*8);
if (v_isExporting_1959_ == 0)
{
lean_object* v___x_1960_; 
lean_dec(v___f_1956_);
lean_dec(v_toBind_1955_);
lean_dec(v_inst_1954_);
lean_dec_ref(v_inst_1953_);
lean_dec(v_inst_1952_);
lean_dec_ref(v_inst_1951_);
lean_dec_ref(v_inst_1950_);
lean_dec_ref(v___f_1949_);
v___x_1960_ = lean_apply_2(v_toPure_1947_, lean_box(0), v_res_1948_);
return v___x_1960_;
}
else
{
lean_object* v___x_1961_; 
lean_inc(v_res_1948_);
v___x_1961_ = l_List_find_x3f___redArg(v___f_1949_, v_res_1948_);
if (lean_obj_tag(v___x_1961_) == 1)
{
lean_object* v_val_1962_; lean_object* v_fst_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; 
lean_dec(v_res_1948_);
lean_dec(v_toPure_1947_);
v_val_1962_ = lean_ctor_get(v___x_1961_, 0);
lean_inc(v_val_1962_);
lean_dec_ref_known(v___x_1961_, 1);
v_fst_1963_ = lean_ctor_get(v_val_1962_, 0);
lean_inc(v_fst_1963_);
lean_dec(v_val_1962_);
v___x_1964_ = l_Lean_checkPrivateInPublic___redArg(v_inst_1950_, v_inst_1951_, v_inst_1952_, v_inst_1953_, v_inst_1954_, v_fst_1963_);
v___x_1965_ = lean_apply_4(v_toBind_1955_, lean_box(0), lean_box(0), v___x_1964_, v___f_1956_);
return v___x_1965_;
}
else
{
lean_object* v___x_1966_; 
lean_dec(v___x_1961_);
lean_dec(v___f_1956_);
lean_dec(v_toBind_1955_);
lean_dec(v_inst_1954_);
lean_dec_ref(v_inst_1953_);
lean_dec(v_inst_1952_);
lean_dec_ref(v_inst_1951_);
lean_dec_ref(v_inst_1950_);
v___x_1966_ = lean_apply_2(v_toPure_1947_, lean_box(0), v_res_1948_);
return v___x_1966_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__2___boxed(lean_object* v_enableLog_1967_, lean_object* v_toPure_1968_, lean_object* v_res_1969_, lean_object* v___f_1970_, lean_object* v_inst_1971_, lean_object* v_inst_1972_, lean_object* v_inst_1973_, lean_object* v_inst_1974_, lean_object* v_inst_1975_, lean_object* v_toBind_1976_, lean_object* v___f_1977_, lean_object* v_____do__lift_1978_){
_start:
{
uint8_t v_enableLog_boxed_1979_; lean_object* v_res_1980_; 
v_enableLog_boxed_1979_ = lean_unbox(v_enableLog_1967_);
v_res_1980_ = l_Lean_resolveGlobalName___redArg___lam__2(v_enableLog_boxed_1979_, v_toPure_1968_, v_res_1969_, v___f_1970_, v_inst_1971_, v_inst_1972_, v_inst_1973_, v_inst_1974_, v_inst_1975_, v_toBind_1976_, v___f_1977_, v_____do__lift_1978_);
lean_dec_ref(v_____do__lift_1978_);
return v_res_1980_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__3(lean_object* v_____do__lift_1981_, lean_object* v_____do__lift_1982_, lean_object* v_____do__lift_1983_, lean_object* v_id_1984_, lean_object* v_toPure_1985_, uint8_t v_enableLog_1986_, lean_object* v___f_1987_, lean_object* v_inst_1988_, lean_object* v_inst_1989_, lean_object* v_inst_1990_, lean_object* v_inst_1991_, lean_object* v_inst_1992_, lean_object* v_toBind_1993_, lean_object* v_getEnv_1994_, lean_object* v_____do__lift_1995_){
_start:
{
lean_object* v_res_1996_; lean_object* v___f_1997_; lean_object* v___x_1998_; lean_object* v___f_1999_; lean_object* v___x_2000_; 
v_res_1996_ = l_Lean_ResolveName_resolveGlobalName(v_____do__lift_1981_, v_____do__lift_1982_, v_____do__lift_1983_, v_____do__lift_1995_, v_id_1984_);
lean_inc(v_res_1996_);
lean_inc(v_toPure_1985_);
v___f_1997_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1997_, 0, v_toPure_1985_);
lean_closure_set(v___f_1997_, 1, v_res_1996_);
v___x_1998_ = lean_box(v_enableLog_1986_);
lean_inc(v_toBind_1993_);
v___f_1999_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__2___boxed), 12, 11);
lean_closure_set(v___f_1999_, 0, v___x_1998_);
lean_closure_set(v___f_1999_, 1, v_toPure_1985_);
lean_closure_set(v___f_1999_, 2, v_res_1996_);
lean_closure_set(v___f_1999_, 3, v___f_1987_);
lean_closure_set(v___f_1999_, 4, v_inst_1988_);
lean_closure_set(v___f_1999_, 5, v_inst_1989_);
lean_closure_set(v___f_1999_, 6, v_inst_1990_);
lean_closure_set(v___f_1999_, 7, v_inst_1991_);
lean_closure_set(v___f_1999_, 8, v_inst_1992_);
lean_closure_set(v___f_1999_, 9, v_toBind_1993_);
lean_closure_set(v___f_1999_, 10, v___f_1997_);
v___x_2000_ = lean_apply_4(v_toBind_1993_, lean_box(0), lean_box(0), v_getEnv_1994_, v___f_1999_);
return v___x_2000_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__3___boxed(lean_object* v_____do__lift_2001_, lean_object* v_____do__lift_2002_, lean_object* v_____do__lift_2003_, lean_object* v_id_2004_, lean_object* v_toPure_2005_, lean_object* v_enableLog_2006_, lean_object* v___f_2007_, lean_object* v_inst_2008_, lean_object* v_inst_2009_, lean_object* v_inst_2010_, lean_object* v_inst_2011_, lean_object* v_inst_2012_, lean_object* v_toBind_2013_, lean_object* v_getEnv_2014_, lean_object* v_____do__lift_2015_){
_start:
{
uint8_t v_enableLog_boxed_2016_; lean_object* v_res_2017_; 
v_enableLog_boxed_2016_ = lean_unbox(v_enableLog_2006_);
v_res_2017_ = l_Lean_resolveGlobalName___redArg___lam__3(v_____do__lift_2001_, v_____do__lift_2002_, v_____do__lift_2003_, v_id_2004_, v_toPure_2005_, v_enableLog_boxed_2016_, v___f_2007_, v_inst_2008_, v_inst_2009_, v_inst_2010_, v_inst_2011_, v_inst_2012_, v_toBind_2013_, v_getEnv_2014_, v_____do__lift_2015_);
lean_dec_ref(v_____do__lift_2002_);
return v_res_2017_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__4(lean_object* v_____do__lift_2018_, lean_object* v_____do__lift_2019_, lean_object* v_id_2020_, lean_object* v_toPure_2021_, uint8_t v_enableLog_2022_, lean_object* v___f_2023_, lean_object* v_inst_2024_, lean_object* v_inst_2025_, lean_object* v_inst_2026_, lean_object* v_inst_2027_, lean_object* v_inst_2028_, lean_object* v_toBind_2029_, lean_object* v_getEnv_2030_, lean_object* v_getOpenDecls_2031_, lean_object* v_____do__lift_2032_){
_start:
{
lean_object* v___x_2033_; lean_object* v___f_2034_; lean_object* v___x_2035_; 
v___x_2033_ = lean_box(v_enableLog_2022_);
lean_inc(v_toBind_2029_);
v___f_2034_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__3___boxed), 15, 14);
lean_closure_set(v___f_2034_, 0, v_____do__lift_2018_);
lean_closure_set(v___f_2034_, 1, v_____do__lift_2019_);
lean_closure_set(v___f_2034_, 2, v_____do__lift_2032_);
lean_closure_set(v___f_2034_, 3, v_id_2020_);
lean_closure_set(v___f_2034_, 4, v_toPure_2021_);
lean_closure_set(v___f_2034_, 5, v___x_2033_);
lean_closure_set(v___f_2034_, 6, v___f_2023_);
lean_closure_set(v___f_2034_, 7, v_inst_2024_);
lean_closure_set(v___f_2034_, 8, v_inst_2025_);
lean_closure_set(v___f_2034_, 9, v_inst_2026_);
lean_closure_set(v___f_2034_, 10, v_inst_2027_);
lean_closure_set(v___f_2034_, 11, v_inst_2028_);
lean_closure_set(v___f_2034_, 12, v_toBind_2029_);
lean_closure_set(v___f_2034_, 13, v_getEnv_2030_);
v___x_2035_ = lean_apply_4(v_toBind_2029_, lean_box(0), lean_box(0), v_getOpenDecls_2031_, v___f_2034_);
return v___x_2035_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__4___boxed(lean_object* v_____do__lift_2036_, lean_object* v_____do__lift_2037_, lean_object* v_id_2038_, lean_object* v_toPure_2039_, lean_object* v_enableLog_2040_, lean_object* v___f_2041_, lean_object* v_inst_2042_, lean_object* v_inst_2043_, lean_object* v_inst_2044_, lean_object* v_inst_2045_, lean_object* v_inst_2046_, lean_object* v_toBind_2047_, lean_object* v_getEnv_2048_, lean_object* v_getOpenDecls_2049_, lean_object* v_____do__lift_2050_){
_start:
{
uint8_t v_enableLog_boxed_2051_; lean_object* v_res_2052_; 
v_enableLog_boxed_2051_ = lean_unbox(v_enableLog_2040_);
v_res_2052_ = l_Lean_resolveGlobalName___redArg___lam__4(v_____do__lift_2036_, v_____do__lift_2037_, v_id_2038_, v_toPure_2039_, v_enableLog_boxed_2051_, v___f_2041_, v_inst_2042_, v_inst_2043_, v_inst_2044_, v_inst_2045_, v_inst_2046_, v_toBind_2047_, v_getEnv_2048_, v_getOpenDecls_2049_, v_____do__lift_2050_);
return v_res_2052_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__5(lean_object* v_inst_2053_, lean_object* v_____do__lift_2054_, lean_object* v_id_2055_, lean_object* v_toPure_2056_, uint8_t v_enableLog_2057_, lean_object* v___f_2058_, lean_object* v_inst_2059_, lean_object* v_inst_2060_, lean_object* v_inst_2061_, lean_object* v_inst_2062_, lean_object* v_inst_2063_, lean_object* v_toBind_2064_, lean_object* v_getEnv_2065_, lean_object* v_____do__lift_2066_){
_start:
{
lean_object* v_getCurrNamespace_2067_; lean_object* v_getOpenDecls_2068_; lean_object* v___x_2069_; lean_object* v___f_2070_; lean_object* v___x_2071_; 
v_getCurrNamespace_2067_ = lean_ctor_get(v_inst_2053_, 0);
lean_inc(v_getCurrNamespace_2067_);
v_getOpenDecls_2068_ = lean_ctor_get(v_inst_2053_, 1);
lean_inc(v_getOpenDecls_2068_);
lean_dec_ref(v_inst_2053_);
v___x_2069_ = lean_box(v_enableLog_2057_);
lean_inc(v_toBind_2064_);
v___f_2070_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__4___boxed), 15, 14);
lean_closure_set(v___f_2070_, 0, v_____do__lift_2054_);
lean_closure_set(v___f_2070_, 1, v_____do__lift_2066_);
lean_closure_set(v___f_2070_, 2, v_id_2055_);
lean_closure_set(v___f_2070_, 3, v_toPure_2056_);
lean_closure_set(v___f_2070_, 4, v___x_2069_);
lean_closure_set(v___f_2070_, 5, v___f_2058_);
lean_closure_set(v___f_2070_, 6, v_inst_2059_);
lean_closure_set(v___f_2070_, 7, v_inst_2060_);
lean_closure_set(v___f_2070_, 8, v_inst_2061_);
lean_closure_set(v___f_2070_, 9, v_inst_2062_);
lean_closure_set(v___f_2070_, 10, v_inst_2063_);
lean_closure_set(v___f_2070_, 11, v_toBind_2064_);
lean_closure_set(v___f_2070_, 12, v_getEnv_2065_);
lean_closure_set(v___f_2070_, 13, v_getOpenDecls_2068_);
v___x_2071_ = lean_apply_4(v_toBind_2064_, lean_box(0), lean_box(0), v_getCurrNamespace_2067_, v___f_2070_);
return v___x_2071_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__5___boxed(lean_object* v_inst_2072_, lean_object* v_____do__lift_2073_, lean_object* v_id_2074_, lean_object* v_toPure_2075_, lean_object* v_enableLog_2076_, lean_object* v___f_2077_, lean_object* v_inst_2078_, lean_object* v_inst_2079_, lean_object* v_inst_2080_, lean_object* v_inst_2081_, lean_object* v_inst_2082_, lean_object* v_toBind_2083_, lean_object* v_getEnv_2084_, lean_object* v_____do__lift_2085_){
_start:
{
uint8_t v_enableLog_boxed_2086_; lean_object* v_res_2087_; 
v_enableLog_boxed_2086_ = lean_unbox(v_enableLog_2076_);
v_res_2087_ = l_Lean_resolveGlobalName___redArg___lam__5(v_inst_2072_, v_____do__lift_2073_, v_id_2074_, v_toPure_2075_, v_enableLog_boxed_2086_, v___f_2077_, v_inst_2078_, v_inst_2079_, v_inst_2080_, v_inst_2081_, v_inst_2082_, v_toBind_2083_, v_getEnv_2084_, v_____do__lift_2085_);
return v_res_2087_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__6(lean_object* v_inst_2088_, lean_object* v_id_2089_, lean_object* v_toPure_2090_, uint8_t v_enableLog_2091_, lean_object* v___f_2092_, lean_object* v_inst_2093_, lean_object* v_inst_2094_, lean_object* v_inst_2095_, lean_object* v_inst_2096_, lean_object* v_inst_2097_, lean_object* v_toBind_2098_, lean_object* v_getEnv_2099_, lean_object* v_____do__lift_2100_){
_start:
{
lean_object* v___x_2101_; lean_object* v___f_2102_; lean_object* v___x_2103_; 
v___x_2101_ = lean_box(v_enableLog_2091_);
lean_inc(v_toBind_2098_);
lean_inc(v_inst_2095_);
v___f_2102_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__5___boxed), 14, 13);
lean_closure_set(v___f_2102_, 0, v_inst_2088_);
lean_closure_set(v___f_2102_, 1, v_____do__lift_2100_);
lean_closure_set(v___f_2102_, 2, v_id_2089_);
lean_closure_set(v___f_2102_, 3, v_toPure_2090_);
lean_closure_set(v___f_2102_, 4, v___x_2101_);
lean_closure_set(v___f_2102_, 5, v___f_2092_);
lean_closure_set(v___f_2102_, 6, v_inst_2093_);
lean_closure_set(v___f_2102_, 7, v_inst_2094_);
lean_closure_set(v___f_2102_, 8, v_inst_2095_);
lean_closure_set(v___f_2102_, 9, v_inst_2096_);
lean_closure_set(v___f_2102_, 10, v_inst_2097_);
lean_closure_set(v___f_2102_, 11, v_toBind_2098_);
lean_closure_set(v___f_2102_, 12, v_getEnv_2099_);
v___x_2103_ = lean_apply_4(v_toBind_2098_, lean_box(0), lean_box(0), v_inst_2095_, v___f_2102_);
return v___x_2103_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__6___boxed(lean_object* v_inst_2104_, lean_object* v_id_2105_, lean_object* v_toPure_2106_, lean_object* v_enableLog_2107_, lean_object* v___f_2108_, lean_object* v_inst_2109_, lean_object* v_inst_2110_, lean_object* v_inst_2111_, lean_object* v_inst_2112_, lean_object* v_inst_2113_, lean_object* v_toBind_2114_, lean_object* v_getEnv_2115_, lean_object* v_____do__lift_2116_){
_start:
{
uint8_t v_enableLog_boxed_2117_; lean_object* v_res_2118_; 
v_enableLog_boxed_2117_ = lean_unbox(v_enableLog_2107_);
v_res_2118_ = l_Lean_resolveGlobalName___redArg___lam__6(v_inst_2104_, v_id_2105_, v_toPure_2106_, v_enableLog_boxed_2117_, v___f_2108_, v_inst_2109_, v_inst_2110_, v_inst_2111_, v_inst_2112_, v_inst_2113_, v_toBind_2114_, v_getEnv_2115_, v_____do__lift_2116_);
return v_res_2118_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg(lean_object* v_inst_2120_, lean_object* v_inst_2121_, lean_object* v_inst_2122_, lean_object* v_inst_2123_, lean_object* v_inst_2124_, lean_object* v_inst_2125_, lean_object* v_id_2126_, uint8_t v_enableLog_2127_){
_start:
{
lean_object* v_toApplicative_2128_; lean_object* v_toBind_2129_; lean_object* v_getEnv_2130_; lean_object* v_toPure_2131_; lean_object* v___f_2132_; lean_object* v___x_2133_; lean_object* v___f_2134_; lean_object* v___x_2135_; 
v_toApplicative_2128_ = lean_ctor_get(v_inst_2120_, 0);
v_toBind_2129_ = lean_ctor_get(v_inst_2120_, 1);
lean_inc_n(v_toBind_2129_, 2);
v_getEnv_2130_ = lean_ctor_get(v_inst_2122_, 0);
lean_inc_n(v_getEnv_2130_, 2);
v_toPure_2131_ = lean_ctor_get(v_toApplicative_2128_, 1);
lean_inc(v_toPure_2131_);
v___f_2132_ = ((lean_object*)(l_Lean_resolveGlobalName___redArg___closed__0));
v___x_2133_ = lean_box(v_enableLog_2127_);
v___f_2134_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__6___boxed), 13, 12);
lean_closure_set(v___f_2134_, 0, v_inst_2121_);
lean_closure_set(v___f_2134_, 1, v_id_2126_);
lean_closure_set(v___f_2134_, 2, v_toPure_2131_);
lean_closure_set(v___f_2134_, 3, v___x_2133_);
lean_closure_set(v___f_2134_, 4, v___f_2132_);
lean_closure_set(v___f_2134_, 5, v_inst_2120_);
lean_closure_set(v___f_2134_, 6, v_inst_2122_);
lean_closure_set(v___f_2134_, 7, v_inst_2123_);
lean_closure_set(v___f_2134_, 8, v_inst_2124_);
lean_closure_set(v___f_2134_, 9, v_inst_2125_);
lean_closure_set(v___f_2134_, 10, v_toBind_2129_);
lean_closure_set(v___f_2134_, 11, v_getEnv_2130_);
v___x_2135_ = lean_apply_4(v_toBind_2129_, lean_box(0), lean_box(0), v_getEnv_2130_, v___f_2134_);
return v___x_2135_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___boxed(lean_object* v_inst_2136_, lean_object* v_inst_2137_, lean_object* v_inst_2138_, lean_object* v_inst_2139_, lean_object* v_inst_2140_, lean_object* v_inst_2141_, lean_object* v_id_2142_, lean_object* v_enableLog_2143_){
_start:
{
uint8_t v_enableLog_boxed_2144_; lean_object* v_res_2145_; 
v_enableLog_boxed_2144_ = lean_unbox(v_enableLog_2143_);
v_res_2145_ = l_Lean_resolveGlobalName___redArg(v_inst_2136_, v_inst_2137_, v_inst_2138_, v_inst_2139_, v_inst_2140_, v_inst_2141_, v_id_2142_, v_enableLog_boxed_2144_);
return v_res_2145_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName(lean_object* v_m_2146_, lean_object* v_inst_2147_, lean_object* v_inst_2148_, lean_object* v_inst_2149_, lean_object* v_inst_2150_, lean_object* v_inst_2151_, lean_object* v_inst_2152_, lean_object* v_id_2153_, uint8_t v_enableLog_2154_){
_start:
{
lean_object* v___x_2155_; 
v___x_2155_ = l_Lean_resolveGlobalName___redArg(v_inst_2147_, v_inst_2148_, v_inst_2149_, v_inst_2150_, v_inst_2151_, v_inst_2152_, v_id_2153_, v_enableLog_2154_);
return v___x_2155_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___boxed(lean_object* v_m_2156_, lean_object* v_inst_2157_, lean_object* v_inst_2158_, lean_object* v_inst_2159_, lean_object* v_inst_2160_, lean_object* v_inst_2161_, lean_object* v_inst_2162_, lean_object* v_id_2163_, lean_object* v_enableLog_2164_){
_start:
{
uint8_t v_enableLog_boxed_2165_; lean_object* v_res_2166_; 
v_enableLog_boxed_2165_ = lean_unbox(v_enableLog_2164_);
v_res_2166_ = l_Lean_resolveGlobalName(v_m_2156_, v_inst_2157_, v_inst_2158_, v_inst_2159_, v_inst_2160_, v_inst_2161_, v_inst_2162_, v_id_2163_, v_enableLog_boxed_2165_);
return v_res_2166_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__0(lean_object* v_toPure_2167_, lean_object* v_nss_2168_, lean_object* v_____r_2169_){
_start:
{
lean_object* v___x_2170_; 
v___x_2170_ = lean_apply_2(v_toPure_2167_, lean_box(0), v_nss_2168_);
return v___x_2170_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__1(lean_object* v_____do__lift_2173_, lean_object* v_____do__lift_2174_, lean_object* v_id_2175_, uint8_t v_allowEmpty_2176_, lean_object* v_toPure_2177_, lean_object* v_inst_2178_, lean_object* v_inst_2179_, lean_object* v_toBind_2180_, lean_object* v_____do__lift_2181_){
_start:
{
lean_object* v_nss_2182_; 
lean_inc(v_id_2175_);
v_nss_2182_ = l_Lean_ResolveName_resolveNamespace(v_____do__lift_2173_, v_____do__lift_2174_, v_____do__lift_2181_, v_id_2175_);
if (v_allowEmpty_2176_ == 0)
{
uint8_t v___x_2183_; 
v___x_2183_ = l_List_isEmpty___redArg(v_nss_2182_);
if (v___x_2183_ == 0)
{
lean_object* v___x_2184_; 
lean_dec(v_toBind_2180_);
lean_dec_ref(v_inst_2179_);
lean_dec_ref(v_inst_2178_);
lean_dec(v_id_2175_);
v___x_2184_ = lean_apply_2(v_toPure_2177_, lean_box(0), v_nss_2182_);
return v___x_2184_;
}
else
{
lean_object* v___f_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; 
v___f_2185_ = lean_alloc_closure((void*)(l_Lean_resolveNamespaceCore___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2185_, 0, v_toPure_2177_);
lean_closure_set(v___f_2185_, 1, v_nss_2182_);
v___x_2186_ = ((lean_object*)(l_Lean_resolveNamespaceCore___redArg___lam__1___closed__0));
v___x_2187_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_id_2175_, v___x_2183_);
v___x_2188_ = lean_string_append(v___x_2186_, v___x_2187_);
lean_dec_ref(v___x_2187_);
v___x_2189_ = ((lean_object*)(l_Lean_resolveNamespaceCore___redArg___lam__1___closed__1));
v___x_2190_ = lean_string_append(v___x_2188_, v___x_2189_);
v___x_2191_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2191_, 0, v___x_2190_);
v___x_2192_ = l_Lean_MessageData_ofFormat(v___x_2191_);
v___x_2193_ = l_Lean_throwError___redArg(v_inst_2178_, v_inst_2179_, v___x_2192_);
v___x_2194_ = lean_apply_4(v_toBind_2180_, lean_box(0), lean_box(0), v___x_2193_, v___f_2185_);
return v___x_2194_;
}
}
else
{
lean_object* v___x_2195_; 
lean_dec(v_toBind_2180_);
lean_dec_ref(v_inst_2179_);
lean_dec_ref(v_inst_2178_);
lean_dec(v_id_2175_);
v___x_2195_ = lean_apply_2(v_toPure_2177_, lean_box(0), v_nss_2182_);
return v___x_2195_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__1___boxed(lean_object* v_____do__lift_2196_, lean_object* v_____do__lift_2197_, lean_object* v_id_2198_, lean_object* v_allowEmpty_2199_, lean_object* v_toPure_2200_, lean_object* v_inst_2201_, lean_object* v_inst_2202_, lean_object* v_toBind_2203_, lean_object* v_____do__lift_2204_){
_start:
{
uint8_t v_allowEmpty_boxed_2205_; lean_object* v_res_2206_; 
v_allowEmpty_boxed_2205_ = lean_unbox(v_allowEmpty_2199_);
v_res_2206_ = l_Lean_resolveNamespaceCore___redArg___lam__1(v_____do__lift_2196_, v_____do__lift_2197_, v_id_2198_, v_allowEmpty_boxed_2205_, v_toPure_2200_, v_inst_2201_, v_inst_2202_, v_toBind_2203_, v_____do__lift_2204_);
return v_res_2206_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__2(lean_object* v_____do__lift_2207_, lean_object* v_id_2208_, uint8_t v_allowEmpty_2209_, lean_object* v_toPure_2210_, lean_object* v_inst_2211_, lean_object* v_inst_2212_, lean_object* v_toBind_2213_, lean_object* v_getOpenDecls_2214_, lean_object* v_____do__lift_2215_){
_start:
{
lean_object* v___x_2216_; lean_object* v___f_2217_; lean_object* v___x_2218_; 
v___x_2216_ = lean_box(v_allowEmpty_2209_);
lean_inc(v_toBind_2213_);
v___f_2217_ = lean_alloc_closure((void*)(l_Lean_resolveNamespaceCore___redArg___lam__1___boxed), 9, 8);
lean_closure_set(v___f_2217_, 0, v_____do__lift_2207_);
lean_closure_set(v___f_2217_, 1, v_____do__lift_2215_);
lean_closure_set(v___f_2217_, 2, v_id_2208_);
lean_closure_set(v___f_2217_, 3, v___x_2216_);
lean_closure_set(v___f_2217_, 4, v_toPure_2210_);
lean_closure_set(v___f_2217_, 5, v_inst_2211_);
lean_closure_set(v___f_2217_, 6, v_inst_2212_);
lean_closure_set(v___f_2217_, 7, v_toBind_2213_);
v___x_2218_ = lean_apply_4(v_toBind_2213_, lean_box(0), lean_box(0), v_getOpenDecls_2214_, v___f_2217_);
return v___x_2218_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__2___boxed(lean_object* v_____do__lift_2219_, lean_object* v_id_2220_, lean_object* v_allowEmpty_2221_, lean_object* v_toPure_2222_, lean_object* v_inst_2223_, lean_object* v_inst_2224_, lean_object* v_toBind_2225_, lean_object* v_getOpenDecls_2226_, lean_object* v_____do__lift_2227_){
_start:
{
uint8_t v_allowEmpty_boxed_2228_; lean_object* v_res_2229_; 
v_allowEmpty_boxed_2228_ = lean_unbox(v_allowEmpty_2221_);
v_res_2229_ = l_Lean_resolveNamespaceCore___redArg___lam__2(v_____do__lift_2219_, v_id_2220_, v_allowEmpty_boxed_2228_, v_toPure_2222_, v_inst_2223_, v_inst_2224_, v_toBind_2225_, v_getOpenDecls_2226_, v_____do__lift_2227_);
return v_res_2229_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__3(lean_object* v_inst_2230_, lean_object* v_id_2231_, uint8_t v_allowEmpty_2232_, lean_object* v_toPure_2233_, lean_object* v_inst_2234_, lean_object* v_inst_2235_, lean_object* v_toBind_2236_, lean_object* v_____do__lift_2237_){
_start:
{
lean_object* v_getCurrNamespace_2238_; lean_object* v_getOpenDecls_2239_; lean_object* v___x_2240_; lean_object* v___f_2241_; lean_object* v___x_2242_; 
v_getCurrNamespace_2238_ = lean_ctor_get(v_inst_2230_, 0);
lean_inc(v_getCurrNamespace_2238_);
v_getOpenDecls_2239_ = lean_ctor_get(v_inst_2230_, 1);
lean_inc(v_getOpenDecls_2239_);
lean_dec_ref(v_inst_2230_);
v___x_2240_ = lean_box(v_allowEmpty_2232_);
lean_inc(v_toBind_2236_);
v___f_2241_ = lean_alloc_closure((void*)(l_Lean_resolveNamespaceCore___redArg___lam__2___boxed), 9, 8);
lean_closure_set(v___f_2241_, 0, v_____do__lift_2237_);
lean_closure_set(v___f_2241_, 1, v_id_2231_);
lean_closure_set(v___f_2241_, 2, v___x_2240_);
lean_closure_set(v___f_2241_, 3, v_toPure_2233_);
lean_closure_set(v___f_2241_, 4, v_inst_2234_);
lean_closure_set(v___f_2241_, 5, v_inst_2235_);
lean_closure_set(v___f_2241_, 6, v_toBind_2236_);
lean_closure_set(v___f_2241_, 7, v_getOpenDecls_2239_);
v___x_2242_ = lean_apply_4(v_toBind_2236_, lean_box(0), lean_box(0), v_getCurrNamespace_2238_, v___f_2241_);
return v___x_2242_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__3___boxed(lean_object* v_inst_2243_, lean_object* v_id_2244_, lean_object* v_allowEmpty_2245_, lean_object* v_toPure_2246_, lean_object* v_inst_2247_, lean_object* v_inst_2248_, lean_object* v_toBind_2249_, lean_object* v_____do__lift_2250_){
_start:
{
uint8_t v_allowEmpty_boxed_2251_; lean_object* v_res_2252_; 
v_allowEmpty_boxed_2251_ = lean_unbox(v_allowEmpty_2245_);
v_res_2252_ = l_Lean_resolveNamespaceCore___redArg___lam__3(v_inst_2243_, v_id_2244_, v_allowEmpty_boxed_2251_, v_toPure_2246_, v_inst_2247_, v_inst_2248_, v_toBind_2249_, v_____do__lift_2250_);
return v_res_2252_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg(lean_object* v_inst_2253_, lean_object* v_inst_2254_, lean_object* v_inst_2255_, lean_object* v_inst_2256_, lean_object* v_id_2257_, uint8_t v_allowEmpty_2258_){
_start:
{
lean_object* v_toApplicative_2259_; lean_object* v_toBind_2260_; lean_object* v_getEnv_2261_; lean_object* v_toPure_2262_; lean_object* v___x_2263_; lean_object* v___f_2264_; lean_object* v___x_2265_; 
v_toApplicative_2259_ = lean_ctor_get(v_inst_2253_, 0);
v_toBind_2260_ = lean_ctor_get(v_inst_2253_, 1);
lean_inc_n(v_toBind_2260_, 2);
v_getEnv_2261_ = lean_ctor_get(v_inst_2255_, 0);
lean_inc(v_getEnv_2261_);
lean_dec_ref(v_inst_2255_);
v_toPure_2262_ = lean_ctor_get(v_toApplicative_2259_, 1);
lean_inc(v_toPure_2262_);
v___x_2263_ = lean_box(v_allowEmpty_2258_);
v___f_2264_ = lean_alloc_closure((void*)(l_Lean_resolveNamespaceCore___redArg___lam__3___boxed), 8, 7);
lean_closure_set(v___f_2264_, 0, v_inst_2254_);
lean_closure_set(v___f_2264_, 1, v_id_2257_);
lean_closure_set(v___f_2264_, 2, v___x_2263_);
lean_closure_set(v___f_2264_, 3, v_toPure_2262_);
lean_closure_set(v___f_2264_, 4, v_inst_2253_);
lean_closure_set(v___f_2264_, 5, v_inst_2256_);
lean_closure_set(v___f_2264_, 6, v_toBind_2260_);
v___x_2265_ = lean_apply_4(v_toBind_2260_, lean_box(0), lean_box(0), v_getEnv_2261_, v___f_2264_);
return v___x_2265_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___boxed(lean_object* v_inst_2266_, lean_object* v_inst_2267_, lean_object* v_inst_2268_, lean_object* v_inst_2269_, lean_object* v_id_2270_, lean_object* v_allowEmpty_2271_){
_start:
{
uint8_t v_allowEmpty_boxed_2272_; lean_object* v_res_2273_; 
v_allowEmpty_boxed_2272_ = lean_unbox(v_allowEmpty_2271_);
v_res_2273_ = l_Lean_resolveNamespaceCore___redArg(v_inst_2266_, v_inst_2267_, v_inst_2268_, v_inst_2269_, v_id_2270_, v_allowEmpty_boxed_2272_);
return v_res_2273_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore(lean_object* v_m_2274_, lean_object* v_inst_2275_, lean_object* v_inst_2276_, lean_object* v_inst_2277_, lean_object* v_inst_2278_, lean_object* v_id_2279_, uint8_t v_allowEmpty_2280_){
_start:
{
lean_object* v___x_2281_; 
v___x_2281_ = l_Lean_resolveNamespaceCore___redArg(v_inst_2275_, v_inst_2276_, v_inst_2277_, v_inst_2278_, v_id_2279_, v_allowEmpty_2280_);
return v___x_2281_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___boxed(lean_object* v_m_2282_, lean_object* v_inst_2283_, lean_object* v_inst_2284_, lean_object* v_inst_2285_, lean_object* v_inst_2286_, lean_object* v_id_2287_, lean_object* v_allowEmpty_2288_){
_start:
{
uint8_t v_allowEmpty_boxed_2289_; lean_object* v_res_2290_; 
v_allowEmpty_boxed_2289_ = lean_unbox(v_allowEmpty_2288_);
v_res_2290_ = l_Lean_resolveNamespaceCore(v_m_2282_, v_inst_2283_, v_inst_2284_, v_inst_2285_, v_inst_2286_, v_id_2287_, v_allowEmpty_boxed_2289_);
return v_res_2290_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__0(lean_object* v_x_2291_){
_start:
{
if (lean_obj_tag(v_x_2291_) == 0)
{
lean_object* v_ns_2292_; lean_object* v___x_2294_; uint8_t v_isShared_2295_; uint8_t v_isSharedCheck_2299_; 
v_ns_2292_ = lean_ctor_get(v_x_2291_, 0);
v_isSharedCheck_2299_ = !lean_is_exclusive(v_x_2291_);
if (v_isSharedCheck_2299_ == 0)
{
v___x_2294_ = v_x_2291_;
v_isShared_2295_ = v_isSharedCheck_2299_;
goto v_resetjp_2293_;
}
else
{
lean_inc(v_ns_2292_);
lean_dec(v_x_2291_);
v___x_2294_ = lean_box(0);
v_isShared_2295_ = v_isSharedCheck_2299_;
goto v_resetjp_2293_;
}
v_resetjp_2293_:
{
lean_object* v___x_2297_; 
if (v_isShared_2295_ == 0)
{
lean_ctor_set_tag(v___x_2294_, 1);
v___x_2297_ = v___x_2294_;
goto v_reusejp_2296_;
}
else
{
lean_object* v_reuseFailAlloc_2298_; 
v_reuseFailAlloc_2298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2298_, 0, v_ns_2292_);
v___x_2297_ = v_reuseFailAlloc_2298_;
goto v_reusejp_2296_;
}
v_reusejp_2296_:
{
return v___x_2297_;
}
}
}
else
{
lean_object* v___x_2300_; 
lean_dec_ref(v_x_2291_);
v___x_2300_ = lean_box(0);
return v___x_2300_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__1(lean_object* v_x_2301_, lean_object* v_withRef_2302_, lean_object* v___x_2303_, lean_object* v_oldRef_2304_){
_start:
{
lean_object* v_ref_2305_; lean_object* v___x_2306_; 
v_ref_2305_ = l_Lean_replaceRef(v_x_2301_, v_oldRef_2304_);
v___x_2306_ = lean_apply_3(v_withRef_2302_, lean_box(0), v_ref_2305_, v___x_2303_);
return v___x_2306_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__1___boxed(lean_object* v_x_2307_, lean_object* v_withRef_2308_, lean_object* v___x_2309_, lean_object* v_oldRef_2310_){
_start:
{
lean_object* v_res_2311_; 
v_res_2311_ = l_Lean_resolveNamespace___redArg___lam__1(v_x_2307_, v_withRef_2308_, v___x_2309_, v_oldRef_2310_);
lean_dec(v_oldRef_2310_);
lean_dec(v_x_2307_);
return v_res_2311_;
}
}
static lean_object* _init_l_Lean_resolveNamespace___redArg___closed__4(void){
_start:
{
lean_object* v___x_2318_; lean_object* v___x_2319_; 
v___x_2318_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__3));
v___x_2319_ = l_Lean_MessageData_ofFormat(v___x_2318_);
return v___x_2319_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg(lean_object* v_inst_2320_, lean_object* v_inst_2321_, lean_object* v_inst_2322_, lean_object* v_inst_2323_, lean_object* v_x_2324_){
_start:
{
if (lean_obj_tag(v_x_2324_) == 3)
{
lean_object* v_val_2325_; lean_object* v_preresolved_2326_; lean_object* v___f_2327_; lean_object* v___x_2328_; lean_object* v_pre_2329_; uint8_t v___x_2330_; 
v_val_2325_ = lean_ctor_get(v_x_2324_, 2);
v_preresolved_2326_ = lean_ctor_get(v_x_2324_, 3);
v___f_2327_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__0));
v___x_2328_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__1));
lean_inc(v_preresolved_2326_);
v_pre_2329_ = l_List_filterMapTR_go___redArg(v___f_2327_, v_preresolved_2326_, v___x_2328_);
v___x_2330_ = l_List_isEmpty___redArg(v_pre_2329_);
if (v___x_2330_ == 0)
{
lean_object* v_toApplicative_2331_; lean_object* v_toPure_2332_; lean_object* v___x_2333_; 
lean_dec_ref_known(v_x_2324_, 4);
lean_dec_ref(v_inst_2323_);
lean_dec_ref(v_inst_2322_);
lean_dec_ref(v_inst_2321_);
v_toApplicative_2331_ = lean_ctor_get(v_inst_2320_, 0);
lean_inc_ref(v_toApplicative_2331_);
lean_dec_ref(v_inst_2320_);
v_toPure_2332_ = lean_ctor_get(v_toApplicative_2331_, 1);
lean_inc(v_toPure_2332_);
lean_dec_ref(v_toApplicative_2331_);
v___x_2333_ = lean_apply_2(v_toPure_2332_, lean_box(0), v_pre_2329_);
return v___x_2333_;
}
else
{
lean_object* v_toMonadRef_2334_; lean_object* v_toBind_2335_; lean_object* v_getRef_2336_; lean_object* v_withRef_2337_; uint8_t v___x_2338_; lean_object* v___x_2339_; lean_object* v___f_2340_; lean_object* v___x_2341_; 
lean_dec(v_pre_2329_);
v_toMonadRef_2334_ = lean_ctor_get(v_inst_2323_, 1);
v_toBind_2335_ = lean_ctor_get(v_inst_2320_, 1);
lean_inc(v_toBind_2335_);
v_getRef_2336_ = lean_ctor_get(v_toMonadRef_2334_, 0);
lean_inc(v_getRef_2336_);
v_withRef_2337_ = lean_ctor_get(v_toMonadRef_2334_, 1);
lean_inc(v_withRef_2337_);
v___x_2338_ = 0;
lean_inc(v_val_2325_);
v___x_2339_ = l_Lean_resolveNamespaceCore___redArg(v_inst_2320_, v_inst_2321_, v_inst_2322_, v_inst_2323_, v_val_2325_, v___x_2338_);
v___f_2340_ = lean_alloc_closure((void*)(l_Lean_resolveNamespace___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2340_, 0, v_x_2324_);
lean_closure_set(v___f_2340_, 1, v_withRef_2337_);
lean_closure_set(v___f_2340_, 2, v___x_2339_);
v___x_2341_ = lean_apply_4(v_toBind_2335_, lean_box(0), lean_box(0), v_getRef_2336_, v___f_2340_);
return v___x_2341_;
}
}
else
{
lean_object* v___x_2342_; lean_object* v___x_2343_; 
lean_dec_ref(v_inst_2322_);
lean_dec_ref(v_inst_2321_);
v___x_2342_ = lean_obj_once(&l_Lean_resolveNamespace___redArg___closed__4, &l_Lean_resolveNamespace___redArg___closed__4_once, _init_l_Lean_resolveNamespace___redArg___closed__4);
v___x_2343_ = l_Lean_throwErrorAt___redArg(v_inst_2320_, v_inst_2323_, v_x_2324_, v___x_2342_);
return v___x_2343_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace(lean_object* v_m_2344_, lean_object* v_inst_2345_, lean_object* v_inst_2346_, lean_object* v_inst_2347_, lean_object* v_inst_2348_, lean_object* v_x_2349_){
_start:
{
lean_object* v___x_2350_; 
v___x_2350_ = l_Lean_resolveNamespace___redArg(v_inst_2345_, v_inst_2346_, v_inst_2347_, v_inst_2348_, v_x_2349_);
return v___x_2350_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg___lam__0(lean_object* v_id_2353_, lean_object* v___f_2354_, lean_object* v_inst_2355_, lean_object* v_inst_2356_, lean_object* v_toPure_2357_, lean_object* v_____do__lift_2358_){
_start:
{
if (lean_obj_tag(v_____do__lift_2358_) == 1)
{
lean_object* v_tail_2374_; 
v_tail_2374_ = lean_ctor_get(v_____do__lift_2358_, 1);
if (lean_obj_tag(v_tail_2374_) == 0)
{
lean_object* v_head_2375_; lean_object* v___x_2376_; 
lean_dec_ref(v_inst_2356_);
lean_dec_ref(v_inst_2355_);
lean_dec_ref(v___f_2354_);
v_head_2375_ = lean_ctor_get(v_____do__lift_2358_, 0);
lean_inc(v_head_2375_);
lean_dec_ref_known(v_____do__lift_2358_, 2);
v___x_2376_ = lean_apply_2(v_toPure_2357_, lean_box(0), v_head_2375_);
return v___x_2376_;
}
else
{
lean_dec(v_toPure_2357_);
goto v___jp_2359_;
}
}
else
{
lean_dec(v_toPure_2357_);
goto v___jp_2359_;
}
v___jp_2359_:
{
lean_object* v___x_2360_; lean_object* v___x_2361_; uint8_t v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; 
v___x_2360_ = ((lean_object*)(l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__0));
v___x_2361_ = l_Lean_TSyntax_getId(v_id_2353_);
v___x_2362_ = 1;
v___x_2363_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2361_, v___x_2362_);
v___x_2364_ = lean_string_append(v___x_2360_, v___x_2363_);
lean_dec_ref(v___x_2363_);
v___x_2365_ = ((lean_object*)(l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__1));
v___x_2366_ = lean_string_append(v___x_2364_, v___x_2365_);
v___x_2367_ = l_List_toString___redArg(v___f_2354_, v_____do__lift_2358_);
v___x_2368_ = lean_string_append(v___x_2366_, v___x_2367_);
lean_dec_ref(v___x_2367_);
v___x_2369_ = ((lean_object*)(l_Lean_resolveNamespaceCore___redArg___lam__1___closed__1));
v___x_2370_ = lean_string_append(v___x_2368_, v___x_2369_);
v___x_2371_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2371_, 0, v___x_2370_);
v___x_2372_ = l_Lean_MessageData_ofFormat(v___x_2371_);
v___x_2373_ = l_Lean_throwError___redArg(v_inst_2355_, v_inst_2356_, v___x_2372_);
return v___x_2373_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg___lam__0___boxed(lean_object* v_id_2377_, lean_object* v___f_2378_, lean_object* v_inst_2379_, lean_object* v_inst_2380_, lean_object* v_toPure_2381_, lean_object* v_____do__lift_2382_){
_start:
{
lean_object* v_res_2383_; 
v_res_2383_ = l_Lean_resolveUniqueNamespace___redArg___lam__0(v_id_2377_, v___f_2378_, v_inst_2379_, v_inst_2380_, v_toPure_2381_, v_____do__lift_2382_);
lean_dec(v_id_2377_);
return v_res_2383_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg(lean_object* v_inst_2385_, lean_object* v_inst_2386_, lean_object* v_inst_2387_, lean_object* v_inst_2388_, lean_object* v_id_2389_){
_start:
{
lean_object* v_toApplicative_2390_; lean_object* v_toBind_2391_; lean_object* v_toPure_2392_; lean_object* v___f_2393_; lean_object* v___x_2394_; lean_object* v___f_2395_; lean_object* v___x_2396_; 
v_toApplicative_2390_ = lean_ctor_get(v_inst_2385_, 0);
v_toBind_2391_ = lean_ctor_get(v_inst_2385_, 1);
lean_inc(v_toBind_2391_);
v_toPure_2392_ = lean_ctor_get(v_toApplicative_2390_, 1);
lean_inc(v_toPure_2392_);
v___f_2393_ = ((lean_object*)(l_Lean_resolveUniqueNamespace___redArg___closed__0));
lean_inc(v_id_2389_);
lean_inc_ref(v_inst_2388_);
lean_inc_ref(v_inst_2385_);
v___x_2394_ = l_Lean_resolveNamespace___redArg(v_inst_2385_, v_inst_2386_, v_inst_2387_, v_inst_2388_, v_id_2389_);
v___f_2395_ = lean_alloc_closure((void*)(l_Lean_resolveUniqueNamespace___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_2395_, 0, v_id_2389_);
lean_closure_set(v___f_2395_, 1, v___f_2393_);
lean_closure_set(v___f_2395_, 2, v_inst_2385_);
lean_closure_set(v___f_2395_, 3, v_inst_2388_);
lean_closure_set(v___f_2395_, 4, v_toPure_2392_);
v___x_2396_ = lean_apply_4(v_toBind_2391_, lean_box(0), lean_box(0), v___x_2394_, v___f_2395_);
return v___x_2396_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace(lean_object* v_m_2397_, lean_object* v_inst_2398_, lean_object* v_inst_2399_, lean_object* v_inst_2400_, lean_object* v_inst_2401_, lean_object* v_id_2402_){
_start:
{
lean_object* v___x_2403_; 
v___x_2403_ = l_Lean_resolveUniqueNamespace___redArg(v_inst_2398_, v_inst_2399_, v_inst_2400_, v_inst_2401_, v_id_2402_);
return v___x_2403_;
}
}
LEAN_EXPORT uint8_t l_Lean_filterFieldList___redArg___lam__0(lean_object* v_x_2404_){
_start:
{
lean_object* v_snd_2405_; uint8_t v___x_2406_; 
v_snd_2405_ = lean_ctor_get(v_x_2404_, 1);
v___x_2406_ = l_List_isEmpty___redArg(v_snd_2405_);
return v___x_2406_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__0___boxed(lean_object* v_x_2407_){
_start:
{
uint8_t v_res_2408_; lean_object* v_r_2409_; 
v_res_2408_ = l_Lean_filterFieldList___redArg___lam__0(v_x_2407_);
lean_dec_ref(v_x_2407_);
v_r_2409_ = lean_box(v_res_2408_);
return v_r_2409_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__1(lean_object* v_x_2410_){
_start:
{
lean_object* v_fst_2411_; 
v_fst_2411_ = lean_ctor_get(v_x_2410_, 0);
lean_inc(v_fst_2411_);
return v_fst_2411_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__1___boxed(lean_object* v_x_2412_){
_start:
{
lean_object* v_res_2413_; 
v_res_2413_ = l_Lean_filterFieldList___redArg___lam__1(v_x_2412_);
lean_dec_ref(v_x_2412_);
return v_res_2413_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__2(lean_object* v___f_2414_, lean_object* v_cs_2415_, lean_object* v_toPure_2416_, lean_object* v_____r_2417_){
_start:
{
lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; 
v___x_2418_ = lean_box(0);
v___x_2419_ = l_List_mapTR_loop___redArg(v___f_2414_, v_cs_2415_, v___x_2418_);
v___x_2420_ = lean_apply_2(v_toPure_2416_, lean_box(0), v___x_2419_);
return v___x_2420_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__3(lean_object* v___f_2421_, lean_object* v_____r_2422_){
_start:
{
lean_object* v___x_2423_; 
v___x_2423_ = lean_apply_1(v___f_2421_, v_____r_2422_);
return v___x_2423_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__4(lean_object* v_inst_2424_, lean_object* v_inst_2425_, lean_object* v_inst_2426_, lean_object* v_n_2427_, lean_object* v_toBind_2428_, lean_object* v___f_2429_, lean_object* v_____do__lift_2430_){
_start:
{
lean_object* v___x_2431_; lean_object* v___x_2432_; 
v___x_2431_ = l_Lean_throwUnknownConstantAt___redArg(v_inst_2424_, v_inst_2425_, v_inst_2426_, v_____do__lift_2430_, v_n_2427_);
v___x_2432_ = lean_apply_4(v_toBind_2428_, lean_box(0), lean_box(0), v___x_2431_, v___f_2429_);
return v___x_2432_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg(lean_object* v_inst_2435_, lean_object* v_inst_2436_, lean_object* v_inst_2437_, lean_object* v_n_2438_, lean_object* v_cs_2439_){
_start:
{
lean_object* v_toApplicative_2440_; lean_object* v_toBind_2441_; lean_object* v_toPure_2442_; lean_object* v___f_2443_; lean_object* v___f_2444_; lean_object* v___x_2445_; lean_object* v_cs_2446_; lean_object* v___f_2447_; uint8_t v___x_2448_; 
v_toApplicative_2440_ = lean_ctor_get(v_inst_2435_, 0);
v_toBind_2441_ = lean_ctor_get(v_inst_2435_, 1);
lean_inc(v_toBind_2441_);
v_toPure_2442_ = lean_ctor_get(v_toApplicative_2440_, 1);
v___f_2443_ = ((lean_object*)(l_Lean_filterFieldList___redArg___closed__0));
v___f_2444_ = ((lean_object*)(l_Lean_filterFieldList___redArg___closed__1));
v___x_2445_ = lean_box(0);
v_cs_2446_ = l_List_filterTR_loop___redArg(v___f_2443_, v_cs_2439_, v___x_2445_);
lean_inc(v_toPure_2442_);
lean_inc(v_cs_2446_);
v___f_2447_ = lean_alloc_closure((void*)(l_Lean_filterFieldList___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2447_, 0, v___f_2444_);
lean_closure_set(v___f_2447_, 1, v_cs_2446_);
lean_closure_set(v___f_2447_, 2, v_toPure_2442_);
v___x_2448_ = l_List_isEmpty___redArg(v_cs_2446_);
if (v___x_2448_ == 0)
{
lean_object* v___x_2449_; lean_object* v___x_2450_; 
lean_inc(v_toPure_2442_);
lean_dec_ref(v___f_2447_);
lean_dec(v_toBind_2441_);
lean_dec(v_n_2438_);
lean_dec_ref(v_inst_2437_);
lean_dec_ref(v_inst_2436_);
lean_dec_ref(v_inst_2435_);
v___x_2449_ = lean_box(0);
v___x_2450_ = l_Lean_filterFieldList___redArg___lam__2(v___f_2444_, v_cs_2446_, v_toPure_2442_, v___x_2449_);
return v___x_2450_;
}
else
{
lean_object* v_toMonadRef_2451_; lean_object* v_getRef_2452_; lean_object* v___f_2453_; lean_object* v___f_2454_; lean_object* v___x_2455_; 
lean_dec(v_cs_2446_);
v_toMonadRef_2451_ = lean_ctor_get(v_inst_2437_, 1);
v_getRef_2452_ = lean_ctor_get(v_toMonadRef_2451_, 0);
lean_inc(v_getRef_2452_);
v___f_2453_ = lean_alloc_closure((void*)(l_Lean_filterFieldList___redArg___lam__3), 2, 1);
lean_closure_set(v___f_2453_, 0, v___f_2447_);
lean_inc(v_toBind_2441_);
v___f_2454_ = lean_alloc_closure((void*)(l_Lean_filterFieldList___redArg___lam__4), 7, 6);
lean_closure_set(v___f_2454_, 0, v_inst_2435_);
lean_closure_set(v___f_2454_, 1, v_inst_2436_);
lean_closure_set(v___f_2454_, 2, v_inst_2437_);
lean_closure_set(v___f_2454_, 3, v_n_2438_);
lean_closure_set(v___f_2454_, 4, v_toBind_2441_);
lean_closure_set(v___f_2454_, 5, v___f_2453_);
v___x_2455_ = lean_apply_4(v_toBind_2441_, lean_box(0), lean_box(0), v_getRef_2452_, v___f_2454_);
return v___x_2455_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList(lean_object* v_m_2456_, lean_object* v_inst_2457_, lean_object* v_inst_2458_, lean_object* v_inst_2459_, lean_object* v_n_2460_, lean_object* v_cs_2461_){
_start:
{
lean_object* v___x_2462_; 
v___x_2462_ = l_Lean_filterFieldList___redArg(v_inst_2457_, v_inst_2458_, v_inst_2459_, v_n_2460_, v_cs_2461_);
return v___x_2462_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg___lam__0(lean_object* v_inst_2463_, lean_object* v_inst_2464_, lean_object* v_inst_2465_, lean_object* v_n_2466_, lean_object* v_cs_2467_){
_start:
{
lean_object* v___x_2468_; 
v___x_2468_ = l_Lean_filterFieldList___redArg(v_inst_2463_, v_inst_2464_, v_inst_2465_, v_n_2466_, v_cs_2467_);
return v___x_2468_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg(lean_object* v_inst_2469_, lean_object* v_inst_2470_, lean_object* v_inst_2471_, lean_object* v_inst_2472_, lean_object* v_inst_2473_, lean_object* v_inst_2474_, lean_object* v_inst_2475_, lean_object* v_n_2476_){
_start:
{
lean_object* v_toBind_2477_; lean_object* v___f_2478_; uint8_t v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; 
v_toBind_2477_ = lean_ctor_get(v_inst_2469_, 1);
lean_inc(v_toBind_2477_);
lean_inc(v_n_2476_);
lean_inc_ref(v_inst_2471_);
lean_inc_ref(v_inst_2469_);
v___f_2478_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg___lam__0), 5, 4);
lean_closure_set(v___f_2478_, 0, v_inst_2469_);
lean_closure_set(v___f_2478_, 1, v_inst_2471_);
lean_closure_set(v___f_2478_, 2, v_inst_2475_);
lean_closure_set(v___f_2478_, 3, v_n_2476_);
v___x_2479_ = 1;
v___x_2480_ = l_Lean_resolveGlobalName___redArg(v_inst_2469_, v_inst_2470_, v_inst_2471_, v_inst_2472_, v_inst_2473_, v_inst_2474_, v_n_2476_, v___x_2479_);
v___x_2481_ = lean_apply_4(v_toBind_2477_, lean_box(0), lean_box(0), v___x_2480_, v___f_2478_);
return v___x_2481_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore(lean_object* v_m_2482_, lean_object* v_inst_2483_, lean_object* v_inst_2484_, lean_object* v_inst_2485_, lean_object* v_inst_2486_, lean_object* v_inst_2487_, lean_object* v_inst_2488_, lean_object* v_inst_2489_, lean_object* v_n_2490_){
_start:
{
lean_object* v___x_2491_; 
v___x_2491_ = l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg(v_inst_2483_, v_inst_2484_, v_inst_2485_, v_inst_2486_, v_inst_2487_, v_inst_2488_, v_inst_2489_, v_n_2490_);
return v___x_2491_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload___redArg___lam__0(lean_object* v_declName_2492_){
_start:
{
lean_object* v___x_2493_; lean_object* v___x_2494_; 
v___x_2493_ = lean_box(0);
v___x_2494_ = l_Lean_mkConst(v_declName_2492_, v___x_2493_);
return v___x_2494_;
}
}
static lean_object* _init_l_Lean_ensureNoOverload___redArg___closed__2(void){
_start:
{
lean_object* v___x_2497_; lean_object* v___x_2498_; 
v___x_2497_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__1));
v___x_2498_ = l_Lean_stringToMessageData(v___x_2497_);
return v___x_2498_;
}
}
static lean_object* _init_l_Lean_ensureNoOverload___redArg___closed__4(void){
_start:
{
lean_object* v___x_2500_; lean_object* v___x_2501_; 
v___x_2500_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__3));
v___x_2501_ = l_Lean_stringToMessageData(v___x_2500_);
return v___x_2501_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload___redArg(lean_object* v_inst_2503_, lean_object* v_inst_2504_, lean_object* v_n_2505_, lean_object* v_cs_2506_){
_start:
{
lean_object* v_toApplicative_2507_; lean_object* v_toPure_2508_; lean_object* v___f_2509_; 
v_toApplicative_2507_ = lean_ctor_get(v_inst_2503_, 0);
v_toPure_2508_ = lean_ctor_get(v_toApplicative_2507_, 1);
v___f_2509_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__0));
if (lean_obj_tag(v_cs_2506_) == 1)
{
lean_object* v_tail_2523_; 
v_tail_2523_ = lean_ctor_get(v_cs_2506_, 1);
if (lean_obj_tag(v_tail_2523_) == 0)
{
lean_object* v_head_2524_; lean_object* v___x_2525_; 
lean_inc(v_toPure_2508_);
lean_dec(v_n_2505_);
lean_dec_ref(v_inst_2504_);
lean_dec_ref(v_inst_2503_);
v_head_2524_ = lean_ctor_get(v_cs_2506_, 0);
lean_inc(v_head_2524_);
lean_dec_ref_known(v_cs_2506_, 2);
v___x_2525_ = lean_apply_2(v_toPure_2508_, lean_box(0), v_head_2524_);
return v___x_2525_;
}
else
{
goto v___jp_2510_;
}
}
else
{
goto v___jp_2510_;
}
v___jp_2510_:
{
lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; 
v___x_2511_ = lean_obj_once(&l_Lean_ensureNoOverload___redArg___closed__2, &l_Lean_ensureNoOverload___redArg___closed__2_once, _init_l_Lean_ensureNoOverload___redArg___closed__2);
v___x_2512_ = l_Lean_MessageData_ofName(v_n_2505_);
v___x_2513_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2513_, 0, v___x_2511_);
lean_ctor_set(v___x_2513_, 1, v___x_2512_);
v___x_2514_ = lean_obj_once(&l_Lean_ensureNoOverload___redArg___closed__4, &l_Lean_ensureNoOverload___redArg___closed__4_once, _init_l_Lean_ensureNoOverload___redArg___closed__4);
v___x_2515_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2515_, 0, v___x_2513_);
lean_ctor_set(v___x_2515_, 1, v___x_2514_);
v___x_2516_ = lean_box(0);
v___x_2517_ = l_List_mapTR_loop___redArg(v___f_2509_, v_cs_2506_, v___x_2516_);
v___x_2518_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__5));
v___x_2519_ = l_List_mapTR_loop___redArg(v___x_2518_, v___x_2517_, v___x_2516_);
v___x_2520_ = l_Lean_MessageData_ofList(v___x_2519_);
v___x_2521_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2521_, 0, v___x_2515_);
lean_ctor_set(v___x_2521_, 1, v___x_2520_);
v___x_2522_ = l_Lean_throwError___redArg(v_inst_2503_, v_inst_2504_, v___x_2521_);
return v___x_2522_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload(lean_object* v_m_2526_, lean_object* v_inst_2527_, lean_object* v_inst_2528_, lean_object* v_n_2529_, lean_object* v_cs_2530_){
_start:
{
lean_object* v___x_2531_; 
v___x_2531_ = l_Lean_ensureNoOverload___redArg(v_inst_2527_, v_inst_2528_, v_n_2529_, v_cs_2530_);
return v___x_2531_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore___redArg___lam__0(lean_object* v_inst_2532_, lean_object* v_inst_2533_, lean_object* v_n_2534_, lean_object* v_____do__lift_2535_){
_start:
{
lean_object* v___x_2536_; 
v___x_2536_ = l_Lean_ensureNoOverload___redArg(v_inst_2532_, v_inst_2533_, v_n_2534_, v_____do__lift_2535_);
return v___x_2536_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore___redArg(lean_object* v_inst_2537_, lean_object* v_inst_2538_, lean_object* v_inst_2539_, lean_object* v_inst_2540_, lean_object* v_inst_2541_, lean_object* v_inst_2542_, lean_object* v_inst_2543_, lean_object* v_n_2544_){
_start:
{
lean_object* v_toBind_2545_; lean_object* v___f_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; 
v_toBind_2545_ = lean_ctor_get(v_inst_2537_, 1);
lean_inc(v_toBind_2545_);
lean_inc(v_n_2544_);
lean_inc_ref(v_inst_2543_);
lean_inc_ref(v_inst_2537_);
v___f_2546_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalConstNoOverloadCore___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2546_, 0, v_inst_2537_);
lean_closure_set(v___f_2546_, 1, v_inst_2543_);
lean_closure_set(v___f_2546_, 2, v_n_2544_);
v___x_2547_ = l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg(v_inst_2537_, v_inst_2538_, v_inst_2539_, v_inst_2540_, v_inst_2541_, v_inst_2542_, v_inst_2543_, v_n_2544_);
v___x_2548_ = lean_apply_4(v_toBind_2545_, lean_box(0), lean_box(0), v___x_2547_, v___f_2546_);
return v___x_2548_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore(lean_object* v_m_2549_, lean_object* v_inst_2550_, lean_object* v_inst_2551_, lean_object* v_inst_2552_, lean_object* v_inst_2553_, lean_object* v_inst_2554_, lean_object* v_inst_2555_, lean_object* v_inst_2556_, lean_object* v_n_2557_){
_start:
{
lean_object* v___x_2558_; 
v___x_2558_ = l_Lean_resolveGlobalConstNoOverloadCore___redArg(v_inst_2550_, v_inst_2551_, v_inst_2552_, v_inst_2553_, v_inst_2554_, v_inst_2555_, v_inst_2556_, v_n_2557_);
return v___x_2558_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__0(lean_object* v_x_2559_){
_start:
{
if (lean_obj_tag(v_x_2559_) == 1)
{
lean_object* v_fields_2560_; 
v_fields_2560_ = lean_ctor_get(v_x_2559_, 1);
if (lean_obj_tag(v_fields_2560_) == 0)
{
lean_object* v_n_2561_; lean_object* v___x_2562_; 
v_n_2561_ = lean_ctor_get(v_x_2559_, 0);
lean_inc(v_n_2561_);
v___x_2562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2562_, 0, v_n_2561_);
return v___x_2562_;
}
else
{
lean_object* v___x_2563_; 
v___x_2563_ = lean_box(0);
return v___x_2563_;
}
}
else
{
lean_object* v___x_2564_; 
v___x_2564_ = lean_box(0);
return v___x_2564_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__0___boxed(lean_object* v_x_2565_){
_start:
{
lean_object* v_res_2566_; 
v_res_2566_ = l_Lean_preprocessSyntaxAndResolve___redArg___lam__0(v_x_2565_);
lean_dec_ref(v_x_2565_);
return v_res_2566_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__1(lean_object* v_stx_2567_, lean_object* v_withRef_2568_, lean_object* v___x_2569_, lean_object* v_oldRef_2570_){
_start:
{
lean_object* v_ref_2571_; lean_object* v___x_2572_; 
v_ref_2571_ = l_Lean_replaceRef(v_stx_2567_, v_oldRef_2570_);
v___x_2572_ = lean_apply_3(v_withRef_2568_, lean_box(0), v_ref_2571_, v___x_2569_);
return v___x_2572_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__1___boxed(lean_object* v_stx_2573_, lean_object* v_withRef_2574_, lean_object* v___x_2575_, lean_object* v_oldRef_2576_){
_start:
{
lean_object* v_res_2577_; 
v_res_2577_ = l_Lean_preprocessSyntaxAndResolve___redArg___lam__1(v_stx_2573_, v_withRef_2574_, v___x_2575_, v_oldRef_2576_);
lean_dec(v_oldRef_2576_);
lean_dec(v_stx_2573_);
return v_res_2577_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg(lean_object* v_inst_2579_, lean_object* v_inst_2580_, lean_object* v_stx_2581_, lean_object* v_k_2582_){
_start:
{
if (lean_obj_tag(v_stx_2581_) == 3)
{
lean_object* v_val_2583_; lean_object* v_preresolved_2584_; lean_object* v___f_2585_; lean_object* v___x_2586_; lean_object* v_pre_2587_; uint8_t v___x_2588_; 
v_val_2583_ = lean_ctor_get(v_stx_2581_, 2);
v_preresolved_2584_ = lean_ctor_get(v_stx_2581_, 3);
v___f_2585_ = ((lean_object*)(l_Lean_preprocessSyntaxAndResolve___redArg___closed__0));
v___x_2586_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__1));
lean_inc(v_preresolved_2584_);
v_pre_2587_ = l_List_filterMapTR_go___redArg(v___f_2585_, v_preresolved_2584_, v___x_2586_);
v___x_2588_ = l_List_isEmpty___redArg(v_pre_2587_);
if (v___x_2588_ == 0)
{
lean_object* v_toApplicative_2589_; lean_object* v_toPure_2590_; lean_object* v___x_2591_; 
lean_dec_ref_known(v_stx_2581_, 4);
lean_dec(v_k_2582_);
lean_dec_ref(v_inst_2580_);
v_toApplicative_2589_ = lean_ctor_get(v_inst_2579_, 0);
lean_inc_ref(v_toApplicative_2589_);
lean_dec_ref(v_inst_2579_);
v_toPure_2590_ = lean_ctor_get(v_toApplicative_2589_, 1);
lean_inc(v_toPure_2590_);
lean_dec_ref(v_toApplicative_2589_);
v___x_2591_ = lean_apply_2(v_toPure_2590_, lean_box(0), v_pre_2587_);
return v___x_2591_;
}
else
{
lean_object* v_toMonadRef_2592_; lean_object* v_toBind_2593_; lean_object* v_getRef_2594_; lean_object* v_withRef_2595_; lean_object* v___x_2596_; lean_object* v___f_2597_; lean_object* v___x_2598_; 
lean_dec(v_pre_2587_);
v_toMonadRef_2592_ = lean_ctor_get(v_inst_2580_, 1);
lean_inc_ref(v_toMonadRef_2592_);
lean_dec_ref(v_inst_2580_);
v_toBind_2593_ = lean_ctor_get(v_inst_2579_, 1);
lean_inc(v_toBind_2593_);
lean_dec_ref(v_inst_2579_);
v_getRef_2594_ = lean_ctor_get(v_toMonadRef_2592_, 0);
lean_inc(v_getRef_2594_);
v_withRef_2595_ = lean_ctor_get(v_toMonadRef_2592_, 1);
lean_inc(v_withRef_2595_);
lean_dec_ref(v_toMonadRef_2592_);
lean_inc(v_val_2583_);
v___x_2596_ = lean_apply_1(v_k_2582_, v_val_2583_);
v___f_2597_ = lean_alloc_closure((void*)(l_Lean_preprocessSyntaxAndResolve___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2597_, 0, v_stx_2581_);
lean_closure_set(v___f_2597_, 1, v_withRef_2595_);
lean_closure_set(v___f_2597_, 2, v___x_2596_);
v___x_2598_ = lean_apply_4(v_toBind_2593_, lean_box(0), lean_box(0), v_getRef_2594_, v___f_2597_);
return v___x_2598_;
}
}
else
{
lean_object* v___x_2599_; lean_object* v___x_2600_; 
lean_dec(v_k_2582_);
v___x_2599_ = lean_obj_once(&l_Lean_resolveNamespace___redArg___closed__4, &l_Lean_resolveNamespace___redArg___closed__4_once, _init_l_Lean_resolveNamespace___redArg___closed__4);
v___x_2600_ = l_Lean_throwErrorAt___redArg(v_inst_2579_, v_inst_2580_, v_stx_2581_, v___x_2599_);
return v___x_2600_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve(lean_object* v_m_2601_, lean_object* v_inst_2602_, lean_object* v_inst_2603_, lean_object* v_stx_2604_, lean_object* v_k_2605_){
_start:
{
lean_object* v___x_2606_; 
v___x_2606_ = l_Lean_preprocessSyntaxAndResolve___redArg(v_inst_2602_, v_inst_2603_, v_stx_2604_, v_k_2605_);
return v___x_2606_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst___redArg(lean_object* v_inst_2607_, lean_object* v_inst_2608_, lean_object* v_inst_2609_, lean_object* v_inst_2610_, lean_object* v_inst_2611_, lean_object* v_inst_2612_, lean_object* v_inst_2613_, lean_object* v_stx_2614_){
_start:
{
lean_object* v___x_2615_; lean_object* v___x_2616_; 
lean_inc_ref(v_inst_2613_);
lean_inc_ref(v_inst_2607_);
v___x_2615_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore), 9, 8);
lean_closure_set(v___x_2615_, 0, lean_box(0));
lean_closure_set(v___x_2615_, 1, v_inst_2607_);
lean_closure_set(v___x_2615_, 2, v_inst_2608_);
lean_closure_set(v___x_2615_, 3, v_inst_2609_);
lean_closure_set(v___x_2615_, 4, v_inst_2610_);
lean_closure_set(v___x_2615_, 5, v_inst_2611_);
lean_closure_set(v___x_2615_, 6, v_inst_2612_);
lean_closure_set(v___x_2615_, 7, v_inst_2613_);
v___x_2616_ = l_Lean_preprocessSyntaxAndResolve___redArg(v_inst_2607_, v_inst_2613_, v_stx_2614_, v___x_2615_);
return v___x_2616_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst(lean_object* v_m_2617_, lean_object* v_inst_2618_, lean_object* v_inst_2619_, lean_object* v_inst_2620_, lean_object* v_inst_2621_, lean_object* v_inst_2622_, lean_object* v_inst_2623_, lean_object* v_inst_2624_, lean_object* v_stx_2625_){
_start:
{
lean_object* v___x_2626_; 
v___x_2626_ = l_Lean_resolveGlobalConst___redArg(v_inst_2618_, v_inst_2619_, v_inst_2620_, v_inst_2621_, v_inst_2622_, v_inst_2623_, v_inst_2624_, v_stx_2625_);
return v___x_2626_;
}
}
static lean_object* _init_l_Lean_ensureNonAmbiguous___redArg___closed__1(void){
_start:
{
lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; 
v___x_2628_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__2));
v___x_2629_ = lean_unsigned_to_nat(11u);
v___x_2630_ = lean_unsigned_to_nat(469u);
v___x_2631_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___redArg___closed__0));
v___x_2632_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__0));
v___x_2633_ = l_mkPanicMessageWithDecl(v___x_2632_, v___x_2631_, v___x_2630_, v___x_2629_, v___x_2628_);
return v___x_2633_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous___redArg(lean_object* v_inst_2637_, lean_object* v_inst_2638_, lean_object* v_id_2639_, lean_object* v_cs_2640_){
_start:
{
if (lean_obj_tag(v_cs_2640_) == 0)
{
lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; 
lean_dec(v_id_2639_);
lean_dec_ref(v_inst_2638_);
v___x_2641_ = lean_box(0);
v___x_2642_ = l_instInhabitedOfMonad___redArg(v_inst_2637_, v___x_2641_);
v___x_2643_ = lean_obj_once(&l_Lean_ensureNonAmbiguous___redArg___closed__1, &l_Lean_ensureNonAmbiguous___redArg___closed__1_once, _init_l_Lean_ensureNonAmbiguous___redArg___closed__1);
v___x_2644_ = l_panic___redArg(v___x_2642_, v___x_2643_);
lean_dec(v___x_2642_);
return v___x_2644_;
}
else
{
lean_object* v_tail_2645_; 
v_tail_2645_ = lean_ctor_get(v_cs_2640_, 1);
if (lean_obj_tag(v_tail_2645_) == 0)
{
lean_object* v_toApplicative_2646_; lean_object* v_toPure_2647_; lean_object* v_head_2648_; lean_object* v___x_2649_; 
v_toApplicative_2646_ = lean_ctor_get(v_inst_2637_, 0);
lean_inc_ref(v_toApplicative_2646_);
lean_dec(v_id_2639_);
lean_dec_ref(v_inst_2638_);
lean_dec_ref(v_inst_2637_);
v_toPure_2647_ = lean_ctor_get(v_toApplicative_2646_, 1);
lean_inc(v_toPure_2647_);
lean_dec_ref(v_toApplicative_2646_);
v_head_2648_ = lean_ctor_get(v_cs_2640_, 0);
lean_inc(v_head_2648_);
lean_dec_ref_known(v_cs_2640_, 2);
v___x_2649_ = lean_apply_2(v_toPure_2647_, lean_box(0), v_head_2648_);
return v___x_2649_;
}
else
{
lean_object* v___f_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; uint8_t v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; 
v___f_2650_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__0));
v___x_2651_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___redArg___closed__2));
v___x_2652_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___redArg___closed__3));
v___x_2653_ = lean_box(0);
v___x_2654_ = 0;
lean_inc(v_id_2639_);
v___x_2655_ = l_Lean_Syntax_formatStx(v_id_2639_, v___x_2653_, v___x_2654_);
v___x_2656_ = l_Std_Format_defWidth;
v___x_2657_ = lean_unsigned_to_nat(0u);
v___x_2658_ = l_Std_Format_pretty(v___x_2655_, v___x_2656_, v___x_2657_, v___x_2657_);
v___x_2659_ = lean_string_append(v___x_2652_, v___x_2658_);
lean_dec_ref(v___x_2658_);
v___x_2660_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___redArg___closed__4));
v___x_2661_ = lean_string_append(v___x_2659_, v___x_2660_);
v___x_2662_ = lean_box(0);
v___x_2663_ = l_List_mapTR_loop___redArg(v___f_2650_, v_cs_2640_, v___x_2662_);
v___x_2664_ = l_List_toString___redArg(v___x_2651_, v___x_2663_);
v___x_2665_ = lean_string_append(v___x_2661_, v___x_2664_);
lean_dec_ref(v___x_2664_);
v___x_2666_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2666_, 0, v___x_2665_);
v___x_2667_ = l_Lean_MessageData_ofFormat(v___x_2666_);
v___x_2668_ = l_Lean_throwErrorAt___redArg(v_inst_2637_, v_inst_2638_, v_id_2639_, v___x_2667_);
return v___x_2668_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous(lean_object* v_m_2669_, lean_object* v_inst_2670_, lean_object* v_inst_2671_, lean_object* v_id_2672_, lean_object* v_cs_2673_){
_start:
{
lean_object* v___x_2674_; 
v___x_2674_ = l_Lean_ensureNonAmbiguous___redArg(v_inst_2670_, v_inst_2671_, v_id_2672_, v_cs_2673_);
return v___x_2674_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___redArg___lam__0(lean_object* v_inst_2675_, lean_object* v_inst_2676_, lean_object* v_id_2677_, lean_object* v_____do__lift_2678_){
_start:
{
lean_object* v___x_2679_; 
v___x_2679_ = l_Lean_ensureNonAmbiguous___redArg(v_inst_2675_, v_inst_2676_, v_id_2677_, v_____do__lift_2678_);
return v___x_2679_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___redArg(lean_object* v_inst_2680_, lean_object* v_inst_2681_, lean_object* v_inst_2682_, lean_object* v_inst_2683_, lean_object* v_inst_2684_, lean_object* v_inst_2685_, lean_object* v_inst_2686_, lean_object* v_id_2687_){
_start:
{
lean_object* v_toBind_2688_; lean_object* v___f_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; 
v_toBind_2688_ = lean_ctor_get(v_inst_2680_, 1);
lean_inc(v_toBind_2688_);
lean_inc(v_id_2687_);
lean_inc_ref(v_inst_2686_);
lean_inc_ref(v_inst_2680_);
v___f_2689_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalConstNoOverload___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2689_, 0, v_inst_2680_);
lean_closure_set(v___f_2689_, 1, v_inst_2686_);
lean_closure_set(v___f_2689_, 2, v_id_2687_);
v___x_2690_ = l_Lean_resolveGlobalConst___redArg(v_inst_2680_, v_inst_2681_, v_inst_2682_, v_inst_2683_, v_inst_2684_, v_inst_2685_, v_inst_2686_, v_id_2687_);
v___x_2691_ = lean_apply_4(v_toBind_2688_, lean_box(0), lean_box(0), v___x_2690_, v___f_2689_);
return v___x_2691_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload(lean_object* v_m_2692_, lean_object* v_inst_2693_, lean_object* v_inst_2694_, lean_object* v_inst_2695_, lean_object* v_inst_2696_, lean_object* v_inst_2697_, lean_object* v_inst_2698_, lean_object* v_inst_2699_, lean_object* v_id_2700_){
_start:
{
lean_object* v___x_2701_; 
v___x_2701_ = l_Lean_resolveGlobalConstNoOverload___redArg(v_inst_2693_, v_inst_2694_, v_inst_2695_, v_inst_2696_, v_inst_2697_, v_inst_2698_, v_inst_2699_, v_id_2700_);
return v___x_2701_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0(lean_object* v___f_2702_, lean_object* v___f_2703_, uint8_t v_globalDeclFoundNext_2704_, uint8_t v_globalDeclFound_2705_, lean_object* v_r_2706_){
_start:
{
lean_object* v___x_2707_; lean_object* v_r_2708_; uint8_t v___x_2709_; 
v___x_2707_ = lean_box(0);
v_r_2708_ = l_List_filterTR_loop___redArg(v___f_2702_, v_r_2706_, v___x_2707_);
v___x_2709_ = l_List_isEmpty___redArg(v_r_2708_);
lean_dec(v_r_2708_);
if (v___x_2709_ == 0)
{
lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; 
v___x_2710_ = lean_box(0);
v___x_2711_ = lean_box(v_globalDeclFoundNext_2704_);
v___x_2712_ = lean_apply_2(v___f_2703_, v___x_2710_, v___x_2711_);
return v___x_2712_;
}
else
{
lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; 
v___x_2713_ = lean_box(0);
v___x_2714_ = lean_box(v_globalDeclFound_2705_);
v___x_2715_ = lean_apply_2(v___f_2703_, v___x_2713_, v___x_2714_);
return v___x_2715_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0___boxed(lean_object* v___f_2716_, lean_object* v___f_2717_, lean_object* v_globalDeclFoundNext_2718_, lean_object* v_globalDeclFound_2719_, lean_object* v_r_2720_){
_start:
{
uint8_t v_globalDeclFoundNext_boxed_2721_; uint8_t v_globalDeclFound_boxed_2722_; lean_object* v_res_2723_; 
v_globalDeclFoundNext_boxed_2721_ = lean_unbox(v_globalDeclFoundNext_2718_);
v_globalDeclFound_boxed_2722_ = lean_unbox(v_globalDeclFound_2719_);
v_res_2723_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0(v___f_2716_, v___f_2717_, v_globalDeclFoundNext_boxed_2721_, v_globalDeclFound_boxed_2722_, v_r_2720_);
return v_res_2723_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1___boxed(lean_object* v_str_2724_, lean_object* v_projs_2725_, lean_object* v_inst_2726_, lean_object* v_inst_2727_, lean_object* v_inst_2728_, lean_object* v_inst_2729_, lean_object* v_inst_2730_, lean_object* v_inst_2731_, lean_object* v_view_2732_, lean_object* v_findLocalDecl_x3f_2733_, lean_object* v_pre_2734_, lean_object* v_____r_2735_, lean_object* v_globalDeclFoundNext_2736_){
_start:
{
uint8_t v_globalDeclFoundNext_boxed_2737_; lean_object* v_res_2738_; 
v_globalDeclFoundNext_boxed_2737_ = lean_unbox(v_globalDeclFoundNext_2736_);
v_res_2738_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1(v_str_2724_, v_projs_2725_, v_inst_2726_, v_inst_2727_, v_inst_2728_, v_inst_2729_, v_inst_2730_, v_inst_2731_, v_view_2732_, v_findLocalDecl_x3f_2733_, v_pre_2734_, v_____r_2735_, v_globalDeclFoundNext_boxed_2737_);
return v_res_2738_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(lean_object* v_inst_2739_, lean_object* v_inst_2740_, lean_object* v_inst_2741_, lean_object* v_inst_2742_, lean_object* v_inst_2743_, lean_object* v_inst_2744_, lean_object* v_view_2745_, lean_object* v_findLocalDecl_x3f_2746_, lean_object* v_n_2747_, lean_object* v_projs_2748_, uint8_t v_globalDeclFound_2749_){
_start:
{
lean_object* v_toApplicative_2750_; lean_object* v_imported_2751_; lean_object* v_ctx_2752_; lean_object* v_scopes_2753_; lean_object* v_toBind_2754_; lean_object* v_toPure_2755_; lean_object* v___f_2756_; lean_object* v_givenNameView_2757_; uint8_t v___y_2759_; 
v_toApplicative_2750_ = lean_ctor_get(v_inst_2739_, 0);
v_imported_2751_ = lean_ctor_get(v_view_2745_, 1);
v_ctx_2752_ = lean_ctor_get(v_view_2745_, 2);
v_scopes_2753_ = lean_ctor_get(v_view_2745_, 3);
v_toBind_2754_ = lean_ctor_get(v_inst_2739_, 1);
v_toPure_2755_ = lean_ctor_get(v_toApplicative_2750_, 1);
v___f_2756_ = ((lean_object*)(l_Lean_filterFieldList___redArg___closed__0));
lean_inc(v_scopes_2753_);
lean_inc(v_ctx_2752_);
lean_inc(v_imported_2751_);
lean_inc(v_n_2747_);
v_givenNameView_2757_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_givenNameView_2757_, 0, v_n_2747_);
lean_ctor_set(v_givenNameView_2757_, 1, v_imported_2751_);
lean_ctor_set(v_givenNameView_2757_, 2, v_ctx_2752_);
lean_ctor_set(v_givenNameView_2757_, 3, v_scopes_2753_);
if (v_globalDeclFound_2749_ == 0)
{
v___y_2759_ = v_globalDeclFound_2749_;
goto v___jp_2758_;
}
else
{
uint8_t v___x_2795_; 
v___x_2795_ = l_List_isEmpty___redArg(v_projs_2748_);
if (v___x_2795_ == 0)
{
v___y_2759_ = v_globalDeclFound_2749_;
goto v___jp_2758_;
}
else
{
uint8_t v___x_2796_; 
v___x_2796_ = 0;
v___y_2759_ = v___x_2796_;
goto v___jp_2758_;
}
}
v___jp_2758_:
{
lean_object* v___x_2760_; lean_object* v___x_2761_; 
v___x_2760_ = lean_box(v___y_2759_);
lean_inc_ref(v_findLocalDecl_x3f_2746_);
lean_inc_ref(v_givenNameView_2757_);
v___x_2761_ = lean_apply_2(v_findLocalDecl_x3f_2746_, v_givenNameView_2757_, v___x_2760_);
if (lean_obj_tag(v___x_2761_) == 0)
{
if (lean_obj_tag(v_n_2747_) == 1)
{
lean_object* v_pre_2762_; lean_object* v_str_2763_; lean_object* v___f_2764_; 
v_pre_2762_ = lean_ctor_get(v_n_2747_, 0);
lean_inc_n(v_pre_2762_, 2);
v_str_2763_ = lean_ctor_get(v_n_2747_, 1);
lean_inc_ref_n(v_str_2763_, 2);
lean_dec_ref_known(v_n_2747_, 2);
lean_inc_ref(v_findLocalDecl_x3f_2746_);
lean_inc_ref(v_view_2745_);
lean_inc(v_inst_2744_);
lean_inc_ref(v_inst_2743_);
lean_inc(v_inst_2742_);
lean_inc_ref(v_inst_2741_);
lean_inc_ref(v_inst_2740_);
lean_inc_ref(v_inst_2739_);
lean_inc(v_projs_2748_);
v___f_2764_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1___boxed), 13, 11);
lean_closure_set(v___f_2764_, 0, v_str_2763_);
lean_closure_set(v___f_2764_, 1, v_projs_2748_);
lean_closure_set(v___f_2764_, 2, v_inst_2739_);
lean_closure_set(v___f_2764_, 3, v_inst_2740_);
lean_closure_set(v___f_2764_, 4, v_inst_2741_);
lean_closure_set(v___f_2764_, 5, v_inst_2742_);
lean_closure_set(v___f_2764_, 6, v_inst_2743_);
lean_closure_set(v___f_2764_, 7, v_inst_2744_);
lean_closure_set(v___f_2764_, 8, v_view_2745_);
lean_closure_set(v___f_2764_, 9, v_findLocalDecl_x3f_2746_);
lean_closure_set(v___f_2764_, 10, v_pre_2762_);
if (v_globalDeclFound_2749_ == 0)
{
uint8_t v_globalDeclFoundNext_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___f_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; 
lean_inc(v_toBind_2754_);
lean_dec_ref(v_str_2763_);
lean_dec(v_pre_2762_);
lean_dec(v_projs_2748_);
lean_dec_ref(v_findLocalDecl_x3f_2746_);
lean_dec_ref(v_view_2745_);
v_globalDeclFoundNext_2765_ = 1;
v___x_2766_ = lean_box(v_globalDeclFoundNext_2765_);
v___x_2767_ = lean_box(v_globalDeclFound_2749_);
v___f_2768_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2768_, 0, v___f_2756_);
lean_closure_set(v___f_2768_, 1, v___f_2764_);
lean_closure_set(v___f_2768_, 2, v___x_2766_);
lean_closure_set(v___f_2768_, 3, v___x_2767_);
v___x_2769_ = l_Lean_MacroScopesView_review(v_givenNameView_2757_);
v___x_2770_ = l_Lean_resolveGlobalName___redArg(v_inst_2739_, v_inst_2740_, v_inst_2741_, v_inst_2742_, v_inst_2743_, v_inst_2744_, v___x_2769_, v_globalDeclFound_2749_);
v___x_2771_ = lean_apply_4(v_toBind_2754_, lean_box(0), lean_box(0), v___x_2770_, v___f_2768_);
return v___x_2771_;
}
else
{
lean_object* v___x_2772_; lean_object* v___x_2773_; 
lean_dec_ref(v___f_2764_);
lean_dec_ref_known(v_givenNameView_2757_, 4);
v___x_2772_ = lean_box(0);
v___x_2773_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1(v_str_2763_, v_projs_2748_, v_inst_2739_, v_inst_2740_, v_inst_2741_, v_inst_2742_, v_inst_2743_, v_inst_2744_, v_view_2745_, v_findLocalDecl_x3f_2746_, v_pre_2762_, v___x_2772_, v_globalDeclFound_2749_);
return v___x_2773_;
}
}
else
{
lean_object* v___x_2774_; lean_object* v___x_2775_; 
lean_inc(v_toPure_2755_);
lean_dec_ref_known(v_givenNameView_2757_, 4);
lean_dec(v_projs_2748_);
lean_dec(v_n_2747_);
lean_dec_ref(v_findLocalDecl_x3f_2746_);
lean_dec_ref(v_view_2745_);
lean_dec(v_inst_2744_);
lean_dec_ref(v_inst_2743_);
lean_dec(v_inst_2742_);
lean_dec_ref(v_inst_2741_);
lean_dec_ref(v_inst_2740_);
lean_dec_ref(v_inst_2739_);
v___x_2774_ = lean_box(0);
v___x_2775_ = lean_apply_2(v_toPure_2755_, lean_box(0), v___x_2774_);
return v___x_2775_;
}
}
else
{
lean_object* v___x_2777_; uint8_t v_isShared_2778_; uint8_t v_isSharedCheck_2792_; 
lean_inc(v_toPure_2755_);
lean_dec_ref_known(v_givenNameView_2757_, 4);
lean_dec(v_n_2747_);
lean_dec_ref(v_findLocalDecl_x3f_2746_);
lean_dec_ref(v_view_2745_);
lean_dec(v_inst_2744_);
lean_dec_ref(v_inst_2743_);
lean_dec(v_inst_2742_);
lean_dec_ref(v_inst_2741_);
lean_dec_ref(v_inst_2740_);
v_isSharedCheck_2792_ = !lean_is_exclusive(v_inst_2739_);
if (v_isSharedCheck_2792_ == 0)
{
lean_object* v_unused_2793_; lean_object* v_unused_2794_; 
v_unused_2793_ = lean_ctor_get(v_inst_2739_, 1);
lean_dec(v_unused_2793_);
v_unused_2794_ = lean_ctor_get(v_inst_2739_, 0);
lean_dec(v_unused_2794_);
v___x_2777_ = v_inst_2739_;
v_isShared_2778_ = v_isSharedCheck_2792_;
goto v_resetjp_2776_;
}
else
{
lean_dec(v_inst_2739_);
v___x_2777_ = lean_box(0);
v_isShared_2778_ = v_isSharedCheck_2792_;
goto v_resetjp_2776_;
}
v_resetjp_2776_:
{
lean_object* v_val_2779_; lean_object* v___x_2781_; uint8_t v_isShared_2782_; uint8_t v_isSharedCheck_2791_; 
v_val_2779_ = lean_ctor_get(v___x_2761_, 0);
v_isSharedCheck_2791_ = !lean_is_exclusive(v___x_2761_);
if (v_isSharedCheck_2791_ == 0)
{
v___x_2781_ = v___x_2761_;
v_isShared_2782_ = v_isSharedCheck_2791_;
goto v_resetjp_2780_;
}
else
{
lean_inc(v_val_2779_);
lean_dec(v___x_2761_);
v___x_2781_ = lean_box(0);
v_isShared_2782_ = v_isSharedCheck_2791_;
goto v_resetjp_2780_;
}
v_resetjp_2780_:
{
lean_object* v___x_2783_; lean_object* v___x_2785_; 
v___x_2783_ = l_Lean_LocalDecl_toExpr(v_val_2779_);
if (v_isShared_2778_ == 0)
{
lean_ctor_set(v___x_2777_, 1, v_projs_2748_);
lean_ctor_set(v___x_2777_, 0, v___x_2783_);
v___x_2785_ = v___x_2777_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2790_; 
v_reuseFailAlloc_2790_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2790_, 0, v___x_2783_);
lean_ctor_set(v_reuseFailAlloc_2790_, 1, v_projs_2748_);
v___x_2785_ = v_reuseFailAlloc_2790_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
lean_object* v___x_2787_; 
if (v_isShared_2782_ == 0)
{
lean_ctor_set(v___x_2781_, 0, v___x_2785_);
v___x_2787_ = v___x_2781_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2789_; 
v_reuseFailAlloc_2789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2789_, 0, v___x_2785_);
v___x_2787_ = v_reuseFailAlloc_2789_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
lean_object* v___x_2788_; 
v___x_2788_ = lean_apply_2(v_toPure_2755_, lean_box(0), v___x_2787_);
return v___x_2788_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1(lean_object* v_str_2797_, lean_object* v_projs_2798_, lean_object* v_inst_2799_, lean_object* v_inst_2800_, lean_object* v_inst_2801_, lean_object* v_inst_2802_, lean_object* v_inst_2803_, lean_object* v_inst_2804_, lean_object* v_view_2805_, lean_object* v_findLocalDecl_x3f_2806_, lean_object* v_pre_2807_, lean_object* v_____r_2808_, uint8_t v_globalDeclFoundNext_2809_){
_start:
{
lean_object* v___x_2810_; lean_object* v___x_2811_; 
v___x_2810_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2810_, 0, v_str_2797_);
lean_ctor_set(v___x_2810_, 1, v_projs_2798_);
v___x_2811_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(v_inst_2799_, v_inst_2800_, v_inst_2801_, v_inst_2802_, v_inst_2803_, v_inst_2804_, v_view_2805_, v_findLocalDecl_x3f_2806_, v_pre_2807_, v___x_2810_, v_globalDeclFoundNext_2809_);
return v___x_2811_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___boxed(lean_object* v_inst_2812_, lean_object* v_inst_2813_, lean_object* v_inst_2814_, lean_object* v_inst_2815_, lean_object* v_inst_2816_, lean_object* v_inst_2817_, lean_object* v_view_2818_, lean_object* v_findLocalDecl_x3f_2819_, lean_object* v_n_2820_, lean_object* v_projs_2821_, lean_object* v_globalDeclFound_2822_){
_start:
{
uint8_t v_globalDeclFound_boxed_2823_; lean_object* v_res_2824_; 
v_globalDeclFound_boxed_2823_ = lean_unbox(v_globalDeclFound_2822_);
v_res_2824_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(v_inst_2812_, v_inst_2813_, v_inst_2814_, v_inst_2815_, v_inst_2816_, v_inst_2817_, v_view_2818_, v_findLocalDecl_x3f_2819_, v_n_2820_, v_projs_2821_, v_globalDeclFound_boxed_2823_);
return v_res_2824_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop(lean_object* v_m_2825_, lean_object* v_inst_2826_, lean_object* v_inst_2827_, lean_object* v_inst_2828_, lean_object* v_inst_2829_, lean_object* v_inst_2830_, lean_object* v_inst_2831_, lean_object* v_view_2832_, lean_object* v_findLocalDecl_x3f_2833_, lean_object* v_n_2834_, lean_object* v_projs_2835_, uint8_t v_globalDeclFound_2836_){
_start:
{
lean_object* v___x_2837_; 
v___x_2837_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(v_inst_2826_, v_inst_2827_, v_inst_2828_, v_inst_2829_, v_inst_2830_, v_inst_2831_, v_view_2832_, v_findLocalDecl_x3f_2833_, v_n_2834_, v_projs_2835_, v_globalDeclFound_2836_);
return v___x_2837_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___boxed(lean_object* v_m_2838_, lean_object* v_inst_2839_, lean_object* v_inst_2840_, lean_object* v_inst_2841_, lean_object* v_inst_2842_, lean_object* v_inst_2843_, lean_object* v_inst_2844_, lean_object* v_view_2845_, lean_object* v_findLocalDecl_x3f_2846_, lean_object* v_n_2847_, lean_object* v_projs_2848_, lean_object* v_globalDeclFound_2849_){
_start:
{
uint8_t v_globalDeclFound_boxed_2850_; lean_object* v_res_2851_; 
v_globalDeclFound_boxed_2850_ = lean_unbox(v_globalDeclFound_2849_);
v_res_2851_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop(v_m_2838_, v_inst_2839_, v_inst_2840_, v_inst_2841_, v_inst_2842_, v_inst_2843_, v_inst_2844_, v_view_2845_, v_findLocalDecl_x3f_2846_, v_n_2847_, v_projs_2848_, v_globalDeclFound_boxed_2850_);
return v_res_2851_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(lean_object* v_localDecl_2852_, lean_object* v_givenNameView_2853_, lean_object* v_fullDeclName_2854_, lean_object* v_ns_2855_){
_start:
{
lean_object* v_name_2856_; lean_object* v_imported_2857_; lean_object* v_ctx_2858_; lean_object* v_scopes_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; uint8_t v___x_2863_; 
v_name_2856_ = lean_ctor_get(v_givenNameView_2853_, 0);
v_imported_2857_ = lean_ctor_get(v_givenNameView_2853_, 1);
v_ctx_2858_ = lean_ctor_get(v_givenNameView_2853_, 2);
v_scopes_2859_ = lean_ctor_get(v_givenNameView_2853_, 3);
lean_inc(v_name_2856_);
lean_inc(v_ns_2855_);
v___x_2860_ = l_Lean_Name_append(v_ns_2855_, v_name_2856_);
lean_inc(v_scopes_2859_);
lean_inc(v_ctx_2858_);
lean_inc(v_imported_2857_);
v___x_2861_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2861_, 0, v___x_2860_);
lean_ctor_set(v___x_2861_, 1, v_imported_2857_);
lean_ctor_set(v___x_2861_, 2, v_ctx_2858_);
lean_ctor_set(v___x_2861_, 3, v_scopes_2859_);
v___x_2862_ = l_Lean_MacroScopesView_review(v___x_2861_);
v___x_2863_ = lean_name_eq(v___x_2862_, v_fullDeclName_2854_);
lean_dec(v___x_2862_);
if (v___x_2863_ == 0)
{
if (lean_obj_tag(v_ns_2855_) == 1)
{
lean_object* v_pre_2864_; 
v_pre_2864_ = lean_ctor_get(v_ns_2855_, 0);
lean_inc(v_pre_2864_);
lean_dec_ref_known(v_ns_2855_, 2);
v_ns_2855_ = v_pre_2864_;
goto _start;
}
else
{
lean_object* v___x_2866_; 
lean_dec(v_ns_2855_);
lean_dec_ref(v_givenNameView_2853_);
lean_dec_ref(v_localDecl_2852_);
v___x_2866_ = lean_box(0);
return v___x_2866_;
}
}
else
{
lean_object* v___x_2867_; 
lean_dec(v_ns_2855_);
lean_dec_ref(v_givenNameView_2853_);
v___x_2867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2867_, 0, v_localDecl_2852_);
return v___x_2867_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_go___boxed(lean_object* v_localDecl_2868_, lean_object* v_givenNameView_2869_, lean_object* v_fullDeclName_2870_, lean_object* v_ns_2871_){
_start:
{
lean_object* v_res_2872_; 
v_res_2872_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(v_localDecl_2868_, v_givenNameView_2869_, v_fullDeclName_2870_, v_ns_2871_);
lean_dec(v_fullDeclName_2870_);
return v_res_2872_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__0(lean_object* v_localDecl_2873_, lean_object* v_givenName_2874_){
_start:
{
lean_object* v___x_2875_; uint8_t v___x_2876_; 
v___x_2875_ = l_Lean_LocalDecl_userName(v_localDecl_2873_);
v___x_2876_ = lean_name_eq(v___x_2875_, v_givenName_2874_);
lean_dec(v___x_2875_);
if (v___x_2876_ == 0)
{
lean_object* v___x_2877_; 
lean_dec_ref(v_localDecl_2873_);
v___x_2877_ = lean_box(0);
return v___x_2877_;
}
else
{
lean_object* v___x_2878_; 
v___x_2878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2878_, 0, v_localDecl_2873_);
return v___x_2878_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__0___boxed(lean_object* v_localDecl_2879_, lean_object* v_givenName_2880_){
_start:
{
lean_object* v_res_2881_; 
v_res_2881_ = l_Lean_resolveLocalName___redArg___lam__0(v_localDecl_2879_, v_givenName_2880_);
lean_dec(v_givenName_2880_);
return v_res_2881_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__1(lean_object* v_matchLocalDecl_x3f_2882_, lean_object* v_givenName_2883_, uint8_t v_skipAuxDecl_2884_, lean_object* v___f_2885_, lean_object* v_auxDeclToFullName_2886_, lean_object* v_currNamespace_2887_, lean_object* v_givenNameView_2888_, lean_object* v_x_2889_){
_start:
{
if (lean_obj_tag(v_x_2889_) == 0)
{
lean_dec_ref(v_givenNameView_2888_);
lean_dec(v_currNamespace_2887_);
lean_dec(v_auxDeclToFullName_2886_);
lean_dec_ref(v___f_2885_);
lean_dec(v_givenName_2883_);
lean_dec_ref(v_matchLocalDecl_x3f_2882_);
return v_x_2889_;
}
else
{
lean_object* v_val_2890_; uint8_t v___x_2891_; 
v_val_2890_ = lean_ctor_get(v_x_2889_, 0);
v___x_2891_ = l_Lean_LocalDecl_isAuxDecl(v_val_2890_);
if (v___x_2891_ == 0)
{
lean_object* v___x_2892_; 
lean_inc(v_val_2890_);
lean_dec_ref_known(v_x_2889_, 1);
lean_dec_ref(v_givenNameView_2888_);
lean_dec(v_currNamespace_2887_);
lean_dec(v_auxDeclToFullName_2886_);
lean_dec_ref(v___f_2885_);
v___x_2892_ = lean_apply_2(v_matchLocalDecl_x3f_2882_, v_val_2890_, v_givenName_2883_);
return v___x_2892_;
}
else
{
if (v_skipAuxDecl_2884_ == 0)
{
if (v___x_2891_ == 0)
{
lean_object* v___x_2893_; 
lean_dec_ref_known(v_x_2889_, 1);
lean_dec_ref(v_givenNameView_2888_);
lean_dec(v_currNamespace_2887_);
lean_dec(v_auxDeclToFullName_2886_);
lean_dec_ref(v___f_2885_);
lean_dec(v_givenName_2883_);
lean_dec_ref(v_matchLocalDecl_x3f_2882_);
v___x_2893_ = lean_box(0);
return v___x_2893_;
}
else
{
lean_object* v___x_2894_; lean_object* v___x_2895_; 
v___x_2894_ = l_Lean_LocalDecl_fvarId(v_val_2890_);
v___x_2895_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(v___f_2885_, v_auxDeclToFullName_2886_, v___x_2894_);
if (lean_obj_tag(v___x_2895_) == 1)
{
lean_object* v_val_2896_; lean_object* v_fullDeclView_2897_; lean_object* v___y_2899_; lean_object* v_name_2920_; lean_object* v___x_2921_; 
lean_dec(v_givenName_2883_);
lean_dec_ref(v_matchLocalDecl_x3f_2882_);
v_val_2896_ = lean_ctor_get(v___x_2895_, 0);
lean_inc(v_val_2896_);
lean_dec_ref_known(v___x_2895_, 1);
v_fullDeclView_2897_ = l_Lean_extractMacroScopes(v_val_2896_);
v_name_2920_ = lean_ctor_get(v_fullDeclView_2897_, 0);
lean_inc_n(v_name_2920_, 2);
v___x_2921_ = l_Lean_privateToUserName_x3f(v_name_2920_);
if (lean_obj_tag(v___x_2921_) == 0)
{
v___y_2899_ = v_name_2920_;
goto v___jp_2898_;
}
else
{
lean_object* v_val_2922_; 
lean_dec(v_name_2920_);
v_val_2922_ = lean_ctor_get(v___x_2921_, 0);
lean_inc(v_val_2922_);
lean_dec_ref_known(v___x_2921_, 1);
v___y_2899_ = v_val_2922_;
goto v___jp_2898_;
}
v___jp_2898_:
{
lean_object* v_imported_2900_; lean_object* v_ctx_2901_; lean_object* v_scopes_2902_; lean_object* v___x_2904_; uint8_t v_isShared_2905_; uint8_t v_isSharedCheck_2918_; 
v_imported_2900_ = lean_ctor_get(v_fullDeclView_2897_, 1);
v_ctx_2901_ = lean_ctor_get(v_fullDeclView_2897_, 2);
v_scopes_2902_ = lean_ctor_get(v_fullDeclView_2897_, 3);
v_isSharedCheck_2918_ = !lean_is_exclusive(v_fullDeclView_2897_);
if (v_isSharedCheck_2918_ == 0)
{
lean_object* v_unused_2919_; 
v_unused_2919_ = lean_ctor_get(v_fullDeclView_2897_, 0);
lean_dec(v_unused_2919_);
v___x_2904_ = v_fullDeclView_2897_;
v_isShared_2905_ = v_isSharedCheck_2918_;
goto v_resetjp_2903_;
}
else
{
lean_inc(v_scopes_2902_);
lean_inc(v_ctx_2901_);
lean_inc(v_imported_2900_);
lean_dec(v_fullDeclView_2897_);
v___x_2904_ = lean_box(0);
v_isShared_2905_ = v_isSharedCheck_2918_;
goto v_resetjp_2903_;
}
v_resetjp_2903_:
{
lean_object* v_fullDeclView_2907_; 
if (v_isShared_2905_ == 0)
{
lean_ctor_set(v___x_2904_, 0, v___y_2899_);
v_fullDeclView_2907_ = v___x_2904_;
goto v_reusejp_2906_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v___y_2899_);
lean_ctor_set(v_reuseFailAlloc_2917_, 1, v_imported_2900_);
lean_ctor_set(v_reuseFailAlloc_2917_, 2, v_ctx_2901_);
lean_ctor_set(v_reuseFailAlloc_2917_, 3, v_scopes_2902_);
v_fullDeclView_2907_ = v_reuseFailAlloc_2917_;
goto v_reusejp_2906_;
}
v_reusejp_2906_:
{
lean_object* v_fullDeclName_2908_; uint8_t v___x_2909_; 
lean_inc_ref(v_fullDeclView_2907_);
v_fullDeclName_2908_ = l_Lean_MacroScopesView_review(v_fullDeclView_2907_);
v___x_2909_ = l_Lean_Name_isPrefixOf(v_currNamespace_2887_, v_fullDeclName_2908_);
if (v___x_2909_ == 0)
{
lean_object* v___x_2910_; 
lean_inc(v_val_2890_);
lean_dec_ref(v_fullDeclView_2907_);
lean_dec_ref_known(v_x_2889_, 1);
v___x_2910_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(v_val_2890_, v_givenNameView_2888_, v_fullDeclName_2908_, v_currNamespace_2887_);
lean_dec(v_fullDeclName_2908_);
return v___x_2910_;
}
else
{
lean_object* v___x_2911_; lean_object* v_localDeclNameView_2912_; uint8_t v___x_2913_; 
lean_dec(v_fullDeclName_2908_);
lean_dec(v_currNamespace_2887_);
v___x_2911_ = l_Lean_LocalDecl_userName(v_val_2890_);
v_localDeclNameView_2912_ = l_Lean_extractMacroScopes(v___x_2911_);
v___x_2913_ = l_Lean_MacroScopesView_isSuffixOf(v_localDeclNameView_2912_, v_givenNameView_2888_);
lean_dec_ref(v_localDeclNameView_2912_);
if (v___x_2913_ == 0)
{
lean_object* v___x_2914_; 
lean_dec_ref(v_fullDeclView_2907_);
lean_dec_ref_known(v_x_2889_, 1);
lean_dec_ref(v_givenNameView_2888_);
v___x_2914_ = lean_box(0);
return v___x_2914_;
}
else
{
uint8_t v___x_2915_; 
v___x_2915_ = l_Lean_MacroScopesView_isSuffixOf(v_givenNameView_2888_, v_fullDeclView_2907_);
lean_dec_ref(v_fullDeclView_2907_);
lean_dec_ref(v_givenNameView_2888_);
if (v___x_2915_ == 0)
{
lean_object* v___x_2916_; 
lean_dec_ref_known(v_x_2889_, 1);
v___x_2916_ = lean_box(0);
return v___x_2916_;
}
else
{
return v_x_2889_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2923_; 
lean_inc(v_val_2890_);
lean_dec(v___x_2895_);
lean_dec_ref_known(v_x_2889_, 1);
lean_dec_ref(v_givenNameView_2888_);
lean_dec(v_currNamespace_2887_);
v___x_2923_ = lean_apply_2(v_matchLocalDecl_x3f_2882_, v_val_2890_, v_givenName_2883_);
return v___x_2923_;
}
}
}
else
{
lean_object* v___x_2924_; 
lean_dec_ref_known(v_x_2889_, 1);
lean_dec_ref(v_givenNameView_2888_);
lean_dec(v_currNamespace_2887_);
lean_dec(v_auxDeclToFullName_2886_);
lean_dec_ref(v___f_2885_);
lean_dec(v_givenName_2883_);
lean_dec_ref(v_matchLocalDecl_x3f_2882_);
v___x_2924_ = lean_box(0);
return v___x_2924_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__1___boxed(lean_object* v_matchLocalDecl_x3f_2925_, lean_object* v_givenName_2926_, lean_object* v_skipAuxDecl_2927_, lean_object* v___f_2928_, lean_object* v_auxDeclToFullName_2929_, lean_object* v_currNamespace_2930_, lean_object* v_givenNameView_2931_, lean_object* v_x_2932_){
_start:
{
uint8_t v_skipAuxDecl_boxed_2933_; lean_object* v_res_2934_; 
v_skipAuxDecl_boxed_2933_ = lean_unbox(v_skipAuxDecl_2927_);
v_res_2934_ = l_Lean_resolveLocalName___redArg___lam__1(v_matchLocalDecl_x3f_2925_, v_givenName_2926_, v_skipAuxDecl_boxed_2933_, v___f_2928_, v_auxDeclToFullName_2929_, v_currNamespace_2930_, v_givenNameView_2931_, v_x_2932_);
return v_res_2934_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__2(lean_object* v_localDecl_x3f_2935_, lean_object* v_matchLocalDecl_x3f_2936_, lean_object* v_givenName_2937_, lean_object* v_x_2938_){
_start:
{
if (lean_obj_tag(v_x_2938_) == 0)
{
lean_dec(v_givenName_2937_);
lean_dec_ref(v_matchLocalDecl_x3f_2936_);
return v_x_2938_;
}
else
{
lean_object* v_val_2939_; uint8_t v___x_2940_; 
v_val_2939_ = lean_ctor_get(v_x_2938_, 0);
lean_inc(v_val_2939_);
lean_dec_ref_known(v_x_2938_, 1);
v___x_2940_ = l_Lean_LocalDecl_isAuxDecl(v_val_2939_);
if (v___x_2940_ == 0)
{
lean_dec(v_val_2939_);
lean_dec(v_givenName_2937_);
lean_dec_ref(v_matchLocalDecl_x3f_2936_);
lean_inc(v_localDecl_x3f_2935_);
return v_localDecl_x3f_2935_;
}
else
{
lean_object* v___x_2941_; 
v___x_2941_ = lean_apply_2(v_matchLocalDecl_x3f_2936_, v_val_2939_, v_givenName_2937_);
return v___x_2941_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__2___boxed(lean_object* v_localDecl_x3f_2942_, lean_object* v_matchLocalDecl_x3f_2943_, lean_object* v_givenName_2944_, lean_object* v_x_2945_){
_start:
{
lean_object* v_res_2946_; 
v_res_2946_ = l_Lean_resolveLocalName___redArg___lam__2(v_localDecl_x3f_2942_, v_matchLocalDecl_x3f_2943_, v_givenName_2944_, v_x_2945_);
lean_dec(v_localDecl_x3f_2942_);
return v_res_2946_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__3(lean_object* v_lctx_2966_, lean_object* v_matchLocalDecl_x3f_2967_, lean_object* v___f_2968_, lean_object* v_auxDeclToFullName_2969_, lean_object* v_currNamespace_2970_, lean_object* v_givenNameView_2971_, uint8_t v_skipAuxDecl_2972_){
_start:
{
lean_object* v_decls_2973_; lean_object* v_givenName_2974_; lean_object* v___x_2975_; lean_object* v___f_2976_; lean_object* v___x_2977_; lean_object* v_localDecl_x3f_2978_; 
v_decls_2973_ = lean_ctor_get(v_lctx_2966_, 1);
lean_inc_ref_n(v_decls_2973_, 2);
lean_dec_ref(v_lctx_2966_);
lean_inc_ref(v_givenNameView_2971_);
v_givenName_2974_ = l_Lean_MacroScopesView_review(v_givenNameView_2971_);
v___x_2975_ = lean_box(v_skipAuxDecl_2972_);
lean_inc(v_givenName_2974_);
lean_inc_ref(v_matchLocalDecl_x3f_2967_);
v___f_2976_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_2976_, 0, v_matchLocalDecl_x3f_2967_);
lean_closure_set(v___f_2976_, 1, v_givenName_2974_);
lean_closure_set(v___f_2976_, 2, v___x_2975_);
lean_closure_set(v___f_2976_, 3, v___f_2968_);
lean_closure_set(v___f_2976_, 4, v_auxDeclToFullName_2969_);
lean_closure_set(v___f_2976_, 5, v_currNamespace_2970_);
lean_closure_set(v___f_2976_, 6, v_givenNameView_2971_);
v___x_2977_ = ((lean_object*)(l_Lean_resolveLocalName___redArg___lam__3___closed__9));
v_localDecl_x3f_2978_ = l_Lean_PersistentArray_findSomeRevM_x3f___redArg(v___x_2977_, v_decls_2973_, v___f_2976_);
if (lean_obj_tag(v_localDecl_x3f_2978_) == 0)
{
if (v_skipAuxDecl_2972_ == 0)
{
lean_object* v___f_2979_; lean_object* v___x_2980_; 
v___f_2979_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_2979_, 0, v_localDecl_x3f_2978_);
lean_closure_set(v___f_2979_, 1, v_matchLocalDecl_x3f_2967_);
lean_closure_set(v___f_2979_, 2, v_givenName_2974_);
v___x_2980_ = l_Lean_PersistentArray_findSomeRevM_x3f___redArg(v___x_2977_, v_decls_2973_, v___f_2979_);
return v___x_2980_;
}
else
{
lean_dec(v_givenName_2974_);
lean_dec_ref(v_decls_2973_);
lean_dec_ref(v_matchLocalDecl_x3f_2967_);
return v_localDecl_x3f_2978_;
}
}
else
{
lean_dec(v_givenName_2974_);
lean_dec_ref(v_decls_2973_);
lean_dec_ref(v_matchLocalDecl_x3f_2967_);
return v_localDecl_x3f_2978_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__3___boxed(lean_object* v_lctx_2981_, lean_object* v_matchLocalDecl_x3f_2982_, lean_object* v___f_2983_, lean_object* v_auxDeclToFullName_2984_, lean_object* v_currNamespace_2985_, lean_object* v_givenNameView_2986_, lean_object* v_skipAuxDecl_2987_){
_start:
{
uint8_t v_skipAuxDecl_boxed_2988_; lean_object* v_res_2989_; 
v_skipAuxDecl_boxed_2988_ = lean_unbox(v_skipAuxDecl_2987_);
v_res_2989_ = l_Lean_resolveLocalName___redArg___lam__3(v_lctx_2981_, v_matchLocalDecl_x3f_2982_, v___f_2983_, v_auxDeclToFullName_2984_, v_currNamespace_2985_, v_givenNameView_2986_, v_skipAuxDecl_boxed_2988_);
return v_res_2989_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__4(lean_object* v_n_2990_, lean_object* v_lctx_2991_, lean_object* v_matchLocalDecl_x3f_2992_, lean_object* v___f_2993_, lean_object* v_auxDeclToFullName_2994_, lean_object* v_inst_2995_, lean_object* v_inst_2996_, lean_object* v_inst_2997_, lean_object* v_inst_2998_, lean_object* v_inst_2999_, lean_object* v_inst_3000_, lean_object* v_currNamespace_3001_){
_start:
{
lean_object* v_view_3002_; lean_object* v_name_3003_; lean_object* v_findLocalDecl_x3f_3004_; lean_object* v___x_3005_; uint8_t v___x_3006_; lean_object* v___x_3007_; 
v_view_3002_ = l_Lean_extractMacroScopes(v_n_2990_);
v_name_3003_ = lean_ctor_get(v_view_3002_, 0);
lean_inc(v_name_3003_);
v_findLocalDecl_x3f_3004_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__3___boxed), 7, 5);
lean_closure_set(v_findLocalDecl_x3f_3004_, 0, v_lctx_2991_);
lean_closure_set(v_findLocalDecl_x3f_3004_, 1, v_matchLocalDecl_x3f_2992_);
lean_closure_set(v_findLocalDecl_x3f_3004_, 2, v___f_2993_);
lean_closure_set(v_findLocalDecl_x3f_3004_, 3, v_auxDeclToFullName_2994_);
lean_closure_set(v_findLocalDecl_x3f_3004_, 4, v_currNamespace_3001_);
v___x_3005_ = lean_box(0);
v___x_3006_ = 0;
v___x_3007_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(v_inst_2995_, v_inst_2996_, v_inst_2997_, v_inst_2998_, v_inst_2999_, v_inst_3000_, v_view_3002_, v_findLocalDecl_x3f_3004_, v_name_3003_, v___x_3005_, v___x_3006_);
return v___x_3007_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__5(lean_object* v_inst_3008_, lean_object* v_n_3009_, lean_object* v_lctx_3010_, lean_object* v_matchLocalDecl_x3f_3011_, lean_object* v___f_3012_, lean_object* v_inst_3013_, lean_object* v_inst_3014_, lean_object* v_inst_3015_, lean_object* v_inst_3016_, lean_object* v_inst_3017_, lean_object* v_toBind_3018_, lean_object* v_____do__lift_3019_){
_start:
{
lean_object* v_auxDeclToFullName_3020_; lean_object* v_getCurrNamespace_3021_; lean_object* v___f_3022_; lean_object* v___x_3023_; 
v_auxDeclToFullName_3020_ = lean_ctor_get(v_____do__lift_3019_, 2);
lean_inc(v_auxDeclToFullName_3020_);
lean_dec_ref(v_____do__lift_3019_);
v_getCurrNamespace_3021_ = lean_ctor_get(v_inst_3008_, 0);
lean_inc(v_getCurrNamespace_3021_);
v___f_3022_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__4), 12, 11);
lean_closure_set(v___f_3022_, 0, v_n_3009_);
lean_closure_set(v___f_3022_, 1, v_lctx_3010_);
lean_closure_set(v___f_3022_, 2, v_matchLocalDecl_x3f_3011_);
lean_closure_set(v___f_3022_, 3, v___f_3012_);
lean_closure_set(v___f_3022_, 4, v_auxDeclToFullName_3020_);
lean_closure_set(v___f_3022_, 5, v_inst_3013_);
lean_closure_set(v___f_3022_, 6, v_inst_3008_);
lean_closure_set(v___f_3022_, 7, v_inst_3014_);
lean_closure_set(v___f_3022_, 8, v_inst_3015_);
lean_closure_set(v___f_3022_, 9, v_inst_3016_);
lean_closure_set(v___f_3022_, 10, v_inst_3017_);
v___x_3023_ = lean_apply_4(v_toBind_3018_, lean_box(0), lean_box(0), v_getCurrNamespace_3021_, v___f_3022_);
return v___x_3023_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__6(lean_object* v_inst_3024_, lean_object* v_n_3025_, lean_object* v_matchLocalDecl_x3f_3026_, lean_object* v___f_3027_, lean_object* v_inst_3028_, lean_object* v_inst_3029_, lean_object* v_inst_3030_, lean_object* v_inst_3031_, lean_object* v_inst_3032_, lean_object* v_toBind_3033_, lean_object* v_inst_3034_, lean_object* v_lctx_3035_){
_start:
{
lean_object* v___f_3036_; lean_object* v___x_3037_; 
lean_inc(v_toBind_3033_);
v___f_3036_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__5), 12, 11);
lean_closure_set(v___f_3036_, 0, v_inst_3024_);
lean_closure_set(v___f_3036_, 1, v_n_3025_);
lean_closure_set(v___f_3036_, 2, v_lctx_3035_);
lean_closure_set(v___f_3036_, 3, v_matchLocalDecl_x3f_3026_);
lean_closure_set(v___f_3036_, 4, v___f_3027_);
lean_closure_set(v___f_3036_, 5, v_inst_3028_);
lean_closure_set(v___f_3036_, 6, v_inst_3029_);
lean_closure_set(v___f_3036_, 7, v_inst_3030_);
lean_closure_set(v___f_3036_, 8, v_inst_3031_);
lean_closure_set(v___f_3036_, 9, v_inst_3032_);
lean_closure_set(v___f_3036_, 10, v_toBind_3033_);
v___x_3037_ = lean_apply_4(v_toBind_3033_, lean_box(0), lean_box(0), v_inst_3034_, v___f_3036_);
return v___x_3037_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg(lean_object* v_inst_3040_, lean_object* v_inst_3041_, lean_object* v_inst_3042_, lean_object* v_inst_3043_, lean_object* v_inst_3044_, lean_object* v_inst_3045_, lean_object* v_inst_3046_, lean_object* v_n_3047_){
_start:
{
lean_object* v_toBind_3048_; lean_object* v___f_3049_; lean_object* v_matchLocalDecl_x3f_3050_; lean_object* v___f_3051_; lean_object* v___x_3052_; 
v_toBind_3048_ = lean_ctor_get(v_inst_3040_, 1);
lean_inc_n(v_toBind_3048_, 2);
v___f_3049_ = ((lean_object*)(l_Lean_resolveLocalName___redArg___closed__0));
v_matchLocalDecl_x3f_3050_ = ((lean_object*)(l_Lean_resolveLocalName___redArg___closed__1));
lean_inc(v_inst_3046_);
v___f_3051_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__6), 12, 11);
lean_closure_set(v___f_3051_, 0, v_inst_3041_);
lean_closure_set(v___f_3051_, 1, v_n_3047_);
lean_closure_set(v___f_3051_, 2, v_matchLocalDecl_x3f_3050_);
lean_closure_set(v___f_3051_, 3, v___f_3049_);
lean_closure_set(v___f_3051_, 4, v_inst_3040_);
lean_closure_set(v___f_3051_, 5, v_inst_3042_);
lean_closure_set(v___f_3051_, 6, v_inst_3043_);
lean_closure_set(v___f_3051_, 7, v_inst_3044_);
lean_closure_set(v___f_3051_, 8, v_inst_3045_);
lean_closure_set(v___f_3051_, 9, v_toBind_3048_);
lean_closure_set(v___f_3051_, 10, v_inst_3046_);
v___x_3052_ = lean_apply_4(v_toBind_3048_, lean_box(0), lean_box(0), v_inst_3046_, v___f_3051_);
return v___x_3052_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName(lean_object* v_m_3053_, lean_object* v_inst_3054_, lean_object* v_inst_3055_, lean_object* v_inst_3056_, lean_object* v_inst_3057_, lean_object* v_inst_3058_, lean_object* v_inst_3059_, lean_object* v_inst_3060_, lean_object* v_n_3061_){
_start:
{
lean_object* v___x_3062_; 
v___x_3062_ = l_Lean_resolveLocalName___redArg(v_inst_3054_, v_inst_3055_, v_inst_3056_, v_inst_3057_, v_inst_3058_, v_inst_3059_, v_inst_3060_, v_n_3061_);
return v___x_3062_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0(lean_object* v_toPure_3063_, uint8_t v_____do__lift_3064_){
_start:
{
lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; 
v___x_3065_ = lean_box(v_____do__lift_3064_);
v___x_3066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3066_, 0, v___x_3065_);
v___x_3067_ = lean_apply_2(v_toPure_3063_, lean_box(0), v___x_3066_);
return v___x_3067_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0___boxed(lean_object* v_toPure_3068_, lean_object* v_____do__lift_3069_){
_start:
{
uint8_t v_____do__lift_1160__boxed_3070_; lean_object* v_res_3071_; 
v_____do__lift_1160__boxed_3070_ = lean_unbox(v_____do__lift_3069_);
v_res_3071_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0(v_toPure_3068_, v_____do__lift_1160__boxed_3070_);
return v_res_3071_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__1(lean_object* v_toPure_3072_, lean_object* v___y_3073_, lean_object* v_____do__lift_3074_){
_start:
{
if (lean_obj_tag(v_____do__lift_3074_) == 0)
{
lean_object* v___x_3075_; lean_object* v___x_3076_; 
lean_dec(v___y_3073_);
v___x_3075_ = lean_box(0);
v___x_3076_ = lean_apply_2(v_toPure_3072_, lean_box(0), v___x_3075_);
return v___x_3076_;
}
else
{
lean_object* v___x_3078_; uint8_t v_isShared_3079_; uint8_t v_isSharedCheck_3084_; 
v_isSharedCheck_3084_ = !lean_is_exclusive(v_____do__lift_3074_);
if (v_isSharedCheck_3084_ == 0)
{
lean_object* v_unused_3085_; 
v_unused_3085_ = lean_ctor_get(v_____do__lift_3074_, 0);
lean_dec(v_unused_3085_);
v___x_3078_ = v_____do__lift_3074_;
v_isShared_3079_ = v_isSharedCheck_3084_;
goto v_resetjp_3077_;
}
else
{
lean_dec(v_____do__lift_3074_);
v___x_3078_ = lean_box(0);
v_isShared_3079_ = v_isSharedCheck_3084_;
goto v_resetjp_3077_;
}
v_resetjp_3077_:
{
lean_object* v___x_3081_; 
if (v_isShared_3079_ == 0)
{
lean_ctor_set(v___x_3078_, 0, v___y_3073_);
v___x_3081_ = v___x_3078_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3083_; 
v_reuseFailAlloc_3083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3083_, 0, v___y_3073_);
v___x_3081_ = v_reuseFailAlloc_3083_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
lean_object* v___x_3082_; 
v___x_3082_ = lean_apply_2(v_toPure_3072_, lean_box(0), v___x_3081_);
return v___x_3082_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2(lean_object* v_toPure_3088_, lean_object* v_toBind_3089_, lean_object* v___f_3090_, lean_object* v_____do__lift_3091_){
_start:
{
if (lean_obj_tag(v_____do__lift_3091_) == 0)
{
lean_object* v___x_3092_; lean_object* v___x_3093_; 
lean_dec(v___f_3090_);
lean_dec(v_toBind_3089_);
v___x_3092_ = lean_box(0);
v___x_3093_ = lean_apply_2(v_toPure_3088_, lean_box(0), v___x_3092_);
return v___x_3093_;
}
else
{
lean_object* v_val_3094_; uint8_t v___x_3095_; 
v_val_3094_ = lean_ctor_get(v_____do__lift_3091_, 0);
v___x_3095_ = lean_unbox(v_val_3094_);
if (v___x_3095_ == 0)
{
lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; 
v___x_3096_ = lean_box(0);
v___x_3097_ = lean_apply_2(v_toPure_3088_, lean_box(0), v___x_3096_);
v___x_3098_ = lean_apply_4(v_toBind_3089_, lean_box(0), lean_box(0), v___x_3097_, v___f_3090_);
return v___x_3098_;
}
else
{
lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; 
v___x_3099_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0));
v___x_3100_ = lean_apply_2(v_toPure_3088_, lean_box(0), v___x_3099_);
v___x_3101_ = lean_apply_4(v_toBind_3089_, lean_box(0), lean_box(0), v___x_3100_, v___f_3090_);
return v___x_3101_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___boxed(lean_object* v_toPure_3102_, lean_object* v_toBind_3103_, lean_object* v___f_3104_, lean_object* v_____do__lift_3105_){
_start:
{
lean_object* v_res_3106_; 
v_res_3106_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2(v_toPure_3102_, v_toBind_3103_, v___f_3104_, v_____do__lift_3105_);
lean_dec(v_____do__lift_3105_);
return v_res_3106_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3(lean_object* v_toPure_3107_, lean_object* v_filter_3108_, lean_object* v___y_3109_, lean_object* v_toBind_3110_, lean_object* v___f_3111_, lean_object* v___f_3112_, lean_object* v_____do__lift_3113_){
_start:
{
if (lean_obj_tag(v_____do__lift_3113_) == 0)
{
lean_object* v___x_3114_; lean_object* v___x_3115_; 
lean_dec(v___f_3112_);
lean_dec(v___f_3111_);
lean_dec(v_toBind_3110_);
lean_dec(v___y_3109_);
lean_dec(v_filter_3108_);
v___x_3114_ = lean_box(0);
v___x_3115_ = lean_apply_2(v_toPure_3107_, lean_box(0), v___x_3114_);
return v___x_3115_;
}
else
{
lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; 
lean_dec(v_toPure_3107_);
v___x_3116_ = lean_apply_1(v_filter_3108_, v___y_3109_);
lean_inc(v_toBind_3110_);
v___x_3117_ = lean_apply_4(v_toBind_3110_, lean_box(0), lean_box(0), v___x_3116_, v___f_3111_);
v___x_3118_ = lean_apply_4(v_toBind_3110_, lean_box(0), lean_box(0), v___x_3117_, v___f_3112_);
return v___x_3118_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3___boxed(lean_object* v_toPure_3119_, lean_object* v_filter_3120_, lean_object* v___y_3121_, lean_object* v_toBind_3122_, lean_object* v___f_3123_, lean_object* v___f_3124_, lean_object* v_____do__lift_3125_){
_start:
{
lean_object* v_res_3126_; 
v_res_3126_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3(v_toPure_3119_, v_filter_3120_, v___y_3121_, v_toBind_3122_, v___f_3123_, v___f_3124_, v_____do__lift_3125_);
lean_dec(v_____do__lift_3125_);
return v_res_3126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4(lean_object* v_toPure_3127_, lean_object* v_n_u2080_3128_, lean_object* v_toBind_3129_, lean_object* v___f_3130_, lean_object* v_____do__lift_3131_){
_start:
{
if (lean_obj_tag(v_____do__lift_3131_) == 0)
{
lean_object* v___x_3135_; lean_object* v___x_3136_; 
lean_dec(v___f_3130_);
lean_dec(v_toBind_3129_);
v___x_3135_ = lean_box(0);
v___x_3136_ = lean_apply_2(v_toPure_3127_, lean_box(0), v___x_3135_);
return v___x_3136_;
}
else
{
lean_object* v_val_3137_; 
v_val_3137_ = lean_ctor_get(v_____do__lift_3131_, 0);
if (lean_obj_tag(v_val_3137_) == 1)
{
lean_object* v_tail_3138_; 
v_tail_3138_ = lean_ctor_get(v_val_3137_, 1);
if (lean_obj_tag(v_tail_3138_) == 0)
{
lean_object* v_head_3139_; lean_object* v_fst_3140_; uint8_t v___x_3141_; 
v_head_3139_ = lean_ctor_get(v_val_3137_, 0);
v_fst_3140_ = lean_ctor_get(v_head_3139_, 0);
v___x_3141_ = lean_name_eq(v_fst_3140_, v_n_u2080_3128_);
if (v___x_3141_ == 0)
{
lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; 
v___x_3142_ = lean_box(0);
v___x_3143_ = lean_apply_2(v_toPure_3127_, lean_box(0), v___x_3142_);
v___x_3144_ = lean_apply_4(v_toBind_3129_, lean_box(0), lean_box(0), v___x_3143_, v___f_3130_);
return v___x_3144_;
}
else
{
lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; 
v___x_3145_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0));
v___x_3146_ = lean_apply_2(v_toPure_3127_, lean_box(0), v___x_3145_);
v___x_3147_ = lean_apply_4(v_toBind_3129_, lean_box(0), lean_box(0), v___x_3146_, v___f_3130_);
return v___x_3147_;
}
}
else
{
lean_dec(v___f_3130_);
lean_dec(v_toBind_3129_);
goto v___jp_3132_;
}
}
else
{
lean_dec(v___f_3130_);
lean_dec(v_toBind_3129_);
goto v___jp_3132_;
}
}
v___jp_3132_:
{
lean_object* v___x_3133_; lean_object* v___x_3134_; 
v___x_3133_ = lean_box(0);
v___x_3134_ = lean_apply_2(v_toPure_3127_, lean_box(0), v___x_3133_);
return v___x_3134_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4___boxed(lean_object* v_toPure_3148_, lean_object* v_n_u2080_3149_, lean_object* v_toBind_3150_, lean_object* v___f_3151_, lean_object* v_____do__lift_3152_){
_start:
{
lean_object* v_res_3153_; 
v_res_3153_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4(v_toPure_3148_, v_n_u2080_3149_, v_toBind_3150_, v___f_3151_, v_____do__lift_3152_);
lean_dec(v_____do__lift_3152_);
lean_dec(v_n_u2080_3149_);
return v_res_3153_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(lean_object* v_inst_3154_, lean_object* v_inst_3155_, lean_object* v_inst_3156_, lean_object* v_inst_3157_, lean_object* v_inst_3158_, lean_object* v_inst_3159_, lean_object* v_n_u2080_3160_, lean_object* v_filter_3161_, lean_object* v_view_x3f_3162_, lean_object* v_n_3163_){
_start:
{
lean_object* v___f_3164_; lean_object* v___f_3165_; lean_object* v___f_3166_; lean_object* v___f_3167_; lean_object* v___f_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v_toApplicative_3176_; lean_object* v_getEnv_3177_; lean_object* v_modifyEnv_3178_; lean_object* v___x_3180_; uint8_t v_isShared_3181_; uint8_t v_isSharedCheck_3216_; 
lean_inc_ref_n(v_inst_3154_, 8);
v___f_3164_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_3164_, 0, v_inst_3154_);
v___f_3165_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_3165_, 0, v_inst_3154_);
v___f_3166_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__6), 5, 1);
lean_closure_set(v___f_3166_, 0, v_inst_3154_);
v___f_3167_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_3167_, 0, v_inst_3154_);
v___f_3168_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__11), 5, 1);
lean_closure_set(v___f_3168_, 0, v_inst_3154_);
v___x_3169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3169_, 0, v___f_3164_);
lean_ctor_set(v___x_3169_, 1, v___f_3165_);
v___x_3170_ = lean_alloc_closure((void*)(l_OptionT_pure), 4, 2);
lean_closure_set(v___x_3170_, 0, lean_box(0));
lean_closure_set(v___x_3170_, 1, v_inst_3154_);
v___x_3171_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3171_, 0, v___x_3169_);
lean_ctor_set(v___x_3171_, 1, v___x_3170_);
lean_ctor_set(v___x_3171_, 2, v___f_3166_);
lean_ctor_set(v___x_3171_, 3, v___f_3167_);
lean_ctor_set(v___x_3171_, 4, v___f_3168_);
v___x_3172_ = lean_alloc_closure((void*)(l_OptionT_bind), 6, 2);
lean_closure_set(v___x_3172_, 0, lean_box(0));
lean_closure_set(v___x_3172_, 1, v_inst_3154_);
v___x_3173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3173_, 0, v___x_3171_);
lean_ctor_set(v___x_3173_, 1, v___x_3172_);
v___x_3174_ = lean_alloc_closure((void*)(l_OptionT_lift), 4, 2);
lean_closure_set(v___x_3174_, 0, lean_box(0));
lean_closure_set(v___x_3174_, 1, v_inst_3154_);
lean_inc_ref(v___x_3174_);
v___x_3175_ = l_Lean_instMonadResolveNameOfMonadLift___redArg(v___x_3174_, v_inst_3155_);
v_toApplicative_3176_ = lean_ctor_get(v_inst_3154_, 0);
lean_inc_ref(v_toApplicative_3176_);
v_getEnv_3177_ = lean_ctor_get(v_inst_3156_, 0);
v_modifyEnv_3178_ = lean_ctor_get(v_inst_3156_, 1);
v_isSharedCheck_3216_ = !lean_is_exclusive(v_inst_3156_);
if (v_isSharedCheck_3216_ == 0)
{
v___x_3180_ = v_inst_3156_;
v_isShared_3181_ = v_isSharedCheck_3216_;
goto v_resetjp_3179_;
}
else
{
lean_inc(v_modifyEnv_3178_);
lean_inc(v_getEnv_3177_);
lean_dec(v_inst_3156_);
v___x_3180_ = lean_box(0);
v_isShared_3181_ = v_isSharedCheck_3216_;
goto v_resetjp_3179_;
}
v_resetjp_3179_:
{
lean_object* v_toBind_3182_; lean_object* v_toPure_3183_; lean_object* v___f_3184_; lean_object* v___f_3185_; lean_object* v___f_3186_; lean_object* v___x_3187_; lean_object* v___x_3189_; 
v_toBind_3182_ = lean_ctor_get(v_inst_3154_, 1);
lean_inc_n(v_toBind_3182_, 2);
lean_dec_ref(v_inst_3154_);
v_toPure_3183_ = lean_ctor_get(v_toApplicative_3176_, 1);
lean_inc_n(v_toPure_3183_, 3);
lean_dec_ref(v_toApplicative_3176_);
lean_inc_ref(v___x_3174_);
v___f_3184_ = lean_alloc_closure((void*)(l_Lean_instMonadEnvOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3184_, 0, v_modifyEnv_3178_);
lean_closure_set(v___f_3184_, 1, v___x_3174_);
v___f_3185_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3185_, 0, v_toPure_3183_);
v___f_3186_ = lean_alloc_closure((void*)(l_OptionT_lift___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3186_, 0, v_toPure_3183_);
lean_inc_ref(v___f_3186_);
v___x_3187_ = lean_apply_4(v_toBind_3182_, lean_box(0), lean_box(0), v_getEnv_3177_, v___f_3186_);
if (v_isShared_3181_ == 0)
{
lean_ctor_set(v___x_3180_, 1, v___f_3184_);
lean_ctor_set(v___x_3180_, 0, v___x_3187_);
v___x_3189_ = v___x_3180_;
goto v_reusejp_3188_;
}
else
{
lean_object* v_reuseFailAlloc_3215_; 
v_reuseFailAlloc_3215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3215_, 0, v___x_3187_);
lean_ctor_set(v_reuseFailAlloc_3215_, 1, v___f_3184_);
v___x_3189_ = v_reuseFailAlloc_3215_;
goto v_reusejp_3188_;
}
v_reusejp_3188_:
{
lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___f_3192_; lean_object* v___y_3194_; 
lean_inc(v_toBind_3182_);
v___x_3190_ = lean_apply_4(v_toBind_3182_, lean_box(0), lean_box(0), v_inst_3157_, v___f_3186_);
lean_inc_ref(v___x_3174_);
v___x_3191_ = l_Lean_instMonadLogOfMonadLift___redArg(v___x_3174_, v_inst_3158_);
v___f_3192_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3192_, 0, v_inst_3159_);
lean_closure_set(v___f_3192_, 1, v___x_3174_);
if (lean_obj_tag(v_view_x3f_3162_) == 1)
{
lean_object* v_val_3202_; lean_object* v_imported_3203_; lean_object* v_ctx_3204_; lean_object* v_scopes_3205_; lean_object* v___x_3207_; uint8_t v_isShared_3208_; uint8_t v_isSharedCheck_3213_; 
v_val_3202_ = lean_ctor_get(v_view_x3f_3162_, 0);
lean_inc(v_val_3202_);
lean_dec_ref_known(v_view_x3f_3162_, 1);
v_imported_3203_ = lean_ctor_get(v_val_3202_, 1);
v_ctx_3204_ = lean_ctor_get(v_val_3202_, 2);
v_scopes_3205_ = lean_ctor_get(v_val_3202_, 3);
v_isSharedCheck_3213_ = !lean_is_exclusive(v_val_3202_);
if (v_isSharedCheck_3213_ == 0)
{
lean_object* v_unused_3214_; 
v_unused_3214_ = lean_ctor_get(v_val_3202_, 0);
lean_dec(v_unused_3214_);
v___x_3207_ = v_val_3202_;
v_isShared_3208_ = v_isSharedCheck_3213_;
goto v_resetjp_3206_;
}
else
{
lean_inc(v_scopes_3205_);
lean_inc(v_ctx_3204_);
lean_inc(v_imported_3203_);
lean_dec(v_val_3202_);
v___x_3207_ = lean_box(0);
v_isShared_3208_ = v_isSharedCheck_3213_;
goto v_resetjp_3206_;
}
v_resetjp_3206_:
{
lean_object* v___x_3210_; 
if (v_isShared_3208_ == 0)
{
lean_ctor_set(v___x_3207_, 0, v_n_3163_);
v___x_3210_ = v___x_3207_;
goto v_reusejp_3209_;
}
else
{
lean_object* v_reuseFailAlloc_3212_; 
v_reuseFailAlloc_3212_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3212_, 0, v_n_3163_);
lean_ctor_set(v_reuseFailAlloc_3212_, 1, v_imported_3203_);
lean_ctor_set(v_reuseFailAlloc_3212_, 2, v_ctx_3204_);
lean_ctor_set(v_reuseFailAlloc_3212_, 3, v_scopes_3205_);
v___x_3210_ = v_reuseFailAlloc_3212_;
goto v_reusejp_3209_;
}
v_reusejp_3209_:
{
lean_object* v___x_3211_; 
v___x_3211_ = l_Lean_MacroScopesView_review(v___x_3210_);
v___y_3194_ = v___x_3211_;
goto v___jp_3193_;
}
}
}
else
{
lean_dec(v_view_x3f_3162_);
v___y_3194_ = v_n_3163_;
goto v___jp_3193_;
}
v___jp_3193_:
{
lean_object* v___f_3195_; lean_object* v___f_3196_; lean_object* v___f_3197_; lean_object* v___f_3198_; uint8_t v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; 
lean_inc_n(v___y_3194_, 2);
lean_inc_n(v_toPure_3183_, 3);
v___f_3195_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__1), 3, 2);
lean_closure_set(v___f_3195_, 0, v_toPure_3183_);
lean_closure_set(v___f_3195_, 1, v___y_3194_);
lean_inc_n(v_toBind_3182_, 3);
v___f_3196_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_3196_, 0, v_toPure_3183_);
lean_closure_set(v___f_3196_, 1, v_toBind_3182_);
lean_closure_set(v___f_3196_, 2, v___f_3195_);
v___f_3197_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_3197_, 0, v_toPure_3183_);
lean_closure_set(v___f_3197_, 1, v_filter_3161_);
lean_closure_set(v___f_3197_, 2, v___y_3194_);
lean_closure_set(v___f_3197_, 3, v_toBind_3182_);
lean_closure_set(v___f_3197_, 4, v___f_3185_);
lean_closure_set(v___f_3197_, 5, v___f_3196_);
v___f_3198_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4___boxed), 5, 4);
lean_closure_set(v___f_3198_, 0, v_toPure_3183_);
lean_closure_set(v___f_3198_, 1, v_n_u2080_3160_);
lean_closure_set(v___f_3198_, 2, v_toBind_3182_);
lean_closure_set(v___f_3198_, 3, v___f_3197_);
v___x_3199_ = 0;
v___x_3200_ = l_Lean_resolveGlobalName___redArg(v___x_3173_, v___x_3175_, v___x_3189_, v___x_3190_, v___x_3191_, v___f_3192_, v___y_3194_, v___x_3199_);
v___x_3201_ = lean_apply_4(v_toBind_3182_, lean_box(0), lean_box(0), v___x_3200_, v___f_3198_);
return v___x_3201_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve(lean_object* v_m_3217_, lean_object* v_inst_3218_, lean_object* v_inst_3219_, lean_object* v_inst_3220_, lean_object* v_inst_3221_, lean_object* v_inst_3222_, lean_object* v_inst_3223_, lean_object* v_n_u2080_3224_, lean_object* v_filter_3225_, lean_object* v_view_x3f_3226_, lean_object* v_n_3227_){
_start:
{
lean_object* v___x_3228_; 
v___x_3228_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(v_inst_3218_, v_inst_3219_, v_inst_3220_, v_inst_3221_, v_inst_3222_, v_inst_3223_, v_n_u2080_3224_, v_filter_3225_, v_view_x3f_3226_, v_n_3227_);
return v___x_3228_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0(lean_object* v_toPure_3233_, lean_object* v_____x_3234_){
_start:
{
if (lean_obj_tag(v_____x_3234_) == 0)
{
lean_object* v___x_3235_; lean_object* v___x_3236_; 
v___x_3235_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__1));
v___x_3236_ = lean_apply_2(v_toPure_3233_, lean_box(0), v___x_3235_);
return v___x_3236_;
}
else
{
lean_object* v___x_3237_; 
v___x_3237_ = lean_apply_2(v_toPure_3233_, lean_box(0), v_____x_3234_);
return v___x_3237_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__1(lean_object* v_toPure_3238_, lean_object* v_____do__lift_3239_){
_start:
{
if (lean_obj_tag(v_____do__lift_3239_) == 0)
{
lean_object* v___x_3240_; lean_object* v___x_3241_; 
v___x_3240_ = lean_box(0);
v___x_3241_ = lean_apply_2(v_toPure_3238_, lean_box(0), v___x_3240_);
return v___x_3241_;
}
else
{
lean_object* v_val_3242_; lean_object* v___x_3244_; uint8_t v_isShared_3245_; uint8_t v_isSharedCheck_3251_; 
v_val_3242_ = lean_ctor_get(v_____do__lift_3239_, 0);
v_isSharedCheck_3251_ = !lean_is_exclusive(v_____do__lift_3239_);
if (v_isSharedCheck_3251_ == 0)
{
v___x_3244_ = v_____do__lift_3239_;
v_isShared_3245_ = v_isSharedCheck_3251_;
goto v_resetjp_3243_;
}
else
{
lean_inc(v_val_3242_);
lean_dec(v_____do__lift_3239_);
v___x_3244_ = lean_box(0);
v_isShared_3245_ = v_isSharedCheck_3251_;
goto v_resetjp_3243_;
}
v_resetjp_3243_:
{
lean_object* v___x_3246_; lean_object* v___x_3248_; 
v___x_3246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3246_, 0, v_val_3242_);
if (v_isShared_3245_ == 0)
{
lean_ctor_set(v___x_3244_, 0, v___x_3246_);
v___x_3248_ = v___x_3244_;
goto v_reusejp_3247_;
}
else
{
lean_object* v_reuseFailAlloc_3250_; 
v_reuseFailAlloc_3250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3250_, 0, v___x_3246_);
v___x_3248_ = v_reuseFailAlloc_3250_;
goto v_reusejp_3247_;
}
v_reusejp_3247_:
{
lean_object* v___x_3249_; 
v___x_3249_ = lean_apply_2(v_toPure_3238_, lean_box(0), v___x_3248_);
return v___x_3249_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__2(lean_object* v_toPure_3252_, lean_object* v___x_3253_, lean_object* v_____do__lift_3254_){
_start:
{
if (lean_obj_tag(v_____do__lift_3254_) == 0)
{
lean_object* v___x_3255_; 
v___x_3255_ = lean_apply_2(v_toPure_3252_, lean_box(0), v___x_3253_);
return v___x_3255_;
}
else
{
lean_object* v_val_3256_; lean_object* v_fst_3257_; lean_object* v___x_3258_; 
lean_dec(v___x_3253_);
v_val_3256_ = lean_ctor_get(v_____do__lift_3254_, 0);
lean_inc(v_val_3256_);
lean_dec_ref_known(v_____do__lift_3254_, 1);
v_fst_3257_ = lean_ctor_get(v_val_3256_, 0);
lean_inc(v_fst_3257_);
lean_dec(v_val_3256_);
v___x_3258_ = lean_apply_2(v_toPure_3252_, lean_box(0), v_fst_3257_);
return v___x_3258_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__3(lean_object* v_toPure_3259_, lean_object* v___x_3260_, lean_object* v___x_3261_, lean_object* v_____do__lift_3262_){
_start:
{
if (lean_obj_tag(v_____do__lift_3262_) == 0)
{
lean_object* v___x_3263_; lean_object* v___x_3264_; 
lean_dec(v___x_3261_);
lean_dec(v___x_3260_);
v___x_3263_ = lean_box(0);
v___x_3264_ = lean_apply_2(v_toPure_3259_, lean_box(0), v___x_3263_);
return v___x_3264_;
}
else
{
lean_object* v_val_3265_; lean_object* v___x_3267_; uint8_t v_isShared_3268_; uint8_t v_isSharedCheck_3296_; 
v_val_3265_ = lean_ctor_get(v_____do__lift_3262_, 0);
v_isSharedCheck_3296_ = !lean_is_exclusive(v_____do__lift_3262_);
if (v_isSharedCheck_3296_ == 0)
{
v___x_3267_ = v_____do__lift_3262_;
v_isShared_3268_ = v_isSharedCheck_3296_;
goto v_resetjp_3266_;
}
else
{
lean_inc(v_val_3265_);
lean_dec(v_____do__lift_3262_);
v___x_3267_ = lean_box(0);
v_isShared_3268_ = v_isSharedCheck_3296_;
goto v_resetjp_3266_;
}
v_resetjp_3266_:
{
if (lean_obj_tag(v_val_3265_) == 0)
{
lean_object* v_a_3269_; lean_object* v___x_3271_; uint8_t v_isShared_3272_; uint8_t v_isSharedCheck_3282_; 
lean_dec(v___x_3261_);
v_a_3269_ = lean_ctor_get(v_val_3265_, 0);
v_isSharedCheck_3282_ = !lean_is_exclusive(v_val_3265_);
if (v_isSharedCheck_3282_ == 0)
{
v___x_3271_ = v_val_3265_;
v_isShared_3272_ = v_isSharedCheck_3282_;
goto v_resetjp_3270_;
}
else
{
lean_inc(v_a_3269_);
lean_dec(v_val_3265_);
v___x_3271_ = lean_box(0);
v_isShared_3272_ = v_isSharedCheck_3282_;
goto v_resetjp_3270_;
}
v_resetjp_3270_:
{
lean_object* v___x_3274_; 
if (v_isShared_3268_ == 0)
{
lean_ctor_set(v___x_3267_, 0, v_a_3269_);
v___x_3274_ = v___x_3267_;
goto v_reusejp_3273_;
}
else
{
lean_object* v_reuseFailAlloc_3281_; 
v_reuseFailAlloc_3281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3281_, 0, v_a_3269_);
v___x_3274_ = v_reuseFailAlloc_3281_;
goto v_reusejp_3273_;
}
v_reusejp_3273_:
{
lean_object* v___x_3275_; lean_object* v___x_3277_; 
v___x_3275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3275_, 0, v___x_3274_);
lean_ctor_set(v___x_3275_, 1, v___x_3260_);
if (v_isShared_3272_ == 0)
{
lean_ctor_set(v___x_3271_, 0, v___x_3275_);
v___x_3277_ = v___x_3271_;
goto v_reusejp_3276_;
}
else
{
lean_object* v_reuseFailAlloc_3280_; 
v_reuseFailAlloc_3280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3280_, 0, v___x_3275_);
v___x_3277_ = v_reuseFailAlloc_3280_;
goto v_reusejp_3276_;
}
v_reusejp_3276_:
{
lean_object* v___x_3278_; lean_object* v___x_3279_; 
v___x_3278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3278_, 0, v___x_3277_);
v___x_3279_ = lean_apply_2(v_toPure_3259_, lean_box(0), v___x_3278_);
return v___x_3279_;
}
}
}
}
else
{
lean_object* v___x_3284_; uint8_t v_isShared_3285_; uint8_t v_isSharedCheck_3294_; 
v_isSharedCheck_3294_ = !lean_is_exclusive(v_val_3265_);
if (v_isSharedCheck_3294_ == 0)
{
lean_object* v_unused_3295_; 
v_unused_3295_ = lean_ctor_get(v_val_3265_, 0);
lean_dec(v_unused_3295_);
v___x_3284_ = v_val_3265_;
v_isShared_3285_ = v_isSharedCheck_3294_;
goto v_resetjp_3283_;
}
else
{
lean_dec(v_val_3265_);
v___x_3284_ = lean_box(0);
v_isShared_3285_ = v_isSharedCheck_3294_;
goto v_resetjp_3283_;
}
v_resetjp_3283_:
{
lean_object* v___x_3286_; lean_object* v___x_3288_; 
v___x_3286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3286_, 0, v___x_3261_);
lean_ctor_set(v___x_3286_, 1, v___x_3260_);
if (v_isShared_3285_ == 0)
{
lean_ctor_set(v___x_3284_, 0, v___x_3286_);
v___x_3288_ = v___x_3284_;
goto v_reusejp_3287_;
}
else
{
lean_object* v_reuseFailAlloc_3293_; 
v_reuseFailAlloc_3293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3293_, 0, v___x_3286_);
v___x_3288_ = v_reuseFailAlloc_3293_;
goto v_reusejp_3287_;
}
v_reusejp_3287_:
{
lean_object* v___x_3290_; 
if (v_isShared_3268_ == 0)
{
lean_ctor_set(v___x_3267_, 0, v___x_3288_);
v___x_3290_ = v___x_3267_;
goto v_reusejp_3289_;
}
else
{
lean_object* v_reuseFailAlloc_3292_; 
v_reuseFailAlloc_3292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3292_, 0, v___x_3288_);
v___x_3290_ = v_reuseFailAlloc_3292_;
goto v_reusejp_3289_;
}
v_reusejp_3289_:
{
lean_object* v___x_3291_; 
v___x_3291_ = lean_apply_2(v_toPure_3259_, lean_box(0), v___x_3290_);
return v___x_3291_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4(lean_object* v_toPure_3297_, lean_object* v___x_3298_, lean_object* v_inst_3299_, lean_object* v_inst_3300_, lean_object* v_inst_3301_, lean_object* v_inst_3302_, lean_object* v_inst_3303_, lean_object* v_inst_3304_, lean_object* v_n_u2080_3305_, lean_object* v_filter_3306_, lean_object* v_view_x3f_3307_, lean_object* v_toBind_3308_, lean_object* v___f_3309_, lean_object* v___f_3310_, lean_object* v_a_3311_, lean_object* v_x_3312_, lean_object* v___y_3313_){
_start:
{
lean_object* v_snd_3314_; lean_object* v___x_3315_; lean_object* v___f_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; 
v_snd_3314_ = lean_ctor_get(v___y_3313_, 1);
lean_inc(v_snd_3314_);
lean_dec_ref(v___y_3313_);
v___x_3315_ = l_Lean_Name_appendCore(v_a_3311_, v_snd_3314_);
lean_inc(v___x_3315_);
v___f_3316_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__3), 4, 3);
lean_closure_set(v___f_3316_, 0, v_toPure_3297_);
lean_closure_set(v___f_3316_, 1, v___x_3315_);
lean_closure_set(v___f_3316_, 2, v___x_3298_);
v___x_3317_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(v_inst_3299_, v_inst_3300_, v_inst_3301_, v_inst_3302_, v_inst_3303_, v_inst_3304_, v_n_u2080_3305_, v_filter_3306_, v_view_x3f_3307_, v___x_3315_);
lean_inc_n(v_toBind_3308_, 2);
v___x_3318_ = lean_apply_4(v_toBind_3308_, lean_box(0), lean_box(0), v___x_3317_, v___f_3309_);
v___x_3319_ = lean_apply_4(v_toBind_3308_, lean_box(0), lean_box(0), v___x_3318_, v___f_3310_);
v___x_3320_ = lean_apply_4(v_toBind_3308_, lean_box(0), lean_box(0), v___x_3319_, v___f_3316_);
return v___x_3320_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4___boxed(lean_object** _args){
lean_object* v_toPure_3321_ = _args[0];
lean_object* v___x_3322_ = _args[1];
lean_object* v_inst_3323_ = _args[2];
lean_object* v_inst_3324_ = _args[3];
lean_object* v_inst_3325_ = _args[4];
lean_object* v_inst_3326_ = _args[5];
lean_object* v_inst_3327_ = _args[6];
lean_object* v_inst_3328_ = _args[7];
lean_object* v_n_u2080_3329_ = _args[8];
lean_object* v_filter_3330_ = _args[9];
lean_object* v_view_x3f_3331_ = _args[10];
lean_object* v_toBind_3332_ = _args[11];
lean_object* v___f_3333_ = _args[12];
lean_object* v___f_3334_ = _args[13];
lean_object* v_a_3335_ = _args[14];
lean_object* v_x_3336_ = _args[15];
lean_object* v___y_3337_ = _args[16];
_start:
{
lean_object* v_res_3338_; 
v_res_3338_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4(v_toPure_3321_, v___x_3322_, v_inst_3323_, v_inst_3324_, v_inst_3325_, v_inst_3326_, v_inst_3327_, v_inst_3328_, v_n_u2080_3329_, v_filter_3330_, v_view_x3f_3331_, v_toBind_3332_, v___f_3333_, v___f_3334_, v_a_3335_, v_x_3336_, v___y_3337_);
lean_dec(v_a_3335_);
return v_res_3338_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5(lean_object* v_toPure_3342_, lean_object* v_n_3343_, lean_object* v_inst_3344_, lean_object* v_inst_3345_, lean_object* v_inst_3346_, lean_object* v_inst_3347_, lean_object* v_inst_3348_, lean_object* v_inst_3349_, lean_object* v_n_u2080_3350_, lean_object* v_filter_3351_, lean_object* v_view_x3f_3352_, lean_object* v_toBind_3353_, lean_object* v___f_3354_, lean_object* v___f_3355_, lean_object* v___x_3356_, lean_object* v_____do__lift_3357_){
_start:
{
if (lean_obj_tag(v_____do__lift_3357_) == 0)
{
lean_object* v___x_3358_; lean_object* v___x_3359_; 
lean_dec_ref(v___x_3356_);
lean_dec(v___f_3355_);
lean_dec(v___f_3354_);
lean_dec(v_toBind_3353_);
lean_dec(v_view_x3f_3352_);
lean_dec(v_filter_3351_);
lean_dec(v_n_u2080_3350_);
lean_dec(v_inst_3349_);
lean_dec_ref(v_inst_3348_);
lean_dec(v_inst_3347_);
lean_dec_ref(v_inst_3346_);
lean_dec_ref(v_inst_3345_);
lean_dec_ref(v_inst_3344_);
lean_dec(v_n_3343_);
v___x_3358_ = lean_box(0);
v___x_3359_ = lean_apply_2(v_toPure_3342_, lean_box(0), v___x_3358_);
return v___x_3359_;
}
else
{
lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___f_3363_; lean_object* v___f_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; 
v___x_3360_ = l_Lean_privateToUserName(v_n_3343_);
v___x_3361_ = l_Lean_Name_componentsRev(v___x_3360_);
v___x_3362_ = lean_box(0);
lean_inc(v_toPure_3342_);
v___f_3363_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__2), 3, 2);
lean_closure_set(v___f_3363_, 0, v_toPure_3342_);
lean_closure_set(v___f_3363_, 1, v___x_3362_);
lean_inc(v_toBind_3353_);
v___f_3364_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4___boxed), 17, 14);
lean_closure_set(v___f_3364_, 0, v_toPure_3342_);
lean_closure_set(v___f_3364_, 1, v___x_3362_);
lean_closure_set(v___f_3364_, 2, v_inst_3344_);
lean_closure_set(v___f_3364_, 3, v_inst_3345_);
lean_closure_set(v___f_3364_, 4, v_inst_3346_);
lean_closure_set(v___f_3364_, 5, v_inst_3347_);
lean_closure_set(v___f_3364_, 6, v_inst_3348_);
lean_closure_set(v___f_3364_, 7, v_inst_3349_);
lean_closure_set(v___f_3364_, 8, v_n_u2080_3350_);
lean_closure_set(v___f_3364_, 9, v_filter_3351_);
lean_closure_set(v___f_3364_, 10, v_view_x3f_3352_);
lean_closure_set(v___f_3364_, 11, v_toBind_3353_);
lean_closure_set(v___f_3364_, 12, v___f_3354_);
lean_closure_set(v___f_3364_, 13, v___f_3355_);
v___x_3365_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___closed__0));
v___x_3366_ = l_List_forIn_x27_loop___redArg(v___x_3356_, v___f_3364_, v___x_3361_, v___x_3365_);
lean_dec(v___x_3361_);
v___x_3367_ = lean_apply_4(v_toBind_3353_, lean_box(0), lean_box(0), v___x_3366_, v___f_3363_);
return v___x_3367_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___boxed(lean_object* v_toPure_3368_, lean_object* v_n_3369_, lean_object* v_inst_3370_, lean_object* v_inst_3371_, lean_object* v_inst_3372_, lean_object* v_inst_3373_, lean_object* v_inst_3374_, lean_object* v_inst_3375_, lean_object* v_n_u2080_3376_, lean_object* v_filter_3377_, lean_object* v_view_x3f_3378_, lean_object* v_toBind_3379_, lean_object* v___f_3380_, lean_object* v___f_3381_, lean_object* v___x_3382_, lean_object* v_____do__lift_3383_){
_start:
{
lean_object* v_res_3384_; 
v_res_3384_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5(v_toPure_3368_, v_n_3369_, v_inst_3370_, v_inst_3371_, v_inst_3372_, v_inst_3373_, v_inst_3374_, v_inst_3375_, v_n_u2080_3376_, v_filter_3377_, v_view_x3f_3378_, v_toBind_3379_, v___f_3380_, v___f_3381_, v___x_3382_, v_____do__lift_3383_);
lean_dec(v_____do__lift_3383_);
return v_res_3384_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg(lean_object* v_inst_3385_, lean_object* v_inst_3386_, lean_object* v_inst_3387_, lean_object* v_inst_3388_, lean_object* v_inst_3389_, lean_object* v_inst_3390_, lean_object* v_n_u2080_3391_, lean_object* v_filter_3392_, lean_object* v_view_x3f_3393_, lean_object* v_n_3394_){
_start:
{
lean_object* v___f_3395_; lean_object* v___f_3396_; lean_object* v___f_3397_; lean_object* v___f_3398_; lean_object* v___f_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___y_3406_; uint8_t v___x_3414_; 
lean_inc_ref_n(v_inst_3385_, 7);
v___f_3395_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_3395_, 0, v_inst_3385_);
v___f_3396_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_3396_, 0, v_inst_3385_);
v___f_3397_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__6), 5, 1);
lean_closure_set(v___f_3397_, 0, v_inst_3385_);
v___f_3398_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_3398_, 0, v_inst_3385_);
v___f_3399_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__11), 5, 1);
lean_closure_set(v___f_3399_, 0, v_inst_3385_);
v___x_3400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3400_, 0, v___f_3395_);
lean_ctor_set(v___x_3400_, 1, v___f_3396_);
v___x_3401_ = lean_alloc_closure((void*)(l_OptionT_pure), 4, 2);
lean_closure_set(v___x_3401_, 0, lean_box(0));
lean_closure_set(v___x_3401_, 1, v_inst_3385_);
v___x_3402_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3402_, 0, v___x_3400_);
lean_ctor_set(v___x_3402_, 1, v___x_3401_);
lean_ctor_set(v___x_3402_, 2, v___f_3397_);
lean_ctor_set(v___x_3402_, 3, v___f_3398_);
lean_ctor_set(v___x_3402_, 4, v___f_3399_);
v___x_3403_ = lean_alloc_closure((void*)(l_OptionT_bind), 6, 2);
lean_closure_set(v___x_3403_, 0, lean_box(0));
lean_closure_set(v___x_3403_, 1, v_inst_3385_);
v___x_3404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3404_, 0, v___x_3402_);
lean_ctor_set(v___x_3404_, 1, v___x_3403_);
v___x_3414_ = l_Lean_Name_hasMacroScopes(v_n_3394_);
if (v___x_3414_ == 0)
{
lean_object* v_toApplicative_3415_; lean_object* v_toPure_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; 
v_toApplicative_3415_ = lean_ctor_get(v_inst_3385_, 0);
v_toPure_3416_ = lean_ctor_get(v_toApplicative_3415_, 1);
v___x_3417_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0));
lean_inc(v_toPure_3416_);
v___x_3418_ = lean_apply_2(v_toPure_3416_, lean_box(0), v___x_3417_);
v___y_3406_ = v___x_3418_;
goto v___jp_3405_;
}
else
{
lean_object* v_toApplicative_3419_; lean_object* v_toPure_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; 
v_toApplicative_3419_ = lean_ctor_get(v_inst_3385_, 0);
v_toPure_3420_ = lean_ctor_get(v_toApplicative_3419_, 1);
v___x_3421_ = lean_box(0);
lean_inc(v_toPure_3420_);
v___x_3422_ = lean_apply_2(v_toPure_3420_, lean_box(0), v___x_3421_);
v___y_3406_ = v___x_3422_;
goto v___jp_3405_;
}
v___jp_3405_:
{
lean_object* v_toApplicative_3407_; lean_object* v_toBind_3408_; lean_object* v_toPure_3409_; lean_object* v___f_3410_; lean_object* v___f_3411_; lean_object* v___f_3412_; lean_object* v___x_3413_; 
v_toApplicative_3407_ = lean_ctor_get(v_inst_3385_, 0);
v_toBind_3408_ = lean_ctor_get(v_inst_3385_, 1);
lean_inc_n(v_toBind_3408_, 2);
v_toPure_3409_ = lean_ctor_get(v_toApplicative_3407_, 1);
lean_inc_n(v_toPure_3409_, 3);
v___f_3410_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3410_, 0, v_toPure_3409_);
v___f_3411_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__1), 2, 1);
lean_closure_set(v___f_3411_, 0, v_toPure_3409_);
v___f_3412_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___boxed), 16, 15);
lean_closure_set(v___f_3412_, 0, v_toPure_3409_);
lean_closure_set(v___f_3412_, 1, v_n_3394_);
lean_closure_set(v___f_3412_, 2, v_inst_3385_);
lean_closure_set(v___f_3412_, 3, v_inst_3386_);
lean_closure_set(v___f_3412_, 4, v_inst_3387_);
lean_closure_set(v___f_3412_, 5, v_inst_3388_);
lean_closure_set(v___f_3412_, 6, v_inst_3389_);
lean_closure_set(v___f_3412_, 7, v_inst_3390_);
lean_closure_set(v___f_3412_, 8, v_n_u2080_3391_);
lean_closure_set(v___f_3412_, 9, v_filter_3392_);
lean_closure_set(v___f_3412_, 10, v_view_x3f_3393_);
lean_closure_set(v___f_3412_, 11, v_toBind_3408_);
lean_closure_set(v___f_3412_, 12, v___f_3411_);
lean_closure_set(v___f_3412_, 13, v___f_3410_);
lean_closure_set(v___f_3412_, 14, v___x_3404_);
v___x_3413_ = lean_apply_4(v_toBind_3408_, lean_box(0), lean_box(0), v___y_3406_, v___f_3412_);
return v___x_3413_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore(lean_object* v_m_3423_, lean_object* v_inst_3424_, lean_object* v_inst_3425_, lean_object* v_inst_3426_, lean_object* v_inst_3427_, lean_object* v_inst_3428_, lean_object* v_inst_3429_, lean_object* v_n_u2080_3430_, lean_object* v_filter_3431_, lean_object* v_view_x3f_3432_, lean_object* v_n_3433_){
_start:
{
lean_object* v___x_3434_; 
v___x_3434_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg(v_inst_3424_, v_inst_3425_, v_inst_3426_, v_inst_3427_, v_inst_3428_, v_inst_3429_, v_n_u2080_3430_, v_filter_3431_, v_view_x3f_3432_, v_n_3433_);
return v___x_3434_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__0(lean_object* v_n_u2081_3435_, lean_object* v_x1_3436_, lean_object* v_x2_3437_){
_start:
{
lean_object* v___x_3438_; lean_object* v___x_3439_; uint8_t v___x_3440_; 
v___x_3438_ = l_Lean_Name_getPrefix(v_x2_3437_);
v___x_3439_ = l_Lean_Name_getPrefix(v_n_u2081_3435_);
v___x_3440_ = l_Lean_Name_isPrefixOf(v___x_3438_, v___x_3439_);
lean_dec(v___x_3439_);
lean_dec(v___x_3438_);
if (v___x_3440_ == 0)
{
lean_dec(v_x2_3437_);
return v_x1_3436_;
}
else
{
lean_object* v___x_3441_; 
v___x_3441_ = lean_array_push(v_x1_3436_, v_x2_3437_);
return v___x_3441_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__0___boxed(lean_object* v_n_u2081_3442_, lean_object* v_x1_3443_, lean_object* v_x2_3444_){
_start:
{
lean_object* v_res_3445_; 
v_res_3445_ = l_Lean_unresolveNameGlobal_x3f___redArg___lam__0(v_n_u2081_3442_, v_x1_3443_, v_x2_3444_);
lean_dec(v_n_u2081_3442_);
return v_res_3445_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__1(lean_object* v_view_3446_, lean_object* v_n_u2081_3447_, lean_object* v_inst_3448_, lean_object* v_inst_3449_, lean_object* v_inst_3450_, lean_object* v_inst_3451_, lean_object* v_inst_3452_, lean_object* v_inst_3453_, lean_object* v_n_u2080_3454_, lean_object* v_filter_3455_, lean_object* v_toPure_3456_, lean_object* v_____do__lift_3457_){
_start:
{
if (lean_obj_tag(v_____do__lift_3457_) == 0)
{
lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; 
lean_dec(v_toPure_3456_);
v___x_3458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3458_, 0, v_view_3446_);
v___x_3459_ = l_Lean_rootNamespace;
v___x_3460_ = l_Lean_Name_append(v___x_3459_, v_n_u2081_3447_);
v___x_3461_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg(v_inst_3448_, v_inst_3449_, v_inst_3450_, v_inst_3451_, v_inst_3452_, v_inst_3453_, v_n_u2080_3454_, v_filter_3455_, v___x_3458_, v___x_3460_);
return v___x_3461_;
}
else
{
lean_object* v___x_3462_; 
lean_dec(v_filter_3455_);
lean_dec(v_n_u2080_3454_);
lean_dec(v_inst_3453_);
lean_dec_ref(v_inst_3452_);
lean_dec(v_inst_3451_);
lean_dec_ref(v_inst_3450_);
lean_dec_ref(v_inst_3449_);
lean_dec_ref(v_inst_3448_);
lean_dec(v_n_u2081_3447_);
lean_dec_ref(v_view_3446_);
v___x_3462_ = lean_apply_2(v_toPure_3456_, lean_box(0), v_____do__lift_3457_);
return v___x_3462_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__2(lean_object* v_toPure_3463_, lean_object* v_inst_3464_, lean_object* v_inst_3465_, lean_object* v_inst_3466_, lean_object* v_inst_3467_, lean_object* v_inst_3468_, lean_object* v_inst_3469_, lean_object* v_n_u2080_3470_, lean_object* v_filter_3471_, lean_object* v_toBind_3472_, lean_object* v___f_3473_, uint8_t v_allowHorizAliases_3474_, lean_object* v___f_3475_, lean_object* v_____do__lift_3476_){
_start:
{
lean_object* v_aliases_3478_; 
if (lean_obj_tag(v_____do__lift_3476_) == 0)
{
lean_object* v___x_3485_; lean_object* v___x_3486_; 
lean_dec_ref(v___f_3475_);
lean_dec(v___f_3473_);
lean_dec(v_toBind_3472_);
lean_dec(v_filter_3471_);
lean_dec(v_n_u2080_3470_);
lean_dec(v_inst_3469_);
lean_dec_ref(v_inst_3468_);
lean_dec(v_inst_3467_);
lean_dec_ref(v_inst_3466_);
lean_dec_ref(v_inst_3465_);
lean_dec_ref(v_inst_3464_);
v___x_3485_ = lean_box(0);
v___x_3486_ = lean_apply_2(v_toPure_3463_, lean_box(0), v___x_3485_);
return v___x_3486_;
}
else
{
lean_object* v_val_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; 
lean_dec(v_toPure_3463_);
v_val_3487_ = lean_ctor_get(v_____do__lift_3476_, 0);
lean_inc(v_val_3487_);
lean_dec_ref_known(v_____do__lift_3476_, 1);
lean_inc(v_n_u2080_3470_);
v___x_3488_ = l_Lean_getRevAliases(v_val_3487_, v_n_u2080_3470_);
v___x_3489_ = lean_array_mk(v___x_3488_);
if (v_allowHorizAliases_3474_ == 0)
{
lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; uint8_t v___x_3494_; 
v___x_3490_ = lean_unsigned_to_nat(0u);
v___x_3491_ = lean_array_get_size(v___x_3489_);
v___x_3492_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__1));
v___x_3493_ = ((lean_object*)(l_Lean_resolveLocalName___redArg___lam__3___closed__9));
v___x_3494_ = lean_nat_dec_lt(v___x_3490_, v___x_3491_);
if (v___x_3494_ == 0)
{
lean_dec_ref(v___x_3489_);
lean_dec_ref(v___f_3475_);
v_aliases_3478_ = v___x_3492_;
goto v___jp_3477_;
}
else
{
uint8_t v___x_3495_; 
v___x_3495_ = lean_nat_dec_le(v___x_3491_, v___x_3491_);
if (v___x_3495_ == 0)
{
if (v___x_3494_ == 0)
{
lean_dec_ref(v___x_3489_);
lean_dec_ref(v___f_3475_);
v_aliases_3478_ = v___x_3492_;
goto v___jp_3477_;
}
else
{
size_t v___x_3496_; size_t v___x_3497_; lean_object* v___x_3498_; 
v___x_3496_ = ((size_t)0ULL);
v___x_3497_ = lean_usize_of_nat(v___x_3491_);
v___x_3498_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3493_, v___f_3475_, v___x_3489_, v___x_3496_, v___x_3497_, v___x_3492_);
v_aliases_3478_ = v___x_3498_;
goto v___jp_3477_;
}
}
else
{
size_t v___x_3499_; size_t v___x_3500_; lean_object* v___x_3501_; 
v___x_3499_ = ((size_t)0ULL);
v___x_3500_ = lean_usize_of_nat(v___x_3491_);
v___x_3501_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3493_, v___f_3475_, v___x_3489_, v___x_3499_, v___x_3500_, v___x_3492_);
v_aliases_3478_ = v___x_3501_;
goto v___jp_3477_;
}
}
}
else
{
lean_dec_ref(v___f_3475_);
v_aliases_3478_ = v___x_3489_;
goto v___jp_3477_;
}
}
v___jp_3477_:
{
lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; 
lean_inc_ref(v_inst_3464_);
v___x_3479_ = l_OptionT_instAlternative___redArg(v_inst_3464_);
v___x_3480_ = lean_box(0);
v___x_3481_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore), 11, 10);
lean_closure_set(v___x_3481_, 0, lean_box(0));
lean_closure_set(v___x_3481_, 1, v_inst_3464_);
lean_closure_set(v___x_3481_, 2, v_inst_3465_);
lean_closure_set(v___x_3481_, 3, v_inst_3466_);
lean_closure_set(v___x_3481_, 4, v_inst_3467_);
lean_closure_set(v___x_3481_, 5, v_inst_3468_);
lean_closure_set(v___x_3481_, 6, v_inst_3469_);
lean_closure_set(v___x_3481_, 7, v_n_u2080_3470_);
lean_closure_set(v___x_3481_, 8, v_filter_3471_);
lean_closure_set(v___x_3481_, 9, v___x_3480_);
v___x_3482_ = lean_unsigned_to_nat(0u);
v___x_3483_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go(lean_box(0), lean_box(0), lean_box(0), v___x_3479_, v___x_3481_, v_aliases_3478_, v___x_3482_);
v___x_3484_ = lean_apply_4(v_toBind_3472_, lean_box(0), lean_box(0), v___x_3483_, v___f_3473_);
return v___x_3484_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__2___boxed(lean_object* v_toPure_3502_, lean_object* v_inst_3503_, lean_object* v_inst_3504_, lean_object* v_inst_3505_, lean_object* v_inst_3506_, lean_object* v_inst_3507_, lean_object* v_inst_3508_, lean_object* v_n_u2080_3509_, lean_object* v_filter_3510_, lean_object* v_toBind_3511_, lean_object* v___f_3512_, lean_object* v_allowHorizAliases_3513_, lean_object* v___f_3514_, lean_object* v_____do__lift_3515_){
_start:
{
uint8_t v_allowHorizAliases_boxed_3516_; lean_object* v_res_3517_; 
v_allowHorizAliases_boxed_3516_ = lean_unbox(v_allowHorizAliases_3513_);
v_res_3517_ = l_Lean_unresolveNameGlobal_x3f___redArg___lam__2(v_toPure_3502_, v_inst_3503_, v_inst_3504_, v_inst_3505_, v_inst_3506_, v_inst_3507_, v_inst_3508_, v_n_u2080_3509_, v_filter_3510_, v_toBind_3511_, v___f_3512_, v_allowHorizAliases_boxed_3516_, v___f_3514_, v_____do__lift_3515_);
return v_res_3517_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__3(lean_object* v_toPure_3518_, lean_object* v_____do__lift_3519_){
_start:
{
lean_object* v___x_3520_; lean_object* v___x_3521_; 
v___x_3520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3520_, 0, v_____do__lift_3519_);
v___x_3521_ = lean_apply_2(v_toPure_3518_, lean_box(0), v___x_3520_);
return v___x_3521_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__4(lean_object* v_n_u2081_3522_, lean_object* v_inst_3523_, lean_object* v_inst_3524_, lean_object* v_inst_3525_, lean_object* v_inst_3526_, lean_object* v_inst_3527_, lean_object* v_inst_3528_, lean_object* v_n_u2080_3529_, lean_object* v_filter_3530_, lean_object* v___x_3531_, lean_object* v_toPure_3532_, lean_object* v_____do__lift_3533_){
_start:
{
if (lean_obj_tag(v_____do__lift_3533_) == 0)
{
lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; 
lean_dec(v_toPure_3532_);
v___x_3534_ = l_Lean_rootNamespace;
v___x_3535_ = l_Lean_Name_append(v___x_3534_, v_n_u2081_3522_);
v___x_3536_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(v_inst_3523_, v_inst_3524_, v_inst_3525_, v_inst_3526_, v_inst_3527_, v_inst_3528_, v_n_u2080_3529_, v_filter_3530_, v___x_3531_, v___x_3535_);
return v___x_3536_;
}
else
{
lean_object* v___x_3537_; 
lean_dec(v___x_3531_);
lean_dec(v_filter_3530_);
lean_dec(v_n_u2080_3529_);
lean_dec(v_inst_3528_);
lean_dec_ref(v_inst_3527_);
lean_dec(v_inst_3526_);
lean_dec_ref(v_inst_3525_);
lean_dec_ref(v_inst_3524_);
lean_dec_ref(v_inst_3523_);
lean_dec(v_n_u2081_3522_);
v___x_3537_ = lean_apply_2(v_toPure_3532_, lean_box(0), v_____do__lift_3533_);
return v___x_3537_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg(lean_object* v_inst_3538_, lean_object* v_inst_3539_, lean_object* v_inst_3540_, lean_object* v_inst_3541_, lean_object* v_inst_3542_, lean_object* v_inst_3543_, lean_object* v_n_u2080_3544_, uint8_t v_fullNames_3545_, uint8_t v_allowHorizAliases_3546_, lean_object* v_filter_3547_){
_start:
{
lean_object* v_view_3548_; lean_object* v_name_3549_; lean_object* v_n_u2081_3550_; 
lean_inc(v_n_u2080_3544_);
v_view_3548_ = l_Lean_extractMacroScopes(v_n_u2080_3544_);
v_name_3549_ = lean_ctor_get(v_view_3548_, 0);
lean_inc(v_name_3549_);
v_n_u2081_3550_ = l_Lean_privateToUserName(v_name_3549_);
if (v_fullNames_3545_ == 0)
{
lean_object* v_toApplicative_3551_; lean_object* v_getEnv_3552_; lean_object* v_toBind_3553_; lean_object* v_toPure_3554_; lean_object* v___f_3555_; lean_object* v___f_3556_; lean_object* v___x_3557_; lean_object* v___f_3558_; lean_object* v___f_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; 
v_toApplicative_3551_ = lean_ctor_get(v_inst_3538_, 0);
v_getEnv_3552_ = lean_ctor_get(v_inst_3540_, 0);
lean_inc(v_getEnv_3552_);
v_toBind_3553_ = lean_ctor_get(v_inst_3538_, 1);
lean_inc_n(v_toBind_3553_, 3);
v_toPure_3554_ = lean_ctor_get(v_toApplicative_3551_, 1);
lean_inc_n(v_toPure_3554_, 3);
lean_inc(v_n_u2081_3550_);
v___f_3555_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3555_, 0, v_n_u2081_3550_);
lean_inc(v_filter_3547_);
lean_inc(v_n_u2080_3544_);
lean_inc(v_inst_3543_);
lean_inc_ref(v_inst_3542_);
lean_inc(v_inst_3541_);
lean_inc_ref(v_inst_3540_);
lean_inc_ref(v_inst_3539_);
lean_inc_ref(v_inst_3538_);
v___f_3556_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__1), 12, 11);
lean_closure_set(v___f_3556_, 0, v_view_3548_);
lean_closure_set(v___f_3556_, 1, v_n_u2081_3550_);
lean_closure_set(v___f_3556_, 2, v_inst_3538_);
lean_closure_set(v___f_3556_, 3, v_inst_3539_);
lean_closure_set(v___f_3556_, 4, v_inst_3540_);
lean_closure_set(v___f_3556_, 5, v_inst_3541_);
lean_closure_set(v___f_3556_, 6, v_inst_3542_);
lean_closure_set(v___f_3556_, 7, v_inst_3543_);
lean_closure_set(v___f_3556_, 8, v_n_u2080_3544_);
lean_closure_set(v___f_3556_, 9, v_filter_3547_);
lean_closure_set(v___f_3556_, 10, v_toPure_3554_);
v___x_3557_ = lean_box(v_allowHorizAliases_3546_);
v___f_3558_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__2___boxed), 14, 13);
lean_closure_set(v___f_3558_, 0, v_toPure_3554_);
lean_closure_set(v___f_3558_, 1, v_inst_3538_);
lean_closure_set(v___f_3558_, 2, v_inst_3539_);
lean_closure_set(v___f_3558_, 3, v_inst_3540_);
lean_closure_set(v___f_3558_, 4, v_inst_3541_);
lean_closure_set(v___f_3558_, 5, v_inst_3542_);
lean_closure_set(v___f_3558_, 6, v_inst_3543_);
lean_closure_set(v___f_3558_, 7, v_n_u2080_3544_);
lean_closure_set(v___f_3558_, 8, v_filter_3547_);
lean_closure_set(v___f_3558_, 9, v_toBind_3553_);
lean_closure_set(v___f_3558_, 10, v___f_3556_);
lean_closure_set(v___f_3558_, 11, v___x_3557_);
lean_closure_set(v___f_3558_, 12, v___f_3555_);
v___f_3559_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__3), 2, 1);
lean_closure_set(v___f_3559_, 0, v_toPure_3554_);
v___x_3560_ = lean_apply_4(v_toBind_3553_, lean_box(0), lean_box(0), v_getEnv_3552_, v___f_3559_);
v___x_3561_ = lean_apply_4(v_toBind_3553_, lean_box(0), lean_box(0), v___x_3560_, v___f_3558_);
return v___x_3561_;
}
else
{
lean_object* v_toApplicative_3562_; lean_object* v_toBind_3563_; lean_object* v_toPure_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___f_3567_; lean_object* v___x_3568_; 
v_toApplicative_3562_ = lean_ctor_get(v_inst_3538_, 0);
v_toBind_3563_ = lean_ctor_get(v_inst_3538_, 1);
lean_inc(v_toBind_3563_);
v_toPure_3564_ = lean_ctor_get(v_toApplicative_3562_, 1);
lean_inc(v_toPure_3564_);
v___x_3565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3565_, 0, v_view_3548_);
lean_inc(v_n_u2081_3550_);
lean_inc_ref(v___x_3565_);
lean_inc(v_filter_3547_);
lean_inc(v_n_u2080_3544_);
lean_inc(v_inst_3543_);
lean_inc_ref(v_inst_3542_);
lean_inc(v_inst_3541_);
lean_inc_ref(v_inst_3540_);
lean_inc_ref(v_inst_3539_);
lean_inc_ref(v_inst_3538_);
v___x_3566_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(v_inst_3538_, v_inst_3539_, v_inst_3540_, v_inst_3541_, v_inst_3542_, v_inst_3543_, v_n_u2080_3544_, v_filter_3547_, v___x_3565_, v_n_u2081_3550_);
v___f_3567_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__4), 12, 11);
lean_closure_set(v___f_3567_, 0, v_n_u2081_3550_);
lean_closure_set(v___f_3567_, 1, v_inst_3538_);
lean_closure_set(v___f_3567_, 2, v_inst_3539_);
lean_closure_set(v___f_3567_, 3, v_inst_3540_);
lean_closure_set(v___f_3567_, 4, v_inst_3541_);
lean_closure_set(v___f_3567_, 5, v_inst_3542_);
lean_closure_set(v___f_3567_, 6, v_inst_3543_);
lean_closure_set(v___f_3567_, 7, v_n_u2080_3544_);
lean_closure_set(v___f_3567_, 8, v_filter_3547_);
lean_closure_set(v___f_3567_, 9, v___x_3565_);
lean_closure_set(v___f_3567_, 10, v_toPure_3564_);
v___x_3568_ = lean_apply_4(v_toBind_3563_, lean_box(0), lean_box(0), v___x_3566_, v___f_3567_);
return v___x_3568_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___boxed(lean_object* v_inst_3569_, lean_object* v_inst_3570_, lean_object* v_inst_3571_, lean_object* v_inst_3572_, lean_object* v_inst_3573_, lean_object* v_inst_3574_, lean_object* v_n_u2080_3575_, lean_object* v_fullNames_3576_, lean_object* v_allowHorizAliases_3577_, lean_object* v_filter_3578_){
_start:
{
uint8_t v_fullNames_boxed_3579_; uint8_t v_allowHorizAliases_boxed_3580_; lean_object* v_res_3581_; 
v_fullNames_boxed_3579_ = lean_unbox(v_fullNames_3576_);
v_allowHorizAliases_boxed_3580_ = lean_unbox(v_allowHorizAliases_3577_);
v_res_3581_ = l_Lean_unresolveNameGlobal_x3f___redArg(v_inst_3569_, v_inst_3570_, v_inst_3571_, v_inst_3572_, v_inst_3573_, v_inst_3574_, v_n_u2080_3575_, v_fullNames_boxed_3579_, v_allowHorizAliases_boxed_3580_, v_filter_3578_);
return v_res_3581_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f(lean_object* v_m_3582_, lean_object* v_inst_3583_, lean_object* v_inst_3584_, lean_object* v_inst_3585_, lean_object* v_inst_3586_, lean_object* v_inst_3587_, lean_object* v_inst_3588_, lean_object* v_n_u2080_3589_, uint8_t v_fullNames_3590_, uint8_t v_allowHorizAliases_3591_, lean_object* v_filter_3592_){
_start:
{
lean_object* v___x_3593_; 
v___x_3593_ = l_Lean_unresolveNameGlobal_x3f___redArg(v_inst_3583_, v_inst_3584_, v_inst_3585_, v_inst_3586_, v_inst_3587_, v_inst_3588_, v_n_u2080_3589_, v_fullNames_3590_, v_allowHorizAliases_3591_, v_filter_3592_);
return v___x_3593_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___boxed(lean_object* v_m_3594_, lean_object* v_inst_3595_, lean_object* v_inst_3596_, lean_object* v_inst_3597_, lean_object* v_inst_3598_, lean_object* v_inst_3599_, lean_object* v_inst_3600_, lean_object* v_n_u2080_3601_, lean_object* v_fullNames_3602_, lean_object* v_allowHorizAliases_3603_, lean_object* v_filter_3604_){
_start:
{
uint8_t v_fullNames_boxed_3605_; uint8_t v_allowHorizAliases_boxed_3606_; lean_object* v_res_3607_; 
v_fullNames_boxed_3605_ = lean_unbox(v_fullNames_3602_);
v_allowHorizAliases_boxed_3606_ = lean_unbox(v_allowHorizAliases_3603_);
v_res_3607_ = l_Lean_unresolveNameGlobal_x3f(v_m_3594_, v_inst_3595_, v_inst_3596_, v_inst_3597_, v_inst_3598_, v_inst_3599_, v_inst_3600_, v_n_u2080_3601_, v_fullNames_boxed_3605_, v_allowHorizAliases_boxed_3606_, v_filter_3604_);
return v_res_3607_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg___lam__0(lean_object* v_toPure_3608_, lean_object* v_n_u2080_3609_, lean_object* v_n_x3f_3610_){
_start:
{
if (lean_obj_tag(v_n_x3f_3610_) == 0)
{
lean_object* v___x_3611_; 
v___x_3611_ = lean_apply_2(v_toPure_3608_, lean_box(0), v_n_u2080_3609_);
return v___x_3611_;
}
else
{
lean_object* v_val_3612_; lean_object* v___x_3613_; 
lean_dec(v_n_u2080_3609_);
v_val_3612_ = lean_ctor_get(v_n_x3f_3610_, 0);
lean_inc(v_val_3612_);
lean_dec_ref_known(v_n_x3f_3610_, 1);
v___x_3613_ = lean_apply_2(v_toPure_3608_, lean_box(0), v_val_3612_);
return v___x_3613_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg(lean_object* v_inst_3614_, lean_object* v_inst_3615_, lean_object* v_inst_3616_, lean_object* v_inst_3617_, lean_object* v_inst_3618_, lean_object* v_inst_3619_, lean_object* v_n_u2080_3620_, uint8_t v_fullNames_3621_, uint8_t v_allowHorizAliases_3622_, lean_object* v_filter_3623_){
_start:
{
lean_object* v_toApplicative_3624_; lean_object* v_toBind_3625_; lean_object* v_toPure_3626_; lean_object* v___x_3627_; lean_object* v___f_3628_; lean_object* v___x_3629_; 
v_toApplicative_3624_ = lean_ctor_get(v_inst_3614_, 0);
v_toBind_3625_ = lean_ctor_get(v_inst_3614_, 1);
lean_inc(v_toBind_3625_);
v_toPure_3626_ = lean_ctor_get(v_toApplicative_3624_, 1);
lean_inc(v_toPure_3626_);
lean_inc(v_n_u2080_3620_);
v___x_3627_ = l_Lean_unresolveNameGlobal_x3f___redArg(v_inst_3614_, v_inst_3615_, v_inst_3616_, v_inst_3617_, v_inst_3618_, v_inst_3619_, v_n_u2080_3620_, v_fullNames_3621_, v_allowHorizAliases_3622_, v_filter_3623_);
v___f_3628_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3628_, 0, v_toPure_3626_);
lean_closure_set(v___f_3628_, 1, v_n_u2080_3620_);
v___x_3629_ = lean_apply_4(v_toBind_3625_, lean_box(0), lean_box(0), v___x_3627_, v___f_3628_);
return v___x_3629_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg___boxed(lean_object* v_inst_3630_, lean_object* v_inst_3631_, lean_object* v_inst_3632_, lean_object* v_inst_3633_, lean_object* v_inst_3634_, lean_object* v_inst_3635_, lean_object* v_n_u2080_3636_, lean_object* v_fullNames_3637_, lean_object* v_allowHorizAliases_3638_, lean_object* v_filter_3639_){
_start:
{
uint8_t v_fullNames_boxed_3640_; uint8_t v_allowHorizAliases_boxed_3641_; lean_object* v_res_3642_; 
v_fullNames_boxed_3640_ = lean_unbox(v_fullNames_3637_);
v_allowHorizAliases_boxed_3641_ = lean_unbox(v_allowHorizAliases_3638_);
v_res_3642_ = l_Lean_unresolveNameGlobal___redArg(v_inst_3630_, v_inst_3631_, v_inst_3632_, v_inst_3633_, v_inst_3634_, v_inst_3635_, v_n_u2080_3636_, v_fullNames_boxed_3640_, v_allowHorizAliases_boxed_3641_, v_filter_3639_);
return v_res_3642_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal(lean_object* v_m_3643_, lean_object* v_inst_3644_, lean_object* v_inst_3645_, lean_object* v_inst_3646_, lean_object* v_inst_3647_, lean_object* v_inst_3648_, lean_object* v_inst_3649_, lean_object* v_n_u2080_3650_, uint8_t v_fullNames_3651_, uint8_t v_allowHorizAliases_3652_, lean_object* v_filter_3653_){
_start:
{
lean_object* v___x_3654_; 
v___x_3654_ = l_Lean_unresolveNameGlobal___redArg(v_inst_3644_, v_inst_3645_, v_inst_3646_, v_inst_3647_, v_inst_3648_, v_inst_3649_, v_n_u2080_3650_, v_fullNames_3651_, v_allowHorizAliases_3652_, v_filter_3653_);
return v___x_3654_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___boxed(lean_object* v_m_3655_, lean_object* v_inst_3656_, lean_object* v_inst_3657_, lean_object* v_inst_3658_, lean_object* v_inst_3659_, lean_object* v_inst_3660_, lean_object* v_inst_3661_, lean_object* v_n_u2080_3662_, lean_object* v_fullNames_3663_, lean_object* v_allowHorizAliases_3664_, lean_object* v_filter_3665_){
_start:
{
uint8_t v_fullNames_boxed_3666_; uint8_t v_allowHorizAliases_boxed_3667_; lean_object* v_res_3668_; 
v_fullNames_boxed_3666_ = lean_unbox(v_fullNames_3663_);
v_allowHorizAliases_boxed_3667_ = lean_unbox(v_allowHorizAliases_3664_);
v_res_3668_ = l_Lean_unresolveNameGlobal(v_m_3655_, v_inst_3656_, v_inst_3657_, v_inst_3658_, v_inst_3659_, v_inst_3660_, v_inst_3661_, v_n_u2080_3662_, v_fullNames_boxed_3666_, v_allowHorizAliases_boxed_3667_, v_filter_3665_);
return v_res_3668_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0(lean_object* v_toFunctor_3670_, lean_object* v_inst_3671_, lean_object* v_inst_3672_, lean_object* v_inst_3673_, lean_object* v_inst_3674_, lean_object* v_inst_3675_, lean_object* v_inst_3676_, lean_object* v_inst_3677_, lean_object* v_n_3678_){
_start:
{
lean_object* v_map_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; 
v_map_3679_ = lean_ctor_get(v_toFunctor_3670_, 0);
lean_inc(v_map_3679_);
lean_dec_ref(v_toFunctor_3670_);
v___x_3680_ = ((lean_object*)(l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0___closed__0));
v___x_3681_ = l_Lean_resolveLocalName___redArg(v_inst_3671_, v_inst_3672_, v_inst_3673_, v_inst_3674_, v_inst_3675_, v_inst_3676_, v_inst_3677_, v_n_3678_);
v___x_3682_ = lean_apply_4(v_map_3679_, lean_box(0), lean_box(0), v___x_3680_, v___x_3681_);
return v___x_3682_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(lean_object* v_inst_3683_, lean_object* v_inst_3684_, lean_object* v_inst_3685_, lean_object* v_inst_3686_, lean_object* v_inst_3687_, lean_object* v_inst_3688_, lean_object* v_inst_3689_, lean_object* v_n_u2080_3690_, uint8_t v_fullNames_3691_){
_start:
{
lean_object* v_toApplicative_3692_; lean_object* v_toFunctor_3693_; uint8_t v___x_3694_; lean_object* v___f_3695_; lean_object* v___x_3696_; 
v_toApplicative_3692_ = lean_ctor_get(v_inst_3683_, 0);
v_toFunctor_3693_ = lean_ctor_get(v_toApplicative_3692_, 0);
v___x_3694_ = 0;
lean_inc(v_inst_3688_);
lean_inc_ref(v_inst_3687_);
lean_inc(v_inst_3686_);
lean_inc_ref(v_inst_3685_);
lean_inc_ref(v_inst_3684_);
lean_inc_ref(v_inst_3683_);
lean_inc_ref(v_toFunctor_3693_);
v___f_3695_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0), 9, 8);
lean_closure_set(v___f_3695_, 0, v_toFunctor_3693_);
lean_closure_set(v___f_3695_, 1, v_inst_3683_);
lean_closure_set(v___f_3695_, 2, v_inst_3684_);
lean_closure_set(v___f_3695_, 3, v_inst_3685_);
lean_closure_set(v___f_3695_, 4, v_inst_3686_);
lean_closure_set(v___f_3695_, 5, v_inst_3687_);
lean_closure_set(v___f_3695_, 6, v_inst_3688_);
lean_closure_set(v___f_3695_, 7, v_inst_3689_);
v___x_3696_ = l_Lean_unresolveNameGlobal_x3f___redArg(v_inst_3683_, v_inst_3684_, v_inst_3685_, v_inst_3686_, v_inst_3687_, v_inst_3688_, v_n_u2080_3690_, v_fullNames_3691_, v___x_3694_, v___f_3695_);
return v___x_3696_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___boxed(lean_object* v_inst_3697_, lean_object* v_inst_3698_, lean_object* v_inst_3699_, lean_object* v_inst_3700_, lean_object* v_inst_3701_, lean_object* v_inst_3702_, lean_object* v_inst_3703_, lean_object* v_n_u2080_3704_, lean_object* v_fullNames_3705_){
_start:
{
uint8_t v_fullNames_boxed_3706_; lean_object* v_res_3707_; 
v_fullNames_boxed_3706_ = lean_unbox(v_fullNames_3705_);
v_res_3707_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(v_inst_3697_, v_inst_3698_, v_inst_3699_, v_inst_3700_, v_inst_3701_, v_inst_3702_, v_inst_3703_, v_n_u2080_3704_, v_fullNames_boxed_3706_);
return v_res_3707_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f(lean_object* v_m_3708_, lean_object* v_inst_3709_, lean_object* v_inst_3710_, lean_object* v_inst_3711_, lean_object* v_inst_3712_, lean_object* v_inst_3713_, lean_object* v_inst_3714_, lean_object* v_inst_3715_, lean_object* v_n_u2080_3716_, uint8_t v_fullNames_3717_){
_start:
{
lean_object* v___x_3718_; 
v___x_3718_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(v_inst_3709_, v_inst_3710_, v_inst_3711_, v_inst_3712_, v_inst_3713_, v_inst_3714_, v_inst_3715_, v_n_u2080_3716_, v_fullNames_3717_);
return v___x_3718_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___boxed(lean_object* v_m_3719_, lean_object* v_inst_3720_, lean_object* v_inst_3721_, lean_object* v_inst_3722_, lean_object* v_inst_3723_, lean_object* v_inst_3724_, lean_object* v_inst_3725_, lean_object* v_inst_3726_, lean_object* v_n_u2080_3727_, lean_object* v_fullNames_3728_){
_start:
{
uint8_t v_fullNames_boxed_3729_; lean_object* v_res_3730_; 
v_fullNames_boxed_3729_ = lean_unbox(v_fullNames_3728_);
v_res_3730_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f(v_m_3719_, v_inst_3720_, v_inst_3721_, v_inst_3722_, v_inst_3723_, v_inst_3724_, v_inst_3725_, v_inst_3726_, v_n_u2080_3727_, v_fullNames_boxed_3729_);
return v_res_3730_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___redArg(lean_object* v_inst_3731_, lean_object* v_inst_3732_, lean_object* v_inst_3733_, lean_object* v_inst_3734_, lean_object* v_inst_3735_, lean_object* v_inst_3736_, lean_object* v_inst_3737_, lean_object* v_n_u2080_3738_, uint8_t v_fullNames_3739_){
_start:
{
lean_object* v_toApplicative_3740_; lean_object* v_toBind_3741_; lean_object* v_toPure_3742_; lean_object* v___x_3743_; lean_object* v___f_3744_; lean_object* v___x_3745_; 
v_toApplicative_3740_ = lean_ctor_get(v_inst_3731_, 0);
v_toBind_3741_ = lean_ctor_get(v_inst_3731_, 1);
lean_inc(v_toBind_3741_);
v_toPure_3742_ = lean_ctor_get(v_toApplicative_3740_, 1);
lean_inc(v_toPure_3742_);
lean_inc(v_n_u2080_3738_);
v___x_3743_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(v_inst_3731_, v_inst_3732_, v_inst_3733_, v_inst_3734_, v_inst_3735_, v_inst_3736_, v_inst_3737_, v_n_u2080_3738_, v_fullNames_3739_);
v___f_3744_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3744_, 0, v_toPure_3742_);
lean_closure_set(v___f_3744_, 1, v_n_u2080_3738_);
v___x_3745_ = lean_apply_4(v_toBind_3741_, lean_box(0), lean_box(0), v___x_3743_, v___f_3744_);
return v___x_3745_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___redArg___boxed(lean_object* v_inst_3746_, lean_object* v_inst_3747_, lean_object* v_inst_3748_, lean_object* v_inst_3749_, lean_object* v_inst_3750_, lean_object* v_inst_3751_, lean_object* v_inst_3752_, lean_object* v_n_u2080_3753_, lean_object* v_fullNames_3754_){
_start:
{
uint8_t v_fullNames_boxed_3755_; lean_object* v_res_3756_; 
v_fullNames_boxed_3755_ = lean_unbox(v_fullNames_3754_);
v_res_3756_ = l_Lean_unresolveNameGlobalAvoidingLocals___redArg(v_inst_3746_, v_inst_3747_, v_inst_3748_, v_inst_3749_, v_inst_3750_, v_inst_3751_, v_inst_3752_, v_n_u2080_3753_, v_fullNames_boxed_3755_);
return v_res_3756_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals(lean_object* v_m_3757_, lean_object* v_inst_3758_, lean_object* v_inst_3759_, lean_object* v_inst_3760_, lean_object* v_inst_3761_, lean_object* v_inst_3762_, lean_object* v_inst_3763_, lean_object* v_inst_3764_, lean_object* v_n_u2080_3765_, uint8_t v_fullNames_3766_){
_start:
{
lean_object* v___x_3767_; 
v___x_3767_ = l_Lean_unresolveNameGlobalAvoidingLocals___redArg(v_inst_3758_, v_inst_3759_, v_inst_3760_, v_inst_3761_, v_inst_3762_, v_inst_3763_, v_inst_3764_, v_n_u2080_3765_, v_fullNames_3766_);
return v___x_3767_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___boxed(lean_object* v_m_3768_, lean_object* v_inst_3769_, lean_object* v_inst_3770_, lean_object* v_inst_3771_, lean_object* v_inst_3772_, lean_object* v_inst_3773_, lean_object* v_inst_3774_, lean_object* v_inst_3775_, lean_object* v_n_u2080_3776_, lean_object* v_fullNames_3777_){
_start:
{
uint8_t v_fullNames_boxed_3778_; lean_object* v_res_3779_; 
v_fullNames_boxed_3778_ = lean_unbox(v_fullNames_3777_);
v_res_3779_ = l_Lean_unresolveNameGlobalAvoidingLocals(v_m_3768_, v_inst_3769_, v_inst_3770_, v_inst_3771_, v_inst_3772_, v_inst_3773_, v_inst_3774_, v_inst_3775_, v_n_u2080_3776_, v_fullNames_boxed_3778_);
return v_res_3779_;
}
}
lean_object* runtime_initialize_Lean_Modifiers(uint8_t builtin);
lean_object* runtime_initialize_Lean_Exception(uint8_t builtin);
lean_object* runtime_initialize_Lean_Namespace(uint8_t builtin);
lean_object* runtime_initialize_Lean_Log(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_ResolveName(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Modifiers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Exception(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Namespace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_reservedNamePredicatesRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_reservedNamePredicatesRef);
lean_dec_ref(res);
res = l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_405991711____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_reservedNamePredicatesExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_reservedNamePredicatesExt);
lean_dec_ref(res);
res = l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_aliasExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_aliasExtension);
lean_dec_ref(res);
res = l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_ResolveName_backward_privateInPublic = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_ResolveName_backward_privateInPublic);
lean_dec_ref(res);
res = l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_ResolveName_backward_privateInPublic_warn = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_ResolveName_backward_privateInPublic_warn);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_ResolveName(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Modifiers(uint8_t builtin);
lean_object* initialize_Lean_Exception(uint8_t builtin);
lean_object* initialize_Lean_Namespace(uint8_t builtin);
lean_object* initialize_Lean_Log(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_ResolveName(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Modifiers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Exception(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Namespace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ResolveName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_ResolveName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_ResolveName(builtin);
}
#ifdef __cplusplus
}
#endif
