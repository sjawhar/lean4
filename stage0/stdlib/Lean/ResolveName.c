// Lean compiler output
// Module: Lean.ResolveName
// Imports: public import Lean.Modifiers public import Lean.Exception public import Lean.Namespace public import Lean.Log import Lean.Util.UsedByChecks
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
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
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
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_Lean_SMap_instInhabited___redArg();
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_Lean_isProtected(lean_object*, lean_object*);
uint8_t l_Lean_Environment_containsOnBranch(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_registerEnvExtension___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Array_instInhabited___redArg();
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Environment_containsLocally(lean_object*, lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_mkPrivateNameCore(lean_object*, lean_object*);
uint8_t l_Lean_Environment_moduleDeclares(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
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
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_initializing();
lean_object* lean_mk_io_user_error(lean_object*);
uint8_t l_Lean_pluginLoading();
lean_object* l_Lean_recordCompilerCode();
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
lean_object* l_Lean_instMonadOptionsOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* l_Lean_instMonadLogOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_x27_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Name_instToString___lam__0(lean_object*);
lean_object* l_List_filterMapTR_go___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instAlternative___redArg(lean_object*);
lean_object* l_Option_isNone___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "reservedNamePredicatesExt"};
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(233, 132, 75, 91, 63, 63, 128, 135)}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2____boxed(lean_object*);
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
static const lean_string_object l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "aliasExtension"};
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(255, 78, 120, 122, 20, 252, 110, 252)}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ResolveName_0__Lean_initFn___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_addAliasEntry, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_initFn___closed__5_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_ResolveName_0__Lean_initFn___closed__5_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__5_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_aliasExtension;
LEAN_EXPORT lean_object* l_Lean_addAlias___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addAlias(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_getAliasState___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getAliasState___closed__0;
LEAN_EXPORT lean_object* l_Lean_getAliasState(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_getAliases_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_getAliases_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAliases(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_getAliases___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getRevAliases___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getRevAliases___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
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
static const lean_ctor_object l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ResolveName_0__Lean_initFn___closed__1_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
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
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 136, 64, 34, 247, 93, 254, 97)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__1_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
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
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___redArg___lam__0(lean_object* v_reservedName_32_, lean_object* v_toPure_33_, lean_object* v_inst_34_, lean_object* v_inst_35_, lean_object* v_declName_36_, lean_object* v_____do__lift_37_){
_start:
{
uint8_t v___x_38_; uint8_t v___x_39_; 
v___x_38_ = 1;
lean_inc(v_reservedName_32_);
v___x_39_ = l_Lean_Environment_contains(v_____do__lift_37_, v_reservedName_32_, v___x_38_);
if (v___x_39_ == 0)
{
lean_object* v___x_40_; lean_object* v___x_41_; 
lean_dec(v_declName_36_);
lean_dec_ref(v_inst_35_);
lean_dec_ref(v_inst_34_);
lean_dec(v_reservedName_32_);
v___x_40_ = lean_box(0);
v___x_41_ = lean_apply_2(v_toPure_33_, lean_box(0), v___x_40_);
return v___x_41_;
}
else
{
lean_object* v___x_42_; 
lean_dec(v_toPure_33_);
v___x_42_ = l_Lean_throwReservedNameNotAvailable___redArg(v_inst_34_, v_inst_35_, v_declName_36_, v_reservedName_32_);
return v___x_42_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___redArg(lean_object* v_inst_43_, lean_object* v_inst_44_, lean_object* v_inst_45_, lean_object* v_declName_46_, lean_object* v_suffix_47_){
_start:
{
lean_object* v_toApplicative_48_; lean_object* v_toBind_49_; lean_object* v_getEnv_50_; lean_object* v_toPure_51_; lean_object* v_reservedName_52_; lean_object* v___f_53_; lean_object* v___x_54_; 
v_toApplicative_48_ = lean_ctor_get(v_inst_43_, 0);
v_toBind_49_ = lean_ctor_get(v_inst_43_, 1);
lean_inc(v_toBind_49_);
v_getEnv_50_ = lean_ctor_get(v_inst_44_, 0);
lean_inc(v_getEnv_50_);
lean_dec_ref(v_inst_44_);
v_toPure_51_ = lean_ctor_get(v_toApplicative_48_, 1);
lean_inc(v_toPure_51_);
lean_inc(v_declName_46_);
v_reservedName_52_ = l_Lean_Name_str___override(v_declName_46_, v_suffix_47_);
v___f_53_ = lean_alloc_closure((void*)(l_Lean_ensureReservedNameAvailable___redArg___lam__0), 6, 5);
lean_closure_set(v___f_53_, 0, v_reservedName_52_);
lean_closure_set(v___f_53_, 1, v_toPure_51_);
lean_closure_set(v___f_53_, 2, v_inst_43_);
lean_closure_set(v___f_53_, 3, v_inst_45_);
lean_closure_set(v___f_53_, 4, v_declName_46_);
v___x_54_ = lean_apply_4(v_toBind_49_, lean_box(0), lean_box(0), v_getEnv_50_, v___f_53_);
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
uint8_t v___x_81_; 
v___x_81_ = l_Lean_initializing();
if (v___x_81_ == 0)
{
lean_object* v___x_82_; lean_object* v___x_83_; 
lean_dec_ref(v_p_73_);
v___x_82_ = lean_obj_once(&l_Lean_registerReservedNamePredicate___closed__1, &l_Lean_registerReservedNamePredicate___closed__1_once, _init_l_Lean_registerReservedNamePredicate___closed__1);
v___x_83_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
return v___x_83_;
}
else
{
uint8_t v___x_84_; 
v___x_84_ = l_Lean_pluginLoading();
if (v___x_84_ == 0)
{
goto v___jp_75_;
}
else
{
lean_object* v___x_85_; 
v___x_85_ = l_Lean_recordCompilerCode();
goto v___jp_75_;
}
}
v___jp_75_:
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_76_ = l_Lean_reservedNamePredicatesRef;
v___x_77_ = lean_st_ref_take(v___x_76_);
v___x_78_ = lean_array_push(v___x_77_, v_p_73_);
v___x_79_ = lean_st_ref_put(v___x_76_, v___x_78_);
v___x_80_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
return v___x_80_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerReservedNamePredicate___boxed(lean_object* v_p_86_, lean_object* v_a_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l_Lean_registerReservedNamePredicate(v_p_86_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_(lean_object* v___x_89_){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_91_ = lean_st_ref_get(v___x_89_);
v___x_92_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_92_, 0, v___x_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2____boxed(lean_object* v___x_93_, lean_object* v___y_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_(v___x_93_);
lean_dec(v___x_93_);
return v_res_95_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_96_; lean_object* v___f_97_; 
v___x_96_ = l_Lean_reservedNamePredicatesRef;
v___f_97_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_97_, 0, v___x_96_);
return v___f_97_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; uint8_t v___x_108_; uint8_t v___x_109_; lean_object* v___x_110_; 
v___f_104_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_, &l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__once, _init_l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_);
v___x_105_ = lean_box(0);
v___x_106_ = lean_box(2);
v___x_107_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_));
v___x_108_ = 0;
v___x_109_ = 1;
v___x_110_ = l_Lean_registerEnvExtension___redArg(v___f_104_, v___x_105_, v___x_106_, v___x_107_, v___x_108_, v___x_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2____boxed(lean_object* v_a_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_();
return v_res_112_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0(lean_object* v_env_113_, lean_object* v_name_114_, lean_object* v_as_115_, size_t v_i_116_, size_t v_stop_117_){
_start:
{
uint8_t v___x_118_; 
v___x_118_ = lean_usize_dec_eq(v_i_116_, v_stop_117_);
if (v___x_118_ == 0)
{
lean_object* v___x_154__overap_119_; lean_object* v___x_120_; uint8_t v___x_121_; 
v___x_154__overap_119_ = lean_array_uget_borrowed(v_as_115_, v_i_116_);
lean_inc(v___x_154__overap_119_);
lean_inc(v_name_114_);
lean_inc_ref(v_env_113_);
v___x_120_ = lean_apply_2(v___x_154__overap_119_, v_env_113_, v_name_114_);
v___x_121_ = lean_unbox(v___x_120_);
if (v___x_121_ == 0)
{
size_t v___x_122_; size_t v___x_123_; 
v___x_122_ = ((size_t)1ULL);
v___x_123_ = lean_usize_add(v_i_116_, v___x_122_);
v_i_116_ = v___x_123_;
goto _start;
}
else
{
uint8_t v___x_125_; 
lean_dec(v_name_114_);
lean_dec_ref(v_env_113_);
v___x_125_ = lean_unbox(v___x_120_);
return v___x_125_;
}
}
else
{
uint8_t v___x_126_; 
lean_dec(v_name_114_);
lean_dec_ref(v_env_113_);
v___x_126_ = 0;
return v___x_126_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0___boxed(lean_object* v_env_127_, lean_object* v_name_128_, lean_object* v_as_129_, lean_object* v_i_130_, lean_object* v_stop_131_){
_start:
{
size_t v_i_boxed_132_; size_t v_stop_boxed_133_; uint8_t v_res_134_; lean_object* v_r_135_; 
v_i_boxed_132_ = lean_unbox_usize(v_i_130_);
lean_dec(v_i_130_);
v_stop_boxed_133_ = lean_unbox_usize(v_stop_131_);
lean_dec(v_stop_131_);
v_res_134_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0(v_env_127_, v_name_128_, v_as_129_, v_i_boxed_132_, v_stop_boxed_133_);
lean_dec_ref(v_as_129_);
v_r_135_ = lean_box(v_res_134_);
return v_r_135_;
}
}
static lean_object* _init_l_Lean_isReservedName___closed__0(void){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = l_Array_instInhabited___redArg();
return v___x_136_;
}
}
LEAN_EXPORT uint8_t lean_is_reserved_name(lean_object* v_env_137_, lean_object* v_name_138_){
_start:
{
lean_object* v___x_139_; lean_object* v_asyncMode_140_; lean_object* v___x_141_; lean_object* v___x_142_; uint8_t v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; uint8_t v___x_147_; 
v___x_139_ = l_Lean_reservedNamePredicatesExt;
v_asyncMode_140_ = lean_ctor_get(v___x_139_, 2);
v___x_141_ = lean_obj_once(&l_Lean_isReservedName___closed__0, &l_Lean_isReservedName___closed__0_once, _init_l_Lean_isReservedName___closed__0);
v___x_142_ = lean_box(0);
v___x_143_ = 0;
lean_inc_ref(v_env_137_);
v___x_144_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_141_, v___x_139_, v_env_137_, v_asyncMode_140_, v___x_142_, v___x_143_);
v___x_145_ = lean_unsigned_to_nat(0u);
v___x_146_ = lean_array_get_size(v___x_144_);
v___x_147_ = lean_nat_dec_lt(v___x_145_, v___x_146_);
if (v___x_147_ == 0)
{
lean_dec(v___x_144_);
lean_dec(v_name_138_);
lean_dec_ref(v_env_137_);
return v___x_147_;
}
else
{
if (v___x_147_ == 0)
{
lean_dec(v___x_144_);
lean_dec(v_name_138_);
lean_dec_ref(v_env_137_);
return v___x_147_;
}
else
{
size_t v___x_148_; size_t v___x_149_; uint8_t v___x_150_; 
v___x_148_ = ((size_t)0ULL);
v___x_149_ = lean_usize_of_nat(v___x_146_);
v___x_150_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0(v_env_137_, v_name_138_, v___x_144_, v___x_148_, v___x_149_);
lean_dec(v___x_144_);
return v___x_150_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isReservedName___boxed(lean_object* v_env_151_, lean_object* v_name_152_){
_start:
{
uint8_t v_res_153_; lean_object* v_r_154_; 
v_res_153_ = lean_is_reserved_name(v_env_151_, v_name_152_);
v_r_154_ = lean_box(v_res_153_);
return v_r_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11___redArg(lean_object* v_x_155_, lean_object* v_x_156_, lean_object* v_x_157_, lean_object* v_x_158_){
_start:
{
lean_object* v_ks_159_; lean_object* v_vs_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_184_; 
v_ks_159_ = lean_ctor_get(v_x_155_, 0);
v_vs_160_ = lean_ctor_get(v_x_155_, 1);
v_isSharedCheck_184_ = !lean_is_exclusive(v_x_155_);
if (v_isSharedCheck_184_ == 0)
{
v___x_162_ = v_x_155_;
v_isShared_163_ = v_isSharedCheck_184_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_vs_160_);
lean_inc(v_ks_159_);
lean_dec(v_x_155_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_184_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_164_; uint8_t v___x_165_; 
v___x_164_ = lean_array_get_size(v_ks_159_);
v___x_165_ = lean_nat_dec_lt(v_x_156_, v___x_164_);
if (v___x_165_ == 0)
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_169_; 
lean_dec(v_x_156_);
v___x_166_ = lean_array_push(v_ks_159_, v_x_157_);
v___x_167_ = lean_array_push(v_vs_160_, v_x_158_);
if (v_isShared_163_ == 0)
{
lean_ctor_set(v___x_162_, 1, v___x_167_);
lean_ctor_set(v___x_162_, 0, v___x_166_);
v___x_169_ = v___x_162_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v___x_166_);
lean_ctor_set(v_reuseFailAlloc_170_, 1, v___x_167_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
}
}
else
{
lean_object* v_k_x27_171_; uint8_t v___x_172_; 
v_k_x27_171_ = lean_array_fget_borrowed(v_ks_159_, v_x_156_);
v___x_172_ = lean_name_eq(v_x_157_, v_k_x27_171_);
if (v___x_172_ == 0)
{
lean_object* v___x_174_; 
if (v_isShared_163_ == 0)
{
v___x_174_ = v___x_162_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_ks_159_);
lean_ctor_set(v_reuseFailAlloc_178_, 1, v_vs_160_);
v___x_174_ = v_reuseFailAlloc_178_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_175_ = lean_unsigned_to_nat(1u);
v___x_176_ = lean_nat_add(v_x_156_, v___x_175_);
lean_dec(v_x_156_);
v_x_155_ = v___x_174_;
v_x_156_ = v___x_176_;
goto _start;
}
}
else
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_182_; 
v___x_179_ = lean_array_fset(v_ks_159_, v_x_156_, v_x_157_);
v___x_180_ = lean_array_fset(v_vs_160_, v_x_156_, v_x_158_);
lean_dec(v_x_156_);
if (v_isShared_163_ == 0)
{
lean_ctor_set(v___x_162_, 1, v___x_180_);
lean_ctor_set(v___x_162_, 0, v___x_179_);
v___x_182_ = v___x_162_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v___x_179_);
lean_ctor_set(v_reuseFailAlloc_183_, 1, v___x_180_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
return v___x_182_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9___redArg(lean_object* v_n_185_, lean_object* v_k_186_, lean_object* v_v_187_){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_188_ = lean_unsigned_to_nat(0u);
v___x_189_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11___redArg(v_n_185_, v___x_188_, v_k_186_, v_v_187_);
return v___x_189_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(lean_object* v_x_191_, size_t v_x_192_, size_t v_x_193_, lean_object* v_x_194_, lean_object* v_x_195_){
_start:
{
if (lean_obj_tag(v_x_191_) == 0)
{
lean_object* v_es_196_; size_t v___x_197_; size_t v___x_198_; lean_object* v_j_199_; lean_object* v___x_200_; uint8_t v___x_201_; 
v_es_196_ = lean_ctor_get(v_x_191_, 0);
v___x_197_ = ((size_t)31ULL);
v___x_198_ = lean_usize_land(v_x_192_, v___x_197_);
v_j_199_ = lean_usize_to_nat(v___x_198_);
v___x_200_ = lean_array_get_size(v_es_196_);
v___x_201_ = lean_nat_dec_lt(v_j_199_, v___x_200_);
if (v___x_201_ == 0)
{
lean_dec(v_j_199_);
lean_dec(v_x_195_);
lean_dec(v_x_194_);
return v_x_191_;
}
else
{
lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_240_; 
lean_inc_ref(v_es_196_);
v_isSharedCheck_240_ = !lean_is_exclusive(v_x_191_);
if (v_isSharedCheck_240_ == 0)
{
lean_object* v_unused_241_; 
v_unused_241_ = lean_ctor_get(v_x_191_, 0);
lean_dec(v_unused_241_);
v___x_203_ = v_x_191_;
v_isShared_204_ = v_isSharedCheck_240_;
goto v_resetjp_202_;
}
else
{
lean_dec(v_x_191_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_240_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v_v_205_; lean_object* v___x_206_; lean_object* v_xs_x27_207_; lean_object* v___y_209_; 
v_v_205_ = lean_array_fget(v_es_196_, v_j_199_);
v___x_206_ = lean_box(0);
v_xs_x27_207_ = lean_array_fset(v_es_196_, v_j_199_, v___x_206_);
switch(lean_obj_tag(v_v_205_))
{
case 0:
{
lean_object* v_key_214_; lean_object* v_val_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_225_; 
v_key_214_ = lean_ctor_get(v_v_205_, 0);
v_val_215_ = lean_ctor_get(v_v_205_, 1);
v_isSharedCheck_225_ = !lean_is_exclusive(v_v_205_);
if (v_isSharedCheck_225_ == 0)
{
v___x_217_ = v_v_205_;
v_isShared_218_ = v_isSharedCheck_225_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_val_215_);
lean_inc(v_key_214_);
lean_dec(v_v_205_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_225_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
uint8_t v___x_219_; 
v___x_219_ = lean_name_eq(v_x_194_, v_key_214_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; lean_object* v___x_221_; 
lean_del_object(v___x_217_);
v___x_220_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_214_, v_val_215_, v_x_194_, v_x_195_);
v___x_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
v___y_209_ = v___x_221_;
goto v___jp_208_;
}
else
{
lean_object* v___x_223_; 
lean_dec(v_val_215_);
lean_dec(v_key_214_);
if (v_isShared_218_ == 0)
{
lean_ctor_set(v___x_217_, 1, v_x_195_);
lean_ctor_set(v___x_217_, 0, v_x_194_);
v___x_223_ = v___x_217_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v_x_194_);
lean_ctor_set(v_reuseFailAlloc_224_, 1, v_x_195_);
v___x_223_ = v_reuseFailAlloc_224_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
v___y_209_ = v___x_223_;
goto v___jp_208_;
}
}
}
}
case 1:
{
lean_object* v_node_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_238_; 
v_node_226_ = lean_ctor_get(v_v_205_, 0);
v_isSharedCheck_238_ = !lean_is_exclusive(v_v_205_);
if (v_isSharedCheck_238_ == 0)
{
v___x_228_ = v_v_205_;
v_isShared_229_ = v_isSharedCheck_238_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_node_226_);
lean_dec(v_v_205_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_238_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
size_t v___x_230_; size_t v___x_231_; size_t v___x_232_; size_t v___x_233_; lean_object* v___x_234_; lean_object* v___x_236_; 
v___x_230_ = ((size_t)5ULL);
v___x_231_ = lean_usize_shift_right(v_x_192_, v___x_230_);
v___x_232_ = ((size_t)1ULL);
v___x_233_ = lean_usize_add(v_x_193_, v___x_232_);
v___x_234_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(v_node_226_, v___x_231_, v___x_233_, v_x_194_, v_x_195_);
if (v_isShared_229_ == 0)
{
lean_ctor_set(v___x_228_, 0, v___x_234_);
v___x_236_ = v___x_228_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v___x_234_);
v___x_236_ = v_reuseFailAlloc_237_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
v___y_209_ = v___x_236_;
goto v___jp_208_;
}
}
}
default: 
{
lean_object* v___x_239_; 
v___x_239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_239_, 0, v_x_194_);
lean_ctor_set(v___x_239_, 1, v_x_195_);
v___y_209_ = v___x_239_;
goto v___jp_208_;
}
}
v___jp_208_:
{
lean_object* v___x_210_; lean_object* v___x_212_; 
v___x_210_ = lean_array_fset(v_xs_x27_207_, v_j_199_, v___y_209_);
lean_dec(v_j_199_);
if (v_isShared_204_ == 0)
{
lean_ctor_set(v___x_203_, 0, v___x_210_);
v___x_212_ = v___x_203_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v___x_210_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
return v___x_212_;
}
}
}
}
}
else
{
lean_object* v_ks_242_; lean_object* v_vs_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_261_; 
v_ks_242_ = lean_ctor_get(v_x_191_, 0);
v_vs_243_ = lean_ctor_get(v_x_191_, 1);
v_isSharedCheck_261_ = !lean_is_exclusive(v_x_191_);
if (v_isSharedCheck_261_ == 0)
{
v___x_245_ = v_x_191_;
v_isShared_246_ = v_isSharedCheck_261_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_vs_243_);
lean_inc(v_ks_242_);
lean_dec(v_x_191_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_261_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___x_248_; 
if (v_isShared_246_ == 0)
{
v___x_248_ = v___x_245_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v_ks_242_);
lean_ctor_set(v_reuseFailAlloc_260_, 1, v_vs_243_);
v___x_248_ = v_reuseFailAlloc_260_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
lean_object* v_newNode_249_; size_t v___x_250_; uint8_t v___x_251_; 
v_newNode_249_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9___redArg(v___x_248_, v_x_194_, v_x_195_);
v___x_250_ = ((size_t)7ULL);
v___x_251_ = lean_usize_dec_le(v___x_250_, v_x_193_);
if (v___x_251_ == 0)
{
lean_object* v___x_252_; lean_object* v___x_253_; uint8_t v___x_254_; 
v___x_252_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_249_);
v___x_253_ = lean_unsigned_to_nat(4u);
v___x_254_ = lean_nat_dec_lt(v___x_252_, v___x_253_);
lean_dec(v___x_252_);
if (v___x_254_ == 0)
{
lean_object* v_ks_255_; lean_object* v_vs_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v_ks_255_ = lean_ctor_get(v_newNode_249_, 0);
lean_inc_ref(v_ks_255_);
v_vs_256_ = lean_ctor_get(v_newNode_249_, 1);
lean_inc_ref(v_vs_256_);
lean_dec_ref(v_newNode_249_);
v___x_257_ = lean_unsigned_to_nat(0u);
v___x_258_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0);
v___x_259_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg(v_x_193_, v_ks_255_, v_vs_256_, v___x_257_, v___x_258_);
lean_dec_ref(v_vs_256_);
lean_dec_ref(v_ks_255_);
return v___x_259_;
}
else
{
return v_newNode_249_;
}
}
else
{
return v_newNode_249_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg(size_t v_depth_262_, lean_object* v_keys_263_, lean_object* v_vals_264_, lean_object* v_i_265_, lean_object* v_entries_266_){
_start:
{
lean_object* v___x_267_; uint8_t v___x_268_; 
v___x_267_ = lean_array_get_size(v_keys_263_);
v___x_268_ = lean_nat_dec_lt(v_i_265_, v___x_267_);
if (v___x_268_ == 0)
{
lean_dec(v_i_265_);
return v_entries_266_;
}
else
{
lean_object* v_k_269_; lean_object* v_v_270_; uint64_t v___y_272_; 
v_k_269_ = lean_array_fget_borrowed(v_keys_263_, v_i_265_);
v_v_270_ = lean_array_fget_borrowed(v_vals_264_, v_i_265_);
if (lean_obj_tag(v_k_269_) == 0)
{
uint64_t v___x_283_; 
v___x_283_ = 1723ULL;
v___y_272_ = v___x_283_;
goto v___jp_271_;
}
else
{
uint64_t v_hash_284_; 
v_hash_284_ = lean_ctor_get_uint64(v_k_269_, sizeof(void*)*2);
v___y_272_ = v_hash_284_;
goto v___jp_271_;
}
v___jp_271_:
{
size_t v_h_273_; size_t v___x_274_; lean_object* v___x_275_; size_t v___x_276_; size_t v___x_277_; size_t v___x_278_; size_t v_h_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
v_h_273_ = lean_uint64_to_usize(v___y_272_);
v___x_274_ = ((size_t)5ULL);
v___x_275_ = lean_unsigned_to_nat(1u);
v___x_276_ = ((size_t)1ULL);
v___x_277_ = lean_usize_sub(v_depth_262_, v___x_276_);
v___x_278_ = lean_usize_mul(v___x_274_, v___x_277_);
v_h_279_ = lean_usize_shift_right(v_h_273_, v___x_278_);
v___x_280_ = lean_nat_add(v_i_265_, v___x_275_);
lean_dec(v_i_265_);
lean_inc(v_v_270_);
lean_inc(v_k_269_);
v___x_281_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(v_entries_266_, v_h_279_, v_depth_262_, v_k_269_, v_v_270_);
v_i_265_ = v___x_280_;
v_entries_266_ = v___x_281_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg___boxed(lean_object* v_depth_285_, lean_object* v_keys_286_, lean_object* v_vals_287_, lean_object* v_i_288_, lean_object* v_entries_289_){
_start:
{
size_t v_depth_boxed_290_; lean_object* v_res_291_; 
v_depth_boxed_290_ = lean_unbox_usize(v_depth_285_);
lean_dec(v_depth_285_);
v_res_291_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg(v_depth_boxed_290_, v_keys_286_, v_vals_287_, v_i_288_, v_entries_289_);
lean_dec_ref(v_vals_287_);
lean_dec_ref(v_keys_286_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___boxed(lean_object* v_x_292_, lean_object* v_x_293_, lean_object* v_x_294_, lean_object* v_x_295_, lean_object* v_x_296_){
_start:
{
size_t v_x_1075__boxed_297_; size_t v_x_1076__boxed_298_; lean_object* v_res_299_; 
v_x_1075__boxed_297_ = lean_unbox_usize(v_x_293_);
lean_dec(v_x_293_);
v_x_1076__boxed_298_ = lean_unbox_usize(v_x_294_);
lean_dec(v_x_294_);
v_res_299_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(v_x_292_, v_x_1075__boxed_297_, v_x_1076__boxed_298_, v_x_295_, v_x_296_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3___redArg(lean_object* v_x_300_, lean_object* v_x_301_, lean_object* v_x_302_){
_start:
{
uint64_t v___y_304_; 
if (lean_obj_tag(v_x_301_) == 0)
{
uint64_t v___x_308_; 
v___x_308_ = 1723ULL;
v___y_304_ = v___x_308_;
goto v___jp_303_;
}
else
{
uint64_t v_hash_309_; 
v_hash_309_ = lean_ctor_get_uint64(v_x_301_, sizeof(void*)*2);
v___y_304_ = v_hash_309_;
goto v___jp_303_;
}
v___jp_303_:
{
size_t v___x_305_; size_t v___x_306_; lean_object* v___x_307_; 
v___x_305_ = lean_uint64_to_usize(v___y_304_);
v___x_306_ = ((size_t)1ULL);
v___x_307_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(v_x_300_, v___x_305_, v___x_306_, v_x_301_, v_x_302_);
return v___x_307_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16___redArg(lean_object* v_x_310_, lean_object* v_x_311_){
_start:
{
if (lean_obj_tag(v_x_311_) == 0)
{
return v_x_310_;
}
else
{
lean_object* v_key_312_; lean_object* v_value_313_; lean_object* v_tail_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_340_; 
v_key_312_ = lean_ctor_get(v_x_311_, 0);
v_value_313_ = lean_ctor_get(v_x_311_, 1);
v_tail_314_ = lean_ctor_get(v_x_311_, 2);
v_isSharedCheck_340_ = !lean_is_exclusive(v_x_311_);
if (v_isSharedCheck_340_ == 0)
{
v___x_316_ = v_x_311_;
v_isShared_317_ = v_isSharedCheck_340_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_tail_314_);
lean_inc(v_value_313_);
lean_inc(v_key_312_);
lean_dec(v_x_311_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_340_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___x_318_; uint64_t v___y_320_; 
v___x_318_ = lean_array_get_size(v_x_310_);
if (lean_obj_tag(v_key_312_) == 0)
{
uint64_t v___x_338_; 
v___x_338_ = 1723ULL;
v___y_320_ = v___x_338_;
goto v___jp_319_;
}
else
{
uint64_t v_hash_339_; 
v_hash_339_ = lean_ctor_get_uint64(v_key_312_, sizeof(void*)*2);
v___y_320_ = v_hash_339_;
goto v___jp_319_;
}
v___jp_319_:
{
uint64_t v___x_321_; uint64_t v___x_322_; uint64_t v_fold_323_; uint64_t v___x_324_; uint64_t v___x_325_; uint64_t v___x_326_; size_t v___x_327_; size_t v___x_328_; size_t v___x_329_; size_t v___x_330_; size_t v___x_331_; lean_object* v___x_332_; lean_object* v___x_334_; 
v___x_321_ = 32ULL;
v___x_322_ = lean_uint64_shift_right(v___y_320_, v___x_321_);
v_fold_323_ = lean_uint64_xor(v___y_320_, v___x_322_);
v___x_324_ = 16ULL;
v___x_325_ = lean_uint64_shift_right(v_fold_323_, v___x_324_);
v___x_326_ = lean_uint64_xor(v_fold_323_, v___x_325_);
v___x_327_ = lean_uint64_to_usize(v___x_326_);
v___x_328_ = lean_usize_of_nat(v___x_318_);
v___x_329_ = ((size_t)1ULL);
v___x_330_ = lean_usize_sub(v___x_328_, v___x_329_);
v___x_331_ = lean_usize_land(v___x_327_, v___x_330_);
v___x_332_ = lean_array_uget_borrowed(v_x_310_, v___x_331_);
lean_inc(v___x_332_);
if (v_isShared_317_ == 0)
{
lean_ctor_set(v___x_316_, 2, v___x_332_);
v___x_334_ = v___x_316_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v_key_312_);
lean_ctor_set(v_reuseFailAlloc_337_, 1, v_value_313_);
lean_ctor_set(v_reuseFailAlloc_337_, 2, v___x_332_);
v___x_334_ = v_reuseFailAlloc_337_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
lean_object* v___x_335_; 
v___x_335_ = lean_array_uset(v_x_310_, v___x_331_, v___x_334_);
v_x_310_ = v___x_335_;
v_x_311_ = v_tail_314_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14___redArg(lean_object* v_i_341_, lean_object* v_source_342_, lean_object* v_target_343_){
_start:
{
lean_object* v___x_344_; uint8_t v___x_345_; 
v___x_344_ = lean_array_get_size(v_source_342_);
v___x_345_ = lean_nat_dec_lt(v_i_341_, v___x_344_);
if (v___x_345_ == 0)
{
lean_dec_ref(v_source_342_);
lean_dec(v_i_341_);
return v_target_343_;
}
else
{
lean_object* v_es_346_; lean_object* v___x_347_; lean_object* v_source_348_; lean_object* v_target_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v_es_346_ = lean_array_fget(v_source_342_, v_i_341_);
v___x_347_ = lean_box(0);
v_source_348_ = lean_array_fset(v_source_342_, v_i_341_, v___x_347_);
v_target_349_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16___redArg(v_target_343_, v_es_346_);
v___x_350_ = lean_unsigned_to_nat(1u);
v___x_351_ = lean_nat_add(v_i_341_, v___x_350_);
lean_dec(v_i_341_);
v_i_341_ = v___x_351_;
v_source_342_ = v_source_348_;
v_target_343_ = v_target_349_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9___redArg(lean_object* v_data_353_){
_start:
{
lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v_nbuckets_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_354_ = lean_array_get_size(v_data_353_);
v___x_355_ = lean_unsigned_to_nat(2u);
v_nbuckets_356_ = lean_nat_mul(v___x_354_, v___x_355_);
v___x_357_ = lean_unsigned_to_nat(0u);
v___x_358_ = lean_box(0);
v___x_359_ = lean_mk_array(v_nbuckets_356_, v___x_358_);
v___x_360_ = lean_array_propagate_mark(v_data_353_, v___x_359_);
v___x_361_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14___redArg(v___x_357_, v_data_353_, v___x_360_);
return v___x_361_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg(lean_object* v_a_362_, lean_object* v_x_363_){
_start:
{
if (lean_obj_tag(v_x_363_) == 0)
{
uint8_t v___x_364_; 
v___x_364_ = 0;
return v___x_364_;
}
else
{
lean_object* v_key_365_; lean_object* v_tail_366_; uint8_t v___x_367_; 
v_key_365_ = lean_ctor_get(v_x_363_, 0);
v_tail_366_ = lean_ctor_get(v_x_363_, 2);
v___x_367_ = lean_name_eq(v_key_365_, v_a_362_);
if (v___x_367_ == 0)
{
v_x_363_ = v_tail_366_;
goto _start;
}
else
{
return v___x_367_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg___boxed(lean_object* v_a_369_, lean_object* v_x_370_){
_start:
{
uint8_t v_res_371_; lean_object* v_r_372_; 
v_res_371_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg(v_a_369_, v_x_370_);
lean_dec(v_x_370_);
lean_dec(v_a_369_);
v_r_372_ = lean_box(v_res_371_);
return v_r_372_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10___redArg(lean_object* v_a_373_, lean_object* v_b_374_, lean_object* v_x_375_){
_start:
{
if (lean_obj_tag(v_x_375_) == 0)
{
lean_dec(v_b_374_);
lean_dec(v_a_373_);
return v_x_375_;
}
else
{
lean_object* v_key_376_; lean_object* v_value_377_; lean_object* v_tail_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_390_; 
v_key_376_ = lean_ctor_get(v_x_375_, 0);
v_value_377_ = lean_ctor_get(v_x_375_, 1);
v_tail_378_ = lean_ctor_get(v_x_375_, 2);
v_isSharedCheck_390_ = !lean_is_exclusive(v_x_375_);
if (v_isSharedCheck_390_ == 0)
{
v___x_380_ = v_x_375_;
v_isShared_381_ = v_isSharedCheck_390_;
goto v_resetjp_379_;
}
else
{
lean_inc(v_tail_378_);
lean_inc(v_value_377_);
lean_inc(v_key_376_);
lean_dec(v_x_375_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_390_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
uint8_t v___x_382_; 
v___x_382_ = lean_name_eq(v_key_376_, v_a_373_);
if (v___x_382_ == 0)
{
lean_object* v___x_383_; lean_object* v___x_385_; 
v___x_383_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10___redArg(v_a_373_, v_b_374_, v_tail_378_);
if (v_isShared_381_ == 0)
{
lean_ctor_set(v___x_380_, 2, v___x_383_);
v___x_385_ = v___x_380_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v_key_376_);
lean_ctor_set(v_reuseFailAlloc_386_, 1, v_value_377_);
lean_ctor_set(v_reuseFailAlloc_386_, 2, v___x_383_);
v___x_385_ = v_reuseFailAlloc_386_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
return v___x_385_;
}
}
else
{
lean_object* v___x_388_; 
lean_dec(v_value_377_);
lean_dec(v_key_376_);
if (v_isShared_381_ == 0)
{
lean_ctor_set(v___x_380_, 1, v_b_374_);
lean_ctor_set(v___x_380_, 0, v_a_373_);
v___x_388_ = v___x_380_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v_a_373_);
lean_ctor_set(v_reuseFailAlloc_389_, 1, v_b_374_);
lean_ctor_set(v_reuseFailAlloc_389_, 2, v_tail_378_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4___redArg(lean_object* v_m_391_, lean_object* v_a_392_, lean_object* v_b_393_){
_start:
{
lean_object* v_size_394_; lean_object* v_buckets_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_441_; 
v_size_394_ = lean_ctor_get(v_m_391_, 0);
v_buckets_395_ = lean_ctor_get(v_m_391_, 1);
v_isSharedCheck_441_ = !lean_is_exclusive(v_m_391_);
if (v_isSharedCheck_441_ == 0)
{
v___x_397_ = v_m_391_;
v_isShared_398_ = v_isSharedCheck_441_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_buckets_395_);
lean_inc(v_size_394_);
lean_dec(v_m_391_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_441_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_399_; uint64_t v___y_401_; 
v___x_399_ = lean_array_get_size(v_buckets_395_);
if (lean_obj_tag(v_a_392_) == 0)
{
uint64_t v___x_439_; 
v___x_439_ = 1723ULL;
v___y_401_ = v___x_439_;
goto v___jp_400_;
}
else
{
uint64_t v_hash_440_; 
v_hash_440_ = lean_ctor_get_uint64(v_a_392_, sizeof(void*)*2);
v___y_401_ = v_hash_440_;
goto v___jp_400_;
}
v___jp_400_:
{
uint64_t v___x_402_; uint64_t v___x_403_; uint64_t v_fold_404_; uint64_t v___x_405_; uint64_t v___x_406_; uint64_t v___x_407_; size_t v___x_408_; size_t v___x_409_; size_t v___x_410_; size_t v___x_411_; size_t v___x_412_; lean_object* v_bkt_413_; uint8_t v___x_414_; 
v___x_402_ = 32ULL;
v___x_403_ = lean_uint64_shift_right(v___y_401_, v___x_402_);
v_fold_404_ = lean_uint64_xor(v___y_401_, v___x_403_);
v___x_405_ = 16ULL;
v___x_406_ = lean_uint64_shift_right(v_fold_404_, v___x_405_);
v___x_407_ = lean_uint64_xor(v_fold_404_, v___x_406_);
v___x_408_ = lean_uint64_to_usize(v___x_407_);
v___x_409_ = lean_usize_of_nat(v___x_399_);
v___x_410_ = ((size_t)1ULL);
v___x_411_ = lean_usize_sub(v___x_409_, v___x_410_);
v___x_412_ = lean_usize_land(v___x_408_, v___x_411_);
v_bkt_413_ = lean_array_uget_borrowed(v_buckets_395_, v___x_412_);
v___x_414_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg(v_a_392_, v_bkt_413_);
if (v___x_414_ == 0)
{
lean_object* v___x_415_; lean_object* v_size_x27_416_; lean_object* v___x_417_; lean_object* v_buckets_x27_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; uint8_t v___x_424_; 
v___x_415_ = lean_unsigned_to_nat(1u);
v_size_x27_416_ = lean_nat_add(v_size_394_, v___x_415_);
lean_dec(v_size_394_);
lean_inc(v_bkt_413_);
v___x_417_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_417_, 0, v_a_392_);
lean_ctor_set(v___x_417_, 1, v_b_393_);
lean_ctor_set(v___x_417_, 2, v_bkt_413_);
v_buckets_x27_418_ = lean_array_uset(v_buckets_395_, v___x_412_, v___x_417_);
v___x_419_ = lean_unsigned_to_nat(4u);
v___x_420_ = lean_nat_mul(v_size_x27_416_, v___x_419_);
v___x_421_ = lean_unsigned_to_nat(3u);
v___x_422_ = lean_nat_div(v___x_420_, v___x_421_);
lean_dec(v___x_420_);
v___x_423_ = lean_array_get_size(v_buckets_x27_418_);
v___x_424_ = lean_nat_dec_le(v___x_422_, v___x_423_);
lean_dec(v___x_422_);
if (v___x_424_ == 0)
{
lean_object* v_val_425_; lean_object* v___x_427_; 
v_val_425_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9___redArg(v_buckets_x27_418_);
if (v_isShared_398_ == 0)
{
lean_ctor_set(v___x_397_, 1, v_val_425_);
lean_ctor_set(v___x_397_, 0, v_size_x27_416_);
v___x_427_ = v___x_397_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v_size_x27_416_);
lean_ctor_set(v_reuseFailAlloc_428_, 1, v_val_425_);
v___x_427_ = v_reuseFailAlloc_428_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
return v___x_427_;
}
}
else
{
lean_object* v___x_430_; 
if (v_isShared_398_ == 0)
{
lean_ctor_set(v___x_397_, 1, v_buckets_x27_418_);
lean_ctor_set(v___x_397_, 0, v_size_x27_416_);
v___x_430_ = v___x_397_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v_size_x27_416_);
lean_ctor_set(v_reuseFailAlloc_431_, 1, v_buckets_x27_418_);
v___x_430_ = v_reuseFailAlloc_431_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
return v___x_430_;
}
}
}
else
{
lean_object* v___x_432_; lean_object* v_buckets_x27_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_437_; 
lean_inc(v_bkt_413_);
v___x_432_ = lean_box(0);
v_buckets_x27_433_ = lean_array_uset(v_buckets_395_, v___x_412_, v___x_432_);
v___x_434_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10___redArg(v_a_392_, v_b_393_, v_bkt_413_);
v___x_435_ = lean_array_uset(v_buckets_x27_433_, v___x_412_, v___x_434_);
if (v_isShared_398_ == 0)
{
lean_ctor_set(v___x_397_, 1, v___x_435_);
v___x_437_ = v___x_397_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_size_394_);
lean_ctor_set(v_reuseFailAlloc_438_, 1, v___x_435_);
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
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1___redArg(lean_object* v_x_442_, lean_object* v_x_443_, lean_object* v_x_444_){
_start:
{
uint8_t v_stage_u2081_445_; 
v_stage_u2081_445_ = lean_ctor_get_uint8(v_x_442_, sizeof(void*)*2);
if (v_stage_u2081_445_ == 0)
{
lean_object* v_map_u2081_446_; lean_object* v_map_u2082_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_455_; 
v_map_u2081_446_ = lean_ctor_get(v_x_442_, 0);
v_map_u2082_447_ = lean_ctor_get(v_x_442_, 1);
v_isSharedCheck_455_ = !lean_is_exclusive(v_x_442_);
if (v_isSharedCheck_455_ == 0)
{
v___x_449_ = v_x_442_;
v_isShared_450_ = v_isSharedCheck_455_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_map_u2082_447_);
lean_inc(v_map_u2081_446_);
lean_dec(v_x_442_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_455_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_451_; lean_object* v___x_453_; 
v___x_451_ = l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3___redArg(v_map_u2082_447_, v_x_443_, v_x_444_);
if (v_isShared_450_ == 0)
{
lean_ctor_set(v___x_449_, 1, v___x_451_);
v___x_453_ = v___x_449_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_map_u2081_446_);
lean_ctor_set(v_reuseFailAlloc_454_, 1, v___x_451_);
lean_ctor_set_uint8(v_reuseFailAlloc_454_, sizeof(void*)*2, v_stage_u2081_445_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
else
{
lean_object* v_map_u2081_456_; lean_object* v_map_u2082_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_465_; 
v_map_u2081_456_ = lean_ctor_get(v_x_442_, 0);
v_map_u2082_457_ = lean_ctor_get(v_x_442_, 1);
v_isSharedCheck_465_ = !lean_is_exclusive(v_x_442_);
if (v_isSharedCheck_465_ == 0)
{
v___x_459_ = v_x_442_;
v_isShared_460_ = v_isSharedCheck_465_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_map_u2082_457_);
lean_inc(v_map_u2081_456_);
lean_dec(v_x_442_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_465_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_461_; lean_object* v___x_463_; 
v___x_461_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4___redArg(v_map_u2081_456_, v_x_443_, v_x_444_);
if (v_isShared_460_ == 0)
{
lean_ctor_set(v___x_459_, 0, v___x_461_);
v___x_463_ = v___x_459_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v___x_461_);
lean_ctor_set(v_reuseFailAlloc_464_, 1, v_map_u2082_457_);
lean_ctor_set_uint8(v_reuseFailAlloc_464_, sizeof(void*)*2, v_stage_u2081_445_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg(lean_object* v_a_466_, lean_object* v_x_467_){
_start:
{
if (lean_obj_tag(v_x_467_) == 0)
{
lean_object* v___x_468_; 
v___x_468_ = lean_box(0);
return v___x_468_;
}
else
{
lean_object* v_key_469_; lean_object* v_value_470_; lean_object* v_tail_471_; uint8_t v___x_472_; 
v_key_469_ = lean_ctor_get(v_x_467_, 0);
v_value_470_ = lean_ctor_get(v_x_467_, 1);
v_tail_471_ = lean_ctor_get(v_x_467_, 2);
v___x_472_ = lean_name_eq(v_key_469_, v_a_466_);
if (v___x_472_ == 0)
{
v_x_467_ = v_tail_471_;
goto _start;
}
else
{
lean_object* v___x_474_; 
lean_inc(v_value_470_);
v___x_474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_474_, 0, v_value_470_);
return v___x_474_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_a_475_, lean_object* v_x_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg(v_a_475_, v_x_476_);
lean_dec(v_x_476_);
lean_dec(v_a_475_);
return v_res_477_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(lean_object* v_m_478_, lean_object* v_a_479_){
_start:
{
lean_object* v_buckets_480_; lean_object* v___x_481_; uint64_t v___y_483_; 
v_buckets_480_ = lean_ctor_get(v_m_478_, 1);
v___x_481_ = lean_array_get_size(v_buckets_480_);
if (lean_obj_tag(v_a_479_) == 0)
{
uint64_t v___x_497_; 
v___x_497_ = 1723ULL;
v___y_483_ = v___x_497_;
goto v___jp_482_;
}
else
{
uint64_t v_hash_498_; 
v_hash_498_ = lean_ctor_get_uint64(v_a_479_, sizeof(void*)*2);
v___y_483_ = v_hash_498_;
goto v___jp_482_;
}
v___jp_482_:
{
uint64_t v___x_484_; uint64_t v___x_485_; uint64_t v_fold_486_; uint64_t v___x_487_; uint64_t v___x_488_; uint64_t v___x_489_; size_t v___x_490_; size_t v___x_491_; size_t v___x_492_; size_t v___x_493_; size_t v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_484_ = 32ULL;
v___x_485_ = lean_uint64_shift_right(v___y_483_, v___x_484_);
v_fold_486_ = lean_uint64_xor(v___y_483_, v___x_485_);
v___x_487_ = 16ULL;
v___x_488_ = lean_uint64_shift_right(v_fold_486_, v___x_487_);
v___x_489_ = lean_uint64_xor(v_fold_486_, v___x_488_);
v___x_490_ = lean_uint64_to_usize(v___x_489_);
v___x_491_ = lean_usize_of_nat(v___x_481_);
v___x_492_ = ((size_t)1ULL);
v___x_493_ = lean_usize_sub(v___x_491_, v___x_492_);
v___x_494_ = lean_usize_land(v___x_490_, v___x_493_);
v___x_495_ = lean_array_uget_borrowed(v_buckets_480_, v___x_494_);
v___x_496_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg(v_a_479_, v___x_495_);
return v___x_496_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg___boxed(lean_object* v_m_499_, lean_object* v_a_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(v_m_499_, v_a_500_);
lean_dec(v_a_500_);
lean_dec_ref(v_m_499_);
return v_res_501_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_keys_502_, lean_object* v_vals_503_, lean_object* v_i_504_, lean_object* v_k_505_){
_start:
{
lean_object* v___x_506_; uint8_t v___x_507_; 
v___x_506_ = lean_array_get_size(v_keys_502_);
v___x_507_ = lean_nat_dec_lt(v_i_504_, v___x_506_);
if (v___x_507_ == 0)
{
lean_object* v___x_508_; 
lean_dec(v_i_504_);
v___x_508_ = lean_box(0);
return v___x_508_;
}
else
{
lean_object* v_k_x27_509_; uint8_t v___x_510_; 
v_k_x27_509_ = lean_array_fget_borrowed(v_keys_502_, v_i_504_);
v___x_510_ = lean_name_eq(v_k_505_, v_k_x27_509_);
if (v___x_510_ == 0)
{
lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_511_ = lean_unsigned_to_nat(1u);
v___x_512_ = lean_nat_add(v_i_504_, v___x_511_);
lean_dec(v_i_504_);
v_i_504_ = v___x_512_;
goto _start;
}
else
{
lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_514_ = lean_array_fget_borrowed(v_vals_503_, v_i_504_);
lean_dec(v_i_504_);
lean_inc(v___x_514_);
v___x_515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_515_, 0, v___x_514_);
return v___x_515_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_keys_516_, lean_object* v_vals_517_, lean_object* v_i_518_, lean_object* v_k_519_){
_start:
{
lean_object* v_res_520_; 
v_res_520_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg(v_keys_516_, v_vals_517_, v_i_518_, v_k_519_);
lean_dec(v_k_519_);
lean_dec_ref(v_vals_517_);
lean_dec_ref(v_keys_516_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg(lean_object* v_x_521_, size_t v_x_522_, lean_object* v_x_523_){
_start:
{
if (lean_obj_tag(v_x_521_) == 0)
{
lean_object* v_es_524_; lean_object* v___x_525_; size_t v___x_526_; size_t v___x_527_; lean_object* v_j_528_; lean_object* v___x_529_; 
v_es_524_ = lean_ctor_get(v_x_521_, 0);
v___x_525_ = lean_box(2);
v___x_526_ = ((size_t)31ULL);
v___x_527_ = lean_usize_land(v_x_522_, v___x_526_);
v_j_528_ = lean_usize_to_nat(v___x_527_);
v___x_529_ = lean_array_get_borrowed(v___x_525_, v_es_524_, v_j_528_);
lean_dec(v_j_528_);
switch(lean_obj_tag(v___x_529_))
{
case 0:
{
lean_object* v_key_530_; lean_object* v_val_531_; uint8_t v___x_532_; 
v_key_530_ = lean_ctor_get(v___x_529_, 0);
v_val_531_ = lean_ctor_get(v___x_529_, 1);
v___x_532_ = lean_name_eq(v_x_523_, v_key_530_);
if (v___x_532_ == 0)
{
lean_object* v___x_533_; 
v___x_533_ = lean_box(0);
return v___x_533_;
}
else
{
lean_object* v___x_534_; 
lean_inc(v_val_531_);
v___x_534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_534_, 0, v_val_531_);
return v___x_534_;
}
}
case 1:
{
lean_object* v_node_535_; size_t v___x_536_; size_t v___x_537_; 
v_node_535_ = lean_ctor_get(v___x_529_, 0);
v___x_536_ = ((size_t)5ULL);
v___x_537_ = lean_usize_shift_right(v_x_522_, v___x_536_);
v_x_521_ = v_node_535_;
v_x_522_ = v___x_537_;
goto _start;
}
default: 
{
lean_object* v___x_539_; 
v___x_539_ = lean_box(0);
return v___x_539_;
}
}
}
else
{
lean_object* v_ks_540_; lean_object* v_vs_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
v_ks_540_ = lean_ctor_get(v_x_521_, 0);
v_vs_541_ = lean_ctor_get(v_x_521_, 1);
v___x_542_ = lean_unsigned_to_nat(0u);
v___x_543_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg(v_ks_540_, v_vs_541_, v___x_542_, v_x_523_);
return v___x_543_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_544_, lean_object* v_x_545_, lean_object* v_x_546_){
_start:
{
size_t v_x_1579__boxed_547_; lean_object* v_res_548_; 
v_x_1579__boxed_547_ = lean_unbox_usize(v_x_545_);
lean_dec(v_x_545_);
v_res_548_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg(v_x_544_, v_x_1579__boxed_547_, v_x_546_);
lean_dec(v_x_546_);
lean_dec_ref(v_x_544_);
return v_res_548_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg(lean_object* v_x_549_, lean_object* v_x_550_){
_start:
{
uint64_t v___y_552_; 
if (lean_obj_tag(v_x_550_) == 0)
{
uint64_t v___x_555_; 
v___x_555_ = 1723ULL;
v___y_552_ = v___x_555_;
goto v___jp_551_;
}
else
{
uint64_t v_hash_556_; 
v_hash_556_ = lean_ctor_get_uint64(v_x_550_, sizeof(void*)*2);
v___y_552_ = v_hash_556_;
goto v___jp_551_;
}
v___jp_551_:
{
size_t v___x_553_; lean_object* v___x_554_; 
v___x_553_ = lean_uint64_to_usize(v___y_552_);
v___x_554_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg(v_x_549_, v___x_553_, v_x_550_);
return v___x_554_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg___boxed(lean_object* v_x_557_, lean_object* v_x_558_){
_start:
{
lean_object* v_res_559_; 
v_res_559_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg(v_x_557_, v_x_558_);
lean_dec(v_x_558_);
lean_dec_ref(v_x_557_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(lean_object* v_x_560_, lean_object* v_x_561_){
_start:
{
uint8_t v_stage_u2081_562_; 
v_stage_u2081_562_ = lean_ctor_get_uint8(v_x_560_, sizeof(void*)*2);
if (v_stage_u2081_562_ == 0)
{
lean_object* v_map_u2081_563_; lean_object* v_map_u2082_564_; lean_object* v___x_565_; 
v_map_u2081_563_ = lean_ctor_get(v_x_560_, 0);
v_map_u2082_564_ = lean_ctor_get(v_x_560_, 1);
v___x_565_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg(v_map_u2082_564_, v_x_561_);
if (lean_obj_tag(v___x_565_) == 0)
{
lean_object* v___x_566_; 
v___x_566_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(v_map_u2081_563_, v_x_561_);
return v___x_566_;
}
else
{
return v___x_565_;
}
}
else
{
lean_object* v_map_u2081_567_; lean_object* v___x_568_; 
v_map_u2081_567_ = lean_ctor_get(v_x_560_, 0);
v___x_568_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(v_map_u2081_567_, v_x_561_);
return v___x_568_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg___boxed(lean_object* v_x_569_, lean_object* v_x_570_){
_start:
{
lean_object* v_res_571_; 
v_res_571_ = l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(v_x_569_, v_x_570_);
lean_dec(v_x_570_);
lean_dec_ref(v_x_569_);
return v_res_571_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_addAliasEntry_spec__2(lean_object* v_a_572_, lean_object* v_x_573_){
_start:
{
if (lean_obj_tag(v_x_573_) == 0)
{
uint8_t v___x_574_; 
v___x_574_ = 0;
return v___x_574_;
}
else
{
lean_object* v_head_575_; lean_object* v_tail_576_; uint8_t v___x_577_; 
v_head_575_ = lean_ctor_get(v_x_573_, 0);
v_tail_576_ = lean_ctor_get(v_x_573_, 1);
v___x_577_ = lean_name_eq(v_a_572_, v_head_575_);
if (v___x_577_ == 0)
{
v_x_573_ = v_tail_576_;
goto _start;
}
else
{
return v___x_577_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_addAliasEntry_spec__2___boxed(lean_object* v_a_579_, lean_object* v_x_580_){
_start:
{
uint8_t v_res_581_; lean_object* v_r_582_; 
v_res_581_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_a_579_, v_x_580_);
lean_dec(v_x_580_);
lean_dec(v_a_579_);
v_r_582_ = lean_box(v_res_581_);
return v_r_582_;
}
}
LEAN_EXPORT lean_object* l_Lean_addAliasEntry(lean_object* v_s_583_, lean_object* v_e_584_){
_start:
{
lean_object* v_fst_585_; lean_object* v_snd_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_602_; 
v_fst_585_ = lean_ctor_get(v_e_584_, 0);
v_snd_586_ = lean_ctor_get(v_e_584_, 1);
v_isSharedCheck_602_ = !lean_is_exclusive(v_e_584_);
if (v_isSharedCheck_602_ == 0)
{
v___x_588_ = v_e_584_;
v_isShared_589_ = v_isSharedCheck_602_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_snd_586_);
lean_inc(v_fst_585_);
lean_dec(v_e_584_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_602_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
lean_object* v___x_590_; 
v___x_590_ = l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(v_s_583_, v_fst_585_);
if (lean_obj_tag(v___x_590_) == 0)
{
lean_object* v___x_591_; lean_object* v___x_593_; 
v___x_591_ = lean_box(0);
if (v_isShared_589_ == 0)
{
lean_ctor_set_tag(v___x_588_, 1);
lean_ctor_set(v___x_588_, 1, v___x_591_);
lean_ctor_set(v___x_588_, 0, v_snd_586_);
v___x_593_ = v___x_588_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v_snd_586_);
lean_ctor_set(v_reuseFailAlloc_595_, 1, v___x_591_);
v___x_593_ = v_reuseFailAlloc_595_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
lean_object* v___x_594_; 
v___x_594_ = l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1___redArg(v_s_583_, v_fst_585_, v___x_593_);
return v___x_594_;
}
}
else
{
lean_object* v_val_596_; uint8_t v___x_597_; 
v_val_596_ = lean_ctor_get(v___x_590_, 0);
lean_inc(v_val_596_);
lean_dec_ref_known(v___x_590_, 1);
v___x_597_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_snd_586_, v_val_596_);
if (v___x_597_ == 0)
{
lean_object* v___x_599_; 
if (v_isShared_589_ == 0)
{
lean_ctor_set_tag(v___x_588_, 1);
lean_ctor_set(v___x_588_, 1, v_val_596_);
lean_ctor_set(v___x_588_, 0, v_snd_586_);
v___x_599_ = v___x_588_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v_snd_586_);
lean_ctor_set(v_reuseFailAlloc_601_, 1, v_val_596_);
v___x_599_ = v_reuseFailAlloc_601_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
lean_object* v___x_600_; 
v___x_600_ = l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1___redArg(v_s_583_, v_fst_585_, v___x_599_);
return v___x_600_;
}
}
else
{
lean_dec(v_val_596_);
lean_del_object(v___x_588_);
lean_dec(v_snd_586_);
lean_dec(v_fst_585_);
return v_s_583_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0(lean_object* v_00_u03b2_603_, lean_object* v_x_604_, lean_object* v_x_605_){
_start:
{
lean_object* v___x_606_; 
v___x_606_ = l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(v_x_604_, v_x_605_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___boxed(lean_object* v_00_u03b2_607_, lean_object* v_x_608_, lean_object* v_x_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0(v_00_u03b2_607_, v_x_608_, v_x_609_);
lean_dec(v_x_609_);
lean_dec_ref(v_x_608_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1(lean_object* v_00_u03b2_611_, lean_object* v_x_612_, lean_object* v_x_613_, lean_object* v_x_614_){
_start:
{
lean_object* v___x_615_; 
v___x_615_ = l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1___redArg(v_x_612_, v_x_613_, v_x_614_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0(lean_object* v_00_u03b2_616_, lean_object* v_x_617_, lean_object* v_x_618_){
_start:
{
lean_object* v___x_619_; 
v___x_619_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg(v_x_617_, v_x_618_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___boxed(lean_object* v_00_u03b2_620_, lean_object* v_x_621_, lean_object* v_x_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0(v_00_u03b2_620_, v_x_621_, v_x_622_);
lean_dec(v_x_622_);
lean_dec_ref(v_x_621_);
return v_res_623_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1(lean_object* v_00_u03b2_624_, lean_object* v_m_625_, lean_object* v_a_626_){
_start:
{
lean_object* v___x_627_; 
v___x_627_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(v_m_625_, v_a_626_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___boxed(lean_object* v_00_u03b2_628_, lean_object* v_m_629_, lean_object* v_a_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1(v_00_u03b2_628_, v_m_629_, v_a_630_);
lean_dec(v_a_630_);
lean_dec_ref(v_m_629_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3(lean_object* v_00_u03b2_632_, lean_object* v_x_633_, lean_object* v_x_634_, lean_object* v_x_635_){
_start:
{
lean_object* v___x_636_; 
v___x_636_ = l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3___redArg(v_x_633_, v_x_634_, v_x_635_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4(lean_object* v_00_u03b2_637_, lean_object* v_m_638_, lean_object* v_a_639_, lean_object* v_b_640_){
_start:
{
lean_object* v___x_641_; 
v___x_641_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4___redArg(v_m_638_, v_a_639_, v_b_640_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_642_, lean_object* v_x_643_, size_t v_x_644_, lean_object* v_x_645_){
_start:
{
lean_object* v___x_646_; 
v___x_646_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg(v_x_643_, v_x_644_, v_x_645_);
return v___x_646_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_647_, lean_object* v_x_648_, lean_object* v_x_649_, lean_object* v_x_650_){
_start:
{
size_t v_x_1744__boxed_651_; lean_object* v_res_652_; 
v_x_1744__boxed_651_ = lean_unbox_usize(v_x_649_);
lean_dec(v_x_649_);
v_res_652_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1(v_00_u03b2_647_, v_x_648_, v_x_1744__boxed_651_, v_x_650_);
lean_dec(v_x_650_);
lean_dec_ref(v_x_648_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_653_, lean_object* v_a_654_, lean_object* v_x_655_){
_start:
{
lean_object* v___x_656_; 
v___x_656_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg(v_a_654_, v_x_655_);
return v___x_656_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_657_, lean_object* v_a_658_, lean_object* v_x_659_){
_start:
{
lean_object* v_res_660_; 
v_res_660_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3(v_00_u03b2_657_, v_a_658_, v_x_659_);
lean_dec(v_x_659_);
lean_dec(v_a_658_);
return v_res_660_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6(lean_object* v_00_u03b2_661_, lean_object* v_x_662_, size_t v_x_663_, size_t v_x_664_, lean_object* v_x_665_, lean_object* v_x_666_){
_start:
{
lean_object* v___x_667_; 
v___x_667_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(v_x_662_, v_x_663_, v_x_664_, v_x_665_, v_x_666_);
return v___x_667_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___boxed(lean_object* v_00_u03b2_668_, lean_object* v_x_669_, lean_object* v_x_670_, lean_object* v_x_671_, lean_object* v_x_672_, lean_object* v_x_673_){
_start:
{
size_t v_x_1760__boxed_674_; size_t v_x_1761__boxed_675_; lean_object* v_res_676_; 
v_x_1760__boxed_674_ = lean_unbox_usize(v_x_670_);
lean_dec(v_x_670_);
v_x_1761__boxed_675_ = lean_unbox_usize(v_x_671_);
lean_dec(v_x_671_);
v_res_676_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6(v_00_u03b2_668_, v_x_669_, v_x_1760__boxed_674_, v_x_1761__boxed_675_, v_x_672_, v_x_673_);
return v_res_676_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8(lean_object* v_00_u03b2_677_, lean_object* v_a_678_, lean_object* v_x_679_){
_start:
{
uint8_t v___x_680_; 
v___x_680_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg(v_a_678_, v_x_679_);
return v___x_680_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___boxed(lean_object* v_00_u03b2_681_, lean_object* v_a_682_, lean_object* v_x_683_){
_start:
{
uint8_t v_res_684_; lean_object* v_r_685_; 
v_res_684_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8(v_00_u03b2_681_, v_a_682_, v_x_683_);
lean_dec(v_x_683_);
lean_dec(v_a_682_);
v_r_685_ = lean_box(v_res_684_);
return v_r_685_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9(lean_object* v_00_u03b2_686_, lean_object* v_data_687_){
_start:
{
lean_object* v___x_688_; 
v___x_688_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9___redArg(v_data_687_);
return v___x_688_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10(lean_object* v_00_u03b2_689_, lean_object* v_a_690_, lean_object* v_b_691_, lean_object* v_x_692_){
_start:
{
lean_object* v___x_693_; 
v___x_693_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10___redArg(v_a_690_, v_b_691_, v_x_692_);
return v___x_693_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_694_, lean_object* v_keys_695_, lean_object* v_vals_696_, lean_object* v_heq_697_, lean_object* v_i_698_, lean_object* v_k_699_){
_start:
{
lean_object* v___x_700_; 
v___x_700_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg(v_keys_695_, v_vals_696_, v_i_698_, v_k_699_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b2_701_, lean_object* v_keys_702_, lean_object* v_vals_703_, lean_object* v_heq_704_, lean_object* v_i_705_, lean_object* v_k_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4(v_00_u03b2_701_, v_keys_702_, v_vals_703_, v_heq_704_, v_i_705_, v_k_706_);
lean_dec(v_k_706_);
lean_dec_ref(v_vals_703_);
lean_dec_ref(v_keys_702_);
return v_res_707_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9(lean_object* v_00_u03b2_708_, lean_object* v_n_709_, lean_object* v_k_710_, lean_object* v_v_711_){
_start:
{
lean_object* v___x_712_; 
v___x_712_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9___redArg(v_n_709_, v_k_710_, v_v_711_);
return v___x_712_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10(lean_object* v_00_u03b2_713_, size_t v_depth_714_, lean_object* v_keys_715_, lean_object* v_vals_716_, lean_object* v_heq_717_, lean_object* v_i_718_, lean_object* v_entries_719_){
_start:
{
lean_object* v___x_720_; 
v___x_720_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg(v_depth_714_, v_keys_715_, v_vals_716_, v_i_718_, v_entries_719_);
return v___x_720_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___boxed(lean_object* v_00_u03b2_721_, lean_object* v_depth_722_, lean_object* v_keys_723_, lean_object* v_vals_724_, lean_object* v_heq_725_, lean_object* v_i_726_, lean_object* v_entries_727_){
_start:
{
size_t v_depth_boxed_728_; lean_object* v_res_729_; 
v_depth_boxed_728_ = lean_unbox_usize(v_depth_722_);
lean_dec(v_depth_722_);
v_res_729_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10(v_00_u03b2_721_, v_depth_boxed_728_, v_keys_723_, v_vals_724_, v_heq_725_, v_i_726_, v_entries_727_);
lean_dec_ref(v_vals_724_);
lean_dec_ref(v_keys_723_);
return v_res_729_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14(lean_object* v_00_u03b2_730_, lean_object* v_i_731_, lean_object* v_source_732_, lean_object* v_target_733_){
_start:
{
lean_object* v___x_734_; 
v___x_734_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14___redArg(v_i_731_, v_source_732_, v_target_733_);
return v___x_734_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11(lean_object* v_00_u03b2_735_, lean_object* v_x_736_, lean_object* v_x_737_, lean_object* v_x_738_, lean_object* v_x_739_){
_start:
{
lean_object* v___x_740_; 
v___x_740_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11___redArg(v_x_736_, v_x_737_, v_x_738_, v_x_739_);
return v___x_740_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16(lean_object* v_00_u03b2_741_, lean_object* v_x_742_, lean_object* v_x_743_){
_start:
{
lean_object* v___x_744_; 
v___x_744_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16___redArg(v_x_742_, v_x_743_);
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__1___redArg(lean_object* v_m_745_){
_start:
{
uint8_t v_stage_u2081_746_; 
v_stage_u2081_746_ = lean_ctor_get_uint8(v_m_745_, sizeof(void*)*2);
if (v_stage_u2081_746_ == 0)
{
return v_m_745_;
}
else
{
lean_object* v_map_u2081_747_; lean_object* v_map_u2082_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_756_; 
v_map_u2081_747_ = lean_ctor_get(v_m_745_, 0);
v_map_u2082_748_ = lean_ctor_get(v_m_745_, 1);
v_isSharedCheck_756_ = !lean_is_exclusive(v_m_745_);
if (v_isSharedCheck_756_ == 0)
{
v___x_750_ = v_m_745_;
v_isShared_751_ = v_isSharedCheck_756_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_map_u2082_748_);
lean_inc(v_map_u2081_747_);
lean_dec(v_m_745_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_756_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
uint8_t v___x_752_; lean_object* v___x_754_; 
v___x_752_ = 0;
if (v_isShared_751_ == 0)
{
v___x_754_ = v___x_750_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v_map_u2081_747_);
lean_ctor_set(v_reuseFailAlloc_755_, 1, v_map_u2082_748_);
v___x_754_ = v_reuseFailAlloc_755_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
lean_ctor_set_uint8(v___x_754_, sizeof(void*)*2, v___x_752_);
return v___x_754_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__1(lean_object* v_00_u03b2_757_, lean_object* v_m_758_){
_start:
{
lean_object* v___x_759_; 
v___x_759_ = l_Lean_SMap_switch___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__1___redArg(v_m_758_);
return v___x_759_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(lean_object* v_es_760_){
_start:
{
lean_object* v___x_761_; 
v___x_761_ = lean_array_mk(v_es_760_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_as_762_, size_t v_i_763_, size_t v_stop_764_, lean_object* v_b_765_){
_start:
{
uint8_t v___x_766_; 
v___x_766_ = lean_usize_dec_eq(v_i_763_, v_stop_764_);
if (v___x_766_ == 0)
{
lean_object* v___x_767_; lean_object* v___x_768_; size_t v___x_769_; size_t v___x_770_; 
v___x_767_ = lean_array_uget_borrowed(v_as_762_, v_i_763_);
lean_inc(v___x_767_);
v___x_768_ = l_Lean_addAliasEntry(v_b_765_, v___x_767_);
v___x_769_ = ((size_t)1ULL);
v___x_770_ = lean_usize_add(v_i_763_, v___x_769_);
v_i_763_ = v___x_770_;
v_b_765_ = v___x_768_;
goto _start;
}
else
{
return v_b_765_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_as_772_, lean_object* v_i_773_, lean_object* v_stop_774_, lean_object* v_b_775_){
_start:
{
size_t v_i_boxed_776_; size_t v_stop_boxed_777_; lean_object* v_res_778_; 
v_i_boxed_776_ = lean_unbox_usize(v_i_773_);
lean_dec(v_i_773_);
v_stop_boxed_777_ = lean_unbox_usize(v_stop_774_);
lean_dec(v_stop_774_);
v_res_778_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0(v_as_772_, v_i_boxed_776_, v_stop_boxed_777_, v_b_775_);
lean_dec_ref(v_as_772_);
return v_res_778_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_as_779_, size_t v_i_780_, size_t v_stop_781_, lean_object* v_b_782_){
_start:
{
lean_object* v___y_784_; uint8_t v___x_788_; 
v___x_788_ = lean_usize_dec_eq(v_i_780_, v_stop_781_);
if (v___x_788_ == 0)
{
lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; uint8_t v___x_792_; 
v___x_789_ = lean_array_uget_borrowed(v_as_779_, v_i_780_);
v___x_790_ = lean_unsigned_to_nat(0u);
v___x_791_ = lean_array_get_size(v___x_789_);
v___x_792_ = lean_nat_dec_lt(v___x_790_, v___x_791_);
if (v___x_792_ == 0)
{
v___y_784_ = v_b_782_;
goto v___jp_783_;
}
else
{
size_t v___x_793_; size_t v___x_794_; lean_object* v___x_795_; 
v___x_793_ = ((size_t)0ULL);
v___x_794_ = lean_usize_of_nat(v___x_791_);
v___x_795_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0(v___x_789_, v___x_793_, v___x_794_, v_b_782_);
v___y_784_ = v___x_795_;
goto v___jp_783_;
}
}
else
{
return v_b_782_;
}
v___jp_783_:
{
size_t v___x_785_; size_t v___x_786_; 
v___x_785_ = ((size_t)1ULL);
v___x_786_ = lean_usize_add(v_i_780_, v___x_785_);
v_i_780_ = v___x_786_;
v_b_782_ = v___y_784_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object* v_as_796_, lean_object* v_i_797_, lean_object* v_stop_798_, lean_object* v_b_799_){
_start:
{
size_t v_i_boxed_800_; size_t v_stop_boxed_801_; lean_object* v_res_802_; 
v_i_boxed_800_ = lean_unbox_usize(v_i_797_);
lean_dec(v_i_797_);
v_stop_boxed_801_ = lean_unbox_usize(v_stop_798_);
lean_dec(v_stop_798_);
v_res_802_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1(v_as_796_, v_i_boxed_800_, v_stop_boxed_801_, v_b_799_);
lean_dec_ref(v_as_796_);
return v_res_802_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0(lean_object* v_initState_803_, lean_object* v_as_804_){
_start:
{
lean_object* v___x_805_; lean_object* v___x_806_; uint8_t v___x_807_; 
v___x_805_ = lean_unsigned_to_nat(0u);
v___x_806_ = lean_array_get_size(v_as_804_);
v___x_807_ = lean_nat_dec_lt(v___x_805_, v___x_806_);
if (v___x_807_ == 0)
{
return v_initState_803_;
}
else
{
size_t v___x_808_; size_t v___x_809_; lean_object* v___x_810_; 
v___x_808_ = ((size_t)0ULL);
v___x_809_ = lean_usize_of_nat(v___x_806_);
v___x_810_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1(v_as_804_, v___x_808_, v___x_809_, v_initState_803_);
return v___x_810_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0___boxed(lean_object* v_initState_811_, lean_object* v_as_812_){
_start:
{
lean_object* v_res_813_; 
v_res_813_ = l_Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0(v_initState_811_, v_as_812_);
lean_dec_ref(v_as_812_);
return v_res_813_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_814_ = lean_box(0);
v___x_815_ = lean_unsigned_to_nat(16u);
v___x_816_ = lean_mk_array(v___x_815_, v___x_814_);
return v___x_816_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
v___x_817_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_, &l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once, _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_);
v___x_818_ = lean_unsigned_to_nat(0u);
v___x_819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_819_, 0, v___x_818_);
lean_ctor_set(v___x_819_, 1, v___x_817_);
return v___x_819_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_820_; 
v___x_820_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_820_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_821_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_, &l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once, _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_);
v___x_822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_822_, 0, v___x_821_);
return v___x_822_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_823_; lean_object* v___x_824_; uint8_t v___x_825_; lean_object* v___x_826_; 
v___x_823_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_, &l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once, _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_);
v___x_824_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_, &l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once, _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_);
v___x_825_ = 1;
v___x_826_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_826_, 0, v___x_824_);
lean_ctor_set(v___x_826_, 1, v___x_823_);
lean_ctor_set_uint8(v___x_826_, sizeof(void*)*2, v___x_825_);
return v___x_826_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(lean_object* v_es_827_){
_start:
{
lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; 
v___x_828_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_, &l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__once, _init_l___private_Lean_ResolveName_0__Lean_initFn___lam__1___closed__4_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_);
v___x_829_ = l_Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0(v___x_828_, v_es_827_);
v___x_830_ = l_Lean_SMap_switch___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__1___redArg(v___x_829_);
return v___x_830_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2____boxed(lean_object* v_es_831_){
_start:
{
lean_object* v_res_832_; 
v_res_832_ = l___private_Lean_ResolveName_0__Lean_initFn___lam__1_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(v_es_831_);
lean_dec_ref(v_es_831_);
return v_res_832_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_849_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_initFn___closed__5_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_));
v___x_850_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_849_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2____boxed(lean_object* v_a_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_();
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l_Lean_addAlias___lam__0(lean_object* v_addEntryFn_853_, lean_object* v___x_854_, lean_object* v_s_855_){
_start:
{
lean_object* v_importedEntries_856_; lean_object* v_state_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_865_; 
v_importedEntries_856_ = lean_ctor_get(v_s_855_, 0);
v_state_857_ = lean_ctor_get(v_s_855_, 1);
v_isSharedCheck_865_ = !lean_is_exclusive(v_s_855_);
if (v_isSharedCheck_865_ == 0)
{
v___x_859_ = v_s_855_;
v_isShared_860_ = v_isSharedCheck_865_;
goto v_resetjp_858_;
}
else
{
lean_inc(v_state_857_);
lean_inc(v_importedEntries_856_);
lean_dec(v_s_855_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_865_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v_state_861_; lean_object* v___x_863_; 
v_state_861_ = lean_apply_2(v_addEntryFn_853_, v_state_857_, v___x_854_);
if (v_isShared_860_ == 0)
{
lean_ctor_set(v___x_859_, 1, v_state_861_);
v___x_863_ = v___x_859_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v_importedEntries_856_);
lean_ctor_set(v_reuseFailAlloc_864_, 1, v_state_861_);
v___x_863_ = v_reuseFailAlloc_864_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
return v___x_863_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addAlias(lean_object* v_env_866_, lean_object* v_a_867_, lean_object* v_e_868_){
_start:
{
lean_object* v___x_869_; lean_object* v_toEnvExtension_870_; lean_object* v_addEntryFn_871_; lean_object* v_asyncMode_872_; uint8_t v_logWrites_873_; lean_object* v___x_874_; lean_object* v___f_875_; lean_object* v___x_876_; uint8_t v___x_877_; 
v___x_869_ = l_Lean_aliasExtension;
v_toEnvExtension_870_ = lean_ctor_get(v___x_869_, 0);
v_addEntryFn_871_ = lean_ctor_get(v___x_869_, 3);
v_asyncMode_872_ = lean_ctor_get(v_toEnvExtension_870_, 2);
v_logWrites_873_ = lean_ctor_get_uint8(v_toEnvExtension_870_, sizeof(void*)*6);
v___x_874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_874_, 0, v_a_867_);
lean_ctor_set(v___x_874_, 1, v_e_868_);
lean_inc(v_addEntryFn_871_);
v___f_875_ = lean_alloc_closure((void*)(l_Lean_addAlias___lam__0), 3, 2);
lean_closure_set(v___f_875_, 0, v_addEntryFn_871_);
lean_closure_set(v___f_875_, 1, v___x_874_);
v___x_876_ = lean_box(0);
v___x_877_ = 1;
if (v_logWrites_873_ == 0)
{
lean_object* v___x_878_; 
lean_inc_ref(v_toEnvExtension_870_);
v___x_878_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_870_, v_env_866_, v___f_875_, v_asyncMode_872_, v___x_876_, v___x_877_);
return v___x_878_;
}
else
{
lean_object* v___x_879_; lean_object* v___x_880_; 
lean_inc_ref_n(v_toEnvExtension_870_, 2);
v___x_879_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_870_, v_env_866_);
lean_dec_ref(v_env_866_);
v___x_880_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_870_, v___x_879_, v___f_875_, v_asyncMode_872_, v___x_876_, v___x_877_);
return v___x_880_;
}
}
}
static lean_object* _init_l_Lean_getAliasState___closed__0(void){
_start:
{
lean_object* v___x_881_; 
v___x_881_ = l_Lean_SMap_instInhabited___redArg();
return v___x_881_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAliasState(lean_object* v_env_882_){
_start:
{
lean_object* v___x_883_; lean_object* v_toEnvExtension_884_; lean_object* v_asyncMode_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_883_ = l_Lean_aliasExtension;
v_toEnvExtension_884_ = lean_ctor_get(v___x_883_, 0);
v_asyncMode_885_ = lean_ctor_get(v_toEnvExtension_884_, 2);
v___x_886_ = lean_obj_once(&l_Lean_getAliasState___closed__0, &l_Lean_getAliasState___closed__0_once, _init_l_Lean_getAliasState___closed__0);
v___x_887_ = lean_box(0);
v___x_888_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_886_, v___x_883_, v_env_882_, v_asyncMode_885_, v___x_887_);
return v___x_888_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_getAliases_spec__0(lean_object* v_env_889_, uint8_t v_skipProtected_890_, lean_object* v_a_891_, lean_object* v_a_892_){
_start:
{
if (lean_obj_tag(v_a_891_) == 0)
{
lean_object* v___x_893_; 
lean_dec_ref(v_env_889_);
v___x_893_ = l_List_reverse___redArg(v_a_892_);
return v___x_893_;
}
else
{
lean_object* v_head_894_; lean_object* v_tail_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_906_; 
v_head_894_ = lean_ctor_get(v_a_891_, 0);
v_tail_895_ = lean_ctor_get(v_a_891_, 1);
v_isSharedCheck_906_ = !lean_is_exclusive(v_a_891_);
if (v_isSharedCheck_906_ == 0)
{
v___x_897_ = v_a_891_;
v_isShared_898_ = v_isSharedCheck_906_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_tail_895_);
lean_inc(v_head_894_);
lean_dec(v_a_891_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_906_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
uint8_t v___x_899_; 
lean_inc(v_head_894_);
lean_inc_ref(v_env_889_);
v___x_899_ = l_Lean_isProtected(v_env_889_, v_head_894_);
if (v___x_899_ == 0)
{
if (v_skipProtected_890_ == 0)
{
lean_del_object(v___x_897_);
lean_dec(v_head_894_);
v_a_891_ = v_tail_895_;
goto _start;
}
else
{
lean_object* v___x_902_; 
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 1, v_a_892_);
v___x_902_ = v___x_897_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v_head_894_);
lean_ctor_set(v_reuseFailAlloc_904_, 1, v_a_892_);
v___x_902_ = v_reuseFailAlloc_904_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
v_a_891_ = v_tail_895_;
v_a_892_ = v___x_902_;
goto _start;
}
}
}
else
{
lean_del_object(v___x_897_);
lean_dec(v_head_894_);
v_a_891_ = v_tail_895_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_getAliases_spec__0___boxed(lean_object* v_env_907_, lean_object* v_skipProtected_908_, lean_object* v_a_909_, lean_object* v_a_910_){
_start:
{
uint8_t v_skipProtected_boxed_911_; lean_object* v_res_912_; 
v_skipProtected_boxed_911_ = lean_unbox(v_skipProtected_908_);
v_res_912_ = l_List_filterTR_loop___at___00Lean_getAliases_spec__0(v_env_907_, v_skipProtected_boxed_911_, v_a_909_, v_a_910_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAliases(lean_object* v_env_913_, lean_object* v_a_914_, uint8_t v_skipProtected_915_){
_start:
{
lean_object* v___x_916_; lean_object* v_toEnvExtension_917_; lean_object* v_asyncMode_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; 
v___x_916_ = l_Lean_aliasExtension;
v_toEnvExtension_917_ = lean_ctor_get(v___x_916_, 0);
v_asyncMode_918_ = lean_ctor_get(v_toEnvExtension_917_, 2);
v___x_919_ = lean_obj_once(&l_Lean_getAliasState___closed__0, &l_Lean_getAliasState___closed__0_once, _init_l_Lean_getAliasState___closed__0);
v___x_920_ = lean_box(0);
lean_inc_ref(v_env_913_);
v___x_921_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_919_, v___x_916_, v_env_913_, v_asyncMode_918_, v___x_920_);
v___x_922_ = l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(v___x_921_, v_a_914_);
lean_dec(v___x_921_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v___x_923_; 
lean_dec_ref(v_env_913_);
v___x_923_ = lean_box(0);
return v___x_923_;
}
else
{
if (v_skipProtected_915_ == 0)
{
lean_object* v_val_924_; 
lean_dec_ref(v_env_913_);
v_val_924_ = lean_ctor_get(v___x_922_, 0);
lean_inc(v_val_924_);
lean_dec_ref_known(v___x_922_, 1);
return v_val_924_;
}
else
{
lean_object* v_val_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
v_val_925_ = lean_ctor_get(v___x_922_, 0);
lean_inc(v_val_925_);
lean_dec_ref_known(v___x_922_, 1);
v___x_926_ = lean_box(0);
v___x_927_ = l_List_filterTR_loop___at___00Lean_getAliases_spec__0(v_env_913_, v_skipProtected_915_, v_val_925_, v___x_926_);
return v___x_927_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getAliases___boxed(lean_object* v_env_928_, lean_object* v_a_929_, lean_object* v_skipProtected_930_){
_start:
{
uint8_t v_skipProtected_boxed_931_; lean_object* v_res_932_; 
v_skipProtected_boxed_931_ = lean_unbox(v_skipProtected_930_);
v_res_932_ = l_Lean_getAliases(v_env_928_, v_a_929_, v_skipProtected_boxed_931_);
lean_dec(v_a_929_);
return v_res_932_;
}
}
LEAN_EXPORT lean_object* l_Lean_getRevAliases___lam__0(lean_object* v_e_933_, lean_object* v_as_934_, lean_object* v_a_935_, lean_object* v_es_936_){
_start:
{
uint8_t v___x_937_; 
v___x_937_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_e_933_, v_es_936_);
if (v___x_937_ == 0)
{
lean_dec(v_a_935_);
return v_as_934_;
}
else
{
lean_object* v___x_938_; 
v___x_938_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_938_, 0, v_a_935_);
lean_ctor_set(v___x_938_, 1, v_as_934_);
return v___x_938_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getRevAliases___lam__0___boxed(lean_object* v_e_939_, lean_object* v_as_940_, lean_object* v_a_941_, lean_object* v_es_942_){
_start:
{
lean_object* v_res_943_; 
v_res_943_ = l_Lean_getRevAliases___lam__0(v_e_939_, v_as_940_, v_a_941_, v_es_942_);
lean_dec(v_es_942_);
lean_dec(v_e_939_);
return v_res_943_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg(lean_object* v_f_944_, lean_object* v_keys_945_, lean_object* v_vals_946_, lean_object* v_i_947_, lean_object* v_acc_948_){
_start:
{
lean_object* v___x_949_; uint8_t v___x_950_; 
v___x_949_ = lean_array_get_size(v_keys_945_);
v___x_950_ = lean_nat_dec_lt(v_i_947_, v___x_949_);
if (v___x_950_ == 0)
{
lean_dec(v_i_947_);
lean_dec(v_f_944_);
return v_acc_948_;
}
else
{
lean_object* v_k_951_; lean_object* v_v_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
v_k_951_ = lean_array_fget_borrowed(v_keys_945_, v_i_947_);
v_v_952_ = lean_array_fget_borrowed(v_vals_946_, v_i_947_);
lean_inc(v_f_944_);
lean_inc(v_v_952_);
lean_inc(v_k_951_);
v___x_953_ = lean_apply_3(v_f_944_, v_acc_948_, v_k_951_, v_v_952_);
v___x_954_ = lean_unsigned_to_nat(1u);
v___x_955_ = lean_nat_add(v_i_947_, v___x_954_);
lean_dec(v_i_947_);
v_i_947_ = v___x_955_;
v_acc_948_ = v___x_953_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg___boxed(lean_object* v_f_957_, lean_object* v_keys_958_, lean_object* v_vals_959_, lean_object* v_i_960_, lean_object* v_acc_961_){
_start:
{
lean_object* v_res_962_; 
v_res_962_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg(v_f_957_, v_keys_958_, v_vals_959_, v_i_960_, v_acc_961_);
lean_dec_ref(v_vals_959_);
lean_dec_ref(v_keys_958_);
return v_res_962_;
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
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_f_980_, lean_object* v_x_981_, lean_object* v_x_982_){
_start:
{
if (lean_obj_tag(v_x_981_) == 0)
{
lean_object* v_es_983_; lean_object* v___x_984_; lean_object* v___x_985_; uint8_t v___x_986_; 
v_es_983_ = lean_ctor_get(v_x_981_, 0);
v___x_984_ = lean_unsigned_to_nat(0u);
v___x_985_ = lean_array_get_size(v_es_983_);
v___x_986_ = lean_nat_dec_lt(v___x_984_, v___x_985_);
if (v___x_986_ == 0)
{
lean_dec(v_f_980_);
return v_x_982_;
}
else
{
size_t v___x_987_; size_t v___x_988_; lean_object* v___x_989_; 
v___x_987_ = ((size_t)0ULL);
v___x_988_ = lean_usize_of_nat(v___x_985_);
v___x_989_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(v_f_980_, v_es_983_, v___x_987_, v___x_988_, v_x_982_);
return v___x_989_;
}
}
else
{
lean_object* v_ks_990_; lean_object* v_vs_991_; lean_object* v___x_992_; lean_object* v___x_993_; 
v_ks_990_ = lean_ctor_get(v_x_981_, 0);
v_vs_991_ = lean_ctor_get(v_x_981_, 1);
v___x_992_ = lean_unsigned_to_nat(0u);
v___x_993_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg(v_f_980_, v_ks_990_, v_vs_991_, v___x_992_, v_x_982_);
return v___x_993_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_f_994_, lean_object* v_x_995_, lean_object* v_x_996_){
_start:
{
lean_object* v_res_997_; 
v_res_997_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v_f_994_, v_x_995_, v_x_996_);
lean_dec_ref(v_x_995_);
return v_res_997_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg___boxed(lean_object* v_f_998_, lean_object* v_as_999_, lean_object* v_i_1000_, lean_object* v_stop_1001_, lean_object* v_b_1002_){
_start:
{
size_t v_i_boxed_1003_; size_t v_stop_boxed_1004_; lean_object* v_res_1005_; 
v_i_boxed_1003_ = lean_unbox_usize(v_i_1000_);
lean_dec(v_i_1000_);
v_stop_boxed_1004_ = lean_unbox_usize(v_stop_1001_);
lean_dec(v_stop_1001_);
v_res_1005_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(v_f_998_, v_as_999_, v_i_boxed_1003_, v_stop_boxed_1004_, v_b_1002_);
lean_dec_ref(v_as_999_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg___lam__0(lean_object* v_f_1006_, lean_object* v_x1_1007_, lean_object* v_x2_1008_, lean_object* v_x3_1009_){
_start:
{
lean_object* v___x_1010_; 
v___x_1010_ = lean_apply_3(v_f_1006_, v_x1_1007_, v_x2_1008_, v_x3_1009_);
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(lean_object* v_map_1011_, lean_object* v_f_1012_, lean_object* v_init_1013_){
_start:
{
lean_object* v___f_1014_; lean_object* v___x_1015_; 
v___f_1014_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1014_, 0, v_f_1012_);
v___x_1015_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v___f_1014_, v_map_1011_, v_init_1013_);
return v___x_1015_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg___boxed(lean_object* v_map_1016_, lean_object* v_f_1017_, lean_object* v_init_1018_){
_start:
{
lean_object* v_res_1019_; 
v_res_1019_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(v_map_1016_, v_f_1017_, v_init_1018_);
lean_dec_ref(v_map_1016_);
return v_res_1019_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0___redArg(lean_object* v_f_1020_, lean_object* v_x_1021_, lean_object* v_x_1022_){
_start:
{
if (lean_obj_tag(v_x_1022_) == 0)
{
lean_dec(v_f_1020_);
return v_x_1021_;
}
else
{
lean_object* v_key_1023_; lean_object* v_value_1024_; lean_object* v_tail_1025_; lean_object* v___x_1026_; 
v_key_1023_ = lean_ctor_get(v_x_1022_, 0);
lean_inc(v_key_1023_);
v_value_1024_ = lean_ctor_get(v_x_1022_, 1);
lean_inc(v_value_1024_);
v_tail_1025_ = lean_ctor_get(v_x_1022_, 2);
lean_inc(v_tail_1025_);
lean_dec_ref_known(v_x_1022_, 3);
lean_inc(v_f_1020_);
v___x_1026_ = lean_apply_3(v_f_1020_, v_x_1021_, v_key_1023_, v_value_1024_);
v_x_1021_ = v___x_1026_;
v_x_1022_ = v_tail_1025_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg(lean_object* v_f_1028_, lean_object* v_as_1029_, size_t v_i_1030_, size_t v_stop_1031_, lean_object* v_b_1032_){
_start:
{
uint8_t v___x_1033_; 
v___x_1033_ = lean_usize_dec_eq(v_i_1030_, v_stop_1031_);
if (v___x_1033_ == 0)
{
lean_object* v___x_1034_; lean_object* v___x_1035_; size_t v___x_1036_; size_t v___x_1037_; 
v___x_1034_ = lean_array_uget_borrowed(v_as_1029_, v_i_1030_);
lean_inc(v___x_1034_);
lean_inc(v_f_1028_);
v___x_1035_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0___redArg(v_f_1028_, v_b_1032_, v___x_1034_);
v___x_1036_ = ((size_t)1ULL);
v___x_1037_ = lean_usize_add(v_i_1030_, v___x_1036_);
v_i_1030_ = v___x_1037_;
v_b_1032_ = v___x_1035_;
goto _start;
}
else
{
lean_dec(v_f_1028_);
return v_b_1032_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg___boxed(lean_object* v_f_1039_, lean_object* v_as_1040_, lean_object* v_i_1041_, lean_object* v_stop_1042_, lean_object* v_b_1043_){
_start:
{
size_t v_i_boxed_1044_; size_t v_stop_boxed_1045_; lean_object* v_res_1046_; 
v_i_boxed_1044_ = lean_unbox_usize(v_i_1041_);
lean_dec(v_i_1041_);
v_stop_boxed_1045_ = lean_unbox_usize(v_stop_1042_);
lean_dec(v_stop_1042_);
v_res_1046_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg(v_f_1039_, v_as_1040_, v_i_boxed_1044_, v_stop_boxed_1045_, v_b_1043_);
lean_dec_ref(v_as_1040_);
return v_res_1046_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg(lean_object* v_f_1047_, lean_object* v_init_1048_, lean_object* v_m_1049_){
_start:
{
lean_object* v_map_u2081_1050_; lean_object* v_map_u2082_1051_; lean_object* v_buckets_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; uint8_t v___x_1055_; 
v_map_u2081_1050_ = lean_ctor_get(v_m_1049_, 0);
v_map_u2082_1051_ = lean_ctor_get(v_m_1049_, 1);
v_buckets_1052_ = lean_ctor_get(v_map_u2081_1050_, 1);
v___x_1053_ = lean_unsigned_to_nat(0u);
v___x_1054_ = lean_array_get_size(v_buckets_1052_);
v___x_1055_ = lean_nat_dec_lt(v___x_1053_, v___x_1054_);
if (v___x_1055_ == 0)
{
lean_object* v___x_1056_; 
v___x_1056_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(v_map_u2082_1051_, v_f_1047_, v_init_1048_);
return v___x_1056_;
}
else
{
size_t v___x_1057_; size_t v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1057_ = ((size_t)0ULL);
v___x_1058_ = lean_usize_of_nat(v___x_1054_);
lean_inc(v_f_1047_);
v___x_1059_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg(v_f_1047_, v_buckets_1052_, v___x_1057_, v___x_1058_, v_init_1048_);
v___x_1060_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(v_map_u2082_1051_, v_f_1047_, v___x_1059_);
return v___x_1060_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg___boxed(lean_object* v_f_1061_, lean_object* v_init_1062_, lean_object* v_m_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg(v_f_1061_, v_init_1062_, v_m_1063_);
lean_dec_ref(v_m_1063_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l_Lean_getRevAliases(lean_object* v_env_1065_, lean_object* v_e_1066_){
_start:
{
lean_object* v___x_1067_; lean_object* v_toEnvExtension_1068_; lean_object* v_asyncMode_1069_; lean_object* v___f_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; 
v___x_1067_ = l_Lean_aliasExtension;
v_toEnvExtension_1068_ = lean_ctor_get(v___x_1067_, 0);
v_asyncMode_1069_ = lean_ctor_get(v_toEnvExtension_1068_, 2);
v___f_1070_ = lean_alloc_closure((void*)(l_Lean_getRevAliases___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1070_, 0, v_e_1066_);
v___x_1071_ = lean_obj_once(&l_Lean_getAliasState___closed__0, &l_Lean_getAliasState___closed__0_once, _init_l_Lean_getAliasState___closed__0);
v___x_1072_ = lean_box(0);
v___x_1073_ = lean_box(0);
v___x_1074_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1071_, v___x_1067_, v_env_1065_, v_asyncMode_1069_, v___x_1073_);
v___x_1075_ = l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg(v___f_1070_, v___x_1072_, v___x_1074_);
lean_dec(v___x_1074_);
return v___x_1075_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0(lean_object* v_00_u03b2_1076_, lean_object* v_00_u03c3_1077_, lean_object* v_f_1078_, lean_object* v_init_1079_, lean_object* v_m_1080_){
_start:
{
lean_object* v___x_1081_; 
v___x_1081_ = l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg(v_f_1078_, v_init_1079_, v_m_1080_);
return v___x_1081_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___boxed(lean_object* v_00_u03b2_1082_, lean_object* v_00_u03c3_1083_, lean_object* v_f_1084_, lean_object* v_init_1085_, lean_object* v_m_1086_){
_start:
{
lean_object* v_res_1087_; 
v_res_1087_ = l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0(v_00_u03b2_1082_, v_00_u03c3_1083_, v_f_1084_, v_init_1085_, v_m_1086_);
lean_dec_ref(v_m_1086_);
return v_res_1087_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0(lean_object* v_00_u03b2_1088_, lean_object* v_00_u03c3_1089_, lean_object* v_f_1090_, lean_object* v_x_1091_, lean_object* v_x_1092_){
_start:
{
lean_object* v___x_1093_; 
v___x_1093_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0___redArg(v_f_1090_, v_x_1091_, v_x_1092_);
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1(lean_object* v_00_u03c3_1094_, lean_object* v_00_u03b2_1095_, lean_object* v_map_1096_, lean_object* v_f_1097_, lean_object* v_init_1098_){
_start:
{
lean_object* v___x_1099_; 
v___x_1099_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(v_map_1096_, v_f_1097_, v_init_1098_);
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___boxed(lean_object* v_00_u03c3_1100_, lean_object* v_00_u03b2_1101_, lean_object* v_map_1102_, lean_object* v_f_1103_, lean_object* v_init_1104_){
_start:
{
lean_object* v_res_1105_; 
v_res_1105_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1(v_00_u03c3_1100_, v_00_u03b2_1101_, v_map_1102_, v_f_1103_, v_init_1104_);
lean_dec_ref(v_map_1102_);
return v_res_1105_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2(lean_object* v_00_u03b2_1106_, lean_object* v_00_u03c3_1107_, lean_object* v_f_1108_, lean_object* v_as_1109_, size_t v_i_1110_, size_t v_stop_1111_, lean_object* v_b_1112_){
_start:
{
lean_object* v___x_1113_; 
v___x_1113_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg(v_f_1108_, v_as_1109_, v_i_1110_, v_stop_1111_, v_b_1112_);
return v___x_1113_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1114_, lean_object* v_00_u03c3_1115_, lean_object* v_f_1116_, lean_object* v_as_1117_, lean_object* v_i_1118_, lean_object* v_stop_1119_, lean_object* v_b_1120_){
_start:
{
size_t v_i_boxed_1121_; size_t v_stop_boxed_1122_; lean_object* v_res_1123_; 
v_i_boxed_1121_ = lean_unbox_usize(v_i_1118_);
lean_dec(v_i_1118_);
v_stop_boxed_1122_ = lean_unbox_usize(v_stop_1119_);
lean_dec(v_stop_1119_);
v_res_1123_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2(v_00_u03b2_1114_, v_00_u03c3_1115_, v_f_1116_, v_as_1117_, v_i_boxed_1121_, v_stop_boxed_1122_, v_b_1120_);
lean_dec_ref(v_as_1117_);
return v_res_1123_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___redArg(lean_object* v_map_1124_, lean_object* v_f_1125_, lean_object* v_init_1126_){
_start:
{
lean_object* v___x_1127_; 
v___x_1127_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v_f_1125_, v_map_1124_, v_init_1126_);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_map_1128_, lean_object* v_f_1129_, lean_object* v_init_1130_){
_start:
{
lean_object* v_res_1131_; 
v_res_1131_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___redArg(v_map_1128_, v_f_1129_, v_init_1130_);
lean_dec_ref(v_map_1128_);
return v_res_1131_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2(lean_object* v_00_u03c3_1132_, lean_object* v_00_u03b2_1133_, lean_object* v_map_1134_, lean_object* v_f_1135_, lean_object* v_init_1136_){
_start:
{
lean_object* v___x_1137_; 
v___x_1137_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v_f_1135_, v_map_1134_, v_init_1136_);
return v___x_1137_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03c3_1138_, lean_object* v_00_u03b2_1139_, lean_object* v_map_1140_, lean_object* v_f_1141_, lean_object* v_init_1142_){
_start:
{
lean_object* v_res_1143_; 
v_res_1143_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2(v_00_u03c3_1138_, v_00_u03b2_1139_, v_map_1140_, v_f_1141_, v_init_1142_);
lean_dec_ref(v_map_1140_);
return v_res_1143_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03c3_1144_, lean_object* v_00_u03b1_1145_, lean_object* v_00_u03b2_1146_, lean_object* v_f_1147_, lean_object* v_x_1148_, lean_object* v_x_1149_){
_start:
{
lean_object* v___x_1150_; 
v___x_1150_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v_f_1147_, v_x_1148_, v_x_1149_);
return v___x_1150_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_00_u03c3_1151_, lean_object* v_00_u03b1_1152_, lean_object* v_00_u03b2_1153_, lean_object* v_f_1154_, lean_object* v_x_1155_, lean_object* v_x_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3(v_00_u03c3_1151_, v_00_u03b1_1152_, v_00_u03b2_1153_, v_f_1154_, v_x_1155_, v_x_1156_);
lean_dec_ref(v_x_1155_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5(lean_object* v_00_u03b1_1158_, lean_object* v_00_u03b2_1159_, lean_object* v_00_u03c3_1160_, lean_object* v_f_1161_, lean_object* v_as_1162_, size_t v_i_1163_, size_t v_stop_1164_, lean_object* v_b_1165_){
_start:
{
lean_object* v___x_1166_; 
v___x_1166_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(v_f_1161_, v_as_1162_, v_i_1163_, v_stop_1164_, v_b_1165_);
return v___x_1166_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___boxed(lean_object* v_00_u03b1_1167_, lean_object* v_00_u03b2_1168_, lean_object* v_00_u03c3_1169_, lean_object* v_f_1170_, lean_object* v_as_1171_, lean_object* v_i_1172_, lean_object* v_stop_1173_, lean_object* v_b_1174_){
_start:
{
size_t v_i_boxed_1175_; size_t v_stop_boxed_1176_; lean_object* v_res_1177_; 
v_i_boxed_1175_ = lean_unbox_usize(v_i_1172_);
lean_dec(v_i_1172_);
v_stop_boxed_1176_ = lean_unbox_usize(v_stop_1173_);
lean_dec(v_stop_1173_);
v_res_1177_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5(v_00_u03b1_1167_, v_00_u03b2_1168_, v_00_u03c3_1169_, v_f_1170_, v_as_1171_, v_i_boxed_1175_, v_stop_boxed_1176_, v_b_1174_);
lean_dec_ref(v_as_1171_);
return v_res_1177_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6(lean_object* v_00_u03c3_1178_, lean_object* v_00_u03b1_1179_, lean_object* v_00_u03b2_1180_, lean_object* v_f_1181_, lean_object* v_keys_1182_, lean_object* v_vals_1183_, lean_object* v_heq_1184_, lean_object* v_i_1185_, lean_object* v_acc_1186_){
_start:
{
lean_object* v___x_1187_; 
v___x_1187_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg(v_f_1181_, v_keys_1182_, v_vals_1183_, v_i_1185_, v_acc_1186_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___boxed(lean_object* v_00_u03c3_1188_, lean_object* v_00_u03b1_1189_, lean_object* v_00_u03b2_1190_, lean_object* v_f_1191_, lean_object* v_keys_1192_, lean_object* v_vals_1193_, lean_object* v_heq_1194_, lean_object* v_i_1195_, lean_object* v_acc_1196_){
_start:
{
lean_object* v_res_1197_; 
v_res_1197_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6(v_00_u03c3_1188_, v_00_u03b1_1189_, v_00_u03b2_1190_, v_f_1191_, v_keys_1192_, v_vals_1193_, v_heq_1194_, v_i_1195_, v_acc_1196_);
lean_dec_ref(v_vals_1193_);
lean_dec_ref(v_keys_1192_);
return v_res_1197_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(lean_object* v_env_1198_, lean_object* v_declName_1199_, uint8_t v_localOnly_1200_){
_start:
{
uint8_t v___x_1201_; 
v___x_1201_ = 1;
if (v_localOnly_1200_ == 0)
{
uint8_t v___x_1202_; 
v___x_1202_ = l_Lean_Environment_containsOnBranch(v_env_1198_, v_declName_1199_);
if (v___x_1202_ == 0)
{
uint8_t v___x_1203_; 
lean_inc(v_declName_1199_);
lean_inc_ref(v_env_1198_);
v___x_1203_ = lean_is_reserved_name(v_env_1198_, v_declName_1199_);
if (v___x_1203_ == 0)
{
uint8_t v___x_1204_; 
v___x_1204_ = l_Lean_Environment_contains(v_env_1198_, v_declName_1199_, v___x_1201_);
return v___x_1204_;
}
else
{
lean_dec(v_declName_1199_);
lean_dec_ref(v_env_1198_);
return v___x_1201_;
}
}
else
{
lean_dec(v_declName_1199_);
lean_dec_ref(v_env_1198_);
return v___x_1201_;
}
}
else
{
uint8_t v___x_1205_; 
lean_inc(v_declName_1199_);
v___x_1205_ = l_Lean_Environment_containsLocally(v_env_1198_, v_declName_1199_);
if (v___x_1205_ == 0)
{
uint8_t v___x_1206_; 
v___x_1206_ = lean_is_reserved_name(v_env_1198_, v_declName_1199_);
return v___x_1206_;
}
else
{
lean_dec(v_declName_1199_);
lean_dec_ref(v_env_1198_);
return v___x_1201_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved___boxed(lean_object* v_env_1207_, lean_object* v_declName_1208_, lean_object* v_localOnly_1209_){
_start:
{
uint8_t v_localOnly_boxed_1210_; uint8_t v_res_1211_; lean_object* v_r_1212_; 
v_localOnly_boxed_1210_ = lean_unbox(v_localOnly_1209_);
v_res_1211_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1207_, v_declName_1208_, v_localOnly_boxed_1210_);
v_r_1212_ = lean_box(v_res_1211_);
return v_r_1212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(lean_object* v_name_1213_, lean_object* v_decl_1214_, lean_object* v_ref_1215_){
_start:
{
lean_object* v_defValue_1217_; lean_object* v_descr_1218_; lean_object* v_deprecation_x3f_1219_; lean_object* v___x_1220_; uint8_t v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; 
v_defValue_1217_ = lean_ctor_get(v_decl_1214_, 0);
v_descr_1218_ = lean_ctor_get(v_decl_1214_, 1);
v_deprecation_x3f_1219_ = lean_ctor_get(v_decl_1214_, 2);
v___x_1220_ = lean_alloc_ctor(1, 0, 1);
v___x_1221_ = lean_unbox(v_defValue_1217_);
lean_ctor_set_uint8(v___x_1220_, 0, v___x_1221_);
lean_inc(v_deprecation_x3f_1219_);
lean_inc_ref(v_descr_1218_);
lean_inc_n(v_name_1213_, 2);
v___x_1222_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1222_, 0, v_name_1213_);
lean_ctor_set(v___x_1222_, 1, v_ref_1215_);
lean_ctor_set(v___x_1222_, 2, v___x_1220_);
lean_ctor_set(v___x_1222_, 3, v_descr_1218_);
lean_ctor_set(v___x_1222_, 4, v_deprecation_x3f_1219_);
v___x_1223_ = lean_register_option(v_name_1213_, v___x_1222_);
if (lean_obj_tag(v___x_1223_) == 0)
{
lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1231_; 
v_isSharedCheck_1231_ = !lean_is_exclusive(v___x_1223_);
if (v_isSharedCheck_1231_ == 0)
{
lean_object* v_unused_1232_; 
v_unused_1232_ = lean_ctor_get(v___x_1223_, 0);
lean_dec(v_unused_1232_);
v___x_1225_ = v___x_1223_;
v_isShared_1226_ = v_isSharedCheck_1231_;
goto v_resetjp_1224_;
}
else
{
lean_dec(v___x_1223_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1231_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
lean_object* v___x_1227_; lean_object* v___x_1229_; 
lean_inc(v_defValue_1217_);
v___x_1227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1227_, 0, v_name_1213_);
lean_ctor_set(v___x_1227_, 1, v_defValue_1217_);
if (v_isShared_1226_ == 0)
{
lean_ctor_set(v___x_1225_, 0, v___x_1227_);
v___x_1229_ = v___x_1225_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v___x_1227_);
v___x_1229_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
return v___x_1229_;
}
}
}
else
{
lean_object* v_a_1233_; lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1240_; 
lean_dec(v_name_1213_);
v_a_1233_ = lean_ctor_get(v___x_1223_, 0);
v_isSharedCheck_1240_ = !lean_is_exclusive(v___x_1223_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1235_ = v___x_1223_;
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
else
{
lean_inc(v_a_1233_);
lean_dec(v___x_1223_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
lean_object* v___x_1238_; 
if (v_isShared_1236_ == 0)
{
v___x_1238_ = v___x_1235_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v_a_1233_);
v___x_1238_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
return v___x_1238_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_1241_, lean_object* v_decl_1242_, lean_object* v_ref_1243_, lean_object* v_a_1244_){
_start:
{
lean_object* v_res_1245_; 
v_res_1245_ = l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(v_name_1241_, v_decl_1242_, v_ref_1243_);
lean_dec_ref(v_decl_1242_);
return v_res_1245_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1264_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_));
v___x_1265_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_));
v___x_1266_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_));
v___x_1267_ = l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(v___x_1264_, v___x_1265_, v___x_1266_);
return v___x_1267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4____boxed(lean_object* v_a_1268_){
_start:
{
lean_object* v_res_1269_; 
v_res_1269_ = l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_();
return v_res_1269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1288_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_));
v___x_1289_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_));
v___x_1290_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_));
v___x_1291_ = l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(v___x_1288_, v___x_1289_, v___x_1290_);
return v___x_1291_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4____boxed(lean_object* v_a_1292_){
_start:
{
lean_object* v_res_1293_; 
v_res_1293_ = l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_();
return v_res_1293_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1(lean_object* v_opts_1294_, lean_object* v_opt_1295_){
_start:
{
lean_object* v_name_1296_; lean_object* v_defValue_1297_; lean_object* v_map_1298_; lean_object* v___x_1299_; 
v_name_1296_ = lean_ctor_get(v_opt_1295_, 0);
v_defValue_1297_ = lean_ctor_get(v_opt_1295_, 1);
v_map_1298_ = lean_ctor_get(v_opts_1294_, 0);
v___x_1299_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1298_, v_name_1296_);
if (lean_obj_tag(v___x_1299_) == 0)
{
uint8_t v___x_1300_; 
v___x_1300_ = lean_unbox(v_defValue_1297_);
return v___x_1300_;
}
else
{
lean_object* v_val_1301_; 
v_val_1301_ = lean_ctor_get(v___x_1299_, 0);
lean_inc(v_val_1301_);
lean_dec_ref_known(v___x_1299_, 1);
if (lean_obj_tag(v_val_1301_) == 1)
{
uint8_t v_v_1302_; 
v_v_1302_ = lean_ctor_get_uint8(v_val_1301_, 0);
lean_dec_ref_known(v_val_1301_, 0);
return v_v_1302_;
}
else
{
uint8_t v___x_1303_; 
lean_dec(v_val_1301_);
v___x_1303_ = lean_unbox(v_defValue_1297_);
return v___x_1303_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1___boxed(lean_object* v_opts_1304_, lean_object* v_opt_1305_){
_start:
{
uint8_t v_res_1306_; lean_object* v_r_1307_; 
v_res_1306_ = l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1(v_opts_1304_, v_opt_1305_);
lean_dec_ref(v_opt_1305_);
lean_dec_ref(v_opts_1304_);
v_r_1307_ = lean_box(v_res_1306_);
return v_r_1307_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0(lean_object* v_declName_1311_, lean_object* v_env_1312_, lean_object* v_as_1313_, size_t v_sz_1314_, size_t v_i_1315_, lean_object* v_b_1316_){
_start:
{
uint8_t v___x_1317_; 
v___x_1317_ = lean_usize_dec_lt(v_i_1315_, v_sz_1314_);
if (v___x_1317_ == 0)
{
lean_dec_ref(v_env_1312_);
lean_dec(v_declName_1311_);
lean_inc_ref(v_b_1316_);
return v_b_1316_;
}
else
{
lean_object* v_a_1318_; lean_object* v_toImport_1319_; lean_object* v_module_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; uint8_t v___x_1327_; 
v_a_1318_ = lean_array_uget_borrowed(v_as_1313_, v_i_1315_);
v_toImport_1319_ = lean_ctor_get(v_a_1318_, 0);
v_module_1320_ = lean_ctor_get(v_toImport_1319_, 0);
v___x_1321_ = lean_box(0);
lean_inc(v_declName_1311_);
lean_inc(v_module_1320_);
v___x_1322_ = l_Lean_mkPrivateNameCore(v_module_1320_, v_declName_1311_);
lean_inc(v___x_1322_);
v___x_1327_ = l_Lean_Environment_moduleDeclares(v_env_1312_, v_module_1320_, v___x_1322_);
if (v___x_1327_ == 0)
{
uint8_t v___x_1328_; 
lean_inc(v___x_1322_);
lean_inc_ref(v_env_1312_);
v___x_1328_ = lean_is_reserved_name(v_env_1312_, v___x_1322_);
if (v___x_1328_ == 0)
{
lean_object* v___x_1329_; size_t v___x_1330_; size_t v___x_1331_; 
lean_dec(v___x_1322_);
v___x_1329_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___closed__0));
v___x_1330_ = ((size_t)1ULL);
v___x_1331_ = lean_usize_add(v_i_1315_, v___x_1330_);
v_i_1315_ = v___x_1331_;
v_b_1316_ = v___x_1329_;
goto _start;
}
else
{
lean_dec_ref(v_env_1312_);
lean_dec(v_declName_1311_);
goto v___jp_1323_;
}
}
else
{
lean_dec_ref(v_env_1312_);
lean_dec(v_declName_1311_);
goto v___jp_1323_;
}
v___jp_1323_:
{
lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; 
v___x_1324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1322_);
v___x_1325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1324_);
v___x_1326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1325_);
lean_ctor_set(v___x_1326_, 1, v___x_1321_);
return v___x_1326_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___boxed(lean_object* v_declName_1333_, lean_object* v_env_1334_, lean_object* v_as_1335_, lean_object* v_sz_1336_, lean_object* v_i_1337_, lean_object* v_b_1338_){
_start:
{
size_t v_sz_boxed_1339_; size_t v_i_boxed_1340_; lean_object* v_res_1341_; 
v_sz_boxed_1339_ = lean_unbox_usize(v_sz_1336_);
lean_dec(v_sz_1336_);
v_i_boxed_1340_ = lean_unbox_usize(v_i_1337_);
lean_dec(v_i_1337_);
v_res_1341_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0(v_declName_1333_, v_env_1334_, v_as_1335_, v_sz_boxed_1339_, v_i_boxed_1340_, v_b_1338_);
lean_dec_ref(v_b_1338_);
lean_dec_ref(v_as_1335_);
return v_res_1341_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(lean_object* v_env_1342_, lean_object* v_opts_1343_, lean_object* v_declName_1344_, uint8_t v_localOnly_1345_){
_start:
{
uint8_t v_isExporting_1363_; 
v_isExporting_1363_ = lean_ctor_get_uint8(v_env_1342_, sizeof(void*)*13);
if (v_isExporting_1363_ == 0)
{
goto v___jp_1346_;
}
else
{
lean_object* v___x_1364_; uint8_t v___x_1365_; 
v___x_1364_ = l_Lean_ResolveName_backward_privateInPublic;
v___x_1365_ = l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1(v_opts_1343_, v___x_1364_);
if (v___x_1365_ == 0)
{
lean_object* v___x_1366_; 
lean_dec(v_declName_1344_);
lean_dec_ref(v_env_1342_);
v___x_1366_ = lean_box(0);
return v___x_1366_;
}
else
{
goto v___jp_1346_;
}
}
v___jp_1346_:
{
uint8_t v___x_1347_; lean_object* v___x_1348_; uint8_t v___x_1349_; 
v___x_1347_ = 1;
lean_inc(v_declName_1344_);
v___x_1348_ = l_Lean_mkPrivateName(v_env_1342_, v_declName_1344_);
lean_inc(v___x_1348_);
lean_inc_ref(v_env_1342_);
v___x_1349_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1342_, v___x_1348_, v___x_1347_);
if (v___x_1349_ == 0)
{
lean_object* v___x_1350_; uint8_t v_isModule_1351_; 
lean_dec(v___x_1348_);
v___x_1350_ = l_Lean_Environment_header(v_env_1342_);
v_isModule_1351_ = lean_ctor_get_uint8(v___x_1350_, sizeof(void*)*8 + 4);
if (v_isModule_1351_ == 0)
{
lean_object* v___x_1352_; 
lean_dec_ref(v___x_1350_);
lean_dec(v_declName_1344_);
lean_dec_ref(v_env_1342_);
v___x_1352_ = lean_box(0);
return v___x_1352_;
}
else
{
if (v_localOnly_1345_ == 0)
{
lean_object* v_importAllModules_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; size_t v_sz_1356_; size_t v___x_1357_; lean_object* v___x_1358_; lean_object* v_fst_1359_; 
v_importAllModules_1353_ = lean_ctor_get(v___x_1350_, 6);
lean_inc_ref(v_importAllModules_1353_);
lean_dec_ref(v___x_1350_);
v___x_1354_ = lean_box(0);
v___x_1355_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___closed__0));
v_sz_1356_ = lean_array_size(v_importAllModules_1353_);
v___x_1357_ = ((size_t)0ULL);
v___x_1358_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0(v_declName_1344_, v_env_1342_, v_importAllModules_1353_, v_sz_1356_, v___x_1357_, v___x_1355_);
lean_dec_ref(v_importAllModules_1353_);
v_fst_1359_ = lean_ctor_get(v___x_1358_, 0);
lean_inc(v_fst_1359_);
lean_dec_ref(v___x_1358_);
if (lean_obj_tag(v_fst_1359_) == 0)
{
return v___x_1354_;
}
else
{
lean_object* v_val_1360_; 
v_val_1360_ = lean_ctor_get(v_fst_1359_, 0);
lean_inc(v_val_1360_);
lean_dec_ref_known(v_fst_1359_, 1);
return v_val_1360_;
}
}
else
{
lean_object* v___x_1361_; 
lean_dec_ref(v___x_1350_);
lean_dec(v_declName_1344_);
lean_dec_ref(v_env_1342_);
v___x_1361_ = lean_box(0);
return v___x_1361_;
}
}
}
else
{
lean_object* v___x_1362_; 
lean_dec(v_declName_1344_);
lean_dec_ref(v_env_1342_);
v___x_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1348_);
return v___x_1362_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName___boxed(lean_object* v_env_1367_, lean_object* v_opts_1368_, lean_object* v_declName_1369_, lean_object* v_localOnly_1370_){
_start:
{
uint8_t v_localOnly_boxed_1371_; lean_object* v_res_1372_; 
v_localOnly_boxed_1371_ = lean_unbox(v_localOnly_1370_);
v_res_1372_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(v_env_1367_, v_opts_1368_, v_declName_1369_, v_localOnly_boxed_1371_);
lean_dec_ref(v_opts_1368_);
return v_res_1372_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(lean_object* v_env_1373_, lean_object* v_opts_1374_, lean_object* v_ns_1375_, lean_object* v_id_1376_, uint8_t v_localOnly_1377_){
_start:
{
lean_object* v_resolvedId_1378_; uint8_t v___x_1379_; lean_object* v_resolvedIds_1380_; 
lean_inc(v_id_1376_);
v_resolvedId_1378_ = l_Lean_Name_append(v_ns_1375_, v_id_1376_);
v___x_1379_ = l_Lean_Name_isAtomic(v_id_1376_);
lean_dec(v_id_1376_);
lean_inc_ref(v_env_1373_);
v_resolvedIds_1380_ = l_Lean_getAliases(v_env_1373_, v_resolvedId_1378_, v___x_1379_);
if (v___x_1379_ == 0)
{
goto v___jp_1381_;
}
else
{
uint8_t v___x_1387_; 
lean_inc(v_resolvedId_1378_);
lean_inc_ref(v_env_1373_);
v___x_1387_ = l_Lean_isProtected(v_env_1373_, v_resolvedId_1378_);
if (v___x_1387_ == 0)
{
goto v___jp_1381_;
}
else
{
lean_dec(v_resolvedId_1378_);
lean_dec_ref(v_env_1373_);
return v_resolvedIds_1380_;
}
}
v___jp_1381_:
{
uint8_t v___x_1382_; 
lean_inc(v_resolvedId_1378_);
lean_inc_ref(v_env_1373_);
v___x_1382_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1373_, v_resolvedId_1378_, v_localOnly_1377_);
if (v___x_1382_ == 0)
{
lean_object* v___x_1383_; 
v___x_1383_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(v_env_1373_, v_opts_1374_, v_resolvedId_1378_, v_localOnly_1377_);
if (lean_obj_tag(v___x_1383_) == 1)
{
lean_object* v_val_1384_; lean_object* v___x_1385_; 
v_val_1384_ = lean_ctor_get(v___x_1383_, 0);
lean_inc(v_val_1384_);
lean_dec_ref_known(v___x_1383_, 1);
v___x_1385_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1385_, 0, v_val_1384_);
lean_ctor_set(v___x_1385_, 1, v_resolvedIds_1380_);
return v___x_1385_;
}
else
{
lean_dec(v___x_1383_);
return v_resolvedIds_1380_;
}
}
else
{
lean_object* v___x_1386_; 
lean_dec_ref(v_env_1373_);
v___x_1386_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1386_, 0, v_resolvedId_1378_);
lean_ctor_set(v___x_1386_, 1, v_resolvedIds_1380_);
return v___x_1386_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName___boxed(lean_object* v_env_1388_, lean_object* v_opts_1389_, lean_object* v_ns_1390_, lean_object* v_id_1391_, lean_object* v_localOnly_1392_){
_start:
{
uint8_t v_localOnly_boxed_1393_; lean_object* v_res_1394_; 
v_localOnly_boxed_1393_ = lean_unbox(v_localOnly_1392_);
v_res_1394_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(v_env_1388_, v_opts_1389_, v_ns_1390_, v_id_1391_, v_localOnly_boxed_1393_);
lean_dec_ref(v_opts_1389_);
return v_res_1394_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace(lean_object* v_env_1395_, lean_object* v_opts_1396_, lean_object* v_id_1397_, uint8_t v_localOnly_1398_, lean_object* v_x_1399_){
_start:
{
if (lean_obj_tag(v_x_1399_) == 1)
{
lean_object* v_pre_1400_; lean_object* v___x_1401_; 
v_pre_1400_ = lean_ctor_get(v_x_1399_, 0);
lean_inc(v_pre_1400_);
lean_inc(v_id_1397_);
lean_inc_ref(v_env_1395_);
v___x_1401_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(v_env_1395_, v_opts_1396_, v_x_1399_, v_id_1397_, v_localOnly_1398_);
if (lean_obj_tag(v___x_1401_) == 0)
{
v_x_1399_ = v_pre_1400_;
goto _start;
}
else
{
lean_dec(v_pre_1400_);
lean_dec(v_id_1397_);
lean_dec_ref(v_env_1395_);
return v___x_1401_;
}
}
else
{
lean_object* v___x_1403_; 
lean_dec(v_x_1399_);
lean_dec(v_id_1397_);
lean_dec_ref(v_env_1395_);
v___x_1403_ = lean_box(0);
return v___x_1403_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace___boxed(lean_object* v_env_1404_, lean_object* v_opts_1405_, lean_object* v_id_1406_, lean_object* v_localOnly_1407_, lean_object* v_x_1408_){
_start:
{
uint8_t v_localOnly_boxed_1409_; lean_object* v_res_1410_; 
v_localOnly_boxed_1409_ = lean_unbox(v_localOnly_1407_);
v_res_1410_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace(v_env_1404_, v_opts_1405_, v_id_1406_, v_localOnly_boxed_1409_, v_x_1408_);
lean_dec_ref(v_opts_1405_);
return v_res_1410_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact(lean_object* v_env_1411_, lean_object* v_opts_1412_, lean_object* v_id_1413_, uint8_t v_localOnly_1414_){
_start:
{
uint8_t v___x_1415_; 
v___x_1415_ = l_Lean_Name_isAtomic(v_id_1413_);
if (v___x_1415_ == 0)
{
lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v_resolvedId_1418_; uint8_t v___x_1419_; 
v___x_1416_ = l_Lean_rootNamespace;
v___x_1417_ = lean_box(0);
v_resolvedId_1418_ = l_Lean_Name_replacePrefix(v_id_1413_, v___x_1416_, v___x_1417_);
lean_inc(v_resolvedId_1418_);
lean_inc_ref(v_env_1411_);
v___x_1419_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1411_, v_resolvedId_1418_, v_localOnly_1414_);
if (v___x_1419_ == 0)
{
lean_object* v___x_1420_; 
v___x_1420_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(v_env_1411_, v_opts_1412_, v_resolvedId_1418_, v_localOnly_1414_);
return v___x_1420_;
}
else
{
lean_object* v___x_1421_; 
lean_dec_ref(v_env_1411_);
v___x_1421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1421_, 0, v_resolvedId_1418_);
return v___x_1421_;
}
}
else
{
lean_object* v___x_1422_; 
lean_dec(v_id_1413_);
lean_dec_ref(v_env_1411_);
v___x_1422_ = lean_box(0);
return v___x_1422_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact___boxed(lean_object* v_env_1423_, lean_object* v_opts_1424_, lean_object* v_id_1425_, lean_object* v_localOnly_1426_){
_start:
{
uint8_t v_localOnly_boxed_1427_; lean_object* v_res_1428_; 
v_localOnly_boxed_1427_ = lean_unbox(v_localOnly_1426_);
v_res_1428_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact(v_env_1423_, v_opts_1424_, v_id_1425_, v_localOnly_boxed_1427_);
lean_dec_ref(v_opts_1424_);
return v_res_1428_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls(lean_object* v_env_1429_, lean_object* v_opts_1430_, lean_object* v_id_1431_, uint8_t v_localOnly_1432_, lean_object* v_x_1433_, lean_object* v_x_1434_){
_start:
{
if (lean_obj_tag(v_x_1433_) == 0)
{
lean_dec(v_id_1431_);
lean_dec_ref(v_env_1429_);
return v_x_1434_;
}
else
{
lean_object* v_head_1435_; 
v_head_1435_ = lean_ctor_get(v_x_1433_, 0);
lean_inc(v_head_1435_);
if (lean_obj_tag(v_head_1435_) == 0)
{
lean_object* v_tail_1436_; lean_object* v_ns_1437_; lean_object* v_except_1438_; uint8_t v___x_1439_; 
v_tail_1436_ = lean_ctor_get(v_x_1433_, 1);
lean_inc(v_tail_1436_);
lean_dec_ref_known(v_x_1433_, 2);
v_ns_1437_ = lean_ctor_get(v_head_1435_, 0);
lean_inc(v_ns_1437_);
v_except_1438_ = lean_ctor_get(v_head_1435_, 1);
lean_inc(v_except_1438_);
lean_dec_ref_known(v_head_1435_, 2);
v___x_1439_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_id_1431_, v_except_1438_);
lean_dec(v_except_1438_);
if (v___x_1439_ == 0)
{
lean_object* v_newResolvedIds_1440_; lean_object* v___x_1441_; 
lean_inc(v_id_1431_);
lean_inc_ref(v_env_1429_);
v_newResolvedIds_1440_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(v_env_1429_, v_opts_1430_, v_ns_1437_, v_id_1431_, v_localOnly_1432_);
v___x_1441_ = l_List_appendTR___redArg(v_newResolvedIds_1440_, v_x_1434_);
v_x_1433_ = v_tail_1436_;
v_x_1434_ = v___x_1441_;
goto _start;
}
else
{
lean_dec(v_ns_1437_);
v_x_1433_ = v_tail_1436_;
goto _start;
}
}
else
{
lean_object* v_tail_1444_; lean_object* v___x_1446_; uint8_t v_isShared_1447_; uint8_t v_isSharedCheck_1464_; 
v_tail_1444_ = lean_ctor_get(v_x_1433_, 1);
v_isSharedCheck_1464_ = !lean_is_exclusive(v_x_1433_);
if (v_isSharedCheck_1464_ == 0)
{
lean_object* v_unused_1465_; 
v_unused_1465_ = lean_ctor_get(v_x_1433_, 0);
lean_dec(v_unused_1465_);
v___x_1446_ = v_x_1433_;
v_isShared_1447_ = v_isSharedCheck_1464_;
goto v_resetjp_1445_;
}
else
{
lean_inc(v_tail_1444_);
lean_dec(v_x_1433_);
v___x_1446_ = lean_box(0);
v_isShared_1447_ = v_isSharedCheck_1464_;
goto v_resetjp_1445_;
}
v_resetjp_1445_:
{
lean_object* v_id_1448_; lean_object* v_declName_1449_; uint8_t v___x_1450_; 
v_id_1448_ = lean_ctor_get(v_head_1435_, 0);
lean_inc(v_id_1448_);
v_declName_1449_ = lean_ctor_get(v_head_1435_, 1);
lean_inc(v_declName_1449_);
lean_dec_ref_known(v_head_1435_, 2);
v___x_1450_ = lean_name_eq(v_id_1448_, v_id_1431_);
if (v___x_1450_ == 0)
{
uint8_t v___x_1451_; 
v___x_1451_ = l_Lean_Name_isPrefixOf(v_id_1448_, v_id_1431_);
if (v___x_1451_ == 0)
{
lean_dec(v_declName_1449_);
lean_dec(v_id_1448_);
lean_del_object(v___x_1446_);
v_x_1433_ = v_tail_1444_;
goto _start;
}
else
{
lean_object* v_candidate_1453_; uint8_t v___x_1454_; 
lean_inc(v_id_1431_);
v_candidate_1453_ = l_Lean_Name_replacePrefix(v_id_1431_, v_id_1448_, v_declName_1449_);
lean_dec(v_declName_1449_);
lean_dec(v_id_1448_);
lean_inc(v_candidate_1453_);
lean_inc_ref(v_env_1429_);
v___x_1454_ = l_Lean_Environment_contains(v_env_1429_, v_candidate_1453_, v___x_1451_);
if (v___x_1454_ == 0)
{
lean_dec(v_candidate_1453_);
lean_del_object(v___x_1446_);
v_x_1433_ = v_tail_1444_;
goto _start;
}
else
{
lean_object* v___x_1457_; 
if (v_isShared_1447_ == 0)
{
lean_ctor_set(v___x_1446_, 1, v_x_1434_);
lean_ctor_set(v___x_1446_, 0, v_candidate_1453_);
v___x_1457_ = v___x_1446_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v_candidate_1453_);
lean_ctor_set(v_reuseFailAlloc_1459_, 1, v_x_1434_);
v___x_1457_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
v_x_1433_ = v_tail_1444_;
v_x_1434_ = v___x_1457_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_1461_; 
lean_dec(v_id_1448_);
if (v_isShared_1447_ == 0)
{
lean_ctor_set(v___x_1446_, 1, v_x_1434_);
lean_ctor_set(v___x_1446_, 0, v_declName_1449_);
v___x_1461_ = v___x_1446_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v_declName_1449_);
lean_ctor_set(v_reuseFailAlloc_1463_, 1, v_x_1434_);
v___x_1461_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
v_x_1433_ = v_tail_1444_;
v_x_1434_ = v___x_1461_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls___boxed(lean_object* v_env_1466_, lean_object* v_opts_1467_, lean_object* v_id_1468_, lean_object* v_localOnly_1469_, lean_object* v_x_1470_, lean_object* v_x_1471_){
_start:
{
uint8_t v_localOnly_boxed_1472_; lean_object* v_res_1473_; 
v_localOnly_boxed_1472_ = lean_unbox(v_localOnly_1469_);
v_res_1473_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls(v_env_1466_, v_opts_1467_, v_id_1468_, v_localOnly_boxed_1472_, v_x_1470_, v_x_1471_);
lean_dec_ref(v_opts_1467_);
return v_res_1473_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg(lean_object* v_main_1484_, lean_object* v_as_x27_1485_, lean_object* v_b_1486_){
_start:
{
if (lean_obj_tag(v_as_x27_1485_) == 0)
{
return v_b_1486_;
}
else
{
lean_object* v_head_1487_; lean_object* v_tail_1488_; lean_object* v_snd_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1517_; 
v_head_1487_ = lean_ctor_get(v_as_x27_1485_, 0);
v_tail_1488_ = lean_ctor_get(v_as_x27_1485_, 1);
v_snd_1489_ = lean_ctor_get(v_b_1486_, 1);
v_isSharedCheck_1517_ = !lean_is_exclusive(v_b_1486_);
if (v_isSharedCheck_1517_ == 0)
{
lean_object* v_unused_1518_; 
v_unused_1518_ = lean_ctor_get(v_b_1486_, 0);
lean_dec(v_unused_1518_);
v___x_1491_ = v_b_1486_;
v_isShared_1492_ = v_isSharedCheck_1517_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_snd_1489_);
lean_dec(v_b_1486_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1517_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
lean_object* v___x_1493_; 
v___x_1493_ = lean_box(0);
switch(lean_obj_tag(v_head_1487_))
{
case 2:
{
lean_object* v_hygCtx_1494_; lean_object* v___x_1495_; uint8_t v___x_1496_; 
v_hygCtx_1494_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__1));
v___x_1495_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__2));
v___x_1496_ = lean_name_eq(v_snd_1489_, v_main_1484_);
if (v___x_1496_ == 0)
{
uint8_t v___x_1497_; 
v___x_1497_ = lean_name_eq(v_snd_1489_, v_hygCtx_1494_);
if (v___x_1497_ == 0)
{
uint8_t v___x_1498_; 
v___x_1498_ = l_Lean_Name_isAnonymous(v_snd_1489_);
if (v___x_1498_ == 0)
{
lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1502_; 
v___x_1499_ = lean_box(v___x_1498_);
v___x_1500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1500_, 0, v___x_1499_);
if (v_isShared_1492_ == 0)
{
lean_ctor_set(v___x_1491_, 0, v___x_1500_);
v___x_1502_ = v___x_1491_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v___x_1500_);
lean_ctor_set(v_reuseFailAlloc_1503_, 1, v_snd_1489_);
v___x_1502_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
return v___x_1502_;
}
}
else
{
lean_del_object(v___x_1491_);
lean_dec(v_snd_1489_);
v_as_x27_1485_ = v_tail_1488_;
v_b_1486_ = v___x_1495_;
goto _start;
}
}
else
{
lean_del_object(v___x_1491_);
lean_dec(v_snd_1489_);
v_as_x27_1485_ = v_tail_1488_;
v_b_1486_ = v___x_1495_;
goto _start;
}
}
else
{
lean_del_object(v___x_1491_);
lean_dec(v_snd_1489_);
v_as_x27_1485_ = v_tail_1488_;
v_b_1486_ = v___x_1495_;
goto _start;
}
}
case 1:
{
lean_object* v_str_1507_; lean_object* v___x_1508_; lean_object* v___x_1510_; 
v_str_1507_ = lean_ctor_get(v_head_1487_, 1);
lean_inc_ref(v_str_1507_);
v___x_1508_ = l_Lean_Name_str___override(v_snd_1489_, v_str_1507_);
if (v_isShared_1492_ == 0)
{
lean_ctor_set(v___x_1491_, 1, v___x_1508_);
lean_ctor_set(v___x_1491_, 0, v___x_1493_);
v___x_1510_ = v___x_1491_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v___x_1493_);
lean_ctor_set(v_reuseFailAlloc_1512_, 1, v___x_1508_);
v___x_1510_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
v_as_x27_1485_ = v_tail_1488_;
v_b_1486_ = v___x_1510_;
goto _start;
}
}
default: 
{
lean_object* v___x_1513_; lean_object* v___x_1515_; 
v___x_1513_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__3));
if (v_isShared_1492_ == 0)
{
lean_ctor_set(v___x_1491_, 0, v___x_1513_);
v___x_1515_ = v___x_1491_;
goto v_reusejp_1514_;
}
else
{
lean_object* v_reuseFailAlloc_1516_; 
v_reuseFailAlloc_1516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1516_, 0, v___x_1513_);
lean_ctor_set(v_reuseFailAlloc_1516_, 1, v_snd_1489_);
v___x_1515_ = v_reuseFailAlloc_1516_;
goto v_reusejp_1514_;
}
v_reusejp_1514_:
{
return v___x_1515_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___boxed(lean_object* v_main_1519_, lean_object* v_as_x27_1520_, lean_object* v_b_1521_){
_start:
{
lean_object* v_res_1522_; 
v_res_1522_ = l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg(v_main_1519_, v_as_x27_1520_, v_b_1521_);
lean_dec(v_as_x27_1520_);
lean_dec(v_main_1519_);
return v_res_1522_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo(lean_object* v_main_1523_, lean_object* v_imported_1524_, lean_object* v_ctx_1525_){
_start:
{
lean_object* v_hygCtx_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v_fst_1532_; 
v_hygCtx_1526_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__1));
v___x_1527_ = l_Lean_Name_components(v_imported_1524_);
v___x_1528_ = l_Lean_Name_components(v_ctx_1525_);
v___x_1529_ = l_List_appendTR___redArg(v___x_1527_, v___x_1528_);
v___x_1530_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__2));
v___x_1531_ = l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg(v_main_1523_, v___x_1529_, v___x_1530_);
lean_dec(v___x_1529_);
v_fst_1532_ = lean_ctor_get(v___x_1531_, 0);
if (lean_obj_tag(v_fst_1532_) == 0)
{
lean_object* v_snd_1533_; uint8_t v___x_1534_; 
v_snd_1533_ = lean_ctor_get(v___x_1531_, 1);
lean_inc(v_snd_1533_);
lean_dec_ref(v___x_1531_);
v___x_1534_ = lean_name_eq(v_snd_1533_, v_main_1523_);
if (v___x_1534_ == 0)
{
uint8_t v___x_1535_; 
v___x_1535_ = lean_name_eq(v_snd_1533_, v_hygCtx_1526_);
if (v___x_1535_ == 0)
{
uint8_t v___x_1536_; 
v___x_1536_ = l_Lean_Name_isAnonymous(v_snd_1533_);
lean_dec(v_snd_1533_);
return v___x_1536_;
}
else
{
lean_dec(v_snd_1533_);
return v___x_1535_;
}
}
else
{
lean_dec(v_snd_1533_);
return v___x_1534_;
}
}
else
{
lean_object* v_val_1537_; uint8_t v___x_1538_; 
lean_inc_ref(v_fst_1532_);
lean_dec_ref(v___x_1531_);
v_val_1537_ = lean_ctor_get(v_fst_1532_, 0);
lean_inc(v_val_1537_);
lean_dec_ref_known(v_fst_1532_, 1);
v___x_1538_ = lean_unbox(v_val_1537_);
lean_dec(v_val_1537_);
return v___x_1538_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo___boxed(lean_object* v_main_1539_, lean_object* v_imported_1540_, lean_object* v_ctx_1541_){
_start:
{
uint8_t v_res_1542_; lean_object* v_r_1543_; 
v_res_1542_ = l___private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo(v_main_1539_, v_imported_1540_, v_ctx_1541_);
lean_dec(v_main_1539_);
v_r_1543_ = lean_box(v_res_1542_);
return v_r_1543_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0(lean_object* v_main_1544_, lean_object* v_as_1545_, lean_object* v_as_x27_1546_, lean_object* v_b_1547_, lean_object* v_a_1548_){
_start:
{
lean_object* v___x_1549_; 
v___x_1549_ = l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg(v_main_1544_, v_as_x27_1546_, v_b_1547_);
return v___x_1549_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___boxed(lean_object* v_main_1550_, lean_object* v_as_1551_, lean_object* v_as_x27_1552_, lean_object* v_b_1553_, lean_object* v_a_1554_){
_start:
{
lean_object* v_res_1555_; 
v_res_1555_ = l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0(v_main_1550_, v_as_1551_, v_as_x27_1552_, v_b_1553_, v_a_1554_);
lean_dec(v_as_x27_1552_);
lean_dec(v_as_1551_);
lean_dec(v_main_1550_);
return v_res_1555_;
}
}
LEAN_EXPORT lean_object* l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0(lean_object* v_as_1557_){
_start:
{
lean_object* v___f_1558_; lean_object* v___x_1559_; 
v___f_1558_ = ((lean_object*)(l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0___closed__0));
v___x_1559_ = l_List_eraseDupsBy___redArg(v___f_1558_, v_as_1557_);
return v___x_1559_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__1(lean_object* v_projs_1560_, lean_object* v_a_1561_, lean_object* v_a_1562_){
_start:
{
if (lean_obj_tag(v_a_1561_) == 0)
{
lean_object* v___x_1563_; 
lean_dec(v_projs_1560_);
v___x_1563_ = l_List_reverse___redArg(v_a_1562_);
return v___x_1563_;
}
else
{
lean_object* v_head_1564_; lean_object* v_tail_1565_; lean_object* v___x_1567_; uint8_t v_isShared_1568_; uint8_t v_isSharedCheck_1574_; 
v_head_1564_ = lean_ctor_get(v_a_1561_, 0);
v_tail_1565_ = lean_ctor_get(v_a_1561_, 1);
v_isSharedCheck_1574_ = !lean_is_exclusive(v_a_1561_);
if (v_isSharedCheck_1574_ == 0)
{
v___x_1567_ = v_a_1561_;
v_isShared_1568_ = v_isSharedCheck_1574_;
goto v_resetjp_1566_;
}
else
{
lean_inc(v_tail_1565_);
lean_inc(v_head_1564_);
lean_dec(v_a_1561_);
v___x_1567_ = lean_box(0);
v_isShared_1568_ = v_isSharedCheck_1574_;
goto v_resetjp_1566_;
}
v_resetjp_1566_:
{
lean_object* v___x_1569_; lean_object* v___x_1571_; 
lean_inc(v_projs_1560_);
v___x_1569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1569_, 0, v_head_1564_);
lean_ctor_set(v___x_1569_, 1, v_projs_1560_);
if (v_isShared_1568_ == 0)
{
lean_ctor_set(v___x_1567_, 1, v_a_1562_);
lean_ctor_set(v___x_1567_, 0, v___x_1569_);
v___x_1571_ = v___x_1567_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1573_; 
v_reuseFailAlloc_1573_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1573_, 0, v___x_1569_);
lean_ctor_set(v_reuseFailAlloc_1573_, 1, v_a_1562_);
v___x_1571_ = v_reuseFailAlloc_1573_;
goto v_reusejp_1570_;
}
v_reusejp_1570_:
{
v_a_1561_ = v_tail_1565_;
v_a_1562_ = v___x_1571_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop(lean_object* v_env_1575_, lean_object* v_opts_1576_, lean_object* v_ns_1577_, lean_object* v_openDecls_1578_, lean_object* v_extractionResult_1579_, uint8_t v_localOnly_1580_, lean_object* v_id_1581_, lean_object* v_projs_1582_){
_start:
{
if (lean_obj_tag(v_id_1581_) == 1)
{
lean_object* v_pre_1583_; lean_object* v_str_1584_; lean_object* v_imported_1585_; lean_object* v_ctx_1586_; lean_object* v_scopes_1587_; lean_object* v___x_1588_; lean_object* v_id_1589_; lean_object* v___y_1591_; lean_object* v___x_1601_; lean_object* v___y_1603_; 
v_pre_1583_ = lean_ctor_get(v_id_1581_, 0);
lean_inc(v_pre_1583_);
v_str_1584_ = lean_ctor_get(v_id_1581_, 1);
lean_inc_ref(v_str_1584_);
v_imported_1585_ = lean_ctor_get(v_extractionResult_1579_, 1);
v_ctx_1586_ = lean_ctor_get(v_extractionResult_1579_, 2);
v_scopes_1587_ = lean_ctor_get(v_extractionResult_1579_, 3);
lean_inc(v_scopes_1587_);
lean_inc(v_ctx_1586_);
lean_inc(v_imported_1585_);
v___x_1588_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1588_, 0, v_id_1581_);
lean_ctor_set(v___x_1588_, 1, v_imported_1585_);
lean_ctor_set(v___x_1588_, 2, v_ctx_1586_);
lean_ctor_set(v___x_1588_, 3, v_scopes_1587_);
v_id_1589_ = l_Lean_MacroScopesView_review(v___x_1588_);
lean_inc(v_ns_1577_);
lean_inc(v_id_1589_);
lean_inc_ref(v_env_1575_);
v___x_1601_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace(v_env_1575_, v_opts_1576_, v_id_1589_, v_localOnly_1580_, v_ns_1577_);
if (lean_obj_tag(v___x_1601_) == 0)
{
lean_object* v___x_1608_; 
lean_inc(v_id_1589_);
lean_inc_ref(v_env_1575_);
v___x_1608_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact(v_env_1575_, v_opts_1576_, v_id_1589_, v_localOnly_1580_);
if (lean_obj_tag(v___x_1608_) == 0)
{
uint8_t v___x_1609_; 
lean_inc(v_id_1589_);
lean_inc_ref(v_env_1575_);
v___x_1609_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1575_, v_id_1589_, v_localOnly_1580_);
if (v___x_1609_ == 0)
{
v___y_1603_ = v___x_1601_;
goto v___jp_1602_;
}
else
{
lean_object* v___x_1610_; 
lean_inc(v_id_1589_);
v___x_1610_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1610_, 0, v_id_1589_);
lean_ctor_set(v___x_1610_, 1, v___x_1601_);
v___y_1603_ = v___x_1610_;
goto v___jp_1602_;
}
}
else
{
lean_object* v_val_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; 
lean_dec(v_id_1589_);
lean_dec_ref(v_str_1584_);
lean_dec(v_pre_1583_);
lean_dec(v_openDecls_1578_);
lean_dec(v_ns_1577_);
lean_dec_ref(v_env_1575_);
v_val_1611_ = lean_ctor_get(v___x_1608_, 0);
lean_inc(v_val_1611_);
lean_dec_ref_known(v___x_1608_, 1);
v___x_1612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1612_, 0, v_val_1611_);
lean_ctor_set(v___x_1612_, 1, v_projs_1582_);
v___x_1613_ = lean_box(0);
v___x_1614_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1614_, 0, v___x_1612_);
lean_ctor_set(v___x_1614_, 1, v___x_1613_);
return v___x_1614_;
}
}
else
{
lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; 
lean_dec(v_id_1589_);
lean_dec_ref(v_str_1584_);
lean_dec(v_pre_1583_);
lean_dec(v_openDecls_1578_);
lean_dec(v_ns_1577_);
lean_dec_ref(v_env_1575_);
v___x_1615_ = l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0(v___x_1601_);
v___x_1616_ = lean_box(0);
v___x_1617_ = l_List_mapTR_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__1(v_projs_1582_, v___x_1615_, v___x_1616_);
return v___x_1617_;
}
v___jp_1590_:
{
lean_object* v_resolvedIds_1592_; uint8_t v___x_1593_; lean_object* v___x_1594_; lean_object* v_resolvedIds_1595_; 
lean_inc(v_openDecls_1578_);
lean_inc(v_id_1589_);
lean_inc_ref_n(v_env_1575_, 2);
v_resolvedIds_1592_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls(v_env_1575_, v_opts_1576_, v_id_1589_, v_localOnly_1580_, v_openDecls_1578_, v___y_1591_);
v___x_1593_ = l_Lean_Name_isAtomic(v_id_1589_);
v___x_1594_ = l_Lean_getAliases(v_env_1575_, v_id_1589_, v___x_1593_);
lean_dec(v_id_1589_);
v_resolvedIds_1595_ = l_List_appendTR___redArg(v___x_1594_, v_resolvedIds_1592_);
if (lean_obj_tag(v_resolvedIds_1595_) == 0)
{
lean_object* v___x_1596_; 
v___x_1596_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1596_, 0, v_str_1584_);
lean_ctor_set(v___x_1596_, 1, v_projs_1582_);
v_id_1581_ = v_pre_1583_;
v_projs_1582_ = v___x_1596_;
goto _start;
}
else
{
lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; 
lean_dec_ref(v_str_1584_);
lean_dec(v_pre_1583_);
lean_dec(v_openDecls_1578_);
lean_dec(v_ns_1577_);
lean_dec_ref(v_env_1575_);
v___x_1598_ = l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0(v_resolvedIds_1595_);
v___x_1599_ = lean_box(0);
v___x_1600_ = l_List_mapTR_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__1(v_projs_1582_, v___x_1598_, v___x_1599_);
return v___x_1600_;
}
}
v___jp_1602_:
{
lean_object* v___x_1604_; 
lean_inc(v_id_1589_);
lean_inc_ref(v_env_1575_);
v___x_1604_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(v_env_1575_, v_opts_1576_, v_id_1589_, v_localOnly_1580_);
if (lean_obj_tag(v___x_1604_) == 1)
{
lean_object* v_val_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; 
v_val_1605_ = lean_ctor_get(v___x_1604_, 0);
lean_inc(v_val_1605_);
lean_dec_ref_known(v___x_1604_, 1);
v___x_1606_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1606_, 0, v_val_1605_);
lean_ctor_set(v___x_1606_, 1, v___x_1601_);
v___x_1607_ = l_List_appendTR___redArg(v___x_1606_, v___y_1603_);
v___y_1591_ = v___x_1607_;
goto v___jp_1590_;
}
else
{
lean_dec(v___x_1604_);
lean_dec(v___x_1601_);
v___y_1591_ = v___y_1603_;
goto v___jp_1590_;
}
}
}
else
{
lean_object* v___x_1618_; 
lean_dec(v_projs_1582_);
lean_dec(v_id_1581_);
lean_dec(v_openDecls_1578_);
lean_dec(v_ns_1577_);
lean_dec_ref(v_env_1575_);
v___x_1618_ = lean_box(0);
return v___x_1618_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop___boxed(lean_object* v_env_1619_, lean_object* v_opts_1620_, lean_object* v_ns_1621_, lean_object* v_openDecls_1622_, lean_object* v_extractionResult_1623_, lean_object* v_localOnly_1624_, lean_object* v_id_1625_, lean_object* v_projs_1626_){
_start:
{
uint8_t v_localOnly_boxed_1627_; lean_object* v_res_1628_; 
v_localOnly_boxed_1627_ = lean_unbox(v_localOnly_1624_);
v_res_1628_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop(v_env_1619_, v_opts_1620_, v_ns_1621_, v_openDecls_1622_, v_extractionResult_1623_, v_localOnly_boxed_1627_, v_id_1625_, v_projs_1626_);
lean_dec_ref(v_extractionResult_1623_);
lean_dec_ref(v_opts_1620_);
return v_res_1628_;
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object* v_env_1629_, lean_object* v_opts_1630_, lean_object* v_ns_1631_, lean_object* v_openDecls_1632_, lean_object* v_id_1633_){
_start:
{
lean_object* v_extractionResult_1634_; lean_object* v_name_1635_; lean_object* v_imported_1636_; lean_object* v_ctx_1637_; lean_object* v_scopes_1638_; uint8_t v___y_1640_; uint8_t v___x_1643_; 
v_extractionResult_1634_ = l_Lean_extractMacroScopes(v_id_1633_);
v_name_1635_ = lean_ctor_get(v_extractionResult_1634_, 0);
lean_inc(v_name_1635_);
v_imported_1636_ = lean_ctor_get(v_extractionResult_1634_, 1);
v_ctx_1637_ = lean_ctor_get(v_extractionResult_1634_, 2);
v_scopes_1638_ = lean_ctor_get(v_extractionResult_1634_, 3);
v___x_1643_ = l_List_isEmpty___redArg(v_scopes_1638_);
if (v___x_1643_ == 0)
{
lean_object* v___x_1644_; uint8_t v___x_1645_; 
v___x_1644_ = l_Lean_Environment_mainModule(v_env_1629_);
lean_inc(v_ctx_1637_);
lean_inc(v_imported_1636_);
v___x_1645_ = l___private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo(v___x_1644_, v_imported_1636_, v_ctx_1637_);
lean_dec(v___x_1644_);
v___y_1640_ = v___x_1645_;
goto v___jp_1639_;
}
else
{
uint8_t v___x_1646_; 
v___x_1646_ = 0;
v___y_1640_ = v___x_1646_;
goto v___jp_1639_;
}
v___jp_1639_:
{
lean_object* v___x_1641_; lean_object* v___x_1642_; 
v___x_1641_ = lean_box(0);
v___x_1642_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop(v_env_1629_, v_opts_1630_, v_ns_1631_, v_openDecls_1632_, v_extractionResult_1634_, v___y_1640_, v_name_1635_, v___x_1641_);
lean_dec_ref(v_extractionResult_1634_);
return v___x_1642_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveGlobalName___boxed(lean_object* v_env_1647_, lean_object* v_opts_1648_, lean_object* v_ns_1649_, lean_object* v_openDecls_1650_, lean_object* v_id_1651_){
_start:
{
lean_object* v_res_1652_; 
v_res_1652_ = l_Lean_ResolveName_resolveGlobalName(v_env_1647_, v_opts_1648_, v_ns_1649_, v_openDecls_1650_, v_id_1651_);
lean_dec_ref(v_opts_1648_);
return v_res_1652_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_ResolveName_resolveNamespaceUsingScope_x3f_spec__0(lean_object* v_msg_1653_){
_start:
{
lean_object* v___x_1654_; lean_object* v___x_1655_; 
v___x_1654_ = lean_box(0);
v___x_1655_ = lean_panic_fn_borrowed(v___x_1654_, v_msg_1653_);
return v___x_1655_;
}
}
static lean_object* _init_l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3(void){
_start:
{
lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; 
v___x_1659_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__2));
v___x_1660_ = lean_unsigned_to_nat(9u);
v___x_1661_ = lean_unsigned_to_nat(275u);
v___x_1662_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__1));
v___x_1663_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__0));
v___x_1664_ = l_mkPanicMessageWithDecl(v___x_1663_, v___x_1662_, v___x_1661_, v___x_1660_, v___x_1659_);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespaceUsingScope_x3f(lean_object* v_env_1665_, lean_object* v_n_1666_, lean_object* v_ns_1667_){
_start:
{
switch(lean_obj_tag(v_ns_1667_))
{
case 1:
{
lean_object* v_pre_1668_; lean_object* v___x_1669_; uint8_t v___x_1670_; 
v_pre_1668_ = lean_ctor_get(v_ns_1667_, 0);
lean_inc(v_pre_1668_);
lean_inc(v_n_1666_);
v___x_1669_ = l_Lean_Name_append(v_ns_1667_, v_n_1666_);
lean_inc_ref(v_env_1665_);
v___x_1670_ = l_Lean_Environment_isNamespace(v_env_1665_, v___x_1669_);
if (v___x_1670_ == 0)
{
lean_dec(v___x_1669_);
v_ns_1667_ = v_pre_1668_;
goto _start;
}
else
{
lean_object* v___x_1672_; 
lean_dec(v_pre_1668_);
lean_dec(v_n_1666_);
lean_dec_ref(v_env_1665_);
v___x_1672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1672_, 0, v___x_1669_);
return v___x_1672_;
}
}
case 0:
{
lean_object* v___x_1673_; lean_object* v_n_1674_; uint8_t v___x_1675_; 
v___x_1673_ = l_Lean_rootNamespace;
v_n_1674_ = l_Lean_Name_replacePrefix(v_n_1666_, v___x_1673_, v_ns_1667_);
v___x_1675_ = l_Lean_Environment_isNamespace(v_env_1665_, v_n_1674_);
if (v___x_1675_ == 0)
{
lean_object* v___x_1676_; 
lean_dec(v_n_1674_);
v___x_1676_ = lean_box(0);
return v___x_1676_;
}
else
{
lean_object* v___x_1677_; 
v___x_1677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1677_, 0, v_n_1674_);
return v___x_1677_;
}
}
default: 
{
lean_object* v___x_1678_; lean_object* v___x_1679_; 
lean_dec(v_ns_1667_);
lean_dec(v_n_1666_);
lean_dec_ref(v_env_1665_);
v___x_1678_ = lean_obj_once(&l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3, &l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3_once, _init_l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3);
v___x_1679_ = l_panic___at___00Lean_ResolveName_resolveNamespaceUsingScope_x3f_spec__0(v___x_1678_);
return v___x_1679_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespaceUsingOpenDecls(lean_object* v_env_1680_, lean_object* v_n_1681_, lean_object* v_x_1682_){
_start:
{
if (lean_obj_tag(v_x_1682_) == 0)
{
lean_object* v___x_1683_; 
lean_dec(v_n_1681_);
lean_dec_ref(v_env_1680_);
v___x_1683_ = lean_box(0);
return v___x_1683_;
}
else
{
lean_object* v_head_1684_; 
v_head_1684_ = lean_ctor_get(v_x_1682_, 0);
if (lean_obj_tag(v_head_1684_) == 0)
{
lean_object* v_tail_1685_; lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1700_; 
lean_inc_ref(v_head_1684_);
v_tail_1685_ = lean_ctor_get(v_x_1682_, 1);
v_isSharedCheck_1700_ = !lean_is_exclusive(v_x_1682_);
if (v_isSharedCheck_1700_ == 0)
{
lean_object* v_unused_1701_; 
v_unused_1701_ = lean_ctor_get(v_x_1682_, 0);
lean_dec(v_unused_1701_);
v___x_1687_ = v_x_1682_;
v_isShared_1688_ = v_isSharedCheck_1700_;
goto v_resetjp_1686_;
}
else
{
lean_inc(v_tail_1685_);
lean_dec(v_x_1682_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1700_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
lean_object* v_ns_1689_; lean_object* v_except_1690_; lean_object* v___x_1691_; uint8_t v___x_1692_; 
v_ns_1689_ = lean_ctor_get(v_head_1684_, 0);
lean_inc(v_ns_1689_);
v_except_1690_ = lean_ctor_get(v_head_1684_, 1);
lean_inc(v_except_1690_);
lean_dec_ref_known(v_head_1684_, 2);
lean_inc(v_n_1681_);
v___x_1691_ = l_Lean_Name_append(v_ns_1689_, v_n_1681_);
lean_inc_ref(v_env_1680_);
v___x_1692_ = l_Lean_Environment_isNamespace(v_env_1680_, v___x_1691_);
if (v___x_1692_ == 0)
{
lean_dec(v___x_1691_);
lean_dec(v_except_1690_);
lean_del_object(v___x_1687_);
v_x_1682_ = v_tail_1685_;
goto _start;
}
else
{
uint8_t v___x_1694_; 
v___x_1694_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_n_1681_, v_except_1690_);
lean_dec(v_except_1690_);
if (v___x_1694_ == 0)
{
lean_object* v___x_1695_; lean_object* v___x_1697_; 
v___x_1695_ = l_Lean_ResolveName_resolveNamespaceUsingOpenDecls(v_env_1680_, v_n_1681_, v_tail_1685_);
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 1, v___x_1695_);
lean_ctor_set(v___x_1687_, 0, v___x_1691_);
v___x_1697_ = v___x_1687_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v___x_1691_);
lean_ctor_set(v_reuseFailAlloc_1698_, 1, v___x_1695_);
v___x_1697_ = v_reuseFailAlloc_1698_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
return v___x_1697_;
}
}
else
{
lean_dec(v___x_1691_);
lean_del_object(v___x_1687_);
v_x_1682_ = v_tail_1685_;
goto _start;
}
}
}
}
else
{
lean_object* v_tail_1702_; 
v_tail_1702_ = lean_ctor_get(v_x_1682_, 1);
lean_inc(v_tail_1702_);
lean_dec_ref_known(v_x_1682_, 2);
v_x_1682_ = v_tail_1702_;
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
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0(lean_object* v_____do__lift_1737_, lean_object* v_toPure_1738_, lean_object* v_id_1739_, lean_object* v_inst_1740_, lean_object* v_inst_1741_, lean_object* v_inst_1742_, lean_object* v_inst_1743_, uint8_t v_____do__lift_1744_){
_start:
{
uint8_t v_isExporting_1748_; 
v_isExporting_1748_ = lean_ctor_get_uint8(v_____do__lift_1737_, sizeof(void*)*13);
if (v_isExporting_1748_ == 0)
{
lean_dec_ref(v_inst_1743_);
lean_dec(v_inst_1742_);
lean_dec_ref(v_inst_1741_);
lean_dec_ref(v_inst_1740_);
lean_dec(v_id_1739_);
goto v___jp_1745_;
}
else
{
uint8_t v___x_1749_; 
v___x_1749_ = l_Lean_isPrivateName(v_id_1739_);
if (v___x_1749_ == 0)
{
lean_dec_ref(v_inst_1743_);
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
lean_dec_ref(v_inst_1743_);
lean_dec(v_inst_1742_);
lean_dec_ref(v_inst_1741_);
lean_dec_ref(v_inst_1740_);
lean_dec(v_id_1739_);
goto v___jp_1745_;
}
else
{
lean_object* v___x_1750_; uint8_t v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; 
lean_dec(v_toPure_1738_);
v___x_1750_ = lean_obj_once(&l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1, &l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1_once, _init_l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1);
v___x_1751_ = 0;
v___x_1752_ = l_Lean_MessageData_ofConstName(v_id_1739_, v___x_1751_);
v___x_1753_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1753_, 0, v___x_1750_);
lean_ctor_set(v___x_1753_, 1, v___x_1752_);
v___x_1754_ = lean_obj_once(&l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3, &l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3_once, _init_l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3);
v___x_1755_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1755_, 0, v___x_1753_);
lean_ctor_set(v___x_1755_, 1, v___x_1754_);
v___x_1756_ = l_Lean_logWarning___redArg(v_inst_1740_, v_inst_1741_, v_inst_1742_, v_inst_1743_, v___x_1755_);
return v___x_1756_;
}
}
}
v___jp_1745_:
{
lean_object* v___x_1746_; lean_object* v___x_1747_; 
v___x_1746_ = lean_box(0);
v___x_1747_ = lean_apply_2(v_toPure_1738_, lean_box(0), v___x_1746_);
return v___x_1747_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0___boxed(lean_object* v_____do__lift_1757_, lean_object* v_toPure_1758_, lean_object* v_id_1759_, lean_object* v_inst_1760_, lean_object* v_inst_1761_, lean_object* v_inst_1762_, lean_object* v_inst_1763_, lean_object* v_____do__lift_1764_){
_start:
{
uint8_t v_____do__lift_199__boxed_1765_; lean_object* v_res_1766_; 
v_____do__lift_199__boxed_1765_ = lean_unbox(v_____do__lift_1764_);
v_res_1766_ = l_Lean_checkPrivateInPublic___redArg___lam__0(v_____do__lift_1757_, v_toPure_1758_, v_id_1759_, v_inst_1760_, v_inst_1761_, v_inst_1762_, v_inst_1763_, v_____do__lift_199__boxed_1765_);
lean_dec_ref(v_____do__lift_1757_);
return v_res_1766_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__1(lean_object* v_toPure_1767_, lean_object* v_id_1768_, lean_object* v_inst_1769_, lean_object* v_inst_1770_, lean_object* v_inst_1771_, lean_object* v_inst_1772_, lean_object* v___x_1773_, lean_object* v_toBind_1774_, lean_object* v_____do__lift_1775_){
_start:
{
lean_object* v___f_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; 
lean_inc_ref(v_inst_1772_);
lean_inc_ref(v_inst_1769_);
v___f_1776_ = lean_alloc_closure((void*)(l_Lean_checkPrivateInPublic___redArg___lam__0___boxed), 8, 7);
lean_closure_set(v___f_1776_, 0, v_____do__lift_1775_);
lean_closure_set(v___f_1776_, 1, v_toPure_1767_);
lean_closure_set(v___f_1776_, 2, v_id_1768_);
lean_closure_set(v___f_1776_, 3, v_inst_1769_);
lean_closure_set(v___f_1776_, 4, v_inst_1770_);
lean_closure_set(v___f_1776_, 5, v_inst_1771_);
lean_closure_set(v___f_1776_, 6, v_inst_1772_);
v___x_1777_ = l_Lean_ResolveName_backward_privateInPublic_warn;
v___x_1778_ = l_Lean_Option_getM___redArg(v_inst_1769_, v_inst_1772_, v___x_1773_, v___x_1777_);
v___x_1779_ = lean_apply_4(v_toBind_1774_, lean_box(0), lean_box(0), v___x_1778_, v___f_1776_);
return v___x_1779_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg(lean_object* v_inst_1780_, lean_object* v_inst_1781_, lean_object* v_inst_1782_, lean_object* v_inst_1783_, lean_object* v_inst_1784_, lean_object* v_id_1785_){
_start:
{
lean_object* v___x_1786_; lean_object* v_toApplicative_1787_; lean_object* v_toBind_1788_; lean_object* v_getEnv_1789_; lean_object* v_toPure_1790_; lean_object* v___f_1791_; lean_object* v___x_1792_; 
v___x_1786_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1787_ = lean_ctor_get(v_inst_1780_, 0);
v_toBind_1788_ = lean_ctor_get(v_inst_1780_, 1);
lean_inc_n(v_toBind_1788_, 2);
v_getEnv_1789_ = lean_ctor_get(v_inst_1781_, 0);
lean_inc(v_getEnv_1789_);
lean_dec_ref(v_inst_1781_);
v_toPure_1790_ = lean_ctor_get(v_toApplicative_1787_, 1);
lean_inc(v_toPure_1790_);
v___f_1791_ = lean_alloc_closure((void*)(l_Lean_checkPrivateInPublic___redArg___lam__1), 9, 8);
lean_closure_set(v___f_1791_, 0, v_toPure_1790_);
lean_closure_set(v___f_1791_, 1, v_id_1785_);
lean_closure_set(v___f_1791_, 2, v_inst_1780_);
lean_closure_set(v___f_1791_, 3, v_inst_1783_);
lean_closure_set(v___f_1791_, 4, v_inst_1784_);
lean_closure_set(v___f_1791_, 5, v_inst_1782_);
lean_closure_set(v___f_1791_, 6, v___x_1786_);
lean_closure_set(v___f_1791_, 7, v_toBind_1788_);
v___x_1792_ = lean_apply_4(v_toBind_1788_, lean_box(0), lean_box(0), v_getEnv_1789_, v___f_1791_);
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
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__0(lean_object* v_env_1801_, lean_object* v_n_1802_, lean_object* v_toPure_1803_, uint8_t v___y_1804_, uint8_t v___x_1805_, lean_object* v_____r_1806_){
_start:
{
lean_object* v___x_1807_; 
v___x_1807_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1801_, v_n_1802_);
if (lean_obj_tag(v___x_1807_) == 0)
{
lean_object* v___x_1808_; lean_object* v___x_1809_; 
v___x_1808_ = lean_box(v___y_1804_);
v___x_1809_ = lean_apply_2(v_toPure_1803_, lean_box(0), v___x_1808_);
return v___x_1809_;
}
else
{
lean_object* v_val_1810_; lean_object* v___x_1811_; uint8_t v_isModule_1812_; 
v_val_1810_ = lean_ctor_get(v___x_1807_, 0);
lean_inc(v_val_1810_);
lean_dec_ref_known(v___x_1807_, 1);
v___x_1811_ = l_Lean_Environment_header(v_env_1801_);
v_isModule_1812_ = lean_ctor_get_uint8(v___x_1811_, sizeof(void*)*8 + 4);
if (v_isModule_1812_ == 0)
{
lean_object* v___x_1813_; lean_object* v___x_1814_; 
lean_dec_ref(v___x_1811_);
lean_dec(v_val_1810_);
v___x_1813_ = lean_box(v___x_1805_);
v___x_1814_ = lean_apply_2(v_toPure_1803_, lean_box(0), v___x_1813_);
return v___x_1814_;
}
else
{
lean_object* v_modules_1815_; lean_object* v___x_1816_; uint8_t v___x_1817_; 
v_modules_1815_ = lean_ctor_get(v___x_1811_, 3);
lean_inc_ref(v_modules_1815_);
lean_dec_ref(v___x_1811_);
v___x_1816_ = lean_array_get_size(v_modules_1815_);
v___x_1817_ = lean_nat_dec_lt(v_val_1810_, v___x_1816_);
if (v___x_1817_ == 0)
{
lean_object* v___x_1818_; lean_object* v___x_1819_; 
lean_dec_ref(v_modules_1815_);
lean_dec(v_val_1810_);
v___x_1818_ = lean_box(v_isModule_1812_);
v___x_1819_ = lean_apply_2(v_toPure_1803_, lean_box(0), v___x_1818_);
return v___x_1819_;
}
else
{
lean_object* v___x_1820_; lean_object* v_toImport_1821_; uint8_t v_importAll_1822_; 
v___x_1820_ = lean_array_fget(v_modules_1815_, v_val_1810_);
lean_dec(v_val_1810_);
lean_dec_ref(v_modules_1815_);
v_toImport_1821_ = lean_ctor_get(v___x_1820_, 0);
lean_inc_ref(v_toImport_1821_);
lean_dec(v___x_1820_);
v_importAll_1822_ = lean_ctor_get_uint8(v_toImport_1821_, sizeof(void*)*1);
lean_dec_ref(v_toImport_1821_);
if (v_importAll_1822_ == 0)
{
lean_object* v___x_1823_; lean_object* v___x_1824_; 
v___x_1823_ = lean_box(v_isModule_1812_);
v___x_1824_ = lean_apply_2(v_toPure_1803_, lean_box(0), v___x_1823_);
return v___x_1824_;
}
else
{
lean_object* v___x_1825_; lean_object* v___x_1826_; 
v___x_1825_ = lean_box(v___y_1804_);
v___x_1826_ = lean_apply_2(v_toPure_1803_, lean_box(0), v___x_1825_);
return v___x_1826_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__0___boxed(lean_object* v_env_1827_, lean_object* v_n_1828_, lean_object* v_toPure_1829_, lean_object* v___y_1830_, lean_object* v___x_1831_, lean_object* v_____r_1832_){
_start:
{
uint8_t v___y_386__boxed_1833_; uint8_t v___x_387__boxed_1834_; lean_object* v_res_1835_; 
v___y_386__boxed_1833_ = lean_unbox(v___y_1830_);
v___x_387__boxed_1834_ = lean_unbox(v___x_1831_);
v_res_1835_ = l_Lean_isInaccessiblePrivateName___redArg___lam__0(v_env_1827_, v_n_1828_, v_toPure_1829_, v___y_386__boxed_1833_, v___x_387__boxed_1834_, v_____r_1832_);
lean_dec(v_n_1828_);
lean_dec_ref(v_env_1827_);
return v_res_1835_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__1(lean_object* v_env_1836_, lean_object* v_n_1837_, lean_object* v_toPure_1838_, uint8_t v___x_1839_, lean_object* v_inst_1840_, lean_object* v_inst_1841_, lean_object* v_inst_1842_, lean_object* v_inst_1843_, lean_object* v_inst_1844_, lean_object* v_toBind_1845_, uint8_t v___y_1846_, uint8_t v_____do__lift_1847_){
_start:
{
uint8_t v___y_1849_; uint8_t v_isExporting_1855_; 
v_isExporting_1855_ = lean_ctor_get_uint8(v_env_1836_, sizeof(void*)*13);
if (v_isExporting_1855_ == 0)
{
v___y_1849_ = v___y_1846_;
goto v___jp_1848_;
}
else
{
if (v_____do__lift_1847_ == 0)
{
lean_object* v___x_1856_; lean_object* v___x_1857_; 
lean_dec(v_toBind_1845_);
lean_dec(v_inst_1844_);
lean_dec_ref(v_inst_1843_);
lean_dec_ref(v_inst_1842_);
lean_dec_ref(v_inst_1841_);
lean_dec_ref(v_inst_1840_);
lean_dec(v_n_1837_);
lean_dec_ref(v_env_1836_);
v___x_1856_ = lean_box(v___x_1839_);
v___x_1857_ = lean_apply_2(v_toPure_1838_, lean_box(0), v___x_1856_);
return v___x_1857_;
}
else
{
v___y_1849_ = v___y_1846_;
goto v___jp_1848_;
}
}
v___jp_1848_:
{
lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___f_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; 
v___x_1850_ = lean_box(v___y_1849_);
v___x_1851_ = lean_box(v___x_1839_);
lean_inc(v_n_1837_);
v___f_1852_ = lean_alloc_closure((void*)(l_Lean_isInaccessiblePrivateName___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1852_, 0, v_env_1836_);
lean_closure_set(v___f_1852_, 1, v_n_1837_);
lean_closure_set(v___f_1852_, 2, v_toPure_1838_);
lean_closure_set(v___f_1852_, 3, v___x_1850_);
lean_closure_set(v___f_1852_, 4, v___x_1851_);
v___x_1853_ = l_Lean_checkPrivateInPublic___redArg(v_inst_1840_, v_inst_1841_, v_inst_1842_, v_inst_1843_, v_inst_1844_, v_n_1837_);
v___x_1854_ = lean_apply_4(v_toBind_1845_, lean_box(0), lean_box(0), v___x_1853_, v___f_1852_);
return v___x_1854_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__1___boxed(lean_object* v_env_1858_, lean_object* v_n_1859_, lean_object* v_toPure_1860_, lean_object* v___x_1861_, lean_object* v_inst_1862_, lean_object* v_inst_1863_, lean_object* v_inst_1864_, lean_object* v_inst_1865_, lean_object* v_inst_1866_, lean_object* v_toBind_1867_, lean_object* v___y_1868_, lean_object* v_____do__lift_1869_){
_start:
{
uint8_t v___x_427__boxed_1870_; uint8_t v___y_433__boxed_1871_; uint8_t v_____do__lift_434__boxed_1872_; lean_object* v_res_1873_; 
v___x_427__boxed_1870_ = lean_unbox(v___x_1861_);
v___y_433__boxed_1871_ = lean_unbox(v___y_1868_);
v_____do__lift_434__boxed_1872_ = lean_unbox(v_____do__lift_1869_);
v_res_1873_ = l_Lean_isInaccessiblePrivateName___redArg___lam__1(v_env_1858_, v_n_1859_, v_toPure_1860_, v___x_427__boxed_1870_, v_inst_1862_, v_inst_1863_, v_inst_1864_, v_inst_1865_, v_inst_1866_, v_toBind_1867_, v___y_433__boxed_1871_, v_____do__lift_434__boxed_1872_);
return v_res_1873_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__2(lean_object* v_n_1874_, lean_object* v_toPure_1875_, uint8_t v___x_1876_, lean_object* v_inst_1877_, lean_object* v_inst_1878_, lean_object* v_inst_1879_, lean_object* v_inst_1880_, lean_object* v_inst_1881_, lean_object* v_toBind_1882_, uint8_t v___y_1883_, lean_object* v___x_1884_, lean_object* v_env_1885_){
_start:
{
lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___f_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; 
v___x_1886_ = lean_box(v___x_1876_);
v___x_1887_ = lean_box(v___y_1883_);
lean_inc(v_toBind_1882_);
lean_inc_ref(v_inst_1879_);
lean_inc_ref(v_inst_1877_);
v___f_1888_ = lean_alloc_closure((void*)(l_Lean_isInaccessiblePrivateName___redArg___lam__1___boxed), 12, 11);
lean_closure_set(v___f_1888_, 0, v_env_1885_);
lean_closure_set(v___f_1888_, 1, v_n_1874_);
lean_closure_set(v___f_1888_, 2, v_toPure_1875_);
lean_closure_set(v___f_1888_, 3, v___x_1886_);
lean_closure_set(v___f_1888_, 4, v_inst_1877_);
lean_closure_set(v___f_1888_, 5, v_inst_1878_);
lean_closure_set(v___f_1888_, 6, v_inst_1879_);
lean_closure_set(v___f_1888_, 7, v_inst_1880_);
lean_closure_set(v___f_1888_, 8, v_inst_1881_);
lean_closure_set(v___f_1888_, 9, v_toBind_1882_);
lean_closure_set(v___f_1888_, 10, v___x_1887_);
v___x_1889_ = l_Lean_ResolveName_backward_privateInPublic;
v___x_1890_ = l_Lean_Option_getM___redArg(v_inst_1877_, v_inst_1879_, v___x_1884_, v___x_1889_);
v___x_1891_ = lean_apply_4(v_toBind_1882_, lean_box(0), lean_box(0), v___x_1890_, v___f_1888_);
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__2___boxed(lean_object* v_n_1892_, lean_object* v_toPure_1893_, lean_object* v___x_1894_, lean_object* v_inst_1895_, lean_object* v_inst_1896_, lean_object* v_inst_1897_, lean_object* v_inst_1898_, lean_object* v_inst_1899_, lean_object* v_toBind_1900_, lean_object* v___y_1901_, lean_object* v___x_1902_, lean_object* v_env_1903_){
_start:
{
uint8_t v___x_469__boxed_1904_; uint8_t v___y_475__boxed_1905_; lean_object* v_res_1906_; 
v___x_469__boxed_1904_ = lean_unbox(v___x_1894_);
v___y_475__boxed_1905_ = lean_unbox(v___y_1901_);
v_res_1906_ = l_Lean_isInaccessiblePrivateName___redArg___lam__2(v_n_1892_, v_toPure_1893_, v___x_469__boxed_1904_, v_inst_1895_, v_inst_1896_, v_inst_1897_, v_inst_1898_, v_inst_1899_, v_toBind_1900_, v___y_475__boxed_1905_, v___x_1902_, v_env_1903_);
return v_res_1906_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg(lean_object* v_inst_1907_, lean_object* v_inst_1908_, lean_object* v_inst_1909_, lean_object* v_inst_1910_, lean_object* v_inst_1911_, lean_object* v_n_1912_){
_start:
{
lean_object* v___x_1913_; uint8_t v___y_1915_; uint8_t v___x_1930_; 
v___x_1913_ = l_Lean_KVMap_instValueBool;
v___x_1930_ = l_Lean_isPrivateName(v_n_1912_);
if (v___x_1930_ == 0)
{
uint8_t v___x_1931_; 
v___x_1931_ = 1;
v___y_1915_ = v___x_1931_;
goto v___jp_1914_;
}
else
{
uint8_t v___x_1932_; 
v___x_1932_ = 0;
v___y_1915_ = v___x_1932_;
goto v___jp_1914_;
}
v___jp_1914_:
{
if (v___y_1915_ == 0)
{
lean_object* v_toApplicative_1916_; lean_object* v_toBind_1917_; lean_object* v_toPure_1918_; lean_object* v_getEnv_1919_; uint8_t v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___f_1923_; lean_object* v___x_1924_; 
v_toApplicative_1916_ = lean_ctor_get(v_inst_1909_, 0);
v_toBind_1917_ = lean_ctor_get(v_inst_1909_, 1);
lean_inc_n(v_toBind_1917_, 2);
v_toPure_1918_ = lean_ctor_get(v_toApplicative_1916_, 1);
lean_inc(v_toPure_1918_);
v_getEnv_1919_ = lean_ctor_get(v_inst_1910_, 0);
lean_inc(v_getEnv_1919_);
v___x_1920_ = 1;
v___x_1921_ = lean_box(v___x_1920_);
v___x_1922_ = lean_box(v___y_1915_);
v___f_1923_ = lean_alloc_closure((void*)(l_Lean_isInaccessiblePrivateName___redArg___lam__2___boxed), 12, 11);
lean_closure_set(v___f_1923_, 0, v_n_1912_);
lean_closure_set(v___f_1923_, 1, v_toPure_1918_);
lean_closure_set(v___f_1923_, 2, v___x_1921_);
lean_closure_set(v___f_1923_, 3, v_inst_1909_);
lean_closure_set(v___f_1923_, 4, v_inst_1910_);
lean_closure_set(v___f_1923_, 5, v_inst_1911_);
lean_closure_set(v___f_1923_, 6, v_inst_1907_);
lean_closure_set(v___f_1923_, 7, v_inst_1908_);
lean_closure_set(v___f_1923_, 8, v_toBind_1917_);
lean_closure_set(v___f_1923_, 9, v___x_1922_);
lean_closure_set(v___f_1923_, 10, v___x_1913_);
v___x_1924_ = lean_apply_4(v_toBind_1917_, lean_box(0), lean_box(0), v_getEnv_1919_, v___f_1923_);
return v___x_1924_;
}
else
{
lean_object* v_toApplicative_1925_; lean_object* v_toPure_1926_; uint8_t v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; 
v_toApplicative_1925_ = lean_ctor_get(v_inst_1909_, 0);
lean_inc_ref(v_toApplicative_1925_);
lean_dec(v_n_1912_);
lean_dec_ref(v_inst_1911_);
lean_dec_ref(v_inst_1910_);
lean_dec_ref(v_inst_1909_);
lean_dec(v_inst_1908_);
lean_dec_ref(v_inst_1907_);
v_toPure_1926_ = lean_ctor_get(v_toApplicative_1925_, 1);
lean_inc(v_toPure_1926_);
lean_dec_ref(v_toApplicative_1925_);
v___x_1927_ = 0;
v___x_1928_ = lean_box(v___x_1927_);
v___x_1929_ = lean_apply_2(v_toPure_1926_, lean_box(0), v___x_1928_);
return v___x_1929_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName(lean_object* v_m_1933_, lean_object* v_inst_1934_, lean_object* v_inst_1935_, lean_object* v_inst_1936_, lean_object* v_inst_1937_, lean_object* v_inst_1938_, lean_object* v_n_1939_){
_start:
{
lean_object* v___x_1940_; 
v___x_1940_ = l_Lean_isInaccessiblePrivateName___redArg(v_inst_1934_, v_inst_1935_, v_inst_1936_, v_inst_1937_, v_inst_1938_, v_n_1939_);
return v___x_1940_;
}
}
LEAN_EXPORT uint8_t l_Lean_resolveGlobalName___redArg___lam__0(lean_object* v_x_1941_){
_start:
{
lean_object* v_fst_1942_; uint8_t v___x_1943_; 
v_fst_1942_ = lean_ctor_get(v_x_1941_, 0);
v___x_1943_ = l_Lean_isPrivateName(v_fst_1942_);
return v___x_1943_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__0___boxed(lean_object* v_x_1944_){
_start:
{
uint8_t v_res_1945_; lean_object* v_r_1946_; 
v_res_1945_ = l_Lean_resolveGlobalName___redArg___lam__0(v_x_1944_);
lean_dec_ref(v_x_1944_);
v_r_1946_ = lean_box(v_res_1945_);
return v_r_1946_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__1(lean_object* v_toPure_1947_, lean_object* v_res_1948_, lean_object* v_____r_1949_){
_start:
{
lean_object* v___x_1950_; 
v___x_1950_ = lean_apply_2(v_toPure_1947_, lean_box(0), v_res_1948_);
return v___x_1950_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__2(uint8_t v_enableLog_1951_, lean_object* v_toPure_1952_, lean_object* v_res_1953_, lean_object* v___f_1954_, lean_object* v_inst_1955_, lean_object* v_inst_1956_, lean_object* v_inst_1957_, lean_object* v_inst_1958_, lean_object* v_inst_1959_, lean_object* v_toBind_1960_, lean_object* v___f_1961_, lean_object* v_____do__lift_1962_){
_start:
{
if (v_enableLog_1951_ == 0)
{
lean_object* v___x_1963_; 
lean_dec(v___f_1961_);
lean_dec(v_toBind_1960_);
lean_dec(v_inst_1959_);
lean_dec_ref(v_inst_1958_);
lean_dec_ref(v_inst_1957_);
lean_dec_ref(v_inst_1956_);
lean_dec_ref(v_inst_1955_);
lean_dec_ref(v___f_1954_);
v___x_1963_ = lean_apply_2(v_toPure_1952_, lean_box(0), v_res_1953_);
return v___x_1963_;
}
else
{
uint8_t v_isExporting_1964_; 
v_isExporting_1964_ = lean_ctor_get_uint8(v_____do__lift_1962_, sizeof(void*)*13);
if (v_isExporting_1964_ == 0)
{
lean_object* v___x_1965_; 
lean_dec(v___f_1961_);
lean_dec(v_toBind_1960_);
lean_dec(v_inst_1959_);
lean_dec_ref(v_inst_1958_);
lean_dec_ref(v_inst_1957_);
lean_dec_ref(v_inst_1956_);
lean_dec_ref(v_inst_1955_);
lean_dec_ref(v___f_1954_);
v___x_1965_ = lean_apply_2(v_toPure_1952_, lean_box(0), v_res_1953_);
return v___x_1965_;
}
else
{
lean_object* v___x_1966_; 
lean_inc(v_res_1953_);
v___x_1966_ = l_List_find_x3f___redArg(v___f_1954_, v_res_1953_);
if (lean_obj_tag(v___x_1966_) == 1)
{
lean_object* v_val_1967_; lean_object* v_fst_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; 
lean_dec(v_res_1953_);
lean_dec(v_toPure_1952_);
v_val_1967_ = lean_ctor_get(v___x_1966_, 0);
lean_inc(v_val_1967_);
lean_dec_ref_known(v___x_1966_, 1);
v_fst_1968_ = lean_ctor_get(v_val_1967_, 0);
lean_inc(v_fst_1968_);
lean_dec(v_val_1967_);
v___x_1969_ = l_Lean_checkPrivateInPublic___redArg(v_inst_1955_, v_inst_1956_, v_inst_1957_, v_inst_1958_, v_inst_1959_, v_fst_1968_);
v___x_1970_ = lean_apply_4(v_toBind_1960_, lean_box(0), lean_box(0), v___x_1969_, v___f_1961_);
return v___x_1970_;
}
else
{
lean_object* v___x_1971_; 
lean_dec(v___x_1966_);
lean_dec(v___f_1961_);
lean_dec(v_toBind_1960_);
lean_dec(v_inst_1959_);
lean_dec_ref(v_inst_1958_);
lean_dec_ref(v_inst_1957_);
lean_dec_ref(v_inst_1956_);
lean_dec_ref(v_inst_1955_);
v___x_1971_ = lean_apply_2(v_toPure_1952_, lean_box(0), v_res_1953_);
return v___x_1971_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__2___boxed(lean_object* v_enableLog_1972_, lean_object* v_toPure_1973_, lean_object* v_res_1974_, lean_object* v___f_1975_, lean_object* v_inst_1976_, lean_object* v_inst_1977_, lean_object* v_inst_1978_, lean_object* v_inst_1979_, lean_object* v_inst_1980_, lean_object* v_toBind_1981_, lean_object* v___f_1982_, lean_object* v_____do__lift_1983_){
_start:
{
uint8_t v_enableLog_boxed_1984_; lean_object* v_res_1985_; 
v_enableLog_boxed_1984_ = lean_unbox(v_enableLog_1972_);
v_res_1985_ = l_Lean_resolveGlobalName___redArg___lam__2(v_enableLog_boxed_1984_, v_toPure_1973_, v_res_1974_, v___f_1975_, v_inst_1976_, v_inst_1977_, v_inst_1978_, v_inst_1979_, v_inst_1980_, v_toBind_1981_, v___f_1982_, v_____do__lift_1983_);
lean_dec_ref(v_____do__lift_1983_);
return v_res_1985_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__3(lean_object* v_____do__lift_1986_, lean_object* v_____do__lift_1987_, lean_object* v_____do__lift_1988_, lean_object* v_id_1989_, lean_object* v_toPure_1990_, uint8_t v_enableLog_1991_, lean_object* v___f_1992_, lean_object* v_inst_1993_, lean_object* v_inst_1994_, lean_object* v_inst_1995_, lean_object* v_inst_1996_, lean_object* v_inst_1997_, lean_object* v_toBind_1998_, lean_object* v_getEnv_1999_, lean_object* v_____do__lift_2000_){
_start:
{
lean_object* v_res_2001_; lean_object* v___f_2002_; lean_object* v___x_2003_; lean_object* v___f_2004_; lean_object* v___x_2005_; 
v_res_2001_ = l_Lean_ResolveName_resolveGlobalName(v_____do__lift_1986_, v_____do__lift_1987_, v_____do__lift_1988_, v_____do__lift_2000_, v_id_1989_);
lean_inc(v_res_2001_);
lean_inc(v_toPure_1990_);
v___f_2002_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2002_, 0, v_toPure_1990_);
lean_closure_set(v___f_2002_, 1, v_res_2001_);
v___x_2003_ = lean_box(v_enableLog_1991_);
lean_inc(v_toBind_1998_);
v___f_2004_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__2___boxed), 12, 11);
lean_closure_set(v___f_2004_, 0, v___x_2003_);
lean_closure_set(v___f_2004_, 1, v_toPure_1990_);
lean_closure_set(v___f_2004_, 2, v_res_2001_);
lean_closure_set(v___f_2004_, 3, v___f_1992_);
lean_closure_set(v___f_2004_, 4, v_inst_1993_);
lean_closure_set(v___f_2004_, 5, v_inst_1994_);
lean_closure_set(v___f_2004_, 6, v_inst_1995_);
lean_closure_set(v___f_2004_, 7, v_inst_1996_);
lean_closure_set(v___f_2004_, 8, v_inst_1997_);
lean_closure_set(v___f_2004_, 9, v_toBind_1998_);
lean_closure_set(v___f_2004_, 10, v___f_2002_);
v___x_2005_ = lean_apply_4(v_toBind_1998_, lean_box(0), lean_box(0), v_getEnv_1999_, v___f_2004_);
return v___x_2005_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__3___boxed(lean_object* v_____do__lift_2006_, lean_object* v_____do__lift_2007_, lean_object* v_____do__lift_2008_, lean_object* v_id_2009_, lean_object* v_toPure_2010_, lean_object* v_enableLog_2011_, lean_object* v___f_2012_, lean_object* v_inst_2013_, lean_object* v_inst_2014_, lean_object* v_inst_2015_, lean_object* v_inst_2016_, lean_object* v_inst_2017_, lean_object* v_toBind_2018_, lean_object* v_getEnv_2019_, lean_object* v_____do__lift_2020_){
_start:
{
uint8_t v_enableLog_boxed_2021_; lean_object* v_res_2022_; 
v_enableLog_boxed_2021_ = lean_unbox(v_enableLog_2011_);
v_res_2022_ = l_Lean_resolveGlobalName___redArg___lam__3(v_____do__lift_2006_, v_____do__lift_2007_, v_____do__lift_2008_, v_id_2009_, v_toPure_2010_, v_enableLog_boxed_2021_, v___f_2012_, v_inst_2013_, v_inst_2014_, v_inst_2015_, v_inst_2016_, v_inst_2017_, v_toBind_2018_, v_getEnv_2019_, v_____do__lift_2020_);
lean_dec_ref(v_____do__lift_2007_);
return v_res_2022_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__4(lean_object* v_____do__lift_2023_, lean_object* v_____do__lift_2024_, lean_object* v_id_2025_, lean_object* v_toPure_2026_, uint8_t v_enableLog_2027_, lean_object* v___f_2028_, lean_object* v_inst_2029_, lean_object* v_inst_2030_, lean_object* v_inst_2031_, lean_object* v_inst_2032_, lean_object* v_inst_2033_, lean_object* v_toBind_2034_, lean_object* v_getEnv_2035_, lean_object* v_getOpenDecls_2036_, lean_object* v_____do__lift_2037_){
_start:
{
lean_object* v___x_2038_; lean_object* v___f_2039_; lean_object* v___x_2040_; 
v___x_2038_ = lean_box(v_enableLog_2027_);
lean_inc(v_toBind_2034_);
v___f_2039_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__3___boxed), 15, 14);
lean_closure_set(v___f_2039_, 0, v_____do__lift_2023_);
lean_closure_set(v___f_2039_, 1, v_____do__lift_2024_);
lean_closure_set(v___f_2039_, 2, v_____do__lift_2037_);
lean_closure_set(v___f_2039_, 3, v_id_2025_);
lean_closure_set(v___f_2039_, 4, v_toPure_2026_);
lean_closure_set(v___f_2039_, 5, v___x_2038_);
lean_closure_set(v___f_2039_, 6, v___f_2028_);
lean_closure_set(v___f_2039_, 7, v_inst_2029_);
lean_closure_set(v___f_2039_, 8, v_inst_2030_);
lean_closure_set(v___f_2039_, 9, v_inst_2031_);
lean_closure_set(v___f_2039_, 10, v_inst_2032_);
lean_closure_set(v___f_2039_, 11, v_inst_2033_);
lean_closure_set(v___f_2039_, 12, v_toBind_2034_);
lean_closure_set(v___f_2039_, 13, v_getEnv_2035_);
v___x_2040_ = lean_apply_4(v_toBind_2034_, lean_box(0), lean_box(0), v_getOpenDecls_2036_, v___f_2039_);
return v___x_2040_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__4___boxed(lean_object* v_____do__lift_2041_, lean_object* v_____do__lift_2042_, lean_object* v_id_2043_, lean_object* v_toPure_2044_, lean_object* v_enableLog_2045_, lean_object* v___f_2046_, lean_object* v_inst_2047_, lean_object* v_inst_2048_, lean_object* v_inst_2049_, lean_object* v_inst_2050_, lean_object* v_inst_2051_, lean_object* v_toBind_2052_, lean_object* v_getEnv_2053_, lean_object* v_getOpenDecls_2054_, lean_object* v_____do__lift_2055_){
_start:
{
uint8_t v_enableLog_boxed_2056_; lean_object* v_res_2057_; 
v_enableLog_boxed_2056_ = lean_unbox(v_enableLog_2045_);
v_res_2057_ = l_Lean_resolveGlobalName___redArg___lam__4(v_____do__lift_2041_, v_____do__lift_2042_, v_id_2043_, v_toPure_2044_, v_enableLog_boxed_2056_, v___f_2046_, v_inst_2047_, v_inst_2048_, v_inst_2049_, v_inst_2050_, v_inst_2051_, v_toBind_2052_, v_getEnv_2053_, v_getOpenDecls_2054_, v_____do__lift_2055_);
return v_res_2057_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__5(lean_object* v_inst_2058_, lean_object* v_____do__lift_2059_, lean_object* v_id_2060_, lean_object* v_toPure_2061_, uint8_t v_enableLog_2062_, lean_object* v___f_2063_, lean_object* v_inst_2064_, lean_object* v_inst_2065_, lean_object* v_inst_2066_, lean_object* v_inst_2067_, lean_object* v_inst_2068_, lean_object* v_toBind_2069_, lean_object* v_getEnv_2070_, lean_object* v_____do__lift_2071_){
_start:
{
lean_object* v_getCurrNamespace_2072_; lean_object* v_getOpenDecls_2073_; lean_object* v___x_2074_; lean_object* v___f_2075_; lean_object* v___x_2076_; 
v_getCurrNamespace_2072_ = lean_ctor_get(v_inst_2058_, 0);
lean_inc(v_getCurrNamespace_2072_);
v_getOpenDecls_2073_ = lean_ctor_get(v_inst_2058_, 1);
lean_inc(v_getOpenDecls_2073_);
lean_dec_ref(v_inst_2058_);
v___x_2074_ = lean_box(v_enableLog_2062_);
lean_inc(v_toBind_2069_);
v___f_2075_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__4___boxed), 15, 14);
lean_closure_set(v___f_2075_, 0, v_____do__lift_2059_);
lean_closure_set(v___f_2075_, 1, v_____do__lift_2071_);
lean_closure_set(v___f_2075_, 2, v_id_2060_);
lean_closure_set(v___f_2075_, 3, v_toPure_2061_);
lean_closure_set(v___f_2075_, 4, v___x_2074_);
lean_closure_set(v___f_2075_, 5, v___f_2063_);
lean_closure_set(v___f_2075_, 6, v_inst_2064_);
lean_closure_set(v___f_2075_, 7, v_inst_2065_);
lean_closure_set(v___f_2075_, 8, v_inst_2066_);
lean_closure_set(v___f_2075_, 9, v_inst_2067_);
lean_closure_set(v___f_2075_, 10, v_inst_2068_);
lean_closure_set(v___f_2075_, 11, v_toBind_2069_);
lean_closure_set(v___f_2075_, 12, v_getEnv_2070_);
lean_closure_set(v___f_2075_, 13, v_getOpenDecls_2073_);
v___x_2076_ = lean_apply_4(v_toBind_2069_, lean_box(0), lean_box(0), v_getCurrNamespace_2072_, v___f_2075_);
return v___x_2076_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__5___boxed(lean_object* v_inst_2077_, lean_object* v_____do__lift_2078_, lean_object* v_id_2079_, lean_object* v_toPure_2080_, lean_object* v_enableLog_2081_, lean_object* v___f_2082_, lean_object* v_inst_2083_, lean_object* v_inst_2084_, lean_object* v_inst_2085_, lean_object* v_inst_2086_, lean_object* v_inst_2087_, lean_object* v_toBind_2088_, lean_object* v_getEnv_2089_, lean_object* v_____do__lift_2090_){
_start:
{
uint8_t v_enableLog_boxed_2091_; lean_object* v_res_2092_; 
v_enableLog_boxed_2091_ = lean_unbox(v_enableLog_2081_);
v_res_2092_ = l_Lean_resolveGlobalName___redArg___lam__5(v_inst_2077_, v_____do__lift_2078_, v_id_2079_, v_toPure_2080_, v_enableLog_boxed_2091_, v___f_2082_, v_inst_2083_, v_inst_2084_, v_inst_2085_, v_inst_2086_, v_inst_2087_, v_toBind_2088_, v_getEnv_2089_, v_____do__lift_2090_);
return v_res_2092_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__6(lean_object* v_inst_2093_, lean_object* v_inst_2094_, lean_object* v_id_2095_, lean_object* v_toPure_2096_, uint8_t v_enableLog_2097_, lean_object* v___f_2098_, lean_object* v_inst_2099_, lean_object* v_inst_2100_, lean_object* v_inst_2101_, lean_object* v_inst_2102_, lean_object* v_toBind_2103_, lean_object* v_getEnv_2104_, lean_object* v_____do__lift_2105_){
_start:
{
lean_object* v_getOptions_2106_; lean_object* v___x_2107_; lean_object* v___f_2108_; lean_object* v___x_2109_; 
v_getOptions_2106_ = lean_ctor_get(v_inst_2093_, 0);
lean_inc(v_getOptions_2106_);
v___x_2107_ = lean_box(v_enableLog_2097_);
lean_inc(v_toBind_2103_);
v___f_2108_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__5___boxed), 14, 13);
lean_closure_set(v___f_2108_, 0, v_inst_2094_);
lean_closure_set(v___f_2108_, 1, v_____do__lift_2105_);
lean_closure_set(v___f_2108_, 2, v_id_2095_);
lean_closure_set(v___f_2108_, 3, v_toPure_2096_);
lean_closure_set(v___f_2108_, 4, v___x_2107_);
lean_closure_set(v___f_2108_, 5, v___f_2098_);
lean_closure_set(v___f_2108_, 6, v_inst_2099_);
lean_closure_set(v___f_2108_, 7, v_inst_2100_);
lean_closure_set(v___f_2108_, 8, v_inst_2093_);
lean_closure_set(v___f_2108_, 9, v_inst_2101_);
lean_closure_set(v___f_2108_, 10, v_inst_2102_);
lean_closure_set(v___f_2108_, 11, v_toBind_2103_);
lean_closure_set(v___f_2108_, 12, v_getEnv_2104_);
v___x_2109_ = lean_apply_4(v_toBind_2103_, lean_box(0), lean_box(0), v_getOptions_2106_, v___f_2108_);
return v___x_2109_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__6___boxed(lean_object* v_inst_2110_, lean_object* v_inst_2111_, lean_object* v_id_2112_, lean_object* v_toPure_2113_, lean_object* v_enableLog_2114_, lean_object* v___f_2115_, lean_object* v_inst_2116_, lean_object* v_inst_2117_, lean_object* v_inst_2118_, lean_object* v_inst_2119_, lean_object* v_toBind_2120_, lean_object* v_getEnv_2121_, lean_object* v_____do__lift_2122_){
_start:
{
uint8_t v_enableLog_boxed_2123_; lean_object* v_res_2124_; 
v_enableLog_boxed_2123_ = lean_unbox(v_enableLog_2114_);
v_res_2124_ = l_Lean_resolveGlobalName___redArg___lam__6(v_inst_2110_, v_inst_2111_, v_id_2112_, v_toPure_2113_, v_enableLog_boxed_2123_, v___f_2115_, v_inst_2116_, v_inst_2117_, v_inst_2118_, v_inst_2119_, v_toBind_2120_, v_getEnv_2121_, v_____do__lift_2122_);
return v_res_2124_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg(lean_object* v_inst_2126_, lean_object* v_inst_2127_, lean_object* v_inst_2128_, lean_object* v_inst_2129_, lean_object* v_inst_2130_, lean_object* v_inst_2131_, lean_object* v_id_2132_, uint8_t v_enableLog_2133_){
_start:
{
lean_object* v_toApplicative_2134_; lean_object* v_toBind_2135_; lean_object* v_getEnv_2136_; lean_object* v_toPure_2137_; lean_object* v___f_2138_; lean_object* v___x_2139_; lean_object* v___f_2140_; lean_object* v___x_2141_; 
v_toApplicative_2134_ = lean_ctor_get(v_inst_2126_, 0);
v_toBind_2135_ = lean_ctor_get(v_inst_2126_, 1);
lean_inc_n(v_toBind_2135_, 2);
v_getEnv_2136_ = lean_ctor_get(v_inst_2128_, 0);
lean_inc_n(v_getEnv_2136_, 2);
v_toPure_2137_ = lean_ctor_get(v_toApplicative_2134_, 1);
lean_inc(v_toPure_2137_);
v___f_2138_ = ((lean_object*)(l_Lean_resolveGlobalName___redArg___closed__0));
v___x_2139_ = lean_box(v_enableLog_2133_);
v___f_2140_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__6___boxed), 13, 12);
lean_closure_set(v___f_2140_, 0, v_inst_2129_);
lean_closure_set(v___f_2140_, 1, v_inst_2127_);
lean_closure_set(v___f_2140_, 2, v_id_2132_);
lean_closure_set(v___f_2140_, 3, v_toPure_2137_);
lean_closure_set(v___f_2140_, 4, v___x_2139_);
lean_closure_set(v___f_2140_, 5, v___f_2138_);
lean_closure_set(v___f_2140_, 6, v_inst_2126_);
lean_closure_set(v___f_2140_, 7, v_inst_2128_);
lean_closure_set(v___f_2140_, 8, v_inst_2130_);
lean_closure_set(v___f_2140_, 9, v_inst_2131_);
lean_closure_set(v___f_2140_, 10, v_toBind_2135_);
lean_closure_set(v___f_2140_, 11, v_getEnv_2136_);
v___x_2141_ = lean_apply_4(v_toBind_2135_, lean_box(0), lean_box(0), v_getEnv_2136_, v___f_2140_);
return v___x_2141_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___boxed(lean_object* v_inst_2142_, lean_object* v_inst_2143_, lean_object* v_inst_2144_, lean_object* v_inst_2145_, lean_object* v_inst_2146_, lean_object* v_inst_2147_, lean_object* v_id_2148_, lean_object* v_enableLog_2149_){
_start:
{
uint8_t v_enableLog_boxed_2150_; lean_object* v_res_2151_; 
v_enableLog_boxed_2150_ = lean_unbox(v_enableLog_2149_);
v_res_2151_ = l_Lean_resolveGlobalName___redArg(v_inst_2142_, v_inst_2143_, v_inst_2144_, v_inst_2145_, v_inst_2146_, v_inst_2147_, v_id_2148_, v_enableLog_boxed_2150_);
return v_res_2151_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName(lean_object* v_m_2152_, lean_object* v_inst_2153_, lean_object* v_inst_2154_, lean_object* v_inst_2155_, lean_object* v_inst_2156_, lean_object* v_inst_2157_, lean_object* v_inst_2158_, lean_object* v_id_2159_, uint8_t v_enableLog_2160_){
_start:
{
lean_object* v___x_2161_; 
v___x_2161_ = l_Lean_resolveGlobalName___redArg(v_inst_2153_, v_inst_2154_, v_inst_2155_, v_inst_2156_, v_inst_2157_, v_inst_2158_, v_id_2159_, v_enableLog_2160_);
return v___x_2161_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___boxed(lean_object* v_m_2162_, lean_object* v_inst_2163_, lean_object* v_inst_2164_, lean_object* v_inst_2165_, lean_object* v_inst_2166_, lean_object* v_inst_2167_, lean_object* v_inst_2168_, lean_object* v_id_2169_, lean_object* v_enableLog_2170_){
_start:
{
uint8_t v_enableLog_boxed_2171_; lean_object* v_res_2172_; 
v_enableLog_boxed_2171_ = lean_unbox(v_enableLog_2170_);
v_res_2172_ = l_Lean_resolveGlobalName(v_m_2162_, v_inst_2163_, v_inst_2164_, v_inst_2165_, v_inst_2166_, v_inst_2167_, v_inst_2168_, v_id_2169_, v_enableLog_boxed_2171_);
return v_res_2172_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__0(lean_object* v_toPure_2173_, lean_object* v_nss_2174_, lean_object* v_____r_2175_){
_start:
{
lean_object* v___x_2176_; 
v___x_2176_ = lean_apply_2(v_toPure_2173_, lean_box(0), v_nss_2174_);
return v___x_2176_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__1(lean_object* v_____do__lift_2179_, lean_object* v_____do__lift_2180_, lean_object* v_id_2181_, uint8_t v_allowEmpty_2182_, lean_object* v_toPure_2183_, lean_object* v_inst_2184_, lean_object* v_inst_2185_, lean_object* v_toBind_2186_, lean_object* v_____do__lift_2187_){
_start:
{
lean_object* v_nss_2188_; 
lean_inc(v_id_2181_);
v_nss_2188_ = l_Lean_ResolveName_resolveNamespace(v_____do__lift_2179_, v_____do__lift_2180_, v_____do__lift_2187_, v_id_2181_);
if (v_allowEmpty_2182_ == 0)
{
uint8_t v___x_2189_; 
v___x_2189_ = l_List_isEmpty___redArg(v_nss_2188_);
if (v___x_2189_ == 0)
{
lean_object* v___x_2190_; 
lean_dec(v_toBind_2186_);
lean_dec_ref(v_inst_2185_);
lean_dec_ref(v_inst_2184_);
lean_dec(v_id_2181_);
v___x_2190_ = lean_apply_2(v_toPure_2183_, lean_box(0), v_nss_2188_);
return v___x_2190_;
}
else
{
lean_object* v___f_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; 
v___f_2191_ = lean_alloc_closure((void*)(l_Lean_resolveNamespaceCore___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2191_, 0, v_toPure_2183_);
lean_closure_set(v___f_2191_, 1, v_nss_2188_);
v___x_2192_ = ((lean_object*)(l_Lean_resolveNamespaceCore___redArg___lam__1___closed__0));
v___x_2193_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_id_2181_, v___x_2189_);
v___x_2194_ = lean_string_append(v___x_2192_, v___x_2193_);
lean_dec_ref(v___x_2193_);
v___x_2195_ = ((lean_object*)(l_Lean_resolveNamespaceCore___redArg___lam__1___closed__1));
v___x_2196_ = lean_string_append(v___x_2194_, v___x_2195_);
v___x_2197_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2197_, 0, v___x_2196_);
v___x_2198_ = l_Lean_MessageData_ofFormat(v___x_2197_);
v___x_2199_ = l_Lean_throwError___redArg(v_inst_2184_, v_inst_2185_, v___x_2198_);
v___x_2200_ = lean_apply_4(v_toBind_2186_, lean_box(0), lean_box(0), v___x_2199_, v___f_2191_);
return v___x_2200_;
}
}
else
{
lean_object* v___x_2201_; 
lean_dec(v_toBind_2186_);
lean_dec_ref(v_inst_2185_);
lean_dec_ref(v_inst_2184_);
lean_dec(v_id_2181_);
v___x_2201_ = lean_apply_2(v_toPure_2183_, lean_box(0), v_nss_2188_);
return v___x_2201_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__1___boxed(lean_object* v_____do__lift_2202_, lean_object* v_____do__lift_2203_, lean_object* v_id_2204_, lean_object* v_allowEmpty_2205_, lean_object* v_toPure_2206_, lean_object* v_inst_2207_, lean_object* v_inst_2208_, lean_object* v_toBind_2209_, lean_object* v_____do__lift_2210_){
_start:
{
uint8_t v_allowEmpty_boxed_2211_; lean_object* v_res_2212_; 
v_allowEmpty_boxed_2211_ = lean_unbox(v_allowEmpty_2205_);
v_res_2212_ = l_Lean_resolveNamespaceCore___redArg___lam__1(v_____do__lift_2202_, v_____do__lift_2203_, v_id_2204_, v_allowEmpty_boxed_2211_, v_toPure_2206_, v_inst_2207_, v_inst_2208_, v_toBind_2209_, v_____do__lift_2210_);
return v_res_2212_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__2(lean_object* v_____do__lift_2213_, lean_object* v_id_2214_, uint8_t v_allowEmpty_2215_, lean_object* v_toPure_2216_, lean_object* v_inst_2217_, lean_object* v_inst_2218_, lean_object* v_toBind_2219_, lean_object* v_getOpenDecls_2220_, lean_object* v_____do__lift_2221_){
_start:
{
lean_object* v___x_2222_; lean_object* v___f_2223_; lean_object* v___x_2224_; 
v___x_2222_ = lean_box(v_allowEmpty_2215_);
lean_inc(v_toBind_2219_);
v___f_2223_ = lean_alloc_closure((void*)(l_Lean_resolveNamespaceCore___redArg___lam__1___boxed), 9, 8);
lean_closure_set(v___f_2223_, 0, v_____do__lift_2213_);
lean_closure_set(v___f_2223_, 1, v_____do__lift_2221_);
lean_closure_set(v___f_2223_, 2, v_id_2214_);
lean_closure_set(v___f_2223_, 3, v___x_2222_);
lean_closure_set(v___f_2223_, 4, v_toPure_2216_);
lean_closure_set(v___f_2223_, 5, v_inst_2217_);
lean_closure_set(v___f_2223_, 6, v_inst_2218_);
lean_closure_set(v___f_2223_, 7, v_toBind_2219_);
v___x_2224_ = lean_apply_4(v_toBind_2219_, lean_box(0), lean_box(0), v_getOpenDecls_2220_, v___f_2223_);
return v___x_2224_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__2___boxed(lean_object* v_____do__lift_2225_, lean_object* v_id_2226_, lean_object* v_allowEmpty_2227_, lean_object* v_toPure_2228_, lean_object* v_inst_2229_, lean_object* v_inst_2230_, lean_object* v_toBind_2231_, lean_object* v_getOpenDecls_2232_, lean_object* v_____do__lift_2233_){
_start:
{
uint8_t v_allowEmpty_boxed_2234_; lean_object* v_res_2235_; 
v_allowEmpty_boxed_2234_ = lean_unbox(v_allowEmpty_2227_);
v_res_2235_ = l_Lean_resolveNamespaceCore___redArg___lam__2(v_____do__lift_2225_, v_id_2226_, v_allowEmpty_boxed_2234_, v_toPure_2228_, v_inst_2229_, v_inst_2230_, v_toBind_2231_, v_getOpenDecls_2232_, v_____do__lift_2233_);
return v_res_2235_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__3(lean_object* v_inst_2236_, lean_object* v_id_2237_, uint8_t v_allowEmpty_2238_, lean_object* v_toPure_2239_, lean_object* v_inst_2240_, lean_object* v_inst_2241_, lean_object* v_toBind_2242_, lean_object* v_____do__lift_2243_){
_start:
{
lean_object* v_getCurrNamespace_2244_; lean_object* v_getOpenDecls_2245_; lean_object* v___x_2246_; lean_object* v___f_2247_; lean_object* v___x_2248_; 
v_getCurrNamespace_2244_ = lean_ctor_get(v_inst_2236_, 0);
lean_inc(v_getCurrNamespace_2244_);
v_getOpenDecls_2245_ = lean_ctor_get(v_inst_2236_, 1);
lean_inc(v_getOpenDecls_2245_);
lean_dec_ref(v_inst_2236_);
v___x_2246_ = lean_box(v_allowEmpty_2238_);
lean_inc(v_toBind_2242_);
v___f_2247_ = lean_alloc_closure((void*)(l_Lean_resolveNamespaceCore___redArg___lam__2___boxed), 9, 8);
lean_closure_set(v___f_2247_, 0, v_____do__lift_2243_);
lean_closure_set(v___f_2247_, 1, v_id_2237_);
lean_closure_set(v___f_2247_, 2, v___x_2246_);
lean_closure_set(v___f_2247_, 3, v_toPure_2239_);
lean_closure_set(v___f_2247_, 4, v_inst_2240_);
lean_closure_set(v___f_2247_, 5, v_inst_2241_);
lean_closure_set(v___f_2247_, 6, v_toBind_2242_);
lean_closure_set(v___f_2247_, 7, v_getOpenDecls_2245_);
v___x_2248_ = lean_apply_4(v_toBind_2242_, lean_box(0), lean_box(0), v_getCurrNamespace_2244_, v___f_2247_);
return v___x_2248_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__3___boxed(lean_object* v_inst_2249_, lean_object* v_id_2250_, lean_object* v_allowEmpty_2251_, lean_object* v_toPure_2252_, lean_object* v_inst_2253_, lean_object* v_inst_2254_, lean_object* v_toBind_2255_, lean_object* v_____do__lift_2256_){
_start:
{
uint8_t v_allowEmpty_boxed_2257_; lean_object* v_res_2258_; 
v_allowEmpty_boxed_2257_ = lean_unbox(v_allowEmpty_2251_);
v_res_2258_ = l_Lean_resolveNamespaceCore___redArg___lam__3(v_inst_2249_, v_id_2250_, v_allowEmpty_boxed_2257_, v_toPure_2252_, v_inst_2253_, v_inst_2254_, v_toBind_2255_, v_____do__lift_2256_);
return v_res_2258_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg(lean_object* v_inst_2259_, lean_object* v_inst_2260_, lean_object* v_inst_2261_, lean_object* v_inst_2262_, lean_object* v_id_2263_, uint8_t v_allowEmpty_2264_){
_start:
{
lean_object* v_toApplicative_2265_; lean_object* v_toBind_2266_; lean_object* v_getEnv_2267_; lean_object* v_toPure_2268_; lean_object* v___x_2269_; lean_object* v___f_2270_; lean_object* v___x_2271_; 
v_toApplicative_2265_ = lean_ctor_get(v_inst_2259_, 0);
v_toBind_2266_ = lean_ctor_get(v_inst_2259_, 1);
lean_inc_n(v_toBind_2266_, 2);
v_getEnv_2267_ = lean_ctor_get(v_inst_2261_, 0);
lean_inc(v_getEnv_2267_);
lean_dec_ref(v_inst_2261_);
v_toPure_2268_ = lean_ctor_get(v_toApplicative_2265_, 1);
lean_inc(v_toPure_2268_);
v___x_2269_ = lean_box(v_allowEmpty_2264_);
v___f_2270_ = lean_alloc_closure((void*)(l_Lean_resolveNamespaceCore___redArg___lam__3___boxed), 8, 7);
lean_closure_set(v___f_2270_, 0, v_inst_2260_);
lean_closure_set(v___f_2270_, 1, v_id_2263_);
lean_closure_set(v___f_2270_, 2, v___x_2269_);
lean_closure_set(v___f_2270_, 3, v_toPure_2268_);
lean_closure_set(v___f_2270_, 4, v_inst_2259_);
lean_closure_set(v___f_2270_, 5, v_inst_2262_);
lean_closure_set(v___f_2270_, 6, v_toBind_2266_);
v___x_2271_ = lean_apply_4(v_toBind_2266_, lean_box(0), lean_box(0), v_getEnv_2267_, v___f_2270_);
return v___x_2271_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___boxed(lean_object* v_inst_2272_, lean_object* v_inst_2273_, lean_object* v_inst_2274_, lean_object* v_inst_2275_, lean_object* v_id_2276_, lean_object* v_allowEmpty_2277_){
_start:
{
uint8_t v_allowEmpty_boxed_2278_; lean_object* v_res_2279_; 
v_allowEmpty_boxed_2278_ = lean_unbox(v_allowEmpty_2277_);
v_res_2279_ = l_Lean_resolveNamespaceCore___redArg(v_inst_2272_, v_inst_2273_, v_inst_2274_, v_inst_2275_, v_id_2276_, v_allowEmpty_boxed_2278_);
return v_res_2279_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore(lean_object* v_m_2280_, lean_object* v_inst_2281_, lean_object* v_inst_2282_, lean_object* v_inst_2283_, lean_object* v_inst_2284_, lean_object* v_id_2285_, uint8_t v_allowEmpty_2286_){
_start:
{
lean_object* v___x_2287_; 
v___x_2287_ = l_Lean_resolveNamespaceCore___redArg(v_inst_2281_, v_inst_2282_, v_inst_2283_, v_inst_2284_, v_id_2285_, v_allowEmpty_2286_);
return v___x_2287_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___boxed(lean_object* v_m_2288_, lean_object* v_inst_2289_, lean_object* v_inst_2290_, lean_object* v_inst_2291_, lean_object* v_inst_2292_, lean_object* v_id_2293_, lean_object* v_allowEmpty_2294_){
_start:
{
uint8_t v_allowEmpty_boxed_2295_; lean_object* v_res_2296_; 
v_allowEmpty_boxed_2295_ = lean_unbox(v_allowEmpty_2294_);
v_res_2296_ = l_Lean_resolveNamespaceCore(v_m_2288_, v_inst_2289_, v_inst_2290_, v_inst_2291_, v_inst_2292_, v_id_2293_, v_allowEmpty_boxed_2295_);
return v_res_2296_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__0(lean_object* v_x_2297_){
_start:
{
if (lean_obj_tag(v_x_2297_) == 0)
{
lean_object* v_ns_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2305_; 
v_ns_2298_ = lean_ctor_get(v_x_2297_, 0);
v_isSharedCheck_2305_ = !lean_is_exclusive(v_x_2297_);
if (v_isSharedCheck_2305_ == 0)
{
v___x_2300_ = v_x_2297_;
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_ns_2298_);
lean_dec(v_x_2297_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
lean_object* v___x_2303_; 
if (v_isShared_2301_ == 0)
{
lean_ctor_set_tag(v___x_2300_, 1);
v___x_2303_ = v___x_2300_;
goto v_reusejp_2302_;
}
else
{
lean_object* v_reuseFailAlloc_2304_; 
v_reuseFailAlloc_2304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2304_, 0, v_ns_2298_);
v___x_2303_ = v_reuseFailAlloc_2304_;
goto v_reusejp_2302_;
}
v_reusejp_2302_:
{
return v___x_2303_;
}
}
}
else
{
lean_object* v___x_2306_; 
lean_dec_ref(v_x_2297_);
v___x_2306_ = lean_box(0);
return v___x_2306_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__1(lean_object* v_x_2307_, lean_object* v_withRef_2308_, lean_object* v___x_2309_, lean_object* v_oldRef_2310_){
_start:
{
lean_object* v_ref_2311_; lean_object* v___x_2312_; 
v_ref_2311_ = l_Lean_replaceRef(v_x_2307_, v_oldRef_2310_);
v___x_2312_ = lean_apply_3(v_withRef_2308_, lean_box(0), v_ref_2311_, v___x_2309_);
return v___x_2312_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__1___boxed(lean_object* v_x_2313_, lean_object* v_withRef_2314_, lean_object* v___x_2315_, lean_object* v_oldRef_2316_){
_start:
{
lean_object* v_res_2317_; 
v_res_2317_ = l_Lean_resolveNamespace___redArg___lam__1(v_x_2313_, v_withRef_2314_, v___x_2315_, v_oldRef_2316_);
lean_dec(v_oldRef_2316_);
lean_dec(v_x_2313_);
return v_res_2317_;
}
}
static lean_object* _init_l_Lean_resolveNamespace___redArg___closed__4(void){
_start:
{
lean_object* v___x_2324_; lean_object* v___x_2325_; 
v___x_2324_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__3));
v___x_2325_ = l_Lean_MessageData_ofFormat(v___x_2324_);
return v___x_2325_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg(lean_object* v_inst_2326_, lean_object* v_inst_2327_, lean_object* v_inst_2328_, lean_object* v_inst_2329_, lean_object* v_x_2330_){
_start:
{
if (lean_obj_tag(v_x_2330_) == 3)
{
lean_object* v_toApplicative_2331_; lean_object* v_toBind_2332_; lean_object* v_toPure_2333_; lean_object* v_toMonadRef_2334_; lean_object* v_val_2335_; lean_object* v_preresolved_2336_; lean_object* v___f_2337_; lean_object* v___x_2338_; lean_object* v_pre_2339_; uint8_t v___x_2340_; 
v_toApplicative_2331_ = lean_ctor_get(v_inst_2326_, 0);
v_toBind_2332_ = lean_ctor_get(v_inst_2326_, 1);
lean_inc(v_toBind_2332_);
v_toPure_2333_ = lean_ctor_get(v_toApplicative_2331_, 1);
v_toMonadRef_2334_ = lean_ctor_get(v_inst_2329_, 1);
v_val_2335_ = lean_ctor_get(v_x_2330_, 2);
v_preresolved_2336_ = lean_ctor_get(v_x_2330_, 3);
v___f_2337_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__0));
v___x_2338_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__1));
lean_inc(v_preresolved_2336_);
v_pre_2339_ = l_List_filterMapTR_go___redArg(v___f_2337_, v_preresolved_2336_, v___x_2338_);
v___x_2340_ = l_List_isEmpty___redArg(v_pre_2339_);
if (v___x_2340_ == 0)
{
lean_object* v___x_2341_; 
lean_inc(v_toPure_2333_);
lean_dec(v_toBind_2332_);
lean_dec_ref_known(v_x_2330_, 4);
lean_dec_ref(v_inst_2329_);
lean_dec_ref(v_inst_2328_);
lean_dec_ref(v_inst_2327_);
lean_dec_ref(v_inst_2326_);
v___x_2341_ = lean_apply_2(v_toPure_2333_, lean_box(0), v_pre_2339_);
return v___x_2341_;
}
else
{
lean_object* v_getRef_2342_; lean_object* v_withRef_2343_; uint8_t v___x_2344_; lean_object* v___x_2345_; lean_object* v___f_2346_; lean_object* v___x_2347_; 
lean_dec(v_pre_2339_);
v_getRef_2342_ = lean_ctor_get(v_toMonadRef_2334_, 0);
lean_inc(v_getRef_2342_);
v_withRef_2343_ = lean_ctor_get(v_toMonadRef_2334_, 1);
lean_inc(v_withRef_2343_);
v___x_2344_ = 0;
lean_inc(v_val_2335_);
v___x_2345_ = l_Lean_resolveNamespaceCore___redArg(v_inst_2326_, v_inst_2327_, v_inst_2328_, v_inst_2329_, v_val_2335_, v___x_2344_);
v___f_2346_ = lean_alloc_closure((void*)(l_Lean_resolveNamespace___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2346_, 0, v_x_2330_);
lean_closure_set(v___f_2346_, 1, v_withRef_2343_);
lean_closure_set(v___f_2346_, 2, v___x_2345_);
v___x_2347_ = lean_apply_4(v_toBind_2332_, lean_box(0), lean_box(0), v_getRef_2342_, v___f_2346_);
return v___x_2347_;
}
}
else
{
lean_object* v___x_2348_; lean_object* v___x_2349_; 
lean_dec_ref(v_inst_2328_);
lean_dec_ref(v_inst_2327_);
v___x_2348_ = lean_obj_once(&l_Lean_resolveNamespace___redArg___closed__4, &l_Lean_resolveNamespace___redArg___closed__4_once, _init_l_Lean_resolveNamespace___redArg___closed__4);
v___x_2349_ = l_Lean_throwErrorAt___redArg(v_inst_2326_, v_inst_2329_, v_x_2330_, v___x_2348_);
return v___x_2349_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace(lean_object* v_m_2350_, lean_object* v_inst_2351_, lean_object* v_inst_2352_, lean_object* v_inst_2353_, lean_object* v_inst_2354_, lean_object* v_x_2355_){
_start:
{
lean_object* v___x_2356_; 
v___x_2356_ = l_Lean_resolveNamespace___redArg(v_inst_2351_, v_inst_2352_, v_inst_2353_, v_inst_2354_, v_x_2355_);
return v___x_2356_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg___lam__0(lean_object* v_id_2359_, lean_object* v___f_2360_, lean_object* v_inst_2361_, lean_object* v_inst_2362_, lean_object* v_toPure_2363_, lean_object* v_____do__lift_2364_){
_start:
{
if (lean_obj_tag(v_____do__lift_2364_) == 1)
{
lean_object* v_tail_2380_; 
v_tail_2380_ = lean_ctor_get(v_____do__lift_2364_, 1);
if (lean_obj_tag(v_tail_2380_) == 0)
{
lean_object* v_head_2381_; lean_object* v___x_2382_; 
lean_dec_ref(v_inst_2362_);
lean_dec_ref(v_inst_2361_);
lean_dec_ref(v___f_2360_);
v_head_2381_ = lean_ctor_get(v_____do__lift_2364_, 0);
lean_inc(v_head_2381_);
lean_dec_ref_known(v_____do__lift_2364_, 2);
v___x_2382_ = lean_apply_2(v_toPure_2363_, lean_box(0), v_head_2381_);
return v___x_2382_;
}
else
{
lean_dec(v_toPure_2363_);
goto v___jp_2365_;
}
}
else
{
lean_dec(v_toPure_2363_);
goto v___jp_2365_;
}
v___jp_2365_:
{
lean_object* v___x_2366_; lean_object* v___x_2367_; uint8_t v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; 
v___x_2366_ = ((lean_object*)(l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__0));
v___x_2367_ = l_Lean_TSyntax_getId(v_id_2359_);
v___x_2368_ = 1;
v___x_2369_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2367_, v___x_2368_);
v___x_2370_ = lean_string_append(v___x_2366_, v___x_2369_);
lean_dec_ref(v___x_2369_);
v___x_2371_ = ((lean_object*)(l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__1));
v___x_2372_ = lean_string_append(v___x_2370_, v___x_2371_);
v___x_2373_ = l_List_toString___redArg(v___f_2360_, v_____do__lift_2364_);
v___x_2374_ = lean_string_append(v___x_2372_, v___x_2373_);
lean_dec_ref(v___x_2373_);
v___x_2375_ = ((lean_object*)(l_Lean_resolveNamespaceCore___redArg___lam__1___closed__1));
v___x_2376_ = lean_string_append(v___x_2374_, v___x_2375_);
v___x_2377_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2377_, 0, v___x_2376_);
v___x_2378_ = l_Lean_MessageData_ofFormat(v___x_2377_);
v___x_2379_ = l_Lean_throwError___redArg(v_inst_2361_, v_inst_2362_, v___x_2378_);
return v___x_2379_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg___lam__0___boxed(lean_object* v_id_2383_, lean_object* v___f_2384_, lean_object* v_inst_2385_, lean_object* v_inst_2386_, lean_object* v_toPure_2387_, lean_object* v_____do__lift_2388_){
_start:
{
lean_object* v_res_2389_; 
v_res_2389_ = l_Lean_resolveUniqueNamespace___redArg___lam__0(v_id_2383_, v___f_2384_, v_inst_2385_, v_inst_2386_, v_toPure_2387_, v_____do__lift_2388_);
lean_dec(v_id_2383_);
return v_res_2389_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg(lean_object* v_inst_2391_, lean_object* v_inst_2392_, lean_object* v_inst_2393_, lean_object* v_inst_2394_, lean_object* v_id_2395_){
_start:
{
lean_object* v_toApplicative_2396_; lean_object* v_toBind_2397_; lean_object* v_toPure_2398_; lean_object* v___f_2399_; lean_object* v___x_2400_; lean_object* v___f_2401_; lean_object* v___x_2402_; 
v_toApplicative_2396_ = lean_ctor_get(v_inst_2391_, 0);
v_toBind_2397_ = lean_ctor_get(v_inst_2391_, 1);
lean_inc(v_toBind_2397_);
v_toPure_2398_ = lean_ctor_get(v_toApplicative_2396_, 1);
lean_inc(v_toPure_2398_);
v___f_2399_ = ((lean_object*)(l_Lean_resolveUniqueNamespace___redArg___closed__0));
lean_inc(v_id_2395_);
lean_inc_ref(v_inst_2394_);
lean_inc_ref(v_inst_2391_);
v___x_2400_ = l_Lean_resolveNamespace___redArg(v_inst_2391_, v_inst_2392_, v_inst_2393_, v_inst_2394_, v_id_2395_);
v___f_2401_ = lean_alloc_closure((void*)(l_Lean_resolveUniqueNamespace___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_2401_, 0, v_id_2395_);
lean_closure_set(v___f_2401_, 1, v___f_2399_);
lean_closure_set(v___f_2401_, 2, v_inst_2391_);
lean_closure_set(v___f_2401_, 3, v_inst_2394_);
lean_closure_set(v___f_2401_, 4, v_toPure_2398_);
v___x_2402_ = lean_apply_4(v_toBind_2397_, lean_box(0), lean_box(0), v___x_2400_, v___f_2401_);
return v___x_2402_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace(lean_object* v_m_2403_, lean_object* v_inst_2404_, lean_object* v_inst_2405_, lean_object* v_inst_2406_, lean_object* v_inst_2407_, lean_object* v_id_2408_){
_start:
{
lean_object* v___x_2409_; 
v___x_2409_ = l_Lean_resolveUniqueNamespace___redArg(v_inst_2404_, v_inst_2405_, v_inst_2406_, v_inst_2407_, v_id_2408_);
return v___x_2409_;
}
}
LEAN_EXPORT uint8_t l_Lean_filterFieldList___redArg___lam__0(lean_object* v_x_2410_){
_start:
{
lean_object* v_snd_2411_; uint8_t v___x_2412_; 
v_snd_2411_ = lean_ctor_get(v_x_2410_, 1);
v___x_2412_ = l_List_isEmpty___redArg(v_snd_2411_);
return v___x_2412_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__0___boxed(lean_object* v_x_2413_){
_start:
{
uint8_t v_res_2414_; lean_object* v_r_2415_; 
v_res_2414_ = l_Lean_filterFieldList___redArg___lam__0(v_x_2413_);
lean_dec_ref(v_x_2413_);
v_r_2415_ = lean_box(v_res_2414_);
return v_r_2415_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__1(lean_object* v_x_2416_){
_start:
{
lean_object* v_fst_2417_; 
v_fst_2417_ = lean_ctor_get(v_x_2416_, 0);
lean_inc(v_fst_2417_);
return v_fst_2417_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__1___boxed(lean_object* v_x_2418_){
_start:
{
lean_object* v_res_2419_; 
v_res_2419_ = l_Lean_filterFieldList___redArg___lam__1(v_x_2418_);
lean_dec_ref(v_x_2418_);
return v_res_2419_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__2(lean_object* v___f_2420_, lean_object* v_cs_2421_, lean_object* v_toPure_2422_, lean_object* v_____r_2423_){
_start:
{
lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; 
v___x_2424_ = lean_box(0);
v___x_2425_ = l_List_mapTR_loop___redArg(v___f_2420_, v_cs_2421_, v___x_2424_);
v___x_2426_ = lean_apply_2(v_toPure_2422_, lean_box(0), v___x_2425_);
return v___x_2426_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__3(lean_object* v___f_2427_, lean_object* v_____r_2428_){
_start:
{
lean_object* v___x_2429_; 
v___x_2429_ = lean_apply_1(v___f_2427_, v_____r_2428_);
return v___x_2429_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__4(lean_object* v_inst_2430_, lean_object* v_inst_2431_, lean_object* v_inst_2432_, lean_object* v_n_2433_, lean_object* v_toBind_2434_, lean_object* v___f_2435_, lean_object* v_____do__lift_2436_){
_start:
{
lean_object* v___x_2437_; lean_object* v___x_2438_; 
v___x_2437_ = l_Lean_throwUnknownConstantAt___redArg(v_inst_2430_, v_inst_2431_, v_inst_2432_, v_____do__lift_2436_, v_n_2433_);
v___x_2438_ = lean_apply_4(v_toBind_2434_, lean_box(0), lean_box(0), v___x_2437_, v___f_2435_);
return v___x_2438_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg(lean_object* v_inst_2441_, lean_object* v_inst_2442_, lean_object* v_inst_2443_, lean_object* v_n_2444_, lean_object* v_cs_2445_){
_start:
{
lean_object* v_toApplicative_2446_; lean_object* v_toBind_2447_; lean_object* v_toPure_2448_; lean_object* v_toMonadRef_2449_; lean_object* v___f_2450_; lean_object* v___f_2451_; lean_object* v___x_2452_; lean_object* v_cs_2453_; lean_object* v___f_2454_; uint8_t v___x_2455_; 
v_toApplicative_2446_ = lean_ctor_get(v_inst_2441_, 0);
v_toBind_2447_ = lean_ctor_get(v_inst_2441_, 1);
lean_inc(v_toBind_2447_);
v_toPure_2448_ = lean_ctor_get(v_toApplicative_2446_, 1);
v_toMonadRef_2449_ = lean_ctor_get(v_inst_2443_, 1);
v___f_2450_ = ((lean_object*)(l_Lean_filterFieldList___redArg___closed__0));
v___f_2451_ = ((lean_object*)(l_Lean_filterFieldList___redArg___closed__1));
v___x_2452_ = lean_box(0);
v_cs_2453_ = l_List_filterTR_loop___redArg(v___f_2450_, v_cs_2445_, v___x_2452_);
lean_inc(v_toPure_2448_);
lean_inc(v_cs_2453_);
v___f_2454_ = lean_alloc_closure((void*)(l_Lean_filterFieldList___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2454_, 0, v___f_2451_);
lean_closure_set(v___f_2454_, 1, v_cs_2453_);
lean_closure_set(v___f_2454_, 2, v_toPure_2448_);
v___x_2455_ = l_List_isEmpty___redArg(v_cs_2453_);
if (v___x_2455_ == 0)
{
lean_object* v___x_2456_; lean_object* v___x_2457_; 
lean_inc(v_toPure_2448_);
lean_dec_ref(v___f_2454_);
lean_dec(v_toBind_2447_);
lean_dec(v_n_2444_);
lean_dec_ref(v_inst_2443_);
lean_dec_ref(v_inst_2442_);
lean_dec_ref(v_inst_2441_);
v___x_2456_ = lean_box(0);
v___x_2457_ = l_Lean_filterFieldList___redArg___lam__2(v___f_2451_, v_cs_2453_, v_toPure_2448_, v___x_2456_);
return v___x_2457_;
}
else
{
lean_object* v_getRef_2458_; lean_object* v___f_2459_; lean_object* v___f_2460_; lean_object* v___x_2461_; 
lean_dec(v_cs_2453_);
v_getRef_2458_ = lean_ctor_get(v_toMonadRef_2449_, 0);
lean_inc(v_getRef_2458_);
v___f_2459_ = lean_alloc_closure((void*)(l_Lean_filterFieldList___redArg___lam__3), 2, 1);
lean_closure_set(v___f_2459_, 0, v___f_2454_);
lean_inc(v_toBind_2447_);
v___f_2460_ = lean_alloc_closure((void*)(l_Lean_filterFieldList___redArg___lam__4), 7, 6);
lean_closure_set(v___f_2460_, 0, v_inst_2441_);
lean_closure_set(v___f_2460_, 1, v_inst_2442_);
lean_closure_set(v___f_2460_, 2, v_inst_2443_);
lean_closure_set(v___f_2460_, 3, v_n_2444_);
lean_closure_set(v___f_2460_, 4, v_toBind_2447_);
lean_closure_set(v___f_2460_, 5, v___f_2459_);
v___x_2461_ = lean_apply_4(v_toBind_2447_, lean_box(0), lean_box(0), v_getRef_2458_, v___f_2460_);
return v___x_2461_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList(lean_object* v_m_2462_, lean_object* v_inst_2463_, lean_object* v_inst_2464_, lean_object* v_inst_2465_, lean_object* v_n_2466_, lean_object* v_cs_2467_){
_start:
{
lean_object* v___x_2468_; 
v___x_2468_ = l_Lean_filterFieldList___redArg(v_inst_2463_, v_inst_2464_, v_inst_2465_, v_n_2466_, v_cs_2467_);
return v___x_2468_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg___lam__0(lean_object* v_inst_2469_, lean_object* v_inst_2470_, lean_object* v_inst_2471_, lean_object* v_n_2472_, lean_object* v_cs_2473_){
_start:
{
lean_object* v___x_2474_; 
v___x_2474_ = l_Lean_filterFieldList___redArg(v_inst_2469_, v_inst_2470_, v_inst_2471_, v_n_2472_, v_cs_2473_);
return v___x_2474_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg(lean_object* v_inst_2475_, lean_object* v_inst_2476_, lean_object* v_inst_2477_, lean_object* v_inst_2478_, lean_object* v_inst_2479_, lean_object* v_inst_2480_, lean_object* v_inst_2481_, lean_object* v_n_2482_){
_start:
{
lean_object* v_toBind_2483_; lean_object* v___f_2484_; uint8_t v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; 
v_toBind_2483_ = lean_ctor_get(v_inst_2475_, 1);
lean_inc(v_toBind_2483_);
lean_inc(v_n_2482_);
lean_inc_ref(v_inst_2477_);
lean_inc_ref(v_inst_2475_);
v___f_2484_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg___lam__0), 5, 4);
lean_closure_set(v___f_2484_, 0, v_inst_2475_);
lean_closure_set(v___f_2484_, 1, v_inst_2477_);
lean_closure_set(v___f_2484_, 2, v_inst_2481_);
lean_closure_set(v___f_2484_, 3, v_n_2482_);
v___x_2485_ = 1;
v___x_2486_ = l_Lean_resolveGlobalName___redArg(v_inst_2475_, v_inst_2476_, v_inst_2477_, v_inst_2478_, v_inst_2479_, v_inst_2480_, v_n_2482_, v___x_2485_);
v___x_2487_ = lean_apply_4(v_toBind_2483_, lean_box(0), lean_box(0), v___x_2486_, v___f_2484_);
return v___x_2487_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore(lean_object* v_m_2488_, lean_object* v_inst_2489_, lean_object* v_inst_2490_, lean_object* v_inst_2491_, lean_object* v_inst_2492_, lean_object* v_inst_2493_, lean_object* v_inst_2494_, lean_object* v_inst_2495_, lean_object* v_n_2496_){
_start:
{
lean_object* v___x_2497_; 
v___x_2497_ = l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg(v_inst_2489_, v_inst_2490_, v_inst_2491_, v_inst_2492_, v_inst_2493_, v_inst_2494_, v_inst_2495_, v_n_2496_);
return v___x_2497_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload___redArg___lam__0(lean_object* v_declName_2498_){
_start:
{
lean_object* v___x_2499_; lean_object* v___x_2500_; 
v___x_2499_ = lean_box(0);
v___x_2500_ = l_Lean_mkConst(v_declName_2498_, v___x_2499_);
return v___x_2500_;
}
}
static lean_object* _init_l_Lean_ensureNoOverload___redArg___closed__2(void){
_start:
{
lean_object* v___x_2503_; lean_object* v___x_2504_; 
v___x_2503_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__1));
v___x_2504_ = l_Lean_stringToMessageData(v___x_2503_);
return v___x_2504_;
}
}
static lean_object* _init_l_Lean_ensureNoOverload___redArg___closed__4(void){
_start:
{
lean_object* v___x_2506_; lean_object* v___x_2507_; 
v___x_2506_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__3));
v___x_2507_ = l_Lean_stringToMessageData(v___x_2506_);
return v___x_2507_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload___redArg(lean_object* v_inst_2509_, lean_object* v_inst_2510_, lean_object* v_n_2511_, lean_object* v_cs_2512_){
_start:
{
lean_object* v_toApplicative_2513_; lean_object* v_toPure_2514_; lean_object* v___f_2515_; 
v_toApplicative_2513_ = lean_ctor_get(v_inst_2509_, 0);
v_toPure_2514_ = lean_ctor_get(v_toApplicative_2513_, 1);
v___f_2515_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__0));
if (lean_obj_tag(v_cs_2512_) == 1)
{
lean_object* v_tail_2529_; 
v_tail_2529_ = lean_ctor_get(v_cs_2512_, 1);
if (lean_obj_tag(v_tail_2529_) == 0)
{
lean_object* v_head_2530_; lean_object* v___x_2531_; 
lean_inc(v_toPure_2514_);
lean_dec(v_n_2511_);
lean_dec_ref(v_inst_2510_);
lean_dec_ref(v_inst_2509_);
v_head_2530_ = lean_ctor_get(v_cs_2512_, 0);
lean_inc(v_head_2530_);
lean_dec_ref_known(v_cs_2512_, 2);
v___x_2531_ = lean_apply_2(v_toPure_2514_, lean_box(0), v_head_2530_);
return v___x_2531_;
}
else
{
goto v___jp_2516_;
}
}
else
{
goto v___jp_2516_;
}
v___jp_2516_:
{
lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; 
v___x_2517_ = lean_obj_once(&l_Lean_ensureNoOverload___redArg___closed__2, &l_Lean_ensureNoOverload___redArg___closed__2_once, _init_l_Lean_ensureNoOverload___redArg___closed__2);
v___x_2518_ = l_Lean_MessageData_ofName(v_n_2511_);
v___x_2519_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2519_, 0, v___x_2517_);
lean_ctor_set(v___x_2519_, 1, v___x_2518_);
v___x_2520_ = lean_obj_once(&l_Lean_ensureNoOverload___redArg___closed__4, &l_Lean_ensureNoOverload___redArg___closed__4_once, _init_l_Lean_ensureNoOverload___redArg___closed__4);
v___x_2521_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2521_, 0, v___x_2519_);
lean_ctor_set(v___x_2521_, 1, v___x_2520_);
v___x_2522_ = lean_box(0);
v___x_2523_ = l_List_mapTR_loop___redArg(v___f_2515_, v_cs_2512_, v___x_2522_);
v___x_2524_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__5));
v___x_2525_ = l_List_mapTR_loop___redArg(v___x_2524_, v___x_2523_, v___x_2522_);
v___x_2526_ = l_Lean_MessageData_ofList(v___x_2525_);
v___x_2527_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2527_, 0, v___x_2521_);
lean_ctor_set(v___x_2527_, 1, v___x_2526_);
v___x_2528_ = l_Lean_throwError___redArg(v_inst_2509_, v_inst_2510_, v___x_2527_);
return v___x_2528_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload(lean_object* v_m_2532_, lean_object* v_inst_2533_, lean_object* v_inst_2534_, lean_object* v_n_2535_, lean_object* v_cs_2536_){
_start:
{
lean_object* v___x_2537_; 
v___x_2537_ = l_Lean_ensureNoOverload___redArg(v_inst_2533_, v_inst_2534_, v_n_2535_, v_cs_2536_);
return v___x_2537_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore___redArg___lam__0(lean_object* v_inst_2538_, lean_object* v_inst_2539_, lean_object* v_n_2540_, lean_object* v_____do__lift_2541_){
_start:
{
lean_object* v___x_2542_; 
v___x_2542_ = l_Lean_ensureNoOverload___redArg(v_inst_2538_, v_inst_2539_, v_n_2540_, v_____do__lift_2541_);
return v___x_2542_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore___redArg(lean_object* v_inst_2543_, lean_object* v_inst_2544_, lean_object* v_inst_2545_, lean_object* v_inst_2546_, lean_object* v_inst_2547_, lean_object* v_inst_2548_, lean_object* v_inst_2549_, lean_object* v_n_2550_){
_start:
{
lean_object* v_toBind_2551_; lean_object* v___f_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; 
v_toBind_2551_ = lean_ctor_get(v_inst_2543_, 1);
lean_inc(v_toBind_2551_);
lean_inc(v_n_2550_);
lean_inc_ref(v_inst_2549_);
lean_inc_ref(v_inst_2543_);
v___f_2552_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalConstNoOverloadCore___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2552_, 0, v_inst_2543_);
lean_closure_set(v___f_2552_, 1, v_inst_2549_);
lean_closure_set(v___f_2552_, 2, v_n_2550_);
v___x_2553_ = l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg(v_inst_2543_, v_inst_2544_, v_inst_2545_, v_inst_2546_, v_inst_2547_, v_inst_2548_, v_inst_2549_, v_n_2550_);
v___x_2554_ = lean_apply_4(v_toBind_2551_, lean_box(0), lean_box(0), v___x_2553_, v___f_2552_);
return v___x_2554_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore(lean_object* v_m_2555_, lean_object* v_inst_2556_, lean_object* v_inst_2557_, lean_object* v_inst_2558_, lean_object* v_inst_2559_, lean_object* v_inst_2560_, lean_object* v_inst_2561_, lean_object* v_inst_2562_, lean_object* v_n_2563_){
_start:
{
lean_object* v___x_2564_; 
v___x_2564_ = l_Lean_resolveGlobalConstNoOverloadCore___redArg(v_inst_2556_, v_inst_2557_, v_inst_2558_, v_inst_2559_, v_inst_2560_, v_inst_2561_, v_inst_2562_, v_n_2563_);
return v___x_2564_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__0(lean_object* v_x_2565_){
_start:
{
if (lean_obj_tag(v_x_2565_) == 1)
{
lean_object* v_fields_2566_; 
v_fields_2566_ = lean_ctor_get(v_x_2565_, 1);
if (lean_obj_tag(v_fields_2566_) == 0)
{
lean_object* v_n_2567_; lean_object* v___x_2568_; 
v_n_2567_ = lean_ctor_get(v_x_2565_, 0);
lean_inc(v_n_2567_);
v___x_2568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2568_, 0, v_n_2567_);
return v___x_2568_;
}
else
{
lean_object* v___x_2569_; 
v___x_2569_ = lean_box(0);
return v___x_2569_;
}
}
else
{
lean_object* v___x_2570_; 
v___x_2570_ = lean_box(0);
return v___x_2570_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__0___boxed(lean_object* v_x_2571_){
_start:
{
lean_object* v_res_2572_; 
v_res_2572_ = l_Lean_preprocessSyntaxAndResolve___redArg___lam__0(v_x_2571_);
lean_dec_ref(v_x_2571_);
return v_res_2572_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__1(lean_object* v_stx_2573_, lean_object* v_withRef_2574_, lean_object* v___x_2575_, lean_object* v_oldRef_2576_){
_start:
{
lean_object* v_ref_2577_; lean_object* v___x_2578_; 
v_ref_2577_ = l_Lean_replaceRef(v_stx_2573_, v_oldRef_2576_);
v___x_2578_ = lean_apply_3(v_withRef_2574_, lean_box(0), v_ref_2577_, v___x_2575_);
return v___x_2578_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__1___boxed(lean_object* v_stx_2579_, lean_object* v_withRef_2580_, lean_object* v___x_2581_, lean_object* v_oldRef_2582_){
_start:
{
lean_object* v_res_2583_; 
v_res_2583_ = l_Lean_preprocessSyntaxAndResolve___redArg___lam__1(v_stx_2579_, v_withRef_2580_, v___x_2581_, v_oldRef_2582_);
lean_dec(v_oldRef_2582_);
lean_dec(v_stx_2579_);
return v_res_2583_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg(lean_object* v_inst_2585_, lean_object* v_inst_2586_, lean_object* v_stx_2587_, lean_object* v_k_2588_){
_start:
{
if (lean_obj_tag(v_stx_2587_) == 3)
{
lean_object* v_toApplicative_2589_; lean_object* v_toBind_2590_; lean_object* v_toPure_2591_; lean_object* v_toMonadRef_2592_; lean_object* v_val_2593_; lean_object* v_preresolved_2594_; lean_object* v___f_2595_; lean_object* v___x_2596_; lean_object* v_pre_2597_; uint8_t v___x_2598_; 
v_toApplicative_2589_ = lean_ctor_get(v_inst_2585_, 0);
lean_inc_ref(v_toApplicative_2589_);
v_toBind_2590_ = lean_ctor_get(v_inst_2585_, 1);
lean_inc(v_toBind_2590_);
lean_dec_ref(v_inst_2585_);
v_toPure_2591_ = lean_ctor_get(v_toApplicative_2589_, 1);
lean_inc(v_toPure_2591_);
lean_dec_ref(v_toApplicative_2589_);
v_toMonadRef_2592_ = lean_ctor_get(v_inst_2586_, 1);
lean_inc_ref(v_toMonadRef_2592_);
lean_dec_ref(v_inst_2586_);
v_val_2593_ = lean_ctor_get(v_stx_2587_, 2);
v_preresolved_2594_ = lean_ctor_get(v_stx_2587_, 3);
v___f_2595_ = ((lean_object*)(l_Lean_preprocessSyntaxAndResolve___redArg___closed__0));
v___x_2596_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__1));
lean_inc(v_preresolved_2594_);
v_pre_2597_ = l_List_filterMapTR_go___redArg(v___f_2595_, v_preresolved_2594_, v___x_2596_);
v___x_2598_ = l_List_isEmpty___redArg(v_pre_2597_);
if (v___x_2598_ == 0)
{
lean_object* v___x_2599_; 
lean_dec_ref(v_toMonadRef_2592_);
lean_dec_ref_known(v_stx_2587_, 4);
lean_dec(v_toBind_2590_);
lean_dec(v_k_2588_);
v___x_2599_ = lean_apply_2(v_toPure_2591_, lean_box(0), v_pre_2597_);
return v___x_2599_;
}
else
{
lean_object* v_getRef_2600_; lean_object* v_withRef_2601_; lean_object* v___x_2602_; lean_object* v___f_2603_; lean_object* v___x_2604_; 
lean_dec(v_pre_2597_);
lean_dec(v_toPure_2591_);
v_getRef_2600_ = lean_ctor_get(v_toMonadRef_2592_, 0);
lean_inc(v_getRef_2600_);
v_withRef_2601_ = lean_ctor_get(v_toMonadRef_2592_, 1);
lean_inc(v_withRef_2601_);
lean_dec_ref(v_toMonadRef_2592_);
lean_inc(v_val_2593_);
v___x_2602_ = lean_apply_1(v_k_2588_, v_val_2593_);
v___f_2603_ = lean_alloc_closure((void*)(l_Lean_preprocessSyntaxAndResolve___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2603_, 0, v_stx_2587_);
lean_closure_set(v___f_2603_, 1, v_withRef_2601_);
lean_closure_set(v___f_2603_, 2, v___x_2602_);
v___x_2604_ = lean_apply_4(v_toBind_2590_, lean_box(0), lean_box(0), v_getRef_2600_, v___f_2603_);
return v___x_2604_;
}
}
else
{
lean_object* v___x_2605_; lean_object* v___x_2606_; 
lean_dec(v_k_2588_);
v___x_2605_ = lean_obj_once(&l_Lean_resolveNamespace___redArg___closed__4, &l_Lean_resolveNamespace___redArg___closed__4_once, _init_l_Lean_resolveNamespace___redArg___closed__4);
v___x_2606_ = l_Lean_throwErrorAt___redArg(v_inst_2585_, v_inst_2586_, v_stx_2587_, v___x_2605_);
return v___x_2606_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve(lean_object* v_m_2607_, lean_object* v_inst_2608_, lean_object* v_inst_2609_, lean_object* v_stx_2610_, lean_object* v_k_2611_){
_start:
{
lean_object* v___x_2612_; 
v___x_2612_ = l_Lean_preprocessSyntaxAndResolve___redArg(v_inst_2608_, v_inst_2609_, v_stx_2610_, v_k_2611_);
return v___x_2612_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst___redArg(lean_object* v_inst_2613_, lean_object* v_inst_2614_, lean_object* v_inst_2615_, lean_object* v_inst_2616_, lean_object* v_inst_2617_, lean_object* v_inst_2618_, lean_object* v_inst_2619_, lean_object* v_stx_2620_){
_start:
{
lean_object* v___x_2621_; lean_object* v___x_2622_; 
lean_inc_ref(v_inst_2619_);
lean_inc_ref(v_inst_2613_);
v___x_2621_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore), 9, 8);
lean_closure_set(v___x_2621_, 0, lean_box(0));
lean_closure_set(v___x_2621_, 1, v_inst_2613_);
lean_closure_set(v___x_2621_, 2, v_inst_2614_);
lean_closure_set(v___x_2621_, 3, v_inst_2615_);
lean_closure_set(v___x_2621_, 4, v_inst_2616_);
lean_closure_set(v___x_2621_, 5, v_inst_2617_);
lean_closure_set(v___x_2621_, 6, v_inst_2618_);
lean_closure_set(v___x_2621_, 7, v_inst_2619_);
v___x_2622_ = l_Lean_preprocessSyntaxAndResolve___redArg(v_inst_2613_, v_inst_2619_, v_stx_2620_, v___x_2621_);
return v___x_2622_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst(lean_object* v_m_2623_, lean_object* v_inst_2624_, lean_object* v_inst_2625_, lean_object* v_inst_2626_, lean_object* v_inst_2627_, lean_object* v_inst_2628_, lean_object* v_inst_2629_, lean_object* v_inst_2630_, lean_object* v_stx_2631_){
_start:
{
lean_object* v___x_2632_; 
v___x_2632_ = l_Lean_resolveGlobalConst___redArg(v_inst_2624_, v_inst_2625_, v_inst_2626_, v_inst_2627_, v_inst_2628_, v_inst_2629_, v_inst_2630_, v_stx_2631_);
return v___x_2632_;
}
}
static lean_object* _init_l_Lean_ensureNonAmbiguous___redArg___closed__1(void){
_start:
{
lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; 
v___x_2634_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__2));
v___x_2635_ = lean_unsigned_to_nat(11u);
v___x_2636_ = lean_unsigned_to_nat(474u);
v___x_2637_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___redArg___closed__0));
v___x_2638_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__0));
v___x_2639_ = l_mkPanicMessageWithDecl(v___x_2638_, v___x_2637_, v___x_2636_, v___x_2635_, v___x_2634_);
return v___x_2639_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous___redArg(lean_object* v_inst_2643_, lean_object* v_inst_2644_, lean_object* v_id_2645_, lean_object* v_cs_2646_){
_start:
{
if (lean_obj_tag(v_cs_2646_) == 0)
{
lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; 
lean_dec(v_id_2645_);
lean_dec_ref(v_inst_2644_);
v___x_2647_ = lean_box(0);
v___x_2648_ = l_instInhabitedOfMonad___redArg(v_inst_2643_, v___x_2647_);
v___x_2649_ = lean_obj_once(&l_Lean_ensureNonAmbiguous___redArg___closed__1, &l_Lean_ensureNonAmbiguous___redArg___closed__1_once, _init_l_Lean_ensureNonAmbiguous___redArg___closed__1);
v___x_2650_ = l_panic___redArg(v___x_2648_, v___x_2649_);
lean_dec(v___x_2648_);
return v___x_2650_;
}
else
{
lean_object* v_tail_2651_; 
v_tail_2651_ = lean_ctor_get(v_cs_2646_, 1);
if (lean_obj_tag(v_tail_2651_) == 0)
{
lean_object* v_toApplicative_2652_; lean_object* v_toPure_2653_; lean_object* v_head_2654_; lean_object* v___x_2655_; 
v_toApplicative_2652_ = lean_ctor_get(v_inst_2643_, 0);
lean_inc_ref(v_toApplicative_2652_);
lean_dec(v_id_2645_);
lean_dec_ref(v_inst_2644_);
lean_dec_ref(v_inst_2643_);
v_toPure_2653_ = lean_ctor_get(v_toApplicative_2652_, 1);
lean_inc(v_toPure_2653_);
lean_dec_ref(v_toApplicative_2652_);
v_head_2654_ = lean_ctor_get(v_cs_2646_, 0);
lean_inc(v_head_2654_);
lean_dec_ref_known(v_cs_2646_, 2);
v___x_2655_ = lean_apply_2(v_toPure_2653_, lean_box(0), v_head_2654_);
return v___x_2655_;
}
else
{
lean_object* v___f_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; uint8_t v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; 
v___f_2656_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__0));
v___x_2657_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___redArg___closed__2));
v___x_2658_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___redArg___closed__3));
v___x_2659_ = lean_box(0);
v___x_2660_ = 0;
lean_inc(v_id_2645_);
v___x_2661_ = l_Lean_Syntax_formatStx(v_id_2645_, v___x_2659_, v___x_2660_);
v___x_2662_ = l_Std_Format_defWidth;
v___x_2663_ = lean_unsigned_to_nat(0u);
v___x_2664_ = l_Std_Format_pretty(v___x_2661_, v___x_2662_, v___x_2663_, v___x_2663_);
v___x_2665_ = lean_string_append(v___x_2658_, v___x_2664_);
lean_dec_ref(v___x_2664_);
v___x_2666_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___redArg___closed__4));
v___x_2667_ = lean_string_append(v___x_2665_, v___x_2666_);
v___x_2668_ = lean_box(0);
v___x_2669_ = l_List_mapTR_loop___redArg(v___f_2656_, v_cs_2646_, v___x_2668_);
v___x_2670_ = l_List_toString___redArg(v___x_2657_, v___x_2669_);
v___x_2671_ = lean_string_append(v___x_2667_, v___x_2670_);
lean_dec_ref(v___x_2670_);
v___x_2672_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2672_, 0, v___x_2671_);
v___x_2673_ = l_Lean_MessageData_ofFormat(v___x_2672_);
v___x_2674_ = l_Lean_throwErrorAt___redArg(v_inst_2643_, v_inst_2644_, v_id_2645_, v___x_2673_);
return v___x_2674_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous(lean_object* v_m_2675_, lean_object* v_inst_2676_, lean_object* v_inst_2677_, lean_object* v_id_2678_, lean_object* v_cs_2679_){
_start:
{
lean_object* v___x_2680_; 
v___x_2680_ = l_Lean_ensureNonAmbiguous___redArg(v_inst_2676_, v_inst_2677_, v_id_2678_, v_cs_2679_);
return v___x_2680_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___redArg___lam__0(lean_object* v_inst_2681_, lean_object* v_inst_2682_, lean_object* v_id_2683_, lean_object* v_____do__lift_2684_){
_start:
{
lean_object* v___x_2685_; 
v___x_2685_ = l_Lean_ensureNonAmbiguous___redArg(v_inst_2681_, v_inst_2682_, v_id_2683_, v_____do__lift_2684_);
return v___x_2685_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___redArg(lean_object* v_inst_2686_, lean_object* v_inst_2687_, lean_object* v_inst_2688_, lean_object* v_inst_2689_, lean_object* v_inst_2690_, lean_object* v_inst_2691_, lean_object* v_inst_2692_, lean_object* v_id_2693_){
_start:
{
lean_object* v_toBind_2694_; lean_object* v___f_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; 
v_toBind_2694_ = lean_ctor_get(v_inst_2686_, 1);
lean_inc(v_toBind_2694_);
lean_inc(v_id_2693_);
lean_inc_ref(v_inst_2692_);
lean_inc_ref(v_inst_2686_);
v___f_2695_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalConstNoOverload___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2695_, 0, v_inst_2686_);
lean_closure_set(v___f_2695_, 1, v_inst_2692_);
lean_closure_set(v___f_2695_, 2, v_id_2693_);
v___x_2696_ = l_Lean_resolveGlobalConst___redArg(v_inst_2686_, v_inst_2687_, v_inst_2688_, v_inst_2689_, v_inst_2690_, v_inst_2691_, v_inst_2692_, v_id_2693_);
v___x_2697_ = lean_apply_4(v_toBind_2694_, lean_box(0), lean_box(0), v___x_2696_, v___f_2695_);
return v___x_2697_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload(lean_object* v_m_2698_, lean_object* v_inst_2699_, lean_object* v_inst_2700_, lean_object* v_inst_2701_, lean_object* v_inst_2702_, lean_object* v_inst_2703_, lean_object* v_inst_2704_, lean_object* v_inst_2705_, lean_object* v_id_2706_){
_start:
{
lean_object* v___x_2707_; 
v___x_2707_ = l_Lean_resolveGlobalConstNoOverload___redArg(v_inst_2699_, v_inst_2700_, v_inst_2701_, v_inst_2702_, v_inst_2703_, v_inst_2704_, v_inst_2705_, v_id_2706_);
return v___x_2707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0(lean_object* v___f_2708_, lean_object* v___f_2709_, uint8_t v_globalDeclFoundNext_2710_, uint8_t v_globalDeclFound_2711_, lean_object* v_r_2712_){
_start:
{
lean_object* v___x_2713_; lean_object* v_r_2714_; uint8_t v___x_2715_; 
v___x_2713_ = lean_box(0);
v_r_2714_ = l_List_filterTR_loop___redArg(v___f_2708_, v_r_2712_, v___x_2713_);
v___x_2715_ = l_List_isEmpty___redArg(v_r_2714_);
lean_dec(v_r_2714_);
if (v___x_2715_ == 0)
{
lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; 
v___x_2716_ = lean_box(0);
v___x_2717_ = lean_box(v_globalDeclFoundNext_2710_);
v___x_2718_ = lean_apply_2(v___f_2709_, v___x_2716_, v___x_2717_);
return v___x_2718_;
}
else
{
lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; 
v___x_2719_ = lean_box(0);
v___x_2720_ = lean_box(v_globalDeclFound_2711_);
v___x_2721_ = lean_apply_2(v___f_2709_, v___x_2719_, v___x_2720_);
return v___x_2721_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0___boxed(lean_object* v___f_2722_, lean_object* v___f_2723_, lean_object* v_globalDeclFoundNext_2724_, lean_object* v_globalDeclFound_2725_, lean_object* v_r_2726_){
_start:
{
uint8_t v_globalDeclFoundNext_boxed_2727_; uint8_t v_globalDeclFound_boxed_2728_; lean_object* v_res_2729_; 
v_globalDeclFoundNext_boxed_2727_ = lean_unbox(v_globalDeclFoundNext_2724_);
v_globalDeclFound_boxed_2728_ = lean_unbox(v_globalDeclFound_2725_);
v_res_2729_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0(v___f_2722_, v___f_2723_, v_globalDeclFoundNext_boxed_2727_, v_globalDeclFound_boxed_2728_, v_r_2726_);
return v_res_2729_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1___boxed(lean_object* v_str_2730_, lean_object* v_projs_2731_, lean_object* v_inst_2732_, lean_object* v_inst_2733_, lean_object* v_inst_2734_, lean_object* v_inst_2735_, lean_object* v_inst_2736_, lean_object* v_inst_2737_, lean_object* v_view_2738_, lean_object* v_findLocalDecl_x3f_2739_, lean_object* v_pre_2740_, lean_object* v_____r_2741_, lean_object* v_globalDeclFoundNext_2742_){
_start:
{
uint8_t v_globalDeclFoundNext_boxed_2743_; lean_object* v_res_2744_; 
v_globalDeclFoundNext_boxed_2743_ = lean_unbox(v_globalDeclFoundNext_2742_);
v_res_2744_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1(v_str_2730_, v_projs_2731_, v_inst_2732_, v_inst_2733_, v_inst_2734_, v_inst_2735_, v_inst_2736_, v_inst_2737_, v_view_2738_, v_findLocalDecl_x3f_2739_, v_pre_2740_, v_____r_2741_, v_globalDeclFoundNext_boxed_2743_);
return v_res_2744_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(lean_object* v_inst_2745_, lean_object* v_inst_2746_, lean_object* v_inst_2747_, lean_object* v_inst_2748_, lean_object* v_inst_2749_, lean_object* v_inst_2750_, lean_object* v_view_2751_, lean_object* v_findLocalDecl_x3f_2752_, lean_object* v_n_2753_, lean_object* v_projs_2754_, uint8_t v_globalDeclFound_2755_){
_start:
{
lean_object* v_toApplicative_2756_; lean_object* v_imported_2757_; lean_object* v_ctx_2758_; lean_object* v_scopes_2759_; lean_object* v_toBind_2760_; lean_object* v_toPure_2761_; lean_object* v___f_2762_; lean_object* v_givenNameView_2763_; uint8_t v___y_2765_; 
v_toApplicative_2756_ = lean_ctor_get(v_inst_2745_, 0);
v_imported_2757_ = lean_ctor_get(v_view_2751_, 1);
v_ctx_2758_ = lean_ctor_get(v_view_2751_, 2);
v_scopes_2759_ = lean_ctor_get(v_view_2751_, 3);
v_toBind_2760_ = lean_ctor_get(v_inst_2745_, 1);
v_toPure_2761_ = lean_ctor_get(v_toApplicative_2756_, 1);
v___f_2762_ = ((lean_object*)(l_Lean_filterFieldList___redArg___closed__0));
lean_inc(v_scopes_2759_);
lean_inc(v_ctx_2758_);
lean_inc(v_imported_2757_);
lean_inc(v_n_2753_);
v_givenNameView_2763_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_givenNameView_2763_, 0, v_n_2753_);
lean_ctor_set(v_givenNameView_2763_, 1, v_imported_2757_);
lean_ctor_set(v_givenNameView_2763_, 2, v_ctx_2758_);
lean_ctor_set(v_givenNameView_2763_, 3, v_scopes_2759_);
if (v_globalDeclFound_2755_ == 0)
{
v___y_2765_ = v_globalDeclFound_2755_;
goto v___jp_2764_;
}
else
{
uint8_t v___x_2801_; 
v___x_2801_ = l_List_isEmpty___redArg(v_projs_2754_);
if (v___x_2801_ == 0)
{
v___y_2765_ = v_globalDeclFound_2755_;
goto v___jp_2764_;
}
else
{
uint8_t v___x_2802_; 
v___x_2802_ = 0;
v___y_2765_ = v___x_2802_;
goto v___jp_2764_;
}
}
v___jp_2764_:
{
lean_object* v___x_2766_; lean_object* v___x_2767_; 
v___x_2766_ = lean_box(v___y_2765_);
lean_inc_ref(v_findLocalDecl_x3f_2752_);
lean_inc_ref(v_givenNameView_2763_);
v___x_2767_ = lean_apply_2(v_findLocalDecl_x3f_2752_, v_givenNameView_2763_, v___x_2766_);
if (lean_obj_tag(v___x_2767_) == 0)
{
if (lean_obj_tag(v_n_2753_) == 1)
{
lean_object* v_pre_2768_; lean_object* v_str_2769_; lean_object* v___f_2770_; 
v_pre_2768_ = lean_ctor_get(v_n_2753_, 0);
lean_inc_n(v_pre_2768_, 2);
v_str_2769_ = lean_ctor_get(v_n_2753_, 1);
lean_inc_ref_n(v_str_2769_, 2);
lean_dec_ref_known(v_n_2753_, 2);
lean_inc_ref(v_findLocalDecl_x3f_2752_);
lean_inc_ref(v_view_2751_);
lean_inc(v_inst_2750_);
lean_inc_ref(v_inst_2749_);
lean_inc_ref(v_inst_2748_);
lean_inc_ref(v_inst_2747_);
lean_inc_ref(v_inst_2746_);
lean_inc_ref(v_inst_2745_);
lean_inc(v_projs_2754_);
v___f_2770_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1___boxed), 13, 11);
lean_closure_set(v___f_2770_, 0, v_str_2769_);
lean_closure_set(v___f_2770_, 1, v_projs_2754_);
lean_closure_set(v___f_2770_, 2, v_inst_2745_);
lean_closure_set(v___f_2770_, 3, v_inst_2746_);
lean_closure_set(v___f_2770_, 4, v_inst_2747_);
lean_closure_set(v___f_2770_, 5, v_inst_2748_);
lean_closure_set(v___f_2770_, 6, v_inst_2749_);
lean_closure_set(v___f_2770_, 7, v_inst_2750_);
lean_closure_set(v___f_2770_, 8, v_view_2751_);
lean_closure_set(v___f_2770_, 9, v_findLocalDecl_x3f_2752_);
lean_closure_set(v___f_2770_, 10, v_pre_2768_);
if (v_globalDeclFound_2755_ == 0)
{
uint8_t v_globalDeclFoundNext_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___f_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; 
lean_inc(v_toBind_2760_);
lean_dec_ref(v_str_2769_);
lean_dec(v_pre_2768_);
lean_dec(v_projs_2754_);
lean_dec_ref(v_findLocalDecl_x3f_2752_);
lean_dec_ref(v_view_2751_);
v_globalDeclFoundNext_2771_ = 1;
v___x_2772_ = lean_box(v_globalDeclFoundNext_2771_);
v___x_2773_ = lean_box(v_globalDeclFound_2755_);
v___f_2774_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2774_, 0, v___f_2762_);
lean_closure_set(v___f_2774_, 1, v___f_2770_);
lean_closure_set(v___f_2774_, 2, v___x_2772_);
lean_closure_set(v___f_2774_, 3, v___x_2773_);
v___x_2775_ = l_Lean_MacroScopesView_review(v_givenNameView_2763_);
v___x_2776_ = l_Lean_resolveGlobalName___redArg(v_inst_2745_, v_inst_2746_, v_inst_2747_, v_inst_2748_, v_inst_2749_, v_inst_2750_, v___x_2775_, v_globalDeclFound_2755_);
v___x_2777_ = lean_apply_4(v_toBind_2760_, lean_box(0), lean_box(0), v___x_2776_, v___f_2774_);
return v___x_2777_;
}
else
{
lean_object* v___x_2778_; lean_object* v___x_2779_; 
lean_dec_ref(v___f_2770_);
lean_dec_ref_known(v_givenNameView_2763_, 4);
v___x_2778_ = lean_box(0);
v___x_2779_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1(v_str_2769_, v_projs_2754_, v_inst_2745_, v_inst_2746_, v_inst_2747_, v_inst_2748_, v_inst_2749_, v_inst_2750_, v_view_2751_, v_findLocalDecl_x3f_2752_, v_pre_2768_, v___x_2778_, v_globalDeclFound_2755_);
return v___x_2779_;
}
}
else
{
lean_object* v___x_2780_; lean_object* v___x_2781_; 
lean_inc(v_toPure_2761_);
lean_dec_ref_known(v_givenNameView_2763_, 4);
lean_dec(v_projs_2754_);
lean_dec(v_n_2753_);
lean_dec_ref(v_findLocalDecl_x3f_2752_);
lean_dec_ref(v_view_2751_);
lean_dec(v_inst_2750_);
lean_dec_ref(v_inst_2749_);
lean_dec_ref(v_inst_2748_);
lean_dec_ref(v_inst_2747_);
lean_dec_ref(v_inst_2746_);
lean_dec_ref(v_inst_2745_);
v___x_2780_ = lean_box(0);
v___x_2781_ = lean_apply_2(v_toPure_2761_, lean_box(0), v___x_2780_);
return v___x_2781_;
}
}
else
{
lean_object* v___x_2783_; uint8_t v_isShared_2784_; uint8_t v_isSharedCheck_2798_; 
lean_inc(v_toPure_2761_);
lean_dec_ref_known(v_givenNameView_2763_, 4);
lean_dec(v_n_2753_);
lean_dec_ref(v_findLocalDecl_x3f_2752_);
lean_dec_ref(v_view_2751_);
lean_dec(v_inst_2750_);
lean_dec_ref(v_inst_2749_);
lean_dec_ref(v_inst_2748_);
lean_dec_ref(v_inst_2747_);
lean_dec_ref(v_inst_2746_);
v_isSharedCheck_2798_ = !lean_is_exclusive(v_inst_2745_);
if (v_isSharedCheck_2798_ == 0)
{
lean_object* v_unused_2799_; lean_object* v_unused_2800_; 
v_unused_2799_ = lean_ctor_get(v_inst_2745_, 1);
lean_dec(v_unused_2799_);
v_unused_2800_ = lean_ctor_get(v_inst_2745_, 0);
lean_dec(v_unused_2800_);
v___x_2783_ = v_inst_2745_;
v_isShared_2784_ = v_isSharedCheck_2798_;
goto v_resetjp_2782_;
}
else
{
lean_dec(v_inst_2745_);
v___x_2783_ = lean_box(0);
v_isShared_2784_ = v_isSharedCheck_2798_;
goto v_resetjp_2782_;
}
v_resetjp_2782_:
{
lean_object* v_val_2785_; lean_object* v___x_2787_; uint8_t v_isShared_2788_; uint8_t v_isSharedCheck_2797_; 
v_val_2785_ = lean_ctor_get(v___x_2767_, 0);
v_isSharedCheck_2797_ = !lean_is_exclusive(v___x_2767_);
if (v_isSharedCheck_2797_ == 0)
{
v___x_2787_ = v___x_2767_;
v_isShared_2788_ = v_isSharedCheck_2797_;
goto v_resetjp_2786_;
}
else
{
lean_inc(v_val_2785_);
lean_dec(v___x_2767_);
v___x_2787_ = lean_box(0);
v_isShared_2788_ = v_isSharedCheck_2797_;
goto v_resetjp_2786_;
}
v_resetjp_2786_:
{
lean_object* v___x_2789_; lean_object* v___x_2791_; 
v___x_2789_ = l_Lean_LocalDecl_toExpr(v_val_2785_);
if (v_isShared_2784_ == 0)
{
lean_ctor_set(v___x_2783_, 1, v_projs_2754_);
lean_ctor_set(v___x_2783_, 0, v___x_2789_);
v___x_2791_ = v___x_2783_;
goto v_reusejp_2790_;
}
else
{
lean_object* v_reuseFailAlloc_2796_; 
v_reuseFailAlloc_2796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2796_, 0, v___x_2789_);
lean_ctor_set(v_reuseFailAlloc_2796_, 1, v_projs_2754_);
v___x_2791_ = v_reuseFailAlloc_2796_;
goto v_reusejp_2790_;
}
v_reusejp_2790_:
{
lean_object* v___x_2793_; 
if (v_isShared_2788_ == 0)
{
lean_ctor_set(v___x_2787_, 0, v___x_2791_);
v___x_2793_ = v___x_2787_;
goto v_reusejp_2792_;
}
else
{
lean_object* v_reuseFailAlloc_2795_; 
v_reuseFailAlloc_2795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2795_, 0, v___x_2791_);
v___x_2793_ = v_reuseFailAlloc_2795_;
goto v_reusejp_2792_;
}
v_reusejp_2792_:
{
lean_object* v___x_2794_; 
v___x_2794_ = lean_apply_2(v_toPure_2761_, lean_box(0), v___x_2793_);
return v___x_2794_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1(lean_object* v_str_2803_, lean_object* v_projs_2804_, lean_object* v_inst_2805_, lean_object* v_inst_2806_, lean_object* v_inst_2807_, lean_object* v_inst_2808_, lean_object* v_inst_2809_, lean_object* v_inst_2810_, lean_object* v_view_2811_, lean_object* v_findLocalDecl_x3f_2812_, lean_object* v_pre_2813_, lean_object* v_____r_2814_, uint8_t v_globalDeclFoundNext_2815_){
_start:
{
lean_object* v___x_2816_; lean_object* v___x_2817_; 
v___x_2816_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2816_, 0, v_str_2803_);
lean_ctor_set(v___x_2816_, 1, v_projs_2804_);
v___x_2817_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(v_inst_2805_, v_inst_2806_, v_inst_2807_, v_inst_2808_, v_inst_2809_, v_inst_2810_, v_view_2811_, v_findLocalDecl_x3f_2812_, v_pre_2813_, v___x_2816_, v_globalDeclFoundNext_2815_);
return v___x_2817_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___boxed(lean_object* v_inst_2818_, lean_object* v_inst_2819_, lean_object* v_inst_2820_, lean_object* v_inst_2821_, lean_object* v_inst_2822_, lean_object* v_inst_2823_, lean_object* v_view_2824_, lean_object* v_findLocalDecl_x3f_2825_, lean_object* v_n_2826_, lean_object* v_projs_2827_, lean_object* v_globalDeclFound_2828_){
_start:
{
uint8_t v_globalDeclFound_boxed_2829_; lean_object* v_res_2830_; 
v_globalDeclFound_boxed_2829_ = lean_unbox(v_globalDeclFound_2828_);
v_res_2830_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(v_inst_2818_, v_inst_2819_, v_inst_2820_, v_inst_2821_, v_inst_2822_, v_inst_2823_, v_view_2824_, v_findLocalDecl_x3f_2825_, v_n_2826_, v_projs_2827_, v_globalDeclFound_boxed_2829_);
return v_res_2830_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop(lean_object* v_m_2831_, lean_object* v_inst_2832_, lean_object* v_inst_2833_, lean_object* v_inst_2834_, lean_object* v_inst_2835_, lean_object* v_inst_2836_, lean_object* v_inst_2837_, lean_object* v_view_2838_, lean_object* v_findLocalDecl_x3f_2839_, lean_object* v_n_2840_, lean_object* v_projs_2841_, uint8_t v_globalDeclFound_2842_){
_start:
{
lean_object* v___x_2843_; 
v___x_2843_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(v_inst_2832_, v_inst_2833_, v_inst_2834_, v_inst_2835_, v_inst_2836_, v_inst_2837_, v_view_2838_, v_findLocalDecl_x3f_2839_, v_n_2840_, v_projs_2841_, v_globalDeclFound_2842_);
return v___x_2843_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___boxed(lean_object* v_m_2844_, lean_object* v_inst_2845_, lean_object* v_inst_2846_, lean_object* v_inst_2847_, lean_object* v_inst_2848_, lean_object* v_inst_2849_, lean_object* v_inst_2850_, lean_object* v_view_2851_, lean_object* v_findLocalDecl_x3f_2852_, lean_object* v_n_2853_, lean_object* v_projs_2854_, lean_object* v_globalDeclFound_2855_){
_start:
{
uint8_t v_globalDeclFound_boxed_2856_; lean_object* v_res_2857_; 
v_globalDeclFound_boxed_2856_ = lean_unbox(v_globalDeclFound_2855_);
v_res_2857_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop(v_m_2844_, v_inst_2845_, v_inst_2846_, v_inst_2847_, v_inst_2848_, v_inst_2849_, v_inst_2850_, v_view_2851_, v_findLocalDecl_x3f_2852_, v_n_2853_, v_projs_2854_, v_globalDeclFound_boxed_2856_);
return v_res_2857_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(lean_object* v_localDecl_2858_, lean_object* v_givenNameView_2859_, lean_object* v_fullDeclName_2860_, lean_object* v_ns_2861_){
_start:
{
lean_object* v_name_2862_; lean_object* v_imported_2863_; lean_object* v_ctx_2864_; lean_object* v_scopes_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; uint8_t v___x_2869_; 
v_name_2862_ = lean_ctor_get(v_givenNameView_2859_, 0);
v_imported_2863_ = lean_ctor_get(v_givenNameView_2859_, 1);
v_ctx_2864_ = lean_ctor_get(v_givenNameView_2859_, 2);
v_scopes_2865_ = lean_ctor_get(v_givenNameView_2859_, 3);
lean_inc(v_name_2862_);
lean_inc(v_ns_2861_);
v___x_2866_ = l_Lean_Name_append(v_ns_2861_, v_name_2862_);
lean_inc(v_scopes_2865_);
lean_inc(v_ctx_2864_);
lean_inc(v_imported_2863_);
v___x_2867_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2867_, 0, v___x_2866_);
lean_ctor_set(v___x_2867_, 1, v_imported_2863_);
lean_ctor_set(v___x_2867_, 2, v_ctx_2864_);
lean_ctor_set(v___x_2867_, 3, v_scopes_2865_);
v___x_2868_ = l_Lean_MacroScopesView_review(v___x_2867_);
v___x_2869_ = lean_name_eq(v___x_2868_, v_fullDeclName_2860_);
lean_dec(v___x_2868_);
if (v___x_2869_ == 0)
{
if (lean_obj_tag(v_ns_2861_) == 1)
{
lean_object* v_pre_2870_; 
v_pre_2870_ = lean_ctor_get(v_ns_2861_, 0);
lean_inc(v_pre_2870_);
lean_dec_ref_known(v_ns_2861_, 2);
v_ns_2861_ = v_pre_2870_;
goto _start;
}
else
{
lean_object* v___x_2872_; 
lean_dec(v_ns_2861_);
lean_dec_ref(v_givenNameView_2859_);
lean_dec_ref(v_localDecl_2858_);
v___x_2872_ = lean_box(0);
return v___x_2872_;
}
}
else
{
lean_object* v___x_2873_; 
lean_dec(v_ns_2861_);
lean_dec_ref(v_givenNameView_2859_);
v___x_2873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2873_, 0, v_localDecl_2858_);
return v___x_2873_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_go___boxed(lean_object* v_localDecl_2874_, lean_object* v_givenNameView_2875_, lean_object* v_fullDeclName_2876_, lean_object* v_ns_2877_){
_start:
{
lean_object* v_res_2878_; 
v_res_2878_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(v_localDecl_2874_, v_givenNameView_2875_, v_fullDeclName_2876_, v_ns_2877_);
lean_dec(v_fullDeclName_2876_);
return v_res_2878_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__0(lean_object* v_localDecl_2879_, lean_object* v_givenName_2880_){
_start:
{
lean_object* v___x_2881_; uint8_t v___x_2882_; 
v___x_2881_ = l_Lean_LocalDecl_userName(v_localDecl_2879_);
v___x_2882_ = lean_name_eq(v___x_2881_, v_givenName_2880_);
lean_dec(v___x_2881_);
if (v___x_2882_ == 0)
{
lean_object* v___x_2883_; 
lean_dec_ref(v_localDecl_2879_);
v___x_2883_ = lean_box(0);
return v___x_2883_;
}
else
{
lean_object* v___x_2884_; 
v___x_2884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2884_, 0, v_localDecl_2879_);
return v___x_2884_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__0___boxed(lean_object* v_localDecl_2885_, lean_object* v_givenName_2886_){
_start:
{
lean_object* v_res_2887_; 
v_res_2887_ = l_Lean_resolveLocalName___redArg___lam__0(v_localDecl_2885_, v_givenName_2886_);
lean_dec(v_givenName_2886_);
return v_res_2887_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__1(lean_object* v_matchLocalDecl_x3f_2888_, lean_object* v_givenName_2889_, uint8_t v_skipAuxDecl_2890_, lean_object* v___f_2891_, lean_object* v_auxDeclToFullName_2892_, lean_object* v_currNamespace_2893_, lean_object* v_givenNameView_2894_, lean_object* v_x_2895_){
_start:
{
if (lean_obj_tag(v_x_2895_) == 0)
{
lean_dec_ref(v_givenNameView_2894_);
lean_dec(v_currNamespace_2893_);
lean_dec(v_auxDeclToFullName_2892_);
lean_dec_ref(v___f_2891_);
lean_dec(v_givenName_2889_);
lean_dec_ref(v_matchLocalDecl_x3f_2888_);
return v_x_2895_;
}
else
{
lean_object* v_val_2896_; uint8_t v___x_2897_; 
v_val_2896_ = lean_ctor_get(v_x_2895_, 0);
v___x_2897_ = l_Lean_LocalDecl_isAuxDecl(v_val_2896_);
if (v___x_2897_ == 0)
{
lean_object* v___x_2898_; 
lean_inc(v_val_2896_);
lean_dec_ref_known(v_x_2895_, 1);
lean_dec_ref(v_givenNameView_2894_);
lean_dec(v_currNamespace_2893_);
lean_dec(v_auxDeclToFullName_2892_);
lean_dec_ref(v___f_2891_);
v___x_2898_ = lean_apply_2(v_matchLocalDecl_x3f_2888_, v_val_2896_, v_givenName_2889_);
return v___x_2898_;
}
else
{
if (v_skipAuxDecl_2890_ == 0)
{
lean_object* v___x_2899_; lean_object* v___x_2900_; 
v___x_2899_ = l_Lean_LocalDecl_fvarId(v_val_2896_);
v___x_2900_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(v___f_2891_, v_auxDeclToFullName_2892_, v___x_2899_);
if (lean_obj_tag(v___x_2900_) == 1)
{
lean_object* v_val_2901_; lean_object* v_fullDeclView_2902_; lean_object* v_name_2903_; lean_object* v_imported_2904_; lean_object* v_ctx_2905_; lean_object* v_scopes_2906_; lean_object* v___x_2908_; uint8_t v_isShared_2909_; uint8_t v_isSharedCheck_2926_; 
lean_dec(v_givenName_2889_);
lean_dec_ref(v_matchLocalDecl_x3f_2888_);
v_val_2901_ = lean_ctor_get(v___x_2900_, 0);
lean_inc(v_val_2901_);
lean_dec_ref_known(v___x_2900_, 1);
v_fullDeclView_2902_ = l_Lean_extractMacroScopes(v_val_2901_);
v_name_2903_ = lean_ctor_get(v_fullDeclView_2902_, 0);
v_imported_2904_ = lean_ctor_get(v_fullDeclView_2902_, 1);
v_ctx_2905_ = lean_ctor_get(v_fullDeclView_2902_, 2);
v_scopes_2906_ = lean_ctor_get(v_fullDeclView_2902_, 3);
v_isSharedCheck_2926_ = !lean_is_exclusive(v_fullDeclView_2902_);
if (v_isSharedCheck_2926_ == 0)
{
v___x_2908_ = v_fullDeclView_2902_;
v_isShared_2909_ = v_isSharedCheck_2926_;
goto v_resetjp_2907_;
}
else
{
lean_inc(v_scopes_2906_);
lean_inc(v_ctx_2905_);
lean_inc(v_imported_2904_);
lean_inc(v_name_2903_);
lean_dec(v_fullDeclView_2902_);
v___x_2908_ = lean_box(0);
v_isShared_2909_ = v_isSharedCheck_2926_;
goto v_resetjp_2907_;
}
v_resetjp_2907_:
{
lean_object* v___y_2911_; lean_object* v___x_2924_; 
lean_inc(v_name_2903_);
v___x_2924_ = l_Lean_privateToUserName_x3f(v_name_2903_);
if (lean_obj_tag(v___x_2924_) == 0)
{
v___y_2911_ = v_name_2903_;
goto v___jp_2910_;
}
else
{
lean_object* v_val_2925_; 
lean_dec(v_name_2903_);
v_val_2925_ = lean_ctor_get(v___x_2924_, 0);
lean_inc(v_val_2925_);
lean_dec_ref_known(v___x_2924_, 1);
v___y_2911_ = v_val_2925_;
goto v___jp_2910_;
}
v___jp_2910_:
{
lean_object* v_fullDeclView_2913_; 
if (v_isShared_2909_ == 0)
{
lean_ctor_set(v___x_2908_, 0, v___y_2911_);
v_fullDeclView_2913_ = v___x_2908_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2923_; 
v_reuseFailAlloc_2923_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2923_, 0, v___y_2911_);
lean_ctor_set(v_reuseFailAlloc_2923_, 1, v_imported_2904_);
lean_ctor_set(v_reuseFailAlloc_2923_, 2, v_ctx_2905_);
lean_ctor_set(v_reuseFailAlloc_2923_, 3, v_scopes_2906_);
v_fullDeclView_2913_ = v_reuseFailAlloc_2923_;
goto v_reusejp_2912_;
}
v_reusejp_2912_:
{
lean_object* v_fullDeclName_2914_; uint8_t v___x_2915_; 
lean_inc_ref(v_fullDeclView_2913_);
v_fullDeclName_2914_ = l_Lean_MacroScopesView_review(v_fullDeclView_2913_);
v___x_2915_ = l_Lean_Name_isPrefixOf(v_currNamespace_2893_, v_fullDeclName_2914_);
if (v___x_2915_ == 0)
{
lean_object* v___x_2916_; 
lean_inc(v_val_2896_);
lean_dec_ref(v_fullDeclView_2913_);
lean_dec_ref_known(v_x_2895_, 1);
v___x_2916_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(v_val_2896_, v_givenNameView_2894_, v_fullDeclName_2914_, v_currNamespace_2893_);
lean_dec(v_fullDeclName_2914_);
return v___x_2916_;
}
else
{
lean_object* v___x_2917_; lean_object* v_localDeclNameView_2918_; uint8_t v___x_2919_; 
lean_dec(v_fullDeclName_2914_);
lean_dec(v_currNamespace_2893_);
v___x_2917_ = l_Lean_LocalDecl_userName(v_val_2896_);
v_localDeclNameView_2918_ = l_Lean_extractMacroScopes(v___x_2917_);
v___x_2919_ = l_Lean_MacroScopesView_isSuffixOf(v_localDeclNameView_2918_, v_givenNameView_2894_);
lean_dec_ref(v_localDeclNameView_2918_);
if (v___x_2919_ == 0)
{
lean_object* v___x_2920_; 
lean_dec_ref(v_fullDeclView_2913_);
lean_dec_ref_known(v_x_2895_, 1);
lean_dec_ref(v_givenNameView_2894_);
v___x_2920_ = lean_box(0);
return v___x_2920_;
}
else
{
uint8_t v___x_2921_; 
v___x_2921_ = l_Lean_MacroScopesView_isSuffixOf(v_givenNameView_2894_, v_fullDeclView_2913_);
lean_dec_ref(v_fullDeclView_2913_);
lean_dec_ref(v_givenNameView_2894_);
if (v___x_2921_ == 0)
{
lean_object* v___x_2922_; 
lean_dec_ref_known(v_x_2895_, 1);
v___x_2922_ = lean_box(0);
return v___x_2922_;
}
else
{
return v_x_2895_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2927_; 
lean_inc(v_val_2896_);
lean_dec(v___x_2900_);
lean_dec_ref_known(v_x_2895_, 1);
lean_dec_ref(v_givenNameView_2894_);
lean_dec(v_currNamespace_2893_);
v___x_2927_ = lean_apply_2(v_matchLocalDecl_x3f_2888_, v_val_2896_, v_givenName_2889_);
return v___x_2927_;
}
}
else
{
lean_object* v___x_2928_; 
lean_dec_ref_known(v_x_2895_, 1);
lean_dec_ref(v_givenNameView_2894_);
lean_dec(v_currNamespace_2893_);
lean_dec(v_auxDeclToFullName_2892_);
lean_dec_ref(v___f_2891_);
lean_dec(v_givenName_2889_);
lean_dec_ref(v_matchLocalDecl_x3f_2888_);
v___x_2928_ = lean_box(0);
return v___x_2928_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__1___boxed(lean_object* v_matchLocalDecl_x3f_2929_, lean_object* v_givenName_2930_, lean_object* v_skipAuxDecl_2931_, lean_object* v___f_2932_, lean_object* v_auxDeclToFullName_2933_, lean_object* v_currNamespace_2934_, lean_object* v_givenNameView_2935_, lean_object* v_x_2936_){
_start:
{
uint8_t v_skipAuxDecl_boxed_2937_; lean_object* v_res_2938_; 
v_skipAuxDecl_boxed_2937_ = lean_unbox(v_skipAuxDecl_2931_);
v_res_2938_ = l_Lean_resolveLocalName___redArg___lam__1(v_matchLocalDecl_x3f_2929_, v_givenName_2930_, v_skipAuxDecl_boxed_2937_, v___f_2932_, v_auxDeclToFullName_2933_, v_currNamespace_2934_, v_givenNameView_2935_, v_x_2936_);
return v_res_2938_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__2(lean_object* v_localDecl_x3f_2939_, lean_object* v_matchLocalDecl_x3f_2940_, lean_object* v_givenName_2941_, lean_object* v_x_2942_){
_start:
{
if (lean_obj_tag(v_x_2942_) == 0)
{
lean_dec(v_givenName_2941_);
lean_dec_ref(v_matchLocalDecl_x3f_2940_);
return v_x_2942_;
}
else
{
lean_object* v_val_2943_; uint8_t v___x_2944_; 
v_val_2943_ = lean_ctor_get(v_x_2942_, 0);
lean_inc(v_val_2943_);
lean_dec_ref_known(v_x_2942_, 1);
v___x_2944_ = l_Lean_LocalDecl_isAuxDecl(v_val_2943_);
if (v___x_2944_ == 0)
{
lean_dec(v_val_2943_);
lean_dec(v_givenName_2941_);
lean_dec_ref(v_matchLocalDecl_x3f_2940_);
lean_inc(v_localDecl_x3f_2939_);
return v_localDecl_x3f_2939_;
}
else
{
lean_object* v___x_2945_; 
v___x_2945_ = lean_apply_2(v_matchLocalDecl_x3f_2940_, v_val_2943_, v_givenName_2941_);
return v___x_2945_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__2___boxed(lean_object* v_localDecl_x3f_2946_, lean_object* v_matchLocalDecl_x3f_2947_, lean_object* v_givenName_2948_, lean_object* v_x_2949_){
_start:
{
lean_object* v_res_2950_; 
v_res_2950_ = l_Lean_resolveLocalName___redArg___lam__2(v_localDecl_x3f_2946_, v_matchLocalDecl_x3f_2947_, v_givenName_2948_, v_x_2949_);
lean_dec(v_localDecl_x3f_2946_);
return v_res_2950_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__3(lean_object* v_lctx_2970_, lean_object* v_matchLocalDecl_x3f_2971_, lean_object* v___f_2972_, lean_object* v_auxDeclToFullName_2973_, lean_object* v_currNamespace_2974_, lean_object* v_givenNameView_2975_, uint8_t v_skipAuxDecl_2976_){
_start:
{
lean_object* v_decls_2977_; lean_object* v_givenName_2978_; lean_object* v___x_2979_; lean_object* v___f_2980_; lean_object* v___x_2981_; lean_object* v_localDecl_x3f_2982_; 
v_decls_2977_ = lean_ctor_get(v_lctx_2970_, 1);
lean_inc_ref_n(v_decls_2977_, 2);
lean_dec_ref(v_lctx_2970_);
lean_inc_ref(v_givenNameView_2975_);
v_givenName_2978_ = l_Lean_MacroScopesView_review(v_givenNameView_2975_);
v___x_2979_ = lean_box(v_skipAuxDecl_2976_);
lean_inc(v_givenName_2978_);
lean_inc_ref(v_matchLocalDecl_x3f_2971_);
v___f_2980_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_2980_, 0, v_matchLocalDecl_x3f_2971_);
lean_closure_set(v___f_2980_, 1, v_givenName_2978_);
lean_closure_set(v___f_2980_, 2, v___x_2979_);
lean_closure_set(v___f_2980_, 3, v___f_2972_);
lean_closure_set(v___f_2980_, 4, v_auxDeclToFullName_2973_);
lean_closure_set(v___f_2980_, 5, v_currNamespace_2974_);
lean_closure_set(v___f_2980_, 6, v_givenNameView_2975_);
v___x_2981_ = ((lean_object*)(l_Lean_resolveLocalName___redArg___lam__3___closed__9));
v_localDecl_x3f_2982_ = l_Lean_PersistentArray_findSomeRevM_x3f___redArg(v___x_2981_, v_decls_2977_, v___f_2980_);
if (lean_obj_tag(v_localDecl_x3f_2982_) == 0)
{
if (v_skipAuxDecl_2976_ == 0)
{
lean_object* v___f_2983_; lean_object* v___x_2984_; 
v___f_2983_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_2983_, 0, v_localDecl_x3f_2982_);
lean_closure_set(v___f_2983_, 1, v_matchLocalDecl_x3f_2971_);
lean_closure_set(v___f_2983_, 2, v_givenName_2978_);
v___x_2984_ = l_Lean_PersistentArray_findSomeRevM_x3f___redArg(v___x_2981_, v_decls_2977_, v___f_2983_);
return v___x_2984_;
}
else
{
lean_dec(v_givenName_2978_);
lean_dec_ref(v_decls_2977_);
lean_dec_ref(v_matchLocalDecl_x3f_2971_);
return v_localDecl_x3f_2982_;
}
}
else
{
lean_dec(v_givenName_2978_);
lean_dec_ref(v_decls_2977_);
lean_dec_ref(v_matchLocalDecl_x3f_2971_);
return v_localDecl_x3f_2982_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__3___boxed(lean_object* v_lctx_2985_, lean_object* v_matchLocalDecl_x3f_2986_, lean_object* v___f_2987_, lean_object* v_auxDeclToFullName_2988_, lean_object* v_currNamespace_2989_, lean_object* v_givenNameView_2990_, lean_object* v_skipAuxDecl_2991_){
_start:
{
uint8_t v_skipAuxDecl_boxed_2992_; lean_object* v_res_2993_; 
v_skipAuxDecl_boxed_2992_ = lean_unbox(v_skipAuxDecl_2991_);
v_res_2993_ = l_Lean_resolveLocalName___redArg___lam__3(v_lctx_2985_, v_matchLocalDecl_x3f_2986_, v___f_2987_, v_auxDeclToFullName_2988_, v_currNamespace_2989_, v_givenNameView_2990_, v_skipAuxDecl_boxed_2992_);
return v_res_2993_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__4(lean_object* v_n_2994_, lean_object* v_lctx_2995_, lean_object* v_matchLocalDecl_x3f_2996_, lean_object* v___f_2997_, lean_object* v_auxDeclToFullName_2998_, lean_object* v_inst_2999_, lean_object* v_inst_3000_, lean_object* v_inst_3001_, lean_object* v_inst_3002_, lean_object* v_inst_3003_, lean_object* v_inst_3004_, lean_object* v_currNamespace_3005_){
_start:
{
lean_object* v_view_3006_; lean_object* v_name_3007_; lean_object* v_findLocalDecl_x3f_3008_; lean_object* v___x_3009_; uint8_t v___x_3010_; lean_object* v___x_3011_; 
v_view_3006_ = l_Lean_extractMacroScopes(v_n_2994_);
v_name_3007_ = lean_ctor_get(v_view_3006_, 0);
lean_inc(v_name_3007_);
v_findLocalDecl_x3f_3008_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__3___boxed), 7, 5);
lean_closure_set(v_findLocalDecl_x3f_3008_, 0, v_lctx_2995_);
lean_closure_set(v_findLocalDecl_x3f_3008_, 1, v_matchLocalDecl_x3f_2996_);
lean_closure_set(v_findLocalDecl_x3f_3008_, 2, v___f_2997_);
lean_closure_set(v_findLocalDecl_x3f_3008_, 3, v_auxDeclToFullName_2998_);
lean_closure_set(v_findLocalDecl_x3f_3008_, 4, v_currNamespace_3005_);
v___x_3009_ = lean_box(0);
v___x_3010_ = 0;
v___x_3011_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(v_inst_2999_, v_inst_3000_, v_inst_3001_, v_inst_3002_, v_inst_3003_, v_inst_3004_, v_view_3006_, v_findLocalDecl_x3f_3008_, v_name_3007_, v___x_3009_, v___x_3010_);
return v___x_3011_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__5(lean_object* v_inst_3012_, lean_object* v_n_3013_, lean_object* v_lctx_3014_, lean_object* v_matchLocalDecl_x3f_3015_, lean_object* v___f_3016_, lean_object* v_inst_3017_, lean_object* v_inst_3018_, lean_object* v_inst_3019_, lean_object* v_inst_3020_, lean_object* v_inst_3021_, lean_object* v_toBind_3022_, lean_object* v_____do__lift_3023_){
_start:
{
lean_object* v_auxDeclToFullName_3024_; lean_object* v_getCurrNamespace_3025_; lean_object* v___f_3026_; lean_object* v___x_3027_; 
v_auxDeclToFullName_3024_ = lean_ctor_get(v_____do__lift_3023_, 2);
lean_inc(v_auxDeclToFullName_3024_);
lean_dec_ref(v_____do__lift_3023_);
v_getCurrNamespace_3025_ = lean_ctor_get(v_inst_3012_, 0);
lean_inc(v_getCurrNamespace_3025_);
v___f_3026_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__4), 12, 11);
lean_closure_set(v___f_3026_, 0, v_n_3013_);
lean_closure_set(v___f_3026_, 1, v_lctx_3014_);
lean_closure_set(v___f_3026_, 2, v_matchLocalDecl_x3f_3015_);
lean_closure_set(v___f_3026_, 3, v___f_3016_);
lean_closure_set(v___f_3026_, 4, v_auxDeclToFullName_3024_);
lean_closure_set(v___f_3026_, 5, v_inst_3017_);
lean_closure_set(v___f_3026_, 6, v_inst_3012_);
lean_closure_set(v___f_3026_, 7, v_inst_3018_);
lean_closure_set(v___f_3026_, 8, v_inst_3019_);
lean_closure_set(v___f_3026_, 9, v_inst_3020_);
lean_closure_set(v___f_3026_, 10, v_inst_3021_);
v___x_3027_ = lean_apply_4(v_toBind_3022_, lean_box(0), lean_box(0), v_getCurrNamespace_3025_, v___f_3026_);
return v___x_3027_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__6(lean_object* v_inst_3028_, lean_object* v_n_3029_, lean_object* v_matchLocalDecl_x3f_3030_, lean_object* v___f_3031_, lean_object* v_inst_3032_, lean_object* v_inst_3033_, lean_object* v_inst_3034_, lean_object* v_inst_3035_, lean_object* v_inst_3036_, lean_object* v_toBind_3037_, lean_object* v_inst_3038_, lean_object* v_lctx_3039_){
_start:
{
lean_object* v___f_3040_; lean_object* v___x_3041_; 
lean_inc(v_toBind_3037_);
v___f_3040_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__5), 12, 11);
lean_closure_set(v___f_3040_, 0, v_inst_3028_);
lean_closure_set(v___f_3040_, 1, v_n_3029_);
lean_closure_set(v___f_3040_, 2, v_lctx_3039_);
lean_closure_set(v___f_3040_, 3, v_matchLocalDecl_x3f_3030_);
lean_closure_set(v___f_3040_, 4, v___f_3031_);
lean_closure_set(v___f_3040_, 5, v_inst_3032_);
lean_closure_set(v___f_3040_, 6, v_inst_3033_);
lean_closure_set(v___f_3040_, 7, v_inst_3034_);
lean_closure_set(v___f_3040_, 8, v_inst_3035_);
lean_closure_set(v___f_3040_, 9, v_inst_3036_);
lean_closure_set(v___f_3040_, 10, v_toBind_3037_);
v___x_3041_ = lean_apply_4(v_toBind_3037_, lean_box(0), lean_box(0), v_inst_3038_, v___f_3040_);
return v___x_3041_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg(lean_object* v_inst_3044_, lean_object* v_inst_3045_, lean_object* v_inst_3046_, lean_object* v_inst_3047_, lean_object* v_inst_3048_, lean_object* v_inst_3049_, lean_object* v_inst_3050_, lean_object* v_n_3051_){
_start:
{
lean_object* v_toBind_3052_; lean_object* v___f_3053_; lean_object* v_matchLocalDecl_x3f_3054_; lean_object* v___f_3055_; lean_object* v___x_3056_; 
v_toBind_3052_ = lean_ctor_get(v_inst_3044_, 1);
lean_inc_n(v_toBind_3052_, 2);
v___f_3053_ = ((lean_object*)(l_Lean_resolveLocalName___redArg___closed__0));
v_matchLocalDecl_x3f_3054_ = ((lean_object*)(l_Lean_resolveLocalName___redArg___closed__1));
lean_inc(v_inst_3050_);
v___f_3055_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__6), 12, 11);
lean_closure_set(v___f_3055_, 0, v_inst_3045_);
lean_closure_set(v___f_3055_, 1, v_n_3051_);
lean_closure_set(v___f_3055_, 2, v_matchLocalDecl_x3f_3054_);
lean_closure_set(v___f_3055_, 3, v___f_3053_);
lean_closure_set(v___f_3055_, 4, v_inst_3044_);
lean_closure_set(v___f_3055_, 5, v_inst_3046_);
lean_closure_set(v___f_3055_, 6, v_inst_3047_);
lean_closure_set(v___f_3055_, 7, v_inst_3048_);
lean_closure_set(v___f_3055_, 8, v_inst_3049_);
lean_closure_set(v___f_3055_, 9, v_toBind_3052_);
lean_closure_set(v___f_3055_, 10, v_inst_3050_);
v___x_3056_ = lean_apply_4(v_toBind_3052_, lean_box(0), lean_box(0), v_inst_3050_, v___f_3055_);
return v___x_3056_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName(lean_object* v_m_3057_, lean_object* v_inst_3058_, lean_object* v_inst_3059_, lean_object* v_inst_3060_, lean_object* v_inst_3061_, lean_object* v_inst_3062_, lean_object* v_inst_3063_, lean_object* v_inst_3064_, lean_object* v_n_3065_){
_start:
{
lean_object* v___x_3066_; 
v___x_3066_ = l_Lean_resolveLocalName___redArg(v_inst_3058_, v_inst_3059_, v_inst_3060_, v_inst_3061_, v_inst_3062_, v_inst_3063_, v_inst_3064_, v_n_3065_);
return v___x_3066_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0(lean_object* v_toPure_3067_, uint8_t v_____do__lift_3068_){
_start:
{
lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; 
v___x_3069_ = lean_box(v_____do__lift_3068_);
v___x_3070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3070_, 0, v___x_3069_);
v___x_3071_ = lean_apply_2(v_toPure_3067_, lean_box(0), v___x_3070_);
return v___x_3071_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0___boxed(lean_object* v_toPure_3072_, lean_object* v_____do__lift_3073_){
_start:
{
uint8_t v_____do__lift_1060__boxed_3074_; lean_object* v_res_3075_; 
v_____do__lift_1060__boxed_3074_ = lean_unbox(v_____do__lift_3073_);
v_res_3075_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0(v_toPure_3072_, v_____do__lift_1060__boxed_3074_);
return v_res_3075_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__1(lean_object* v_toPure_3076_, lean_object* v___y_3077_, lean_object* v_____do__lift_3078_){
_start:
{
if (lean_obj_tag(v_____do__lift_3078_) == 0)
{
lean_object* v___x_3079_; lean_object* v___x_3080_; 
lean_dec(v___y_3077_);
v___x_3079_ = lean_box(0);
v___x_3080_ = lean_apply_2(v_toPure_3076_, lean_box(0), v___x_3079_);
return v___x_3080_;
}
else
{
lean_object* v___x_3082_; uint8_t v_isShared_3083_; uint8_t v_isSharedCheck_3088_; 
v_isSharedCheck_3088_ = !lean_is_exclusive(v_____do__lift_3078_);
if (v_isSharedCheck_3088_ == 0)
{
lean_object* v_unused_3089_; 
v_unused_3089_ = lean_ctor_get(v_____do__lift_3078_, 0);
lean_dec(v_unused_3089_);
v___x_3082_ = v_____do__lift_3078_;
v_isShared_3083_ = v_isSharedCheck_3088_;
goto v_resetjp_3081_;
}
else
{
lean_dec(v_____do__lift_3078_);
v___x_3082_ = lean_box(0);
v_isShared_3083_ = v_isSharedCheck_3088_;
goto v_resetjp_3081_;
}
v_resetjp_3081_:
{
lean_object* v___x_3085_; 
if (v_isShared_3083_ == 0)
{
lean_ctor_set(v___x_3082_, 0, v___y_3077_);
v___x_3085_ = v___x_3082_;
goto v_reusejp_3084_;
}
else
{
lean_object* v_reuseFailAlloc_3087_; 
v_reuseFailAlloc_3087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3087_, 0, v___y_3077_);
v___x_3085_ = v_reuseFailAlloc_3087_;
goto v_reusejp_3084_;
}
v_reusejp_3084_:
{
lean_object* v___x_3086_; 
v___x_3086_ = lean_apply_2(v_toPure_3076_, lean_box(0), v___x_3085_);
return v___x_3086_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2(lean_object* v_toPure_3092_, lean_object* v_toBind_3093_, lean_object* v___f_3094_, lean_object* v_____do__lift_3095_){
_start:
{
if (lean_obj_tag(v_____do__lift_3095_) == 0)
{
lean_object* v___x_3096_; lean_object* v___x_3097_; 
lean_dec(v___f_3094_);
lean_dec(v_toBind_3093_);
v___x_3096_ = lean_box(0);
v___x_3097_ = lean_apply_2(v_toPure_3092_, lean_box(0), v___x_3096_);
return v___x_3097_;
}
else
{
lean_object* v_val_3098_; uint8_t v___x_3099_; 
v_val_3098_ = lean_ctor_get(v_____do__lift_3095_, 0);
v___x_3099_ = lean_unbox(v_val_3098_);
if (v___x_3099_ == 0)
{
lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; 
v___x_3100_ = lean_box(0);
v___x_3101_ = lean_apply_2(v_toPure_3092_, lean_box(0), v___x_3100_);
v___x_3102_ = lean_apply_4(v_toBind_3093_, lean_box(0), lean_box(0), v___x_3101_, v___f_3094_);
return v___x_3102_;
}
else
{
lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; 
v___x_3103_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0));
v___x_3104_ = lean_apply_2(v_toPure_3092_, lean_box(0), v___x_3103_);
v___x_3105_ = lean_apply_4(v_toBind_3093_, lean_box(0), lean_box(0), v___x_3104_, v___f_3094_);
return v___x_3105_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___boxed(lean_object* v_toPure_3106_, lean_object* v_toBind_3107_, lean_object* v___f_3108_, lean_object* v_____do__lift_3109_){
_start:
{
lean_object* v_res_3110_; 
v_res_3110_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2(v_toPure_3106_, v_toBind_3107_, v___f_3108_, v_____do__lift_3109_);
lean_dec(v_____do__lift_3109_);
return v_res_3110_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3(lean_object* v_toPure_3111_, lean_object* v_filter_3112_, lean_object* v___y_3113_, lean_object* v_toBind_3114_, lean_object* v___f_3115_, lean_object* v___f_3116_, lean_object* v_____do__lift_3117_){
_start:
{
if (lean_obj_tag(v_____do__lift_3117_) == 0)
{
lean_object* v___x_3118_; lean_object* v___x_3119_; 
lean_dec(v___f_3116_);
lean_dec(v___f_3115_);
lean_dec(v_toBind_3114_);
lean_dec(v___y_3113_);
lean_dec(v_filter_3112_);
v___x_3118_ = lean_box(0);
v___x_3119_ = lean_apply_2(v_toPure_3111_, lean_box(0), v___x_3118_);
return v___x_3119_;
}
else
{
lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; 
lean_dec(v_toPure_3111_);
v___x_3120_ = lean_apply_1(v_filter_3112_, v___y_3113_);
lean_inc(v_toBind_3114_);
v___x_3121_ = lean_apply_4(v_toBind_3114_, lean_box(0), lean_box(0), v___x_3120_, v___f_3115_);
v___x_3122_ = lean_apply_4(v_toBind_3114_, lean_box(0), lean_box(0), v___x_3121_, v___f_3116_);
return v___x_3122_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3___boxed(lean_object* v_toPure_3123_, lean_object* v_filter_3124_, lean_object* v___y_3125_, lean_object* v_toBind_3126_, lean_object* v___f_3127_, lean_object* v___f_3128_, lean_object* v_____do__lift_3129_){
_start:
{
lean_object* v_res_3130_; 
v_res_3130_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3(v_toPure_3123_, v_filter_3124_, v___y_3125_, v_toBind_3126_, v___f_3127_, v___f_3128_, v_____do__lift_3129_);
lean_dec(v_____do__lift_3129_);
return v_res_3130_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4(lean_object* v_toPure_3131_, lean_object* v_n_u2080_3132_, lean_object* v_toBind_3133_, lean_object* v___f_3134_, lean_object* v_____do__lift_3135_){
_start:
{
if (lean_obj_tag(v_____do__lift_3135_) == 0)
{
lean_object* v___x_3139_; lean_object* v___x_3140_; 
lean_dec(v___f_3134_);
lean_dec(v_toBind_3133_);
v___x_3139_ = lean_box(0);
v___x_3140_ = lean_apply_2(v_toPure_3131_, lean_box(0), v___x_3139_);
return v___x_3140_;
}
else
{
lean_object* v_val_3141_; 
v_val_3141_ = lean_ctor_get(v_____do__lift_3135_, 0);
if (lean_obj_tag(v_val_3141_) == 1)
{
lean_object* v_tail_3142_; 
v_tail_3142_ = lean_ctor_get(v_val_3141_, 1);
if (lean_obj_tag(v_tail_3142_) == 0)
{
lean_object* v_head_3143_; lean_object* v_fst_3144_; uint8_t v___x_3145_; 
v_head_3143_ = lean_ctor_get(v_val_3141_, 0);
v_fst_3144_ = lean_ctor_get(v_head_3143_, 0);
v___x_3145_ = lean_name_eq(v_fst_3144_, v_n_u2080_3132_);
if (v___x_3145_ == 0)
{
lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; 
v___x_3146_ = lean_box(0);
v___x_3147_ = lean_apply_2(v_toPure_3131_, lean_box(0), v___x_3146_);
v___x_3148_ = lean_apply_4(v_toBind_3133_, lean_box(0), lean_box(0), v___x_3147_, v___f_3134_);
return v___x_3148_;
}
else
{
lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; 
v___x_3149_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0));
v___x_3150_ = lean_apply_2(v_toPure_3131_, lean_box(0), v___x_3149_);
v___x_3151_ = lean_apply_4(v_toBind_3133_, lean_box(0), lean_box(0), v___x_3150_, v___f_3134_);
return v___x_3151_;
}
}
else
{
lean_dec(v___f_3134_);
lean_dec(v_toBind_3133_);
goto v___jp_3136_;
}
}
else
{
lean_dec(v___f_3134_);
lean_dec(v_toBind_3133_);
goto v___jp_3136_;
}
}
v___jp_3136_:
{
lean_object* v___x_3137_; lean_object* v___x_3138_; 
v___x_3137_ = lean_box(0);
v___x_3138_ = lean_apply_2(v_toPure_3131_, lean_box(0), v___x_3137_);
return v___x_3138_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4___boxed(lean_object* v_toPure_3152_, lean_object* v_n_u2080_3153_, lean_object* v_toBind_3154_, lean_object* v___f_3155_, lean_object* v_____do__lift_3156_){
_start:
{
lean_object* v_res_3157_; 
v_res_3157_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4(v_toPure_3152_, v_n_u2080_3153_, v_toBind_3154_, v___f_3155_, v_____do__lift_3156_);
lean_dec(v_____do__lift_3156_);
lean_dec(v_n_u2080_3153_);
return v_res_3157_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(lean_object* v_inst_3158_, lean_object* v_inst_3159_, lean_object* v_inst_3160_, lean_object* v_inst_3161_, lean_object* v_inst_3162_, lean_object* v_inst_3163_, lean_object* v_n_u2080_3164_, lean_object* v_filter_3165_, lean_object* v_view_x3f_3166_, lean_object* v_n_3167_){
_start:
{
lean_object* v___f_3168_; lean_object* v___f_3169_; lean_object* v___f_3170_; lean_object* v___f_3171_; lean_object* v___f_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v_toApplicative_3180_; lean_object* v_getEnv_3181_; lean_object* v_modifyEnv_3182_; lean_object* v___x_3184_; uint8_t v_isShared_3185_; uint8_t v_isSharedCheck_3220_; 
lean_inc_ref_n(v_inst_3158_, 8);
v___f_3168_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_3168_, 0, v_inst_3158_);
v___f_3169_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_3169_, 0, v_inst_3158_);
v___f_3170_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__6), 5, 1);
lean_closure_set(v___f_3170_, 0, v_inst_3158_);
v___f_3171_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_3171_, 0, v_inst_3158_);
v___f_3172_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__11), 5, 1);
lean_closure_set(v___f_3172_, 0, v_inst_3158_);
v___x_3173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3173_, 0, v___f_3168_);
lean_ctor_set(v___x_3173_, 1, v___f_3169_);
v___x_3174_ = lean_alloc_closure((void*)(l_OptionT_pure), 4, 2);
lean_closure_set(v___x_3174_, 0, lean_box(0));
lean_closure_set(v___x_3174_, 1, v_inst_3158_);
v___x_3175_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3175_, 0, v___x_3173_);
lean_ctor_set(v___x_3175_, 1, v___x_3174_);
lean_ctor_set(v___x_3175_, 2, v___f_3170_);
lean_ctor_set(v___x_3175_, 3, v___f_3171_);
lean_ctor_set(v___x_3175_, 4, v___f_3172_);
v___x_3176_ = lean_alloc_closure((void*)(l_OptionT_bind), 6, 2);
lean_closure_set(v___x_3176_, 0, lean_box(0));
lean_closure_set(v___x_3176_, 1, v_inst_3158_);
v___x_3177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3177_, 0, v___x_3175_);
lean_ctor_set(v___x_3177_, 1, v___x_3176_);
v___x_3178_ = lean_alloc_closure((void*)(l_OptionT_lift), 4, 2);
lean_closure_set(v___x_3178_, 0, lean_box(0));
lean_closure_set(v___x_3178_, 1, v_inst_3158_);
lean_inc_ref(v___x_3178_);
v___x_3179_ = l_Lean_instMonadResolveNameOfMonadLift___redArg(v___x_3178_, v_inst_3159_);
v_toApplicative_3180_ = lean_ctor_get(v_inst_3158_, 0);
lean_inc_ref(v_toApplicative_3180_);
v_getEnv_3181_ = lean_ctor_get(v_inst_3160_, 0);
v_modifyEnv_3182_ = lean_ctor_get(v_inst_3160_, 1);
v_isSharedCheck_3220_ = !lean_is_exclusive(v_inst_3160_);
if (v_isSharedCheck_3220_ == 0)
{
v___x_3184_ = v_inst_3160_;
v_isShared_3185_ = v_isSharedCheck_3220_;
goto v_resetjp_3183_;
}
else
{
lean_inc(v_modifyEnv_3182_);
lean_inc(v_getEnv_3181_);
lean_dec(v_inst_3160_);
v___x_3184_ = lean_box(0);
v_isShared_3185_ = v_isSharedCheck_3220_;
goto v_resetjp_3183_;
}
v_resetjp_3183_:
{
lean_object* v_toBind_3186_; lean_object* v_toPure_3187_; lean_object* v___f_3188_; lean_object* v___f_3189_; lean_object* v___f_3190_; lean_object* v___x_3191_; lean_object* v___x_3193_; 
v_toBind_3186_ = lean_ctor_get(v_inst_3158_, 1);
lean_inc_n(v_toBind_3186_, 2);
lean_dec_ref(v_inst_3158_);
v_toPure_3187_ = lean_ctor_get(v_toApplicative_3180_, 1);
lean_inc_n(v_toPure_3187_, 3);
lean_dec_ref(v_toApplicative_3180_);
lean_inc_ref(v___x_3178_);
v___f_3188_ = lean_alloc_closure((void*)(l_Lean_instMonadEnvOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3188_, 0, v_modifyEnv_3182_);
lean_closure_set(v___f_3188_, 1, v___x_3178_);
v___f_3189_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3189_, 0, v_toPure_3187_);
v___f_3190_ = lean_alloc_closure((void*)(l_OptionT_lift___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3190_, 0, v_toPure_3187_);
v___x_3191_ = lean_apply_4(v_toBind_3186_, lean_box(0), lean_box(0), v_getEnv_3181_, v___f_3190_);
if (v_isShared_3185_ == 0)
{
lean_ctor_set(v___x_3184_, 1, v___f_3188_);
lean_ctor_set(v___x_3184_, 0, v___x_3191_);
v___x_3193_ = v___x_3184_;
goto v_reusejp_3192_;
}
else
{
lean_object* v_reuseFailAlloc_3219_; 
v_reuseFailAlloc_3219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3219_, 0, v___x_3191_);
lean_ctor_set(v_reuseFailAlloc_3219_, 1, v___f_3188_);
v___x_3193_ = v_reuseFailAlloc_3219_;
goto v_reusejp_3192_;
}
v_reusejp_3192_:
{
lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___f_3196_; lean_object* v___y_3198_; 
lean_inc_ref_n(v___x_3178_, 2);
v___x_3194_ = l_Lean_instMonadOptionsOfMonadLift___redArg(v___x_3178_, v_inst_3161_);
v___x_3195_ = l_Lean_instMonadLogOfMonadLift___redArg(v___x_3178_, v_inst_3162_);
v___f_3196_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3196_, 0, v_inst_3163_);
lean_closure_set(v___f_3196_, 1, v___x_3178_);
if (lean_obj_tag(v_view_x3f_3166_) == 1)
{
lean_object* v_val_3206_; lean_object* v_imported_3207_; lean_object* v_ctx_3208_; lean_object* v_scopes_3209_; lean_object* v___x_3211_; uint8_t v_isShared_3212_; uint8_t v_isSharedCheck_3217_; 
v_val_3206_ = lean_ctor_get(v_view_x3f_3166_, 0);
lean_inc(v_val_3206_);
lean_dec_ref_known(v_view_x3f_3166_, 1);
v_imported_3207_ = lean_ctor_get(v_val_3206_, 1);
v_ctx_3208_ = lean_ctor_get(v_val_3206_, 2);
v_scopes_3209_ = lean_ctor_get(v_val_3206_, 3);
v_isSharedCheck_3217_ = !lean_is_exclusive(v_val_3206_);
if (v_isSharedCheck_3217_ == 0)
{
lean_object* v_unused_3218_; 
v_unused_3218_ = lean_ctor_get(v_val_3206_, 0);
lean_dec(v_unused_3218_);
v___x_3211_ = v_val_3206_;
v_isShared_3212_ = v_isSharedCheck_3217_;
goto v_resetjp_3210_;
}
else
{
lean_inc(v_scopes_3209_);
lean_inc(v_ctx_3208_);
lean_inc(v_imported_3207_);
lean_dec(v_val_3206_);
v___x_3211_ = lean_box(0);
v_isShared_3212_ = v_isSharedCheck_3217_;
goto v_resetjp_3210_;
}
v_resetjp_3210_:
{
lean_object* v___x_3214_; 
if (v_isShared_3212_ == 0)
{
lean_ctor_set(v___x_3211_, 0, v_n_3167_);
v___x_3214_ = v___x_3211_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3216_; 
v_reuseFailAlloc_3216_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3216_, 0, v_n_3167_);
lean_ctor_set(v_reuseFailAlloc_3216_, 1, v_imported_3207_);
lean_ctor_set(v_reuseFailAlloc_3216_, 2, v_ctx_3208_);
lean_ctor_set(v_reuseFailAlloc_3216_, 3, v_scopes_3209_);
v___x_3214_ = v_reuseFailAlloc_3216_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
lean_object* v___x_3215_; 
v___x_3215_ = l_Lean_MacroScopesView_review(v___x_3214_);
v___y_3198_ = v___x_3215_;
goto v___jp_3197_;
}
}
}
else
{
lean_dec(v_view_x3f_3166_);
v___y_3198_ = v_n_3167_;
goto v___jp_3197_;
}
v___jp_3197_:
{
lean_object* v___f_3199_; lean_object* v___f_3200_; lean_object* v___f_3201_; lean_object* v___f_3202_; uint8_t v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; 
lean_inc_n(v___y_3198_, 2);
lean_inc_n(v_toPure_3187_, 3);
v___f_3199_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__1), 3, 2);
lean_closure_set(v___f_3199_, 0, v_toPure_3187_);
lean_closure_set(v___f_3199_, 1, v___y_3198_);
lean_inc_n(v_toBind_3186_, 3);
v___f_3200_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_3200_, 0, v_toPure_3187_);
lean_closure_set(v___f_3200_, 1, v_toBind_3186_);
lean_closure_set(v___f_3200_, 2, v___f_3199_);
v___f_3201_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_3201_, 0, v_toPure_3187_);
lean_closure_set(v___f_3201_, 1, v_filter_3165_);
lean_closure_set(v___f_3201_, 2, v___y_3198_);
lean_closure_set(v___f_3201_, 3, v_toBind_3186_);
lean_closure_set(v___f_3201_, 4, v___f_3189_);
lean_closure_set(v___f_3201_, 5, v___f_3200_);
v___f_3202_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4___boxed), 5, 4);
lean_closure_set(v___f_3202_, 0, v_toPure_3187_);
lean_closure_set(v___f_3202_, 1, v_n_u2080_3164_);
lean_closure_set(v___f_3202_, 2, v_toBind_3186_);
lean_closure_set(v___f_3202_, 3, v___f_3201_);
v___x_3203_ = 0;
v___x_3204_ = l_Lean_resolveGlobalName___redArg(v___x_3177_, v___x_3179_, v___x_3193_, v___x_3194_, v___x_3195_, v___f_3196_, v___y_3198_, v___x_3203_);
v___x_3205_ = lean_apply_4(v_toBind_3186_, lean_box(0), lean_box(0), v___x_3204_, v___f_3202_);
return v___x_3205_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve(lean_object* v_m_3221_, lean_object* v_inst_3222_, lean_object* v_inst_3223_, lean_object* v_inst_3224_, lean_object* v_inst_3225_, lean_object* v_inst_3226_, lean_object* v_inst_3227_, lean_object* v_n_u2080_3228_, lean_object* v_filter_3229_, lean_object* v_view_x3f_3230_, lean_object* v_n_3231_){
_start:
{
lean_object* v___x_3232_; 
v___x_3232_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(v_inst_3222_, v_inst_3223_, v_inst_3224_, v_inst_3225_, v_inst_3226_, v_inst_3227_, v_n_u2080_3228_, v_filter_3229_, v_view_x3f_3230_, v_n_3231_);
return v___x_3232_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0(lean_object* v_toPure_3237_, lean_object* v_____x_3238_){
_start:
{
if (lean_obj_tag(v_____x_3238_) == 0)
{
lean_object* v___x_3239_; lean_object* v___x_3240_; 
v___x_3239_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__1));
v___x_3240_ = lean_apply_2(v_toPure_3237_, lean_box(0), v___x_3239_);
return v___x_3240_;
}
else
{
lean_object* v___x_3241_; 
v___x_3241_ = lean_apply_2(v_toPure_3237_, lean_box(0), v_____x_3238_);
return v___x_3241_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__1(lean_object* v_toPure_3242_, lean_object* v_____do__lift_3243_){
_start:
{
if (lean_obj_tag(v_____do__lift_3243_) == 0)
{
lean_object* v___x_3244_; lean_object* v___x_3245_; 
v___x_3244_ = lean_box(0);
v___x_3245_ = lean_apply_2(v_toPure_3242_, lean_box(0), v___x_3244_);
return v___x_3245_;
}
else
{
lean_object* v_val_3246_; lean_object* v___x_3248_; uint8_t v_isShared_3249_; uint8_t v_isSharedCheck_3255_; 
v_val_3246_ = lean_ctor_get(v_____do__lift_3243_, 0);
v_isSharedCheck_3255_ = !lean_is_exclusive(v_____do__lift_3243_);
if (v_isSharedCheck_3255_ == 0)
{
v___x_3248_ = v_____do__lift_3243_;
v_isShared_3249_ = v_isSharedCheck_3255_;
goto v_resetjp_3247_;
}
else
{
lean_inc(v_val_3246_);
lean_dec(v_____do__lift_3243_);
v___x_3248_ = lean_box(0);
v_isShared_3249_ = v_isSharedCheck_3255_;
goto v_resetjp_3247_;
}
v_resetjp_3247_:
{
lean_object* v___x_3250_; lean_object* v___x_3252_; 
v___x_3250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3250_, 0, v_val_3246_);
if (v_isShared_3249_ == 0)
{
lean_ctor_set(v___x_3248_, 0, v___x_3250_);
v___x_3252_ = v___x_3248_;
goto v_reusejp_3251_;
}
else
{
lean_object* v_reuseFailAlloc_3254_; 
v_reuseFailAlloc_3254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3254_, 0, v___x_3250_);
v___x_3252_ = v_reuseFailAlloc_3254_;
goto v_reusejp_3251_;
}
v_reusejp_3251_:
{
lean_object* v___x_3253_; 
v___x_3253_ = lean_apply_2(v_toPure_3242_, lean_box(0), v___x_3252_);
return v___x_3253_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__2(lean_object* v_toPure_3256_, lean_object* v___x_3257_, lean_object* v_____do__lift_3258_){
_start:
{
if (lean_obj_tag(v_____do__lift_3258_) == 0)
{
lean_object* v___x_3259_; 
v___x_3259_ = lean_apply_2(v_toPure_3256_, lean_box(0), v___x_3257_);
return v___x_3259_;
}
else
{
lean_object* v_val_3260_; lean_object* v_fst_3261_; lean_object* v___x_3262_; 
lean_dec(v___x_3257_);
v_val_3260_ = lean_ctor_get(v_____do__lift_3258_, 0);
lean_inc(v_val_3260_);
lean_dec_ref_known(v_____do__lift_3258_, 1);
v_fst_3261_ = lean_ctor_get(v_val_3260_, 0);
lean_inc(v_fst_3261_);
lean_dec(v_val_3260_);
v___x_3262_ = lean_apply_2(v_toPure_3256_, lean_box(0), v_fst_3261_);
return v___x_3262_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__3(lean_object* v_toPure_3263_, lean_object* v___x_3264_, lean_object* v___x_3265_, lean_object* v_____do__lift_3266_){
_start:
{
if (lean_obj_tag(v_____do__lift_3266_) == 0)
{
lean_object* v___x_3267_; lean_object* v___x_3268_; 
lean_dec(v___x_3265_);
lean_dec(v___x_3264_);
v___x_3267_ = lean_box(0);
v___x_3268_ = lean_apply_2(v_toPure_3263_, lean_box(0), v___x_3267_);
return v___x_3268_;
}
else
{
lean_object* v_val_3269_; lean_object* v___x_3271_; uint8_t v_isShared_3272_; uint8_t v_isSharedCheck_3300_; 
v_val_3269_ = lean_ctor_get(v_____do__lift_3266_, 0);
v_isSharedCheck_3300_ = !lean_is_exclusive(v_____do__lift_3266_);
if (v_isSharedCheck_3300_ == 0)
{
v___x_3271_ = v_____do__lift_3266_;
v_isShared_3272_ = v_isSharedCheck_3300_;
goto v_resetjp_3270_;
}
else
{
lean_inc(v_val_3269_);
lean_dec(v_____do__lift_3266_);
v___x_3271_ = lean_box(0);
v_isShared_3272_ = v_isSharedCheck_3300_;
goto v_resetjp_3270_;
}
v_resetjp_3270_:
{
if (lean_obj_tag(v_val_3269_) == 0)
{
lean_object* v_a_3273_; lean_object* v___x_3275_; uint8_t v_isShared_3276_; uint8_t v_isSharedCheck_3286_; 
lean_dec(v___x_3265_);
v_a_3273_ = lean_ctor_get(v_val_3269_, 0);
v_isSharedCheck_3286_ = !lean_is_exclusive(v_val_3269_);
if (v_isSharedCheck_3286_ == 0)
{
v___x_3275_ = v_val_3269_;
v_isShared_3276_ = v_isSharedCheck_3286_;
goto v_resetjp_3274_;
}
else
{
lean_inc(v_a_3273_);
lean_dec(v_val_3269_);
v___x_3275_ = lean_box(0);
v_isShared_3276_ = v_isSharedCheck_3286_;
goto v_resetjp_3274_;
}
v_resetjp_3274_:
{
lean_object* v___x_3278_; 
if (v_isShared_3272_ == 0)
{
lean_ctor_set(v___x_3271_, 0, v_a_3273_);
v___x_3278_ = v___x_3271_;
goto v_reusejp_3277_;
}
else
{
lean_object* v_reuseFailAlloc_3285_; 
v_reuseFailAlloc_3285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3285_, 0, v_a_3273_);
v___x_3278_ = v_reuseFailAlloc_3285_;
goto v_reusejp_3277_;
}
v_reusejp_3277_:
{
lean_object* v___x_3279_; lean_object* v___x_3281_; 
v___x_3279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3279_, 0, v___x_3278_);
lean_ctor_set(v___x_3279_, 1, v___x_3264_);
if (v_isShared_3276_ == 0)
{
lean_ctor_set(v___x_3275_, 0, v___x_3279_);
v___x_3281_ = v___x_3275_;
goto v_reusejp_3280_;
}
else
{
lean_object* v_reuseFailAlloc_3284_; 
v_reuseFailAlloc_3284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3284_, 0, v___x_3279_);
v___x_3281_ = v_reuseFailAlloc_3284_;
goto v_reusejp_3280_;
}
v_reusejp_3280_:
{
lean_object* v___x_3282_; lean_object* v___x_3283_; 
v___x_3282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3282_, 0, v___x_3281_);
v___x_3283_ = lean_apply_2(v_toPure_3263_, lean_box(0), v___x_3282_);
return v___x_3283_;
}
}
}
}
else
{
lean_object* v___x_3288_; uint8_t v_isShared_3289_; uint8_t v_isSharedCheck_3298_; 
v_isSharedCheck_3298_ = !lean_is_exclusive(v_val_3269_);
if (v_isSharedCheck_3298_ == 0)
{
lean_object* v_unused_3299_; 
v_unused_3299_ = lean_ctor_get(v_val_3269_, 0);
lean_dec(v_unused_3299_);
v___x_3288_ = v_val_3269_;
v_isShared_3289_ = v_isSharedCheck_3298_;
goto v_resetjp_3287_;
}
else
{
lean_dec(v_val_3269_);
v___x_3288_ = lean_box(0);
v_isShared_3289_ = v_isSharedCheck_3298_;
goto v_resetjp_3287_;
}
v_resetjp_3287_:
{
lean_object* v___x_3290_; lean_object* v___x_3292_; 
v___x_3290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3290_, 0, v___x_3265_);
lean_ctor_set(v___x_3290_, 1, v___x_3264_);
if (v_isShared_3289_ == 0)
{
lean_ctor_set(v___x_3288_, 0, v___x_3290_);
v___x_3292_ = v___x_3288_;
goto v_reusejp_3291_;
}
else
{
lean_object* v_reuseFailAlloc_3297_; 
v_reuseFailAlloc_3297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3297_, 0, v___x_3290_);
v___x_3292_ = v_reuseFailAlloc_3297_;
goto v_reusejp_3291_;
}
v_reusejp_3291_:
{
lean_object* v___x_3294_; 
if (v_isShared_3272_ == 0)
{
lean_ctor_set(v___x_3271_, 0, v___x_3292_);
v___x_3294_ = v___x_3271_;
goto v_reusejp_3293_;
}
else
{
lean_object* v_reuseFailAlloc_3296_; 
v_reuseFailAlloc_3296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3296_, 0, v___x_3292_);
v___x_3294_ = v_reuseFailAlloc_3296_;
goto v_reusejp_3293_;
}
v_reusejp_3293_:
{
lean_object* v___x_3295_; 
v___x_3295_ = lean_apply_2(v_toPure_3263_, lean_box(0), v___x_3294_);
return v___x_3295_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4(lean_object* v_toPure_3301_, lean_object* v___x_3302_, lean_object* v_inst_3303_, lean_object* v_inst_3304_, lean_object* v_inst_3305_, lean_object* v_inst_3306_, lean_object* v_inst_3307_, lean_object* v_inst_3308_, lean_object* v_n_u2080_3309_, lean_object* v_filter_3310_, lean_object* v_view_x3f_3311_, lean_object* v_toBind_3312_, lean_object* v___f_3313_, lean_object* v___f_3314_, lean_object* v_a_3315_, lean_object* v_x_3316_, lean_object* v___y_3317_){
_start:
{
lean_object* v_snd_3318_; lean_object* v___x_3319_; lean_object* v___f_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; 
v_snd_3318_ = lean_ctor_get(v___y_3317_, 1);
lean_inc(v_snd_3318_);
lean_dec_ref(v___y_3317_);
v___x_3319_ = l_Lean_Name_appendCore(v_a_3315_, v_snd_3318_);
lean_inc(v___x_3319_);
v___f_3320_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__3), 4, 3);
lean_closure_set(v___f_3320_, 0, v_toPure_3301_);
lean_closure_set(v___f_3320_, 1, v___x_3319_);
lean_closure_set(v___f_3320_, 2, v___x_3302_);
v___x_3321_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(v_inst_3303_, v_inst_3304_, v_inst_3305_, v_inst_3306_, v_inst_3307_, v_inst_3308_, v_n_u2080_3309_, v_filter_3310_, v_view_x3f_3311_, v___x_3319_);
lean_inc_n(v_toBind_3312_, 2);
v___x_3322_ = lean_apply_4(v_toBind_3312_, lean_box(0), lean_box(0), v___x_3321_, v___f_3313_);
v___x_3323_ = lean_apply_4(v_toBind_3312_, lean_box(0), lean_box(0), v___x_3322_, v___f_3314_);
v___x_3324_ = lean_apply_4(v_toBind_3312_, lean_box(0), lean_box(0), v___x_3323_, v___f_3320_);
return v___x_3324_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4___boxed(lean_object** _args){
lean_object* v_toPure_3325_ = _args[0];
lean_object* v___x_3326_ = _args[1];
lean_object* v_inst_3327_ = _args[2];
lean_object* v_inst_3328_ = _args[3];
lean_object* v_inst_3329_ = _args[4];
lean_object* v_inst_3330_ = _args[5];
lean_object* v_inst_3331_ = _args[6];
lean_object* v_inst_3332_ = _args[7];
lean_object* v_n_u2080_3333_ = _args[8];
lean_object* v_filter_3334_ = _args[9];
lean_object* v_view_x3f_3335_ = _args[10];
lean_object* v_toBind_3336_ = _args[11];
lean_object* v___f_3337_ = _args[12];
lean_object* v___f_3338_ = _args[13];
lean_object* v_a_3339_ = _args[14];
lean_object* v_x_3340_ = _args[15];
lean_object* v___y_3341_ = _args[16];
_start:
{
lean_object* v_res_3342_; 
v_res_3342_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4(v_toPure_3325_, v___x_3326_, v_inst_3327_, v_inst_3328_, v_inst_3329_, v_inst_3330_, v_inst_3331_, v_inst_3332_, v_n_u2080_3333_, v_filter_3334_, v_view_x3f_3335_, v_toBind_3336_, v___f_3337_, v___f_3338_, v_a_3339_, v_x_3340_, v___y_3341_);
lean_dec(v_a_3339_);
return v_res_3342_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5(lean_object* v_toPure_3346_, lean_object* v_n_3347_, lean_object* v_inst_3348_, lean_object* v_inst_3349_, lean_object* v_inst_3350_, lean_object* v_inst_3351_, lean_object* v_inst_3352_, lean_object* v_inst_3353_, lean_object* v_n_u2080_3354_, lean_object* v_filter_3355_, lean_object* v_view_x3f_3356_, lean_object* v_toBind_3357_, lean_object* v___f_3358_, lean_object* v___f_3359_, lean_object* v___x_3360_, lean_object* v_____do__lift_3361_){
_start:
{
if (lean_obj_tag(v_____do__lift_3361_) == 0)
{
lean_object* v___x_3362_; lean_object* v___x_3363_; 
lean_dec_ref(v___x_3360_);
lean_dec(v___f_3359_);
lean_dec(v___f_3358_);
lean_dec(v_toBind_3357_);
lean_dec(v_view_x3f_3356_);
lean_dec(v_filter_3355_);
lean_dec(v_n_u2080_3354_);
lean_dec(v_inst_3353_);
lean_dec_ref(v_inst_3352_);
lean_dec_ref(v_inst_3351_);
lean_dec_ref(v_inst_3350_);
lean_dec_ref(v_inst_3349_);
lean_dec_ref(v_inst_3348_);
lean_dec(v_n_3347_);
v___x_3362_ = lean_box(0);
v___x_3363_ = lean_apply_2(v_toPure_3346_, lean_box(0), v___x_3362_);
return v___x_3363_;
}
else
{
lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___f_3367_; lean_object* v___f_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; 
v___x_3364_ = l_Lean_privateToUserName(v_n_3347_);
v___x_3365_ = l_Lean_Name_componentsRev(v___x_3364_);
v___x_3366_ = lean_box(0);
lean_inc(v_toPure_3346_);
v___f_3367_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__2), 3, 2);
lean_closure_set(v___f_3367_, 0, v_toPure_3346_);
lean_closure_set(v___f_3367_, 1, v___x_3366_);
lean_inc(v_toBind_3357_);
v___f_3368_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4___boxed), 17, 14);
lean_closure_set(v___f_3368_, 0, v_toPure_3346_);
lean_closure_set(v___f_3368_, 1, v___x_3366_);
lean_closure_set(v___f_3368_, 2, v_inst_3348_);
lean_closure_set(v___f_3368_, 3, v_inst_3349_);
lean_closure_set(v___f_3368_, 4, v_inst_3350_);
lean_closure_set(v___f_3368_, 5, v_inst_3351_);
lean_closure_set(v___f_3368_, 6, v_inst_3352_);
lean_closure_set(v___f_3368_, 7, v_inst_3353_);
lean_closure_set(v___f_3368_, 8, v_n_u2080_3354_);
lean_closure_set(v___f_3368_, 9, v_filter_3355_);
lean_closure_set(v___f_3368_, 10, v_view_x3f_3356_);
lean_closure_set(v___f_3368_, 11, v_toBind_3357_);
lean_closure_set(v___f_3368_, 12, v___f_3358_);
lean_closure_set(v___f_3368_, 13, v___f_3359_);
v___x_3369_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___closed__0));
v___x_3370_ = l_List_forIn_x27_loop___redArg(v___x_3360_, v___f_3368_, v___x_3365_, v___x_3369_);
lean_dec(v___x_3365_);
v___x_3371_ = lean_apply_4(v_toBind_3357_, lean_box(0), lean_box(0), v___x_3370_, v___f_3367_);
return v___x_3371_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___boxed(lean_object* v_toPure_3372_, lean_object* v_n_3373_, lean_object* v_inst_3374_, lean_object* v_inst_3375_, lean_object* v_inst_3376_, lean_object* v_inst_3377_, lean_object* v_inst_3378_, lean_object* v_inst_3379_, lean_object* v_n_u2080_3380_, lean_object* v_filter_3381_, lean_object* v_view_x3f_3382_, lean_object* v_toBind_3383_, lean_object* v___f_3384_, lean_object* v___f_3385_, lean_object* v___x_3386_, lean_object* v_____do__lift_3387_){
_start:
{
lean_object* v_res_3388_; 
v_res_3388_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5(v_toPure_3372_, v_n_3373_, v_inst_3374_, v_inst_3375_, v_inst_3376_, v_inst_3377_, v_inst_3378_, v_inst_3379_, v_n_u2080_3380_, v_filter_3381_, v_view_x3f_3382_, v_toBind_3383_, v___f_3384_, v___f_3385_, v___x_3386_, v_____do__lift_3387_);
lean_dec(v_____do__lift_3387_);
return v_res_3388_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg(lean_object* v_inst_3389_, lean_object* v_inst_3390_, lean_object* v_inst_3391_, lean_object* v_inst_3392_, lean_object* v_inst_3393_, lean_object* v_inst_3394_, lean_object* v_n_u2080_3395_, lean_object* v_filter_3396_, lean_object* v_view_x3f_3397_, lean_object* v_n_3398_){
_start:
{
lean_object* v___f_3399_; lean_object* v___f_3400_; lean_object* v___f_3401_; lean_object* v___f_3402_; lean_object* v___f_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___y_3410_; uint8_t v___x_3418_; 
lean_inc_ref_n(v_inst_3389_, 7);
v___f_3399_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_3399_, 0, v_inst_3389_);
v___f_3400_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_3400_, 0, v_inst_3389_);
v___f_3401_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__6), 5, 1);
lean_closure_set(v___f_3401_, 0, v_inst_3389_);
v___f_3402_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_3402_, 0, v_inst_3389_);
v___f_3403_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__11), 5, 1);
lean_closure_set(v___f_3403_, 0, v_inst_3389_);
v___x_3404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3404_, 0, v___f_3399_);
lean_ctor_set(v___x_3404_, 1, v___f_3400_);
v___x_3405_ = lean_alloc_closure((void*)(l_OptionT_pure), 4, 2);
lean_closure_set(v___x_3405_, 0, lean_box(0));
lean_closure_set(v___x_3405_, 1, v_inst_3389_);
v___x_3406_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3406_, 0, v___x_3404_);
lean_ctor_set(v___x_3406_, 1, v___x_3405_);
lean_ctor_set(v___x_3406_, 2, v___f_3401_);
lean_ctor_set(v___x_3406_, 3, v___f_3402_);
lean_ctor_set(v___x_3406_, 4, v___f_3403_);
v___x_3407_ = lean_alloc_closure((void*)(l_OptionT_bind), 6, 2);
lean_closure_set(v___x_3407_, 0, lean_box(0));
lean_closure_set(v___x_3407_, 1, v_inst_3389_);
v___x_3408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3408_, 0, v___x_3406_);
lean_ctor_set(v___x_3408_, 1, v___x_3407_);
v___x_3418_ = l_Lean_Name_hasMacroScopes(v_n_3398_);
if (v___x_3418_ == 0)
{
lean_object* v_toApplicative_3419_; lean_object* v_toPure_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; 
v_toApplicative_3419_ = lean_ctor_get(v_inst_3389_, 0);
v_toPure_3420_ = lean_ctor_get(v_toApplicative_3419_, 1);
v___x_3421_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0));
lean_inc(v_toPure_3420_);
v___x_3422_ = lean_apply_2(v_toPure_3420_, lean_box(0), v___x_3421_);
v___y_3410_ = v___x_3422_;
goto v___jp_3409_;
}
else
{
lean_object* v_toApplicative_3423_; lean_object* v_toPure_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; 
v_toApplicative_3423_ = lean_ctor_get(v_inst_3389_, 0);
v_toPure_3424_ = lean_ctor_get(v_toApplicative_3423_, 1);
v___x_3425_ = lean_box(0);
lean_inc(v_toPure_3424_);
v___x_3426_ = lean_apply_2(v_toPure_3424_, lean_box(0), v___x_3425_);
v___y_3410_ = v___x_3426_;
goto v___jp_3409_;
}
v___jp_3409_:
{
lean_object* v_toApplicative_3411_; lean_object* v_toBind_3412_; lean_object* v_toPure_3413_; lean_object* v___f_3414_; lean_object* v___f_3415_; lean_object* v___f_3416_; lean_object* v___x_3417_; 
v_toApplicative_3411_ = lean_ctor_get(v_inst_3389_, 0);
v_toBind_3412_ = lean_ctor_get(v_inst_3389_, 1);
lean_inc_n(v_toBind_3412_, 2);
v_toPure_3413_ = lean_ctor_get(v_toApplicative_3411_, 1);
lean_inc_n(v_toPure_3413_, 3);
v___f_3414_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3414_, 0, v_toPure_3413_);
v___f_3415_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__1), 2, 1);
lean_closure_set(v___f_3415_, 0, v_toPure_3413_);
v___f_3416_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___boxed), 16, 15);
lean_closure_set(v___f_3416_, 0, v_toPure_3413_);
lean_closure_set(v___f_3416_, 1, v_n_3398_);
lean_closure_set(v___f_3416_, 2, v_inst_3389_);
lean_closure_set(v___f_3416_, 3, v_inst_3390_);
lean_closure_set(v___f_3416_, 4, v_inst_3391_);
lean_closure_set(v___f_3416_, 5, v_inst_3392_);
lean_closure_set(v___f_3416_, 6, v_inst_3393_);
lean_closure_set(v___f_3416_, 7, v_inst_3394_);
lean_closure_set(v___f_3416_, 8, v_n_u2080_3395_);
lean_closure_set(v___f_3416_, 9, v_filter_3396_);
lean_closure_set(v___f_3416_, 10, v_view_x3f_3397_);
lean_closure_set(v___f_3416_, 11, v_toBind_3412_);
lean_closure_set(v___f_3416_, 12, v___f_3415_);
lean_closure_set(v___f_3416_, 13, v___f_3414_);
lean_closure_set(v___f_3416_, 14, v___x_3408_);
v___x_3417_ = lean_apply_4(v_toBind_3412_, lean_box(0), lean_box(0), v___y_3410_, v___f_3416_);
return v___x_3417_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore(lean_object* v_m_3427_, lean_object* v_inst_3428_, lean_object* v_inst_3429_, lean_object* v_inst_3430_, lean_object* v_inst_3431_, lean_object* v_inst_3432_, lean_object* v_inst_3433_, lean_object* v_n_u2080_3434_, lean_object* v_filter_3435_, lean_object* v_view_x3f_3436_, lean_object* v_n_3437_){
_start:
{
lean_object* v___x_3438_; 
v___x_3438_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg(v_inst_3428_, v_inst_3429_, v_inst_3430_, v_inst_3431_, v_inst_3432_, v_inst_3433_, v_n_u2080_3434_, v_filter_3435_, v_view_x3f_3436_, v_n_3437_);
return v___x_3438_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__0(lean_object* v_n_u2081_3439_, lean_object* v_x1_3440_, lean_object* v_x2_3441_){
_start:
{
lean_object* v___x_3442_; lean_object* v___x_3443_; uint8_t v___x_3444_; 
v___x_3442_ = l_Lean_Name_getPrefix(v_x2_3441_);
v___x_3443_ = l_Lean_Name_getPrefix(v_n_u2081_3439_);
v___x_3444_ = l_Lean_Name_isPrefixOf(v___x_3442_, v___x_3443_);
lean_dec(v___x_3443_);
lean_dec(v___x_3442_);
if (v___x_3444_ == 0)
{
lean_dec(v_x2_3441_);
return v_x1_3440_;
}
else
{
lean_object* v___x_3445_; 
v___x_3445_ = lean_array_push(v_x1_3440_, v_x2_3441_);
return v___x_3445_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__0___boxed(lean_object* v_n_u2081_3446_, lean_object* v_x1_3447_, lean_object* v_x2_3448_){
_start:
{
lean_object* v_res_3449_; 
v_res_3449_ = l_Lean_unresolveNameGlobal_x3f___redArg___lam__0(v_n_u2081_3446_, v_x1_3447_, v_x2_3448_);
lean_dec(v_n_u2081_3446_);
return v_res_3449_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__1(lean_object* v_view_3450_, lean_object* v_n_u2081_3451_, lean_object* v_inst_3452_, lean_object* v_inst_3453_, lean_object* v_inst_3454_, lean_object* v_inst_3455_, lean_object* v_inst_3456_, lean_object* v_inst_3457_, lean_object* v_n_u2080_3458_, lean_object* v_filter_3459_, lean_object* v_toPure_3460_, lean_object* v_____do__lift_3461_){
_start:
{
if (lean_obj_tag(v_____do__lift_3461_) == 0)
{
lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; 
lean_dec(v_toPure_3460_);
v___x_3462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3462_, 0, v_view_3450_);
v___x_3463_ = l_Lean_rootNamespace;
v___x_3464_ = l_Lean_Name_append(v___x_3463_, v_n_u2081_3451_);
v___x_3465_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg(v_inst_3452_, v_inst_3453_, v_inst_3454_, v_inst_3455_, v_inst_3456_, v_inst_3457_, v_n_u2080_3458_, v_filter_3459_, v___x_3462_, v___x_3464_);
return v___x_3465_;
}
else
{
lean_object* v___x_3466_; 
lean_dec(v_filter_3459_);
lean_dec(v_n_u2080_3458_);
lean_dec(v_inst_3457_);
lean_dec_ref(v_inst_3456_);
lean_dec_ref(v_inst_3455_);
lean_dec_ref(v_inst_3454_);
lean_dec_ref(v_inst_3453_);
lean_dec_ref(v_inst_3452_);
lean_dec(v_n_u2081_3451_);
lean_dec_ref(v_view_3450_);
v___x_3466_ = lean_apply_2(v_toPure_3460_, lean_box(0), v_____do__lift_3461_);
return v___x_3466_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__2(lean_object* v_toPure_3467_, lean_object* v_inst_3468_, lean_object* v_inst_3469_, lean_object* v_inst_3470_, lean_object* v_inst_3471_, lean_object* v_inst_3472_, lean_object* v_inst_3473_, lean_object* v_n_u2080_3474_, lean_object* v_filter_3475_, lean_object* v___x_3476_, lean_object* v_toBind_3477_, lean_object* v___f_3478_, uint8_t v_allowHorizAliases_3479_, lean_object* v___f_3480_, lean_object* v_____do__lift_3481_){
_start:
{
lean_object* v_aliases_3483_; 
if (lean_obj_tag(v_____do__lift_3481_) == 0)
{
lean_object* v___x_3489_; lean_object* v___x_3490_; 
lean_dec_ref(v___f_3480_);
lean_dec(v___f_3478_);
lean_dec(v_toBind_3477_);
lean_dec_ref(v___x_3476_);
lean_dec(v_filter_3475_);
lean_dec(v_n_u2080_3474_);
lean_dec(v_inst_3473_);
lean_dec_ref(v_inst_3472_);
lean_dec_ref(v_inst_3471_);
lean_dec_ref(v_inst_3470_);
lean_dec_ref(v_inst_3469_);
lean_dec_ref(v_inst_3468_);
v___x_3489_ = lean_box(0);
v___x_3490_ = lean_apply_2(v_toPure_3467_, lean_box(0), v___x_3489_);
return v___x_3490_;
}
else
{
lean_object* v_val_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; 
lean_dec(v_toPure_3467_);
v_val_3491_ = lean_ctor_get(v_____do__lift_3481_, 0);
lean_inc(v_val_3491_);
lean_dec_ref_known(v_____do__lift_3481_, 1);
lean_inc(v_n_u2080_3474_);
v___x_3492_ = l_Lean_getRevAliases(v_val_3491_, v_n_u2080_3474_);
v___x_3493_ = lean_array_mk(v___x_3492_);
if (v_allowHorizAliases_3479_ == 0)
{
lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; uint8_t v___x_3498_; 
v___x_3494_ = lean_unsigned_to_nat(0u);
v___x_3495_ = lean_array_get_size(v___x_3493_);
v___x_3496_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__1));
v___x_3497_ = ((lean_object*)(l_Lean_resolveLocalName___redArg___lam__3___closed__9));
v___x_3498_ = lean_nat_dec_lt(v___x_3494_, v___x_3495_);
if (v___x_3498_ == 0)
{
lean_dec_ref(v___x_3493_);
lean_dec_ref(v___f_3480_);
v_aliases_3483_ = v___x_3496_;
goto v___jp_3482_;
}
else
{
size_t v___x_3499_; size_t v___x_3500_; lean_object* v___x_3501_; 
v___x_3499_ = ((size_t)0ULL);
v___x_3500_ = lean_usize_of_nat(v___x_3495_);
v___x_3501_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3497_, v___f_3480_, v___x_3493_, v___x_3499_, v___x_3500_, v___x_3496_);
v_aliases_3483_ = v___x_3501_;
goto v___jp_3482_;
}
}
else
{
lean_dec_ref(v___f_3480_);
v_aliases_3483_ = v___x_3493_;
goto v___jp_3482_;
}
}
v___jp_3482_:
{
lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; 
v___x_3484_ = lean_box(0);
v___x_3485_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore), 11, 10);
lean_closure_set(v___x_3485_, 0, lean_box(0));
lean_closure_set(v___x_3485_, 1, v_inst_3468_);
lean_closure_set(v___x_3485_, 2, v_inst_3469_);
lean_closure_set(v___x_3485_, 3, v_inst_3470_);
lean_closure_set(v___x_3485_, 4, v_inst_3471_);
lean_closure_set(v___x_3485_, 5, v_inst_3472_);
lean_closure_set(v___x_3485_, 6, v_inst_3473_);
lean_closure_set(v___x_3485_, 7, v_n_u2080_3474_);
lean_closure_set(v___x_3485_, 8, v_filter_3475_);
lean_closure_set(v___x_3485_, 9, v___x_3484_);
v___x_3486_ = lean_unsigned_to_nat(0u);
v___x_3487_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go(lean_box(0), lean_box(0), lean_box(0), v___x_3476_, v___x_3485_, v_aliases_3483_, v___x_3486_);
v___x_3488_ = lean_apply_4(v_toBind_3477_, lean_box(0), lean_box(0), v___x_3487_, v___f_3478_);
return v___x_3488_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__2___boxed(lean_object* v_toPure_3502_, lean_object* v_inst_3503_, lean_object* v_inst_3504_, lean_object* v_inst_3505_, lean_object* v_inst_3506_, lean_object* v_inst_3507_, lean_object* v_inst_3508_, lean_object* v_n_u2080_3509_, lean_object* v_filter_3510_, lean_object* v___x_3511_, lean_object* v_toBind_3512_, lean_object* v___f_3513_, lean_object* v_allowHorizAliases_3514_, lean_object* v___f_3515_, lean_object* v_____do__lift_3516_){
_start:
{
uint8_t v_allowHorizAliases_boxed_3517_; lean_object* v_res_3518_; 
v_allowHorizAliases_boxed_3517_ = lean_unbox(v_allowHorizAliases_3514_);
v_res_3518_ = l_Lean_unresolveNameGlobal_x3f___redArg___lam__2(v_toPure_3502_, v_inst_3503_, v_inst_3504_, v_inst_3505_, v_inst_3506_, v_inst_3507_, v_inst_3508_, v_n_u2080_3509_, v_filter_3510_, v___x_3511_, v_toBind_3512_, v___f_3513_, v_allowHorizAliases_boxed_3517_, v___f_3515_, v_____do__lift_3516_);
return v_res_3518_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__3(lean_object* v_toPure_3519_, lean_object* v_____do__lift_3520_){
_start:
{
lean_object* v___x_3521_; lean_object* v___x_3522_; 
v___x_3521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3521_, 0, v_____do__lift_3520_);
v___x_3522_ = lean_apply_2(v_toPure_3519_, lean_box(0), v___x_3521_);
return v___x_3522_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__4(lean_object* v_n_u2081_3523_, lean_object* v_inst_3524_, lean_object* v_inst_3525_, lean_object* v_inst_3526_, lean_object* v_inst_3527_, lean_object* v_inst_3528_, lean_object* v_inst_3529_, lean_object* v_n_u2080_3530_, lean_object* v_filter_3531_, lean_object* v___x_3532_, lean_object* v_toPure_3533_, lean_object* v_____do__lift_3534_){
_start:
{
if (lean_obj_tag(v_____do__lift_3534_) == 0)
{
lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; 
lean_dec(v_toPure_3533_);
v___x_3535_ = l_Lean_rootNamespace;
v___x_3536_ = l_Lean_Name_append(v___x_3535_, v_n_u2081_3523_);
v___x_3537_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(v_inst_3524_, v_inst_3525_, v_inst_3526_, v_inst_3527_, v_inst_3528_, v_inst_3529_, v_n_u2080_3530_, v_filter_3531_, v___x_3532_, v___x_3536_);
return v___x_3537_;
}
else
{
lean_object* v___x_3538_; 
lean_dec(v___x_3532_);
lean_dec(v_filter_3531_);
lean_dec(v_n_u2080_3530_);
lean_dec(v_inst_3529_);
lean_dec_ref(v_inst_3528_);
lean_dec_ref(v_inst_3527_);
lean_dec_ref(v_inst_3526_);
lean_dec_ref(v_inst_3525_);
lean_dec_ref(v_inst_3524_);
lean_dec(v_n_u2081_3523_);
v___x_3538_ = lean_apply_2(v_toPure_3533_, lean_box(0), v_____do__lift_3534_);
return v___x_3538_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg(lean_object* v_inst_3539_, lean_object* v_inst_3540_, lean_object* v_inst_3541_, lean_object* v_inst_3542_, lean_object* v_inst_3543_, lean_object* v_inst_3544_, lean_object* v_n_u2080_3545_, uint8_t v_fullNames_3546_, uint8_t v_allowHorizAliases_3547_, lean_object* v_filter_3548_){
_start:
{
lean_object* v_view_3549_; lean_object* v_name_3550_; lean_object* v_n_u2081_3551_; lean_object* v___x_3552_; 
lean_inc(v_n_u2080_3545_);
v_view_3549_ = l_Lean_extractMacroScopes(v_n_u2080_3545_);
v_name_3550_ = lean_ctor_get(v_view_3549_, 0);
lean_inc(v_name_3550_);
v_n_u2081_3551_ = l_Lean_privateToUserName(v_name_3550_);
lean_inc_ref(v_inst_3539_);
v___x_3552_ = l_OptionT_instAlternative___redArg(v_inst_3539_);
if (v_fullNames_3546_ == 0)
{
lean_object* v_toApplicative_3553_; lean_object* v_getEnv_3554_; lean_object* v_toBind_3555_; lean_object* v_toPure_3556_; lean_object* v___f_3557_; lean_object* v___f_3558_; lean_object* v___x_3559_; lean_object* v___f_3560_; lean_object* v___f_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; 
v_toApplicative_3553_ = lean_ctor_get(v_inst_3539_, 0);
v_getEnv_3554_ = lean_ctor_get(v_inst_3541_, 0);
lean_inc(v_getEnv_3554_);
v_toBind_3555_ = lean_ctor_get(v_inst_3539_, 1);
lean_inc_n(v_toBind_3555_, 3);
v_toPure_3556_ = lean_ctor_get(v_toApplicative_3553_, 1);
lean_inc_n(v_toPure_3556_, 3);
lean_inc(v_n_u2081_3551_);
v___f_3557_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3557_, 0, v_n_u2081_3551_);
lean_inc(v_filter_3548_);
lean_inc(v_n_u2080_3545_);
lean_inc(v_inst_3544_);
lean_inc_ref(v_inst_3543_);
lean_inc_ref(v_inst_3542_);
lean_inc_ref(v_inst_3541_);
lean_inc_ref(v_inst_3540_);
lean_inc_ref(v_inst_3539_);
v___f_3558_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__1), 12, 11);
lean_closure_set(v___f_3558_, 0, v_view_3549_);
lean_closure_set(v___f_3558_, 1, v_n_u2081_3551_);
lean_closure_set(v___f_3558_, 2, v_inst_3539_);
lean_closure_set(v___f_3558_, 3, v_inst_3540_);
lean_closure_set(v___f_3558_, 4, v_inst_3541_);
lean_closure_set(v___f_3558_, 5, v_inst_3542_);
lean_closure_set(v___f_3558_, 6, v_inst_3543_);
lean_closure_set(v___f_3558_, 7, v_inst_3544_);
lean_closure_set(v___f_3558_, 8, v_n_u2080_3545_);
lean_closure_set(v___f_3558_, 9, v_filter_3548_);
lean_closure_set(v___f_3558_, 10, v_toPure_3556_);
v___x_3559_ = lean_box(v_allowHorizAliases_3547_);
v___f_3560_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__2___boxed), 15, 14);
lean_closure_set(v___f_3560_, 0, v_toPure_3556_);
lean_closure_set(v___f_3560_, 1, v_inst_3539_);
lean_closure_set(v___f_3560_, 2, v_inst_3540_);
lean_closure_set(v___f_3560_, 3, v_inst_3541_);
lean_closure_set(v___f_3560_, 4, v_inst_3542_);
lean_closure_set(v___f_3560_, 5, v_inst_3543_);
lean_closure_set(v___f_3560_, 6, v_inst_3544_);
lean_closure_set(v___f_3560_, 7, v_n_u2080_3545_);
lean_closure_set(v___f_3560_, 8, v_filter_3548_);
lean_closure_set(v___f_3560_, 9, v___x_3552_);
lean_closure_set(v___f_3560_, 10, v_toBind_3555_);
lean_closure_set(v___f_3560_, 11, v___f_3558_);
lean_closure_set(v___f_3560_, 12, v___x_3559_);
lean_closure_set(v___f_3560_, 13, v___f_3557_);
v___f_3561_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__3), 2, 1);
lean_closure_set(v___f_3561_, 0, v_toPure_3556_);
v___x_3562_ = lean_apply_4(v_toBind_3555_, lean_box(0), lean_box(0), v_getEnv_3554_, v___f_3561_);
v___x_3563_ = lean_apply_4(v_toBind_3555_, lean_box(0), lean_box(0), v___x_3562_, v___f_3560_);
return v___x_3563_;
}
else
{
lean_object* v_toApplicative_3564_; lean_object* v_toBind_3565_; lean_object* v_toPure_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___f_3569_; lean_object* v___x_3570_; 
lean_dec_ref(v___x_3552_);
v_toApplicative_3564_ = lean_ctor_get(v_inst_3539_, 0);
v_toBind_3565_ = lean_ctor_get(v_inst_3539_, 1);
lean_inc(v_toBind_3565_);
v_toPure_3566_ = lean_ctor_get(v_toApplicative_3564_, 1);
lean_inc(v_toPure_3566_);
v___x_3567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3567_, 0, v_view_3549_);
lean_inc(v_n_u2081_3551_);
lean_inc_ref(v___x_3567_);
lean_inc(v_filter_3548_);
lean_inc(v_n_u2080_3545_);
lean_inc(v_inst_3544_);
lean_inc_ref(v_inst_3543_);
lean_inc_ref(v_inst_3542_);
lean_inc_ref(v_inst_3541_);
lean_inc_ref(v_inst_3540_);
lean_inc_ref(v_inst_3539_);
v___x_3568_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(v_inst_3539_, v_inst_3540_, v_inst_3541_, v_inst_3542_, v_inst_3543_, v_inst_3544_, v_n_u2080_3545_, v_filter_3548_, v___x_3567_, v_n_u2081_3551_);
v___f_3569_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__4), 12, 11);
lean_closure_set(v___f_3569_, 0, v_n_u2081_3551_);
lean_closure_set(v___f_3569_, 1, v_inst_3539_);
lean_closure_set(v___f_3569_, 2, v_inst_3540_);
lean_closure_set(v___f_3569_, 3, v_inst_3541_);
lean_closure_set(v___f_3569_, 4, v_inst_3542_);
lean_closure_set(v___f_3569_, 5, v_inst_3543_);
lean_closure_set(v___f_3569_, 6, v_inst_3544_);
lean_closure_set(v___f_3569_, 7, v_n_u2080_3545_);
lean_closure_set(v___f_3569_, 8, v_filter_3548_);
lean_closure_set(v___f_3569_, 9, v___x_3567_);
lean_closure_set(v___f_3569_, 10, v_toPure_3566_);
v___x_3570_ = lean_apply_4(v_toBind_3565_, lean_box(0), lean_box(0), v___x_3568_, v___f_3569_);
return v___x_3570_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___boxed(lean_object* v_inst_3571_, lean_object* v_inst_3572_, lean_object* v_inst_3573_, lean_object* v_inst_3574_, lean_object* v_inst_3575_, lean_object* v_inst_3576_, lean_object* v_n_u2080_3577_, lean_object* v_fullNames_3578_, lean_object* v_allowHorizAliases_3579_, lean_object* v_filter_3580_){
_start:
{
uint8_t v_fullNames_boxed_3581_; uint8_t v_allowHorizAliases_boxed_3582_; lean_object* v_res_3583_; 
v_fullNames_boxed_3581_ = lean_unbox(v_fullNames_3578_);
v_allowHorizAliases_boxed_3582_ = lean_unbox(v_allowHorizAliases_3579_);
v_res_3583_ = l_Lean_unresolveNameGlobal_x3f___redArg(v_inst_3571_, v_inst_3572_, v_inst_3573_, v_inst_3574_, v_inst_3575_, v_inst_3576_, v_n_u2080_3577_, v_fullNames_boxed_3581_, v_allowHorizAliases_boxed_3582_, v_filter_3580_);
return v_res_3583_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f(lean_object* v_m_3584_, lean_object* v_inst_3585_, lean_object* v_inst_3586_, lean_object* v_inst_3587_, lean_object* v_inst_3588_, lean_object* v_inst_3589_, lean_object* v_inst_3590_, lean_object* v_n_u2080_3591_, uint8_t v_fullNames_3592_, uint8_t v_allowHorizAliases_3593_, lean_object* v_filter_3594_){
_start:
{
lean_object* v___x_3595_; 
v___x_3595_ = l_Lean_unresolveNameGlobal_x3f___redArg(v_inst_3585_, v_inst_3586_, v_inst_3587_, v_inst_3588_, v_inst_3589_, v_inst_3590_, v_n_u2080_3591_, v_fullNames_3592_, v_allowHorizAliases_3593_, v_filter_3594_);
return v___x_3595_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___boxed(lean_object* v_m_3596_, lean_object* v_inst_3597_, lean_object* v_inst_3598_, lean_object* v_inst_3599_, lean_object* v_inst_3600_, lean_object* v_inst_3601_, lean_object* v_inst_3602_, lean_object* v_n_u2080_3603_, lean_object* v_fullNames_3604_, lean_object* v_allowHorizAliases_3605_, lean_object* v_filter_3606_){
_start:
{
uint8_t v_fullNames_boxed_3607_; uint8_t v_allowHorizAliases_boxed_3608_; lean_object* v_res_3609_; 
v_fullNames_boxed_3607_ = lean_unbox(v_fullNames_3604_);
v_allowHorizAliases_boxed_3608_ = lean_unbox(v_allowHorizAliases_3605_);
v_res_3609_ = l_Lean_unresolveNameGlobal_x3f(v_m_3596_, v_inst_3597_, v_inst_3598_, v_inst_3599_, v_inst_3600_, v_inst_3601_, v_inst_3602_, v_n_u2080_3603_, v_fullNames_boxed_3607_, v_allowHorizAliases_boxed_3608_, v_filter_3606_);
return v_res_3609_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg___lam__0(lean_object* v_toPure_3610_, lean_object* v_n_u2080_3611_, lean_object* v_n_x3f_3612_){
_start:
{
if (lean_obj_tag(v_n_x3f_3612_) == 0)
{
lean_object* v___x_3613_; 
v___x_3613_ = lean_apply_2(v_toPure_3610_, lean_box(0), v_n_u2080_3611_);
return v___x_3613_;
}
else
{
lean_object* v_val_3614_; lean_object* v___x_3615_; 
lean_dec(v_n_u2080_3611_);
v_val_3614_ = lean_ctor_get(v_n_x3f_3612_, 0);
lean_inc(v_val_3614_);
lean_dec_ref_known(v_n_x3f_3612_, 1);
v___x_3615_ = lean_apply_2(v_toPure_3610_, lean_box(0), v_val_3614_);
return v___x_3615_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg(lean_object* v_inst_3616_, lean_object* v_inst_3617_, lean_object* v_inst_3618_, lean_object* v_inst_3619_, lean_object* v_inst_3620_, lean_object* v_inst_3621_, lean_object* v_n_u2080_3622_, uint8_t v_fullNames_3623_, uint8_t v_allowHorizAliases_3624_, lean_object* v_filter_3625_){
_start:
{
lean_object* v_toApplicative_3626_; lean_object* v_toBind_3627_; lean_object* v_toPure_3628_; lean_object* v___x_3629_; lean_object* v___f_3630_; lean_object* v___x_3631_; 
v_toApplicative_3626_ = lean_ctor_get(v_inst_3616_, 0);
v_toBind_3627_ = lean_ctor_get(v_inst_3616_, 1);
lean_inc(v_toBind_3627_);
v_toPure_3628_ = lean_ctor_get(v_toApplicative_3626_, 1);
lean_inc(v_toPure_3628_);
lean_inc(v_n_u2080_3622_);
v___x_3629_ = l_Lean_unresolveNameGlobal_x3f___redArg(v_inst_3616_, v_inst_3617_, v_inst_3618_, v_inst_3619_, v_inst_3620_, v_inst_3621_, v_n_u2080_3622_, v_fullNames_3623_, v_allowHorizAliases_3624_, v_filter_3625_);
v___f_3630_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3630_, 0, v_toPure_3628_);
lean_closure_set(v___f_3630_, 1, v_n_u2080_3622_);
v___x_3631_ = lean_apply_4(v_toBind_3627_, lean_box(0), lean_box(0), v___x_3629_, v___f_3630_);
return v___x_3631_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg___boxed(lean_object* v_inst_3632_, lean_object* v_inst_3633_, lean_object* v_inst_3634_, lean_object* v_inst_3635_, lean_object* v_inst_3636_, lean_object* v_inst_3637_, lean_object* v_n_u2080_3638_, lean_object* v_fullNames_3639_, lean_object* v_allowHorizAliases_3640_, lean_object* v_filter_3641_){
_start:
{
uint8_t v_fullNames_boxed_3642_; uint8_t v_allowHorizAliases_boxed_3643_; lean_object* v_res_3644_; 
v_fullNames_boxed_3642_ = lean_unbox(v_fullNames_3639_);
v_allowHorizAliases_boxed_3643_ = lean_unbox(v_allowHorizAliases_3640_);
v_res_3644_ = l_Lean_unresolveNameGlobal___redArg(v_inst_3632_, v_inst_3633_, v_inst_3634_, v_inst_3635_, v_inst_3636_, v_inst_3637_, v_n_u2080_3638_, v_fullNames_boxed_3642_, v_allowHorizAliases_boxed_3643_, v_filter_3641_);
return v_res_3644_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal(lean_object* v_m_3645_, lean_object* v_inst_3646_, lean_object* v_inst_3647_, lean_object* v_inst_3648_, lean_object* v_inst_3649_, lean_object* v_inst_3650_, lean_object* v_inst_3651_, lean_object* v_n_u2080_3652_, uint8_t v_fullNames_3653_, uint8_t v_allowHorizAliases_3654_, lean_object* v_filter_3655_){
_start:
{
lean_object* v___x_3656_; 
v___x_3656_ = l_Lean_unresolveNameGlobal___redArg(v_inst_3646_, v_inst_3647_, v_inst_3648_, v_inst_3649_, v_inst_3650_, v_inst_3651_, v_n_u2080_3652_, v_fullNames_3653_, v_allowHorizAliases_3654_, v_filter_3655_);
return v___x_3656_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___boxed(lean_object* v_m_3657_, lean_object* v_inst_3658_, lean_object* v_inst_3659_, lean_object* v_inst_3660_, lean_object* v_inst_3661_, lean_object* v_inst_3662_, lean_object* v_inst_3663_, lean_object* v_n_u2080_3664_, lean_object* v_fullNames_3665_, lean_object* v_allowHorizAliases_3666_, lean_object* v_filter_3667_){
_start:
{
uint8_t v_fullNames_boxed_3668_; uint8_t v_allowHorizAliases_boxed_3669_; lean_object* v_res_3670_; 
v_fullNames_boxed_3668_ = lean_unbox(v_fullNames_3665_);
v_allowHorizAliases_boxed_3669_ = lean_unbox(v_allowHorizAliases_3666_);
v_res_3670_ = l_Lean_unresolveNameGlobal(v_m_3657_, v_inst_3658_, v_inst_3659_, v_inst_3660_, v_inst_3661_, v_inst_3662_, v_inst_3663_, v_n_u2080_3664_, v_fullNames_boxed_3668_, v_allowHorizAliases_boxed_3669_, v_filter_3667_);
return v_res_3670_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0(lean_object* v_toFunctor_3672_, lean_object* v_inst_3673_, lean_object* v_inst_3674_, lean_object* v_inst_3675_, lean_object* v_inst_3676_, lean_object* v_inst_3677_, lean_object* v_inst_3678_, lean_object* v_inst_3679_, lean_object* v_n_3680_){
_start:
{
lean_object* v_map_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; 
v_map_3681_ = lean_ctor_get(v_toFunctor_3672_, 0);
lean_inc(v_map_3681_);
lean_dec_ref(v_toFunctor_3672_);
v___x_3682_ = ((lean_object*)(l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0___closed__0));
v___x_3683_ = l_Lean_resolveLocalName___redArg(v_inst_3673_, v_inst_3674_, v_inst_3675_, v_inst_3676_, v_inst_3677_, v_inst_3678_, v_inst_3679_, v_n_3680_);
v___x_3684_ = lean_apply_4(v_map_3681_, lean_box(0), lean_box(0), v___x_3682_, v___x_3683_);
return v___x_3684_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(lean_object* v_inst_3685_, lean_object* v_inst_3686_, lean_object* v_inst_3687_, lean_object* v_inst_3688_, lean_object* v_inst_3689_, lean_object* v_inst_3690_, lean_object* v_inst_3691_, lean_object* v_n_u2080_3692_, uint8_t v_fullNames_3693_){
_start:
{
lean_object* v_toApplicative_3694_; lean_object* v_toFunctor_3695_; uint8_t v___x_3696_; lean_object* v___f_3697_; lean_object* v___x_3698_; 
v_toApplicative_3694_ = lean_ctor_get(v_inst_3685_, 0);
v_toFunctor_3695_ = lean_ctor_get(v_toApplicative_3694_, 0);
v___x_3696_ = 0;
lean_inc(v_inst_3690_);
lean_inc_ref(v_inst_3689_);
lean_inc_ref(v_inst_3688_);
lean_inc_ref(v_inst_3687_);
lean_inc_ref(v_inst_3686_);
lean_inc_ref(v_inst_3685_);
lean_inc_ref(v_toFunctor_3695_);
v___f_3697_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0), 9, 8);
lean_closure_set(v___f_3697_, 0, v_toFunctor_3695_);
lean_closure_set(v___f_3697_, 1, v_inst_3685_);
lean_closure_set(v___f_3697_, 2, v_inst_3686_);
lean_closure_set(v___f_3697_, 3, v_inst_3687_);
lean_closure_set(v___f_3697_, 4, v_inst_3688_);
lean_closure_set(v___f_3697_, 5, v_inst_3689_);
lean_closure_set(v___f_3697_, 6, v_inst_3690_);
lean_closure_set(v___f_3697_, 7, v_inst_3691_);
v___x_3698_ = l_Lean_unresolveNameGlobal_x3f___redArg(v_inst_3685_, v_inst_3686_, v_inst_3687_, v_inst_3688_, v_inst_3689_, v_inst_3690_, v_n_u2080_3692_, v_fullNames_3693_, v___x_3696_, v___f_3697_);
return v___x_3698_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___boxed(lean_object* v_inst_3699_, lean_object* v_inst_3700_, lean_object* v_inst_3701_, lean_object* v_inst_3702_, lean_object* v_inst_3703_, lean_object* v_inst_3704_, lean_object* v_inst_3705_, lean_object* v_n_u2080_3706_, lean_object* v_fullNames_3707_){
_start:
{
uint8_t v_fullNames_boxed_3708_; lean_object* v_res_3709_; 
v_fullNames_boxed_3708_ = lean_unbox(v_fullNames_3707_);
v_res_3709_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(v_inst_3699_, v_inst_3700_, v_inst_3701_, v_inst_3702_, v_inst_3703_, v_inst_3704_, v_inst_3705_, v_n_u2080_3706_, v_fullNames_boxed_3708_);
return v_res_3709_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f(lean_object* v_m_3710_, lean_object* v_inst_3711_, lean_object* v_inst_3712_, lean_object* v_inst_3713_, lean_object* v_inst_3714_, lean_object* v_inst_3715_, lean_object* v_inst_3716_, lean_object* v_inst_3717_, lean_object* v_n_u2080_3718_, uint8_t v_fullNames_3719_){
_start:
{
lean_object* v___x_3720_; 
v___x_3720_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(v_inst_3711_, v_inst_3712_, v_inst_3713_, v_inst_3714_, v_inst_3715_, v_inst_3716_, v_inst_3717_, v_n_u2080_3718_, v_fullNames_3719_);
return v___x_3720_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___boxed(lean_object* v_m_3721_, lean_object* v_inst_3722_, lean_object* v_inst_3723_, lean_object* v_inst_3724_, lean_object* v_inst_3725_, lean_object* v_inst_3726_, lean_object* v_inst_3727_, lean_object* v_inst_3728_, lean_object* v_n_u2080_3729_, lean_object* v_fullNames_3730_){
_start:
{
uint8_t v_fullNames_boxed_3731_; lean_object* v_res_3732_; 
v_fullNames_boxed_3731_ = lean_unbox(v_fullNames_3730_);
v_res_3732_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f(v_m_3721_, v_inst_3722_, v_inst_3723_, v_inst_3724_, v_inst_3725_, v_inst_3726_, v_inst_3727_, v_inst_3728_, v_n_u2080_3729_, v_fullNames_boxed_3731_);
return v_res_3732_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___redArg(lean_object* v_inst_3733_, lean_object* v_inst_3734_, lean_object* v_inst_3735_, lean_object* v_inst_3736_, lean_object* v_inst_3737_, lean_object* v_inst_3738_, lean_object* v_inst_3739_, lean_object* v_n_u2080_3740_, uint8_t v_fullNames_3741_){
_start:
{
lean_object* v_toApplicative_3742_; lean_object* v_toBind_3743_; lean_object* v_toPure_3744_; lean_object* v___x_3745_; lean_object* v___f_3746_; lean_object* v___x_3747_; 
v_toApplicative_3742_ = lean_ctor_get(v_inst_3733_, 0);
v_toBind_3743_ = lean_ctor_get(v_inst_3733_, 1);
lean_inc(v_toBind_3743_);
v_toPure_3744_ = lean_ctor_get(v_toApplicative_3742_, 1);
lean_inc(v_toPure_3744_);
lean_inc(v_n_u2080_3740_);
v___x_3745_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(v_inst_3733_, v_inst_3734_, v_inst_3735_, v_inst_3736_, v_inst_3737_, v_inst_3738_, v_inst_3739_, v_n_u2080_3740_, v_fullNames_3741_);
v___f_3746_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3746_, 0, v_toPure_3744_);
lean_closure_set(v___f_3746_, 1, v_n_u2080_3740_);
v___x_3747_ = lean_apply_4(v_toBind_3743_, lean_box(0), lean_box(0), v___x_3745_, v___f_3746_);
return v___x_3747_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___redArg___boxed(lean_object* v_inst_3748_, lean_object* v_inst_3749_, lean_object* v_inst_3750_, lean_object* v_inst_3751_, lean_object* v_inst_3752_, lean_object* v_inst_3753_, lean_object* v_inst_3754_, lean_object* v_n_u2080_3755_, lean_object* v_fullNames_3756_){
_start:
{
uint8_t v_fullNames_boxed_3757_; lean_object* v_res_3758_; 
v_fullNames_boxed_3757_ = lean_unbox(v_fullNames_3756_);
v_res_3758_ = l_Lean_unresolveNameGlobalAvoidingLocals___redArg(v_inst_3748_, v_inst_3749_, v_inst_3750_, v_inst_3751_, v_inst_3752_, v_inst_3753_, v_inst_3754_, v_n_u2080_3755_, v_fullNames_boxed_3757_);
return v_res_3758_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals(lean_object* v_m_3759_, lean_object* v_inst_3760_, lean_object* v_inst_3761_, lean_object* v_inst_3762_, lean_object* v_inst_3763_, lean_object* v_inst_3764_, lean_object* v_inst_3765_, lean_object* v_inst_3766_, lean_object* v_n_u2080_3767_, uint8_t v_fullNames_3768_){
_start:
{
lean_object* v___x_3769_; 
v___x_3769_ = l_Lean_unresolveNameGlobalAvoidingLocals___redArg(v_inst_3760_, v_inst_3761_, v_inst_3762_, v_inst_3763_, v_inst_3764_, v_inst_3765_, v_inst_3766_, v_n_u2080_3767_, v_fullNames_3768_);
return v___x_3769_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___boxed(lean_object* v_m_3770_, lean_object* v_inst_3771_, lean_object* v_inst_3772_, lean_object* v_inst_3773_, lean_object* v_inst_3774_, lean_object* v_inst_3775_, lean_object* v_inst_3776_, lean_object* v_inst_3777_, lean_object* v_n_u2080_3778_, lean_object* v_fullNames_3779_){
_start:
{
uint8_t v_fullNames_boxed_3780_; lean_object* v_res_3781_; 
v_fullNames_boxed_3780_ = lean_unbox(v_fullNames_3779_);
v_res_3781_ = l_Lean_unresolveNameGlobalAvoidingLocals(v_m_3770_, v_inst_3771_, v_inst_3772_, v_inst_3773_, v_inst_3774_, v_inst_3775_, v_inst_3776_, v_inst_3777_, v_n_u2080_3778_, v_fullNames_boxed_3780_);
return v_res_3781_;
}
}
lean_object* runtime_initialize_Lean_Modifiers(uint8_t builtin);
lean_object* runtime_initialize_Lean_Exception(uint8_t builtin);
lean_object* runtime_initialize_Lean_Namespace(uint8_t builtin);
lean_object* runtime_initialize_Lean_Log(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_UsedByChecks(uint8_t builtin);
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
res = runtime_initialize_Lean_Util_UsedByChecks(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_2351709485____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_reservedNamePredicatesRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_reservedNamePredicatesRef);
lean_dec_ref(res);
res = l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_();
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
lean_object* initialize_Lean_Util_UsedByChecks(uint8_t builtin);
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
res = initialize_Lean_Util_UsedByChecks(builtin);
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
