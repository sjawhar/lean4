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
uint8_t l_Lean_initializing();
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
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
v___x_81_ = lean_st_ref_put(v___x_78_, v___x_80_);
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
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_(lean_object* v___x_86_){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_88_ = lean_st_ref_get(v___x_86_);
v___x_89_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_89_, 0, v___x_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2____boxed(lean_object* v___x_90_, lean_object* v___y_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_(v___x_90_);
lean_dec(v___x_90_);
return v_res_92_;
}
}
static lean_object* _init_l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_93_; lean_object* v___f_94_; 
v___x_93_ = l_Lean_reservedNamePredicatesRef;
v___f_94_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_94_, 0, v___x_93_);
return v___f_94_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; uint8_t v___x_105_; uint8_t v___x_106_; lean_object* v___x_107_; 
v___f_101_ = lean_obj_once(&l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_, &l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2__once, _init_l___private_Lean_ResolveName_0__Lean_initFn___closed__0_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_);
v___x_102_ = lean_box(0);
v___x_103_ = lean_box(2);
v___x_104_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_initFn___closed__3_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_));
v___x_105_ = 0;
v___x_106_ = 1;
v___x_107_ = l_Lean_registerEnvExtension___redArg(v___f_101_, v___x_102_, v___x_103_, v___x_104_, v___x_105_, v___x_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2____boxed(lean_object* v_a_108_){
_start:
{
lean_object* v_res_109_; 
v_res_109_ = l___private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_3876355841____hygCtx___hyg_2_();
return v_res_109_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0(lean_object* v_env_110_, lean_object* v_name_111_, lean_object* v_as_112_, size_t v_i_113_, size_t v_stop_114_){
_start:
{
uint8_t v___x_115_; 
v___x_115_ = lean_usize_dec_eq(v_i_113_, v_stop_114_);
if (v___x_115_ == 0)
{
lean_object* v___x_154__overap_116_; lean_object* v___x_117_; uint8_t v___x_118_; 
v___x_154__overap_116_ = lean_array_uget_borrowed(v_as_112_, v_i_113_);
lean_inc(v___x_154__overap_116_);
lean_inc(v_name_111_);
lean_inc_ref(v_env_110_);
v___x_117_ = lean_apply_2(v___x_154__overap_116_, v_env_110_, v_name_111_);
v___x_118_ = lean_unbox(v___x_117_);
if (v___x_118_ == 0)
{
size_t v___x_119_; size_t v___x_120_; 
v___x_119_ = ((size_t)1ULL);
v___x_120_ = lean_usize_add(v_i_113_, v___x_119_);
v_i_113_ = v___x_120_;
goto _start;
}
else
{
uint8_t v___x_122_; 
lean_dec(v_name_111_);
lean_dec_ref(v_env_110_);
v___x_122_ = lean_unbox(v___x_117_);
return v___x_122_;
}
}
else
{
uint8_t v___x_123_; 
lean_dec(v_name_111_);
lean_dec_ref(v_env_110_);
v___x_123_ = 0;
return v___x_123_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0___boxed(lean_object* v_env_124_, lean_object* v_name_125_, lean_object* v_as_126_, lean_object* v_i_127_, lean_object* v_stop_128_){
_start:
{
size_t v_i_boxed_129_; size_t v_stop_boxed_130_; uint8_t v_res_131_; lean_object* v_r_132_; 
v_i_boxed_129_ = lean_unbox_usize(v_i_127_);
lean_dec(v_i_127_);
v_stop_boxed_130_ = lean_unbox_usize(v_stop_128_);
lean_dec(v_stop_128_);
v_res_131_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0(v_env_124_, v_name_125_, v_as_126_, v_i_boxed_129_, v_stop_boxed_130_);
lean_dec_ref(v_as_126_);
v_r_132_ = lean_box(v_res_131_);
return v_r_132_;
}
}
static lean_object* _init_l_Lean_isReservedName___closed__0(void){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = l_Array_instInhabited___redArg();
return v___x_133_;
}
}
LEAN_EXPORT uint8_t lean_is_reserved_name(lean_object* v_env_134_, lean_object* v_name_135_){
_start:
{
lean_object* v___x_136_; lean_object* v_asyncMode_137_; lean_object* v___x_138_; lean_object* v___x_139_; uint8_t v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; uint8_t v___x_144_; 
v___x_136_ = l_Lean_reservedNamePredicatesExt;
v_asyncMode_137_ = lean_ctor_get(v___x_136_, 2);
v___x_138_ = lean_obj_once(&l_Lean_isReservedName___closed__0, &l_Lean_isReservedName___closed__0_once, _init_l_Lean_isReservedName___closed__0);
v___x_139_ = lean_box(0);
v___x_140_ = 0;
lean_inc_ref(v_env_134_);
v___x_141_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_138_, v___x_136_, v_env_134_, v_asyncMode_137_, v___x_139_, v___x_140_);
v___x_142_ = lean_unsigned_to_nat(0u);
v___x_143_ = lean_array_get_size(v___x_141_);
v___x_144_ = lean_nat_dec_lt(v___x_142_, v___x_143_);
if (v___x_144_ == 0)
{
lean_dec(v___x_141_);
lean_dec(v_name_135_);
lean_dec_ref(v_env_134_);
return v___x_144_;
}
else
{
if (v___x_144_ == 0)
{
lean_dec(v___x_141_);
lean_dec(v_name_135_);
lean_dec_ref(v_env_134_);
return v___x_144_;
}
else
{
size_t v___x_145_; size_t v___x_146_; uint8_t v___x_147_; 
v___x_145_ = ((size_t)0ULL);
v___x_146_ = lean_usize_of_nat(v___x_143_);
v___x_147_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_isReservedName_spec__0(v_env_134_, v_name_135_, v___x_141_, v___x_145_, v___x_146_);
lean_dec(v___x_141_);
return v___x_147_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isReservedName___boxed(lean_object* v_env_148_, lean_object* v_name_149_){
_start:
{
uint8_t v_res_150_; lean_object* v_r_151_; 
v_res_150_ = lean_is_reserved_name(v_env_148_, v_name_149_);
v_r_151_ = lean_box(v_res_150_);
return v_r_151_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11___redArg(lean_object* v_x_152_, lean_object* v_x_153_, lean_object* v_x_154_, lean_object* v_x_155_){
_start:
{
lean_object* v_ks_156_; lean_object* v_vs_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_181_; 
v_ks_156_ = lean_ctor_get(v_x_152_, 0);
v_vs_157_ = lean_ctor_get(v_x_152_, 1);
v_isSharedCheck_181_ = !lean_is_exclusive(v_x_152_);
if (v_isSharedCheck_181_ == 0)
{
v___x_159_ = v_x_152_;
v_isShared_160_ = v_isSharedCheck_181_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_vs_157_);
lean_inc(v_ks_156_);
lean_dec(v_x_152_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_181_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_161_; uint8_t v___x_162_; 
v___x_161_ = lean_array_get_size(v_ks_156_);
v___x_162_ = lean_nat_dec_lt(v_x_153_, v___x_161_);
if (v___x_162_ == 0)
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_166_; 
lean_dec(v_x_153_);
v___x_163_ = lean_array_push(v_ks_156_, v_x_154_);
v___x_164_ = lean_array_push(v_vs_157_, v_x_155_);
if (v_isShared_160_ == 0)
{
lean_ctor_set(v___x_159_, 1, v___x_164_);
lean_ctor_set(v___x_159_, 0, v___x_163_);
v___x_166_ = v___x_159_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v___x_163_);
lean_ctor_set(v_reuseFailAlloc_167_, 1, v___x_164_);
v___x_166_ = v_reuseFailAlloc_167_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
return v___x_166_;
}
}
else
{
lean_object* v_k_x27_168_; uint8_t v___x_169_; 
v_k_x27_168_ = lean_array_fget_borrowed(v_ks_156_, v_x_153_);
v___x_169_ = lean_name_eq(v_x_154_, v_k_x27_168_);
if (v___x_169_ == 0)
{
lean_object* v___x_171_; 
if (v_isShared_160_ == 0)
{
v___x_171_ = v___x_159_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v_ks_156_);
lean_ctor_set(v_reuseFailAlloc_175_, 1, v_vs_157_);
v___x_171_ = v_reuseFailAlloc_175_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_172_ = lean_unsigned_to_nat(1u);
v___x_173_ = lean_nat_add(v_x_153_, v___x_172_);
lean_dec(v_x_153_);
v_x_152_ = v___x_171_;
v_x_153_ = v___x_173_;
goto _start;
}
}
else
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_179_; 
v___x_176_ = lean_array_fset(v_ks_156_, v_x_153_, v_x_154_);
v___x_177_ = lean_array_fset(v_vs_157_, v_x_153_, v_x_155_);
lean_dec(v_x_153_);
if (v_isShared_160_ == 0)
{
lean_ctor_set(v___x_159_, 1, v___x_177_);
lean_ctor_set(v___x_159_, 0, v___x_176_);
v___x_179_ = v___x_159_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v___x_176_);
lean_ctor_set(v_reuseFailAlloc_180_, 1, v___x_177_);
v___x_179_ = v_reuseFailAlloc_180_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
return v___x_179_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9___redArg(lean_object* v_n_182_, lean_object* v_k_183_, lean_object* v_v_184_){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_185_ = lean_unsigned_to_nat(0u);
v___x_186_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11___redArg(v_n_182_, v___x_185_, v_k_183_, v_v_184_);
return v___x_186_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_187_; 
v___x_187_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(lean_object* v_x_188_, size_t v_x_189_, size_t v_x_190_, lean_object* v_x_191_, lean_object* v_x_192_){
_start:
{
if (lean_obj_tag(v_x_188_) == 0)
{
lean_object* v_es_193_; size_t v___x_194_; size_t v___x_195_; lean_object* v_j_196_; lean_object* v___x_197_; uint8_t v___x_198_; 
v_es_193_ = lean_ctor_get(v_x_188_, 0);
v___x_194_ = ((size_t)31ULL);
v___x_195_ = lean_usize_land(v_x_189_, v___x_194_);
v_j_196_ = lean_usize_to_nat(v___x_195_);
v___x_197_ = lean_array_get_size(v_es_193_);
v___x_198_ = lean_nat_dec_lt(v_j_196_, v___x_197_);
if (v___x_198_ == 0)
{
lean_dec(v_j_196_);
lean_dec(v_x_192_);
lean_dec(v_x_191_);
return v_x_188_;
}
else
{
lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_237_; 
lean_inc_ref(v_es_193_);
v_isSharedCheck_237_ = !lean_is_exclusive(v_x_188_);
if (v_isSharedCheck_237_ == 0)
{
lean_object* v_unused_238_; 
v_unused_238_ = lean_ctor_get(v_x_188_, 0);
lean_dec(v_unused_238_);
v___x_200_ = v_x_188_;
v_isShared_201_ = v_isSharedCheck_237_;
goto v_resetjp_199_;
}
else
{
lean_dec(v_x_188_);
v___x_200_ = lean_box(0);
v_isShared_201_ = v_isSharedCheck_237_;
goto v_resetjp_199_;
}
v_resetjp_199_:
{
lean_object* v_v_202_; lean_object* v___x_203_; lean_object* v_xs_x27_204_; lean_object* v___y_206_; 
v_v_202_ = lean_array_fget(v_es_193_, v_j_196_);
v___x_203_ = lean_box(0);
v_xs_x27_204_ = lean_array_fset(v_es_193_, v_j_196_, v___x_203_);
switch(lean_obj_tag(v_v_202_))
{
case 0:
{
lean_object* v_key_211_; lean_object* v_val_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_222_; 
v_key_211_ = lean_ctor_get(v_v_202_, 0);
v_val_212_ = lean_ctor_get(v_v_202_, 1);
v_isSharedCheck_222_ = !lean_is_exclusive(v_v_202_);
if (v_isSharedCheck_222_ == 0)
{
v___x_214_ = v_v_202_;
v_isShared_215_ = v_isSharedCheck_222_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_val_212_);
lean_inc(v_key_211_);
lean_dec(v_v_202_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_222_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
uint8_t v___x_216_; 
v___x_216_ = lean_name_eq(v_x_191_, v_key_211_);
if (v___x_216_ == 0)
{
lean_object* v___x_217_; lean_object* v___x_218_; 
lean_del_object(v___x_214_);
v___x_217_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_211_, v_val_212_, v_x_191_, v_x_192_);
v___x_218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_218_, 0, v___x_217_);
v___y_206_ = v___x_218_;
goto v___jp_205_;
}
else
{
lean_object* v___x_220_; 
lean_dec(v_val_212_);
lean_dec(v_key_211_);
if (v_isShared_215_ == 0)
{
lean_ctor_set(v___x_214_, 1, v_x_192_);
lean_ctor_set(v___x_214_, 0, v_x_191_);
v___x_220_ = v___x_214_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v_x_191_);
lean_ctor_set(v_reuseFailAlloc_221_, 1, v_x_192_);
v___x_220_ = v_reuseFailAlloc_221_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
v___y_206_ = v___x_220_;
goto v___jp_205_;
}
}
}
}
case 1:
{
lean_object* v_node_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_235_; 
v_node_223_ = lean_ctor_get(v_v_202_, 0);
v_isSharedCheck_235_ = !lean_is_exclusive(v_v_202_);
if (v_isSharedCheck_235_ == 0)
{
v___x_225_ = v_v_202_;
v_isShared_226_ = v_isSharedCheck_235_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_node_223_);
lean_dec(v_v_202_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_235_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
size_t v___x_227_; size_t v___x_228_; size_t v___x_229_; size_t v___x_230_; lean_object* v___x_231_; lean_object* v___x_233_; 
v___x_227_ = ((size_t)5ULL);
v___x_228_ = lean_usize_shift_right(v_x_189_, v___x_227_);
v___x_229_ = ((size_t)1ULL);
v___x_230_ = lean_usize_add(v_x_190_, v___x_229_);
v___x_231_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(v_node_223_, v___x_228_, v___x_230_, v_x_191_, v_x_192_);
if (v_isShared_226_ == 0)
{
lean_ctor_set(v___x_225_, 0, v___x_231_);
v___x_233_ = v___x_225_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v___x_231_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
v___y_206_ = v___x_233_;
goto v___jp_205_;
}
}
}
default: 
{
lean_object* v___x_236_; 
v___x_236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_236_, 0, v_x_191_);
lean_ctor_set(v___x_236_, 1, v_x_192_);
v___y_206_ = v___x_236_;
goto v___jp_205_;
}
}
v___jp_205_:
{
lean_object* v___x_207_; lean_object* v___x_209_; 
v___x_207_ = lean_array_fset(v_xs_x27_204_, v_j_196_, v___y_206_);
lean_dec(v_j_196_);
if (v_isShared_201_ == 0)
{
lean_ctor_set(v___x_200_, 0, v___x_207_);
v___x_209_ = v___x_200_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v___x_207_);
v___x_209_ = v_reuseFailAlloc_210_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
return v___x_209_;
}
}
}
}
}
else
{
lean_object* v_ks_239_; lean_object* v_vs_240_; lean_object* v___x_242_; uint8_t v_isShared_243_; uint8_t v_isSharedCheck_258_; 
v_ks_239_ = lean_ctor_get(v_x_188_, 0);
v_vs_240_ = lean_ctor_get(v_x_188_, 1);
v_isSharedCheck_258_ = !lean_is_exclusive(v_x_188_);
if (v_isSharedCheck_258_ == 0)
{
v___x_242_ = v_x_188_;
v_isShared_243_ = v_isSharedCheck_258_;
goto v_resetjp_241_;
}
else
{
lean_inc(v_vs_240_);
lean_inc(v_ks_239_);
lean_dec(v_x_188_);
v___x_242_ = lean_box(0);
v_isShared_243_ = v_isSharedCheck_258_;
goto v_resetjp_241_;
}
v_resetjp_241_:
{
lean_object* v___x_245_; 
if (v_isShared_243_ == 0)
{
v___x_245_ = v___x_242_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v_ks_239_);
lean_ctor_set(v_reuseFailAlloc_257_, 1, v_vs_240_);
v___x_245_ = v_reuseFailAlloc_257_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
lean_object* v_newNode_246_; size_t v___x_247_; uint8_t v___x_248_; 
v_newNode_246_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9___redArg(v___x_245_, v_x_191_, v_x_192_);
v___x_247_ = ((size_t)7ULL);
v___x_248_ = lean_usize_dec_le(v___x_247_, v_x_190_);
if (v___x_248_ == 0)
{
lean_object* v___x_249_; lean_object* v___x_250_; uint8_t v___x_251_; 
v___x_249_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_246_);
v___x_250_ = lean_unsigned_to_nat(4u);
v___x_251_ = lean_nat_dec_lt(v___x_249_, v___x_250_);
lean_dec(v___x_249_);
if (v___x_251_ == 0)
{
lean_object* v_ks_252_; lean_object* v_vs_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
v_ks_252_ = lean_ctor_get(v_newNode_246_, 0);
lean_inc_ref(v_ks_252_);
v_vs_253_ = lean_ctor_get(v_newNode_246_, 1);
lean_inc_ref(v_vs_253_);
lean_dec_ref(v_newNode_246_);
v___x_254_ = lean_unsigned_to_nat(0u);
v___x_255_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___closed__0);
v___x_256_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg(v_x_190_, v_ks_252_, v_vs_253_, v___x_254_, v___x_255_);
lean_dec_ref(v_vs_253_);
lean_dec_ref(v_ks_252_);
return v___x_256_;
}
else
{
return v_newNode_246_;
}
}
else
{
return v_newNode_246_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg(size_t v_depth_259_, lean_object* v_keys_260_, lean_object* v_vals_261_, lean_object* v_i_262_, lean_object* v_entries_263_){
_start:
{
lean_object* v___x_264_; uint8_t v___x_265_; 
v___x_264_ = lean_array_get_size(v_keys_260_);
v___x_265_ = lean_nat_dec_lt(v_i_262_, v___x_264_);
if (v___x_265_ == 0)
{
lean_dec(v_i_262_);
return v_entries_263_;
}
else
{
lean_object* v_k_266_; lean_object* v_v_267_; uint64_t v___y_269_; 
v_k_266_ = lean_array_fget_borrowed(v_keys_260_, v_i_262_);
v_v_267_ = lean_array_fget_borrowed(v_vals_261_, v_i_262_);
if (lean_obj_tag(v_k_266_) == 0)
{
uint64_t v___x_280_; 
v___x_280_ = 1723ULL;
v___y_269_ = v___x_280_;
goto v___jp_268_;
}
else
{
uint64_t v_hash_281_; 
v_hash_281_ = lean_ctor_get_uint64(v_k_266_, sizeof(void*)*2);
v___y_269_ = v_hash_281_;
goto v___jp_268_;
}
v___jp_268_:
{
size_t v_h_270_; size_t v___x_271_; lean_object* v___x_272_; size_t v___x_273_; size_t v___x_274_; size_t v___x_275_; size_t v_h_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v_h_270_ = lean_uint64_to_usize(v___y_269_);
v___x_271_ = ((size_t)5ULL);
v___x_272_ = lean_unsigned_to_nat(1u);
v___x_273_ = ((size_t)1ULL);
v___x_274_ = lean_usize_sub(v_depth_259_, v___x_273_);
v___x_275_ = lean_usize_mul(v___x_271_, v___x_274_);
v_h_276_ = lean_usize_shift_right(v_h_270_, v___x_275_);
v___x_277_ = lean_nat_add(v_i_262_, v___x_272_);
lean_dec(v_i_262_);
lean_inc(v_v_267_);
lean_inc(v_k_266_);
v___x_278_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(v_entries_263_, v_h_276_, v_depth_259_, v_k_266_, v_v_267_);
v_i_262_ = v___x_277_;
v_entries_263_ = v___x_278_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg___boxed(lean_object* v_depth_282_, lean_object* v_keys_283_, lean_object* v_vals_284_, lean_object* v_i_285_, lean_object* v_entries_286_){
_start:
{
size_t v_depth_boxed_287_; lean_object* v_res_288_; 
v_depth_boxed_287_ = lean_unbox_usize(v_depth_282_);
lean_dec(v_depth_282_);
v_res_288_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg(v_depth_boxed_287_, v_keys_283_, v_vals_284_, v_i_285_, v_entries_286_);
lean_dec_ref(v_vals_284_);
lean_dec_ref(v_keys_283_);
return v_res_288_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg___boxed(lean_object* v_x_289_, lean_object* v_x_290_, lean_object* v_x_291_, lean_object* v_x_292_, lean_object* v_x_293_){
_start:
{
size_t v_x_1075__boxed_294_; size_t v_x_1076__boxed_295_; lean_object* v_res_296_; 
v_x_1075__boxed_294_ = lean_unbox_usize(v_x_290_);
lean_dec(v_x_290_);
v_x_1076__boxed_295_ = lean_unbox_usize(v_x_291_);
lean_dec(v_x_291_);
v_res_296_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(v_x_289_, v_x_1075__boxed_294_, v_x_1076__boxed_295_, v_x_292_, v_x_293_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3___redArg(lean_object* v_x_297_, lean_object* v_x_298_, lean_object* v_x_299_){
_start:
{
uint64_t v___y_301_; 
if (lean_obj_tag(v_x_298_) == 0)
{
uint64_t v___x_305_; 
v___x_305_ = 1723ULL;
v___y_301_ = v___x_305_;
goto v___jp_300_;
}
else
{
uint64_t v_hash_306_; 
v_hash_306_ = lean_ctor_get_uint64(v_x_298_, sizeof(void*)*2);
v___y_301_ = v_hash_306_;
goto v___jp_300_;
}
v___jp_300_:
{
size_t v___x_302_; size_t v___x_303_; lean_object* v___x_304_; 
v___x_302_ = lean_uint64_to_usize(v___y_301_);
v___x_303_ = ((size_t)1ULL);
v___x_304_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(v_x_297_, v___x_302_, v___x_303_, v_x_298_, v_x_299_);
return v___x_304_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16___redArg(lean_object* v_x_307_, lean_object* v_x_308_){
_start:
{
if (lean_obj_tag(v_x_308_) == 0)
{
return v_x_307_;
}
else
{
lean_object* v_key_309_; lean_object* v_value_310_; lean_object* v_tail_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_337_; 
v_key_309_ = lean_ctor_get(v_x_308_, 0);
v_value_310_ = lean_ctor_get(v_x_308_, 1);
v_tail_311_ = lean_ctor_get(v_x_308_, 2);
v_isSharedCheck_337_ = !lean_is_exclusive(v_x_308_);
if (v_isSharedCheck_337_ == 0)
{
v___x_313_ = v_x_308_;
v_isShared_314_ = v_isSharedCheck_337_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_tail_311_);
lean_inc(v_value_310_);
lean_inc(v_key_309_);
lean_dec(v_x_308_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_337_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v___x_315_; uint64_t v___y_317_; 
v___x_315_ = lean_array_get_size(v_x_307_);
if (lean_obj_tag(v_key_309_) == 0)
{
uint64_t v___x_335_; 
v___x_335_ = 1723ULL;
v___y_317_ = v___x_335_;
goto v___jp_316_;
}
else
{
uint64_t v_hash_336_; 
v_hash_336_ = lean_ctor_get_uint64(v_key_309_, sizeof(void*)*2);
v___y_317_ = v_hash_336_;
goto v___jp_316_;
}
v___jp_316_:
{
uint64_t v___x_318_; uint64_t v___x_319_; uint64_t v_fold_320_; uint64_t v___x_321_; uint64_t v___x_322_; uint64_t v___x_323_; size_t v___x_324_; size_t v___x_325_; size_t v___x_326_; size_t v___x_327_; size_t v___x_328_; lean_object* v___x_329_; lean_object* v___x_331_; 
v___x_318_ = 32ULL;
v___x_319_ = lean_uint64_shift_right(v___y_317_, v___x_318_);
v_fold_320_ = lean_uint64_xor(v___y_317_, v___x_319_);
v___x_321_ = 16ULL;
v___x_322_ = lean_uint64_shift_right(v_fold_320_, v___x_321_);
v___x_323_ = lean_uint64_xor(v_fold_320_, v___x_322_);
v___x_324_ = lean_uint64_to_usize(v___x_323_);
v___x_325_ = lean_usize_of_nat(v___x_315_);
v___x_326_ = ((size_t)1ULL);
v___x_327_ = lean_usize_sub(v___x_325_, v___x_326_);
v___x_328_ = lean_usize_land(v___x_324_, v___x_327_);
v___x_329_ = lean_array_uget_borrowed(v_x_307_, v___x_328_);
lean_inc(v___x_329_);
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 2, v___x_329_);
v___x_331_ = v___x_313_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v_key_309_);
lean_ctor_set(v_reuseFailAlloc_334_, 1, v_value_310_);
lean_ctor_set(v_reuseFailAlloc_334_, 2, v___x_329_);
v___x_331_ = v_reuseFailAlloc_334_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
lean_object* v___x_332_; 
v___x_332_ = lean_array_uset(v_x_307_, v___x_328_, v___x_331_);
v_x_307_ = v___x_332_;
v_x_308_ = v_tail_311_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14___redArg(lean_object* v_i_338_, lean_object* v_source_339_, lean_object* v_target_340_){
_start:
{
lean_object* v___x_341_; uint8_t v___x_342_; 
v___x_341_ = lean_array_get_size(v_source_339_);
v___x_342_ = lean_nat_dec_lt(v_i_338_, v___x_341_);
if (v___x_342_ == 0)
{
lean_dec_ref(v_source_339_);
lean_dec(v_i_338_);
return v_target_340_;
}
else
{
lean_object* v_es_343_; lean_object* v___x_344_; lean_object* v_source_345_; lean_object* v_target_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v_es_343_ = lean_array_fget(v_source_339_, v_i_338_);
v___x_344_ = lean_box(0);
v_source_345_ = lean_array_fset(v_source_339_, v_i_338_, v___x_344_);
v_target_346_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16___redArg(v_target_340_, v_es_343_);
v___x_347_ = lean_unsigned_to_nat(1u);
v___x_348_ = lean_nat_add(v_i_338_, v___x_347_);
lean_dec(v_i_338_);
v_i_338_ = v___x_348_;
v_source_339_ = v_source_345_;
v_target_340_ = v_target_346_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9___redArg(lean_object* v_data_350_){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v_nbuckets_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_351_ = lean_array_get_size(v_data_350_);
v___x_352_ = lean_unsigned_to_nat(2u);
v_nbuckets_353_ = lean_nat_mul(v___x_351_, v___x_352_);
v___x_354_ = lean_unsigned_to_nat(0u);
v___x_355_ = lean_box(0);
v___x_356_ = lean_mk_array(v_nbuckets_353_, v___x_355_);
v___x_357_ = lean_array_propagate_mark(v_data_350_, v___x_356_);
v___x_358_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14___redArg(v___x_354_, v_data_350_, v___x_357_);
return v___x_358_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg(lean_object* v_a_359_, lean_object* v_x_360_){
_start:
{
if (lean_obj_tag(v_x_360_) == 0)
{
uint8_t v___x_361_; 
v___x_361_ = 0;
return v___x_361_;
}
else
{
lean_object* v_key_362_; lean_object* v_tail_363_; uint8_t v___x_364_; 
v_key_362_ = lean_ctor_get(v_x_360_, 0);
v_tail_363_ = lean_ctor_get(v_x_360_, 2);
v___x_364_ = lean_name_eq(v_key_362_, v_a_359_);
if (v___x_364_ == 0)
{
v_x_360_ = v_tail_363_;
goto _start;
}
else
{
return v___x_364_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg___boxed(lean_object* v_a_366_, lean_object* v_x_367_){
_start:
{
uint8_t v_res_368_; lean_object* v_r_369_; 
v_res_368_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg(v_a_366_, v_x_367_);
lean_dec(v_x_367_);
lean_dec(v_a_366_);
v_r_369_ = lean_box(v_res_368_);
return v_r_369_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10___redArg(lean_object* v_a_370_, lean_object* v_b_371_, lean_object* v_x_372_){
_start:
{
if (lean_obj_tag(v_x_372_) == 0)
{
lean_dec(v_b_371_);
lean_dec(v_a_370_);
return v_x_372_;
}
else
{
lean_object* v_key_373_; lean_object* v_value_374_; lean_object* v_tail_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_387_; 
v_key_373_ = lean_ctor_get(v_x_372_, 0);
v_value_374_ = lean_ctor_get(v_x_372_, 1);
v_tail_375_ = lean_ctor_get(v_x_372_, 2);
v_isSharedCheck_387_ = !lean_is_exclusive(v_x_372_);
if (v_isSharedCheck_387_ == 0)
{
v___x_377_ = v_x_372_;
v_isShared_378_ = v_isSharedCheck_387_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_tail_375_);
lean_inc(v_value_374_);
lean_inc(v_key_373_);
lean_dec(v_x_372_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_387_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
uint8_t v___x_379_; 
v___x_379_ = lean_name_eq(v_key_373_, v_a_370_);
if (v___x_379_ == 0)
{
lean_object* v___x_380_; lean_object* v___x_382_; 
v___x_380_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10___redArg(v_a_370_, v_b_371_, v_tail_375_);
if (v_isShared_378_ == 0)
{
lean_ctor_set(v___x_377_, 2, v___x_380_);
v___x_382_ = v___x_377_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_key_373_);
lean_ctor_set(v_reuseFailAlloc_383_, 1, v_value_374_);
lean_ctor_set(v_reuseFailAlloc_383_, 2, v___x_380_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
else
{
lean_object* v___x_385_; 
lean_dec(v_value_374_);
lean_dec(v_key_373_);
if (v_isShared_378_ == 0)
{
lean_ctor_set(v___x_377_, 1, v_b_371_);
lean_ctor_set(v___x_377_, 0, v_a_370_);
v___x_385_ = v___x_377_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v_a_370_);
lean_ctor_set(v_reuseFailAlloc_386_, 1, v_b_371_);
lean_ctor_set(v_reuseFailAlloc_386_, 2, v_tail_375_);
v___x_385_ = v_reuseFailAlloc_386_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
return v___x_385_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4___redArg(lean_object* v_m_388_, lean_object* v_a_389_, lean_object* v_b_390_){
_start:
{
lean_object* v_size_391_; lean_object* v_buckets_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_438_; 
v_size_391_ = lean_ctor_get(v_m_388_, 0);
v_buckets_392_ = lean_ctor_get(v_m_388_, 1);
v_isSharedCheck_438_ = !lean_is_exclusive(v_m_388_);
if (v_isSharedCheck_438_ == 0)
{
v___x_394_ = v_m_388_;
v_isShared_395_ = v_isSharedCheck_438_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_buckets_392_);
lean_inc(v_size_391_);
lean_dec(v_m_388_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_438_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_396_; uint64_t v___y_398_; 
v___x_396_ = lean_array_get_size(v_buckets_392_);
if (lean_obj_tag(v_a_389_) == 0)
{
uint64_t v___x_436_; 
v___x_436_ = 1723ULL;
v___y_398_ = v___x_436_;
goto v___jp_397_;
}
else
{
uint64_t v_hash_437_; 
v_hash_437_ = lean_ctor_get_uint64(v_a_389_, sizeof(void*)*2);
v___y_398_ = v_hash_437_;
goto v___jp_397_;
}
v___jp_397_:
{
uint64_t v___x_399_; uint64_t v___x_400_; uint64_t v_fold_401_; uint64_t v___x_402_; uint64_t v___x_403_; uint64_t v___x_404_; size_t v___x_405_; size_t v___x_406_; size_t v___x_407_; size_t v___x_408_; size_t v___x_409_; lean_object* v_bkt_410_; uint8_t v___x_411_; 
v___x_399_ = 32ULL;
v___x_400_ = lean_uint64_shift_right(v___y_398_, v___x_399_);
v_fold_401_ = lean_uint64_xor(v___y_398_, v___x_400_);
v___x_402_ = 16ULL;
v___x_403_ = lean_uint64_shift_right(v_fold_401_, v___x_402_);
v___x_404_ = lean_uint64_xor(v_fold_401_, v___x_403_);
v___x_405_ = lean_uint64_to_usize(v___x_404_);
v___x_406_ = lean_usize_of_nat(v___x_396_);
v___x_407_ = ((size_t)1ULL);
v___x_408_ = lean_usize_sub(v___x_406_, v___x_407_);
v___x_409_ = lean_usize_land(v___x_405_, v___x_408_);
v_bkt_410_ = lean_array_uget_borrowed(v_buckets_392_, v___x_409_);
v___x_411_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg(v_a_389_, v_bkt_410_);
if (v___x_411_ == 0)
{
lean_object* v___x_412_; lean_object* v_size_x27_413_; lean_object* v___x_414_; lean_object* v_buckets_x27_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; uint8_t v___x_421_; 
v___x_412_ = lean_unsigned_to_nat(1u);
v_size_x27_413_ = lean_nat_add(v_size_391_, v___x_412_);
lean_dec(v_size_391_);
lean_inc(v_bkt_410_);
v___x_414_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_414_, 0, v_a_389_);
lean_ctor_set(v___x_414_, 1, v_b_390_);
lean_ctor_set(v___x_414_, 2, v_bkt_410_);
v_buckets_x27_415_ = lean_array_uset(v_buckets_392_, v___x_409_, v___x_414_);
v___x_416_ = lean_unsigned_to_nat(4u);
v___x_417_ = lean_nat_mul(v_size_x27_413_, v___x_416_);
v___x_418_ = lean_unsigned_to_nat(3u);
v___x_419_ = lean_nat_div(v___x_417_, v___x_418_);
lean_dec(v___x_417_);
v___x_420_ = lean_array_get_size(v_buckets_x27_415_);
v___x_421_ = lean_nat_dec_le(v___x_419_, v___x_420_);
lean_dec(v___x_419_);
if (v___x_421_ == 0)
{
lean_object* v_val_422_; lean_object* v___x_424_; 
v_val_422_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9___redArg(v_buckets_x27_415_);
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 1, v_val_422_);
lean_ctor_set(v___x_394_, 0, v_size_x27_413_);
v___x_424_ = v___x_394_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v_size_x27_413_);
lean_ctor_set(v_reuseFailAlloc_425_, 1, v_val_422_);
v___x_424_ = v_reuseFailAlloc_425_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
return v___x_424_;
}
}
else
{
lean_object* v___x_427_; 
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 1, v_buckets_x27_415_);
lean_ctor_set(v___x_394_, 0, v_size_x27_413_);
v___x_427_ = v___x_394_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v_size_x27_413_);
lean_ctor_set(v_reuseFailAlloc_428_, 1, v_buckets_x27_415_);
v___x_427_ = v_reuseFailAlloc_428_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
return v___x_427_;
}
}
}
else
{
lean_object* v___x_429_; lean_object* v_buckets_x27_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_434_; 
lean_inc(v_bkt_410_);
v___x_429_ = lean_box(0);
v_buckets_x27_430_ = lean_array_uset(v_buckets_392_, v___x_409_, v___x_429_);
v___x_431_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10___redArg(v_a_389_, v_b_390_, v_bkt_410_);
v___x_432_ = lean_array_uset(v_buckets_x27_430_, v___x_409_, v___x_431_);
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 1, v___x_432_);
v___x_434_ = v___x_394_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_size_391_);
lean_ctor_set(v_reuseFailAlloc_435_, 1, v___x_432_);
v___x_434_ = v_reuseFailAlloc_435_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
return v___x_434_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1___redArg(lean_object* v_x_439_, lean_object* v_x_440_, lean_object* v_x_441_){
_start:
{
uint8_t v_stage_u2081_442_; 
v_stage_u2081_442_ = lean_ctor_get_uint8(v_x_439_, sizeof(void*)*2);
if (v_stage_u2081_442_ == 0)
{
lean_object* v_map_u2081_443_; lean_object* v_map_u2082_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_452_; 
v_map_u2081_443_ = lean_ctor_get(v_x_439_, 0);
v_map_u2082_444_ = lean_ctor_get(v_x_439_, 1);
v_isSharedCheck_452_ = !lean_is_exclusive(v_x_439_);
if (v_isSharedCheck_452_ == 0)
{
v___x_446_ = v_x_439_;
v_isShared_447_ = v_isSharedCheck_452_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_map_u2082_444_);
lean_inc(v_map_u2081_443_);
lean_dec(v_x_439_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_452_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_448_; lean_object* v___x_450_; 
v___x_448_ = l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3___redArg(v_map_u2082_444_, v_x_440_, v_x_441_);
if (v_isShared_447_ == 0)
{
lean_ctor_set(v___x_446_, 1, v___x_448_);
v___x_450_ = v___x_446_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_map_u2081_443_);
lean_ctor_set(v_reuseFailAlloc_451_, 1, v___x_448_);
lean_ctor_set_uint8(v_reuseFailAlloc_451_, sizeof(void*)*2, v_stage_u2081_442_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
return v___x_450_;
}
}
}
else
{
lean_object* v_map_u2081_453_; lean_object* v_map_u2082_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_462_; 
v_map_u2081_453_ = lean_ctor_get(v_x_439_, 0);
v_map_u2082_454_ = lean_ctor_get(v_x_439_, 1);
v_isSharedCheck_462_ = !lean_is_exclusive(v_x_439_);
if (v_isSharedCheck_462_ == 0)
{
v___x_456_ = v_x_439_;
v_isShared_457_ = v_isSharedCheck_462_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_map_u2082_454_);
lean_inc(v_map_u2081_453_);
lean_dec(v_x_439_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_462_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_458_; lean_object* v___x_460_; 
v___x_458_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4___redArg(v_map_u2081_453_, v_x_440_, v_x_441_);
if (v_isShared_457_ == 0)
{
lean_ctor_set(v___x_456_, 0, v___x_458_);
v___x_460_ = v___x_456_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v___x_458_);
lean_ctor_set(v_reuseFailAlloc_461_, 1, v_map_u2082_454_);
lean_ctor_set_uint8(v_reuseFailAlloc_461_, sizeof(void*)*2, v_stage_u2081_442_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
return v___x_460_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg(lean_object* v_a_463_, lean_object* v_x_464_){
_start:
{
if (lean_obj_tag(v_x_464_) == 0)
{
lean_object* v___x_465_; 
v___x_465_ = lean_box(0);
return v___x_465_;
}
else
{
lean_object* v_key_466_; lean_object* v_value_467_; lean_object* v_tail_468_; uint8_t v___x_469_; 
v_key_466_ = lean_ctor_get(v_x_464_, 0);
v_value_467_ = lean_ctor_get(v_x_464_, 1);
v_tail_468_ = lean_ctor_get(v_x_464_, 2);
v___x_469_ = lean_name_eq(v_key_466_, v_a_463_);
if (v___x_469_ == 0)
{
v_x_464_ = v_tail_468_;
goto _start;
}
else
{
lean_object* v___x_471_; 
lean_inc(v_value_467_);
v___x_471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_471_, 0, v_value_467_);
return v___x_471_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_a_472_, lean_object* v_x_473_){
_start:
{
lean_object* v_res_474_; 
v_res_474_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg(v_a_472_, v_x_473_);
lean_dec(v_x_473_);
lean_dec(v_a_472_);
return v_res_474_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(lean_object* v_m_475_, lean_object* v_a_476_){
_start:
{
lean_object* v_buckets_477_; lean_object* v___x_478_; uint64_t v___y_480_; 
v_buckets_477_ = lean_ctor_get(v_m_475_, 1);
v___x_478_ = lean_array_get_size(v_buckets_477_);
if (lean_obj_tag(v_a_476_) == 0)
{
uint64_t v___x_494_; 
v___x_494_ = 1723ULL;
v___y_480_ = v___x_494_;
goto v___jp_479_;
}
else
{
uint64_t v_hash_495_; 
v_hash_495_ = lean_ctor_get_uint64(v_a_476_, sizeof(void*)*2);
v___y_480_ = v_hash_495_;
goto v___jp_479_;
}
v___jp_479_:
{
uint64_t v___x_481_; uint64_t v___x_482_; uint64_t v_fold_483_; uint64_t v___x_484_; uint64_t v___x_485_; uint64_t v___x_486_; size_t v___x_487_; size_t v___x_488_; size_t v___x_489_; size_t v___x_490_; size_t v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_481_ = 32ULL;
v___x_482_ = lean_uint64_shift_right(v___y_480_, v___x_481_);
v_fold_483_ = lean_uint64_xor(v___y_480_, v___x_482_);
v___x_484_ = 16ULL;
v___x_485_ = lean_uint64_shift_right(v_fold_483_, v___x_484_);
v___x_486_ = lean_uint64_xor(v_fold_483_, v___x_485_);
v___x_487_ = lean_uint64_to_usize(v___x_486_);
v___x_488_ = lean_usize_of_nat(v___x_478_);
v___x_489_ = ((size_t)1ULL);
v___x_490_ = lean_usize_sub(v___x_488_, v___x_489_);
v___x_491_ = lean_usize_land(v___x_487_, v___x_490_);
v___x_492_ = lean_array_uget_borrowed(v_buckets_477_, v___x_491_);
v___x_493_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg(v_a_476_, v___x_492_);
return v___x_493_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg___boxed(lean_object* v_m_496_, lean_object* v_a_497_){
_start:
{
lean_object* v_res_498_; 
v_res_498_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(v_m_496_, v_a_497_);
lean_dec(v_a_497_);
lean_dec_ref(v_m_496_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_keys_499_, lean_object* v_vals_500_, lean_object* v_i_501_, lean_object* v_k_502_){
_start:
{
lean_object* v___x_503_; uint8_t v___x_504_; 
v___x_503_ = lean_array_get_size(v_keys_499_);
v___x_504_ = lean_nat_dec_lt(v_i_501_, v___x_503_);
if (v___x_504_ == 0)
{
lean_object* v___x_505_; 
lean_dec(v_i_501_);
v___x_505_ = lean_box(0);
return v___x_505_;
}
else
{
lean_object* v_k_x27_506_; uint8_t v___x_507_; 
v_k_x27_506_ = lean_array_fget_borrowed(v_keys_499_, v_i_501_);
v___x_507_ = lean_name_eq(v_k_502_, v_k_x27_506_);
if (v___x_507_ == 0)
{
lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_508_ = lean_unsigned_to_nat(1u);
v___x_509_ = lean_nat_add(v_i_501_, v___x_508_);
lean_dec(v_i_501_);
v_i_501_ = v___x_509_;
goto _start;
}
else
{
lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_511_ = lean_array_fget_borrowed(v_vals_500_, v_i_501_);
lean_dec(v_i_501_);
lean_inc(v___x_511_);
v___x_512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_512_, 0, v___x_511_);
return v___x_512_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_keys_513_, lean_object* v_vals_514_, lean_object* v_i_515_, lean_object* v_k_516_){
_start:
{
lean_object* v_res_517_; 
v_res_517_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg(v_keys_513_, v_vals_514_, v_i_515_, v_k_516_);
lean_dec(v_k_516_);
lean_dec_ref(v_vals_514_);
lean_dec_ref(v_keys_513_);
return v_res_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg(lean_object* v_x_518_, size_t v_x_519_, lean_object* v_x_520_){
_start:
{
if (lean_obj_tag(v_x_518_) == 0)
{
lean_object* v_es_521_; lean_object* v___x_522_; size_t v___x_523_; size_t v___x_524_; lean_object* v_j_525_; lean_object* v___x_526_; 
v_es_521_ = lean_ctor_get(v_x_518_, 0);
v___x_522_ = lean_box(2);
v___x_523_ = ((size_t)31ULL);
v___x_524_ = lean_usize_land(v_x_519_, v___x_523_);
v_j_525_ = lean_usize_to_nat(v___x_524_);
v___x_526_ = lean_array_get_borrowed(v___x_522_, v_es_521_, v_j_525_);
lean_dec(v_j_525_);
switch(lean_obj_tag(v___x_526_))
{
case 0:
{
lean_object* v_key_527_; lean_object* v_val_528_; uint8_t v___x_529_; 
v_key_527_ = lean_ctor_get(v___x_526_, 0);
v_val_528_ = lean_ctor_get(v___x_526_, 1);
v___x_529_ = lean_name_eq(v_x_520_, v_key_527_);
if (v___x_529_ == 0)
{
lean_object* v___x_530_; 
v___x_530_ = lean_box(0);
return v___x_530_;
}
else
{
lean_object* v___x_531_; 
lean_inc(v_val_528_);
v___x_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_531_, 0, v_val_528_);
return v___x_531_;
}
}
case 1:
{
lean_object* v_node_532_; size_t v___x_533_; size_t v___x_534_; 
v_node_532_ = lean_ctor_get(v___x_526_, 0);
v___x_533_ = ((size_t)5ULL);
v___x_534_ = lean_usize_shift_right(v_x_519_, v___x_533_);
v_x_518_ = v_node_532_;
v_x_519_ = v___x_534_;
goto _start;
}
default: 
{
lean_object* v___x_536_; 
v___x_536_ = lean_box(0);
return v___x_536_;
}
}
}
else
{
lean_object* v_ks_537_; lean_object* v_vs_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v_ks_537_ = lean_ctor_get(v_x_518_, 0);
v_vs_538_ = lean_ctor_get(v_x_518_, 1);
v___x_539_ = lean_unsigned_to_nat(0u);
v___x_540_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg(v_ks_537_, v_vs_538_, v___x_539_, v_x_520_);
return v___x_540_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_541_, lean_object* v_x_542_, lean_object* v_x_543_){
_start:
{
size_t v_x_1579__boxed_544_; lean_object* v_res_545_; 
v_x_1579__boxed_544_ = lean_unbox_usize(v_x_542_);
lean_dec(v_x_542_);
v_res_545_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg(v_x_541_, v_x_1579__boxed_544_, v_x_543_);
lean_dec(v_x_543_);
lean_dec_ref(v_x_541_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg(lean_object* v_x_546_, lean_object* v_x_547_){
_start:
{
uint64_t v___y_549_; 
if (lean_obj_tag(v_x_547_) == 0)
{
uint64_t v___x_552_; 
v___x_552_ = 1723ULL;
v___y_549_ = v___x_552_;
goto v___jp_548_;
}
else
{
uint64_t v_hash_553_; 
v_hash_553_ = lean_ctor_get_uint64(v_x_547_, sizeof(void*)*2);
v___y_549_ = v_hash_553_;
goto v___jp_548_;
}
v___jp_548_:
{
size_t v___x_550_; lean_object* v___x_551_; 
v___x_550_ = lean_uint64_to_usize(v___y_549_);
v___x_551_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg(v_x_546_, v___x_550_, v_x_547_);
return v___x_551_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg___boxed(lean_object* v_x_554_, lean_object* v_x_555_){
_start:
{
lean_object* v_res_556_; 
v_res_556_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg(v_x_554_, v_x_555_);
lean_dec(v_x_555_);
lean_dec_ref(v_x_554_);
return v_res_556_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(lean_object* v_x_557_, lean_object* v_x_558_){
_start:
{
uint8_t v_stage_u2081_559_; 
v_stage_u2081_559_ = lean_ctor_get_uint8(v_x_557_, sizeof(void*)*2);
if (v_stage_u2081_559_ == 0)
{
lean_object* v_map_u2081_560_; lean_object* v_map_u2082_561_; lean_object* v___x_562_; 
v_map_u2081_560_ = lean_ctor_get(v_x_557_, 0);
v_map_u2082_561_ = lean_ctor_get(v_x_557_, 1);
v___x_562_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg(v_map_u2082_561_, v_x_558_);
if (lean_obj_tag(v___x_562_) == 0)
{
lean_object* v___x_563_; 
v___x_563_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(v_map_u2081_560_, v_x_558_);
return v___x_563_;
}
else
{
return v___x_562_;
}
}
else
{
lean_object* v_map_u2081_564_; lean_object* v___x_565_; 
v_map_u2081_564_ = lean_ctor_get(v_x_557_, 0);
v___x_565_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(v_map_u2081_564_, v_x_558_);
return v___x_565_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg___boxed(lean_object* v_x_566_, lean_object* v_x_567_){
_start:
{
lean_object* v_res_568_; 
v_res_568_ = l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(v_x_566_, v_x_567_);
lean_dec(v_x_567_);
lean_dec_ref(v_x_566_);
return v_res_568_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_addAliasEntry_spec__2(lean_object* v_a_569_, lean_object* v_x_570_){
_start:
{
if (lean_obj_tag(v_x_570_) == 0)
{
uint8_t v___x_571_; 
v___x_571_ = 0;
return v___x_571_;
}
else
{
lean_object* v_head_572_; lean_object* v_tail_573_; uint8_t v___x_574_; 
v_head_572_ = lean_ctor_get(v_x_570_, 0);
v_tail_573_ = lean_ctor_get(v_x_570_, 1);
v___x_574_ = lean_name_eq(v_a_569_, v_head_572_);
if (v___x_574_ == 0)
{
v_x_570_ = v_tail_573_;
goto _start;
}
else
{
return v___x_574_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_addAliasEntry_spec__2___boxed(lean_object* v_a_576_, lean_object* v_x_577_){
_start:
{
uint8_t v_res_578_; lean_object* v_r_579_; 
v_res_578_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_a_576_, v_x_577_);
lean_dec(v_x_577_);
lean_dec(v_a_576_);
v_r_579_ = lean_box(v_res_578_);
return v_r_579_;
}
}
LEAN_EXPORT lean_object* l_Lean_addAliasEntry(lean_object* v_s_580_, lean_object* v_e_581_){
_start:
{
lean_object* v_fst_582_; lean_object* v_snd_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_599_; 
v_fst_582_ = lean_ctor_get(v_e_581_, 0);
v_snd_583_ = lean_ctor_get(v_e_581_, 1);
v_isSharedCheck_599_ = !lean_is_exclusive(v_e_581_);
if (v_isSharedCheck_599_ == 0)
{
v___x_585_ = v_e_581_;
v_isShared_586_ = v_isSharedCheck_599_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_snd_583_);
lean_inc(v_fst_582_);
lean_dec(v_e_581_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_599_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
lean_object* v___x_587_; 
v___x_587_ = l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(v_s_580_, v_fst_582_);
if (lean_obj_tag(v___x_587_) == 0)
{
lean_object* v___x_588_; lean_object* v___x_590_; 
v___x_588_ = lean_box(0);
if (v_isShared_586_ == 0)
{
lean_ctor_set_tag(v___x_585_, 1);
lean_ctor_set(v___x_585_, 1, v___x_588_);
lean_ctor_set(v___x_585_, 0, v_snd_583_);
v___x_590_ = v___x_585_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_snd_583_);
lean_ctor_set(v_reuseFailAlloc_592_, 1, v___x_588_);
v___x_590_ = v_reuseFailAlloc_592_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
lean_object* v___x_591_; 
v___x_591_ = l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1___redArg(v_s_580_, v_fst_582_, v___x_590_);
return v___x_591_;
}
}
else
{
lean_object* v_val_593_; uint8_t v___x_594_; 
v_val_593_ = lean_ctor_get(v___x_587_, 0);
lean_inc(v_val_593_);
lean_dec_ref_known(v___x_587_, 1);
v___x_594_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_snd_583_, v_val_593_);
if (v___x_594_ == 0)
{
lean_object* v___x_596_; 
if (v_isShared_586_ == 0)
{
lean_ctor_set_tag(v___x_585_, 1);
lean_ctor_set(v___x_585_, 1, v_val_593_);
lean_ctor_set(v___x_585_, 0, v_snd_583_);
v___x_596_ = v___x_585_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_snd_583_);
lean_ctor_set(v_reuseFailAlloc_598_, 1, v_val_593_);
v___x_596_ = v_reuseFailAlloc_598_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
lean_object* v___x_597_; 
v___x_597_ = l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1___redArg(v_s_580_, v_fst_582_, v___x_596_);
return v___x_597_;
}
}
else
{
lean_dec(v_val_593_);
lean_del_object(v___x_585_);
lean_dec(v_snd_583_);
lean_dec(v_fst_582_);
return v_s_580_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0(lean_object* v_00_u03b2_600_, lean_object* v_x_601_, lean_object* v_x_602_){
_start:
{
lean_object* v___x_603_; 
v___x_603_ = l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(v_x_601_, v_x_602_);
return v___x_603_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___boxed(lean_object* v_00_u03b2_604_, lean_object* v_x_605_, lean_object* v_x_606_){
_start:
{
lean_object* v_res_607_; 
v_res_607_ = l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0(v_00_u03b2_604_, v_x_605_, v_x_606_);
lean_dec(v_x_606_);
lean_dec_ref(v_x_605_);
return v_res_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1(lean_object* v_00_u03b2_608_, lean_object* v_x_609_, lean_object* v_x_610_, lean_object* v_x_611_){
_start:
{
lean_object* v___x_612_; 
v___x_612_ = l_Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1___redArg(v_x_609_, v_x_610_, v_x_611_);
return v___x_612_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0(lean_object* v_00_u03b2_613_, lean_object* v_x_614_, lean_object* v_x_615_){
_start:
{
lean_object* v___x_616_; 
v___x_616_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___redArg(v_x_614_, v_x_615_);
return v___x_616_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0___boxed(lean_object* v_00_u03b2_617_, lean_object* v_x_618_, lean_object* v_x_619_){
_start:
{
lean_object* v_res_620_; 
v_res_620_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0(v_00_u03b2_617_, v_x_618_, v_x_619_);
lean_dec(v_x_619_);
lean_dec_ref(v_x_618_);
return v_res_620_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1(lean_object* v_00_u03b2_621_, lean_object* v_m_622_, lean_object* v_a_623_){
_start:
{
lean_object* v___x_624_; 
v___x_624_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___redArg(v_m_622_, v_a_623_);
return v___x_624_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1___boxed(lean_object* v_00_u03b2_625_, lean_object* v_m_626_, lean_object* v_a_627_){
_start:
{
lean_object* v_res_628_; 
v_res_628_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1(v_00_u03b2_625_, v_m_626_, v_a_627_);
lean_dec(v_a_627_);
lean_dec_ref(v_m_626_);
return v_res_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3(lean_object* v_00_u03b2_629_, lean_object* v_x_630_, lean_object* v_x_631_, lean_object* v_x_632_){
_start:
{
lean_object* v___x_633_; 
v___x_633_ = l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3___redArg(v_x_630_, v_x_631_, v_x_632_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4(lean_object* v_00_u03b2_634_, lean_object* v_m_635_, lean_object* v_a_636_, lean_object* v_b_637_){
_start:
{
lean_object* v___x_638_; 
v___x_638_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4___redArg(v_m_635_, v_a_636_, v_b_637_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_639_, lean_object* v_x_640_, size_t v_x_641_, lean_object* v_x_642_){
_start:
{
lean_object* v___x_643_; 
v___x_643_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___redArg(v_x_640_, v_x_641_, v_x_642_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_644_, lean_object* v_x_645_, lean_object* v_x_646_, lean_object* v_x_647_){
_start:
{
size_t v_x_1744__boxed_648_; lean_object* v_res_649_; 
v_x_1744__boxed_648_ = lean_unbox_usize(v_x_646_);
lean_dec(v_x_646_);
v_res_649_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1(v_00_u03b2_644_, v_x_645_, v_x_1744__boxed_648_, v_x_647_);
lean_dec(v_x_647_);
lean_dec_ref(v_x_645_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_650_, lean_object* v_a_651_, lean_object* v_x_652_){
_start:
{
lean_object* v___x_653_; 
v___x_653_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___redArg(v_a_651_, v_x_652_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_654_, lean_object* v_a_655_, lean_object* v_x_656_){
_start:
{
lean_object* v_res_657_; 
v_res_657_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__1_spec__3(v_00_u03b2_654_, v_a_655_, v_x_656_);
lean_dec(v_x_656_);
lean_dec(v_a_655_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6(lean_object* v_00_u03b2_658_, lean_object* v_x_659_, size_t v_x_660_, size_t v_x_661_, lean_object* v_x_662_, lean_object* v_x_663_){
_start:
{
lean_object* v___x_664_; 
v___x_664_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___redArg(v_x_659_, v_x_660_, v_x_661_, v_x_662_, v_x_663_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6___boxed(lean_object* v_00_u03b2_665_, lean_object* v_x_666_, lean_object* v_x_667_, lean_object* v_x_668_, lean_object* v_x_669_, lean_object* v_x_670_){
_start:
{
size_t v_x_1760__boxed_671_; size_t v_x_1761__boxed_672_; lean_object* v_res_673_; 
v_x_1760__boxed_671_ = lean_unbox_usize(v_x_667_);
lean_dec(v_x_667_);
v_x_1761__boxed_672_ = lean_unbox_usize(v_x_668_);
lean_dec(v_x_668_);
v_res_673_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6(v_00_u03b2_665_, v_x_666_, v_x_1760__boxed_671_, v_x_1761__boxed_672_, v_x_669_, v_x_670_);
return v_res_673_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8(lean_object* v_00_u03b2_674_, lean_object* v_a_675_, lean_object* v_x_676_){
_start:
{
uint8_t v___x_677_; 
v___x_677_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___redArg(v_a_675_, v_x_676_);
return v___x_677_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8___boxed(lean_object* v_00_u03b2_678_, lean_object* v_a_679_, lean_object* v_x_680_){
_start:
{
uint8_t v_res_681_; lean_object* v_r_682_; 
v_res_681_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__8(v_00_u03b2_678_, v_a_679_, v_x_680_);
lean_dec(v_x_680_);
lean_dec(v_a_679_);
v_r_682_ = lean_box(v_res_681_);
return v_r_682_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9(lean_object* v_00_u03b2_683_, lean_object* v_data_684_){
_start:
{
lean_object* v___x_685_; 
v___x_685_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9___redArg(v_data_684_);
return v___x_685_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10(lean_object* v_00_u03b2_686_, lean_object* v_a_687_, lean_object* v_b_688_, lean_object* v_x_689_){
_start:
{
lean_object* v___x_690_; 
v___x_690_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__10___redArg(v_a_687_, v_b_688_, v_x_689_);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_691_, lean_object* v_keys_692_, lean_object* v_vals_693_, lean_object* v_heq_694_, lean_object* v_i_695_, lean_object* v_k_696_){
_start:
{
lean_object* v___x_697_; 
v___x_697_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___redArg(v_keys_692_, v_vals_693_, v_i_695_, v_k_696_);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b2_698_, lean_object* v_keys_699_, lean_object* v_vals_700_, lean_object* v_heq_701_, lean_object* v_i_702_, lean_object* v_k_703_){
_start:
{
lean_object* v_res_704_; 
v_res_704_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0_spec__0_spec__1_spec__4(v_00_u03b2_698_, v_keys_699_, v_vals_700_, v_heq_701_, v_i_702_, v_k_703_);
lean_dec(v_k_703_);
lean_dec_ref(v_vals_700_);
lean_dec_ref(v_keys_699_);
return v_res_704_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9(lean_object* v_00_u03b2_705_, lean_object* v_n_706_, lean_object* v_k_707_, lean_object* v_v_708_){
_start:
{
lean_object* v___x_709_; 
v___x_709_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9___redArg(v_n_706_, v_k_707_, v_v_708_);
return v___x_709_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10(lean_object* v_00_u03b2_710_, size_t v_depth_711_, lean_object* v_keys_712_, lean_object* v_vals_713_, lean_object* v_heq_714_, lean_object* v_i_715_, lean_object* v_entries_716_){
_start:
{
lean_object* v___x_717_; 
v___x_717_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___redArg(v_depth_711_, v_keys_712_, v_vals_713_, v_i_715_, v_entries_716_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10___boxed(lean_object* v_00_u03b2_718_, lean_object* v_depth_719_, lean_object* v_keys_720_, lean_object* v_vals_721_, lean_object* v_heq_722_, lean_object* v_i_723_, lean_object* v_entries_724_){
_start:
{
size_t v_depth_boxed_725_; lean_object* v_res_726_; 
v_depth_boxed_725_ = lean_unbox_usize(v_depth_719_);
lean_dec(v_depth_719_);
v_res_726_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__10(v_00_u03b2_718_, v_depth_boxed_725_, v_keys_720_, v_vals_721_, v_heq_722_, v_i_723_, v_entries_724_);
lean_dec_ref(v_vals_721_);
lean_dec_ref(v_keys_720_);
return v_res_726_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14(lean_object* v_00_u03b2_727_, lean_object* v_i_728_, lean_object* v_source_729_, lean_object* v_target_730_){
_start:
{
lean_object* v___x_731_; 
v___x_731_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14___redArg(v_i_728_, v_source_729_, v_target_730_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11(lean_object* v_00_u03b2_732_, lean_object* v_x_733_, lean_object* v_x_734_, lean_object* v_x_735_, lean_object* v_x_736_){
_start:
{
lean_object* v___x_737_; 
v___x_737_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__3_spec__6_spec__9_spec__11___redArg(v_x_733_, v_x_734_, v_x_735_, v_x_736_);
return v___x_737_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16(lean_object* v_00_u03b2_738_, lean_object* v_x_739_, lean_object* v_x_740_){
_start:
{
lean_object* v___x_741_; 
v___x_741_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00Lean_addAliasEntry_spec__1_spec__4_spec__9_spec__14_spec__16___redArg(v_x_739_, v_x_740_);
return v___x_741_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__1___redArg(lean_object* v_m_742_){
_start:
{
uint8_t v_stage_u2081_743_; 
v_stage_u2081_743_ = lean_ctor_get_uint8(v_m_742_, sizeof(void*)*2);
if (v_stage_u2081_743_ == 0)
{
return v_m_742_;
}
else
{
lean_object* v_map_u2081_744_; lean_object* v_map_u2082_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_753_; 
v_map_u2081_744_ = lean_ctor_get(v_m_742_, 0);
v_map_u2082_745_ = lean_ctor_get(v_m_742_, 1);
v_isSharedCheck_753_ = !lean_is_exclusive(v_m_742_);
if (v_isSharedCheck_753_ == 0)
{
v___x_747_ = v_m_742_;
v_isShared_748_ = v_isSharedCheck_753_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_map_u2082_745_);
lean_inc(v_map_u2081_744_);
lean_dec(v_m_742_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_753_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
uint8_t v___x_749_; lean_object* v___x_751_; 
v___x_749_ = 0;
if (v_isShared_748_ == 0)
{
v___x_751_ = v___x_747_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v_map_u2081_744_);
lean_ctor_set(v_reuseFailAlloc_752_, 1, v_map_u2082_745_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
lean_ctor_set_uint8(v___x_751_, sizeof(void*)*2, v___x_749_);
return v___x_751_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_switch___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__1(lean_object* v_00_u03b2_754_, lean_object* v_m_755_){
_start:
{
lean_object* v___x_756_; 
v___x_756_ = l_Lean_SMap_switch___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__1___redArg(v_m_755_);
return v___x_756_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_initFn___lam__0_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_(lean_object* v_es_757_){
_start:
{
lean_object* v___x_758_; 
v___x_758_ = lean_array_mk(v_es_757_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_as_759_, size_t v_i_760_, size_t v_stop_761_, lean_object* v_b_762_){
_start:
{
uint8_t v___x_763_; 
v___x_763_ = lean_usize_dec_eq(v_i_760_, v_stop_761_);
if (v___x_763_ == 0)
{
lean_object* v___x_764_; lean_object* v___x_765_; size_t v___x_766_; size_t v___x_767_; 
v___x_764_ = lean_array_uget_borrowed(v_as_759_, v_i_760_);
lean_inc(v___x_764_);
v___x_765_ = l_Lean_addAliasEntry(v_b_762_, v___x_764_);
v___x_766_ = ((size_t)1ULL);
v___x_767_ = lean_usize_add(v_i_760_, v___x_766_);
v_i_760_ = v___x_767_;
v_b_762_ = v___x_765_;
goto _start;
}
else
{
return v_b_762_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_as_769_, lean_object* v_i_770_, lean_object* v_stop_771_, lean_object* v_b_772_){
_start:
{
size_t v_i_boxed_773_; size_t v_stop_boxed_774_; lean_object* v_res_775_; 
v_i_boxed_773_ = lean_unbox_usize(v_i_770_);
lean_dec(v_i_770_);
v_stop_boxed_774_ = lean_unbox_usize(v_stop_771_);
lean_dec(v_stop_771_);
v_res_775_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0(v_as_769_, v_i_boxed_773_, v_stop_boxed_774_, v_b_772_);
lean_dec_ref(v_as_769_);
return v_res_775_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_as_776_, size_t v_i_777_, size_t v_stop_778_, lean_object* v_b_779_){
_start:
{
lean_object* v___y_781_; uint8_t v___x_785_; 
v___x_785_ = lean_usize_dec_eq(v_i_777_, v_stop_778_);
if (v___x_785_ == 0)
{
lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; uint8_t v___x_789_; 
v___x_786_ = lean_array_uget_borrowed(v_as_776_, v_i_777_);
v___x_787_ = lean_unsigned_to_nat(0u);
v___x_788_ = lean_array_get_size(v___x_786_);
v___x_789_ = lean_nat_dec_lt(v___x_787_, v___x_788_);
if (v___x_789_ == 0)
{
v___y_781_ = v_b_779_;
goto v___jp_780_;
}
else
{
size_t v___x_790_; size_t v___x_791_; lean_object* v___x_792_; 
v___x_790_ = ((size_t)0ULL);
v___x_791_ = lean_usize_of_nat(v___x_788_);
v___x_792_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__0(v___x_786_, v___x_790_, v___x_791_, v_b_779_);
v___y_781_ = v___x_792_;
goto v___jp_780_;
}
}
else
{
return v_b_779_;
}
v___jp_780_:
{
size_t v___x_782_; size_t v___x_783_; 
v___x_782_ = ((size_t)1ULL);
v___x_783_ = lean_usize_add(v_i_777_, v___x_782_);
v_i_777_ = v___x_783_;
v_b_779_ = v___y_781_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object* v_as_793_, lean_object* v_i_794_, lean_object* v_stop_795_, lean_object* v_b_796_){
_start:
{
size_t v_i_boxed_797_; size_t v_stop_boxed_798_; lean_object* v_res_799_; 
v_i_boxed_797_ = lean_unbox_usize(v_i_794_);
lean_dec(v_i_794_);
v_stop_boxed_798_ = lean_unbox_usize(v_stop_795_);
lean_dec(v_stop_795_);
v_res_799_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1(v_as_793_, v_i_boxed_797_, v_stop_boxed_798_, v_b_796_);
lean_dec_ref(v_as_793_);
return v_res_799_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0(lean_object* v_initState_800_, lean_object* v_as_801_){
_start:
{
lean_object* v___x_802_; lean_object* v___x_803_; uint8_t v___x_804_; 
v___x_802_ = lean_unsigned_to_nat(0u);
v___x_803_ = lean_array_get_size(v_as_801_);
v___x_804_ = lean_nat_dec_lt(v___x_802_, v___x_803_);
if (v___x_804_ == 0)
{
return v_initState_800_;
}
else
{
size_t v___x_805_; size_t v___x_806_; lean_object* v___x_807_; 
v___x_805_ = ((size_t)0ULL);
v___x_806_ = lean_usize_of_nat(v___x_803_);
v___x_807_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00__private_Lean_ResolveName_0__Lean_initFn_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2__spec__0_spec__1(v_as_801_, v___x_805_, v___x_806_, v_initState_800_);
return v___x_807_;
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
v___x_817_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
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
v___x_846_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_initFn___closed__5_00___x40_Lean_ResolveName_1437735408____hygCtx___hyg_2_));
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
LEAN_EXPORT lean_object* l_Lean_addAlias___lam__0(lean_object* v_addEntryFn_850_, lean_object* v___x_851_, lean_object* v_s_852_){
_start:
{
lean_object* v_importedEntries_853_; lean_object* v_state_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_862_; 
v_importedEntries_853_ = lean_ctor_get(v_s_852_, 0);
v_state_854_ = lean_ctor_get(v_s_852_, 1);
v_isSharedCheck_862_ = !lean_is_exclusive(v_s_852_);
if (v_isSharedCheck_862_ == 0)
{
v___x_856_ = v_s_852_;
v_isShared_857_ = v_isSharedCheck_862_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_state_854_);
lean_inc(v_importedEntries_853_);
lean_dec(v_s_852_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_862_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v_state_858_; lean_object* v___x_860_; 
v_state_858_ = lean_apply_2(v_addEntryFn_850_, v_state_854_, v___x_851_);
if (v_isShared_857_ == 0)
{
lean_ctor_set(v___x_856_, 1, v_state_858_);
v___x_860_ = v___x_856_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v_importedEntries_853_);
lean_ctor_set(v_reuseFailAlloc_861_, 1, v_state_858_);
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
LEAN_EXPORT lean_object* l_Lean_addAlias(lean_object* v_env_863_, lean_object* v_a_864_, lean_object* v_e_865_){
_start:
{
lean_object* v___x_866_; lean_object* v_toEnvExtension_867_; lean_object* v_addEntryFn_868_; lean_object* v_asyncMode_869_; uint8_t v_logWrites_870_; lean_object* v___x_871_; lean_object* v___f_872_; lean_object* v___x_873_; uint8_t v___x_874_; 
v___x_866_ = l_Lean_aliasExtension;
v_toEnvExtension_867_ = lean_ctor_get(v___x_866_, 0);
v_addEntryFn_868_ = lean_ctor_get(v___x_866_, 3);
v_asyncMode_869_ = lean_ctor_get(v_toEnvExtension_867_, 2);
v_logWrites_870_ = lean_ctor_get_uint8(v_toEnvExtension_867_, sizeof(void*)*6);
v___x_871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_871_, 0, v_a_864_);
lean_ctor_set(v___x_871_, 1, v_e_865_);
lean_inc(v_addEntryFn_868_);
v___f_872_ = lean_alloc_closure((void*)(l_Lean_addAlias___lam__0), 3, 2);
lean_closure_set(v___f_872_, 0, v_addEntryFn_868_);
lean_closure_set(v___f_872_, 1, v___x_871_);
v___x_873_ = lean_box(0);
v___x_874_ = 1;
if (v_logWrites_870_ == 0)
{
lean_object* v___x_875_; 
lean_inc_ref(v_toEnvExtension_867_);
v___x_875_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_867_, v_env_863_, v___f_872_, v_asyncMode_869_, v___x_873_, v___x_874_);
return v___x_875_;
}
else
{
lean_object* v___x_876_; lean_object* v___x_877_; 
lean_inc_ref_n(v_toEnvExtension_867_, 2);
v___x_876_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_867_, v_env_863_);
lean_dec_ref(v_env_863_);
v___x_877_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_867_, v___x_876_, v___f_872_, v_asyncMode_869_, v___x_873_, v___x_874_);
return v___x_877_;
}
}
}
static lean_object* _init_l_Lean_getAliasState___closed__0(void){
_start:
{
lean_object* v___x_878_; 
v___x_878_ = l_Lean_SMap_instInhabited___redArg();
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAliasState(lean_object* v_env_879_){
_start:
{
lean_object* v___x_880_; lean_object* v_toEnvExtension_881_; lean_object* v_asyncMode_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_880_ = l_Lean_aliasExtension;
v_toEnvExtension_881_ = lean_ctor_get(v___x_880_, 0);
v_asyncMode_882_ = lean_ctor_get(v_toEnvExtension_881_, 2);
v___x_883_ = lean_obj_once(&l_Lean_getAliasState___closed__0, &l_Lean_getAliasState___closed__0_once, _init_l_Lean_getAliasState___closed__0);
v___x_884_ = lean_box(0);
v___x_885_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_883_, v___x_880_, v_env_879_, v_asyncMode_882_, v___x_884_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_getAliases_spec__0(lean_object* v_env_886_, uint8_t v_skipProtected_887_, lean_object* v_a_888_, lean_object* v_a_889_){
_start:
{
if (lean_obj_tag(v_a_888_) == 0)
{
lean_object* v___x_890_; 
lean_dec_ref(v_env_886_);
v___x_890_ = l_List_reverse___redArg(v_a_889_);
return v___x_890_;
}
else
{
lean_object* v_head_891_; lean_object* v_tail_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_903_; 
v_head_891_ = lean_ctor_get(v_a_888_, 0);
v_tail_892_ = lean_ctor_get(v_a_888_, 1);
v_isSharedCheck_903_ = !lean_is_exclusive(v_a_888_);
if (v_isSharedCheck_903_ == 0)
{
v___x_894_ = v_a_888_;
v_isShared_895_ = v_isSharedCheck_903_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_tail_892_);
lean_inc(v_head_891_);
lean_dec(v_a_888_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_903_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
uint8_t v___x_896_; 
lean_inc(v_head_891_);
lean_inc_ref(v_env_886_);
v___x_896_ = l_Lean_isProtected(v_env_886_, v_head_891_);
if (v___x_896_ == 0)
{
if (v_skipProtected_887_ == 0)
{
lean_del_object(v___x_894_);
lean_dec(v_head_891_);
v_a_888_ = v_tail_892_;
goto _start;
}
else
{
lean_object* v___x_899_; 
if (v_isShared_895_ == 0)
{
lean_ctor_set(v___x_894_, 1, v_a_889_);
v___x_899_ = v___x_894_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v_head_891_);
lean_ctor_set(v_reuseFailAlloc_901_, 1, v_a_889_);
v___x_899_ = v_reuseFailAlloc_901_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
v_a_888_ = v_tail_892_;
v_a_889_ = v___x_899_;
goto _start;
}
}
}
else
{
lean_del_object(v___x_894_);
lean_dec(v_head_891_);
v_a_888_ = v_tail_892_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_getAliases_spec__0___boxed(lean_object* v_env_904_, lean_object* v_skipProtected_905_, lean_object* v_a_906_, lean_object* v_a_907_){
_start:
{
uint8_t v_skipProtected_boxed_908_; lean_object* v_res_909_; 
v_skipProtected_boxed_908_ = lean_unbox(v_skipProtected_905_);
v_res_909_ = l_List_filterTR_loop___at___00Lean_getAliases_spec__0(v_env_904_, v_skipProtected_boxed_908_, v_a_906_, v_a_907_);
return v_res_909_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAliases(lean_object* v_env_910_, lean_object* v_a_911_, uint8_t v_skipProtected_912_){
_start:
{
lean_object* v___x_913_; lean_object* v_toEnvExtension_914_; lean_object* v_asyncMode_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
v___x_913_ = l_Lean_aliasExtension;
v_toEnvExtension_914_ = lean_ctor_get(v___x_913_, 0);
v_asyncMode_915_ = lean_ctor_get(v_toEnvExtension_914_, 2);
v___x_916_ = lean_obj_once(&l_Lean_getAliasState___closed__0, &l_Lean_getAliasState___closed__0_once, _init_l_Lean_getAliasState___closed__0);
v___x_917_ = lean_box(0);
lean_inc_ref(v_env_910_);
v___x_918_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_916_, v___x_913_, v_env_910_, v_asyncMode_915_, v___x_917_);
v___x_919_ = l_Lean_SMap_find_x3f___at___00Lean_addAliasEntry_spec__0___redArg(v___x_918_, v_a_911_);
lean_dec(v___x_918_);
if (lean_obj_tag(v___x_919_) == 0)
{
lean_object* v___x_920_; 
lean_dec_ref(v_env_910_);
v___x_920_ = lean_box(0);
return v___x_920_;
}
else
{
if (v_skipProtected_912_ == 0)
{
lean_object* v_val_921_; 
lean_dec_ref(v_env_910_);
v_val_921_ = lean_ctor_get(v___x_919_, 0);
lean_inc(v_val_921_);
lean_dec_ref_known(v___x_919_, 1);
return v_val_921_;
}
else
{
lean_object* v_val_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v_val_922_ = lean_ctor_get(v___x_919_, 0);
lean_inc(v_val_922_);
lean_dec_ref_known(v___x_919_, 1);
v___x_923_ = lean_box(0);
v___x_924_ = l_List_filterTR_loop___at___00Lean_getAliases_spec__0(v_env_910_, v_skipProtected_912_, v_val_922_, v___x_923_);
return v___x_924_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getAliases___boxed(lean_object* v_env_925_, lean_object* v_a_926_, lean_object* v_skipProtected_927_){
_start:
{
uint8_t v_skipProtected_boxed_928_; lean_object* v_res_929_; 
v_skipProtected_boxed_928_ = lean_unbox(v_skipProtected_927_);
v_res_929_ = l_Lean_getAliases(v_env_925_, v_a_926_, v_skipProtected_boxed_928_);
lean_dec(v_a_926_);
return v_res_929_;
}
}
LEAN_EXPORT lean_object* l_Lean_getRevAliases___lam__0(lean_object* v_e_930_, lean_object* v_as_931_, lean_object* v_a_932_, lean_object* v_es_933_){
_start:
{
uint8_t v___x_934_; 
v___x_934_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_e_930_, v_es_933_);
if (v___x_934_ == 0)
{
lean_dec(v_a_932_);
return v_as_931_;
}
else
{
lean_object* v___x_935_; 
v___x_935_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_935_, 0, v_a_932_);
lean_ctor_set(v___x_935_, 1, v_as_931_);
return v___x_935_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getRevAliases___lam__0___boxed(lean_object* v_e_936_, lean_object* v_as_937_, lean_object* v_a_938_, lean_object* v_es_939_){
_start:
{
lean_object* v_res_940_; 
v_res_940_ = l_Lean_getRevAliases___lam__0(v_e_936_, v_as_937_, v_a_938_, v_es_939_);
lean_dec(v_es_939_);
lean_dec(v_e_936_);
return v_res_940_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg(lean_object* v_f_941_, lean_object* v_keys_942_, lean_object* v_vals_943_, lean_object* v_i_944_, lean_object* v_acc_945_){
_start:
{
lean_object* v___x_946_; uint8_t v___x_947_; 
v___x_946_ = lean_array_get_size(v_keys_942_);
v___x_947_ = lean_nat_dec_lt(v_i_944_, v___x_946_);
if (v___x_947_ == 0)
{
lean_dec(v_i_944_);
lean_dec(v_f_941_);
return v_acc_945_;
}
else
{
lean_object* v_k_948_; lean_object* v_v_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; 
v_k_948_ = lean_array_fget_borrowed(v_keys_942_, v_i_944_);
v_v_949_ = lean_array_fget_borrowed(v_vals_943_, v_i_944_);
lean_inc(v_f_941_);
lean_inc(v_v_949_);
lean_inc(v_k_948_);
v___x_950_ = lean_apply_3(v_f_941_, v_acc_945_, v_k_948_, v_v_949_);
v___x_951_ = lean_unsigned_to_nat(1u);
v___x_952_ = lean_nat_add(v_i_944_, v___x_951_);
lean_dec(v_i_944_);
v_i_944_ = v___x_952_;
v_acc_945_ = v___x_950_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg___boxed(lean_object* v_f_954_, lean_object* v_keys_955_, lean_object* v_vals_956_, lean_object* v_i_957_, lean_object* v_acc_958_){
_start:
{
lean_object* v_res_959_; 
v_res_959_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg(v_f_954_, v_keys_955_, v_vals_956_, v_i_957_, v_acc_958_);
lean_dec_ref(v_vals_956_);
lean_dec_ref(v_keys_955_);
return v_res_959_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(lean_object* v_f_960_, lean_object* v_as_961_, size_t v_i_962_, size_t v_stop_963_, lean_object* v_b_964_){
_start:
{
lean_object* v___y_966_; uint8_t v___x_970_; 
v___x_970_ = lean_usize_dec_eq(v_i_962_, v_stop_963_);
if (v___x_970_ == 0)
{
lean_object* v___x_971_; 
v___x_971_ = lean_array_uget_borrowed(v_as_961_, v_i_962_);
switch(lean_obj_tag(v___x_971_))
{
case 0:
{
lean_object* v_key_972_; lean_object* v_val_973_; lean_object* v___x_974_; 
v_key_972_ = lean_ctor_get(v___x_971_, 0);
v_val_973_ = lean_ctor_get(v___x_971_, 1);
lean_inc(v_f_960_);
lean_inc(v_val_973_);
lean_inc(v_key_972_);
v___x_974_ = lean_apply_3(v_f_960_, v_b_964_, v_key_972_, v_val_973_);
v___y_966_ = v___x_974_;
goto v___jp_965_;
}
case 1:
{
lean_object* v_node_975_; lean_object* v___x_976_; 
v_node_975_ = lean_ctor_get(v___x_971_, 0);
lean_inc(v_f_960_);
v___x_976_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v_f_960_, v_node_975_, v_b_964_);
v___y_966_ = v___x_976_;
goto v___jp_965_;
}
default: 
{
v___y_966_ = v_b_964_;
goto v___jp_965_;
}
}
}
else
{
lean_dec(v_f_960_);
return v_b_964_;
}
v___jp_965_:
{
size_t v___x_967_; size_t v___x_968_; 
v___x_967_ = ((size_t)1ULL);
v___x_968_ = lean_usize_add(v_i_962_, v___x_967_);
v_i_962_ = v___x_968_;
v_b_964_ = v___y_966_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_f_977_, lean_object* v_x_978_, lean_object* v_x_979_){
_start:
{
if (lean_obj_tag(v_x_978_) == 0)
{
lean_object* v_es_980_; lean_object* v___x_981_; lean_object* v___x_982_; uint8_t v___x_983_; 
v_es_980_ = lean_ctor_get(v_x_978_, 0);
v___x_981_ = lean_unsigned_to_nat(0u);
v___x_982_ = lean_array_get_size(v_es_980_);
v___x_983_ = lean_nat_dec_lt(v___x_981_, v___x_982_);
if (v___x_983_ == 0)
{
lean_dec(v_f_977_);
return v_x_979_;
}
else
{
size_t v___x_984_; size_t v___x_985_; lean_object* v___x_986_; 
v___x_984_ = ((size_t)0ULL);
v___x_985_ = lean_usize_of_nat(v___x_982_);
v___x_986_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(v_f_977_, v_es_980_, v___x_984_, v___x_985_, v_x_979_);
return v___x_986_;
}
}
else
{
lean_object* v_ks_987_; lean_object* v_vs_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
v_ks_987_ = lean_ctor_get(v_x_978_, 0);
v_vs_988_ = lean_ctor_get(v_x_978_, 1);
v___x_989_ = lean_unsigned_to_nat(0u);
v___x_990_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg(v_f_977_, v_ks_987_, v_vs_988_, v___x_989_, v_x_979_);
return v___x_990_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_f_991_, lean_object* v_x_992_, lean_object* v_x_993_){
_start:
{
lean_object* v_res_994_; 
v_res_994_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v_f_991_, v_x_992_, v_x_993_);
lean_dec_ref(v_x_992_);
return v_res_994_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg___boxed(lean_object* v_f_995_, lean_object* v_as_996_, lean_object* v_i_997_, lean_object* v_stop_998_, lean_object* v_b_999_){
_start:
{
size_t v_i_boxed_1000_; size_t v_stop_boxed_1001_; lean_object* v_res_1002_; 
v_i_boxed_1000_ = lean_unbox_usize(v_i_997_);
lean_dec(v_i_997_);
v_stop_boxed_1001_ = lean_unbox_usize(v_stop_998_);
lean_dec(v_stop_998_);
v_res_1002_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(v_f_995_, v_as_996_, v_i_boxed_1000_, v_stop_boxed_1001_, v_b_999_);
lean_dec_ref(v_as_996_);
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg___lam__0(lean_object* v_f_1003_, lean_object* v_x1_1004_, lean_object* v_x2_1005_, lean_object* v_x3_1006_){
_start:
{
lean_object* v___x_1007_; 
v___x_1007_ = lean_apply_3(v_f_1003_, v_x1_1004_, v_x2_1005_, v_x3_1006_);
return v___x_1007_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(lean_object* v_map_1008_, lean_object* v_f_1009_, lean_object* v_init_1010_){
_start:
{
lean_object* v___f_1011_; lean_object* v___x_1012_; 
v___f_1011_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1011_, 0, v_f_1009_);
v___x_1012_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v___f_1011_, v_map_1008_, v_init_1010_);
return v___x_1012_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg___boxed(lean_object* v_map_1013_, lean_object* v_f_1014_, lean_object* v_init_1015_){
_start:
{
lean_object* v_res_1016_; 
v_res_1016_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(v_map_1013_, v_f_1014_, v_init_1015_);
lean_dec_ref(v_map_1013_);
return v_res_1016_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0___redArg(lean_object* v_f_1017_, lean_object* v_x_1018_, lean_object* v_x_1019_){
_start:
{
if (lean_obj_tag(v_x_1019_) == 0)
{
lean_dec(v_f_1017_);
return v_x_1018_;
}
else
{
lean_object* v_key_1020_; lean_object* v_value_1021_; lean_object* v_tail_1022_; lean_object* v___x_1023_; 
v_key_1020_ = lean_ctor_get(v_x_1019_, 0);
lean_inc(v_key_1020_);
v_value_1021_ = lean_ctor_get(v_x_1019_, 1);
lean_inc(v_value_1021_);
v_tail_1022_ = lean_ctor_get(v_x_1019_, 2);
lean_inc(v_tail_1022_);
lean_dec_ref_known(v_x_1019_, 3);
lean_inc(v_f_1017_);
v___x_1023_ = lean_apply_3(v_f_1017_, v_x_1018_, v_key_1020_, v_value_1021_);
v_x_1018_ = v___x_1023_;
v_x_1019_ = v_tail_1022_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg(lean_object* v_f_1025_, lean_object* v_as_1026_, size_t v_i_1027_, size_t v_stop_1028_, lean_object* v_b_1029_){
_start:
{
uint8_t v___x_1030_; 
v___x_1030_ = lean_usize_dec_eq(v_i_1027_, v_stop_1028_);
if (v___x_1030_ == 0)
{
lean_object* v___x_1031_; lean_object* v___x_1032_; size_t v___x_1033_; size_t v___x_1034_; 
v___x_1031_ = lean_array_uget_borrowed(v_as_1026_, v_i_1027_);
lean_inc(v___x_1031_);
lean_inc(v_f_1025_);
v___x_1032_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0___redArg(v_f_1025_, v_b_1029_, v___x_1031_);
v___x_1033_ = ((size_t)1ULL);
v___x_1034_ = lean_usize_add(v_i_1027_, v___x_1033_);
v_i_1027_ = v___x_1034_;
v_b_1029_ = v___x_1032_;
goto _start;
}
else
{
lean_dec(v_f_1025_);
return v_b_1029_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg___boxed(lean_object* v_f_1036_, lean_object* v_as_1037_, lean_object* v_i_1038_, lean_object* v_stop_1039_, lean_object* v_b_1040_){
_start:
{
size_t v_i_boxed_1041_; size_t v_stop_boxed_1042_; lean_object* v_res_1043_; 
v_i_boxed_1041_ = lean_unbox_usize(v_i_1038_);
lean_dec(v_i_1038_);
v_stop_boxed_1042_ = lean_unbox_usize(v_stop_1039_);
lean_dec(v_stop_1039_);
v_res_1043_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg(v_f_1036_, v_as_1037_, v_i_boxed_1041_, v_stop_boxed_1042_, v_b_1040_);
lean_dec_ref(v_as_1037_);
return v_res_1043_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg(lean_object* v_f_1044_, lean_object* v_init_1045_, lean_object* v_m_1046_){
_start:
{
lean_object* v_map_u2081_1047_; lean_object* v_map_u2082_1048_; lean_object* v_buckets_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; uint8_t v___x_1052_; 
v_map_u2081_1047_ = lean_ctor_get(v_m_1046_, 0);
v_map_u2082_1048_ = lean_ctor_get(v_m_1046_, 1);
v_buckets_1049_ = lean_ctor_get(v_map_u2081_1047_, 1);
v___x_1050_ = lean_unsigned_to_nat(0u);
v___x_1051_ = lean_array_get_size(v_buckets_1049_);
v___x_1052_ = lean_nat_dec_lt(v___x_1050_, v___x_1051_);
if (v___x_1052_ == 0)
{
lean_object* v___x_1053_; 
v___x_1053_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(v_map_u2082_1048_, v_f_1044_, v_init_1045_);
return v___x_1053_;
}
else
{
size_t v___x_1054_; size_t v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1054_ = ((size_t)0ULL);
v___x_1055_ = lean_usize_of_nat(v___x_1051_);
lean_inc(v_f_1044_);
v___x_1056_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg(v_f_1044_, v_buckets_1049_, v___x_1054_, v___x_1055_, v_init_1045_);
v___x_1057_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(v_map_u2082_1048_, v_f_1044_, v___x_1056_);
return v___x_1057_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg___boxed(lean_object* v_f_1058_, lean_object* v_init_1059_, lean_object* v_m_1060_){
_start:
{
lean_object* v_res_1061_; 
v_res_1061_ = l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg(v_f_1058_, v_init_1059_, v_m_1060_);
lean_dec_ref(v_m_1060_);
return v_res_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_getRevAliases(lean_object* v_env_1062_, lean_object* v_e_1063_){
_start:
{
lean_object* v___x_1064_; lean_object* v_toEnvExtension_1065_; lean_object* v_asyncMode_1066_; lean_object* v___f_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; 
v___x_1064_ = l_Lean_aliasExtension;
v_toEnvExtension_1065_ = lean_ctor_get(v___x_1064_, 0);
v_asyncMode_1066_ = lean_ctor_get(v_toEnvExtension_1065_, 2);
v___f_1067_ = lean_alloc_closure((void*)(l_Lean_getRevAliases___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1067_, 0, v_e_1063_);
v___x_1068_ = lean_obj_once(&l_Lean_getAliasState___closed__0, &l_Lean_getAliasState___closed__0_once, _init_l_Lean_getAliasState___closed__0);
v___x_1069_ = lean_box(0);
v___x_1070_ = lean_box(0);
v___x_1071_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1068_, v___x_1064_, v_env_1062_, v_asyncMode_1066_, v___x_1070_);
v___x_1072_ = l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg(v___f_1067_, v___x_1069_, v___x_1071_);
lean_dec(v___x_1071_);
return v___x_1072_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0(lean_object* v_00_u03b2_1073_, lean_object* v_00_u03c3_1074_, lean_object* v_f_1075_, lean_object* v_init_1076_, lean_object* v_m_1077_){
_start:
{
lean_object* v___x_1078_; 
v___x_1078_ = l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___redArg(v_f_1075_, v_init_1076_, v_m_1077_);
return v___x_1078_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0___boxed(lean_object* v_00_u03b2_1079_, lean_object* v_00_u03c3_1080_, lean_object* v_f_1081_, lean_object* v_init_1082_, lean_object* v_m_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = l_Lean_SMap_fold___at___00Lean_getRevAliases_spec__0(v_00_u03b2_1079_, v_00_u03c3_1080_, v_f_1081_, v_init_1082_, v_m_1083_);
lean_dec_ref(v_m_1083_);
return v_res_1084_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0(lean_object* v_00_u03b2_1085_, lean_object* v_00_u03c3_1086_, lean_object* v_f_1087_, lean_object* v_x_1088_, lean_object* v_x_1089_){
_start:
{
lean_object* v___x_1090_; 
v___x_1090_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__0___redArg(v_f_1087_, v_x_1088_, v_x_1089_);
return v___x_1090_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1(lean_object* v_00_u03c3_1091_, lean_object* v_00_u03b2_1092_, lean_object* v_map_1093_, lean_object* v_f_1094_, lean_object* v_init_1095_){
_start:
{
lean_object* v___x_1096_; 
v___x_1096_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___redArg(v_map_1093_, v_f_1094_, v_init_1095_);
return v___x_1096_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1___boxed(lean_object* v_00_u03c3_1097_, lean_object* v_00_u03b2_1098_, lean_object* v_map_1099_, lean_object* v_f_1100_, lean_object* v_init_1101_){
_start:
{
lean_object* v_res_1102_; 
v_res_1102_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1(v_00_u03c3_1097_, v_00_u03b2_1098_, v_map_1099_, v_f_1100_, v_init_1101_);
lean_dec_ref(v_map_1099_);
return v_res_1102_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2(lean_object* v_00_u03b2_1103_, lean_object* v_00_u03c3_1104_, lean_object* v_f_1105_, lean_object* v_as_1106_, size_t v_i_1107_, size_t v_stop_1108_, lean_object* v_b_1109_){
_start:
{
lean_object* v___x_1110_; 
v___x_1110_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___redArg(v_f_1105_, v_as_1106_, v_i_1107_, v_stop_1108_, v_b_1109_);
return v___x_1110_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1111_, lean_object* v_00_u03c3_1112_, lean_object* v_f_1113_, lean_object* v_as_1114_, lean_object* v_i_1115_, lean_object* v_stop_1116_, lean_object* v_b_1117_){
_start:
{
size_t v_i_boxed_1118_; size_t v_stop_boxed_1119_; lean_object* v_res_1120_; 
v_i_boxed_1118_ = lean_unbox_usize(v_i_1115_);
lean_dec(v_i_1115_);
v_stop_boxed_1119_ = lean_unbox_usize(v_stop_1116_);
lean_dec(v_stop_1116_);
v_res_1120_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__2(v_00_u03b2_1111_, v_00_u03c3_1112_, v_f_1113_, v_as_1114_, v_i_boxed_1118_, v_stop_boxed_1119_, v_b_1117_);
lean_dec_ref(v_as_1114_);
return v_res_1120_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___redArg(lean_object* v_map_1121_, lean_object* v_f_1122_, lean_object* v_init_1123_){
_start:
{
lean_object* v___x_1124_; 
v___x_1124_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v_f_1122_, v_map_1121_, v_init_1123_);
return v___x_1124_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_map_1125_, lean_object* v_f_1126_, lean_object* v_init_1127_){
_start:
{
lean_object* v_res_1128_; 
v_res_1128_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___redArg(v_map_1125_, v_f_1126_, v_init_1127_);
lean_dec_ref(v_map_1125_);
return v_res_1128_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2(lean_object* v_00_u03c3_1129_, lean_object* v_00_u03b2_1130_, lean_object* v_map_1131_, lean_object* v_f_1132_, lean_object* v_init_1133_){
_start:
{
lean_object* v___x_1134_; 
v___x_1134_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v_f_1132_, v_map_1131_, v_init_1133_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03c3_1135_, lean_object* v_00_u03b2_1136_, lean_object* v_map_1137_, lean_object* v_f_1138_, lean_object* v_init_1139_){
_start:
{
lean_object* v_res_1140_; 
v_res_1140_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2(v_00_u03c3_1135_, v_00_u03b2_1136_, v_map_1137_, v_f_1138_, v_init_1139_);
lean_dec_ref(v_map_1137_);
return v_res_1140_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03c3_1141_, lean_object* v_00_u03b1_1142_, lean_object* v_00_u03b2_1143_, lean_object* v_f_1144_, lean_object* v_x_1145_, lean_object* v_x_1146_){
_start:
{
lean_object* v___x_1147_; 
v___x_1147_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___redArg(v_f_1144_, v_x_1145_, v_x_1146_);
return v___x_1147_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_00_u03c3_1148_, lean_object* v_00_u03b1_1149_, lean_object* v_00_u03b2_1150_, lean_object* v_f_1151_, lean_object* v_x_1152_, lean_object* v_x_1153_){
_start:
{
lean_object* v_res_1154_; 
v_res_1154_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3(v_00_u03c3_1148_, v_00_u03b1_1149_, v_00_u03b2_1150_, v_f_1151_, v_x_1152_, v_x_1153_);
lean_dec_ref(v_x_1152_);
return v_res_1154_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5(lean_object* v_00_u03b1_1155_, lean_object* v_00_u03b2_1156_, lean_object* v_00_u03c3_1157_, lean_object* v_f_1158_, lean_object* v_as_1159_, size_t v_i_1160_, size_t v_stop_1161_, lean_object* v_b_1162_){
_start:
{
lean_object* v___x_1163_; 
v___x_1163_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___redArg(v_f_1158_, v_as_1159_, v_i_1160_, v_stop_1161_, v_b_1162_);
return v___x_1163_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5___boxed(lean_object* v_00_u03b1_1164_, lean_object* v_00_u03b2_1165_, lean_object* v_00_u03c3_1166_, lean_object* v_f_1167_, lean_object* v_as_1168_, lean_object* v_i_1169_, lean_object* v_stop_1170_, lean_object* v_b_1171_){
_start:
{
size_t v_i_boxed_1172_; size_t v_stop_boxed_1173_; lean_object* v_res_1174_; 
v_i_boxed_1172_ = lean_unbox_usize(v_i_1169_);
lean_dec(v_i_1169_);
v_stop_boxed_1173_ = lean_unbox_usize(v_stop_1170_);
lean_dec(v_stop_1170_);
v_res_1174_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__5(v_00_u03b1_1164_, v_00_u03b2_1165_, v_00_u03c3_1166_, v_f_1167_, v_as_1168_, v_i_boxed_1172_, v_stop_boxed_1173_, v_b_1171_);
lean_dec_ref(v_as_1168_);
return v_res_1174_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6(lean_object* v_00_u03c3_1175_, lean_object* v_00_u03b1_1176_, lean_object* v_00_u03b2_1177_, lean_object* v_f_1178_, lean_object* v_keys_1179_, lean_object* v_vals_1180_, lean_object* v_heq_1181_, lean_object* v_i_1182_, lean_object* v_acc_1183_){
_start:
{
lean_object* v___x_1184_; 
v___x_1184_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___redArg(v_f_1178_, v_keys_1179_, v_vals_1180_, v_i_1182_, v_acc_1183_);
return v___x_1184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6___boxed(lean_object* v_00_u03c3_1185_, lean_object* v_00_u03b1_1186_, lean_object* v_00_u03b2_1187_, lean_object* v_f_1188_, lean_object* v_keys_1189_, lean_object* v_vals_1190_, lean_object* v_heq_1191_, lean_object* v_i_1192_, lean_object* v_acc_1193_){
_start:
{
lean_object* v_res_1194_; 
v_res_1194_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_getRevAliases_spec__0_spec__1_spec__2_spec__3_spec__6(v_00_u03c3_1185_, v_00_u03b1_1186_, v_00_u03b2_1187_, v_f_1188_, v_keys_1189_, v_vals_1190_, v_heq_1191_, v_i_1192_, v_acc_1193_);
lean_dec_ref(v_vals_1190_);
lean_dec_ref(v_keys_1189_);
return v_res_1194_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(lean_object* v_env_1195_, lean_object* v_declName_1196_, uint8_t v_localOnly_1197_){
_start:
{
uint8_t v___x_1198_; 
v___x_1198_ = 1;
if (v_localOnly_1197_ == 0)
{
uint8_t v___x_1199_; 
v___x_1199_ = l_Lean_Environment_containsOnBranch(v_env_1195_, v_declName_1196_);
if (v___x_1199_ == 0)
{
uint8_t v___x_1200_; 
lean_inc(v_declName_1196_);
lean_inc_ref(v_env_1195_);
v___x_1200_ = lean_is_reserved_name(v_env_1195_, v_declName_1196_);
if (v___x_1200_ == 0)
{
uint8_t v___x_1201_; 
v___x_1201_ = l_Lean_Environment_contains(v_env_1195_, v_declName_1196_, v___x_1198_);
return v___x_1201_;
}
else
{
lean_dec(v_declName_1196_);
lean_dec_ref(v_env_1195_);
return v___x_1198_;
}
}
else
{
lean_dec(v_declName_1196_);
lean_dec_ref(v_env_1195_);
return v___x_1198_;
}
}
else
{
uint8_t v___x_1202_; 
lean_inc(v_declName_1196_);
v___x_1202_ = l_Lean_Environment_containsLocally(v_env_1195_, v_declName_1196_);
if (v___x_1202_ == 0)
{
uint8_t v___x_1203_; 
v___x_1203_ = lean_is_reserved_name(v_env_1195_, v_declName_1196_);
return v___x_1203_;
}
else
{
lean_dec(v_declName_1196_);
lean_dec_ref(v_env_1195_);
return v___x_1198_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved___boxed(lean_object* v_env_1204_, lean_object* v_declName_1205_, lean_object* v_localOnly_1206_){
_start:
{
uint8_t v_localOnly_boxed_1207_; uint8_t v_res_1208_; lean_object* v_r_1209_; 
v_localOnly_boxed_1207_ = lean_unbox(v_localOnly_1206_);
v_res_1208_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1204_, v_declName_1205_, v_localOnly_boxed_1207_);
v_r_1209_ = lean_box(v_res_1208_);
return v_r_1209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(lean_object* v_name_1210_, lean_object* v_decl_1211_, lean_object* v_ref_1212_){
_start:
{
lean_object* v_defValue_1214_; lean_object* v_descr_1215_; lean_object* v_deprecation_x3f_1216_; lean_object* v___x_1217_; uint8_t v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; 
v_defValue_1214_ = lean_ctor_get(v_decl_1211_, 0);
v_descr_1215_ = lean_ctor_get(v_decl_1211_, 1);
v_deprecation_x3f_1216_ = lean_ctor_get(v_decl_1211_, 2);
v___x_1217_ = lean_alloc_ctor(1, 0, 1);
v___x_1218_ = lean_unbox(v_defValue_1214_);
lean_ctor_set_uint8(v___x_1217_, 0, v___x_1218_);
lean_inc(v_deprecation_x3f_1216_);
lean_inc_ref(v_descr_1215_);
lean_inc_n(v_name_1210_, 2);
v___x_1219_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1219_, 0, v_name_1210_);
lean_ctor_set(v___x_1219_, 1, v_ref_1212_);
lean_ctor_set(v___x_1219_, 2, v___x_1217_);
lean_ctor_set(v___x_1219_, 3, v_descr_1215_);
lean_ctor_set(v___x_1219_, 4, v_deprecation_x3f_1216_);
v___x_1220_ = lean_register_option(v_name_1210_, v___x_1219_);
if (lean_obj_tag(v___x_1220_) == 0)
{
lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1228_; 
v_isSharedCheck_1228_ = !lean_is_exclusive(v___x_1220_);
if (v_isSharedCheck_1228_ == 0)
{
lean_object* v_unused_1229_; 
v_unused_1229_ = lean_ctor_get(v___x_1220_, 0);
lean_dec(v_unused_1229_);
v___x_1222_ = v___x_1220_;
v_isShared_1223_ = v_isSharedCheck_1228_;
goto v_resetjp_1221_;
}
else
{
lean_dec(v___x_1220_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1228_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
lean_object* v___x_1224_; lean_object* v___x_1226_; 
lean_inc(v_defValue_1214_);
v___x_1224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1224_, 0, v_name_1210_);
lean_ctor_set(v___x_1224_, 1, v_defValue_1214_);
if (v_isShared_1223_ == 0)
{
lean_ctor_set(v___x_1222_, 0, v___x_1224_);
v___x_1226_ = v___x_1222_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v___x_1224_);
v___x_1226_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
return v___x_1226_;
}
}
}
else
{
lean_object* v_a_1230_; lean_object* v___x_1232_; uint8_t v_isShared_1233_; uint8_t v_isSharedCheck_1237_; 
lean_dec(v_name_1210_);
v_a_1230_ = lean_ctor_get(v___x_1220_, 0);
v_isSharedCheck_1237_ = !lean_is_exclusive(v___x_1220_);
if (v_isSharedCheck_1237_ == 0)
{
v___x_1232_ = v___x_1220_;
v_isShared_1233_ = v_isSharedCheck_1237_;
goto v_resetjp_1231_;
}
else
{
lean_inc(v_a_1230_);
lean_dec(v___x_1220_);
v___x_1232_ = lean_box(0);
v_isShared_1233_ = v_isSharedCheck_1237_;
goto v_resetjp_1231_;
}
v_resetjp_1231_:
{
lean_object* v___x_1235_; 
if (v_isShared_1233_ == 0)
{
v___x_1235_ = v___x_1232_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v_a_1230_);
v___x_1235_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1234_;
}
v_reusejp_1234_:
{
return v___x_1235_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_1238_, lean_object* v_decl_1239_, lean_object* v_ref_1240_, lean_object* v_a_1241_){
_start:
{
lean_object* v_res_1242_; 
v_res_1242_ = l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(v_name_1238_, v_decl_1239_, v_ref_1240_);
lean_dec_ref(v_decl_1239_);
return v_res_1242_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; 
v___x_1261_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_));
v___x_1262_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_));
v___x_1263_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_));
v___x_1264_ = l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(v___x_1261_, v___x_1262_, v___x_1263_);
return v___x_1264_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4____boxed(lean_object* v_a_1265_){
_start:
{
lean_object* v_res_1266_; 
v_res_1266_ = l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_();
return v_res_1266_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1285_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_));
v___x_1286_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_));
v___x_1287_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_));
v___x_1288_ = l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(v___x_1285_, v___x_1286_, v___x_1287_);
return v___x_1288_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4____boxed(lean_object* v_a_1289_){
_start:
{
lean_object* v_res_1290_; 
v_res_1290_ = l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_();
return v_res_1290_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1(lean_object* v_opts_1291_, lean_object* v_opt_1292_){
_start:
{
lean_object* v_name_1293_; lean_object* v_defValue_1294_; lean_object* v_map_1295_; lean_object* v___x_1296_; 
v_name_1293_ = lean_ctor_get(v_opt_1292_, 0);
v_defValue_1294_ = lean_ctor_get(v_opt_1292_, 1);
v_map_1295_ = lean_ctor_get(v_opts_1291_, 0);
v___x_1296_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1295_, v_name_1293_);
if (lean_obj_tag(v___x_1296_) == 0)
{
uint8_t v___x_1297_; 
v___x_1297_ = lean_unbox(v_defValue_1294_);
return v___x_1297_;
}
else
{
lean_object* v_val_1298_; 
v_val_1298_ = lean_ctor_get(v___x_1296_, 0);
lean_inc(v_val_1298_);
lean_dec_ref_known(v___x_1296_, 1);
if (lean_obj_tag(v_val_1298_) == 1)
{
uint8_t v_v_1299_; 
v_v_1299_ = lean_ctor_get_uint8(v_val_1298_, 0);
lean_dec_ref_known(v_val_1298_, 0);
return v_v_1299_;
}
else
{
uint8_t v___x_1300_; 
lean_dec(v_val_1298_);
v___x_1300_ = lean_unbox(v_defValue_1294_);
return v___x_1300_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1___boxed(lean_object* v_opts_1301_, lean_object* v_opt_1302_){
_start:
{
uint8_t v_res_1303_; lean_object* v_r_1304_; 
v_res_1303_ = l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1(v_opts_1301_, v_opt_1302_);
lean_dec_ref(v_opt_1302_);
lean_dec_ref(v_opts_1301_);
v_r_1304_ = lean_box(v_res_1303_);
return v_r_1304_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0(lean_object* v_declName_1308_, lean_object* v_env_1309_, lean_object* v_as_1310_, size_t v_sz_1311_, size_t v_i_1312_, lean_object* v_b_1313_){
_start:
{
uint8_t v___x_1314_; 
v___x_1314_ = lean_usize_dec_lt(v_i_1312_, v_sz_1311_);
if (v___x_1314_ == 0)
{
lean_dec_ref(v_env_1309_);
lean_dec(v_declName_1308_);
lean_inc_ref(v_b_1313_);
return v_b_1313_;
}
else
{
lean_object* v_a_1315_; lean_object* v_toImport_1316_; lean_object* v_module_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; uint8_t v___x_1324_; 
v_a_1315_ = lean_array_uget_borrowed(v_as_1310_, v_i_1312_);
v_toImport_1316_ = lean_ctor_get(v_a_1315_, 0);
v_module_1317_ = lean_ctor_get(v_toImport_1316_, 0);
v___x_1318_ = lean_box(0);
lean_inc(v_declName_1308_);
lean_inc(v_module_1317_);
v___x_1319_ = l_Lean_mkPrivateNameCore(v_module_1317_, v_declName_1308_);
lean_inc(v___x_1319_);
v___x_1324_ = l_Lean_Environment_moduleDeclares(v_env_1309_, v_module_1317_, v___x_1319_);
if (v___x_1324_ == 0)
{
uint8_t v___x_1325_; 
lean_inc(v___x_1319_);
lean_inc_ref(v_env_1309_);
v___x_1325_ = lean_is_reserved_name(v_env_1309_, v___x_1319_);
if (v___x_1325_ == 0)
{
lean_object* v___x_1326_; size_t v___x_1327_; size_t v___x_1328_; 
lean_dec(v___x_1319_);
v___x_1326_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___closed__0));
v___x_1327_ = ((size_t)1ULL);
v___x_1328_ = lean_usize_add(v_i_1312_, v___x_1327_);
v_i_1312_ = v___x_1328_;
v_b_1313_ = v___x_1326_;
goto _start;
}
else
{
lean_dec_ref(v_env_1309_);
lean_dec(v_declName_1308_);
goto v___jp_1320_;
}
}
else
{
lean_dec_ref(v_env_1309_);
lean_dec(v_declName_1308_);
goto v___jp_1320_;
}
v___jp_1320_:
{
lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1319_);
v___x_1322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1322_, 0, v___x_1321_);
v___x_1323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1322_);
lean_ctor_set(v___x_1323_, 1, v___x_1318_);
return v___x_1323_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___boxed(lean_object* v_declName_1330_, lean_object* v_env_1331_, lean_object* v_as_1332_, lean_object* v_sz_1333_, lean_object* v_i_1334_, lean_object* v_b_1335_){
_start:
{
size_t v_sz_boxed_1336_; size_t v_i_boxed_1337_; lean_object* v_res_1338_; 
v_sz_boxed_1336_ = lean_unbox_usize(v_sz_1333_);
lean_dec(v_sz_1333_);
v_i_boxed_1337_ = lean_unbox_usize(v_i_1334_);
lean_dec(v_i_1334_);
v_res_1338_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0(v_declName_1330_, v_env_1331_, v_as_1332_, v_sz_boxed_1336_, v_i_boxed_1337_, v_b_1335_);
lean_dec_ref(v_b_1335_);
lean_dec_ref(v_as_1332_);
return v_res_1338_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(lean_object* v_env_1339_, lean_object* v_opts_1340_, lean_object* v_declName_1341_, uint8_t v_localOnly_1342_){
_start:
{
uint8_t v_isExporting_1360_; 
v_isExporting_1360_ = lean_ctor_get_uint8(v_env_1339_, sizeof(void*)*13);
if (v_isExporting_1360_ == 0)
{
goto v___jp_1343_;
}
else
{
lean_object* v___x_1361_; uint8_t v___x_1362_; 
v___x_1361_ = l_Lean_ResolveName_backward_privateInPublic;
v___x_1362_ = l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1(v_opts_1340_, v___x_1361_);
if (v___x_1362_ == 0)
{
lean_object* v___x_1363_; 
lean_dec(v_declName_1341_);
lean_dec_ref(v_env_1339_);
v___x_1363_ = lean_box(0);
return v___x_1363_;
}
else
{
goto v___jp_1343_;
}
}
v___jp_1343_:
{
uint8_t v___x_1344_; lean_object* v___x_1345_; uint8_t v___x_1346_; 
v___x_1344_ = 1;
lean_inc(v_declName_1341_);
v___x_1345_ = l_Lean_mkPrivateName(v_env_1339_, v_declName_1341_);
lean_inc(v___x_1345_);
lean_inc_ref(v_env_1339_);
v___x_1346_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1339_, v___x_1345_, v___x_1344_);
if (v___x_1346_ == 0)
{
lean_object* v___x_1347_; uint8_t v_isModule_1348_; 
lean_dec(v___x_1345_);
v___x_1347_ = l_Lean_Environment_header(v_env_1339_);
v_isModule_1348_ = lean_ctor_get_uint8(v___x_1347_, sizeof(void*)*8 + 4);
if (v_isModule_1348_ == 0)
{
lean_object* v___x_1349_; 
lean_dec_ref(v___x_1347_);
lean_dec(v_declName_1341_);
lean_dec_ref(v_env_1339_);
v___x_1349_ = lean_box(0);
return v___x_1349_;
}
else
{
if (v_localOnly_1342_ == 0)
{
lean_object* v_importAllModules_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; size_t v_sz_1353_; size_t v___x_1354_; lean_object* v___x_1355_; lean_object* v_fst_1356_; 
v_importAllModules_1350_ = lean_ctor_get(v___x_1347_, 6);
lean_inc_ref(v_importAllModules_1350_);
lean_dec_ref(v___x_1347_);
v___x_1351_ = lean_box(0);
v___x_1352_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___closed__0));
v_sz_1353_ = lean_array_size(v_importAllModules_1350_);
v___x_1354_ = ((size_t)0ULL);
v___x_1355_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0(v_declName_1341_, v_env_1339_, v_importAllModules_1350_, v_sz_1353_, v___x_1354_, v___x_1352_);
lean_dec_ref(v_importAllModules_1350_);
v_fst_1356_ = lean_ctor_get(v___x_1355_, 0);
lean_inc(v_fst_1356_);
lean_dec_ref(v___x_1355_);
if (lean_obj_tag(v_fst_1356_) == 0)
{
return v___x_1351_;
}
else
{
lean_object* v_val_1357_; 
v_val_1357_ = lean_ctor_get(v_fst_1356_, 0);
lean_inc(v_val_1357_);
lean_dec_ref_known(v_fst_1356_, 1);
return v_val_1357_;
}
}
else
{
lean_object* v___x_1358_; 
lean_dec_ref(v___x_1347_);
lean_dec(v_declName_1341_);
lean_dec_ref(v_env_1339_);
v___x_1358_ = lean_box(0);
return v___x_1358_;
}
}
}
else
{
lean_object* v___x_1359_; 
lean_dec(v_declName_1341_);
lean_dec_ref(v_env_1339_);
v___x_1359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1359_, 0, v___x_1345_);
return v___x_1359_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName___boxed(lean_object* v_env_1364_, lean_object* v_opts_1365_, lean_object* v_declName_1366_, lean_object* v_localOnly_1367_){
_start:
{
uint8_t v_localOnly_boxed_1368_; lean_object* v_res_1369_; 
v_localOnly_boxed_1368_ = lean_unbox(v_localOnly_1367_);
v_res_1369_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(v_env_1364_, v_opts_1365_, v_declName_1366_, v_localOnly_boxed_1368_);
lean_dec_ref(v_opts_1365_);
return v_res_1369_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(lean_object* v_env_1370_, lean_object* v_opts_1371_, lean_object* v_ns_1372_, lean_object* v_id_1373_, uint8_t v_localOnly_1374_){
_start:
{
lean_object* v_resolvedId_1375_; uint8_t v___x_1376_; lean_object* v_resolvedIds_1377_; 
lean_inc(v_id_1373_);
v_resolvedId_1375_ = l_Lean_Name_append(v_ns_1372_, v_id_1373_);
v___x_1376_ = l_Lean_Name_isAtomic(v_id_1373_);
lean_dec(v_id_1373_);
lean_inc_ref(v_env_1370_);
v_resolvedIds_1377_ = l_Lean_getAliases(v_env_1370_, v_resolvedId_1375_, v___x_1376_);
if (v___x_1376_ == 0)
{
goto v___jp_1378_;
}
else
{
uint8_t v___x_1384_; 
lean_inc(v_resolvedId_1375_);
lean_inc_ref(v_env_1370_);
v___x_1384_ = l_Lean_isProtected(v_env_1370_, v_resolvedId_1375_);
if (v___x_1384_ == 0)
{
goto v___jp_1378_;
}
else
{
lean_dec(v_resolvedId_1375_);
lean_dec_ref(v_env_1370_);
return v_resolvedIds_1377_;
}
}
v___jp_1378_:
{
uint8_t v___x_1379_; 
lean_inc(v_resolvedId_1375_);
lean_inc_ref(v_env_1370_);
v___x_1379_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1370_, v_resolvedId_1375_, v_localOnly_1374_);
if (v___x_1379_ == 0)
{
lean_object* v___x_1380_; 
v___x_1380_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(v_env_1370_, v_opts_1371_, v_resolvedId_1375_, v_localOnly_1374_);
if (lean_obj_tag(v___x_1380_) == 1)
{
lean_object* v_val_1381_; lean_object* v___x_1382_; 
v_val_1381_ = lean_ctor_get(v___x_1380_, 0);
lean_inc(v_val_1381_);
lean_dec_ref_known(v___x_1380_, 1);
v___x_1382_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1382_, 0, v_val_1381_);
lean_ctor_set(v___x_1382_, 1, v_resolvedIds_1377_);
return v___x_1382_;
}
else
{
lean_dec(v___x_1380_);
return v_resolvedIds_1377_;
}
}
else
{
lean_object* v___x_1383_; 
lean_dec_ref(v_env_1370_);
v___x_1383_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1383_, 0, v_resolvedId_1375_);
lean_ctor_set(v___x_1383_, 1, v_resolvedIds_1377_);
return v___x_1383_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName___boxed(lean_object* v_env_1385_, lean_object* v_opts_1386_, lean_object* v_ns_1387_, lean_object* v_id_1388_, lean_object* v_localOnly_1389_){
_start:
{
uint8_t v_localOnly_boxed_1390_; lean_object* v_res_1391_; 
v_localOnly_boxed_1390_ = lean_unbox(v_localOnly_1389_);
v_res_1391_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(v_env_1385_, v_opts_1386_, v_ns_1387_, v_id_1388_, v_localOnly_boxed_1390_);
lean_dec_ref(v_opts_1386_);
return v_res_1391_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace(lean_object* v_env_1392_, lean_object* v_opts_1393_, lean_object* v_id_1394_, uint8_t v_localOnly_1395_, lean_object* v_x_1396_){
_start:
{
if (lean_obj_tag(v_x_1396_) == 1)
{
lean_object* v_pre_1397_; lean_object* v___x_1398_; 
v_pre_1397_ = lean_ctor_get(v_x_1396_, 0);
lean_inc(v_pre_1397_);
lean_inc(v_id_1394_);
lean_inc_ref(v_env_1392_);
v___x_1398_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(v_env_1392_, v_opts_1393_, v_x_1396_, v_id_1394_, v_localOnly_1395_);
if (lean_obj_tag(v___x_1398_) == 0)
{
v_x_1396_ = v_pre_1397_;
goto _start;
}
else
{
lean_dec(v_pre_1397_);
lean_dec(v_id_1394_);
lean_dec_ref(v_env_1392_);
return v___x_1398_;
}
}
else
{
lean_object* v___x_1400_; 
lean_dec(v_x_1396_);
lean_dec(v_id_1394_);
lean_dec_ref(v_env_1392_);
v___x_1400_ = lean_box(0);
return v___x_1400_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace___boxed(lean_object* v_env_1401_, lean_object* v_opts_1402_, lean_object* v_id_1403_, lean_object* v_localOnly_1404_, lean_object* v_x_1405_){
_start:
{
uint8_t v_localOnly_boxed_1406_; lean_object* v_res_1407_; 
v_localOnly_boxed_1406_ = lean_unbox(v_localOnly_1404_);
v_res_1407_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace(v_env_1401_, v_opts_1402_, v_id_1403_, v_localOnly_boxed_1406_, v_x_1405_);
lean_dec_ref(v_opts_1402_);
return v_res_1407_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact(lean_object* v_env_1408_, lean_object* v_opts_1409_, lean_object* v_id_1410_, uint8_t v_localOnly_1411_){
_start:
{
uint8_t v___x_1412_; 
v___x_1412_ = l_Lean_Name_isAtomic(v_id_1410_);
if (v___x_1412_ == 0)
{
lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v_resolvedId_1415_; uint8_t v___x_1416_; 
v___x_1413_ = l_Lean_rootNamespace;
v___x_1414_ = lean_box(0);
v_resolvedId_1415_ = l_Lean_Name_replacePrefix(v_id_1410_, v___x_1413_, v___x_1414_);
lean_inc(v_resolvedId_1415_);
lean_inc_ref(v_env_1408_);
v___x_1416_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1408_, v_resolvedId_1415_, v_localOnly_1411_);
if (v___x_1416_ == 0)
{
lean_object* v___x_1417_; 
v___x_1417_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(v_env_1408_, v_opts_1409_, v_resolvedId_1415_, v_localOnly_1411_);
return v___x_1417_;
}
else
{
lean_object* v___x_1418_; 
lean_dec_ref(v_env_1408_);
v___x_1418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1418_, 0, v_resolvedId_1415_);
return v___x_1418_;
}
}
else
{
lean_object* v___x_1419_; 
lean_dec(v_id_1410_);
lean_dec_ref(v_env_1408_);
v___x_1419_ = lean_box(0);
return v___x_1419_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact___boxed(lean_object* v_env_1420_, lean_object* v_opts_1421_, lean_object* v_id_1422_, lean_object* v_localOnly_1423_){
_start:
{
uint8_t v_localOnly_boxed_1424_; lean_object* v_res_1425_; 
v_localOnly_boxed_1424_ = lean_unbox(v_localOnly_1423_);
v_res_1425_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact(v_env_1420_, v_opts_1421_, v_id_1422_, v_localOnly_boxed_1424_);
lean_dec_ref(v_opts_1421_);
return v_res_1425_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls(lean_object* v_env_1426_, lean_object* v_opts_1427_, lean_object* v_id_1428_, uint8_t v_localOnly_1429_, lean_object* v_x_1430_, lean_object* v_x_1431_){
_start:
{
if (lean_obj_tag(v_x_1430_) == 0)
{
lean_dec(v_id_1428_);
lean_dec_ref(v_env_1426_);
return v_x_1431_;
}
else
{
lean_object* v_head_1432_; 
v_head_1432_ = lean_ctor_get(v_x_1430_, 0);
lean_inc(v_head_1432_);
if (lean_obj_tag(v_head_1432_) == 0)
{
lean_object* v_tail_1433_; lean_object* v_ns_1434_; lean_object* v_except_1435_; uint8_t v___x_1436_; 
v_tail_1433_ = lean_ctor_get(v_x_1430_, 1);
lean_inc(v_tail_1433_);
lean_dec_ref_known(v_x_1430_, 2);
v_ns_1434_ = lean_ctor_get(v_head_1432_, 0);
lean_inc(v_ns_1434_);
v_except_1435_ = lean_ctor_get(v_head_1432_, 1);
lean_inc(v_except_1435_);
lean_dec_ref_known(v_head_1432_, 2);
v___x_1436_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_id_1428_, v_except_1435_);
lean_dec(v_except_1435_);
if (v___x_1436_ == 0)
{
lean_object* v_newResolvedIds_1437_; lean_object* v___x_1438_; 
lean_inc(v_id_1428_);
lean_inc_ref(v_env_1426_);
v_newResolvedIds_1437_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(v_env_1426_, v_opts_1427_, v_ns_1434_, v_id_1428_, v_localOnly_1429_);
v___x_1438_ = l_List_appendTR___redArg(v_newResolvedIds_1437_, v_x_1431_);
v_x_1430_ = v_tail_1433_;
v_x_1431_ = v___x_1438_;
goto _start;
}
else
{
lean_dec(v_ns_1434_);
v_x_1430_ = v_tail_1433_;
goto _start;
}
}
else
{
lean_object* v_tail_1441_; lean_object* v___x_1443_; uint8_t v_isShared_1444_; uint8_t v_isSharedCheck_1461_; 
v_tail_1441_ = lean_ctor_get(v_x_1430_, 1);
v_isSharedCheck_1461_ = !lean_is_exclusive(v_x_1430_);
if (v_isSharedCheck_1461_ == 0)
{
lean_object* v_unused_1462_; 
v_unused_1462_ = lean_ctor_get(v_x_1430_, 0);
lean_dec(v_unused_1462_);
v___x_1443_ = v_x_1430_;
v_isShared_1444_ = v_isSharedCheck_1461_;
goto v_resetjp_1442_;
}
else
{
lean_inc(v_tail_1441_);
lean_dec(v_x_1430_);
v___x_1443_ = lean_box(0);
v_isShared_1444_ = v_isSharedCheck_1461_;
goto v_resetjp_1442_;
}
v_resetjp_1442_:
{
lean_object* v_id_1445_; lean_object* v_declName_1446_; uint8_t v___x_1447_; 
v_id_1445_ = lean_ctor_get(v_head_1432_, 0);
lean_inc(v_id_1445_);
v_declName_1446_ = lean_ctor_get(v_head_1432_, 1);
lean_inc(v_declName_1446_);
lean_dec_ref_known(v_head_1432_, 2);
v___x_1447_ = lean_name_eq(v_id_1445_, v_id_1428_);
if (v___x_1447_ == 0)
{
uint8_t v___x_1448_; 
v___x_1448_ = l_Lean_Name_isPrefixOf(v_id_1445_, v_id_1428_);
if (v___x_1448_ == 0)
{
lean_dec(v_declName_1446_);
lean_dec(v_id_1445_);
lean_del_object(v___x_1443_);
v_x_1430_ = v_tail_1441_;
goto _start;
}
else
{
lean_object* v_candidate_1450_; uint8_t v___x_1451_; 
lean_inc(v_id_1428_);
v_candidate_1450_ = l_Lean_Name_replacePrefix(v_id_1428_, v_id_1445_, v_declName_1446_);
lean_dec(v_declName_1446_);
lean_dec(v_id_1445_);
lean_inc(v_candidate_1450_);
lean_inc_ref(v_env_1426_);
v___x_1451_ = l_Lean_Environment_contains(v_env_1426_, v_candidate_1450_, v___x_1448_);
if (v___x_1451_ == 0)
{
lean_dec(v_candidate_1450_);
lean_del_object(v___x_1443_);
v_x_1430_ = v_tail_1441_;
goto _start;
}
else
{
lean_object* v___x_1454_; 
if (v_isShared_1444_ == 0)
{
lean_ctor_set(v___x_1443_, 1, v_x_1431_);
lean_ctor_set(v___x_1443_, 0, v_candidate_1450_);
v___x_1454_ = v___x_1443_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v_candidate_1450_);
lean_ctor_set(v_reuseFailAlloc_1456_, 1, v_x_1431_);
v___x_1454_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
v_x_1430_ = v_tail_1441_;
v_x_1431_ = v___x_1454_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_1458_; 
lean_dec(v_id_1445_);
if (v_isShared_1444_ == 0)
{
lean_ctor_set(v___x_1443_, 1, v_x_1431_);
lean_ctor_set(v___x_1443_, 0, v_declName_1446_);
v___x_1458_ = v___x_1443_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v_declName_1446_);
lean_ctor_set(v_reuseFailAlloc_1460_, 1, v_x_1431_);
v___x_1458_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
v_x_1430_ = v_tail_1441_;
v_x_1431_ = v___x_1458_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls___boxed(lean_object* v_env_1463_, lean_object* v_opts_1464_, lean_object* v_id_1465_, lean_object* v_localOnly_1466_, lean_object* v_x_1467_, lean_object* v_x_1468_){
_start:
{
uint8_t v_localOnly_boxed_1469_; lean_object* v_res_1470_; 
v_localOnly_boxed_1469_ = lean_unbox(v_localOnly_1466_);
v_res_1470_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls(v_env_1463_, v_opts_1464_, v_id_1465_, v_localOnly_boxed_1469_, v_x_1467_, v_x_1468_);
lean_dec_ref(v_opts_1464_);
return v_res_1470_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg(lean_object* v_main_1481_, lean_object* v_as_x27_1482_, lean_object* v_b_1483_){
_start:
{
if (lean_obj_tag(v_as_x27_1482_) == 0)
{
return v_b_1483_;
}
else
{
lean_object* v_head_1484_; lean_object* v_tail_1485_; lean_object* v_snd_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1514_; 
v_head_1484_ = lean_ctor_get(v_as_x27_1482_, 0);
v_tail_1485_ = lean_ctor_get(v_as_x27_1482_, 1);
v_snd_1486_ = lean_ctor_get(v_b_1483_, 1);
v_isSharedCheck_1514_ = !lean_is_exclusive(v_b_1483_);
if (v_isSharedCheck_1514_ == 0)
{
lean_object* v_unused_1515_; 
v_unused_1515_ = lean_ctor_get(v_b_1483_, 0);
lean_dec(v_unused_1515_);
v___x_1488_ = v_b_1483_;
v_isShared_1489_ = v_isSharedCheck_1514_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_snd_1486_);
lean_dec(v_b_1483_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1514_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1490_; 
v___x_1490_ = lean_box(0);
switch(lean_obj_tag(v_head_1484_))
{
case 2:
{
lean_object* v_hygCtx_1491_; lean_object* v___x_1492_; uint8_t v___x_1493_; 
v_hygCtx_1491_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__1));
v___x_1492_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__2));
v___x_1493_ = lean_name_eq(v_snd_1486_, v_main_1481_);
if (v___x_1493_ == 0)
{
uint8_t v___x_1494_; 
v___x_1494_ = lean_name_eq(v_snd_1486_, v_hygCtx_1491_);
if (v___x_1494_ == 0)
{
uint8_t v___x_1495_; 
v___x_1495_ = l_Lean_Name_isAnonymous(v_snd_1486_);
if (v___x_1495_ == 0)
{
lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1499_; 
v___x_1496_ = lean_box(v___x_1495_);
v___x_1497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1497_, 0, v___x_1496_);
if (v_isShared_1489_ == 0)
{
lean_ctor_set(v___x_1488_, 0, v___x_1497_);
v___x_1499_ = v___x_1488_;
goto v_reusejp_1498_;
}
else
{
lean_object* v_reuseFailAlloc_1500_; 
v_reuseFailAlloc_1500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1500_, 0, v___x_1497_);
lean_ctor_set(v_reuseFailAlloc_1500_, 1, v_snd_1486_);
v___x_1499_ = v_reuseFailAlloc_1500_;
goto v_reusejp_1498_;
}
v_reusejp_1498_:
{
return v___x_1499_;
}
}
else
{
lean_del_object(v___x_1488_);
lean_dec(v_snd_1486_);
v_as_x27_1482_ = v_tail_1485_;
v_b_1483_ = v___x_1492_;
goto _start;
}
}
else
{
lean_del_object(v___x_1488_);
lean_dec(v_snd_1486_);
v_as_x27_1482_ = v_tail_1485_;
v_b_1483_ = v___x_1492_;
goto _start;
}
}
else
{
lean_del_object(v___x_1488_);
lean_dec(v_snd_1486_);
v_as_x27_1482_ = v_tail_1485_;
v_b_1483_ = v___x_1492_;
goto _start;
}
}
case 1:
{
lean_object* v_str_1504_; lean_object* v___x_1505_; lean_object* v___x_1507_; 
v_str_1504_ = lean_ctor_get(v_head_1484_, 1);
lean_inc_ref(v_str_1504_);
v___x_1505_ = l_Lean_Name_str___override(v_snd_1486_, v_str_1504_);
if (v_isShared_1489_ == 0)
{
lean_ctor_set(v___x_1488_, 1, v___x_1505_);
lean_ctor_set(v___x_1488_, 0, v___x_1490_);
v___x_1507_ = v___x_1488_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v___x_1490_);
lean_ctor_set(v_reuseFailAlloc_1509_, 1, v___x_1505_);
v___x_1507_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
v_as_x27_1482_ = v_tail_1485_;
v_b_1483_ = v___x_1507_;
goto _start;
}
}
default: 
{
lean_object* v___x_1510_; lean_object* v___x_1512_; 
v___x_1510_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__3));
if (v_isShared_1489_ == 0)
{
lean_ctor_set(v___x_1488_, 0, v___x_1510_);
v___x_1512_ = v___x_1488_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v___x_1510_);
lean_ctor_set(v_reuseFailAlloc_1513_, 1, v_snd_1486_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
return v___x_1512_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___boxed(lean_object* v_main_1516_, lean_object* v_as_x27_1517_, lean_object* v_b_1518_){
_start:
{
lean_object* v_res_1519_; 
v_res_1519_ = l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg(v_main_1516_, v_as_x27_1517_, v_b_1518_);
lean_dec(v_as_x27_1517_);
lean_dec(v_main_1516_);
return v_res_1519_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo(lean_object* v_main_1520_, lean_object* v_imported_1521_, lean_object* v_ctx_1522_){
_start:
{
lean_object* v_hygCtx_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v_fst_1529_; 
v_hygCtx_1523_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__1));
v___x_1524_ = l_Lean_Name_components(v_imported_1521_);
v___x_1525_ = l_Lean_Name_components(v_ctx_1522_);
v___x_1526_ = l_List_appendTR___redArg(v___x_1524_, v___x_1525_);
v___x_1527_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg___closed__2));
v___x_1528_ = l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg(v_main_1520_, v___x_1526_, v___x_1527_);
lean_dec(v___x_1526_);
v_fst_1529_ = lean_ctor_get(v___x_1528_, 0);
if (lean_obj_tag(v_fst_1529_) == 0)
{
lean_object* v_snd_1530_; uint8_t v___x_1531_; 
v_snd_1530_ = lean_ctor_get(v___x_1528_, 1);
lean_inc(v_snd_1530_);
lean_dec_ref(v___x_1528_);
v___x_1531_ = lean_name_eq(v_snd_1530_, v_main_1520_);
if (v___x_1531_ == 0)
{
uint8_t v___x_1532_; 
v___x_1532_ = lean_name_eq(v_snd_1530_, v_hygCtx_1523_);
if (v___x_1532_ == 0)
{
uint8_t v___x_1533_; 
v___x_1533_ = l_Lean_Name_isAnonymous(v_snd_1530_);
lean_dec(v_snd_1530_);
return v___x_1533_;
}
else
{
lean_dec(v_snd_1530_);
return v___x_1532_;
}
}
else
{
lean_dec(v_snd_1530_);
return v___x_1531_;
}
}
else
{
lean_object* v_val_1534_; uint8_t v___x_1535_; 
lean_inc_ref(v_fst_1529_);
lean_dec_ref(v___x_1528_);
v_val_1534_ = lean_ctor_get(v_fst_1529_, 0);
lean_inc(v_val_1534_);
lean_dec_ref_known(v_fst_1529_, 1);
v___x_1535_ = lean_unbox(v_val_1534_);
lean_dec(v_val_1534_);
return v___x_1535_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo___boxed(lean_object* v_main_1536_, lean_object* v_imported_1537_, lean_object* v_ctx_1538_){
_start:
{
uint8_t v_res_1539_; lean_object* v_r_1540_; 
v_res_1539_ = l___private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo(v_main_1536_, v_imported_1537_, v_ctx_1538_);
lean_dec(v_main_1536_);
v_r_1540_ = lean_box(v_res_1539_);
return v_r_1540_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0(lean_object* v_main_1541_, lean_object* v_as_1542_, lean_object* v_as_x27_1543_, lean_object* v_b_1544_, lean_object* v_a_1545_){
_start:
{
lean_object* v___x_1546_; 
v___x_1546_ = l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___redArg(v_main_1541_, v_as_x27_1543_, v_b_1544_);
return v___x_1546_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0___boxed(lean_object* v_main_1547_, lean_object* v_as_1548_, lean_object* v_as_x27_1549_, lean_object* v_b_1550_, lean_object* v_a_1551_){
_start:
{
lean_object* v_res_1552_; 
v_res_1552_ = l_List_forIn_x27_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo_spec__0(v_main_1547_, v_as_1548_, v_as_x27_1549_, v_b_1550_, v_a_1551_);
lean_dec(v_as_x27_1549_);
lean_dec(v_as_1548_);
lean_dec(v_main_1547_);
return v_res_1552_;
}
}
LEAN_EXPORT lean_object* l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0(lean_object* v_as_1554_){
_start:
{
lean_object* v___f_1555_; lean_object* v___x_1556_; 
v___f_1555_ = ((lean_object*)(l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0___closed__0));
v___x_1556_ = l_List_eraseDupsBy___redArg(v___f_1555_, v_as_1554_);
return v___x_1556_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__1(lean_object* v_projs_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_){
_start:
{
if (lean_obj_tag(v_a_1558_) == 0)
{
lean_object* v___x_1560_; 
lean_dec(v_projs_1557_);
v___x_1560_ = l_List_reverse___redArg(v_a_1559_);
return v___x_1560_;
}
else
{
lean_object* v_head_1561_; lean_object* v_tail_1562_; lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1571_; 
v_head_1561_ = lean_ctor_get(v_a_1558_, 0);
v_tail_1562_ = lean_ctor_get(v_a_1558_, 1);
v_isSharedCheck_1571_ = !lean_is_exclusive(v_a_1558_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1564_ = v_a_1558_;
v_isShared_1565_ = v_isSharedCheck_1571_;
goto v_resetjp_1563_;
}
else
{
lean_inc(v_tail_1562_);
lean_inc(v_head_1561_);
lean_dec(v_a_1558_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1571_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
lean_object* v___x_1566_; lean_object* v___x_1568_; 
lean_inc(v_projs_1557_);
v___x_1566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1566_, 0, v_head_1561_);
lean_ctor_set(v___x_1566_, 1, v_projs_1557_);
if (v_isShared_1565_ == 0)
{
lean_ctor_set(v___x_1564_, 1, v_a_1559_);
lean_ctor_set(v___x_1564_, 0, v___x_1566_);
v___x_1568_ = v___x_1564_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v___x_1566_);
lean_ctor_set(v_reuseFailAlloc_1570_, 1, v_a_1559_);
v___x_1568_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
v_a_1558_ = v_tail_1562_;
v_a_1559_ = v___x_1568_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop(lean_object* v_env_1572_, lean_object* v_opts_1573_, lean_object* v_ns_1574_, lean_object* v_openDecls_1575_, lean_object* v_extractionResult_1576_, uint8_t v_localOnly_1577_, lean_object* v_id_1578_, lean_object* v_projs_1579_){
_start:
{
if (lean_obj_tag(v_id_1578_) == 1)
{
lean_object* v_pre_1580_; lean_object* v_str_1581_; lean_object* v_imported_1582_; lean_object* v_ctx_1583_; lean_object* v_scopes_1584_; lean_object* v___x_1585_; lean_object* v_id_1586_; lean_object* v___y_1588_; lean_object* v___x_1598_; lean_object* v___y_1600_; 
v_pre_1580_ = lean_ctor_get(v_id_1578_, 0);
lean_inc(v_pre_1580_);
v_str_1581_ = lean_ctor_get(v_id_1578_, 1);
lean_inc_ref(v_str_1581_);
v_imported_1582_ = lean_ctor_get(v_extractionResult_1576_, 1);
v_ctx_1583_ = lean_ctor_get(v_extractionResult_1576_, 2);
v_scopes_1584_ = lean_ctor_get(v_extractionResult_1576_, 3);
lean_inc(v_scopes_1584_);
lean_inc(v_ctx_1583_);
lean_inc(v_imported_1582_);
v___x_1585_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1585_, 0, v_id_1578_);
lean_ctor_set(v___x_1585_, 1, v_imported_1582_);
lean_ctor_set(v___x_1585_, 2, v_ctx_1583_);
lean_ctor_set(v___x_1585_, 3, v_scopes_1584_);
v_id_1586_ = l_Lean_MacroScopesView_review(v___x_1585_);
lean_inc(v_ns_1574_);
lean_inc(v_id_1586_);
lean_inc_ref(v_env_1572_);
v___x_1598_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace(v_env_1572_, v_opts_1573_, v_id_1586_, v_localOnly_1577_, v_ns_1574_);
if (lean_obj_tag(v___x_1598_) == 0)
{
lean_object* v___x_1605_; 
lean_inc(v_id_1586_);
lean_inc_ref(v_env_1572_);
v___x_1605_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact(v_env_1572_, v_opts_1573_, v_id_1586_, v_localOnly_1577_);
if (lean_obj_tag(v___x_1605_) == 0)
{
uint8_t v___x_1606_; 
lean_inc(v_id_1586_);
lean_inc_ref(v_env_1572_);
v___x_1606_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1572_, v_id_1586_, v_localOnly_1577_);
if (v___x_1606_ == 0)
{
v___y_1600_ = v___x_1598_;
goto v___jp_1599_;
}
else
{
lean_object* v___x_1607_; 
lean_inc(v_id_1586_);
v___x_1607_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1607_, 0, v_id_1586_);
lean_ctor_set(v___x_1607_, 1, v___x_1598_);
v___y_1600_ = v___x_1607_;
goto v___jp_1599_;
}
}
else
{
lean_object* v_val_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; 
lean_dec(v_id_1586_);
lean_dec_ref(v_str_1581_);
lean_dec(v_pre_1580_);
lean_dec(v_openDecls_1575_);
lean_dec(v_ns_1574_);
lean_dec_ref(v_env_1572_);
v_val_1608_ = lean_ctor_get(v___x_1605_, 0);
lean_inc(v_val_1608_);
lean_dec_ref_known(v___x_1605_, 1);
v___x_1609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1609_, 0, v_val_1608_);
lean_ctor_set(v___x_1609_, 1, v_projs_1579_);
v___x_1610_ = lean_box(0);
v___x_1611_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1611_, 0, v___x_1609_);
lean_ctor_set(v___x_1611_, 1, v___x_1610_);
return v___x_1611_;
}
}
else
{
lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; 
lean_dec(v_id_1586_);
lean_dec_ref(v_str_1581_);
lean_dec(v_pre_1580_);
lean_dec(v_openDecls_1575_);
lean_dec(v_ns_1574_);
lean_dec_ref(v_env_1572_);
v___x_1612_ = l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0(v___x_1598_);
v___x_1613_ = lean_box(0);
v___x_1614_ = l_List_mapTR_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__1(v_projs_1579_, v___x_1612_, v___x_1613_);
return v___x_1614_;
}
v___jp_1587_:
{
lean_object* v_resolvedIds_1589_; uint8_t v___x_1590_; lean_object* v___x_1591_; lean_object* v_resolvedIds_1592_; 
lean_inc(v_openDecls_1575_);
lean_inc(v_id_1586_);
lean_inc_ref_n(v_env_1572_, 2);
v_resolvedIds_1589_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls(v_env_1572_, v_opts_1573_, v_id_1586_, v_localOnly_1577_, v_openDecls_1575_, v___y_1588_);
v___x_1590_ = l_Lean_Name_isAtomic(v_id_1586_);
v___x_1591_ = l_Lean_getAliases(v_env_1572_, v_id_1586_, v___x_1590_);
lean_dec(v_id_1586_);
v_resolvedIds_1592_ = l_List_appendTR___redArg(v___x_1591_, v_resolvedIds_1589_);
if (lean_obj_tag(v_resolvedIds_1592_) == 0)
{
lean_object* v___x_1593_; 
v___x_1593_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1593_, 0, v_str_1581_);
lean_ctor_set(v___x_1593_, 1, v_projs_1579_);
v_id_1578_ = v_pre_1580_;
v_projs_1579_ = v___x_1593_;
goto _start;
}
else
{
lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; 
lean_dec_ref(v_str_1581_);
lean_dec(v_pre_1580_);
lean_dec(v_openDecls_1575_);
lean_dec(v_ns_1574_);
lean_dec_ref(v_env_1572_);
v___x_1595_ = l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0(v_resolvedIds_1592_);
v___x_1596_ = lean_box(0);
v___x_1597_ = l_List_mapTR_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__1(v_projs_1579_, v___x_1595_, v___x_1596_);
return v___x_1597_;
}
}
v___jp_1599_:
{
lean_object* v___x_1601_; 
lean_inc(v_id_1586_);
lean_inc_ref(v_env_1572_);
v___x_1601_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(v_env_1572_, v_opts_1573_, v_id_1586_, v_localOnly_1577_);
if (lean_obj_tag(v___x_1601_) == 1)
{
lean_object* v_val_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; 
v_val_1602_ = lean_ctor_get(v___x_1601_, 0);
lean_inc(v_val_1602_);
lean_dec_ref_known(v___x_1601_, 1);
v___x_1603_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1603_, 0, v_val_1602_);
lean_ctor_set(v___x_1603_, 1, v___x_1598_);
v___x_1604_ = l_List_appendTR___redArg(v___x_1603_, v___y_1600_);
v___y_1588_ = v___x_1604_;
goto v___jp_1587_;
}
else
{
lean_dec(v___x_1601_);
lean_dec(v___x_1598_);
v___y_1588_ = v___y_1600_;
goto v___jp_1587_;
}
}
}
else
{
lean_object* v___x_1615_; 
lean_dec(v_projs_1579_);
lean_dec(v_id_1578_);
lean_dec(v_openDecls_1575_);
lean_dec(v_ns_1574_);
lean_dec_ref(v_env_1572_);
v___x_1615_ = lean_box(0);
return v___x_1615_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop___boxed(lean_object* v_env_1616_, lean_object* v_opts_1617_, lean_object* v_ns_1618_, lean_object* v_openDecls_1619_, lean_object* v_extractionResult_1620_, lean_object* v_localOnly_1621_, lean_object* v_id_1622_, lean_object* v_projs_1623_){
_start:
{
uint8_t v_localOnly_boxed_1624_; lean_object* v_res_1625_; 
v_localOnly_boxed_1624_ = lean_unbox(v_localOnly_1621_);
v_res_1625_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop(v_env_1616_, v_opts_1617_, v_ns_1618_, v_openDecls_1619_, v_extractionResult_1620_, v_localOnly_boxed_1624_, v_id_1622_, v_projs_1623_);
lean_dec_ref(v_extractionResult_1620_);
lean_dec_ref(v_opts_1617_);
return v_res_1625_;
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object* v_env_1626_, lean_object* v_opts_1627_, lean_object* v_ns_1628_, lean_object* v_openDecls_1629_, lean_object* v_id_1630_){
_start:
{
lean_object* v_extractionResult_1631_; lean_object* v_name_1632_; lean_object* v_imported_1633_; lean_object* v_ctx_1634_; lean_object* v_scopes_1635_; uint8_t v___y_1637_; uint8_t v___x_1640_; 
v_extractionResult_1631_ = l_Lean_extractMacroScopes(v_id_1630_);
v_name_1632_ = lean_ctor_get(v_extractionResult_1631_, 0);
lean_inc(v_name_1632_);
v_imported_1633_ = lean_ctor_get(v_extractionResult_1631_, 1);
v_ctx_1634_ = lean_ctor_get(v_extractionResult_1631_, 2);
v_scopes_1635_ = lean_ctor_get(v_extractionResult_1631_, 3);
v___x_1640_ = l_List_isEmpty___redArg(v_scopes_1635_);
if (v___x_1640_ == 0)
{
lean_object* v___x_1641_; uint8_t v___x_1642_; 
v___x_1641_ = l_Lean_Environment_mainModule(v_env_1626_);
lean_inc(v_ctx_1634_);
lean_inc(v_imported_1633_);
v___x_1642_ = l___private_Lean_ResolveName_0__Lean_ResolveName_contextLocalTo(v___x_1641_, v_imported_1633_, v_ctx_1634_);
lean_dec(v___x_1641_);
v___y_1637_ = v___x_1642_;
goto v___jp_1636_;
}
else
{
uint8_t v___x_1643_; 
v___x_1643_ = 0;
v___y_1637_ = v___x_1643_;
goto v___jp_1636_;
}
v___jp_1636_:
{
lean_object* v___x_1638_; lean_object* v___x_1639_; 
v___x_1638_ = lean_box(0);
v___x_1639_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop(v_env_1626_, v_opts_1627_, v_ns_1628_, v_openDecls_1629_, v_extractionResult_1631_, v___y_1637_, v_name_1632_, v___x_1638_);
lean_dec_ref(v_extractionResult_1631_);
return v___x_1639_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveGlobalName___boxed(lean_object* v_env_1644_, lean_object* v_opts_1645_, lean_object* v_ns_1646_, lean_object* v_openDecls_1647_, lean_object* v_id_1648_){
_start:
{
lean_object* v_res_1649_; 
v_res_1649_ = l_Lean_ResolveName_resolveGlobalName(v_env_1644_, v_opts_1645_, v_ns_1646_, v_openDecls_1647_, v_id_1648_);
lean_dec_ref(v_opts_1645_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_ResolveName_resolveNamespaceUsingScope_x3f_spec__0(lean_object* v_msg_1650_){
_start:
{
lean_object* v___x_1651_; lean_object* v___x_1652_; 
v___x_1651_ = lean_box(0);
v___x_1652_ = lean_panic_fn_borrowed(v___x_1651_, v_msg_1650_);
return v___x_1652_;
}
}
static lean_object* _init_l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3(void){
_start:
{
lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1656_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__2));
v___x_1657_ = lean_unsigned_to_nat(9u);
v___x_1658_ = lean_unsigned_to_nat(270u);
v___x_1659_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__1));
v___x_1660_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__0));
v___x_1661_ = l_mkPanicMessageWithDecl(v___x_1660_, v___x_1659_, v___x_1658_, v___x_1657_, v___x_1656_);
return v___x_1661_;
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespaceUsingScope_x3f(lean_object* v_env_1662_, lean_object* v_n_1663_, lean_object* v_ns_1664_){
_start:
{
switch(lean_obj_tag(v_ns_1664_))
{
case 1:
{
lean_object* v_pre_1665_; lean_object* v___x_1666_; uint8_t v___x_1667_; 
v_pre_1665_ = lean_ctor_get(v_ns_1664_, 0);
lean_inc(v_pre_1665_);
lean_inc(v_n_1663_);
v___x_1666_ = l_Lean_Name_append(v_ns_1664_, v_n_1663_);
lean_inc_ref(v_env_1662_);
v___x_1667_ = l_Lean_Environment_isNamespace(v_env_1662_, v___x_1666_);
if (v___x_1667_ == 0)
{
lean_dec(v___x_1666_);
v_ns_1664_ = v_pre_1665_;
goto _start;
}
else
{
lean_object* v___x_1669_; 
lean_dec(v_pre_1665_);
lean_dec(v_n_1663_);
lean_dec_ref(v_env_1662_);
v___x_1669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1669_, 0, v___x_1666_);
return v___x_1669_;
}
}
case 0:
{
lean_object* v___x_1670_; lean_object* v_n_1671_; uint8_t v___x_1672_; 
v___x_1670_ = l_Lean_rootNamespace;
v_n_1671_ = l_Lean_Name_replacePrefix(v_n_1663_, v___x_1670_, v_ns_1664_);
v___x_1672_ = l_Lean_Environment_isNamespace(v_env_1662_, v_n_1671_);
if (v___x_1672_ == 0)
{
lean_object* v___x_1673_; 
lean_dec(v_n_1671_);
v___x_1673_ = lean_box(0);
return v___x_1673_;
}
else
{
lean_object* v___x_1674_; 
v___x_1674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1674_, 0, v_n_1671_);
return v___x_1674_;
}
}
default: 
{
lean_object* v___x_1675_; lean_object* v___x_1676_; 
lean_dec(v_ns_1664_);
lean_dec(v_n_1663_);
lean_dec_ref(v_env_1662_);
v___x_1675_ = lean_obj_once(&l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3, &l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3_once, _init_l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3);
v___x_1676_ = l_panic___at___00Lean_ResolveName_resolveNamespaceUsingScope_x3f_spec__0(v___x_1675_);
return v___x_1676_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespaceUsingOpenDecls(lean_object* v_env_1677_, lean_object* v_n_1678_, lean_object* v_x_1679_){
_start:
{
if (lean_obj_tag(v_x_1679_) == 0)
{
lean_object* v___x_1680_; 
lean_dec(v_n_1678_);
lean_dec_ref(v_env_1677_);
v___x_1680_ = lean_box(0);
return v___x_1680_;
}
else
{
lean_object* v_head_1681_; 
v_head_1681_ = lean_ctor_get(v_x_1679_, 0);
if (lean_obj_tag(v_head_1681_) == 0)
{
lean_object* v_tail_1682_; lean_object* v___x_1684_; uint8_t v_isShared_1685_; uint8_t v_isSharedCheck_1697_; 
lean_inc_ref(v_head_1681_);
v_tail_1682_ = lean_ctor_get(v_x_1679_, 1);
v_isSharedCheck_1697_ = !lean_is_exclusive(v_x_1679_);
if (v_isSharedCheck_1697_ == 0)
{
lean_object* v_unused_1698_; 
v_unused_1698_ = lean_ctor_get(v_x_1679_, 0);
lean_dec(v_unused_1698_);
v___x_1684_ = v_x_1679_;
v_isShared_1685_ = v_isSharedCheck_1697_;
goto v_resetjp_1683_;
}
else
{
lean_inc(v_tail_1682_);
lean_dec(v_x_1679_);
v___x_1684_ = lean_box(0);
v_isShared_1685_ = v_isSharedCheck_1697_;
goto v_resetjp_1683_;
}
v_resetjp_1683_:
{
lean_object* v_ns_1686_; lean_object* v_except_1687_; lean_object* v___x_1688_; uint8_t v___x_1689_; 
v_ns_1686_ = lean_ctor_get(v_head_1681_, 0);
lean_inc(v_ns_1686_);
v_except_1687_ = lean_ctor_get(v_head_1681_, 1);
lean_inc(v_except_1687_);
lean_dec_ref_known(v_head_1681_, 2);
lean_inc(v_n_1678_);
v___x_1688_ = l_Lean_Name_append(v_ns_1686_, v_n_1678_);
lean_inc_ref(v_env_1677_);
v___x_1689_ = l_Lean_Environment_isNamespace(v_env_1677_, v___x_1688_);
if (v___x_1689_ == 0)
{
lean_dec(v___x_1688_);
lean_dec(v_except_1687_);
lean_del_object(v___x_1684_);
v_x_1679_ = v_tail_1682_;
goto _start;
}
else
{
uint8_t v___x_1691_; 
v___x_1691_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_n_1678_, v_except_1687_);
lean_dec(v_except_1687_);
if (v___x_1691_ == 0)
{
lean_object* v___x_1692_; lean_object* v___x_1694_; 
v___x_1692_ = l_Lean_ResolveName_resolveNamespaceUsingOpenDecls(v_env_1677_, v_n_1678_, v_tail_1682_);
if (v_isShared_1685_ == 0)
{
lean_ctor_set(v___x_1684_, 1, v___x_1692_);
lean_ctor_set(v___x_1684_, 0, v___x_1688_);
v___x_1694_ = v___x_1684_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v___x_1688_);
lean_ctor_set(v_reuseFailAlloc_1695_, 1, v___x_1692_);
v___x_1694_ = v_reuseFailAlloc_1695_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
return v___x_1694_;
}
}
else
{
lean_dec(v___x_1688_);
lean_del_object(v___x_1684_);
v_x_1679_ = v_tail_1682_;
goto _start;
}
}
}
}
else
{
lean_object* v_tail_1699_; 
v_tail_1699_ = lean_ctor_get(v_x_1679_, 1);
lean_inc(v_tail_1699_);
lean_dec_ref_known(v_x_1679_, 2);
v_x_1679_ = v_tail_1699_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespace(lean_object* v_env_1701_, lean_object* v_ns_1702_, lean_object* v_openDecls_1703_, lean_object* v_id_1704_){
_start:
{
lean_object* v___x_1705_; 
lean_inc(v_id_1704_);
lean_inc_ref(v_env_1701_);
v___x_1705_ = l_Lean_ResolveName_resolveNamespaceUsingScope_x3f(v_env_1701_, v_id_1704_, v_ns_1702_);
if (lean_obj_tag(v___x_1705_) == 0)
{
lean_object* v___x_1706_; 
v___x_1706_ = l_Lean_ResolveName_resolveNamespaceUsingOpenDecls(v_env_1701_, v_id_1704_, v_openDecls_1703_);
return v___x_1706_;
}
else
{
lean_object* v_val_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; 
v_val_1707_ = lean_ctor_get(v___x_1705_, 0);
lean_inc(v_val_1707_);
lean_dec_ref_known(v___x_1705_, 1);
v___x_1708_ = l_Lean_ResolveName_resolveNamespaceUsingOpenDecls(v_env_1701_, v_id_1704_, v_openDecls_1703_);
v___x_1709_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1709_, 0, v_val_1707_);
lean_ctor_set(v___x_1709_, 1, v___x_1708_);
return v___x_1709_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadResolveNameOfMonadLift___redArg(lean_object* v_inst_1710_, lean_object* v_inst_1711_){
_start:
{
lean_object* v_getCurrNamespace_1712_; lean_object* v_getOpenDecls_1713_; lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1722_; 
v_getCurrNamespace_1712_ = lean_ctor_get(v_inst_1711_, 0);
v_getOpenDecls_1713_ = lean_ctor_get(v_inst_1711_, 1);
v_isSharedCheck_1722_ = !lean_is_exclusive(v_inst_1711_);
if (v_isSharedCheck_1722_ == 0)
{
v___x_1715_ = v_inst_1711_;
v_isShared_1716_ = v_isSharedCheck_1722_;
goto v_resetjp_1714_;
}
else
{
lean_inc(v_getOpenDecls_1713_);
lean_inc(v_getCurrNamespace_1712_);
lean_dec(v_inst_1711_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1722_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1720_; 
lean_inc(v_inst_1710_);
v___x_1717_ = lean_apply_2(v_inst_1710_, lean_box(0), v_getCurrNamespace_1712_);
v___x_1718_ = lean_apply_2(v_inst_1710_, lean_box(0), v_getOpenDecls_1713_);
if (v_isShared_1716_ == 0)
{
lean_ctor_set(v___x_1715_, 1, v___x_1718_);
lean_ctor_set(v___x_1715_, 0, v___x_1717_);
v___x_1720_ = v___x_1715_;
goto v_reusejp_1719_;
}
else
{
lean_object* v_reuseFailAlloc_1721_; 
v_reuseFailAlloc_1721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1721_, 0, v___x_1717_);
lean_ctor_set(v_reuseFailAlloc_1721_, 1, v___x_1718_);
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
LEAN_EXPORT lean_object* l_Lean_instMonadResolveNameOfMonadLift(lean_object* v_m_1723_, lean_object* v_n_1724_, lean_object* v_inst_1725_, lean_object* v_inst_1726_){
_start:
{
lean_object* v___x_1727_; 
v___x_1727_ = l_Lean_instMonadResolveNameOfMonadLift___redArg(v_inst_1725_, v_inst_1726_);
return v___x_1727_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1729_; lean_object* v___x_1730_; 
v___x_1729_ = ((lean_object*)(l_Lean_checkPrivateInPublic___redArg___lam__0___closed__0));
v___x_1730_ = l_Lean_stringToMessageData(v___x_1729_);
return v___x_1730_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1732_; lean_object* v___x_1733_; 
v___x_1732_ = ((lean_object*)(l_Lean_checkPrivateInPublic___redArg___lam__0___closed__2));
v___x_1733_ = l_Lean_stringToMessageData(v___x_1732_);
return v___x_1733_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0(lean_object* v_____do__lift_1734_, lean_object* v_toPure_1735_, lean_object* v_id_1736_, lean_object* v_inst_1737_, lean_object* v_inst_1738_, lean_object* v_inst_1739_, lean_object* v_inst_1740_, uint8_t v_____do__lift_1741_){
_start:
{
uint8_t v_isExporting_1745_; 
v_isExporting_1745_ = lean_ctor_get_uint8(v_____do__lift_1734_, sizeof(void*)*13);
if (v_isExporting_1745_ == 0)
{
lean_dec_ref(v_inst_1740_);
lean_dec(v_inst_1739_);
lean_dec_ref(v_inst_1738_);
lean_dec_ref(v_inst_1737_);
lean_dec(v_id_1736_);
goto v___jp_1742_;
}
else
{
uint8_t v___x_1746_; 
v___x_1746_ = l_Lean_isPrivateName(v_id_1736_);
if (v___x_1746_ == 0)
{
lean_dec_ref(v_inst_1740_);
lean_dec(v_inst_1739_);
lean_dec_ref(v_inst_1738_);
lean_dec_ref(v_inst_1737_);
lean_dec(v_id_1736_);
goto v___jp_1742_;
}
else
{
if (v_____do__lift_1741_ == 0)
{
lean_dec_ref(v_inst_1740_);
lean_dec(v_inst_1739_);
lean_dec_ref(v_inst_1738_);
lean_dec_ref(v_inst_1737_);
lean_dec(v_id_1736_);
goto v___jp_1742_;
}
else
{
lean_object* v___x_1747_; uint8_t v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; 
lean_dec(v_toPure_1735_);
v___x_1747_ = lean_obj_once(&l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1, &l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1_once, _init_l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1);
v___x_1748_ = 0;
v___x_1749_ = l_Lean_MessageData_ofConstName(v_id_1736_, v___x_1748_);
v___x_1750_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1750_, 0, v___x_1747_);
lean_ctor_set(v___x_1750_, 1, v___x_1749_);
v___x_1751_ = lean_obj_once(&l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3, &l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3_once, _init_l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3);
v___x_1752_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1752_, 0, v___x_1750_);
lean_ctor_set(v___x_1752_, 1, v___x_1751_);
v___x_1753_ = l_Lean_logWarning___redArg(v_inst_1737_, v_inst_1738_, v_inst_1739_, v_inst_1740_, v___x_1752_);
return v___x_1753_;
}
}
}
v___jp_1742_:
{
lean_object* v___x_1743_; lean_object* v___x_1744_; 
v___x_1743_ = lean_box(0);
v___x_1744_ = lean_apply_2(v_toPure_1735_, lean_box(0), v___x_1743_);
return v___x_1744_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0___boxed(lean_object* v_____do__lift_1754_, lean_object* v_toPure_1755_, lean_object* v_id_1756_, lean_object* v_inst_1757_, lean_object* v_inst_1758_, lean_object* v_inst_1759_, lean_object* v_inst_1760_, lean_object* v_____do__lift_1761_){
_start:
{
uint8_t v_____do__lift_199__boxed_1762_; lean_object* v_res_1763_; 
v_____do__lift_199__boxed_1762_ = lean_unbox(v_____do__lift_1761_);
v_res_1763_ = l_Lean_checkPrivateInPublic___redArg___lam__0(v_____do__lift_1754_, v_toPure_1755_, v_id_1756_, v_inst_1757_, v_inst_1758_, v_inst_1759_, v_inst_1760_, v_____do__lift_199__boxed_1762_);
lean_dec_ref(v_____do__lift_1754_);
return v_res_1763_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__1(lean_object* v_toPure_1764_, lean_object* v_id_1765_, lean_object* v_inst_1766_, lean_object* v_inst_1767_, lean_object* v_inst_1768_, lean_object* v_inst_1769_, lean_object* v___x_1770_, lean_object* v_toBind_1771_, lean_object* v_____do__lift_1772_){
_start:
{
lean_object* v___f_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; 
lean_inc_ref(v_inst_1769_);
lean_inc_ref(v_inst_1766_);
v___f_1773_ = lean_alloc_closure((void*)(l_Lean_checkPrivateInPublic___redArg___lam__0___boxed), 8, 7);
lean_closure_set(v___f_1773_, 0, v_____do__lift_1772_);
lean_closure_set(v___f_1773_, 1, v_toPure_1764_);
lean_closure_set(v___f_1773_, 2, v_id_1765_);
lean_closure_set(v___f_1773_, 3, v_inst_1766_);
lean_closure_set(v___f_1773_, 4, v_inst_1767_);
lean_closure_set(v___f_1773_, 5, v_inst_1768_);
lean_closure_set(v___f_1773_, 6, v_inst_1769_);
v___x_1774_ = l_Lean_ResolveName_backward_privateInPublic_warn;
v___x_1775_ = l_Lean_Option_getM___redArg(v_inst_1766_, v_inst_1769_, v___x_1770_, v___x_1774_);
v___x_1776_ = lean_apply_4(v_toBind_1771_, lean_box(0), lean_box(0), v___x_1775_, v___f_1773_);
return v___x_1776_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg(lean_object* v_inst_1777_, lean_object* v_inst_1778_, lean_object* v_inst_1779_, lean_object* v_inst_1780_, lean_object* v_inst_1781_, lean_object* v_id_1782_){
_start:
{
lean_object* v___x_1783_; lean_object* v_toApplicative_1784_; lean_object* v_toBind_1785_; lean_object* v_getEnv_1786_; lean_object* v_toPure_1787_; lean_object* v___f_1788_; lean_object* v___x_1789_; 
v___x_1783_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1784_ = lean_ctor_get(v_inst_1777_, 0);
v_toBind_1785_ = lean_ctor_get(v_inst_1777_, 1);
lean_inc_n(v_toBind_1785_, 2);
v_getEnv_1786_ = lean_ctor_get(v_inst_1778_, 0);
lean_inc(v_getEnv_1786_);
lean_dec_ref(v_inst_1778_);
v_toPure_1787_ = lean_ctor_get(v_toApplicative_1784_, 1);
lean_inc(v_toPure_1787_);
v___f_1788_ = lean_alloc_closure((void*)(l_Lean_checkPrivateInPublic___redArg___lam__1), 9, 8);
lean_closure_set(v___f_1788_, 0, v_toPure_1787_);
lean_closure_set(v___f_1788_, 1, v_id_1782_);
lean_closure_set(v___f_1788_, 2, v_inst_1777_);
lean_closure_set(v___f_1788_, 3, v_inst_1780_);
lean_closure_set(v___f_1788_, 4, v_inst_1781_);
lean_closure_set(v___f_1788_, 5, v_inst_1779_);
lean_closure_set(v___f_1788_, 6, v___x_1783_);
lean_closure_set(v___f_1788_, 7, v_toBind_1785_);
v___x_1789_ = lean_apply_4(v_toBind_1785_, lean_box(0), lean_box(0), v_getEnv_1786_, v___f_1788_);
return v___x_1789_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic(lean_object* v_m_1790_, lean_object* v_inst_1791_, lean_object* v_inst_1792_, lean_object* v_inst_1793_, lean_object* v_inst_1794_, lean_object* v_inst_1795_, lean_object* v_id_1796_){
_start:
{
lean_object* v___x_1797_; 
v___x_1797_ = l_Lean_checkPrivateInPublic___redArg(v_inst_1791_, v_inst_1792_, v_inst_1793_, v_inst_1794_, v_inst_1795_, v_id_1796_);
return v___x_1797_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__0(lean_object* v_env_1798_, lean_object* v_n_1799_, lean_object* v_toPure_1800_, uint8_t v___y_1801_, uint8_t v___x_1802_, lean_object* v_____r_1803_){
_start:
{
lean_object* v___x_1804_; 
v___x_1804_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1798_, v_n_1799_);
if (lean_obj_tag(v___x_1804_) == 0)
{
lean_object* v___x_1805_; lean_object* v___x_1806_; 
v___x_1805_ = lean_box(v___y_1801_);
v___x_1806_ = lean_apply_2(v_toPure_1800_, lean_box(0), v___x_1805_);
return v___x_1806_;
}
else
{
lean_object* v_val_1807_; lean_object* v___x_1808_; uint8_t v_isModule_1809_; 
v_val_1807_ = lean_ctor_get(v___x_1804_, 0);
lean_inc(v_val_1807_);
lean_dec_ref_known(v___x_1804_, 1);
v___x_1808_ = l_Lean_Environment_header(v_env_1798_);
v_isModule_1809_ = lean_ctor_get_uint8(v___x_1808_, sizeof(void*)*8 + 4);
if (v_isModule_1809_ == 0)
{
lean_object* v___x_1810_; lean_object* v___x_1811_; 
lean_dec_ref(v___x_1808_);
lean_dec(v_val_1807_);
v___x_1810_ = lean_box(v___x_1802_);
v___x_1811_ = lean_apply_2(v_toPure_1800_, lean_box(0), v___x_1810_);
return v___x_1811_;
}
else
{
lean_object* v_modules_1812_; lean_object* v___x_1813_; uint8_t v___x_1814_; 
v_modules_1812_ = lean_ctor_get(v___x_1808_, 3);
lean_inc_ref(v_modules_1812_);
lean_dec_ref(v___x_1808_);
v___x_1813_ = lean_array_get_size(v_modules_1812_);
v___x_1814_ = lean_nat_dec_lt(v_val_1807_, v___x_1813_);
if (v___x_1814_ == 0)
{
lean_object* v___x_1815_; lean_object* v___x_1816_; 
lean_dec_ref(v_modules_1812_);
lean_dec(v_val_1807_);
v___x_1815_ = lean_box(v_isModule_1809_);
v___x_1816_ = lean_apply_2(v_toPure_1800_, lean_box(0), v___x_1815_);
return v___x_1816_;
}
else
{
lean_object* v___x_1817_; lean_object* v_toImport_1818_; uint8_t v_importAll_1819_; 
v___x_1817_ = lean_array_fget(v_modules_1812_, v_val_1807_);
lean_dec(v_val_1807_);
lean_dec_ref(v_modules_1812_);
v_toImport_1818_ = lean_ctor_get(v___x_1817_, 0);
lean_inc_ref(v_toImport_1818_);
lean_dec(v___x_1817_);
v_importAll_1819_ = lean_ctor_get_uint8(v_toImport_1818_, sizeof(void*)*1);
lean_dec_ref(v_toImport_1818_);
if (v_importAll_1819_ == 0)
{
lean_object* v___x_1820_; lean_object* v___x_1821_; 
v___x_1820_ = lean_box(v_isModule_1809_);
v___x_1821_ = lean_apply_2(v_toPure_1800_, lean_box(0), v___x_1820_);
return v___x_1821_;
}
else
{
lean_object* v___x_1822_; lean_object* v___x_1823_; 
v___x_1822_ = lean_box(v___y_1801_);
v___x_1823_ = lean_apply_2(v_toPure_1800_, lean_box(0), v___x_1822_);
return v___x_1823_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__0___boxed(lean_object* v_env_1824_, lean_object* v_n_1825_, lean_object* v_toPure_1826_, lean_object* v___y_1827_, lean_object* v___x_1828_, lean_object* v_____r_1829_){
_start:
{
uint8_t v___y_386__boxed_1830_; uint8_t v___x_387__boxed_1831_; lean_object* v_res_1832_; 
v___y_386__boxed_1830_ = lean_unbox(v___y_1827_);
v___x_387__boxed_1831_ = lean_unbox(v___x_1828_);
v_res_1832_ = l_Lean_isInaccessiblePrivateName___redArg___lam__0(v_env_1824_, v_n_1825_, v_toPure_1826_, v___y_386__boxed_1830_, v___x_387__boxed_1831_, v_____r_1829_);
lean_dec(v_n_1825_);
lean_dec_ref(v_env_1824_);
return v_res_1832_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__1(lean_object* v_env_1833_, lean_object* v_n_1834_, lean_object* v_toPure_1835_, uint8_t v___x_1836_, lean_object* v_inst_1837_, lean_object* v_inst_1838_, lean_object* v_inst_1839_, lean_object* v_inst_1840_, lean_object* v_inst_1841_, lean_object* v_toBind_1842_, uint8_t v___y_1843_, uint8_t v_____do__lift_1844_){
_start:
{
uint8_t v___y_1846_; uint8_t v_isExporting_1852_; 
v_isExporting_1852_ = lean_ctor_get_uint8(v_env_1833_, sizeof(void*)*13);
if (v_isExporting_1852_ == 0)
{
v___y_1846_ = v___y_1843_;
goto v___jp_1845_;
}
else
{
if (v_____do__lift_1844_ == 0)
{
lean_object* v___x_1853_; lean_object* v___x_1854_; 
lean_dec(v_toBind_1842_);
lean_dec(v_inst_1841_);
lean_dec_ref(v_inst_1840_);
lean_dec_ref(v_inst_1839_);
lean_dec_ref(v_inst_1838_);
lean_dec_ref(v_inst_1837_);
lean_dec(v_n_1834_);
lean_dec_ref(v_env_1833_);
v___x_1853_ = lean_box(v___x_1836_);
v___x_1854_ = lean_apply_2(v_toPure_1835_, lean_box(0), v___x_1853_);
return v___x_1854_;
}
else
{
v___y_1846_ = v___y_1843_;
goto v___jp_1845_;
}
}
v___jp_1845_:
{
lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___f_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; 
v___x_1847_ = lean_box(v___y_1846_);
v___x_1848_ = lean_box(v___x_1836_);
lean_inc(v_n_1834_);
v___f_1849_ = lean_alloc_closure((void*)(l_Lean_isInaccessiblePrivateName___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1849_, 0, v_env_1833_);
lean_closure_set(v___f_1849_, 1, v_n_1834_);
lean_closure_set(v___f_1849_, 2, v_toPure_1835_);
lean_closure_set(v___f_1849_, 3, v___x_1847_);
lean_closure_set(v___f_1849_, 4, v___x_1848_);
v___x_1850_ = l_Lean_checkPrivateInPublic___redArg(v_inst_1837_, v_inst_1838_, v_inst_1839_, v_inst_1840_, v_inst_1841_, v_n_1834_);
v___x_1851_ = lean_apply_4(v_toBind_1842_, lean_box(0), lean_box(0), v___x_1850_, v___f_1849_);
return v___x_1851_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__1___boxed(lean_object* v_env_1855_, lean_object* v_n_1856_, lean_object* v_toPure_1857_, lean_object* v___x_1858_, lean_object* v_inst_1859_, lean_object* v_inst_1860_, lean_object* v_inst_1861_, lean_object* v_inst_1862_, lean_object* v_inst_1863_, lean_object* v_toBind_1864_, lean_object* v___y_1865_, lean_object* v_____do__lift_1866_){
_start:
{
uint8_t v___x_427__boxed_1867_; uint8_t v___y_433__boxed_1868_; uint8_t v_____do__lift_434__boxed_1869_; lean_object* v_res_1870_; 
v___x_427__boxed_1867_ = lean_unbox(v___x_1858_);
v___y_433__boxed_1868_ = lean_unbox(v___y_1865_);
v_____do__lift_434__boxed_1869_ = lean_unbox(v_____do__lift_1866_);
v_res_1870_ = l_Lean_isInaccessiblePrivateName___redArg___lam__1(v_env_1855_, v_n_1856_, v_toPure_1857_, v___x_427__boxed_1867_, v_inst_1859_, v_inst_1860_, v_inst_1861_, v_inst_1862_, v_inst_1863_, v_toBind_1864_, v___y_433__boxed_1868_, v_____do__lift_434__boxed_1869_);
return v_res_1870_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__2(lean_object* v_n_1871_, lean_object* v_toPure_1872_, uint8_t v___x_1873_, lean_object* v_inst_1874_, lean_object* v_inst_1875_, lean_object* v_inst_1876_, lean_object* v_inst_1877_, lean_object* v_inst_1878_, lean_object* v_toBind_1879_, uint8_t v___y_1880_, lean_object* v___x_1881_, lean_object* v_env_1882_){
_start:
{
lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___f_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; 
v___x_1883_ = lean_box(v___x_1873_);
v___x_1884_ = lean_box(v___y_1880_);
lean_inc(v_toBind_1879_);
lean_inc_ref(v_inst_1876_);
lean_inc_ref(v_inst_1874_);
v___f_1885_ = lean_alloc_closure((void*)(l_Lean_isInaccessiblePrivateName___redArg___lam__1___boxed), 12, 11);
lean_closure_set(v___f_1885_, 0, v_env_1882_);
lean_closure_set(v___f_1885_, 1, v_n_1871_);
lean_closure_set(v___f_1885_, 2, v_toPure_1872_);
lean_closure_set(v___f_1885_, 3, v___x_1883_);
lean_closure_set(v___f_1885_, 4, v_inst_1874_);
lean_closure_set(v___f_1885_, 5, v_inst_1875_);
lean_closure_set(v___f_1885_, 6, v_inst_1876_);
lean_closure_set(v___f_1885_, 7, v_inst_1877_);
lean_closure_set(v___f_1885_, 8, v_inst_1878_);
lean_closure_set(v___f_1885_, 9, v_toBind_1879_);
lean_closure_set(v___f_1885_, 10, v___x_1884_);
v___x_1886_ = l_Lean_ResolveName_backward_privateInPublic;
v___x_1887_ = l_Lean_Option_getM___redArg(v_inst_1874_, v_inst_1876_, v___x_1881_, v___x_1886_);
v___x_1888_ = lean_apply_4(v_toBind_1879_, lean_box(0), lean_box(0), v___x_1887_, v___f_1885_);
return v___x_1888_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__2___boxed(lean_object* v_n_1889_, lean_object* v_toPure_1890_, lean_object* v___x_1891_, lean_object* v_inst_1892_, lean_object* v_inst_1893_, lean_object* v_inst_1894_, lean_object* v_inst_1895_, lean_object* v_inst_1896_, lean_object* v_toBind_1897_, lean_object* v___y_1898_, lean_object* v___x_1899_, lean_object* v_env_1900_){
_start:
{
uint8_t v___x_469__boxed_1901_; uint8_t v___y_475__boxed_1902_; lean_object* v_res_1903_; 
v___x_469__boxed_1901_ = lean_unbox(v___x_1891_);
v___y_475__boxed_1902_ = lean_unbox(v___y_1898_);
v_res_1903_ = l_Lean_isInaccessiblePrivateName___redArg___lam__2(v_n_1889_, v_toPure_1890_, v___x_469__boxed_1901_, v_inst_1892_, v_inst_1893_, v_inst_1894_, v_inst_1895_, v_inst_1896_, v_toBind_1897_, v___y_475__boxed_1902_, v___x_1899_, v_env_1900_);
return v_res_1903_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg(lean_object* v_inst_1904_, lean_object* v_inst_1905_, lean_object* v_inst_1906_, lean_object* v_inst_1907_, lean_object* v_inst_1908_, lean_object* v_n_1909_){
_start:
{
lean_object* v___x_1910_; uint8_t v___y_1912_; uint8_t v___x_1927_; 
v___x_1910_ = l_Lean_KVMap_instValueBool;
v___x_1927_ = l_Lean_isPrivateName(v_n_1909_);
if (v___x_1927_ == 0)
{
uint8_t v___x_1928_; 
v___x_1928_ = 1;
v___y_1912_ = v___x_1928_;
goto v___jp_1911_;
}
else
{
uint8_t v___x_1929_; 
v___x_1929_ = 0;
v___y_1912_ = v___x_1929_;
goto v___jp_1911_;
}
v___jp_1911_:
{
if (v___y_1912_ == 0)
{
lean_object* v_toApplicative_1913_; lean_object* v_toBind_1914_; lean_object* v_toPure_1915_; lean_object* v_getEnv_1916_; uint8_t v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___f_1920_; lean_object* v___x_1921_; 
v_toApplicative_1913_ = lean_ctor_get(v_inst_1906_, 0);
v_toBind_1914_ = lean_ctor_get(v_inst_1906_, 1);
lean_inc_n(v_toBind_1914_, 2);
v_toPure_1915_ = lean_ctor_get(v_toApplicative_1913_, 1);
lean_inc(v_toPure_1915_);
v_getEnv_1916_ = lean_ctor_get(v_inst_1907_, 0);
lean_inc(v_getEnv_1916_);
v___x_1917_ = 1;
v___x_1918_ = lean_box(v___x_1917_);
v___x_1919_ = lean_box(v___y_1912_);
v___f_1920_ = lean_alloc_closure((void*)(l_Lean_isInaccessiblePrivateName___redArg___lam__2___boxed), 12, 11);
lean_closure_set(v___f_1920_, 0, v_n_1909_);
lean_closure_set(v___f_1920_, 1, v_toPure_1915_);
lean_closure_set(v___f_1920_, 2, v___x_1918_);
lean_closure_set(v___f_1920_, 3, v_inst_1906_);
lean_closure_set(v___f_1920_, 4, v_inst_1907_);
lean_closure_set(v___f_1920_, 5, v_inst_1908_);
lean_closure_set(v___f_1920_, 6, v_inst_1904_);
lean_closure_set(v___f_1920_, 7, v_inst_1905_);
lean_closure_set(v___f_1920_, 8, v_toBind_1914_);
lean_closure_set(v___f_1920_, 9, v___x_1919_);
lean_closure_set(v___f_1920_, 10, v___x_1910_);
v___x_1921_ = lean_apply_4(v_toBind_1914_, lean_box(0), lean_box(0), v_getEnv_1916_, v___f_1920_);
return v___x_1921_;
}
else
{
lean_object* v_toApplicative_1922_; lean_object* v_toPure_1923_; uint8_t v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; 
v_toApplicative_1922_ = lean_ctor_get(v_inst_1906_, 0);
lean_inc_ref(v_toApplicative_1922_);
lean_dec(v_n_1909_);
lean_dec_ref(v_inst_1908_);
lean_dec_ref(v_inst_1907_);
lean_dec_ref(v_inst_1906_);
lean_dec(v_inst_1905_);
lean_dec_ref(v_inst_1904_);
v_toPure_1923_ = lean_ctor_get(v_toApplicative_1922_, 1);
lean_inc(v_toPure_1923_);
lean_dec_ref(v_toApplicative_1922_);
v___x_1924_ = 0;
v___x_1925_ = lean_box(v___x_1924_);
v___x_1926_ = lean_apply_2(v_toPure_1923_, lean_box(0), v___x_1925_);
return v___x_1926_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName(lean_object* v_m_1930_, lean_object* v_inst_1931_, lean_object* v_inst_1932_, lean_object* v_inst_1933_, lean_object* v_inst_1934_, lean_object* v_inst_1935_, lean_object* v_n_1936_){
_start:
{
lean_object* v___x_1937_; 
v___x_1937_ = l_Lean_isInaccessiblePrivateName___redArg(v_inst_1931_, v_inst_1932_, v_inst_1933_, v_inst_1934_, v_inst_1935_, v_n_1936_);
return v___x_1937_;
}
}
LEAN_EXPORT uint8_t l_Lean_resolveGlobalName___redArg___lam__0(lean_object* v_x_1938_){
_start:
{
lean_object* v_fst_1939_; uint8_t v___x_1940_; 
v_fst_1939_ = lean_ctor_get(v_x_1938_, 0);
v___x_1940_ = l_Lean_isPrivateName(v_fst_1939_);
return v___x_1940_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__0___boxed(lean_object* v_x_1941_){
_start:
{
uint8_t v_res_1942_; lean_object* v_r_1943_; 
v_res_1942_ = l_Lean_resolveGlobalName___redArg___lam__0(v_x_1941_);
lean_dec_ref(v_x_1941_);
v_r_1943_ = lean_box(v_res_1942_);
return v_r_1943_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__1(lean_object* v_toPure_1944_, lean_object* v_res_1945_, lean_object* v_____r_1946_){
_start:
{
lean_object* v___x_1947_; 
v___x_1947_ = lean_apply_2(v_toPure_1944_, lean_box(0), v_res_1945_);
return v___x_1947_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__2(uint8_t v_enableLog_1948_, lean_object* v_toPure_1949_, lean_object* v_res_1950_, lean_object* v___f_1951_, lean_object* v_inst_1952_, lean_object* v_inst_1953_, lean_object* v_inst_1954_, lean_object* v_inst_1955_, lean_object* v_inst_1956_, lean_object* v_toBind_1957_, lean_object* v___f_1958_, lean_object* v_____do__lift_1959_){
_start:
{
if (v_enableLog_1948_ == 0)
{
lean_object* v___x_1960_; 
lean_dec(v___f_1958_);
lean_dec(v_toBind_1957_);
lean_dec(v_inst_1956_);
lean_dec_ref(v_inst_1955_);
lean_dec_ref(v_inst_1954_);
lean_dec_ref(v_inst_1953_);
lean_dec_ref(v_inst_1952_);
lean_dec_ref(v___f_1951_);
v___x_1960_ = lean_apply_2(v_toPure_1949_, lean_box(0), v_res_1950_);
return v___x_1960_;
}
else
{
uint8_t v_isExporting_1961_; 
v_isExporting_1961_ = lean_ctor_get_uint8(v_____do__lift_1959_, sizeof(void*)*13);
if (v_isExporting_1961_ == 0)
{
lean_object* v___x_1962_; 
lean_dec(v___f_1958_);
lean_dec(v_toBind_1957_);
lean_dec(v_inst_1956_);
lean_dec_ref(v_inst_1955_);
lean_dec_ref(v_inst_1954_);
lean_dec_ref(v_inst_1953_);
lean_dec_ref(v_inst_1952_);
lean_dec_ref(v___f_1951_);
v___x_1962_ = lean_apply_2(v_toPure_1949_, lean_box(0), v_res_1950_);
return v___x_1962_;
}
else
{
lean_object* v___x_1963_; 
lean_inc(v_res_1950_);
v___x_1963_ = l_List_find_x3f___redArg(v___f_1951_, v_res_1950_);
if (lean_obj_tag(v___x_1963_) == 1)
{
lean_object* v_val_1964_; lean_object* v_fst_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; 
lean_dec(v_res_1950_);
lean_dec(v_toPure_1949_);
v_val_1964_ = lean_ctor_get(v___x_1963_, 0);
lean_inc(v_val_1964_);
lean_dec_ref_known(v___x_1963_, 1);
v_fst_1965_ = lean_ctor_get(v_val_1964_, 0);
lean_inc(v_fst_1965_);
lean_dec(v_val_1964_);
v___x_1966_ = l_Lean_checkPrivateInPublic___redArg(v_inst_1952_, v_inst_1953_, v_inst_1954_, v_inst_1955_, v_inst_1956_, v_fst_1965_);
v___x_1967_ = lean_apply_4(v_toBind_1957_, lean_box(0), lean_box(0), v___x_1966_, v___f_1958_);
return v___x_1967_;
}
else
{
lean_object* v___x_1968_; 
lean_dec(v___x_1963_);
lean_dec(v___f_1958_);
lean_dec(v_toBind_1957_);
lean_dec(v_inst_1956_);
lean_dec_ref(v_inst_1955_);
lean_dec_ref(v_inst_1954_);
lean_dec_ref(v_inst_1953_);
lean_dec_ref(v_inst_1952_);
v___x_1968_ = lean_apply_2(v_toPure_1949_, lean_box(0), v_res_1950_);
return v___x_1968_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__2___boxed(lean_object* v_enableLog_1969_, lean_object* v_toPure_1970_, lean_object* v_res_1971_, lean_object* v___f_1972_, lean_object* v_inst_1973_, lean_object* v_inst_1974_, lean_object* v_inst_1975_, lean_object* v_inst_1976_, lean_object* v_inst_1977_, lean_object* v_toBind_1978_, lean_object* v___f_1979_, lean_object* v_____do__lift_1980_){
_start:
{
uint8_t v_enableLog_boxed_1981_; lean_object* v_res_1982_; 
v_enableLog_boxed_1981_ = lean_unbox(v_enableLog_1969_);
v_res_1982_ = l_Lean_resolveGlobalName___redArg___lam__2(v_enableLog_boxed_1981_, v_toPure_1970_, v_res_1971_, v___f_1972_, v_inst_1973_, v_inst_1974_, v_inst_1975_, v_inst_1976_, v_inst_1977_, v_toBind_1978_, v___f_1979_, v_____do__lift_1980_);
lean_dec_ref(v_____do__lift_1980_);
return v_res_1982_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__3(lean_object* v_____do__lift_1983_, lean_object* v_____do__lift_1984_, lean_object* v_____do__lift_1985_, lean_object* v_id_1986_, lean_object* v_toPure_1987_, uint8_t v_enableLog_1988_, lean_object* v___f_1989_, lean_object* v_inst_1990_, lean_object* v_inst_1991_, lean_object* v_inst_1992_, lean_object* v_inst_1993_, lean_object* v_inst_1994_, lean_object* v_toBind_1995_, lean_object* v_getEnv_1996_, lean_object* v_____do__lift_1997_){
_start:
{
lean_object* v_res_1998_; lean_object* v___f_1999_; lean_object* v___x_2000_; lean_object* v___f_2001_; lean_object* v___x_2002_; 
v_res_1998_ = l_Lean_ResolveName_resolveGlobalName(v_____do__lift_1983_, v_____do__lift_1984_, v_____do__lift_1985_, v_____do__lift_1997_, v_id_1986_);
lean_inc(v_res_1998_);
lean_inc(v_toPure_1987_);
v___f_1999_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1999_, 0, v_toPure_1987_);
lean_closure_set(v___f_1999_, 1, v_res_1998_);
v___x_2000_ = lean_box(v_enableLog_1988_);
lean_inc(v_toBind_1995_);
v___f_2001_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__2___boxed), 12, 11);
lean_closure_set(v___f_2001_, 0, v___x_2000_);
lean_closure_set(v___f_2001_, 1, v_toPure_1987_);
lean_closure_set(v___f_2001_, 2, v_res_1998_);
lean_closure_set(v___f_2001_, 3, v___f_1989_);
lean_closure_set(v___f_2001_, 4, v_inst_1990_);
lean_closure_set(v___f_2001_, 5, v_inst_1991_);
lean_closure_set(v___f_2001_, 6, v_inst_1992_);
lean_closure_set(v___f_2001_, 7, v_inst_1993_);
lean_closure_set(v___f_2001_, 8, v_inst_1994_);
lean_closure_set(v___f_2001_, 9, v_toBind_1995_);
lean_closure_set(v___f_2001_, 10, v___f_1999_);
v___x_2002_ = lean_apply_4(v_toBind_1995_, lean_box(0), lean_box(0), v_getEnv_1996_, v___f_2001_);
return v___x_2002_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__3___boxed(lean_object* v_____do__lift_2003_, lean_object* v_____do__lift_2004_, lean_object* v_____do__lift_2005_, lean_object* v_id_2006_, lean_object* v_toPure_2007_, lean_object* v_enableLog_2008_, lean_object* v___f_2009_, lean_object* v_inst_2010_, lean_object* v_inst_2011_, lean_object* v_inst_2012_, lean_object* v_inst_2013_, lean_object* v_inst_2014_, lean_object* v_toBind_2015_, lean_object* v_getEnv_2016_, lean_object* v_____do__lift_2017_){
_start:
{
uint8_t v_enableLog_boxed_2018_; lean_object* v_res_2019_; 
v_enableLog_boxed_2018_ = lean_unbox(v_enableLog_2008_);
v_res_2019_ = l_Lean_resolveGlobalName___redArg___lam__3(v_____do__lift_2003_, v_____do__lift_2004_, v_____do__lift_2005_, v_id_2006_, v_toPure_2007_, v_enableLog_boxed_2018_, v___f_2009_, v_inst_2010_, v_inst_2011_, v_inst_2012_, v_inst_2013_, v_inst_2014_, v_toBind_2015_, v_getEnv_2016_, v_____do__lift_2017_);
lean_dec_ref(v_____do__lift_2004_);
return v_res_2019_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__4(lean_object* v_____do__lift_2020_, lean_object* v_____do__lift_2021_, lean_object* v_id_2022_, lean_object* v_toPure_2023_, uint8_t v_enableLog_2024_, lean_object* v___f_2025_, lean_object* v_inst_2026_, lean_object* v_inst_2027_, lean_object* v_inst_2028_, lean_object* v_inst_2029_, lean_object* v_inst_2030_, lean_object* v_toBind_2031_, lean_object* v_getEnv_2032_, lean_object* v_getOpenDecls_2033_, lean_object* v_____do__lift_2034_){
_start:
{
lean_object* v___x_2035_; lean_object* v___f_2036_; lean_object* v___x_2037_; 
v___x_2035_ = lean_box(v_enableLog_2024_);
lean_inc(v_toBind_2031_);
v___f_2036_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__3___boxed), 15, 14);
lean_closure_set(v___f_2036_, 0, v_____do__lift_2020_);
lean_closure_set(v___f_2036_, 1, v_____do__lift_2021_);
lean_closure_set(v___f_2036_, 2, v_____do__lift_2034_);
lean_closure_set(v___f_2036_, 3, v_id_2022_);
lean_closure_set(v___f_2036_, 4, v_toPure_2023_);
lean_closure_set(v___f_2036_, 5, v___x_2035_);
lean_closure_set(v___f_2036_, 6, v___f_2025_);
lean_closure_set(v___f_2036_, 7, v_inst_2026_);
lean_closure_set(v___f_2036_, 8, v_inst_2027_);
lean_closure_set(v___f_2036_, 9, v_inst_2028_);
lean_closure_set(v___f_2036_, 10, v_inst_2029_);
lean_closure_set(v___f_2036_, 11, v_inst_2030_);
lean_closure_set(v___f_2036_, 12, v_toBind_2031_);
lean_closure_set(v___f_2036_, 13, v_getEnv_2032_);
v___x_2037_ = lean_apply_4(v_toBind_2031_, lean_box(0), lean_box(0), v_getOpenDecls_2033_, v___f_2036_);
return v___x_2037_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__4___boxed(lean_object* v_____do__lift_2038_, lean_object* v_____do__lift_2039_, lean_object* v_id_2040_, lean_object* v_toPure_2041_, lean_object* v_enableLog_2042_, lean_object* v___f_2043_, lean_object* v_inst_2044_, lean_object* v_inst_2045_, lean_object* v_inst_2046_, lean_object* v_inst_2047_, lean_object* v_inst_2048_, lean_object* v_toBind_2049_, lean_object* v_getEnv_2050_, lean_object* v_getOpenDecls_2051_, lean_object* v_____do__lift_2052_){
_start:
{
uint8_t v_enableLog_boxed_2053_; lean_object* v_res_2054_; 
v_enableLog_boxed_2053_ = lean_unbox(v_enableLog_2042_);
v_res_2054_ = l_Lean_resolveGlobalName___redArg___lam__4(v_____do__lift_2038_, v_____do__lift_2039_, v_id_2040_, v_toPure_2041_, v_enableLog_boxed_2053_, v___f_2043_, v_inst_2044_, v_inst_2045_, v_inst_2046_, v_inst_2047_, v_inst_2048_, v_toBind_2049_, v_getEnv_2050_, v_getOpenDecls_2051_, v_____do__lift_2052_);
return v_res_2054_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__5(lean_object* v_inst_2055_, lean_object* v_____do__lift_2056_, lean_object* v_id_2057_, lean_object* v_toPure_2058_, uint8_t v_enableLog_2059_, lean_object* v___f_2060_, lean_object* v_inst_2061_, lean_object* v_inst_2062_, lean_object* v_inst_2063_, lean_object* v_inst_2064_, lean_object* v_inst_2065_, lean_object* v_toBind_2066_, lean_object* v_getEnv_2067_, lean_object* v_____do__lift_2068_){
_start:
{
lean_object* v_getCurrNamespace_2069_; lean_object* v_getOpenDecls_2070_; lean_object* v___x_2071_; lean_object* v___f_2072_; lean_object* v___x_2073_; 
v_getCurrNamespace_2069_ = lean_ctor_get(v_inst_2055_, 0);
lean_inc(v_getCurrNamespace_2069_);
v_getOpenDecls_2070_ = lean_ctor_get(v_inst_2055_, 1);
lean_inc(v_getOpenDecls_2070_);
lean_dec_ref(v_inst_2055_);
v___x_2071_ = lean_box(v_enableLog_2059_);
lean_inc(v_toBind_2066_);
v___f_2072_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__4___boxed), 15, 14);
lean_closure_set(v___f_2072_, 0, v_____do__lift_2056_);
lean_closure_set(v___f_2072_, 1, v_____do__lift_2068_);
lean_closure_set(v___f_2072_, 2, v_id_2057_);
lean_closure_set(v___f_2072_, 3, v_toPure_2058_);
lean_closure_set(v___f_2072_, 4, v___x_2071_);
lean_closure_set(v___f_2072_, 5, v___f_2060_);
lean_closure_set(v___f_2072_, 6, v_inst_2061_);
lean_closure_set(v___f_2072_, 7, v_inst_2062_);
lean_closure_set(v___f_2072_, 8, v_inst_2063_);
lean_closure_set(v___f_2072_, 9, v_inst_2064_);
lean_closure_set(v___f_2072_, 10, v_inst_2065_);
lean_closure_set(v___f_2072_, 11, v_toBind_2066_);
lean_closure_set(v___f_2072_, 12, v_getEnv_2067_);
lean_closure_set(v___f_2072_, 13, v_getOpenDecls_2070_);
v___x_2073_ = lean_apply_4(v_toBind_2066_, lean_box(0), lean_box(0), v_getCurrNamespace_2069_, v___f_2072_);
return v___x_2073_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__5___boxed(lean_object* v_inst_2074_, lean_object* v_____do__lift_2075_, lean_object* v_id_2076_, lean_object* v_toPure_2077_, lean_object* v_enableLog_2078_, lean_object* v___f_2079_, lean_object* v_inst_2080_, lean_object* v_inst_2081_, lean_object* v_inst_2082_, lean_object* v_inst_2083_, lean_object* v_inst_2084_, lean_object* v_toBind_2085_, lean_object* v_getEnv_2086_, lean_object* v_____do__lift_2087_){
_start:
{
uint8_t v_enableLog_boxed_2088_; lean_object* v_res_2089_; 
v_enableLog_boxed_2088_ = lean_unbox(v_enableLog_2078_);
v_res_2089_ = l_Lean_resolveGlobalName___redArg___lam__5(v_inst_2074_, v_____do__lift_2075_, v_id_2076_, v_toPure_2077_, v_enableLog_boxed_2088_, v___f_2079_, v_inst_2080_, v_inst_2081_, v_inst_2082_, v_inst_2083_, v_inst_2084_, v_toBind_2085_, v_getEnv_2086_, v_____do__lift_2087_);
return v_res_2089_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__6(lean_object* v_inst_2090_, lean_object* v_inst_2091_, lean_object* v_id_2092_, lean_object* v_toPure_2093_, uint8_t v_enableLog_2094_, lean_object* v___f_2095_, lean_object* v_inst_2096_, lean_object* v_inst_2097_, lean_object* v_inst_2098_, lean_object* v_inst_2099_, lean_object* v_toBind_2100_, lean_object* v_getEnv_2101_, lean_object* v_____do__lift_2102_){
_start:
{
lean_object* v_getOptions_2103_; lean_object* v___x_2104_; lean_object* v___f_2105_; lean_object* v___x_2106_; 
v_getOptions_2103_ = lean_ctor_get(v_inst_2090_, 0);
lean_inc(v_getOptions_2103_);
v___x_2104_ = lean_box(v_enableLog_2094_);
lean_inc(v_toBind_2100_);
v___f_2105_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__5___boxed), 14, 13);
lean_closure_set(v___f_2105_, 0, v_inst_2091_);
lean_closure_set(v___f_2105_, 1, v_____do__lift_2102_);
lean_closure_set(v___f_2105_, 2, v_id_2092_);
lean_closure_set(v___f_2105_, 3, v_toPure_2093_);
lean_closure_set(v___f_2105_, 4, v___x_2104_);
lean_closure_set(v___f_2105_, 5, v___f_2095_);
lean_closure_set(v___f_2105_, 6, v_inst_2096_);
lean_closure_set(v___f_2105_, 7, v_inst_2097_);
lean_closure_set(v___f_2105_, 8, v_inst_2090_);
lean_closure_set(v___f_2105_, 9, v_inst_2098_);
lean_closure_set(v___f_2105_, 10, v_inst_2099_);
lean_closure_set(v___f_2105_, 11, v_toBind_2100_);
lean_closure_set(v___f_2105_, 12, v_getEnv_2101_);
v___x_2106_ = lean_apply_4(v_toBind_2100_, lean_box(0), lean_box(0), v_getOptions_2103_, v___f_2105_);
return v___x_2106_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__6___boxed(lean_object* v_inst_2107_, lean_object* v_inst_2108_, lean_object* v_id_2109_, lean_object* v_toPure_2110_, lean_object* v_enableLog_2111_, lean_object* v___f_2112_, lean_object* v_inst_2113_, lean_object* v_inst_2114_, lean_object* v_inst_2115_, lean_object* v_inst_2116_, lean_object* v_toBind_2117_, lean_object* v_getEnv_2118_, lean_object* v_____do__lift_2119_){
_start:
{
uint8_t v_enableLog_boxed_2120_; lean_object* v_res_2121_; 
v_enableLog_boxed_2120_ = lean_unbox(v_enableLog_2111_);
v_res_2121_ = l_Lean_resolveGlobalName___redArg___lam__6(v_inst_2107_, v_inst_2108_, v_id_2109_, v_toPure_2110_, v_enableLog_boxed_2120_, v___f_2112_, v_inst_2113_, v_inst_2114_, v_inst_2115_, v_inst_2116_, v_toBind_2117_, v_getEnv_2118_, v_____do__lift_2119_);
return v_res_2121_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg(lean_object* v_inst_2123_, lean_object* v_inst_2124_, lean_object* v_inst_2125_, lean_object* v_inst_2126_, lean_object* v_inst_2127_, lean_object* v_inst_2128_, lean_object* v_id_2129_, uint8_t v_enableLog_2130_){
_start:
{
lean_object* v_toApplicative_2131_; lean_object* v_toBind_2132_; lean_object* v_getEnv_2133_; lean_object* v_toPure_2134_; lean_object* v___f_2135_; lean_object* v___x_2136_; lean_object* v___f_2137_; lean_object* v___x_2138_; 
v_toApplicative_2131_ = lean_ctor_get(v_inst_2123_, 0);
v_toBind_2132_ = lean_ctor_get(v_inst_2123_, 1);
lean_inc_n(v_toBind_2132_, 2);
v_getEnv_2133_ = lean_ctor_get(v_inst_2125_, 0);
lean_inc_n(v_getEnv_2133_, 2);
v_toPure_2134_ = lean_ctor_get(v_toApplicative_2131_, 1);
lean_inc(v_toPure_2134_);
v___f_2135_ = ((lean_object*)(l_Lean_resolveGlobalName___redArg___closed__0));
v___x_2136_ = lean_box(v_enableLog_2130_);
v___f_2137_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__6___boxed), 13, 12);
lean_closure_set(v___f_2137_, 0, v_inst_2126_);
lean_closure_set(v___f_2137_, 1, v_inst_2124_);
lean_closure_set(v___f_2137_, 2, v_id_2129_);
lean_closure_set(v___f_2137_, 3, v_toPure_2134_);
lean_closure_set(v___f_2137_, 4, v___x_2136_);
lean_closure_set(v___f_2137_, 5, v___f_2135_);
lean_closure_set(v___f_2137_, 6, v_inst_2123_);
lean_closure_set(v___f_2137_, 7, v_inst_2125_);
lean_closure_set(v___f_2137_, 8, v_inst_2127_);
lean_closure_set(v___f_2137_, 9, v_inst_2128_);
lean_closure_set(v___f_2137_, 10, v_toBind_2132_);
lean_closure_set(v___f_2137_, 11, v_getEnv_2133_);
v___x_2138_ = lean_apply_4(v_toBind_2132_, lean_box(0), lean_box(0), v_getEnv_2133_, v___f_2137_);
return v___x_2138_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___boxed(lean_object* v_inst_2139_, lean_object* v_inst_2140_, lean_object* v_inst_2141_, lean_object* v_inst_2142_, lean_object* v_inst_2143_, lean_object* v_inst_2144_, lean_object* v_id_2145_, lean_object* v_enableLog_2146_){
_start:
{
uint8_t v_enableLog_boxed_2147_; lean_object* v_res_2148_; 
v_enableLog_boxed_2147_ = lean_unbox(v_enableLog_2146_);
v_res_2148_ = l_Lean_resolveGlobalName___redArg(v_inst_2139_, v_inst_2140_, v_inst_2141_, v_inst_2142_, v_inst_2143_, v_inst_2144_, v_id_2145_, v_enableLog_boxed_2147_);
return v_res_2148_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName(lean_object* v_m_2149_, lean_object* v_inst_2150_, lean_object* v_inst_2151_, lean_object* v_inst_2152_, lean_object* v_inst_2153_, lean_object* v_inst_2154_, lean_object* v_inst_2155_, lean_object* v_id_2156_, uint8_t v_enableLog_2157_){
_start:
{
lean_object* v___x_2158_; 
v___x_2158_ = l_Lean_resolveGlobalName___redArg(v_inst_2150_, v_inst_2151_, v_inst_2152_, v_inst_2153_, v_inst_2154_, v_inst_2155_, v_id_2156_, v_enableLog_2157_);
return v___x_2158_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___boxed(lean_object* v_m_2159_, lean_object* v_inst_2160_, lean_object* v_inst_2161_, lean_object* v_inst_2162_, lean_object* v_inst_2163_, lean_object* v_inst_2164_, lean_object* v_inst_2165_, lean_object* v_id_2166_, lean_object* v_enableLog_2167_){
_start:
{
uint8_t v_enableLog_boxed_2168_; lean_object* v_res_2169_; 
v_enableLog_boxed_2168_ = lean_unbox(v_enableLog_2167_);
v_res_2169_ = l_Lean_resolveGlobalName(v_m_2159_, v_inst_2160_, v_inst_2161_, v_inst_2162_, v_inst_2163_, v_inst_2164_, v_inst_2165_, v_id_2166_, v_enableLog_boxed_2168_);
return v_res_2169_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__0(lean_object* v_toPure_2170_, lean_object* v_nss_2171_, lean_object* v_____r_2172_){
_start:
{
lean_object* v___x_2173_; 
v___x_2173_ = lean_apply_2(v_toPure_2170_, lean_box(0), v_nss_2171_);
return v___x_2173_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__1(lean_object* v_____do__lift_2176_, lean_object* v_____do__lift_2177_, lean_object* v_id_2178_, uint8_t v_allowEmpty_2179_, lean_object* v_toPure_2180_, lean_object* v_inst_2181_, lean_object* v_inst_2182_, lean_object* v_toBind_2183_, lean_object* v_____do__lift_2184_){
_start:
{
lean_object* v_nss_2185_; 
lean_inc(v_id_2178_);
v_nss_2185_ = l_Lean_ResolveName_resolveNamespace(v_____do__lift_2176_, v_____do__lift_2177_, v_____do__lift_2184_, v_id_2178_);
if (v_allowEmpty_2179_ == 0)
{
uint8_t v___x_2186_; 
v___x_2186_ = l_List_isEmpty___redArg(v_nss_2185_);
if (v___x_2186_ == 0)
{
lean_object* v___x_2187_; 
lean_dec(v_toBind_2183_);
lean_dec_ref(v_inst_2182_);
lean_dec_ref(v_inst_2181_);
lean_dec(v_id_2178_);
v___x_2187_ = lean_apply_2(v_toPure_2180_, lean_box(0), v_nss_2185_);
return v___x_2187_;
}
else
{
lean_object* v___f_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; 
v___f_2188_ = lean_alloc_closure((void*)(l_Lean_resolveNamespaceCore___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2188_, 0, v_toPure_2180_);
lean_closure_set(v___f_2188_, 1, v_nss_2185_);
v___x_2189_ = ((lean_object*)(l_Lean_resolveNamespaceCore___redArg___lam__1___closed__0));
v___x_2190_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_id_2178_, v___x_2186_);
v___x_2191_ = lean_string_append(v___x_2189_, v___x_2190_);
lean_dec_ref(v___x_2190_);
v___x_2192_ = ((lean_object*)(l_Lean_resolveNamespaceCore___redArg___lam__1___closed__1));
v___x_2193_ = lean_string_append(v___x_2191_, v___x_2192_);
v___x_2194_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2194_, 0, v___x_2193_);
v___x_2195_ = l_Lean_MessageData_ofFormat(v___x_2194_);
v___x_2196_ = l_Lean_throwError___redArg(v_inst_2181_, v_inst_2182_, v___x_2195_);
v___x_2197_ = lean_apply_4(v_toBind_2183_, lean_box(0), lean_box(0), v___x_2196_, v___f_2188_);
return v___x_2197_;
}
}
else
{
lean_object* v___x_2198_; 
lean_dec(v_toBind_2183_);
lean_dec_ref(v_inst_2182_);
lean_dec_ref(v_inst_2181_);
lean_dec(v_id_2178_);
v___x_2198_ = lean_apply_2(v_toPure_2180_, lean_box(0), v_nss_2185_);
return v___x_2198_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__1___boxed(lean_object* v_____do__lift_2199_, lean_object* v_____do__lift_2200_, lean_object* v_id_2201_, lean_object* v_allowEmpty_2202_, lean_object* v_toPure_2203_, lean_object* v_inst_2204_, lean_object* v_inst_2205_, lean_object* v_toBind_2206_, lean_object* v_____do__lift_2207_){
_start:
{
uint8_t v_allowEmpty_boxed_2208_; lean_object* v_res_2209_; 
v_allowEmpty_boxed_2208_ = lean_unbox(v_allowEmpty_2202_);
v_res_2209_ = l_Lean_resolveNamespaceCore___redArg___lam__1(v_____do__lift_2199_, v_____do__lift_2200_, v_id_2201_, v_allowEmpty_boxed_2208_, v_toPure_2203_, v_inst_2204_, v_inst_2205_, v_toBind_2206_, v_____do__lift_2207_);
return v_res_2209_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__2(lean_object* v_____do__lift_2210_, lean_object* v_id_2211_, uint8_t v_allowEmpty_2212_, lean_object* v_toPure_2213_, lean_object* v_inst_2214_, lean_object* v_inst_2215_, lean_object* v_toBind_2216_, lean_object* v_getOpenDecls_2217_, lean_object* v_____do__lift_2218_){
_start:
{
lean_object* v___x_2219_; lean_object* v___f_2220_; lean_object* v___x_2221_; 
v___x_2219_ = lean_box(v_allowEmpty_2212_);
lean_inc(v_toBind_2216_);
v___f_2220_ = lean_alloc_closure((void*)(l_Lean_resolveNamespaceCore___redArg___lam__1___boxed), 9, 8);
lean_closure_set(v___f_2220_, 0, v_____do__lift_2210_);
lean_closure_set(v___f_2220_, 1, v_____do__lift_2218_);
lean_closure_set(v___f_2220_, 2, v_id_2211_);
lean_closure_set(v___f_2220_, 3, v___x_2219_);
lean_closure_set(v___f_2220_, 4, v_toPure_2213_);
lean_closure_set(v___f_2220_, 5, v_inst_2214_);
lean_closure_set(v___f_2220_, 6, v_inst_2215_);
lean_closure_set(v___f_2220_, 7, v_toBind_2216_);
v___x_2221_ = lean_apply_4(v_toBind_2216_, lean_box(0), lean_box(0), v_getOpenDecls_2217_, v___f_2220_);
return v___x_2221_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__2___boxed(lean_object* v_____do__lift_2222_, lean_object* v_id_2223_, lean_object* v_allowEmpty_2224_, lean_object* v_toPure_2225_, lean_object* v_inst_2226_, lean_object* v_inst_2227_, lean_object* v_toBind_2228_, lean_object* v_getOpenDecls_2229_, lean_object* v_____do__lift_2230_){
_start:
{
uint8_t v_allowEmpty_boxed_2231_; lean_object* v_res_2232_; 
v_allowEmpty_boxed_2231_ = lean_unbox(v_allowEmpty_2224_);
v_res_2232_ = l_Lean_resolveNamespaceCore___redArg___lam__2(v_____do__lift_2222_, v_id_2223_, v_allowEmpty_boxed_2231_, v_toPure_2225_, v_inst_2226_, v_inst_2227_, v_toBind_2228_, v_getOpenDecls_2229_, v_____do__lift_2230_);
return v_res_2232_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__3(lean_object* v_inst_2233_, lean_object* v_id_2234_, uint8_t v_allowEmpty_2235_, lean_object* v_toPure_2236_, lean_object* v_inst_2237_, lean_object* v_inst_2238_, lean_object* v_toBind_2239_, lean_object* v_____do__lift_2240_){
_start:
{
lean_object* v_getCurrNamespace_2241_; lean_object* v_getOpenDecls_2242_; lean_object* v___x_2243_; lean_object* v___f_2244_; lean_object* v___x_2245_; 
v_getCurrNamespace_2241_ = lean_ctor_get(v_inst_2233_, 0);
lean_inc(v_getCurrNamespace_2241_);
v_getOpenDecls_2242_ = lean_ctor_get(v_inst_2233_, 1);
lean_inc(v_getOpenDecls_2242_);
lean_dec_ref(v_inst_2233_);
v___x_2243_ = lean_box(v_allowEmpty_2235_);
lean_inc(v_toBind_2239_);
v___f_2244_ = lean_alloc_closure((void*)(l_Lean_resolveNamespaceCore___redArg___lam__2___boxed), 9, 8);
lean_closure_set(v___f_2244_, 0, v_____do__lift_2240_);
lean_closure_set(v___f_2244_, 1, v_id_2234_);
lean_closure_set(v___f_2244_, 2, v___x_2243_);
lean_closure_set(v___f_2244_, 3, v_toPure_2236_);
lean_closure_set(v___f_2244_, 4, v_inst_2237_);
lean_closure_set(v___f_2244_, 5, v_inst_2238_);
lean_closure_set(v___f_2244_, 6, v_toBind_2239_);
lean_closure_set(v___f_2244_, 7, v_getOpenDecls_2242_);
v___x_2245_ = lean_apply_4(v_toBind_2239_, lean_box(0), lean_box(0), v_getCurrNamespace_2241_, v___f_2244_);
return v___x_2245_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__3___boxed(lean_object* v_inst_2246_, lean_object* v_id_2247_, lean_object* v_allowEmpty_2248_, lean_object* v_toPure_2249_, lean_object* v_inst_2250_, lean_object* v_inst_2251_, lean_object* v_toBind_2252_, lean_object* v_____do__lift_2253_){
_start:
{
uint8_t v_allowEmpty_boxed_2254_; lean_object* v_res_2255_; 
v_allowEmpty_boxed_2254_ = lean_unbox(v_allowEmpty_2248_);
v_res_2255_ = l_Lean_resolveNamespaceCore___redArg___lam__3(v_inst_2246_, v_id_2247_, v_allowEmpty_boxed_2254_, v_toPure_2249_, v_inst_2250_, v_inst_2251_, v_toBind_2252_, v_____do__lift_2253_);
return v_res_2255_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg(lean_object* v_inst_2256_, lean_object* v_inst_2257_, lean_object* v_inst_2258_, lean_object* v_inst_2259_, lean_object* v_id_2260_, uint8_t v_allowEmpty_2261_){
_start:
{
lean_object* v_toApplicative_2262_; lean_object* v_toBind_2263_; lean_object* v_getEnv_2264_; lean_object* v_toPure_2265_; lean_object* v___x_2266_; lean_object* v___f_2267_; lean_object* v___x_2268_; 
v_toApplicative_2262_ = lean_ctor_get(v_inst_2256_, 0);
v_toBind_2263_ = lean_ctor_get(v_inst_2256_, 1);
lean_inc_n(v_toBind_2263_, 2);
v_getEnv_2264_ = lean_ctor_get(v_inst_2258_, 0);
lean_inc(v_getEnv_2264_);
lean_dec_ref(v_inst_2258_);
v_toPure_2265_ = lean_ctor_get(v_toApplicative_2262_, 1);
lean_inc(v_toPure_2265_);
v___x_2266_ = lean_box(v_allowEmpty_2261_);
v___f_2267_ = lean_alloc_closure((void*)(l_Lean_resolveNamespaceCore___redArg___lam__3___boxed), 8, 7);
lean_closure_set(v___f_2267_, 0, v_inst_2257_);
lean_closure_set(v___f_2267_, 1, v_id_2260_);
lean_closure_set(v___f_2267_, 2, v___x_2266_);
lean_closure_set(v___f_2267_, 3, v_toPure_2265_);
lean_closure_set(v___f_2267_, 4, v_inst_2256_);
lean_closure_set(v___f_2267_, 5, v_inst_2259_);
lean_closure_set(v___f_2267_, 6, v_toBind_2263_);
v___x_2268_ = lean_apply_4(v_toBind_2263_, lean_box(0), lean_box(0), v_getEnv_2264_, v___f_2267_);
return v___x_2268_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___boxed(lean_object* v_inst_2269_, lean_object* v_inst_2270_, lean_object* v_inst_2271_, lean_object* v_inst_2272_, lean_object* v_id_2273_, lean_object* v_allowEmpty_2274_){
_start:
{
uint8_t v_allowEmpty_boxed_2275_; lean_object* v_res_2276_; 
v_allowEmpty_boxed_2275_ = lean_unbox(v_allowEmpty_2274_);
v_res_2276_ = l_Lean_resolveNamespaceCore___redArg(v_inst_2269_, v_inst_2270_, v_inst_2271_, v_inst_2272_, v_id_2273_, v_allowEmpty_boxed_2275_);
return v_res_2276_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore(lean_object* v_m_2277_, lean_object* v_inst_2278_, lean_object* v_inst_2279_, lean_object* v_inst_2280_, lean_object* v_inst_2281_, lean_object* v_id_2282_, uint8_t v_allowEmpty_2283_){
_start:
{
lean_object* v___x_2284_; 
v___x_2284_ = l_Lean_resolveNamespaceCore___redArg(v_inst_2278_, v_inst_2279_, v_inst_2280_, v_inst_2281_, v_id_2282_, v_allowEmpty_2283_);
return v___x_2284_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___boxed(lean_object* v_m_2285_, lean_object* v_inst_2286_, lean_object* v_inst_2287_, lean_object* v_inst_2288_, lean_object* v_inst_2289_, lean_object* v_id_2290_, lean_object* v_allowEmpty_2291_){
_start:
{
uint8_t v_allowEmpty_boxed_2292_; lean_object* v_res_2293_; 
v_allowEmpty_boxed_2292_ = lean_unbox(v_allowEmpty_2291_);
v_res_2293_ = l_Lean_resolveNamespaceCore(v_m_2285_, v_inst_2286_, v_inst_2287_, v_inst_2288_, v_inst_2289_, v_id_2290_, v_allowEmpty_boxed_2292_);
return v_res_2293_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__0(lean_object* v_x_2294_){
_start:
{
if (lean_obj_tag(v_x_2294_) == 0)
{
lean_object* v_ns_2295_; lean_object* v___x_2297_; uint8_t v_isShared_2298_; uint8_t v_isSharedCheck_2302_; 
v_ns_2295_ = lean_ctor_get(v_x_2294_, 0);
v_isSharedCheck_2302_ = !lean_is_exclusive(v_x_2294_);
if (v_isSharedCheck_2302_ == 0)
{
v___x_2297_ = v_x_2294_;
v_isShared_2298_ = v_isSharedCheck_2302_;
goto v_resetjp_2296_;
}
else
{
lean_inc(v_ns_2295_);
lean_dec(v_x_2294_);
v___x_2297_ = lean_box(0);
v_isShared_2298_ = v_isSharedCheck_2302_;
goto v_resetjp_2296_;
}
v_resetjp_2296_:
{
lean_object* v___x_2300_; 
if (v_isShared_2298_ == 0)
{
lean_ctor_set_tag(v___x_2297_, 1);
v___x_2300_ = v___x_2297_;
goto v_reusejp_2299_;
}
else
{
lean_object* v_reuseFailAlloc_2301_; 
v_reuseFailAlloc_2301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2301_, 0, v_ns_2295_);
v___x_2300_ = v_reuseFailAlloc_2301_;
goto v_reusejp_2299_;
}
v_reusejp_2299_:
{
return v___x_2300_;
}
}
}
else
{
lean_object* v___x_2303_; 
lean_dec_ref(v_x_2294_);
v___x_2303_ = lean_box(0);
return v___x_2303_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__1(lean_object* v_x_2304_, lean_object* v_withRef_2305_, lean_object* v___x_2306_, lean_object* v_oldRef_2307_){
_start:
{
lean_object* v_ref_2308_; lean_object* v___x_2309_; 
v_ref_2308_ = l_Lean_replaceRef(v_x_2304_, v_oldRef_2307_);
v___x_2309_ = lean_apply_3(v_withRef_2305_, lean_box(0), v_ref_2308_, v___x_2306_);
return v___x_2309_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__1___boxed(lean_object* v_x_2310_, lean_object* v_withRef_2311_, lean_object* v___x_2312_, lean_object* v_oldRef_2313_){
_start:
{
lean_object* v_res_2314_; 
v_res_2314_ = l_Lean_resolveNamespace___redArg___lam__1(v_x_2310_, v_withRef_2311_, v___x_2312_, v_oldRef_2313_);
lean_dec(v_oldRef_2313_);
lean_dec(v_x_2310_);
return v_res_2314_;
}
}
static lean_object* _init_l_Lean_resolveNamespace___redArg___closed__4(void){
_start:
{
lean_object* v___x_2321_; lean_object* v___x_2322_; 
v___x_2321_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__3));
v___x_2322_ = l_Lean_MessageData_ofFormat(v___x_2321_);
return v___x_2322_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg(lean_object* v_inst_2323_, lean_object* v_inst_2324_, lean_object* v_inst_2325_, lean_object* v_inst_2326_, lean_object* v_x_2327_){
_start:
{
if (lean_obj_tag(v_x_2327_) == 3)
{
lean_object* v_toApplicative_2328_; lean_object* v_toBind_2329_; lean_object* v_toPure_2330_; lean_object* v_toMonadRef_2331_; lean_object* v_val_2332_; lean_object* v_preresolved_2333_; lean_object* v___f_2334_; lean_object* v___x_2335_; lean_object* v_pre_2336_; uint8_t v___x_2337_; 
v_toApplicative_2328_ = lean_ctor_get(v_inst_2323_, 0);
v_toBind_2329_ = lean_ctor_get(v_inst_2323_, 1);
lean_inc(v_toBind_2329_);
v_toPure_2330_ = lean_ctor_get(v_toApplicative_2328_, 1);
v_toMonadRef_2331_ = lean_ctor_get(v_inst_2326_, 1);
v_val_2332_ = lean_ctor_get(v_x_2327_, 2);
v_preresolved_2333_ = lean_ctor_get(v_x_2327_, 3);
v___f_2334_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__0));
v___x_2335_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__1));
lean_inc(v_preresolved_2333_);
v_pre_2336_ = l_List_filterMapTR_go___redArg(v___f_2334_, v_preresolved_2333_, v___x_2335_);
v___x_2337_ = l_List_isEmpty___redArg(v_pre_2336_);
if (v___x_2337_ == 0)
{
lean_object* v___x_2338_; 
lean_inc(v_toPure_2330_);
lean_dec(v_toBind_2329_);
lean_dec_ref_known(v_x_2327_, 4);
lean_dec_ref(v_inst_2326_);
lean_dec_ref(v_inst_2325_);
lean_dec_ref(v_inst_2324_);
lean_dec_ref(v_inst_2323_);
v___x_2338_ = lean_apply_2(v_toPure_2330_, lean_box(0), v_pre_2336_);
return v___x_2338_;
}
else
{
lean_object* v_getRef_2339_; lean_object* v_withRef_2340_; uint8_t v___x_2341_; lean_object* v___x_2342_; lean_object* v___f_2343_; lean_object* v___x_2344_; 
lean_dec(v_pre_2336_);
v_getRef_2339_ = lean_ctor_get(v_toMonadRef_2331_, 0);
lean_inc(v_getRef_2339_);
v_withRef_2340_ = lean_ctor_get(v_toMonadRef_2331_, 1);
lean_inc(v_withRef_2340_);
v___x_2341_ = 0;
lean_inc(v_val_2332_);
v___x_2342_ = l_Lean_resolveNamespaceCore___redArg(v_inst_2323_, v_inst_2324_, v_inst_2325_, v_inst_2326_, v_val_2332_, v___x_2341_);
v___f_2343_ = lean_alloc_closure((void*)(l_Lean_resolveNamespace___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2343_, 0, v_x_2327_);
lean_closure_set(v___f_2343_, 1, v_withRef_2340_);
lean_closure_set(v___f_2343_, 2, v___x_2342_);
v___x_2344_ = lean_apply_4(v_toBind_2329_, lean_box(0), lean_box(0), v_getRef_2339_, v___f_2343_);
return v___x_2344_;
}
}
else
{
lean_object* v___x_2345_; lean_object* v___x_2346_; 
lean_dec_ref(v_inst_2325_);
lean_dec_ref(v_inst_2324_);
v___x_2345_ = lean_obj_once(&l_Lean_resolveNamespace___redArg___closed__4, &l_Lean_resolveNamespace___redArg___closed__4_once, _init_l_Lean_resolveNamespace___redArg___closed__4);
v___x_2346_ = l_Lean_throwErrorAt___redArg(v_inst_2323_, v_inst_2326_, v_x_2327_, v___x_2345_);
return v___x_2346_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace(lean_object* v_m_2347_, lean_object* v_inst_2348_, lean_object* v_inst_2349_, lean_object* v_inst_2350_, lean_object* v_inst_2351_, lean_object* v_x_2352_){
_start:
{
lean_object* v___x_2353_; 
v___x_2353_ = l_Lean_resolveNamespace___redArg(v_inst_2348_, v_inst_2349_, v_inst_2350_, v_inst_2351_, v_x_2352_);
return v___x_2353_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg___lam__0(lean_object* v_id_2356_, lean_object* v___f_2357_, lean_object* v_inst_2358_, lean_object* v_inst_2359_, lean_object* v_toPure_2360_, lean_object* v_____do__lift_2361_){
_start:
{
if (lean_obj_tag(v_____do__lift_2361_) == 1)
{
lean_object* v_tail_2377_; 
v_tail_2377_ = lean_ctor_get(v_____do__lift_2361_, 1);
if (lean_obj_tag(v_tail_2377_) == 0)
{
lean_object* v_head_2378_; lean_object* v___x_2379_; 
lean_dec_ref(v_inst_2359_);
lean_dec_ref(v_inst_2358_);
lean_dec_ref(v___f_2357_);
v_head_2378_ = lean_ctor_get(v_____do__lift_2361_, 0);
lean_inc(v_head_2378_);
lean_dec_ref_known(v_____do__lift_2361_, 2);
v___x_2379_ = lean_apply_2(v_toPure_2360_, lean_box(0), v_head_2378_);
return v___x_2379_;
}
else
{
lean_dec(v_toPure_2360_);
goto v___jp_2362_;
}
}
else
{
lean_dec(v_toPure_2360_);
goto v___jp_2362_;
}
v___jp_2362_:
{
lean_object* v___x_2363_; lean_object* v___x_2364_; uint8_t v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; 
v___x_2363_ = ((lean_object*)(l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__0));
v___x_2364_ = l_Lean_TSyntax_getId(v_id_2356_);
v___x_2365_ = 1;
v___x_2366_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2364_, v___x_2365_);
v___x_2367_ = lean_string_append(v___x_2363_, v___x_2366_);
lean_dec_ref(v___x_2366_);
v___x_2368_ = ((lean_object*)(l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__1));
v___x_2369_ = lean_string_append(v___x_2367_, v___x_2368_);
v___x_2370_ = l_List_toString___redArg(v___f_2357_, v_____do__lift_2361_);
v___x_2371_ = lean_string_append(v___x_2369_, v___x_2370_);
lean_dec_ref(v___x_2370_);
v___x_2372_ = ((lean_object*)(l_Lean_resolveNamespaceCore___redArg___lam__1___closed__1));
v___x_2373_ = lean_string_append(v___x_2371_, v___x_2372_);
v___x_2374_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2374_, 0, v___x_2373_);
v___x_2375_ = l_Lean_MessageData_ofFormat(v___x_2374_);
v___x_2376_ = l_Lean_throwError___redArg(v_inst_2358_, v_inst_2359_, v___x_2375_);
return v___x_2376_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg___lam__0___boxed(lean_object* v_id_2380_, lean_object* v___f_2381_, lean_object* v_inst_2382_, lean_object* v_inst_2383_, lean_object* v_toPure_2384_, lean_object* v_____do__lift_2385_){
_start:
{
lean_object* v_res_2386_; 
v_res_2386_ = l_Lean_resolveUniqueNamespace___redArg___lam__0(v_id_2380_, v___f_2381_, v_inst_2382_, v_inst_2383_, v_toPure_2384_, v_____do__lift_2385_);
lean_dec(v_id_2380_);
return v_res_2386_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg(lean_object* v_inst_2388_, lean_object* v_inst_2389_, lean_object* v_inst_2390_, lean_object* v_inst_2391_, lean_object* v_id_2392_){
_start:
{
lean_object* v_toApplicative_2393_; lean_object* v_toBind_2394_; lean_object* v_toPure_2395_; lean_object* v___f_2396_; lean_object* v___x_2397_; lean_object* v___f_2398_; lean_object* v___x_2399_; 
v_toApplicative_2393_ = lean_ctor_get(v_inst_2388_, 0);
v_toBind_2394_ = lean_ctor_get(v_inst_2388_, 1);
lean_inc(v_toBind_2394_);
v_toPure_2395_ = lean_ctor_get(v_toApplicative_2393_, 1);
lean_inc(v_toPure_2395_);
v___f_2396_ = ((lean_object*)(l_Lean_resolveUniqueNamespace___redArg___closed__0));
lean_inc(v_id_2392_);
lean_inc_ref(v_inst_2391_);
lean_inc_ref(v_inst_2388_);
v___x_2397_ = l_Lean_resolveNamespace___redArg(v_inst_2388_, v_inst_2389_, v_inst_2390_, v_inst_2391_, v_id_2392_);
v___f_2398_ = lean_alloc_closure((void*)(l_Lean_resolveUniqueNamespace___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_2398_, 0, v_id_2392_);
lean_closure_set(v___f_2398_, 1, v___f_2396_);
lean_closure_set(v___f_2398_, 2, v_inst_2388_);
lean_closure_set(v___f_2398_, 3, v_inst_2391_);
lean_closure_set(v___f_2398_, 4, v_toPure_2395_);
v___x_2399_ = lean_apply_4(v_toBind_2394_, lean_box(0), lean_box(0), v___x_2397_, v___f_2398_);
return v___x_2399_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace(lean_object* v_m_2400_, lean_object* v_inst_2401_, lean_object* v_inst_2402_, lean_object* v_inst_2403_, lean_object* v_inst_2404_, lean_object* v_id_2405_){
_start:
{
lean_object* v___x_2406_; 
v___x_2406_ = l_Lean_resolveUniqueNamespace___redArg(v_inst_2401_, v_inst_2402_, v_inst_2403_, v_inst_2404_, v_id_2405_);
return v___x_2406_;
}
}
LEAN_EXPORT uint8_t l_Lean_filterFieldList___redArg___lam__0(lean_object* v_x_2407_){
_start:
{
lean_object* v_snd_2408_; uint8_t v___x_2409_; 
v_snd_2408_ = lean_ctor_get(v_x_2407_, 1);
v___x_2409_ = l_List_isEmpty___redArg(v_snd_2408_);
return v___x_2409_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__0___boxed(lean_object* v_x_2410_){
_start:
{
uint8_t v_res_2411_; lean_object* v_r_2412_; 
v_res_2411_ = l_Lean_filterFieldList___redArg___lam__0(v_x_2410_);
lean_dec_ref(v_x_2410_);
v_r_2412_ = lean_box(v_res_2411_);
return v_r_2412_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__1(lean_object* v_x_2413_){
_start:
{
lean_object* v_fst_2414_; 
v_fst_2414_ = lean_ctor_get(v_x_2413_, 0);
lean_inc(v_fst_2414_);
return v_fst_2414_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__1___boxed(lean_object* v_x_2415_){
_start:
{
lean_object* v_res_2416_; 
v_res_2416_ = l_Lean_filterFieldList___redArg___lam__1(v_x_2415_);
lean_dec_ref(v_x_2415_);
return v_res_2416_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__2(lean_object* v___f_2417_, lean_object* v_cs_2418_, lean_object* v_toPure_2419_, lean_object* v_____r_2420_){
_start:
{
lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; 
v___x_2421_ = lean_box(0);
v___x_2422_ = l_List_mapTR_loop___redArg(v___f_2417_, v_cs_2418_, v___x_2421_);
v___x_2423_ = lean_apply_2(v_toPure_2419_, lean_box(0), v___x_2422_);
return v___x_2423_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__3(lean_object* v___f_2424_, lean_object* v_____r_2425_){
_start:
{
lean_object* v___x_2426_; 
v___x_2426_ = lean_apply_1(v___f_2424_, v_____r_2425_);
return v___x_2426_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__4(lean_object* v_inst_2427_, lean_object* v_inst_2428_, lean_object* v_inst_2429_, lean_object* v_n_2430_, lean_object* v_toBind_2431_, lean_object* v___f_2432_, lean_object* v_____do__lift_2433_){
_start:
{
lean_object* v___x_2434_; lean_object* v___x_2435_; 
v___x_2434_ = l_Lean_throwUnknownConstantAt___redArg(v_inst_2427_, v_inst_2428_, v_inst_2429_, v_____do__lift_2433_, v_n_2430_);
v___x_2435_ = lean_apply_4(v_toBind_2431_, lean_box(0), lean_box(0), v___x_2434_, v___f_2432_);
return v___x_2435_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg(lean_object* v_inst_2438_, lean_object* v_inst_2439_, lean_object* v_inst_2440_, lean_object* v_n_2441_, lean_object* v_cs_2442_){
_start:
{
lean_object* v_toApplicative_2443_; lean_object* v_toBind_2444_; lean_object* v_toPure_2445_; lean_object* v_toMonadRef_2446_; lean_object* v___f_2447_; lean_object* v___f_2448_; lean_object* v___x_2449_; lean_object* v_cs_2450_; lean_object* v___f_2451_; uint8_t v___x_2452_; 
v_toApplicative_2443_ = lean_ctor_get(v_inst_2438_, 0);
v_toBind_2444_ = lean_ctor_get(v_inst_2438_, 1);
lean_inc(v_toBind_2444_);
v_toPure_2445_ = lean_ctor_get(v_toApplicative_2443_, 1);
v_toMonadRef_2446_ = lean_ctor_get(v_inst_2440_, 1);
v___f_2447_ = ((lean_object*)(l_Lean_filterFieldList___redArg___closed__0));
v___f_2448_ = ((lean_object*)(l_Lean_filterFieldList___redArg___closed__1));
v___x_2449_ = lean_box(0);
v_cs_2450_ = l_List_filterTR_loop___redArg(v___f_2447_, v_cs_2442_, v___x_2449_);
lean_inc(v_toPure_2445_);
lean_inc(v_cs_2450_);
v___f_2451_ = lean_alloc_closure((void*)(l_Lean_filterFieldList___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2451_, 0, v___f_2448_);
lean_closure_set(v___f_2451_, 1, v_cs_2450_);
lean_closure_set(v___f_2451_, 2, v_toPure_2445_);
v___x_2452_ = l_List_isEmpty___redArg(v_cs_2450_);
if (v___x_2452_ == 0)
{
lean_object* v___x_2453_; lean_object* v___x_2454_; 
lean_inc(v_toPure_2445_);
lean_dec_ref(v___f_2451_);
lean_dec(v_toBind_2444_);
lean_dec(v_n_2441_);
lean_dec_ref(v_inst_2440_);
lean_dec_ref(v_inst_2439_);
lean_dec_ref(v_inst_2438_);
v___x_2453_ = lean_box(0);
v___x_2454_ = l_Lean_filterFieldList___redArg___lam__2(v___f_2448_, v_cs_2450_, v_toPure_2445_, v___x_2453_);
return v___x_2454_;
}
else
{
lean_object* v_getRef_2455_; lean_object* v___f_2456_; lean_object* v___f_2457_; lean_object* v___x_2458_; 
lean_dec(v_cs_2450_);
v_getRef_2455_ = lean_ctor_get(v_toMonadRef_2446_, 0);
lean_inc(v_getRef_2455_);
v___f_2456_ = lean_alloc_closure((void*)(l_Lean_filterFieldList___redArg___lam__3), 2, 1);
lean_closure_set(v___f_2456_, 0, v___f_2451_);
lean_inc(v_toBind_2444_);
v___f_2457_ = lean_alloc_closure((void*)(l_Lean_filterFieldList___redArg___lam__4), 7, 6);
lean_closure_set(v___f_2457_, 0, v_inst_2438_);
lean_closure_set(v___f_2457_, 1, v_inst_2439_);
lean_closure_set(v___f_2457_, 2, v_inst_2440_);
lean_closure_set(v___f_2457_, 3, v_n_2441_);
lean_closure_set(v___f_2457_, 4, v_toBind_2444_);
lean_closure_set(v___f_2457_, 5, v___f_2456_);
v___x_2458_ = lean_apply_4(v_toBind_2444_, lean_box(0), lean_box(0), v_getRef_2455_, v___f_2457_);
return v___x_2458_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList(lean_object* v_m_2459_, lean_object* v_inst_2460_, lean_object* v_inst_2461_, lean_object* v_inst_2462_, lean_object* v_n_2463_, lean_object* v_cs_2464_){
_start:
{
lean_object* v___x_2465_; 
v___x_2465_ = l_Lean_filterFieldList___redArg(v_inst_2460_, v_inst_2461_, v_inst_2462_, v_n_2463_, v_cs_2464_);
return v___x_2465_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg___lam__0(lean_object* v_inst_2466_, lean_object* v_inst_2467_, lean_object* v_inst_2468_, lean_object* v_n_2469_, lean_object* v_cs_2470_){
_start:
{
lean_object* v___x_2471_; 
v___x_2471_ = l_Lean_filterFieldList___redArg(v_inst_2466_, v_inst_2467_, v_inst_2468_, v_n_2469_, v_cs_2470_);
return v___x_2471_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg(lean_object* v_inst_2472_, lean_object* v_inst_2473_, lean_object* v_inst_2474_, lean_object* v_inst_2475_, lean_object* v_inst_2476_, lean_object* v_inst_2477_, lean_object* v_inst_2478_, lean_object* v_n_2479_){
_start:
{
lean_object* v_toBind_2480_; lean_object* v___f_2481_; uint8_t v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; 
v_toBind_2480_ = lean_ctor_get(v_inst_2472_, 1);
lean_inc(v_toBind_2480_);
lean_inc(v_n_2479_);
lean_inc_ref(v_inst_2474_);
lean_inc_ref(v_inst_2472_);
v___f_2481_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg___lam__0), 5, 4);
lean_closure_set(v___f_2481_, 0, v_inst_2472_);
lean_closure_set(v___f_2481_, 1, v_inst_2474_);
lean_closure_set(v___f_2481_, 2, v_inst_2478_);
lean_closure_set(v___f_2481_, 3, v_n_2479_);
v___x_2482_ = 1;
v___x_2483_ = l_Lean_resolveGlobalName___redArg(v_inst_2472_, v_inst_2473_, v_inst_2474_, v_inst_2475_, v_inst_2476_, v_inst_2477_, v_n_2479_, v___x_2482_);
v___x_2484_ = lean_apply_4(v_toBind_2480_, lean_box(0), lean_box(0), v___x_2483_, v___f_2481_);
return v___x_2484_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore(lean_object* v_m_2485_, lean_object* v_inst_2486_, lean_object* v_inst_2487_, lean_object* v_inst_2488_, lean_object* v_inst_2489_, lean_object* v_inst_2490_, lean_object* v_inst_2491_, lean_object* v_inst_2492_, lean_object* v_n_2493_){
_start:
{
lean_object* v___x_2494_; 
v___x_2494_ = l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg(v_inst_2486_, v_inst_2487_, v_inst_2488_, v_inst_2489_, v_inst_2490_, v_inst_2491_, v_inst_2492_, v_n_2493_);
return v___x_2494_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload___redArg___lam__0(lean_object* v_declName_2495_){
_start:
{
lean_object* v___x_2496_; lean_object* v___x_2497_; 
v___x_2496_ = lean_box(0);
v___x_2497_ = l_Lean_mkConst(v_declName_2495_, v___x_2496_);
return v___x_2497_;
}
}
static lean_object* _init_l_Lean_ensureNoOverload___redArg___closed__2(void){
_start:
{
lean_object* v___x_2500_; lean_object* v___x_2501_; 
v___x_2500_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__1));
v___x_2501_ = l_Lean_stringToMessageData(v___x_2500_);
return v___x_2501_;
}
}
static lean_object* _init_l_Lean_ensureNoOverload___redArg___closed__4(void){
_start:
{
lean_object* v___x_2503_; lean_object* v___x_2504_; 
v___x_2503_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__3));
v___x_2504_ = l_Lean_stringToMessageData(v___x_2503_);
return v___x_2504_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload___redArg(lean_object* v_inst_2506_, lean_object* v_inst_2507_, lean_object* v_n_2508_, lean_object* v_cs_2509_){
_start:
{
lean_object* v_toApplicative_2510_; lean_object* v_toPure_2511_; lean_object* v___f_2512_; 
v_toApplicative_2510_ = lean_ctor_get(v_inst_2506_, 0);
v_toPure_2511_ = lean_ctor_get(v_toApplicative_2510_, 1);
v___f_2512_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__0));
if (lean_obj_tag(v_cs_2509_) == 1)
{
lean_object* v_tail_2526_; 
v_tail_2526_ = lean_ctor_get(v_cs_2509_, 1);
if (lean_obj_tag(v_tail_2526_) == 0)
{
lean_object* v_head_2527_; lean_object* v___x_2528_; 
lean_inc(v_toPure_2511_);
lean_dec(v_n_2508_);
lean_dec_ref(v_inst_2507_);
lean_dec_ref(v_inst_2506_);
v_head_2527_ = lean_ctor_get(v_cs_2509_, 0);
lean_inc(v_head_2527_);
lean_dec_ref_known(v_cs_2509_, 2);
v___x_2528_ = lean_apply_2(v_toPure_2511_, lean_box(0), v_head_2527_);
return v___x_2528_;
}
else
{
goto v___jp_2513_;
}
}
else
{
goto v___jp_2513_;
}
v___jp_2513_:
{
lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; 
v___x_2514_ = lean_obj_once(&l_Lean_ensureNoOverload___redArg___closed__2, &l_Lean_ensureNoOverload___redArg___closed__2_once, _init_l_Lean_ensureNoOverload___redArg___closed__2);
v___x_2515_ = l_Lean_MessageData_ofName(v_n_2508_);
v___x_2516_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2516_, 0, v___x_2514_);
lean_ctor_set(v___x_2516_, 1, v___x_2515_);
v___x_2517_ = lean_obj_once(&l_Lean_ensureNoOverload___redArg___closed__4, &l_Lean_ensureNoOverload___redArg___closed__4_once, _init_l_Lean_ensureNoOverload___redArg___closed__4);
v___x_2518_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2518_, 0, v___x_2516_);
lean_ctor_set(v___x_2518_, 1, v___x_2517_);
v___x_2519_ = lean_box(0);
v___x_2520_ = l_List_mapTR_loop___redArg(v___f_2512_, v_cs_2509_, v___x_2519_);
v___x_2521_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__5));
v___x_2522_ = l_List_mapTR_loop___redArg(v___x_2521_, v___x_2520_, v___x_2519_);
v___x_2523_ = l_Lean_MessageData_ofList(v___x_2522_);
v___x_2524_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2524_, 0, v___x_2518_);
lean_ctor_set(v___x_2524_, 1, v___x_2523_);
v___x_2525_ = l_Lean_throwError___redArg(v_inst_2506_, v_inst_2507_, v___x_2524_);
return v___x_2525_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload(lean_object* v_m_2529_, lean_object* v_inst_2530_, lean_object* v_inst_2531_, lean_object* v_n_2532_, lean_object* v_cs_2533_){
_start:
{
lean_object* v___x_2534_; 
v___x_2534_ = l_Lean_ensureNoOverload___redArg(v_inst_2530_, v_inst_2531_, v_n_2532_, v_cs_2533_);
return v___x_2534_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore___redArg___lam__0(lean_object* v_inst_2535_, lean_object* v_inst_2536_, lean_object* v_n_2537_, lean_object* v_____do__lift_2538_){
_start:
{
lean_object* v___x_2539_; 
v___x_2539_ = l_Lean_ensureNoOverload___redArg(v_inst_2535_, v_inst_2536_, v_n_2537_, v_____do__lift_2538_);
return v___x_2539_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore___redArg(lean_object* v_inst_2540_, lean_object* v_inst_2541_, lean_object* v_inst_2542_, lean_object* v_inst_2543_, lean_object* v_inst_2544_, lean_object* v_inst_2545_, lean_object* v_inst_2546_, lean_object* v_n_2547_){
_start:
{
lean_object* v_toBind_2548_; lean_object* v___f_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; 
v_toBind_2548_ = lean_ctor_get(v_inst_2540_, 1);
lean_inc(v_toBind_2548_);
lean_inc(v_n_2547_);
lean_inc_ref(v_inst_2546_);
lean_inc_ref(v_inst_2540_);
v___f_2549_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalConstNoOverloadCore___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2549_, 0, v_inst_2540_);
lean_closure_set(v___f_2549_, 1, v_inst_2546_);
lean_closure_set(v___f_2549_, 2, v_n_2547_);
v___x_2550_ = l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg(v_inst_2540_, v_inst_2541_, v_inst_2542_, v_inst_2543_, v_inst_2544_, v_inst_2545_, v_inst_2546_, v_n_2547_);
v___x_2551_ = lean_apply_4(v_toBind_2548_, lean_box(0), lean_box(0), v___x_2550_, v___f_2549_);
return v___x_2551_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore(lean_object* v_m_2552_, lean_object* v_inst_2553_, lean_object* v_inst_2554_, lean_object* v_inst_2555_, lean_object* v_inst_2556_, lean_object* v_inst_2557_, lean_object* v_inst_2558_, lean_object* v_inst_2559_, lean_object* v_n_2560_){
_start:
{
lean_object* v___x_2561_; 
v___x_2561_ = l_Lean_resolveGlobalConstNoOverloadCore___redArg(v_inst_2553_, v_inst_2554_, v_inst_2555_, v_inst_2556_, v_inst_2557_, v_inst_2558_, v_inst_2559_, v_n_2560_);
return v___x_2561_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__0(lean_object* v_x_2562_){
_start:
{
if (lean_obj_tag(v_x_2562_) == 1)
{
lean_object* v_fields_2563_; 
v_fields_2563_ = lean_ctor_get(v_x_2562_, 1);
if (lean_obj_tag(v_fields_2563_) == 0)
{
lean_object* v_n_2564_; lean_object* v___x_2565_; 
v_n_2564_ = lean_ctor_get(v_x_2562_, 0);
lean_inc(v_n_2564_);
v___x_2565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2565_, 0, v_n_2564_);
return v___x_2565_;
}
else
{
lean_object* v___x_2566_; 
v___x_2566_ = lean_box(0);
return v___x_2566_;
}
}
else
{
lean_object* v___x_2567_; 
v___x_2567_ = lean_box(0);
return v___x_2567_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__0___boxed(lean_object* v_x_2568_){
_start:
{
lean_object* v_res_2569_; 
v_res_2569_ = l_Lean_preprocessSyntaxAndResolve___redArg___lam__0(v_x_2568_);
lean_dec_ref(v_x_2568_);
return v_res_2569_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__1(lean_object* v_stx_2570_, lean_object* v_withRef_2571_, lean_object* v___x_2572_, lean_object* v_oldRef_2573_){
_start:
{
lean_object* v_ref_2574_; lean_object* v___x_2575_; 
v_ref_2574_ = l_Lean_replaceRef(v_stx_2570_, v_oldRef_2573_);
v___x_2575_ = lean_apply_3(v_withRef_2571_, lean_box(0), v_ref_2574_, v___x_2572_);
return v___x_2575_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__1___boxed(lean_object* v_stx_2576_, lean_object* v_withRef_2577_, lean_object* v___x_2578_, lean_object* v_oldRef_2579_){
_start:
{
lean_object* v_res_2580_; 
v_res_2580_ = l_Lean_preprocessSyntaxAndResolve___redArg___lam__1(v_stx_2576_, v_withRef_2577_, v___x_2578_, v_oldRef_2579_);
lean_dec(v_oldRef_2579_);
lean_dec(v_stx_2576_);
return v_res_2580_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg(lean_object* v_inst_2582_, lean_object* v_inst_2583_, lean_object* v_stx_2584_, lean_object* v_k_2585_){
_start:
{
if (lean_obj_tag(v_stx_2584_) == 3)
{
lean_object* v_toApplicative_2586_; lean_object* v_toBind_2587_; lean_object* v_toPure_2588_; lean_object* v_toMonadRef_2589_; lean_object* v_val_2590_; lean_object* v_preresolved_2591_; lean_object* v___f_2592_; lean_object* v___x_2593_; lean_object* v_pre_2594_; uint8_t v___x_2595_; 
v_toApplicative_2586_ = lean_ctor_get(v_inst_2582_, 0);
lean_inc_ref(v_toApplicative_2586_);
v_toBind_2587_ = lean_ctor_get(v_inst_2582_, 1);
lean_inc(v_toBind_2587_);
lean_dec_ref(v_inst_2582_);
v_toPure_2588_ = lean_ctor_get(v_toApplicative_2586_, 1);
lean_inc(v_toPure_2588_);
lean_dec_ref(v_toApplicative_2586_);
v_toMonadRef_2589_ = lean_ctor_get(v_inst_2583_, 1);
lean_inc_ref(v_toMonadRef_2589_);
lean_dec_ref(v_inst_2583_);
v_val_2590_ = lean_ctor_get(v_stx_2584_, 2);
v_preresolved_2591_ = lean_ctor_get(v_stx_2584_, 3);
v___f_2592_ = ((lean_object*)(l_Lean_preprocessSyntaxAndResolve___redArg___closed__0));
v___x_2593_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__1));
lean_inc(v_preresolved_2591_);
v_pre_2594_ = l_List_filterMapTR_go___redArg(v___f_2592_, v_preresolved_2591_, v___x_2593_);
v___x_2595_ = l_List_isEmpty___redArg(v_pre_2594_);
if (v___x_2595_ == 0)
{
lean_object* v___x_2596_; 
lean_dec_ref(v_toMonadRef_2589_);
lean_dec_ref_known(v_stx_2584_, 4);
lean_dec(v_toBind_2587_);
lean_dec(v_k_2585_);
v___x_2596_ = lean_apply_2(v_toPure_2588_, lean_box(0), v_pre_2594_);
return v___x_2596_;
}
else
{
lean_object* v_getRef_2597_; lean_object* v_withRef_2598_; lean_object* v___x_2599_; lean_object* v___f_2600_; lean_object* v___x_2601_; 
lean_dec(v_pre_2594_);
lean_dec(v_toPure_2588_);
v_getRef_2597_ = lean_ctor_get(v_toMonadRef_2589_, 0);
lean_inc(v_getRef_2597_);
v_withRef_2598_ = lean_ctor_get(v_toMonadRef_2589_, 1);
lean_inc(v_withRef_2598_);
lean_dec_ref(v_toMonadRef_2589_);
lean_inc(v_val_2590_);
v___x_2599_ = lean_apply_1(v_k_2585_, v_val_2590_);
v___f_2600_ = lean_alloc_closure((void*)(l_Lean_preprocessSyntaxAndResolve___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2600_, 0, v_stx_2584_);
lean_closure_set(v___f_2600_, 1, v_withRef_2598_);
lean_closure_set(v___f_2600_, 2, v___x_2599_);
v___x_2601_ = lean_apply_4(v_toBind_2587_, lean_box(0), lean_box(0), v_getRef_2597_, v___f_2600_);
return v___x_2601_;
}
}
else
{
lean_object* v___x_2602_; lean_object* v___x_2603_; 
lean_dec(v_k_2585_);
v___x_2602_ = lean_obj_once(&l_Lean_resolveNamespace___redArg___closed__4, &l_Lean_resolveNamespace___redArg___closed__4_once, _init_l_Lean_resolveNamespace___redArg___closed__4);
v___x_2603_ = l_Lean_throwErrorAt___redArg(v_inst_2582_, v_inst_2583_, v_stx_2584_, v___x_2602_);
return v___x_2603_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve(lean_object* v_m_2604_, lean_object* v_inst_2605_, lean_object* v_inst_2606_, lean_object* v_stx_2607_, lean_object* v_k_2608_){
_start:
{
lean_object* v___x_2609_; 
v___x_2609_ = l_Lean_preprocessSyntaxAndResolve___redArg(v_inst_2605_, v_inst_2606_, v_stx_2607_, v_k_2608_);
return v___x_2609_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst___redArg(lean_object* v_inst_2610_, lean_object* v_inst_2611_, lean_object* v_inst_2612_, lean_object* v_inst_2613_, lean_object* v_inst_2614_, lean_object* v_inst_2615_, lean_object* v_inst_2616_, lean_object* v_stx_2617_){
_start:
{
lean_object* v___x_2618_; lean_object* v___x_2619_; 
lean_inc_ref(v_inst_2616_);
lean_inc_ref(v_inst_2610_);
v___x_2618_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore), 9, 8);
lean_closure_set(v___x_2618_, 0, lean_box(0));
lean_closure_set(v___x_2618_, 1, v_inst_2610_);
lean_closure_set(v___x_2618_, 2, v_inst_2611_);
lean_closure_set(v___x_2618_, 3, v_inst_2612_);
lean_closure_set(v___x_2618_, 4, v_inst_2613_);
lean_closure_set(v___x_2618_, 5, v_inst_2614_);
lean_closure_set(v___x_2618_, 6, v_inst_2615_);
lean_closure_set(v___x_2618_, 7, v_inst_2616_);
v___x_2619_ = l_Lean_preprocessSyntaxAndResolve___redArg(v_inst_2610_, v_inst_2616_, v_stx_2617_, v___x_2618_);
return v___x_2619_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst(lean_object* v_m_2620_, lean_object* v_inst_2621_, lean_object* v_inst_2622_, lean_object* v_inst_2623_, lean_object* v_inst_2624_, lean_object* v_inst_2625_, lean_object* v_inst_2626_, lean_object* v_inst_2627_, lean_object* v_stx_2628_){
_start:
{
lean_object* v___x_2629_; 
v___x_2629_ = l_Lean_resolveGlobalConst___redArg(v_inst_2621_, v_inst_2622_, v_inst_2623_, v_inst_2624_, v_inst_2625_, v_inst_2626_, v_inst_2627_, v_stx_2628_);
return v___x_2629_;
}
}
static lean_object* _init_l_Lean_ensureNonAmbiguous___redArg___closed__1(void){
_start:
{
lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; 
v___x_2631_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__2));
v___x_2632_ = lean_unsigned_to_nat(11u);
v___x_2633_ = lean_unsigned_to_nat(469u);
v___x_2634_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___redArg___closed__0));
v___x_2635_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__0));
v___x_2636_ = l_mkPanicMessageWithDecl(v___x_2635_, v___x_2634_, v___x_2633_, v___x_2632_, v___x_2631_);
return v___x_2636_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous___redArg(lean_object* v_inst_2640_, lean_object* v_inst_2641_, lean_object* v_id_2642_, lean_object* v_cs_2643_){
_start:
{
if (lean_obj_tag(v_cs_2643_) == 0)
{
lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; 
lean_dec(v_id_2642_);
lean_dec_ref(v_inst_2641_);
v___x_2644_ = lean_box(0);
v___x_2645_ = l_instInhabitedOfMonad___redArg(v_inst_2640_, v___x_2644_);
v___x_2646_ = lean_obj_once(&l_Lean_ensureNonAmbiguous___redArg___closed__1, &l_Lean_ensureNonAmbiguous___redArg___closed__1_once, _init_l_Lean_ensureNonAmbiguous___redArg___closed__1);
v___x_2647_ = l_panic___redArg(v___x_2645_, v___x_2646_);
lean_dec(v___x_2645_);
return v___x_2647_;
}
else
{
lean_object* v_tail_2648_; 
v_tail_2648_ = lean_ctor_get(v_cs_2643_, 1);
if (lean_obj_tag(v_tail_2648_) == 0)
{
lean_object* v_toApplicative_2649_; lean_object* v_toPure_2650_; lean_object* v_head_2651_; lean_object* v___x_2652_; 
v_toApplicative_2649_ = lean_ctor_get(v_inst_2640_, 0);
lean_inc_ref(v_toApplicative_2649_);
lean_dec(v_id_2642_);
lean_dec_ref(v_inst_2641_);
lean_dec_ref(v_inst_2640_);
v_toPure_2650_ = lean_ctor_get(v_toApplicative_2649_, 1);
lean_inc(v_toPure_2650_);
lean_dec_ref(v_toApplicative_2649_);
v_head_2651_ = lean_ctor_get(v_cs_2643_, 0);
lean_inc(v_head_2651_);
lean_dec_ref_known(v_cs_2643_, 2);
v___x_2652_ = lean_apply_2(v_toPure_2650_, lean_box(0), v_head_2651_);
return v___x_2652_;
}
else
{
lean_object* v___f_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; uint8_t v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; 
v___f_2653_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__0));
v___x_2654_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___redArg___closed__2));
v___x_2655_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___redArg___closed__3));
v___x_2656_ = lean_box(0);
v___x_2657_ = 0;
lean_inc(v_id_2642_);
v___x_2658_ = l_Lean_Syntax_formatStx(v_id_2642_, v___x_2656_, v___x_2657_);
v___x_2659_ = l_Std_Format_defWidth;
v___x_2660_ = lean_unsigned_to_nat(0u);
v___x_2661_ = l_Std_Format_pretty(v___x_2658_, v___x_2659_, v___x_2660_, v___x_2660_);
v___x_2662_ = lean_string_append(v___x_2655_, v___x_2661_);
lean_dec_ref(v___x_2661_);
v___x_2663_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___redArg___closed__4));
v___x_2664_ = lean_string_append(v___x_2662_, v___x_2663_);
v___x_2665_ = lean_box(0);
v___x_2666_ = l_List_mapTR_loop___redArg(v___f_2653_, v_cs_2643_, v___x_2665_);
v___x_2667_ = l_List_toString___redArg(v___x_2654_, v___x_2666_);
v___x_2668_ = lean_string_append(v___x_2664_, v___x_2667_);
lean_dec_ref(v___x_2667_);
v___x_2669_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2669_, 0, v___x_2668_);
v___x_2670_ = l_Lean_MessageData_ofFormat(v___x_2669_);
v___x_2671_ = l_Lean_throwErrorAt___redArg(v_inst_2640_, v_inst_2641_, v_id_2642_, v___x_2670_);
return v___x_2671_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous(lean_object* v_m_2672_, lean_object* v_inst_2673_, lean_object* v_inst_2674_, lean_object* v_id_2675_, lean_object* v_cs_2676_){
_start:
{
lean_object* v___x_2677_; 
v___x_2677_ = l_Lean_ensureNonAmbiguous___redArg(v_inst_2673_, v_inst_2674_, v_id_2675_, v_cs_2676_);
return v___x_2677_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___redArg___lam__0(lean_object* v_inst_2678_, lean_object* v_inst_2679_, lean_object* v_id_2680_, lean_object* v_____do__lift_2681_){
_start:
{
lean_object* v___x_2682_; 
v___x_2682_ = l_Lean_ensureNonAmbiguous___redArg(v_inst_2678_, v_inst_2679_, v_id_2680_, v_____do__lift_2681_);
return v___x_2682_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___redArg(lean_object* v_inst_2683_, lean_object* v_inst_2684_, lean_object* v_inst_2685_, lean_object* v_inst_2686_, lean_object* v_inst_2687_, lean_object* v_inst_2688_, lean_object* v_inst_2689_, lean_object* v_id_2690_){
_start:
{
lean_object* v_toBind_2691_; lean_object* v___f_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; 
v_toBind_2691_ = lean_ctor_get(v_inst_2683_, 1);
lean_inc(v_toBind_2691_);
lean_inc(v_id_2690_);
lean_inc_ref(v_inst_2689_);
lean_inc_ref(v_inst_2683_);
v___f_2692_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalConstNoOverload___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2692_, 0, v_inst_2683_);
lean_closure_set(v___f_2692_, 1, v_inst_2689_);
lean_closure_set(v___f_2692_, 2, v_id_2690_);
v___x_2693_ = l_Lean_resolveGlobalConst___redArg(v_inst_2683_, v_inst_2684_, v_inst_2685_, v_inst_2686_, v_inst_2687_, v_inst_2688_, v_inst_2689_, v_id_2690_);
v___x_2694_ = lean_apply_4(v_toBind_2691_, lean_box(0), lean_box(0), v___x_2693_, v___f_2692_);
return v___x_2694_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload(lean_object* v_m_2695_, lean_object* v_inst_2696_, lean_object* v_inst_2697_, lean_object* v_inst_2698_, lean_object* v_inst_2699_, lean_object* v_inst_2700_, lean_object* v_inst_2701_, lean_object* v_inst_2702_, lean_object* v_id_2703_){
_start:
{
lean_object* v___x_2704_; 
v___x_2704_ = l_Lean_resolveGlobalConstNoOverload___redArg(v_inst_2696_, v_inst_2697_, v_inst_2698_, v_inst_2699_, v_inst_2700_, v_inst_2701_, v_inst_2702_, v_id_2703_);
return v___x_2704_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0(lean_object* v___f_2705_, lean_object* v___f_2706_, uint8_t v_globalDeclFoundNext_2707_, uint8_t v_globalDeclFound_2708_, lean_object* v_r_2709_){
_start:
{
lean_object* v___x_2710_; lean_object* v_r_2711_; uint8_t v___x_2712_; 
v___x_2710_ = lean_box(0);
v_r_2711_ = l_List_filterTR_loop___redArg(v___f_2705_, v_r_2709_, v___x_2710_);
v___x_2712_ = l_List_isEmpty___redArg(v_r_2711_);
lean_dec(v_r_2711_);
if (v___x_2712_ == 0)
{
lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; 
v___x_2713_ = lean_box(0);
v___x_2714_ = lean_box(v_globalDeclFoundNext_2707_);
v___x_2715_ = lean_apply_2(v___f_2706_, v___x_2713_, v___x_2714_);
return v___x_2715_;
}
else
{
lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; 
v___x_2716_ = lean_box(0);
v___x_2717_ = lean_box(v_globalDeclFound_2708_);
v___x_2718_ = lean_apply_2(v___f_2706_, v___x_2716_, v___x_2717_);
return v___x_2718_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0___boxed(lean_object* v___f_2719_, lean_object* v___f_2720_, lean_object* v_globalDeclFoundNext_2721_, lean_object* v_globalDeclFound_2722_, lean_object* v_r_2723_){
_start:
{
uint8_t v_globalDeclFoundNext_boxed_2724_; uint8_t v_globalDeclFound_boxed_2725_; lean_object* v_res_2726_; 
v_globalDeclFoundNext_boxed_2724_ = lean_unbox(v_globalDeclFoundNext_2721_);
v_globalDeclFound_boxed_2725_ = lean_unbox(v_globalDeclFound_2722_);
v_res_2726_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0(v___f_2719_, v___f_2720_, v_globalDeclFoundNext_boxed_2724_, v_globalDeclFound_boxed_2725_, v_r_2723_);
return v_res_2726_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1___boxed(lean_object* v_str_2727_, lean_object* v_projs_2728_, lean_object* v_inst_2729_, lean_object* v_inst_2730_, lean_object* v_inst_2731_, lean_object* v_inst_2732_, lean_object* v_inst_2733_, lean_object* v_inst_2734_, lean_object* v_view_2735_, lean_object* v_findLocalDecl_x3f_2736_, lean_object* v_pre_2737_, lean_object* v_____r_2738_, lean_object* v_globalDeclFoundNext_2739_){
_start:
{
uint8_t v_globalDeclFoundNext_boxed_2740_; lean_object* v_res_2741_; 
v_globalDeclFoundNext_boxed_2740_ = lean_unbox(v_globalDeclFoundNext_2739_);
v_res_2741_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1(v_str_2727_, v_projs_2728_, v_inst_2729_, v_inst_2730_, v_inst_2731_, v_inst_2732_, v_inst_2733_, v_inst_2734_, v_view_2735_, v_findLocalDecl_x3f_2736_, v_pre_2737_, v_____r_2738_, v_globalDeclFoundNext_boxed_2740_);
return v_res_2741_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(lean_object* v_inst_2742_, lean_object* v_inst_2743_, lean_object* v_inst_2744_, lean_object* v_inst_2745_, lean_object* v_inst_2746_, lean_object* v_inst_2747_, lean_object* v_view_2748_, lean_object* v_findLocalDecl_x3f_2749_, lean_object* v_n_2750_, lean_object* v_projs_2751_, uint8_t v_globalDeclFound_2752_){
_start:
{
lean_object* v_toApplicative_2753_; lean_object* v_imported_2754_; lean_object* v_ctx_2755_; lean_object* v_scopes_2756_; lean_object* v_toBind_2757_; lean_object* v_toPure_2758_; lean_object* v___f_2759_; lean_object* v_givenNameView_2760_; uint8_t v___y_2762_; 
v_toApplicative_2753_ = lean_ctor_get(v_inst_2742_, 0);
v_imported_2754_ = lean_ctor_get(v_view_2748_, 1);
v_ctx_2755_ = lean_ctor_get(v_view_2748_, 2);
v_scopes_2756_ = lean_ctor_get(v_view_2748_, 3);
v_toBind_2757_ = lean_ctor_get(v_inst_2742_, 1);
v_toPure_2758_ = lean_ctor_get(v_toApplicative_2753_, 1);
v___f_2759_ = ((lean_object*)(l_Lean_filterFieldList___redArg___closed__0));
lean_inc(v_scopes_2756_);
lean_inc(v_ctx_2755_);
lean_inc(v_imported_2754_);
lean_inc(v_n_2750_);
v_givenNameView_2760_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_givenNameView_2760_, 0, v_n_2750_);
lean_ctor_set(v_givenNameView_2760_, 1, v_imported_2754_);
lean_ctor_set(v_givenNameView_2760_, 2, v_ctx_2755_);
lean_ctor_set(v_givenNameView_2760_, 3, v_scopes_2756_);
if (v_globalDeclFound_2752_ == 0)
{
v___y_2762_ = v_globalDeclFound_2752_;
goto v___jp_2761_;
}
else
{
uint8_t v___x_2798_; 
v___x_2798_ = l_List_isEmpty___redArg(v_projs_2751_);
if (v___x_2798_ == 0)
{
v___y_2762_ = v_globalDeclFound_2752_;
goto v___jp_2761_;
}
else
{
uint8_t v___x_2799_; 
v___x_2799_ = 0;
v___y_2762_ = v___x_2799_;
goto v___jp_2761_;
}
}
v___jp_2761_:
{
lean_object* v___x_2763_; lean_object* v___x_2764_; 
v___x_2763_ = lean_box(v___y_2762_);
lean_inc_ref(v_findLocalDecl_x3f_2749_);
lean_inc_ref(v_givenNameView_2760_);
v___x_2764_ = lean_apply_2(v_findLocalDecl_x3f_2749_, v_givenNameView_2760_, v___x_2763_);
if (lean_obj_tag(v___x_2764_) == 0)
{
if (lean_obj_tag(v_n_2750_) == 1)
{
lean_object* v_pre_2765_; lean_object* v_str_2766_; lean_object* v___f_2767_; 
v_pre_2765_ = lean_ctor_get(v_n_2750_, 0);
lean_inc_n(v_pre_2765_, 2);
v_str_2766_ = lean_ctor_get(v_n_2750_, 1);
lean_inc_ref_n(v_str_2766_, 2);
lean_dec_ref_known(v_n_2750_, 2);
lean_inc_ref(v_findLocalDecl_x3f_2749_);
lean_inc_ref(v_view_2748_);
lean_inc(v_inst_2747_);
lean_inc_ref(v_inst_2746_);
lean_inc_ref(v_inst_2745_);
lean_inc_ref(v_inst_2744_);
lean_inc_ref(v_inst_2743_);
lean_inc_ref(v_inst_2742_);
lean_inc(v_projs_2751_);
v___f_2767_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1___boxed), 13, 11);
lean_closure_set(v___f_2767_, 0, v_str_2766_);
lean_closure_set(v___f_2767_, 1, v_projs_2751_);
lean_closure_set(v___f_2767_, 2, v_inst_2742_);
lean_closure_set(v___f_2767_, 3, v_inst_2743_);
lean_closure_set(v___f_2767_, 4, v_inst_2744_);
lean_closure_set(v___f_2767_, 5, v_inst_2745_);
lean_closure_set(v___f_2767_, 6, v_inst_2746_);
lean_closure_set(v___f_2767_, 7, v_inst_2747_);
lean_closure_set(v___f_2767_, 8, v_view_2748_);
lean_closure_set(v___f_2767_, 9, v_findLocalDecl_x3f_2749_);
lean_closure_set(v___f_2767_, 10, v_pre_2765_);
if (v_globalDeclFound_2752_ == 0)
{
uint8_t v_globalDeclFoundNext_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___f_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; 
lean_inc(v_toBind_2757_);
lean_dec_ref(v_str_2766_);
lean_dec(v_pre_2765_);
lean_dec(v_projs_2751_);
lean_dec_ref(v_findLocalDecl_x3f_2749_);
lean_dec_ref(v_view_2748_);
v_globalDeclFoundNext_2768_ = 1;
v___x_2769_ = lean_box(v_globalDeclFoundNext_2768_);
v___x_2770_ = lean_box(v_globalDeclFound_2752_);
v___f_2771_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2771_, 0, v___f_2759_);
lean_closure_set(v___f_2771_, 1, v___f_2767_);
lean_closure_set(v___f_2771_, 2, v___x_2769_);
lean_closure_set(v___f_2771_, 3, v___x_2770_);
v___x_2772_ = l_Lean_MacroScopesView_review(v_givenNameView_2760_);
v___x_2773_ = l_Lean_resolveGlobalName___redArg(v_inst_2742_, v_inst_2743_, v_inst_2744_, v_inst_2745_, v_inst_2746_, v_inst_2747_, v___x_2772_, v_globalDeclFound_2752_);
v___x_2774_ = lean_apply_4(v_toBind_2757_, lean_box(0), lean_box(0), v___x_2773_, v___f_2771_);
return v___x_2774_;
}
else
{
lean_object* v___x_2775_; lean_object* v___x_2776_; 
lean_dec_ref(v___f_2767_);
lean_dec_ref_known(v_givenNameView_2760_, 4);
v___x_2775_ = lean_box(0);
v___x_2776_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1(v_str_2766_, v_projs_2751_, v_inst_2742_, v_inst_2743_, v_inst_2744_, v_inst_2745_, v_inst_2746_, v_inst_2747_, v_view_2748_, v_findLocalDecl_x3f_2749_, v_pre_2765_, v___x_2775_, v_globalDeclFound_2752_);
return v___x_2776_;
}
}
else
{
lean_object* v___x_2777_; lean_object* v___x_2778_; 
lean_inc(v_toPure_2758_);
lean_dec_ref_known(v_givenNameView_2760_, 4);
lean_dec(v_projs_2751_);
lean_dec(v_n_2750_);
lean_dec_ref(v_findLocalDecl_x3f_2749_);
lean_dec_ref(v_view_2748_);
lean_dec(v_inst_2747_);
lean_dec_ref(v_inst_2746_);
lean_dec_ref(v_inst_2745_);
lean_dec_ref(v_inst_2744_);
lean_dec_ref(v_inst_2743_);
lean_dec_ref(v_inst_2742_);
v___x_2777_ = lean_box(0);
v___x_2778_ = lean_apply_2(v_toPure_2758_, lean_box(0), v___x_2777_);
return v___x_2778_;
}
}
else
{
lean_object* v___x_2780_; uint8_t v_isShared_2781_; uint8_t v_isSharedCheck_2795_; 
lean_inc(v_toPure_2758_);
lean_dec_ref_known(v_givenNameView_2760_, 4);
lean_dec(v_n_2750_);
lean_dec_ref(v_findLocalDecl_x3f_2749_);
lean_dec_ref(v_view_2748_);
lean_dec(v_inst_2747_);
lean_dec_ref(v_inst_2746_);
lean_dec_ref(v_inst_2745_);
lean_dec_ref(v_inst_2744_);
lean_dec_ref(v_inst_2743_);
v_isSharedCheck_2795_ = !lean_is_exclusive(v_inst_2742_);
if (v_isSharedCheck_2795_ == 0)
{
lean_object* v_unused_2796_; lean_object* v_unused_2797_; 
v_unused_2796_ = lean_ctor_get(v_inst_2742_, 1);
lean_dec(v_unused_2796_);
v_unused_2797_ = lean_ctor_get(v_inst_2742_, 0);
lean_dec(v_unused_2797_);
v___x_2780_ = v_inst_2742_;
v_isShared_2781_ = v_isSharedCheck_2795_;
goto v_resetjp_2779_;
}
else
{
lean_dec(v_inst_2742_);
v___x_2780_ = lean_box(0);
v_isShared_2781_ = v_isSharedCheck_2795_;
goto v_resetjp_2779_;
}
v_resetjp_2779_:
{
lean_object* v_val_2782_; lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2794_; 
v_val_2782_ = lean_ctor_get(v___x_2764_, 0);
v_isSharedCheck_2794_ = !lean_is_exclusive(v___x_2764_);
if (v_isSharedCheck_2794_ == 0)
{
v___x_2784_ = v___x_2764_;
v_isShared_2785_ = v_isSharedCheck_2794_;
goto v_resetjp_2783_;
}
else
{
lean_inc(v_val_2782_);
lean_dec(v___x_2764_);
v___x_2784_ = lean_box(0);
v_isShared_2785_ = v_isSharedCheck_2794_;
goto v_resetjp_2783_;
}
v_resetjp_2783_:
{
lean_object* v___x_2786_; lean_object* v___x_2788_; 
v___x_2786_ = l_Lean_LocalDecl_toExpr(v_val_2782_);
if (v_isShared_2781_ == 0)
{
lean_ctor_set(v___x_2780_, 1, v_projs_2751_);
lean_ctor_set(v___x_2780_, 0, v___x_2786_);
v___x_2788_ = v___x_2780_;
goto v_reusejp_2787_;
}
else
{
lean_object* v_reuseFailAlloc_2793_; 
v_reuseFailAlloc_2793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2793_, 0, v___x_2786_);
lean_ctor_set(v_reuseFailAlloc_2793_, 1, v_projs_2751_);
v___x_2788_ = v_reuseFailAlloc_2793_;
goto v_reusejp_2787_;
}
v_reusejp_2787_:
{
lean_object* v___x_2790_; 
if (v_isShared_2785_ == 0)
{
lean_ctor_set(v___x_2784_, 0, v___x_2788_);
v___x_2790_ = v___x_2784_;
goto v_reusejp_2789_;
}
else
{
lean_object* v_reuseFailAlloc_2792_; 
v_reuseFailAlloc_2792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2792_, 0, v___x_2788_);
v___x_2790_ = v_reuseFailAlloc_2792_;
goto v_reusejp_2789_;
}
v_reusejp_2789_:
{
lean_object* v___x_2791_; 
v___x_2791_ = lean_apply_2(v_toPure_2758_, lean_box(0), v___x_2790_);
return v___x_2791_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1(lean_object* v_str_2800_, lean_object* v_projs_2801_, lean_object* v_inst_2802_, lean_object* v_inst_2803_, lean_object* v_inst_2804_, lean_object* v_inst_2805_, lean_object* v_inst_2806_, lean_object* v_inst_2807_, lean_object* v_view_2808_, lean_object* v_findLocalDecl_x3f_2809_, lean_object* v_pre_2810_, lean_object* v_____r_2811_, uint8_t v_globalDeclFoundNext_2812_){
_start:
{
lean_object* v___x_2813_; lean_object* v___x_2814_; 
v___x_2813_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2813_, 0, v_str_2800_);
lean_ctor_set(v___x_2813_, 1, v_projs_2801_);
v___x_2814_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(v_inst_2802_, v_inst_2803_, v_inst_2804_, v_inst_2805_, v_inst_2806_, v_inst_2807_, v_view_2808_, v_findLocalDecl_x3f_2809_, v_pre_2810_, v___x_2813_, v_globalDeclFoundNext_2812_);
return v___x_2814_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___boxed(lean_object* v_inst_2815_, lean_object* v_inst_2816_, lean_object* v_inst_2817_, lean_object* v_inst_2818_, lean_object* v_inst_2819_, lean_object* v_inst_2820_, lean_object* v_view_2821_, lean_object* v_findLocalDecl_x3f_2822_, lean_object* v_n_2823_, lean_object* v_projs_2824_, lean_object* v_globalDeclFound_2825_){
_start:
{
uint8_t v_globalDeclFound_boxed_2826_; lean_object* v_res_2827_; 
v_globalDeclFound_boxed_2826_ = lean_unbox(v_globalDeclFound_2825_);
v_res_2827_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(v_inst_2815_, v_inst_2816_, v_inst_2817_, v_inst_2818_, v_inst_2819_, v_inst_2820_, v_view_2821_, v_findLocalDecl_x3f_2822_, v_n_2823_, v_projs_2824_, v_globalDeclFound_boxed_2826_);
return v_res_2827_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop(lean_object* v_m_2828_, lean_object* v_inst_2829_, lean_object* v_inst_2830_, lean_object* v_inst_2831_, lean_object* v_inst_2832_, lean_object* v_inst_2833_, lean_object* v_inst_2834_, lean_object* v_view_2835_, lean_object* v_findLocalDecl_x3f_2836_, lean_object* v_n_2837_, lean_object* v_projs_2838_, uint8_t v_globalDeclFound_2839_){
_start:
{
lean_object* v___x_2840_; 
v___x_2840_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(v_inst_2829_, v_inst_2830_, v_inst_2831_, v_inst_2832_, v_inst_2833_, v_inst_2834_, v_view_2835_, v_findLocalDecl_x3f_2836_, v_n_2837_, v_projs_2838_, v_globalDeclFound_2839_);
return v___x_2840_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___boxed(lean_object* v_m_2841_, lean_object* v_inst_2842_, lean_object* v_inst_2843_, lean_object* v_inst_2844_, lean_object* v_inst_2845_, lean_object* v_inst_2846_, lean_object* v_inst_2847_, lean_object* v_view_2848_, lean_object* v_findLocalDecl_x3f_2849_, lean_object* v_n_2850_, lean_object* v_projs_2851_, lean_object* v_globalDeclFound_2852_){
_start:
{
uint8_t v_globalDeclFound_boxed_2853_; lean_object* v_res_2854_; 
v_globalDeclFound_boxed_2853_ = lean_unbox(v_globalDeclFound_2852_);
v_res_2854_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop(v_m_2841_, v_inst_2842_, v_inst_2843_, v_inst_2844_, v_inst_2845_, v_inst_2846_, v_inst_2847_, v_view_2848_, v_findLocalDecl_x3f_2849_, v_n_2850_, v_projs_2851_, v_globalDeclFound_boxed_2853_);
return v_res_2854_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(lean_object* v_localDecl_2855_, lean_object* v_givenNameView_2856_, lean_object* v_fullDeclName_2857_, lean_object* v_ns_2858_){
_start:
{
lean_object* v_name_2859_; lean_object* v_imported_2860_; lean_object* v_ctx_2861_; lean_object* v_scopes_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; uint8_t v___x_2866_; 
v_name_2859_ = lean_ctor_get(v_givenNameView_2856_, 0);
v_imported_2860_ = lean_ctor_get(v_givenNameView_2856_, 1);
v_ctx_2861_ = lean_ctor_get(v_givenNameView_2856_, 2);
v_scopes_2862_ = lean_ctor_get(v_givenNameView_2856_, 3);
lean_inc(v_name_2859_);
lean_inc(v_ns_2858_);
v___x_2863_ = l_Lean_Name_append(v_ns_2858_, v_name_2859_);
lean_inc(v_scopes_2862_);
lean_inc(v_ctx_2861_);
lean_inc(v_imported_2860_);
v___x_2864_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2864_, 0, v___x_2863_);
lean_ctor_set(v___x_2864_, 1, v_imported_2860_);
lean_ctor_set(v___x_2864_, 2, v_ctx_2861_);
lean_ctor_set(v___x_2864_, 3, v_scopes_2862_);
v___x_2865_ = l_Lean_MacroScopesView_review(v___x_2864_);
v___x_2866_ = lean_name_eq(v___x_2865_, v_fullDeclName_2857_);
lean_dec(v___x_2865_);
if (v___x_2866_ == 0)
{
if (lean_obj_tag(v_ns_2858_) == 1)
{
lean_object* v_pre_2867_; 
v_pre_2867_ = lean_ctor_get(v_ns_2858_, 0);
lean_inc(v_pre_2867_);
lean_dec_ref_known(v_ns_2858_, 2);
v_ns_2858_ = v_pre_2867_;
goto _start;
}
else
{
lean_object* v___x_2869_; 
lean_dec(v_ns_2858_);
lean_dec_ref(v_givenNameView_2856_);
lean_dec_ref(v_localDecl_2855_);
v___x_2869_ = lean_box(0);
return v___x_2869_;
}
}
else
{
lean_object* v___x_2870_; 
lean_dec(v_ns_2858_);
lean_dec_ref(v_givenNameView_2856_);
v___x_2870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2870_, 0, v_localDecl_2855_);
return v___x_2870_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_go___boxed(lean_object* v_localDecl_2871_, lean_object* v_givenNameView_2872_, lean_object* v_fullDeclName_2873_, lean_object* v_ns_2874_){
_start:
{
lean_object* v_res_2875_; 
v_res_2875_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(v_localDecl_2871_, v_givenNameView_2872_, v_fullDeclName_2873_, v_ns_2874_);
lean_dec(v_fullDeclName_2873_);
return v_res_2875_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__0(lean_object* v_localDecl_2876_, lean_object* v_givenName_2877_){
_start:
{
lean_object* v___x_2878_; uint8_t v___x_2879_; 
v___x_2878_ = l_Lean_LocalDecl_userName(v_localDecl_2876_);
v___x_2879_ = lean_name_eq(v___x_2878_, v_givenName_2877_);
lean_dec(v___x_2878_);
if (v___x_2879_ == 0)
{
lean_object* v___x_2880_; 
lean_dec_ref(v_localDecl_2876_);
v___x_2880_ = lean_box(0);
return v___x_2880_;
}
else
{
lean_object* v___x_2881_; 
v___x_2881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2881_, 0, v_localDecl_2876_);
return v___x_2881_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__0___boxed(lean_object* v_localDecl_2882_, lean_object* v_givenName_2883_){
_start:
{
lean_object* v_res_2884_; 
v_res_2884_ = l_Lean_resolveLocalName___redArg___lam__0(v_localDecl_2882_, v_givenName_2883_);
lean_dec(v_givenName_2883_);
return v_res_2884_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__1(lean_object* v_matchLocalDecl_x3f_2885_, lean_object* v_givenName_2886_, uint8_t v_skipAuxDecl_2887_, lean_object* v___f_2888_, lean_object* v_auxDeclToFullName_2889_, lean_object* v_currNamespace_2890_, lean_object* v_givenNameView_2891_, lean_object* v_x_2892_){
_start:
{
if (lean_obj_tag(v_x_2892_) == 0)
{
lean_dec_ref(v_givenNameView_2891_);
lean_dec(v_currNamespace_2890_);
lean_dec(v_auxDeclToFullName_2889_);
lean_dec_ref(v___f_2888_);
lean_dec(v_givenName_2886_);
lean_dec_ref(v_matchLocalDecl_x3f_2885_);
return v_x_2892_;
}
else
{
lean_object* v_val_2893_; uint8_t v___x_2894_; 
v_val_2893_ = lean_ctor_get(v_x_2892_, 0);
v___x_2894_ = l_Lean_LocalDecl_isAuxDecl(v_val_2893_);
if (v___x_2894_ == 0)
{
lean_object* v___x_2895_; 
lean_inc(v_val_2893_);
lean_dec_ref_known(v_x_2892_, 1);
lean_dec_ref(v_givenNameView_2891_);
lean_dec(v_currNamespace_2890_);
lean_dec(v_auxDeclToFullName_2889_);
lean_dec_ref(v___f_2888_);
v___x_2895_ = lean_apply_2(v_matchLocalDecl_x3f_2885_, v_val_2893_, v_givenName_2886_);
return v___x_2895_;
}
else
{
if (v_skipAuxDecl_2887_ == 0)
{
lean_object* v___x_2896_; lean_object* v___x_2897_; 
v___x_2896_ = l_Lean_LocalDecl_fvarId(v_val_2893_);
v___x_2897_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(v___f_2888_, v_auxDeclToFullName_2889_, v___x_2896_);
if (lean_obj_tag(v___x_2897_) == 1)
{
lean_object* v_val_2898_; lean_object* v_fullDeclView_2899_; lean_object* v_name_2900_; lean_object* v_imported_2901_; lean_object* v_ctx_2902_; lean_object* v_scopes_2903_; lean_object* v___x_2905_; uint8_t v_isShared_2906_; uint8_t v_isSharedCheck_2923_; 
lean_dec(v_givenName_2886_);
lean_dec_ref(v_matchLocalDecl_x3f_2885_);
v_val_2898_ = lean_ctor_get(v___x_2897_, 0);
lean_inc(v_val_2898_);
lean_dec_ref_known(v___x_2897_, 1);
v_fullDeclView_2899_ = l_Lean_extractMacroScopes(v_val_2898_);
v_name_2900_ = lean_ctor_get(v_fullDeclView_2899_, 0);
v_imported_2901_ = lean_ctor_get(v_fullDeclView_2899_, 1);
v_ctx_2902_ = lean_ctor_get(v_fullDeclView_2899_, 2);
v_scopes_2903_ = lean_ctor_get(v_fullDeclView_2899_, 3);
v_isSharedCheck_2923_ = !lean_is_exclusive(v_fullDeclView_2899_);
if (v_isSharedCheck_2923_ == 0)
{
v___x_2905_ = v_fullDeclView_2899_;
v_isShared_2906_ = v_isSharedCheck_2923_;
goto v_resetjp_2904_;
}
else
{
lean_inc(v_scopes_2903_);
lean_inc(v_ctx_2902_);
lean_inc(v_imported_2901_);
lean_inc(v_name_2900_);
lean_dec(v_fullDeclView_2899_);
v___x_2905_ = lean_box(0);
v_isShared_2906_ = v_isSharedCheck_2923_;
goto v_resetjp_2904_;
}
v_resetjp_2904_:
{
lean_object* v___y_2908_; lean_object* v___x_2921_; 
lean_inc(v_name_2900_);
v___x_2921_ = l_Lean_privateToUserName_x3f(v_name_2900_);
if (lean_obj_tag(v___x_2921_) == 0)
{
v___y_2908_ = v_name_2900_;
goto v___jp_2907_;
}
else
{
lean_object* v_val_2922_; 
lean_dec(v_name_2900_);
v_val_2922_ = lean_ctor_get(v___x_2921_, 0);
lean_inc(v_val_2922_);
lean_dec_ref_known(v___x_2921_, 1);
v___y_2908_ = v_val_2922_;
goto v___jp_2907_;
}
v___jp_2907_:
{
lean_object* v_fullDeclView_2910_; 
if (v_isShared_2906_ == 0)
{
lean_ctor_set(v___x_2905_, 0, v___y_2908_);
v_fullDeclView_2910_ = v___x_2905_;
goto v_reusejp_2909_;
}
else
{
lean_object* v_reuseFailAlloc_2920_; 
v_reuseFailAlloc_2920_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2920_, 0, v___y_2908_);
lean_ctor_set(v_reuseFailAlloc_2920_, 1, v_imported_2901_);
lean_ctor_set(v_reuseFailAlloc_2920_, 2, v_ctx_2902_);
lean_ctor_set(v_reuseFailAlloc_2920_, 3, v_scopes_2903_);
v_fullDeclView_2910_ = v_reuseFailAlloc_2920_;
goto v_reusejp_2909_;
}
v_reusejp_2909_:
{
lean_object* v_fullDeclName_2911_; uint8_t v___x_2912_; 
lean_inc_ref(v_fullDeclView_2910_);
v_fullDeclName_2911_ = l_Lean_MacroScopesView_review(v_fullDeclView_2910_);
v___x_2912_ = l_Lean_Name_isPrefixOf(v_currNamespace_2890_, v_fullDeclName_2911_);
if (v___x_2912_ == 0)
{
lean_object* v___x_2913_; 
lean_inc(v_val_2893_);
lean_dec_ref(v_fullDeclView_2910_);
lean_dec_ref_known(v_x_2892_, 1);
v___x_2913_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(v_val_2893_, v_givenNameView_2891_, v_fullDeclName_2911_, v_currNamespace_2890_);
lean_dec(v_fullDeclName_2911_);
return v___x_2913_;
}
else
{
lean_object* v___x_2914_; lean_object* v_localDeclNameView_2915_; uint8_t v___x_2916_; 
lean_dec(v_fullDeclName_2911_);
lean_dec(v_currNamespace_2890_);
v___x_2914_ = l_Lean_LocalDecl_userName(v_val_2893_);
v_localDeclNameView_2915_ = l_Lean_extractMacroScopes(v___x_2914_);
v___x_2916_ = l_Lean_MacroScopesView_isSuffixOf(v_localDeclNameView_2915_, v_givenNameView_2891_);
lean_dec_ref(v_localDeclNameView_2915_);
if (v___x_2916_ == 0)
{
lean_object* v___x_2917_; 
lean_dec_ref(v_fullDeclView_2910_);
lean_dec_ref_known(v_x_2892_, 1);
lean_dec_ref(v_givenNameView_2891_);
v___x_2917_ = lean_box(0);
return v___x_2917_;
}
else
{
uint8_t v___x_2918_; 
v___x_2918_ = l_Lean_MacroScopesView_isSuffixOf(v_givenNameView_2891_, v_fullDeclView_2910_);
lean_dec_ref(v_fullDeclView_2910_);
lean_dec_ref(v_givenNameView_2891_);
if (v___x_2918_ == 0)
{
lean_object* v___x_2919_; 
lean_dec_ref_known(v_x_2892_, 1);
v___x_2919_ = lean_box(0);
return v___x_2919_;
}
else
{
return v_x_2892_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2924_; 
lean_inc(v_val_2893_);
lean_dec(v___x_2897_);
lean_dec_ref_known(v_x_2892_, 1);
lean_dec_ref(v_givenNameView_2891_);
lean_dec(v_currNamespace_2890_);
v___x_2924_ = lean_apply_2(v_matchLocalDecl_x3f_2885_, v_val_2893_, v_givenName_2886_);
return v___x_2924_;
}
}
else
{
lean_object* v___x_2925_; 
lean_dec_ref_known(v_x_2892_, 1);
lean_dec_ref(v_givenNameView_2891_);
lean_dec(v_currNamespace_2890_);
lean_dec(v_auxDeclToFullName_2889_);
lean_dec_ref(v___f_2888_);
lean_dec(v_givenName_2886_);
lean_dec_ref(v_matchLocalDecl_x3f_2885_);
v___x_2925_ = lean_box(0);
return v___x_2925_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__1___boxed(lean_object* v_matchLocalDecl_x3f_2926_, lean_object* v_givenName_2927_, lean_object* v_skipAuxDecl_2928_, lean_object* v___f_2929_, lean_object* v_auxDeclToFullName_2930_, lean_object* v_currNamespace_2931_, lean_object* v_givenNameView_2932_, lean_object* v_x_2933_){
_start:
{
uint8_t v_skipAuxDecl_boxed_2934_; lean_object* v_res_2935_; 
v_skipAuxDecl_boxed_2934_ = lean_unbox(v_skipAuxDecl_2928_);
v_res_2935_ = l_Lean_resolveLocalName___redArg___lam__1(v_matchLocalDecl_x3f_2926_, v_givenName_2927_, v_skipAuxDecl_boxed_2934_, v___f_2929_, v_auxDeclToFullName_2930_, v_currNamespace_2931_, v_givenNameView_2932_, v_x_2933_);
return v_res_2935_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__2(lean_object* v_localDecl_x3f_2936_, lean_object* v_matchLocalDecl_x3f_2937_, lean_object* v_givenName_2938_, lean_object* v_x_2939_){
_start:
{
if (lean_obj_tag(v_x_2939_) == 0)
{
lean_dec(v_givenName_2938_);
lean_dec_ref(v_matchLocalDecl_x3f_2937_);
return v_x_2939_;
}
else
{
lean_object* v_val_2940_; uint8_t v___x_2941_; 
v_val_2940_ = lean_ctor_get(v_x_2939_, 0);
lean_inc(v_val_2940_);
lean_dec_ref_known(v_x_2939_, 1);
v___x_2941_ = l_Lean_LocalDecl_isAuxDecl(v_val_2940_);
if (v___x_2941_ == 0)
{
lean_dec(v_val_2940_);
lean_dec(v_givenName_2938_);
lean_dec_ref(v_matchLocalDecl_x3f_2937_);
lean_inc(v_localDecl_x3f_2936_);
return v_localDecl_x3f_2936_;
}
else
{
lean_object* v___x_2942_; 
v___x_2942_ = lean_apply_2(v_matchLocalDecl_x3f_2937_, v_val_2940_, v_givenName_2938_);
return v___x_2942_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__2___boxed(lean_object* v_localDecl_x3f_2943_, lean_object* v_matchLocalDecl_x3f_2944_, lean_object* v_givenName_2945_, lean_object* v_x_2946_){
_start:
{
lean_object* v_res_2947_; 
v_res_2947_ = l_Lean_resolveLocalName___redArg___lam__2(v_localDecl_x3f_2943_, v_matchLocalDecl_x3f_2944_, v_givenName_2945_, v_x_2946_);
lean_dec(v_localDecl_x3f_2943_);
return v_res_2947_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__3(lean_object* v_lctx_2967_, lean_object* v_matchLocalDecl_x3f_2968_, lean_object* v___f_2969_, lean_object* v_auxDeclToFullName_2970_, lean_object* v_currNamespace_2971_, lean_object* v_givenNameView_2972_, uint8_t v_skipAuxDecl_2973_){
_start:
{
lean_object* v_decls_2974_; lean_object* v_givenName_2975_; lean_object* v___x_2976_; lean_object* v___f_2977_; lean_object* v___x_2978_; lean_object* v_localDecl_x3f_2979_; 
v_decls_2974_ = lean_ctor_get(v_lctx_2967_, 1);
lean_inc_ref_n(v_decls_2974_, 2);
lean_dec_ref(v_lctx_2967_);
lean_inc_ref(v_givenNameView_2972_);
v_givenName_2975_ = l_Lean_MacroScopesView_review(v_givenNameView_2972_);
v___x_2976_ = lean_box(v_skipAuxDecl_2973_);
lean_inc(v_givenName_2975_);
lean_inc_ref(v_matchLocalDecl_x3f_2968_);
v___f_2977_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_2977_, 0, v_matchLocalDecl_x3f_2968_);
lean_closure_set(v___f_2977_, 1, v_givenName_2975_);
lean_closure_set(v___f_2977_, 2, v___x_2976_);
lean_closure_set(v___f_2977_, 3, v___f_2969_);
lean_closure_set(v___f_2977_, 4, v_auxDeclToFullName_2970_);
lean_closure_set(v___f_2977_, 5, v_currNamespace_2971_);
lean_closure_set(v___f_2977_, 6, v_givenNameView_2972_);
v___x_2978_ = ((lean_object*)(l_Lean_resolveLocalName___redArg___lam__3___closed__9));
v_localDecl_x3f_2979_ = l_Lean_PersistentArray_findSomeRevM_x3f___redArg(v___x_2978_, v_decls_2974_, v___f_2977_);
if (lean_obj_tag(v_localDecl_x3f_2979_) == 0)
{
if (v_skipAuxDecl_2973_ == 0)
{
lean_object* v___f_2980_; lean_object* v___x_2981_; 
v___f_2980_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_2980_, 0, v_localDecl_x3f_2979_);
lean_closure_set(v___f_2980_, 1, v_matchLocalDecl_x3f_2968_);
lean_closure_set(v___f_2980_, 2, v_givenName_2975_);
v___x_2981_ = l_Lean_PersistentArray_findSomeRevM_x3f___redArg(v___x_2978_, v_decls_2974_, v___f_2980_);
return v___x_2981_;
}
else
{
lean_dec(v_givenName_2975_);
lean_dec_ref(v_decls_2974_);
lean_dec_ref(v_matchLocalDecl_x3f_2968_);
return v_localDecl_x3f_2979_;
}
}
else
{
lean_dec(v_givenName_2975_);
lean_dec_ref(v_decls_2974_);
lean_dec_ref(v_matchLocalDecl_x3f_2968_);
return v_localDecl_x3f_2979_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__3___boxed(lean_object* v_lctx_2982_, lean_object* v_matchLocalDecl_x3f_2983_, lean_object* v___f_2984_, lean_object* v_auxDeclToFullName_2985_, lean_object* v_currNamespace_2986_, lean_object* v_givenNameView_2987_, lean_object* v_skipAuxDecl_2988_){
_start:
{
uint8_t v_skipAuxDecl_boxed_2989_; lean_object* v_res_2990_; 
v_skipAuxDecl_boxed_2989_ = lean_unbox(v_skipAuxDecl_2988_);
v_res_2990_ = l_Lean_resolveLocalName___redArg___lam__3(v_lctx_2982_, v_matchLocalDecl_x3f_2983_, v___f_2984_, v_auxDeclToFullName_2985_, v_currNamespace_2986_, v_givenNameView_2987_, v_skipAuxDecl_boxed_2989_);
return v_res_2990_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__4(lean_object* v_n_2991_, lean_object* v_lctx_2992_, lean_object* v_matchLocalDecl_x3f_2993_, lean_object* v___f_2994_, lean_object* v_auxDeclToFullName_2995_, lean_object* v_inst_2996_, lean_object* v_inst_2997_, lean_object* v_inst_2998_, lean_object* v_inst_2999_, lean_object* v_inst_3000_, lean_object* v_inst_3001_, lean_object* v_currNamespace_3002_){
_start:
{
lean_object* v_view_3003_; lean_object* v_name_3004_; lean_object* v_findLocalDecl_x3f_3005_; lean_object* v___x_3006_; uint8_t v___x_3007_; lean_object* v___x_3008_; 
v_view_3003_ = l_Lean_extractMacroScopes(v_n_2991_);
v_name_3004_ = lean_ctor_get(v_view_3003_, 0);
lean_inc(v_name_3004_);
v_findLocalDecl_x3f_3005_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__3___boxed), 7, 5);
lean_closure_set(v_findLocalDecl_x3f_3005_, 0, v_lctx_2992_);
lean_closure_set(v_findLocalDecl_x3f_3005_, 1, v_matchLocalDecl_x3f_2993_);
lean_closure_set(v_findLocalDecl_x3f_3005_, 2, v___f_2994_);
lean_closure_set(v_findLocalDecl_x3f_3005_, 3, v_auxDeclToFullName_2995_);
lean_closure_set(v_findLocalDecl_x3f_3005_, 4, v_currNamespace_3002_);
v___x_3006_ = lean_box(0);
v___x_3007_ = 0;
v___x_3008_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(v_inst_2996_, v_inst_2997_, v_inst_2998_, v_inst_2999_, v_inst_3000_, v_inst_3001_, v_view_3003_, v_findLocalDecl_x3f_3005_, v_name_3004_, v___x_3006_, v___x_3007_);
return v___x_3008_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__5(lean_object* v_inst_3009_, lean_object* v_n_3010_, lean_object* v_lctx_3011_, lean_object* v_matchLocalDecl_x3f_3012_, lean_object* v___f_3013_, lean_object* v_inst_3014_, lean_object* v_inst_3015_, lean_object* v_inst_3016_, lean_object* v_inst_3017_, lean_object* v_inst_3018_, lean_object* v_toBind_3019_, lean_object* v_____do__lift_3020_){
_start:
{
lean_object* v_auxDeclToFullName_3021_; lean_object* v_getCurrNamespace_3022_; lean_object* v___f_3023_; lean_object* v___x_3024_; 
v_auxDeclToFullName_3021_ = lean_ctor_get(v_____do__lift_3020_, 2);
lean_inc(v_auxDeclToFullName_3021_);
lean_dec_ref(v_____do__lift_3020_);
v_getCurrNamespace_3022_ = lean_ctor_get(v_inst_3009_, 0);
lean_inc(v_getCurrNamespace_3022_);
v___f_3023_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__4), 12, 11);
lean_closure_set(v___f_3023_, 0, v_n_3010_);
lean_closure_set(v___f_3023_, 1, v_lctx_3011_);
lean_closure_set(v___f_3023_, 2, v_matchLocalDecl_x3f_3012_);
lean_closure_set(v___f_3023_, 3, v___f_3013_);
lean_closure_set(v___f_3023_, 4, v_auxDeclToFullName_3021_);
lean_closure_set(v___f_3023_, 5, v_inst_3014_);
lean_closure_set(v___f_3023_, 6, v_inst_3009_);
lean_closure_set(v___f_3023_, 7, v_inst_3015_);
lean_closure_set(v___f_3023_, 8, v_inst_3016_);
lean_closure_set(v___f_3023_, 9, v_inst_3017_);
lean_closure_set(v___f_3023_, 10, v_inst_3018_);
v___x_3024_ = lean_apply_4(v_toBind_3019_, lean_box(0), lean_box(0), v_getCurrNamespace_3022_, v___f_3023_);
return v___x_3024_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__6(lean_object* v_inst_3025_, lean_object* v_n_3026_, lean_object* v_matchLocalDecl_x3f_3027_, lean_object* v___f_3028_, lean_object* v_inst_3029_, lean_object* v_inst_3030_, lean_object* v_inst_3031_, lean_object* v_inst_3032_, lean_object* v_inst_3033_, lean_object* v_toBind_3034_, lean_object* v_inst_3035_, lean_object* v_lctx_3036_){
_start:
{
lean_object* v___f_3037_; lean_object* v___x_3038_; 
lean_inc(v_toBind_3034_);
v___f_3037_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__5), 12, 11);
lean_closure_set(v___f_3037_, 0, v_inst_3025_);
lean_closure_set(v___f_3037_, 1, v_n_3026_);
lean_closure_set(v___f_3037_, 2, v_lctx_3036_);
lean_closure_set(v___f_3037_, 3, v_matchLocalDecl_x3f_3027_);
lean_closure_set(v___f_3037_, 4, v___f_3028_);
lean_closure_set(v___f_3037_, 5, v_inst_3029_);
lean_closure_set(v___f_3037_, 6, v_inst_3030_);
lean_closure_set(v___f_3037_, 7, v_inst_3031_);
lean_closure_set(v___f_3037_, 8, v_inst_3032_);
lean_closure_set(v___f_3037_, 9, v_inst_3033_);
lean_closure_set(v___f_3037_, 10, v_toBind_3034_);
v___x_3038_ = lean_apply_4(v_toBind_3034_, lean_box(0), lean_box(0), v_inst_3035_, v___f_3037_);
return v___x_3038_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg(lean_object* v_inst_3041_, lean_object* v_inst_3042_, lean_object* v_inst_3043_, lean_object* v_inst_3044_, lean_object* v_inst_3045_, lean_object* v_inst_3046_, lean_object* v_inst_3047_, lean_object* v_n_3048_){
_start:
{
lean_object* v_toBind_3049_; lean_object* v___f_3050_; lean_object* v_matchLocalDecl_x3f_3051_; lean_object* v___f_3052_; lean_object* v___x_3053_; 
v_toBind_3049_ = lean_ctor_get(v_inst_3041_, 1);
lean_inc_n(v_toBind_3049_, 2);
v___f_3050_ = ((lean_object*)(l_Lean_resolveLocalName___redArg___closed__0));
v_matchLocalDecl_x3f_3051_ = ((lean_object*)(l_Lean_resolveLocalName___redArg___closed__1));
lean_inc(v_inst_3047_);
v___f_3052_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__6), 12, 11);
lean_closure_set(v___f_3052_, 0, v_inst_3042_);
lean_closure_set(v___f_3052_, 1, v_n_3048_);
lean_closure_set(v___f_3052_, 2, v_matchLocalDecl_x3f_3051_);
lean_closure_set(v___f_3052_, 3, v___f_3050_);
lean_closure_set(v___f_3052_, 4, v_inst_3041_);
lean_closure_set(v___f_3052_, 5, v_inst_3043_);
lean_closure_set(v___f_3052_, 6, v_inst_3044_);
lean_closure_set(v___f_3052_, 7, v_inst_3045_);
lean_closure_set(v___f_3052_, 8, v_inst_3046_);
lean_closure_set(v___f_3052_, 9, v_toBind_3049_);
lean_closure_set(v___f_3052_, 10, v_inst_3047_);
v___x_3053_ = lean_apply_4(v_toBind_3049_, lean_box(0), lean_box(0), v_inst_3047_, v___f_3052_);
return v___x_3053_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName(lean_object* v_m_3054_, lean_object* v_inst_3055_, lean_object* v_inst_3056_, lean_object* v_inst_3057_, lean_object* v_inst_3058_, lean_object* v_inst_3059_, lean_object* v_inst_3060_, lean_object* v_inst_3061_, lean_object* v_n_3062_){
_start:
{
lean_object* v___x_3063_; 
v___x_3063_ = l_Lean_resolveLocalName___redArg(v_inst_3055_, v_inst_3056_, v_inst_3057_, v_inst_3058_, v_inst_3059_, v_inst_3060_, v_inst_3061_, v_n_3062_);
return v___x_3063_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0(lean_object* v_toPure_3064_, uint8_t v_____do__lift_3065_){
_start:
{
lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; 
v___x_3066_ = lean_box(v_____do__lift_3065_);
v___x_3067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3067_, 0, v___x_3066_);
v___x_3068_ = lean_apply_2(v_toPure_3064_, lean_box(0), v___x_3067_);
return v___x_3068_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0___boxed(lean_object* v_toPure_3069_, lean_object* v_____do__lift_3070_){
_start:
{
uint8_t v_____do__lift_1060__boxed_3071_; lean_object* v_res_3072_; 
v_____do__lift_1060__boxed_3071_ = lean_unbox(v_____do__lift_3070_);
v_res_3072_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0(v_toPure_3069_, v_____do__lift_1060__boxed_3071_);
return v_res_3072_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__1(lean_object* v_toPure_3073_, lean_object* v___y_3074_, lean_object* v_____do__lift_3075_){
_start:
{
if (lean_obj_tag(v_____do__lift_3075_) == 0)
{
lean_object* v___x_3076_; lean_object* v___x_3077_; 
lean_dec(v___y_3074_);
v___x_3076_ = lean_box(0);
v___x_3077_ = lean_apply_2(v_toPure_3073_, lean_box(0), v___x_3076_);
return v___x_3077_;
}
else
{
lean_object* v___x_3079_; uint8_t v_isShared_3080_; uint8_t v_isSharedCheck_3085_; 
v_isSharedCheck_3085_ = !lean_is_exclusive(v_____do__lift_3075_);
if (v_isSharedCheck_3085_ == 0)
{
lean_object* v_unused_3086_; 
v_unused_3086_ = lean_ctor_get(v_____do__lift_3075_, 0);
lean_dec(v_unused_3086_);
v___x_3079_ = v_____do__lift_3075_;
v_isShared_3080_ = v_isSharedCheck_3085_;
goto v_resetjp_3078_;
}
else
{
lean_dec(v_____do__lift_3075_);
v___x_3079_ = lean_box(0);
v_isShared_3080_ = v_isSharedCheck_3085_;
goto v_resetjp_3078_;
}
v_resetjp_3078_:
{
lean_object* v___x_3082_; 
if (v_isShared_3080_ == 0)
{
lean_ctor_set(v___x_3079_, 0, v___y_3074_);
v___x_3082_ = v___x_3079_;
goto v_reusejp_3081_;
}
else
{
lean_object* v_reuseFailAlloc_3084_; 
v_reuseFailAlloc_3084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3084_, 0, v___y_3074_);
v___x_3082_ = v_reuseFailAlloc_3084_;
goto v_reusejp_3081_;
}
v_reusejp_3081_:
{
lean_object* v___x_3083_; 
v___x_3083_ = lean_apply_2(v_toPure_3073_, lean_box(0), v___x_3082_);
return v___x_3083_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2(lean_object* v_toPure_3089_, lean_object* v_toBind_3090_, lean_object* v___f_3091_, lean_object* v_____do__lift_3092_){
_start:
{
if (lean_obj_tag(v_____do__lift_3092_) == 0)
{
lean_object* v___x_3093_; lean_object* v___x_3094_; 
lean_dec(v___f_3091_);
lean_dec(v_toBind_3090_);
v___x_3093_ = lean_box(0);
v___x_3094_ = lean_apply_2(v_toPure_3089_, lean_box(0), v___x_3093_);
return v___x_3094_;
}
else
{
lean_object* v_val_3095_; uint8_t v___x_3096_; 
v_val_3095_ = lean_ctor_get(v_____do__lift_3092_, 0);
v___x_3096_ = lean_unbox(v_val_3095_);
if (v___x_3096_ == 0)
{
lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; 
v___x_3097_ = lean_box(0);
v___x_3098_ = lean_apply_2(v_toPure_3089_, lean_box(0), v___x_3097_);
v___x_3099_ = lean_apply_4(v_toBind_3090_, lean_box(0), lean_box(0), v___x_3098_, v___f_3091_);
return v___x_3099_;
}
else
{
lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; 
v___x_3100_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0));
v___x_3101_ = lean_apply_2(v_toPure_3089_, lean_box(0), v___x_3100_);
v___x_3102_ = lean_apply_4(v_toBind_3090_, lean_box(0), lean_box(0), v___x_3101_, v___f_3091_);
return v___x_3102_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___boxed(lean_object* v_toPure_3103_, lean_object* v_toBind_3104_, lean_object* v___f_3105_, lean_object* v_____do__lift_3106_){
_start:
{
lean_object* v_res_3107_; 
v_res_3107_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2(v_toPure_3103_, v_toBind_3104_, v___f_3105_, v_____do__lift_3106_);
lean_dec(v_____do__lift_3106_);
return v_res_3107_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3(lean_object* v_toPure_3108_, lean_object* v_filter_3109_, lean_object* v___y_3110_, lean_object* v_toBind_3111_, lean_object* v___f_3112_, lean_object* v___f_3113_, lean_object* v_____do__lift_3114_){
_start:
{
if (lean_obj_tag(v_____do__lift_3114_) == 0)
{
lean_object* v___x_3115_; lean_object* v___x_3116_; 
lean_dec(v___f_3113_);
lean_dec(v___f_3112_);
lean_dec(v_toBind_3111_);
lean_dec(v___y_3110_);
lean_dec(v_filter_3109_);
v___x_3115_ = lean_box(0);
v___x_3116_ = lean_apply_2(v_toPure_3108_, lean_box(0), v___x_3115_);
return v___x_3116_;
}
else
{
lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; 
lean_dec(v_toPure_3108_);
v___x_3117_ = lean_apply_1(v_filter_3109_, v___y_3110_);
lean_inc(v_toBind_3111_);
v___x_3118_ = lean_apply_4(v_toBind_3111_, lean_box(0), lean_box(0), v___x_3117_, v___f_3112_);
v___x_3119_ = lean_apply_4(v_toBind_3111_, lean_box(0), lean_box(0), v___x_3118_, v___f_3113_);
return v___x_3119_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3___boxed(lean_object* v_toPure_3120_, lean_object* v_filter_3121_, lean_object* v___y_3122_, lean_object* v_toBind_3123_, lean_object* v___f_3124_, lean_object* v___f_3125_, lean_object* v_____do__lift_3126_){
_start:
{
lean_object* v_res_3127_; 
v_res_3127_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3(v_toPure_3120_, v_filter_3121_, v___y_3122_, v_toBind_3123_, v___f_3124_, v___f_3125_, v_____do__lift_3126_);
lean_dec(v_____do__lift_3126_);
return v_res_3127_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4(lean_object* v_toPure_3128_, lean_object* v_n_u2080_3129_, lean_object* v_toBind_3130_, lean_object* v___f_3131_, lean_object* v_____do__lift_3132_){
_start:
{
if (lean_obj_tag(v_____do__lift_3132_) == 0)
{
lean_object* v___x_3136_; lean_object* v___x_3137_; 
lean_dec(v___f_3131_);
lean_dec(v_toBind_3130_);
v___x_3136_ = lean_box(0);
v___x_3137_ = lean_apply_2(v_toPure_3128_, lean_box(0), v___x_3136_);
return v___x_3137_;
}
else
{
lean_object* v_val_3138_; 
v_val_3138_ = lean_ctor_get(v_____do__lift_3132_, 0);
if (lean_obj_tag(v_val_3138_) == 1)
{
lean_object* v_tail_3139_; 
v_tail_3139_ = lean_ctor_get(v_val_3138_, 1);
if (lean_obj_tag(v_tail_3139_) == 0)
{
lean_object* v_head_3140_; lean_object* v_fst_3141_; uint8_t v___x_3142_; 
v_head_3140_ = lean_ctor_get(v_val_3138_, 0);
v_fst_3141_ = lean_ctor_get(v_head_3140_, 0);
v___x_3142_ = lean_name_eq(v_fst_3141_, v_n_u2080_3129_);
if (v___x_3142_ == 0)
{
lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; 
v___x_3143_ = lean_box(0);
v___x_3144_ = lean_apply_2(v_toPure_3128_, lean_box(0), v___x_3143_);
v___x_3145_ = lean_apply_4(v_toBind_3130_, lean_box(0), lean_box(0), v___x_3144_, v___f_3131_);
return v___x_3145_;
}
else
{
lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; 
v___x_3146_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0));
v___x_3147_ = lean_apply_2(v_toPure_3128_, lean_box(0), v___x_3146_);
v___x_3148_ = lean_apply_4(v_toBind_3130_, lean_box(0), lean_box(0), v___x_3147_, v___f_3131_);
return v___x_3148_;
}
}
else
{
lean_dec(v___f_3131_);
lean_dec(v_toBind_3130_);
goto v___jp_3133_;
}
}
else
{
lean_dec(v___f_3131_);
lean_dec(v_toBind_3130_);
goto v___jp_3133_;
}
}
v___jp_3133_:
{
lean_object* v___x_3134_; lean_object* v___x_3135_; 
v___x_3134_ = lean_box(0);
v___x_3135_ = lean_apply_2(v_toPure_3128_, lean_box(0), v___x_3134_);
return v___x_3135_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4___boxed(lean_object* v_toPure_3149_, lean_object* v_n_u2080_3150_, lean_object* v_toBind_3151_, lean_object* v___f_3152_, lean_object* v_____do__lift_3153_){
_start:
{
lean_object* v_res_3154_; 
v_res_3154_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4(v_toPure_3149_, v_n_u2080_3150_, v_toBind_3151_, v___f_3152_, v_____do__lift_3153_);
lean_dec(v_____do__lift_3153_);
lean_dec(v_n_u2080_3150_);
return v_res_3154_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(lean_object* v_inst_3155_, lean_object* v_inst_3156_, lean_object* v_inst_3157_, lean_object* v_inst_3158_, lean_object* v_inst_3159_, lean_object* v_inst_3160_, lean_object* v_n_u2080_3161_, lean_object* v_filter_3162_, lean_object* v_view_x3f_3163_, lean_object* v_n_3164_){
_start:
{
lean_object* v___f_3165_; lean_object* v___f_3166_; lean_object* v___f_3167_; lean_object* v___f_3168_; lean_object* v___f_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v_toApplicative_3177_; lean_object* v_getEnv_3178_; lean_object* v_modifyEnv_3179_; lean_object* v___x_3181_; uint8_t v_isShared_3182_; uint8_t v_isSharedCheck_3217_; 
lean_inc_ref_n(v_inst_3155_, 8);
v___f_3165_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_3165_, 0, v_inst_3155_);
v___f_3166_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_3166_, 0, v_inst_3155_);
v___f_3167_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__6), 5, 1);
lean_closure_set(v___f_3167_, 0, v_inst_3155_);
v___f_3168_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_3168_, 0, v_inst_3155_);
v___f_3169_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__11), 5, 1);
lean_closure_set(v___f_3169_, 0, v_inst_3155_);
v___x_3170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3170_, 0, v___f_3165_);
lean_ctor_set(v___x_3170_, 1, v___f_3166_);
v___x_3171_ = lean_alloc_closure((void*)(l_OptionT_pure), 4, 2);
lean_closure_set(v___x_3171_, 0, lean_box(0));
lean_closure_set(v___x_3171_, 1, v_inst_3155_);
v___x_3172_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3172_, 0, v___x_3170_);
lean_ctor_set(v___x_3172_, 1, v___x_3171_);
lean_ctor_set(v___x_3172_, 2, v___f_3167_);
lean_ctor_set(v___x_3172_, 3, v___f_3168_);
lean_ctor_set(v___x_3172_, 4, v___f_3169_);
v___x_3173_ = lean_alloc_closure((void*)(l_OptionT_bind), 6, 2);
lean_closure_set(v___x_3173_, 0, lean_box(0));
lean_closure_set(v___x_3173_, 1, v_inst_3155_);
v___x_3174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3174_, 0, v___x_3172_);
lean_ctor_set(v___x_3174_, 1, v___x_3173_);
v___x_3175_ = lean_alloc_closure((void*)(l_OptionT_lift), 4, 2);
lean_closure_set(v___x_3175_, 0, lean_box(0));
lean_closure_set(v___x_3175_, 1, v_inst_3155_);
lean_inc_ref(v___x_3175_);
v___x_3176_ = l_Lean_instMonadResolveNameOfMonadLift___redArg(v___x_3175_, v_inst_3156_);
v_toApplicative_3177_ = lean_ctor_get(v_inst_3155_, 0);
lean_inc_ref(v_toApplicative_3177_);
v_getEnv_3178_ = lean_ctor_get(v_inst_3157_, 0);
v_modifyEnv_3179_ = lean_ctor_get(v_inst_3157_, 1);
v_isSharedCheck_3217_ = !lean_is_exclusive(v_inst_3157_);
if (v_isSharedCheck_3217_ == 0)
{
v___x_3181_ = v_inst_3157_;
v_isShared_3182_ = v_isSharedCheck_3217_;
goto v_resetjp_3180_;
}
else
{
lean_inc(v_modifyEnv_3179_);
lean_inc(v_getEnv_3178_);
lean_dec(v_inst_3157_);
v___x_3181_ = lean_box(0);
v_isShared_3182_ = v_isSharedCheck_3217_;
goto v_resetjp_3180_;
}
v_resetjp_3180_:
{
lean_object* v_toBind_3183_; lean_object* v_toPure_3184_; lean_object* v___f_3185_; lean_object* v___f_3186_; lean_object* v___f_3187_; lean_object* v___x_3188_; lean_object* v___x_3190_; 
v_toBind_3183_ = lean_ctor_get(v_inst_3155_, 1);
lean_inc_n(v_toBind_3183_, 2);
lean_dec_ref(v_inst_3155_);
v_toPure_3184_ = lean_ctor_get(v_toApplicative_3177_, 1);
lean_inc_n(v_toPure_3184_, 3);
lean_dec_ref(v_toApplicative_3177_);
lean_inc_ref(v___x_3175_);
v___f_3185_ = lean_alloc_closure((void*)(l_Lean_instMonadEnvOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3185_, 0, v_modifyEnv_3179_);
lean_closure_set(v___f_3185_, 1, v___x_3175_);
v___f_3186_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3186_, 0, v_toPure_3184_);
v___f_3187_ = lean_alloc_closure((void*)(l_OptionT_lift___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3187_, 0, v_toPure_3184_);
v___x_3188_ = lean_apply_4(v_toBind_3183_, lean_box(0), lean_box(0), v_getEnv_3178_, v___f_3187_);
if (v_isShared_3182_ == 0)
{
lean_ctor_set(v___x_3181_, 1, v___f_3185_);
lean_ctor_set(v___x_3181_, 0, v___x_3188_);
v___x_3190_ = v___x_3181_;
goto v_reusejp_3189_;
}
else
{
lean_object* v_reuseFailAlloc_3216_; 
v_reuseFailAlloc_3216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3216_, 0, v___x_3188_);
lean_ctor_set(v_reuseFailAlloc_3216_, 1, v___f_3185_);
v___x_3190_ = v_reuseFailAlloc_3216_;
goto v_reusejp_3189_;
}
v_reusejp_3189_:
{
lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___f_3193_; lean_object* v___y_3195_; 
lean_inc_ref_n(v___x_3175_, 2);
v___x_3191_ = l_Lean_instMonadOptionsOfMonadLift___redArg(v___x_3175_, v_inst_3158_);
v___x_3192_ = l_Lean_instMonadLogOfMonadLift___redArg(v___x_3175_, v_inst_3159_);
v___f_3193_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3193_, 0, v_inst_3160_);
lean_closure_set(v___f_3193_, 1, v___x_3175_);
if (lean_obj_tag(v_view_x3f_3163_) == 1)
{
lean_object* v_val_3203_; lean_object* v_imported_3204_; lean_object* v_ctx_3205_; lean_object* v_scopes_3206_; lean_object* v___x_3208_; uint8_t v_isShared_3209_; uint8_t v_isSharedCheck_3214_; 
v_val_3203_ = lean_ctor_get(v_view_x3f_3163_, 0);
lean_inc(v_val_3203_);
lean_dec_ref_known(v_view_x3f_3163_, 1);
v_imported_3204_ = lean_ctor_get(v_val_3203_, 1);
v_ctx_3205_ = lean_ctor_get(v_val_3203_, 2);
v_scopes_3206_ = lean_ctor_get(v_val_3203_, 3);
v_isSharedCheck_3214_ = !lean_is_exclusive(v_val_3203_);
if (v_isSharedCheck_3214_ == 0)
{
lean_object* v_unused_3215_; 
v_unused_3215_ = lean_ctor_get(v_val_3203_, 0);
lean_dec(v_unused_3215_);
v___x_3208_ = v_val_3203_;
v_isShared_3209_ = v_isSharedCheck_3214_;
goto v_resetjp_3207_;
}
else
{
lean_inc(v_scopes_3206_);
lean_inc(v_ctx_3205_);
lean_inc(v_imported_3204_);
lean_dec(v_val_3203_);
v___x_3208_ = lean_box(0);
v_isShared_3209_ = v_isSharedCheck_3214_;
goto v_resetjp_3207_;
}
v_resetjp_3207_:
{
lean_object* v___x_3211_; 
if (v_isShared_3209_ == 0)
{
lean_ctor_set(v___x_3208_, 0, v_n_3164_);
v___x_3211_ = v___x_3208_;
goto v_reusejp_3210_;
}
else
{
lean_object* v_reuseFailAlloc_3213_; 
v_reuseFailAlloc_3213_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3213_, 0, v_n_3164_);
lean_ctor_set(v_reuseFailAlloc_3213_, 1, v_imported_3204_);
lean_ctor_set(v_reuseFailAlloc_3213_, 2, v_ctx_3205_);
lean_ctor_set(v_reuseFailAlloc_3213_, 3, v_scopes_3206_);
v___x_3211_ = v_reuseFailAlloc_3213_;
goto v_reusejp_3210_;
}
v_reusejp_3210_:
{
lean_object* v___x_3212_; 
v___x_3212_ = l_Lean_MacroScopesView_review(v___x_3211_);
v___y_3195_ = v___x_3212_;
goto v___jp_3194_;
}
}
}
else
{
lean_dec(v_view_x3f_3163_);
v___y_3195_ = v_n_3164_;
goto v___jp_3194_;
}
v___jp_3194_:
{
lean_object* v___f_3196_; lean_object* v___f_3197_; lean_object* v___f_3198_; lean_object* v___f_3199_; uint8_t v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; 
lean_inc_n(v___y_3195_, 2);
lean_inc_n(v_toPure_3184_, 3);
v___f_3196_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__1), 3, 2);
lean_closure_set(v___f_3196_, 0, v_toPure_3184_);
lean_closure_set(v___f_3196_, 1, v___y_3195_);
lean_inc_n(v_toBind_3183_, 3);
v___f_3197_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_3197_, 0, v_toPure_3184_);
lean_closure_set(v___f_3197_, 1, v_toBind_3183_);
lean_closure_set(v___f_3197_, 2, v___f_3196_);
v___f_3198_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_3198_, 0, v_toPure_3184_);
lean_closure_set(v___f_3198_, 1, v_filter_3162_);
lean_closure_set(v___f_3198_, 2, v___y_3195_);
lean_closure_set(v___f_3198_, 3, v_toBind_3183_);
lean_closure_set(v___f_3198_, 4, v___f_3186_);
lean_closure_set(v___f_3198_, 5, v___f_3197_);
v___f_3199_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4___boxed), 5, 4);
lean_closure_set(v___f_3199_, 0, v_toPure_3184_);
lean_closure_set(v___f_3199_, 1, v_n_u2080_3161_);
lean_closure_set(v___f_3199_, 2, v_toBind_3183_);
lean_closure_set(v___f_3199_, 3, v___f_3198_);
v___x_3200_ = 0;
v___x_3201_ = l_Lean_resolveGlobalName___redArg(v___x_3174_, v___x_3176_, v___x_3190_, v___x_3191_, v___x_3192_, v___f_3193_, v___y_3195_, v___x_3200_);
v___x_3202_ = lean_apply_4(v_toBind_3183_, lean_box(0), lean_box(0), v___x_3201_, v___f_3199_);
return v___x_3202_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve(lean_object* v_m_3218_, lean_object* v_inst_3219_, lean_object* v_inst_3220_, lean_object* v_inst_3221_, lean_object* v_inst_3222_, lean_object* v_inst_3223_, lean_object* v_inst_3224_, lean_object* v_n_u2080_3225_, lean_object* v_filter_3226_, lean_object* v_view_x3f_3227_, lean_object* v_n_3228_){
_start:
{
lean_object* v___x_3229_; 
v___x_3229_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(v_inst_3219_, v_inst_3220_, v_inst_3221_, v_inst_3222_, v_inst_3223_, v_inst_3224_, v_n_u2080_3225_, v_filter_3226_, v_view_x3f_3227_, v_n_3228_);
return v___x_3229_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0(lean_object* v_toPure_3234_, lean_object* v_____x_3235_){
_start:
{
if (lean_obj_tag(v_____x_3235_) == 0)
{
lean_object* v___x_3236_; lean_object* v___x_3237_; 
v___x_3236_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__1));
v___x_3237_ = lean_apply_2(v_toPure_3234_, lean_box(0), v___x_3236_);
return v___x_3237_;
}
else
{
lean_object* v___x_3238_; 
v___x_3238_ = lean_apply_2(v_toPure_3234_, lean_box(0), v_____x_3235_);
return v___x_3238_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__1(lean_object* v_toPure_3239_, lean_object* v_____do__lift_3240_){
_start:
{
if (lean_obj_tag(v_____do__lift_3240_) == 0)
{
lean_object* v___x_3241_; lean_object* v___x_3242_; 
v___x_3241_ = lean_box(0);
v___x_3242_ = lean_apply_2(v_toPure_3239_, lean_box(0), v___x_3241_);
return v___x_3242_;
}
else
{
lean_object* v_val_3243_; lean_object* v___x_3245_; uint8_t v_isShared_3246_; uint8_t v_isSharedCheck_3252_; 
v_val_3243_ = lean_ctor_get(v_____do__lift_3240_, 0);
v_isSharedCheck_3252_ = !lean_is_exclusive(v_____do__lift_3240_);
if (v_isSharedCheck_3252_ == 0)
{
v___x_3245_ = v_____do__lift_3240_;
v_isShared_3246_ = v_isSharedCheck_3252_;
goto v_resetjp_3244_;
}
else
{
lean_inc(v_val_3243_);
lean_dec(v_____do__lift_3240_);
v___x_3245_ = lean_box(0);
v_isShared_3246_ = v_isSharedCheck_3252_;
goto v_resetjp_3244_;
}
v_resetjp_3244_:
{
lean_object* v___x_3247_; lean_object* v___x_3249_; 
v___x_3247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3247_, 0, v_val_3243_);
if (v_isShared_3246_ == 0)
{
lean_ctor_set(v___x_3245_, 0, v___x_3247_);
v___x_3249_ = v___x_3245_;
goto v_reusejp_3248_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v___x_3247_);
v___x_3249_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3248_;
}
v_reusejp_3248_:
{
lean_object* v___x_3250_; 
v___x_3250_ = lean_apply_2(v_toPure_3239_, lean_box(0), v___x_3249_);
return v___x_3250_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__2(lean_object* v_toPure_3253_, lean_object* v___x_3254_, lean_object* v_____do__lift_3255_){
_start:
{
if (lean_obj_tag(v_____do__lift_3255_) == 0)
{
lean_object* v___x_3256_; 
v___x_3256_ = lean_apply_2(v_toPure_3253_, lean_box(0), v___x_3254_);
return v___x_3256_;
}
else
{
lean_object* v_val_3257_; lean_object* v_fst_3258_; lean_object* v___x_3259_; 
lean_dec(v___x_3254_);
v_val_3257_ = lean_ctor_get(v_____do__lift_3255_, 0);
lean_inc(v_val_3257_);
lean_dec_ref_known(v_____do__lift_3255_, 1);
v_fst_3258_ = lean_ctor_get(v_val_3257_, 0);
lean_inc(v_fst_3258_);
lean_dec(v_val_3257_);
v___x_3259_ = lean_apply_2(v_toPure_3253_, lean_box(0), v_fst_3258_);
return v___x_3259_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__3(lean_object* v_toPure_3260_, lean_object* v___x_3261_, lean_object* v___x_3262_, lean_object* v_____do__lift_3263_){
_start:
{
if (lean_obj_tag(v_____do__lift_3263_) == 0)
{
lean_object* v___x_3264_; lean_object* v___x_3265_; 
lean_dec(v___x_3262_);
lean_dec(v___x_3261_);
v___x_3264_ = lean_box(0);
v___x_3265_ = lean_apply_2(v_toPure_3260_, lean_box(0), v___x_3264_);
return v___x_3265_;
}
else
{
lean_object* v_val_3266_; lean_object* v___x_3268_; uint8_t v_isShared_3269_; uint8_t v_isSharedCheck_3297_; 
v_val_3266_ = lean_ctor_get(v_____do__lift_3263_, 0);
v_isSharedCheck_3297_ = !lean_is_exclusive(v_____do__lift_3263_);
if (v_isSharedCheck_3297_ == 0)
{
v___x_3268_ = v_____do__lift_3263_;
v_isShared_3269_ = v_isSharedCheck_3297_;
goto v_resetjp_3267_;
}
else
{
lean_inc(v_val_3266_);
lean_dec(v_____do__lift_3263_);
v___x_3268_ = lean_box(0);
v_isShared_3269_ = v_isSharedCheck_3297_;
goto v_resetjp_3267_;
}
v_resetjp_3267_:
{
if (lean_obj_tag(v_val_3266_) == 0)
{
lean_object* v_a_3270_; lean_object* v___x_3272_; uint8_t v_isShared_3273_; uint8_t v_isSharedCheck_3283_; 
lean_dec(v___x_3262_);
v_a_3270_ = lean_ctor_get(v_val_3266_, 0);
v_isSharedCheck_3283_ = !lean_is_exclusive(v_val_3266_);
if (v_isSharedCheck_3283_ == 0)
{
v___x_3272_ = v_val_3266_;
v_isShared_3273_ = v_isSharedCheck_3283_;
goto v_resetjp_3271_;
}
else
{
lean_inc(v_a_3270_);
lean_dec(v_val_3266_);
v___x_3272_ = lean_box(0);
v_isShared_3273_ = v_isSharedCheck_3283_;
goto v_resetjp_3271_;
}
v_resetjp_3271_:
{
lean_object* v___x_3275_; 
if (v_isShared_3269_ == 0)
{
lean_ctor_set(v___x_3268_, 0, v_a_3270_);
v___x_3275_ = v___x_3268_;
goto v_reusejp_3274_;
}
else
{
lean_object* v_reuseFailAlloc_3282_; 
v_reuseFailAlloc_3282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3282_, 0, v_a_3270_);
v___x_3275_ = v_reuseFailAlloc_3282_;
goto v_reusejp_3274_;
}
v_reusejp_3274_:
{
lean_object* v___x_3276_; lean_object* v___x_3278_; 
v___x_3276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3276_, 0, v___x_3275_);
lean_ctor_set(v___x_3276_, 1, v___x_3261_);
if (v_isShared_3273_ == 0)
{
lean_ctor_set(v___x_3272_, 0, v___x_3276_);
v___x_3278_ = v___x_3272_;
goto v_reusejp_3277_;
}
else
{
lean_object* v_reuseFailAlloc_3281_; 
v_reuseFailAlloc_3281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3281_, 0, v___x_3276_);
v___x_3278_ = v_reuseFailAlloc_3281_;
goto v_reusejp_3277_;
}
v_reusejp_3277_:
{
lean_object* v___x_3279_; lean_object* v___x_3280_; 
v___x_3279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3279_, 0, v___x_3278_);
v___x_3280_ = lean_apply_2(v_toPure_3260_, lean_box(0), v___x_3279_);
return v___x_3280_;
}
}
}
}
else
{
lean_object* v___x_3285_; uint8_t v_isShared_3286_; uint8_t v_isSharedCheck_3295_; 
v_isSharedCheck_3295_ = !lean_is_exclusive(v_val_3266_);
if (v_isSharedCheck_3295_ == 0)
{
lean_object* v_unused_3296_; 
v_unused_3296_ = lean_ctor_get(v_val_3266_, 0);
lean_dec(v_unused_3296_);
v___x_3285_ = v_val_3266_;
v_isShared_3286_ = v_isSharedCheck_3295_;
goto v_resetjp_3284_;
}
else
{
lean_dec(v_val_3266_);
v___x_3285_ = lean_box(0);
v_isShared_3286_ = v_isSharedCheck_3295_;
goto v_resetjp_3284_;
}
v_resetjp_3284_:
{
lean_object* v___x_3287_; lean_object* v___x_3289_; 
v___x_3287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3287_, 0, v___x_3262_);
lean_ctor_set(v___x_3287_, 1, v___x_3261_);
if (v_isShared_3286_ == 0)
{
lean_ctor_set(v___x_3285_, 0, v___x_3287_);
v___x_3289_ = v___x_3285_;
goto v_reusejp_3288_;
}
else
{
lean_object* v_reuseFailAlloc_3294_; 
v_reuseFailAlloc_3294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3294_, 0, v___x_3287_);
v___x_3289_ = v_reuseFailAlloc_3294_;
goto v_reusejp_3288_;
}
v_reusejp_3288_:
{
lean_object* v___x_3291_; 
if (v_isShared_3269_ == 0)
{
lean_ctor_set(v___x_3268_, 0, v___x_3289_);
v___x_3291_ = v___x_3268_;
goto v_reusejp_3290_;
}
else
{
lean_object* v_reuseFailAlloc_3293_; 
v_reuseFailAlloc_3293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3293_, 0, v___x_3289_);
v___x_3291_ = v_reuseFailAlloc_3293_;
goto v_reusejp_3290_;
}
v_reusejp_3290_:
{
lean_object* v___x_3292_; 
v___x_3292_ = lean_apply_2(v_toPure_3260_, lean_box(0), v___x_3291_);
return v___x_3292_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4(lean_object* v_toPure_3298_, lean_object* v___x_3299_, lean_object* v_inst_3300_, lean_object* v_inst_3301_, lean_object* v_inst_3302_, lean_object* v_inst_3303_, lean_object* v_inst_3304_, lean_object* v_inst_3305_, lean_object* v_n_u2080_3306_, lean_object* v_filter_3307_, lean_object* v_view_x3f_3308_, lean_object* v_toBind_3309_, lean_object* v___f_3310_, lean_object* v___f_3311_, lean_object* v_a_3312_, lean_object* v_x_3313_, lean_object* v___y_3314_){
_start:
{
lean_object* v_snd_3315_; lean_object* v___x_3316_; lean_object* v___f_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; 
v_snd_3315_ = lean_ctor_get(v___y_3314_, 1);
lean_inc(v_snd_3315_);
lean_dec_ref(v___y_3314_);
v___x_3316_ = l_Lean_Name_appendCore(v_a_3312_, v_snd_3315_);
lean_inc(v___x_3316_);
v___f_3317_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__3), 4, 3);
lean_closure_set(v___f_3317_, 0, v_toPure_3298_);
lean_closure_set(v___f_3317_, 1, v___x_3316_);
lean_closure_set(v___f_3317_, 2, v___x_3299_);
v___x_3318_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(v_inst_3300_, v_inst_3301_, v_inst_3302_, v_inst_3303_, v_inst_3304_, v_inst_3305_, v_n_u2080_3306_, v_filter_3307_, v_view_x3f_3308_, v___x_3316_);
lean_inc_n(v_toBind_3309_, 2);
v___x_3319_ = lean_apply_4(v_toBind_3309_, lean_box(0), lean_box(0), v___x_3318_, v___f_3310_);
v___x_3320_ = lean_apply_4(v_toBind_3309_, lean_box(0), lean_box(0), v___x_3319_, v___f_3311_);
v___x_3321_ = lean_apply_4(v_toBind_3309_, lean_box(0), lean_box(0), v___x_3320_, v___f_3317_);
return v___x_3321_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4___boxed(lean_object** _args){
lean_object* v_toPure_3322_ = _args[0];
lean_object* v___x_3323_ = _args[1];
lean_object* v_inst_3324_ = _args[2];
lean_object* v_inst_3325_ = _args[3];
lean_object* v_inst_3326_ = _args[4];
lean_object* v_inst_3327_ = _args[5];
lean_object* v_inst_3328_ = _args[6];
lean_object* v_inst_3329_ = _args[7];
lean_object* v_n_u2080_3330_ = _args[8];
lean_object* v_filter_3331_ = _args[9];
lean_object* v_view_x3f_3332_ = _args[10];
lean_object* v_toBind_3333_ = _args[11];
lean_object* v___f_3334_ = _args[12];
lean_object* v___f_3335_ = _args[13];
lean_object* v_a_3336_ = _args[14];
lean_object* v_x_3337_ = _args[15];
lean_object* v___y_3338_ = _args[16];
_start:
{
lean_object* v_res_3339_; 
v_res_3339_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4(v_toPure_3322_, v___x_3323_, v_inst_3324_, v_inst_3325_, v_inst_3326_, v_inst_3327_, v_inst_3328_, v_inst_3329_, v_n_u2080_3330_, v_filter_3331_, v_view_x3f_3332_, v_toBind_3333_, v___f_3334_, v___f_3335_, v_a_3336_, v_x_3337_, v___y_3338_);
lean_dec(v_a_3336_);
return v_res_3339_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5(lean_object* v_toPure_3343_, lean_object* v_n_3344_, lean_object* v_inst_3345_, lean_object* v_inst_3346_, lean_object* v_inst_3347_, lean_object* v_inst_3348_, lean_object* v_inst_3349_, lean_object* v_inst_3350_, lean_object* v_n_u2080_3351_, lean_object* v_filter_3352_, lean_object* v_view_x3f_3353_, lean_object* v_toBind_3354_, lean_object* v___f_3355_, lean_object* v___f_3356_, lean_object* v___x_3357_, lean_object* v_____do__lift_3358_){
_start:
{
if (lean_obj_tag(v_____do__lift_3358_) == 0)
{
lean_object* v___x_3359_; lean_object* v___x_3360_; 
lean_dec_ref(v___x_3357_);
lean_dec(v___f_3356_);
lean_dec(v___f_3355_);
lean_dec(v_toBind_3354_);
lean_dec(v_view_x3f_3353_);
lean_dec(v_filter_3352_);
lean_dec(v_n_u2080_3351_);
lean_dec(v_inst_3350_);
lean_dec_ref(v_inst_3349_);
lean_dec_ref(v_inst_3348_);
lean_dec_ref(v_inst_3347_);
lean_dec_ref(v_inst_3346_);
lean_dec_ref(v_inst_3345_);
lean_dec(v_n_3344_);
v___x_3359_ = lean_box(0);
v___x_3360_ = lean_apply_2(v_toPure_3343_, lean_box(0), v___x_3359_);
return v___x_3360_;
}
else
{
lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___f_3364_; lean_object* v___f_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; 
v___x_3361_ = l_Lean_privateToUserName(v_n_3344_);
v___x_3362_ = l_Lean_Name_componentsRev(v___x_3361_);
v___x_3363_ = lean_box(0);
lean_inc(v_toPure_3343_);
v___f_3364_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__2), 3, 2);
lean_closure_set(v___f_3364_, 0, v_toPure_3343_);
lean_closure_set(v___f_3364_, 1, v___x_3363_);
lean_inc(v_toBind_3354_);
v___f_3365_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4___boxed), 17, 14);
lean_closure_set(v___f_3365_, 0, v_toPure_3343_);
lean_closure_set(v___f_3365_, 1, v___x_3363_);
lean_closure_set(v___f_3365_, 2, v_inst_3345_);
lean_closure_set(v___f_3365_, 3, v_inst_3346_);
lean_closure_set(v___f_3365_, 4, v_inst_3347_);
lean_closure_set(v___f_3365_, 5, v_inst_3348_);
lean_closure_set(v___f_3365_, 6, v_inst_3349_);
lean_closure_set(v___f_3365_, 7, v_inst_3350_);
lean_closure_set(v___f_3365_, 8, v_n_u2080_3351_);
lean_closure_set(v___f_3365_, 9, v_filter_3352_);
lean_closure_set(v___f_3365_, 10, v_view_x3f_3353_);
lean_closure_set(v___f_3365_, 11, v_toBind_3354_);
lean_closure_set(v___f_3365_, 12, v___f_3355_);
lean_closure_set(v___f_3365_, 13, v___f_3356_);
v___x_3366_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___closed__0));
v___x_3367_ = l_List_forIn_x27_loop___redArg(v___x_3357_, v___f_3365_, v___x_3362_, v___x_3366_);
lean_dec(v___x_3362_);
v___x_3368_ = lean_apply_4(v_toBind_3354_, lean_box(0), lean_box(0), v___x_3367_, v___f_3364_);
return v___x_3368_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___boxed(lean_object* v_toPure_3369_, lean_object* v_n_3370_, lean_object* v_inst_3371_, lean_object* v_inst_3372_, lean_object* v_inst_3373_, lean_object* v_inst_3374_, lean_object* v_inst_3375_, lean_object* v_inst_3376_, lean_object* v_n_u2080_3377_, lean_object* v_filter_3378_, lean_object* v_view_x3f_3379_, lean_object* v_toBind_3380_, lean_object* v___f_3381_, lean_object* v___f_3382_, lean_object* v___x_3383_, lean_object* v_____do__lift_3384_){
_start:
{
lean_object* v_res_3385_; 
v_res_3385_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5(v_toPure_3369_, v_n_3370_, v_inst_3371_, v_inst_3372_, v_inst_3373_, v_inst_3374_, v_inst_3375_, v_inst_3376_, v_n_u2080_3377_, v_filter_3378_, v_view_x3f_3379_, v_toBind_3380_, v___f_3381_, v___f_3382_, v___x_3383_, v_____do__lift_3384_);
lean_dec(v_____do__lift_3384_);
return v_res_3385_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg(lean_object* v_inst_3386_, lean_object* v_inst_3387_, lean_object* v_inst_3388_, lean_object* v_inst_3389_, lean_object* v_inst_3390_, lean_object* v_inst_3391_, lean_object* v_n_u2080_3392_, lean_object* v_filter_3393_, lean_object* v_view_x3f_3394_, lean_object* v_n_3395_){
_start:
{
lean_object* v___f_3396_; lean_object* v___f_3397_; lean_object* v___f_3398_; lean_object* v___f_3399_; lean_object* v___f_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___y_3407_; uint8_t v___x_3415_; 
lean_inc_ref_n(v_inst_3386_, 7);
v___f_3396_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_3396_, 0, v_inst_3386_);
v___f_3397_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_3397_, 0, v_inst_3386_);
v___f_3398_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__6), 5, 1);
lean_closure_set(v___f_3398_, 0, v_inst_3386_);
v___f_3399_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_3399_, 0, v_inst_3386_);
v___f_3400_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__11), 5, 1);
lean_closure_set(v___f_3400_, 0, v_inst_3386_);
v___x_3401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3401_, 0, v___f_3396_);
lean_ctor_set(v___x_3401_, 1, v___f_3397_);
v___x_3402_ = lean_alloc_closure((void*)(l_OptionT_pure), 4, 2);
lean_closure_set(v___x_3402_, 0, lean_box(0));
lean_closure_set(v___x_3402_, 1, v_inst_3386_);
v___x_3403_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3403_, 0, v___x_3401_);
lean_ctor_set(v___x_3403_, 1, v___x_3402_);
lean_ctor_set(v___x_3403_, 2, v___f_3398_);
lean_ctor_set(v___x_3403_, 3, v___f_3399_);
lean_ctor_set(v___x_3403_, 4, v___f_3400_);
v___x_3404_ = lean_alloc_closure((void*)(l_OptionT_bind), 6, 2);
lean_closure_set(v___x_3404_, 0, lean_box(0));
lean_closure_set(v___x_3404_, 1, v_inst_3386_);
v___x_3405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3405_, 0, v___x_3403_);
lean_ctor_set(v___x_3405_, 1, v___x_3404_);
v___x_3415_ = l_Lean_Name_hasMacroScopes(v_n_3395_);
if (v___x_3415_ == 0)
{
lean_object* v_toApplicative_3416_; lean_object* v_toPure_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; 
v_toApplicative_3416_ = lean_ctor_get(v_inst_3386_, 0);
v_toPure_3417_ = lean_ctor_get(v_toApplicative_3416_, 1);
v___x_3418_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0));
lean_inc(v_toPure_3417_);
v___x_3419_ = lean_apply_2(v_toPure_3417_, lean_box(0), v___x_3418_);
v___y_3407_ = v___x_3419_;
goto v___jp_3406_;
}
else
{
lean_object* v_toApplicative_3420_; lean_object* v_toPure_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; 
v_toApplicative_3420_ = lean_ctor_get(v_inst_3386_, 0);
v_toPure_3421_ = lean_ctor_get(v_toApplicative_3420_, 1);
v___x_3422_ = lean_box(0);
lean_inc(v_toPure_3421_);
v___x_3423_ = lean_apply_2(v_toPure_3421_, lean_box(0), v___x_3422_);
v___y_3407_ = v___x_3423_;
goto v___jp_3406_;
}
v___jp_3406_:
{
lean_object* v_toApplicative_3408_; lean_object* v_toBind_3409_; lean_object* v_toPure_3410_; lean_object* v___f_3411_; lean_object* v___f_3412_; lean_object* v___f_3413_; lean_object* v___x_3414_; 
v_toApplicative_3408_ = lean_ctor_get(v_inst_3386_, 0);
v_toBind_3409_ = lean_ctor_get(v_inst_3386_, 1);
lean_inc_n(v_toBind_3409_, 2);
v_toPure_3410_ = lean_ctor_get(v_toApplicative_3408_, 1);
lean_inc_n(v_toPure_3410_, 3);
v___f_3411_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3411_, 0, v_toPure_3410_);
v___f_3412_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__1), 2, 1);
lean_closure_set(v___f_3412_, 0, v_toPure_3410_);
v___f_3413_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___boxed), 16, 15);
lean_closure_set(v___f_3413_, 0, v_toPure_3410_);
lean_closure_set(v___f_3413_, 1, v_n_3395_);
lean_closure_set(v___f_3413_, 2, v_inst_3386_);
lean_closure_set(v___f_3413_, 3, v_inst_3387_);
lean_closure_set(v___f_3413_, 4, v_inst_3388_);
lean_closure_set(v___f_3413_, 5, v_inst_3389_);
lean_closure_set(v___f_3413_, 6, v_inst_3390_);
lean_closure_set(v___f_3413_, 7, v_inst_3391_);
lean_closure_set(v___f_3413_, 8, v_n_u2080_3392_);
lean_closure_set(v___f_3413_, 9, v_filter_3393_);
lean_closure_set(v___f_3413_, 10, v_view_x3f_3394_);
lean_closure_set(v___f_3413_, 11, v_toBind_3409_);
lean_closure_set(v___f_3413_, 12, v___f_3412_);
lean_closure_set(v___f_3413_, 13, v___f_3411_);
lean_closure_set(v___f_3413_, 14, v___x_3405_);
v___x_3414_ = lean_apply_4(v_toBind_3409_, lean_box(0), lean_box(0), v___y_3407_, v___f_3413_);
return v___x_3414_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore(lean_object* v_m_3424_, lean_object* v_inst_3425_, lean_object* v_inst_3426_, lean_object* v_inst_3427_, lean_object* v_inst_3428_, lean_object* v_inst_3429_, lean_object* v_inst_3430_, lean_object* v_n_u2080_3431_, lean_object* v_filter_3432_, lean_object* v_view_x3f_3433_, lean_object* v_n_3434_){
_start:
{
lean_object* v___x_3435_; 
v___x_3435_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg(v_inst_3425_, v_inst_3426_, v_inst_3427_, v_inst_3428_, v_inst_3429_, v_inst_3430_, v_n_u2080_3431_, v_filter_3432_, v_view_x3f_3433_, v_n_3434_);
return v___x_3435_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__0(lean_object* v_n_u2081_3436_, lean_object* v_x1_3437_, lean_object* v_x2_3438_){
_start:
{
lean_object* v___x_3439_; lean_object* v___x_3440_; uint8_t v___x_3441_; 
v___x_3439_ = l_Lean_Name_getPrefix(v_x2_3438_);
v___x_3440_ = l_Lean_Name_getPrefix(v_n_u2081_3436_);
v___x_3441_ = l_Lean_Name_isPrefixOf(v___x_3439_, v___x_3440_);
lean_dec(v___x_3440_);
lean_dec(v___x_3439_);
if (v___x_3441_ == 0)
{
lean_dec(v_x2_3438_);
return v_x1_3437_;
}
else
{
lean_object* v___x_3442_; 
v___x_3442_ = lean_array_push(v_x1_3437_, v_x2_3438_);
return v___x_3442_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__0___boxed(lean_object* v_n_u2081_3443_, lean_object* v_x1_3444_, lean_object* v_x2_3445_){
_start:
{
lean_object* v_res_3446_; 
v_res_3446_ = l_Lean_unresolveNameGlobal_x3f___redArg___lam__0(v_n_u2081_3443_, v_x1_3444_, v_x2_3445_);
lean_dec(v_n_u2081_3443_);
return v_res_3446_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__1(lean_object* v_view_3447_, lean_object* v_n_u2081_3448_, lean_object* v_inst_3449_, lean_object* v_inst_3450_, lean_object* v_inst_3451_, lean_object* v_inst_3452_, lean_object* v_inst_3453_, lean_object* v_inst_3454_, lean_object* v_n_u2080_3455_, lean_object* v_filter_3456_, lean_object* v_toPure_3457_, lean_object* v_____do__lift_3458_){
_start:
{
if (lean_obj_tag(v_____do__lift_3458_) == 0)
{
lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; 
lean_dec(v_toPure_3457_);
v___x_3459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3459_, 0, v_view_3447_);
v___x_3460_ = l_Lean_rootNamespace;
v___x_3461_ = l_Lean_Name_append(v___x_3460_, v_n_u2081_3448_);
v___x_3462_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg(v_inst_3449_, v_inst_3450_, v_inst_3451_, v_inst_3452_, v_inst_3453_, v_inst_3454_, v_n_u2080_3455_, v_filter_3456_, v___x_3459_, v___x_3461_);
return v___x_3462_;
}
else
{
lean_object* v___x_3463_; 
lean_dec(v_filter_3456_);
lean_dec(v_n_u2080_3455_);
lean_dec(v_inst_3454_);
lean_dec_ref(v_inst_3453_);
lean_dec_ref(v_inst_3452_);
lean_dec_ref(v_inst_3451_);
lean_dec_ref(v_inst_3450_);
lean_dec_ref(v_inst_3449_);
lean_dec(v_n_u2081_3448_);
lean_dec_ref(v_view_3447_);
v___x_3463_ = lean_apply_2(v_toPure_3457_, lean_box(0), v_____do__lift_3458_);
return v___x_3463_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__2(lean_object* v_toPure_3464_, lean_object* v_inst_3465_, lean_object* v_inst_3466_, lean_object* v_inst_3467_, lean_object* v_inst_3468_, lean_object* v_inst_3469_, lean_object* v_inst_3470_, lean_object* v_n_u2080_3471_, lean_object* v_filter_3472_, lean_object* v___x_3473_, lean_object* v_toBind_3474_, lean_object* v___f_3475_, uint8_t v_allowHorizAliases_3476_, lean_object* v___f_3477_, lean_object* v_____do__lift_3478_){
_start:
{
lean_object* v_aliases_3480_; 
if (lean_obj_tag(v_____do__lift_3478_) == 0)
{
lean_object* v___x_3486_; lean_object* v___x_3487_; 
lean_dec_ref(v___f_3477_);
lean_dec(v___f_3475_);
lean_dec(v_toBind_3474_);
lean_dec_ref(v___x_3473_);
lean_dec(v_filter_3472_);
lean_dec(v_n_u2080_3471_);
lean_dec(v_inst_3470_);
lean_dec_ref(v_inst_3469_);
lean_dec_ref(v_inst_3468_);
lean_dec_ref(v_inst_3467_);
lean_dec_ref(v_inst_3466_);
lean_dec_ref(v_inst_3465_);
v___x_3486_ = lean_box(0);
v___x_3487_ = lean_apply_2(v_toPure_3464_, lean_box(0), v___x_3486_);
return v___x_3487_;
}
else
{
lean_object* v_val_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; 
lean_dec(v_toPure_3464_);
v_val_3488_ = lean_ctor_get(v_____do__lift_3478_, 0);
lean_inc(v_val_3488_);
lean_dec_ref_known(v_____do__lift_3478_, 1);
lean_inc(v_n_u2080_3471_);
v___x_3489_ = l_Lean_getRevAliases(v_val_3488_, v_n_u2080_3471_);
v___x_3490_ = lean_array_mk(v___x_3489_);
if (v_allowHorizAliases_3476_ == 0)
{
lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; uint8_t v___x_3495_; 
v___x_3491_ = lean_unsigned_to_nat(0u);
v___x_3492_ = lean_array_get_size(v___x_3490_);
v___x_3493_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__1));
v___x_3494_ = ((lean_object*)(l_Lean_resolveLocalName___redArg___lam__3___closed__9));
v___x_3495_ = lean_nat_dec_lt(v___x_3491_, v___x_3492_);
if (v___x_3495_ == 0)
{
lean_dec_ref(v___x_3490_);
lean_dec_ref(v___f_3477_);
v_aliases_3480_ = v___x_3493_;
goto v___jp_3479_;
}
else
{
size_t v___x_3496_; size_t v___x_3497_; lean_object* v___x_3498_; 
v___x_3496_ = ((size_t)0ULL);
v___x_3497_ = lean_usize_of_nat(v___x_3492_);
v___x_3498_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3494_, v___f_3477_, v___x_3490_, v___x_3496_, v___x_3497_, v___x_3493_);
v_aliases_3480_ = v___x_3498_;
goto v___jp_3479_;
}
}
else
{
lean_dec_ref(v___f_3477_);
v_aliases_3480_ = v___x_3490_;
goto v___jp_3479_;
}
}
v___jp_3479_:
{
lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; 
v___x_3481_ = lean_box(0);
v___x_3482_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore), 11, 10);
lean_closure_set(v___x_3482_, 0, lean_box(0));
lean_closure_set(v___x_3482_, 1, v_inst_3465_);
lean_closure_set(v___x_3482_, 2, v_inst_3466_);
lean_closure_set(v___x_3482_, 3, v_inst_3467_);
lean_closure_set(v___x_3482_, 4, v_inst_3468_);
lean_closure_set(v___x_3482_, 5, v_inst_3469_);
lean_closure_set(v___x_3482_, 6, v_inst_3470_);
lean_closure_set(v___x_3482_, 7, v_n_u2080_3471_);
lean_closure_set(v___x_3482_, 8, v_filter_3472_);
lean_closure_set(v___x_3482_, 9, v___x_3481_);
v___x_3483_ = lean_unsigned_to_nat(0u);
v___x_3484_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go(lean_box(0), lean_box(0), lean_box(0), v___x_3473_, v___x_3482_, v_aliases_3480_, v___x_3483_);
v___x_3485_ = lean_apply_4(v_toBind_3474_, lean_box(0), lean_box(0), v___x_3484_, v___f_3475_);
return v___x_3485_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__2___boxed(lean_object* v_toPure_3499_, lean_object* v_inst_3500_, lean_object* v_inst_3501_, lean_object* v_inst_3502_, lean_object* v_inst_3503_, lean_object* v_inst_3504_, lean_object* v_inst_3505_, lean_object* v_n_u2080_3506_, lean_object* v_filter_3507_, lean_object* v___x_3508_, lean_object* v_toBind_3509_, lean_object* v___f_3510_, lean_object* v_allowHorizAliases_3511_, lean_object* v___f_3512_, lean_object* v_____do__lift_3513_){
_start:
{
uint8_t v_allowHorizAliases_boxed_3514_; lean_object* v_res_3515_; 
v_allowHorizAliases_boxed_3514_ = lean_unbox(v_allowHorizAliases_3511_);
v_res_3515_ = l_Lean_unresolveNameGlobal_x3f___redArg___lam__2(v_toPure_3499_, v_inst_3500_, v_inst_3501_, v_inst_3502_, v_inst_3503_, v_inst_3504_, v_inst_3505_, v_n_u2080_3506_, v_filter_3507_, v___x_3508_, v_toBind_3509_, v___f_3510_, v_allowHorizAliases_boxed_3514_, v___f_3512_, v_____do__lift_3513_);
return v_res_3515_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__3(lean_object* v_toPure_3516_, lean_object* v_____do__lift_3517_){
_start:
{
lean_object* v___x_3518_; lean_object* v___x_3519_; 
v___x_3518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3518_, 0, v_____do__lift_3517_);
v___x_3519_ = lean_apply_2(v_toPure_3516_, lean_box(0), v___x_3518_);
return v___x_3519_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__4(lean_object* v_n_u2081_3520_, lean_object* v_inst_3521_, lean_object* v_inst_3522_, lean_object* v_inst_3523_, lean_object* v_inst_3524_, lean_object* v_inst_3525_, lean_object* v_inst_3526_, lean_object* v_n_u2080_3527_, lean_object* v_filter_3528_, lean_object* v___x_3529_, lean_object* v_toPure_3530_, lean_object* v_____do__lift_3531_){
_start:
{
if (lean_obj_tag(v_____do__lift_3531_) == 0)
{
lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; 
lean_dec(v_toPure_3530_);
v___x_3532_ = l_Lean_rootNamespace;
v___x_3533_ = l_Lean_Name_append(v___x_3532_, v_n_u2081_3520_);
v___x_3534_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(v_inst_3521_, v_inst_3522_, v_inst_3523_, v_inst_3524_, v_inst_3525_, v_inst_3526_, v_n_u2080_3527_, v_filter_3528_, v___x_3529_, v___x_3533_);
return v___x_3534_;
}
else
{
lean_object* v___x_3535_; 
lean_dec(v___x_3529_);
lean_dec(v_filter_3528_);
lean_dec(v_n_u2080_3527_);
lean_dec(v_inst_3526_);
lean_dec_ref(v_inst_3525_);
lean_dec_ref(v_inst_3524_);
lean_dec_ref(v_inst_3523_);
lean_dec_ref(v_inst_3522_);
lean_dec_ref(v_inst_3521_);
lean_dec(v_n_u2081_3520_);
v___x_3535_ = lean_apply_2(v_toPure_3530_, lean_box(0), v_____do__lift_3531_);
return v___x_3535_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg(lean_object* v_inst_3536_, lean_object* v_inst_3537_, lean_object* v_inst_3538_, lean_object* v_inst_3539_, lean_object* v_inst_3540_, lean_object* v_inst_3541_, lean_object* v_n_u2080_3542_, uint8_t v_fullNames_3543_, uint8_t v_allowHorizAliases_3544_, lean_object* v_filter_3545_){
_start:
{
lean_object* v_view_3546_; lean_object* v_name_3547_; lean_object* v_n_u2081_3548_; lean_object* v___x_3549_; 
lean_inc(v_n_u2080_3542_);
v_view_3546_ = l_Lean_extractMacroScopes(v_n_u2080_3542_);
v_name_3547_ = lean_ctor_get(v_view_3546_, 0);
lean_inc(v_name_3547_);
v_n_u2081_3548_ = l_Lean_privateToUserName(v_name_3547_);
lean_inc_ref(v_inst_3536_);
v___x_3549_ = l_OptionT_instAlternative___redArg(v_inst_3536_);
if (v_fullNames_3543_ == 0)
{
lean_object* v_toApplicative_3550_; lean_object* v_getEnv_3551_; lean_object* v_toBind_3552_; lean_object* v_toPure_3553_; lean_object* v___f_3554_; lean_object* v___f_3555_; lean_object* v___x_3556_; lean_object* v___f_3557_; lean_object* v___f_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; 
v_toApplicative_3550_ = lean_ctor_get(v_inst_3536_, 0);
v_getEnv_3551_ = lean_ctor_get(v_inst_3538_, 0);
lean_inc(v_getEnv_3551_);
v_toBind_3552_ = lean_ctor_get(v_inst_3536_, 1);
lean_inc_n(v_toBind_3552_, 3);
v_toPure_3553_ = lean_ctor_get(v_toApplicative_3550_, 1);
lean_inc_n(v_toPure_3553_, 3);
lean_inc(v_n_u2081_3548_);
v___f_3554_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3554_, 0, v_n_u2081_3548_);
lean_inc(v_filter_3545_);
lean_inc(v_n_u2080_3542_);
lean_inc(v_inst_3541_);
lean_inc_ref(v_inst_3540_);
lean_inc_ref(v_inst_3539_);
lean_inc_ref(v_inst_3538_);
lean_inc_ref(v_inst_3537_);
lean_inc_ref(v_inst_3536_);
v___f_3555_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__1), 12, 11);
lean_closure_set(v___f_3555_, 0, v_view_3546_);
lean_closure_set(v___f_3555_, 1, v_n_u2081_3548_);
lean_closure_set(v___f_3555_, 2, v_inst_3536_);
lean_closure_set(v___f_3555_, 3, v_inst_3537_);
lean_closure_set(v___f_3555_, 4, v_inst_3538_);
lean_closure_set(v___f_3555_, 5, v_inst_3539_);
lean_closure_set(v___f_3555_, 6, v_inst_3540_);
lean_closure_set(v___f_3555_, 7, v_inst_3541_);
lean_closure_set(v___f_3555_, 8, v_n_u2080_3542_);
lean_closure_set(v___f_3555_, 9, v_filter_3545_);
lean_closure_set(v___f_3555_, 10, v_toPure_3553_);
v___x_3556_ = lean_box(v_allowHorizAliases_3544_);
v___f_3557_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__2___boxed), 15, 14);
lean_closure_set(v___f_3557_, 0, v_toPure_3553_);
lean_closure_set(v___f_3557_, 1, v_inst_3536_);
lean_closure_set(v___f_3557_, 2, v_inst_3537_);
lean_closure_set(v___f_3557_, 3, v_inst_3538_);
lean_closure_set(v___f_3557_, 4, v_inst_3539_);
lean_closure_set(v___f_3557_, 5, v_inst_3540_);
lean_closure_set(v___f_3557_, 6, v_inst_3541_);
lean_closure_set(v___f_3557_, 7, v_n_u2080_3542_);
lean_closure_set(v___f_3557_, 8, v_filter_3545_);
lean_closure_set(v___f_3557_, 9, v___x_3549_);
lean_closure_set(v___f_3557_, 10, v_toBind_3552_);
lean_closure_set(v___f_3557_, 11, v___f_3555_);
lean_closure_set(v___f_3557_, 12, v___x_3556_);
lean_closure_set(v___f_3557_, 13, v___f_3554_);
v___f_3558_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__3), 2, 1);
lean_closure_set(v___f_3558_, 0, v_toPure_3553_);
v___x_3559_ = lean_apply_4(v_toBind_3552_, lean_box(0), lean_box(0), v_getEnv_3551_, v___f_3558_);
v___x_3560_ = lean_apply_4(v_toBind_3552_, lean_box(0), lean_box(0), v___x_3559_, v___f_3557_);
return v___x_3560_;
}
else
{
lean_object* v_toApplicative_3561_; lean_object* v_toBind_3562_; lean_object* v_toPure_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___f_3566_; lean_object* v___x_3567_; 
lean_dec_ref(v___x_3549_);
v_toApplicative_3561_ = lean_ctor_get(v_inst_3536_, 0);
v_toBind_3562_ = lean_ctor_get(v_inst_3536_, 1);
lean_inc(v_toBind_3562_);
v_toPure_3563_ = lean_ctor_get(v_toApplicative_3561_, 1);
lean_inc(v_toPure_3563_);
v___x_3564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3564_, 0, v_view_3546_);
lean_inc(v_n_u2081_3548_);
lean_inc_ref(v___x_3564_);
lean_inc(v_filter_3545_);
lean_inc(v_n_u2080_3542_);
lean_inc(v_inst_3541_);
lean_inc_ref(v_inst_3540_);
lean_inc_ref(v_inst_3539_);
lean_inc_ref(v_inst_3538_);
lean_inc_ref(v_inst_3537_);
lean_inc_ref(v_inst_3536_);
v___x_3565_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(v_inst_3536_, v_inst_3537_, v_inst_3538_, v_inst_3539_, v_inst_3540_, v_inst_3541_, v_n_u2080_3542_, v_filter_3545_, v___x_3564_, v_n_u2081_3548_);
v___f_3566_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__4), 12, 11);
lean_closure_set(v___f_3566_, 0, v_n_u2081_3548_);
lean_closure_set(v___f_3566_, 1, v_inst_3536_);
lean_closure_set(v___f_3566_, 2, v_inst_3537_);
lean_closure_set(v___f_3566_, 3, v_inst_3538_);
lean_closure_set(v___f_3566_, 4, v_inst_3539_);
lean_closure_set(v___f_3566_, 5, v_inst_3540_);
lean_closure_set(v___f_3566_, 6, v_inst_3541_);
lean_closure_set(v___f_3566_, 7, v_n_u2080_3542_);
lean_closure_set(v___f_3566_, 8, v_filter_3545_);
lean_closure_set(v___f_3566_, 9, v___x_3564_);
lean_closure_set(v___f_3566_, 10, v_toPure_3563_);
v___x_3567_ = lean_apply_4(v_toBind_3562_, lean_box(0), lean_box(0), v___x_3565_, v___f_3566_);
return v___x_3567_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___boxed(lean_object* v_inst_3568_, lean_object* v_inst_3569_, lean_object* v_inst_3570_, lean_object* v_inst_3571_, lean_object* v_inst_3572_, lean_object* v_inst_3573_, lean_object* v_n_u2080_3574_, lean_object* v_fullNames_3575_, lean_object* v_allowHorizAliases_3576_, lean_object* v_filter_3577_){
_start:
{
uint8_t v_fullNames_boxed_3578_; uint8_t v_allowHorizAliases_boxed_3579_; lean_object* v_res_3580_; 
v_fullNames_boxed_3578_ = lean_unbox(v_fullNames_3575_);
v_allowHorizAliases_boxed_3579_ = lean_unbox(v_allowHorizAliases_3576_);
v_res_3580_ = l_Lean_unresolveNameGlobal_x3f___redArg(v_inst_3568_, v_inst_3569_, v_inst_3570_, v_inst_3571_, v_inst_3572_, v_inst_3573_, v_n_u2080_3574_, v_fullNames_boxed_3578_, v_allowHorizAliases_boxed_3579_, v_filter_3577_);
return v_res_3580_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f(lean_object* v_m_3581_, lean_object* v_inst_3582_, lean_object* v_inst_3583_, lean_object* v_inst_3584_, lean_object* v_inst_3585_, lean_object* v_inst_3586_, lean_object* v_inst_3587_, lean_object* v_n_u2080_3588_, uint8_t v_fullNames_3589_, uint8_t v_allowHorizAliases_3590_, lean_object* v_filter_3591_){
_start:
{
lean_object* v___x_3592_; 
v___x_3592_ = l_Lean_unresolveNameGlobal_x3f___redArg(v_inst_3582_, v_inst_3583_, v_inst_3584_, v_inst_3585_, v_inst_3586_, v_inst_3587_, v_n_u2080_3588_, v_fullNames_3589_, v_allowHorizAliases_3590_, v_filter_3591_);
return v___x_3592_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___boxed(lean_object* v_m_3593_, lean_object* v_inst_3594_, lean_object* v_inst_3595_, lean_object* v_inst_3596_, lean_object* v_inst_3597_, lean_object* v_inst_3598_, lean_object* v_inst_3599_, lean_object* v_n_u2080_3600_, lean_object* v_fullNames_3601_, lean_object* v_allowHorizAliases_3602_, lean_object* v_filter_3603_){
_start:
{
uint8_t v_fullNames_boxed_3604_; uint8_t v_allowHorizAliases_boxed_3605_; lean_object* v_res_3606_; 
v_fullNames_boxed_3604_ = lean_unbox(v_fullNames_3601_);
v_allowHorizAliases_boxed_3605_ = lean_unbox(v_allowHorizAliases_3602_);
v_res_3606_ = l_Lean_unresolveNameGlobal_x3f(v_m_3593_, v_inst_3594_, v_inst_3595_, v_inst_3596_, v_inst_3597_, v_inst_3598_, v_inst_3599_, v_n_u2080_3600_, v_fullNames_boxed_3604_, v_allowHorizAliases_boxed_3605_, v_filter_3603_);
return v_res_3606_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg___lam__0(lean_object* v_toPure_3607_, lean_object* v_n_u2080_3608_, lean_object* v_n_x3f_3609_){
_start:
{
if (lean_obj_tag(v_n_x3f_3609_) == 0)
{
lean_object* v___x_3610_; 
v___x_3610_ = lean_apply_2(v_toPure_3607_, lean_box(0), v_n_u2080_3608_);
return v___x_3610_;
}
else
{
lean_object* v_val_3611_; lean_object* v___x_3612_; 
lean_dec(v_n_u2080_3608_);
v_val_3611_ = lean_ctor_get(v_n_x3f_3609_, 0);
lean_inc(v_val_3611_);
lean_dec_ref_known(v_n_x3f_3609_, 1);
v___x_3612_ = lean_apply_2(v_toPure_3607_, lean_box(0), v_val_3611_);
return v___x_3612_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg(lean_object* v_inst_3613_, lean_object* v_inst_3614_, lean_object* v_inst_3615_, lean_object* v_inst_3616_, lean_object* v_inst_3617_, lean_object* v_inst_3618_, lean_object* v_n_u2080_3619_, uint8_t v_fullNames_3620_, uint8_t v_allowHorizAliases_3621_, lean_object* v_filter_3622_){
_start:
{
lean_object* v_toApplicative_3623_; lean_object* v_toBind_3624_; lean_object* v_toPure_3625_; lean_object* v___x_3626_; lean_object* v___f_3627_; lean_object* v___x_3628_; 
v_toApplicative_3623_ = lean_ctor_get(v_inst_3613_, 0);
v_toBind_3624_ = lean_ctor_get(v_inst_3613_, 1);
lean_inc(v_toBind_3624_);
v_toPure_3625_ = lean_ctor_get(v_toApplicative_3623_, 1);
lean_inc(v_toPure_3625_);
lean_inc(v_n_u2080_3619_);
v___x_3626_ = l_Lean_unresolveNameGlobal_x3f___redArg(v_inst_3613_, v_inst_3614_, v_inst_3615_, v_inst_3616_, v_inst_3617_, v_inst_3618_, v_n_u2080_3619_, v_fullNames_3620_, v_allowHorizAliases_3621_, v_filter_3622_);
v___f_3627_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3627_, 0, v_toPure_3625_);
lean_closure_set(v___f_3627_, 1, v_n_u2080_3619_);
v___x_3628_ = lean_apply_4(v_toBind_3624_, lean_box(0), lean_box(0), v___x_3626_, v___f_3627_);
return v___x_3628_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg___boxed(lean_object* v_inst_3629_, lean_object* v_inst_3630_, lean_object* v_inst_3631_, lean_object* v_inst_3632_, lean_object* v_inst_3633_, lean_object* v_inst_3634_, lean_object* v_n_u2080_3635_, lean_object* v_fullNames_3636_, lean_object* v_allowHorizAliases_3637_, lean_object* v_filter_3638_){
_start:
{
uint8_t v_fullNames_boxed_3639_; uint8_t v_allowHorizAliases_boxed_3640_; lean_object* v_res_3641_; 
v_fullNames_boxed_3639_ = lean_unbox(v_fullNames_3636_);
v_allowHorizAliases_boxed_3640_ = lean_unbox(v_allowHorizAliases_3637_);
v_res_3641_ = l_Lean_unresolveNameGlobal___redArg(v_inst_3629_, v_inst_3630_, v_inst_3631_, v_inst_3632_, v_inst_3633_, v_inst_3634_, v_n_u2080_3635_, v_fullNames_boxed_3639_, v_allowHorizAliases_boxed_3640_, v_filter_3638_);
return v_res_3641_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal(lean_object* v_m_3642_, lean_object* v_inst_3643_, lean_object* v_inst_3644_, lean_object* v_inst_3645_, lean_object* v_inst_3646_, lean_object* v_inst_3647_, lean_object* v_inst_3648_, lean_object* v_n_u2080_3649_, uint8_t v_fullNames_3650_, uint8_t v_allowHorizAliases_3651_, lean_object* v_filter_3652_){
_start:
{
lean_object* v___x_3653_; 
v___x_3653_ = l_Lean_unresolveNameGlobal___redArg(v_inst_3643_, v_inst_3644_, v_inst_3645_, v_inst_3646_, v_inst_3647_, v_inst_3648_, v_n_u2080_3649_, v_fullNames_3650_, v_allowHorizAliases_3651_, v_filter_3652_);
return v___x_3653_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___boxed(lean_object* v_m_3654_, lean_object* v_inst_3655_, lean_object* v_inst_3656_, lean_object* v_inst_3657_, lean_object* v_inst_3658_, lean_object* v_inst_3659_, lean_object* v_inst_3660_, lean_object* v_n_u2080_3661_, lean_object* v_fullNames_3662_, lean_object* v_allowHorizAliases_3663_, lean_object* v_filter_3664_){
_start:
{
uint8_t v_fullNames_boxed_3665_; uint8_t v_allowHorizAliases_boxed_3666_; lean_object* v_res_3667_; 
v_fullNames_boxed_3665_ = lean_unbox(v_fullNames_3662_);
v_allowHorizAliases_boxed_3666_ = lean_unbox(v_allowHorizAliases_3663_);
v_res_3667_ = l_Lean_unresolveNameGlobal(v_m_3654_, v_inst_3655_, v_inst_3656_, v_inst_3657_, v_inst_3658_, v_inst_3659_, v_inst_3660_, v_n_u2080_3661_, v_fullNames_boxed_3665_, v_allowHorizAliases_boxed_3666_, v_filter_3664_);
return v_res_3667_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0(lean_object* v_toFunctor_3669_, lean_object* v_inst_3670_, lean_object* v_inst_3671_, lean_object* v_inst_3672_, lean_object* v_inst_3673_, lean_object* v_inst_3674_, lean_object* v_inst_3675_, lean_object* v_inst_3676_, lean_object* v_n_3677_){
_start:
{
lean_object* v_map_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; 
v_map_3678_ = lean_ctor_get(v_toFunctor_3669_, 0);
lean_inc(v_map_3678_);
lean_dec_ref(v_toFunctor_3669_);
v___x_3679_ = ((lean_object*)(l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0___closed__0));
v___x_3680_ = l_Lean_resolveLocalName___redArg(v_inst_3670_, v_inst_3671_, v_inst_3672_, v_inst_3673_, v_inst_3674_, v_inst_3675_, v_inst_3676_, v_n_3677_);
v___x_3681_ = lean_apply_4(v_map_3678_, lean_box(0), lean_box(0), v___x_3679_, v___x_3680_);
return v___x_3681_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(lean_object* v_inst_3682_, lean_object* v_inst_3683_, lean_object* v_inst_3684_, lean_object* v_inst_3685_, lean_object* v_inst_3686_, lean_object* v_inst_3687_, lean_object* v_inst_3688_, lean_object* v_n_u2080_3689_, uint8_t v_fullNames_3690_){
_start:
{
lean_object* v_toApplicative_3691_; lean_object* v_toFunctor_3692_; uint8_t v___x_3693_; lean_object* v___f_3694_; lean_object* v___x_3695_; 
v_toApplicative_3691_ = lean_ctor_get(v_inst_3682_, 0);
v_toFunctor_3692_ = lean_ctor_get(v_toApplicative_3691_, 0);
v___x_3693_ = 0;
lean_inc(v_inst_3687_);
lean_inc_ref(v_inst_3686_);
lean_inc_ref(v_inst_3685_);
lean_inc_ref(v_inst_3684_);
lean_inc_ref(v_inst_3683_);
lean_inc_ref(v_inst_3682_);
lean_inc_ref(v_toFunctor_3692_);
v___f_3694_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0), 9, 8);
lean_closure_set(v___f_3694_, 0, v_toFunctor_3692_);
lean_closure_set(v___f_3694_, 1, v_inst_3682_);
lean_closure_set(v___f_3694_, 2, v_inst_3683_);
lean_closure_set(v___f_3694_, 3, v_inst_3684_);
lean_closure_set(v___f_3694_, 4, v_inst_3685_);
lean_closure_set(v___f_3694_, 5, v_inst_3686_);
lean_closure_set(v___f_3694_, 6, v_inst_3687_);
lean_closure_set(v___f_3694_, 7, v_inst_3688_);
v___x_3695_ = l_Lean_unresolveNameGlobal_x3f___redArg(v_inst_3682_, v_inst_3683_, v_inst_3684_, v_inst_3685_, v_inst_3686_, v_inst_3687_, v_n_u2080_3689_, v_fullNames_3690_, v___x_3693_, v___f_3694_);
return v___x_3695_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___boxed(lean_object* v_inst_3696_, lean_object* v_inst_3697_, lean_object* v_inst_3698_, lean_object* v_inst_3699_, lean_object* v_inst_3700_, lean_object* v_inst_3701_, lean_object* v_inst_3702_, lean_object* v_n_u2080_3703_, lean_object* v_fullNames_3704_){
_start:
{
uint8_t v_fullNames_boxed_3705_; lean_object* v_res_3706_; 
v_fullNames_boxed_3705_ = lean_unbox(v_fullNames_3704_);
v_res_3706_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(v_inst_3696_, v_inst_3697_, v_inst_3698_, v_inst_3699_, v_inst_3700_, v_inst_3701_, v_inst_3702_, v_n_u2080_3703_, v_fullNames_boxed_3705_);
return v_res_3706_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f(lean_object* v_m_3707_, lean_object* v_inst_3708_, lean_object* v_inst_3709_, lean_object* v_inst_3710_, lean_object* v_inst_3711_, lean_object* v_inst_3712_, lean_object* v_inst_3713_, lean_object* v_inst_3714_, lean_object* v_n_u2080_3715_, uint8_t v_fullNames_3716_){
_start:
{
lean_object* v___x_3717_; 
v___x_3717_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(v_inst_3708_, v_inst_3709_, v_inst_3710_, v_inst_3711_, v_inst_3712_, v_inst_3713_, v_inst_3714_, v_n_u2080_3715_, v_fullNames_3716_);
return v___x_3717_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___boxed(lean_object* v_m_3718_, lean_object* v_inst_3719_, lean_object* v_inst_3720_, lean_object* v_inst_3721_, lean_object* v_inst_3722_, lean_object* v_inst_3723_, lean_object* v_inst_3724_, lean_object* v_inst_3725_, lean_object* v_n_u2080_3726_, lean_object* v_fullNames_3727_){
_start:
{
uint8_t v_fullNames_boxed_3728_; lean_object* v_res_3729_; 
v_fullNames_boxed_3728_ = lean_unbox(v_fullNames_3727_);
v_res_3729_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f(v_m_3718_, v_inst_3719_, v_inst_3720_, v_inst_3721_, v_inst_3722_, v_inst_3723_, v_inst_3724_, v_inst_3725_, v_n_u2080_3726_, v_fullNames_boxed_3728_);
return v_res_3729_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___redArg(lean_object* v_inst_3730_, lean_object* v_inst_3731_, lean_object* v_inst_3732_, lean_object* v_inst_3733_, lean_object* v_inst_3734_, lean_object* v_inst_3735_, lean_object* v_inst_3736_, lean_object* v_n_u2080_3737_, uint8_t v_fullNames_3738_){
_start:
{
lean_object* v_toApplicative_3739_; lean_object* v_toBind_3740_; lean_object* v_toPure_3741_; lean_object* v___x_3742_; lean_object* v___f_3743_; lean_object* v___x_3744_; 
v_toApplicative_3739_ = lean_ctor_get(v_inst_3730_, 0);
v_toBind_3740_ = lean_ctor_get(v_inst_3730_, 1);
lean_inc(v_toBind_3740_);
v_toPure_3741_ = lean_ctor_get(v_toApplicative_3739_, 1);
lean_inc(v_toPure_3741_);
lean_inc(v_n_u2080_3737_);
v___x_3742_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(v_inst_3730_, v_inst_3731_, v_inst_3732_, v_inst_3733_, v_inst_3734_, v_inst_3735_, v_inst_3736_, v_n_u2080_3737_, v_fullNames_3738_);
v___f_3743_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3743_, 0, v_toPure_3741_);
lean_closure_set(v___f_3743_, 1, v_n_u2080_3737_);
v___x_3744_ = lean_apply_4(v_toBind_3740_, lean_box(0), lean_box(0), v___x_3742_, v___f_3743_);
return v___x_3744_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___redArg___boxed(lean_object* v_inst_3745_, lean_object* v_inst_3746_, lean_object* v_inst_3747_, lean_object* v_inst_3748_, lean_object* v_inst_3749_, lean_object* v_inst_3750_, lean_object* v_inst_3751_, lean_object* v_n_u2080_3752_, lean_object* v_fullNames_3753_){
_start:
{
uint8_t v_fullNames_boxed_3754_; lean_object* v_res_3755_; 
v_fullNames_boxed_3754_ = lean_unbox(v_fullNames_3753_);
v_res_3755_ = l_Lean_unresolveNameGlobalAvoidingLocals___redArg(v_inst_3745_, v_inst_3746_, v_inst_3747_, v_inst_3748_, v_inst_3749_, v_inst_3750_, v_inst_3751_, v_n_u2080_3752_, v_fullNames_boxed_3754_);
return v_res_3755_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals(lean_object* v_m_3756_, lean_object* v_inst_3757_, lean_object* v_inst_3758_, lean_object* v_inst_3759_, lean_object* v_inst_3760_, lean_object* v_inst_3761_, lean_object* v_inst_3762_, lean_object* v_inst_3763_, lean_object* v_n_u2080_3764_, uint8_t v_fullNames_3765_){
_start:
{
lean_object* v___x_3766_; 
v___x_3766_ = l_Lean_unresolveNameGlobalAvoidingLocals___redArg(v_inst_3757_, v_inst_3758_, v_inst_3759_, v_inst_3760_, v_inst_3761_, v_inst_3762_, v_inst_3763_, v_n_u2080_3764_, v_fullNames_3765_);
return v___x_3766_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___boxed(lean_object* v_m_3767_, lean_object* v_inst_3768_, lean_object* v_inst_3769_, lean_object* v_inst_3770_, lean_object* v_inst_3771_, lean_object* v_inst_3772_, lean_object* v_inst_3773_, lean_object* v_inst_3774_, lean_object* v_n_u2080_3775_, lean_object* v_fullNames_3776_){
_start:
{
uint8_t v_fullNames_boxed_3777_; lean_object* v_res_3778_; 
v_fullNames_boxed_3777_ = lean_unbox(v_fullNames_3776_);
v_res_3778_ = l_Lean_unresolveNameGlobalAvoidingLocals(v_m_3767_, v_inst_3768_, v_inst_3769_, v_inst_3770_, v_inst_3771_, v_inst_3772_, v_inst_3773_, v_inst_3774_, v_n_u2080_3775_, v_fullNames_boxed_3777_);
return v_res_3778_;
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
