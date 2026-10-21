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
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_mkPrivateNameCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_List_eraseDupsBy___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_rootNamespace;
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
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
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
LEAN_EXPORT uint8_t l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0___closed__0 = (const lean_object*)&l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT uint8_t l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(lean_object* v_env_1198_, lean_object* v_declName_1199_){
_start:
{
uint8_t v___x_1200_; 
v___x_1200_ = l_Lean_Environment_containsOnBranch(v_env_1198_, v_declName_1199_);
if (v___x_1200_ == 0)
{
uint8_t v___x_1201_; 
lean_inc(v_declName_1199_);
lean_inc_ref(v_env_1198_);
v___x_1201_ = lean_is_reserved_name(v_env_1198_, v_declName_1199_);
if (v___x_1201_ == 0)
{
uint8_t v___x_1202_; uint8_t v___x_1203_; 
v___x_1202_ = 1;
v___x_1203_ = l_Lean_Environment_contains(v_env_1198_, v_declName_1199_, v___x_1202_);
return v___x_1203_;
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
return v___x_1200_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved___boxed(lean_object* v_env_1204_, lean_object* v_declName_1205_){
_start:
{
uint8_t v_res_1206_; lean_object* v_r_1207_; 
v_res_1206_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1204_, v_declName_1205_);
v_r_1207_ = lean_box(v_res_1206_);
return v_r_1207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(lean_object* v_name_1208_, lean_object* v_decl_1209_, lean_object* v_ref_1210_){
_start:
{
lean_object* v_defValue_1212_; lean_object* v_descr_1213_; lean_object* v_deprecation_x3f_1214_; lean_object* v___x_1215_; uint8_t v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; 
v_defValue_1212_ = lean_ctor_get(v_decl_1209_, 0);
v_descr_1213_ = lean_ctor_get(v_decl_1209_, 1);
v_deprecation_x3f_1214_ = lean_ctor_get(v_decl_1209_, 2);
v___x_1215_ = lean_alloc_ctor(1, 0, 1);
v___x_1216_ = lean_unbox(v_defValue_1212_);
lean_ctor_set_uint8(v___x_1215_, 0, v___x_1216_);
lean_inc(v_deprecation_x3f_1214_);
lean_inc_ref(v_descr_1213_);
lean_inc_n(v_name_1208_, 2);
v___x_1217_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1217_, 0, v_name_1208_);
lean_ctor_set(v___x_1217_, 1, v_ref_1210_);
lean_ctor_set(v___x_1217_, 2, v___x_1215_);
lean_ctor_set(v___x_1217_, 3, v_descr_1213_);
lean_ctor_set(v___x_1217_, 4, v_deprecation_x3f_1214_);
v___x_1218_ = lean_register_option(v_name_1208_, v___x_1217_);
if (lean_obj_tag(v___x_1218_) == 0)
{
lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1226_; 
v_isSharedCheck_1226_ = !lean_is_exclusive(v___x_1218_);
if (v_isSharedCheck_1226_ == 0)
{
lean_object* v_unused_1227_; 
v_unused_1227_ = lean_ctor_get(v___x_1218_, 0);
lean_dec(v_unused_1227_);
v___x_1220_ = v___x_1218_;
v_isShared_1221_ = v_isSharedCheck_1226_;
goto v_resetjp_1219_;
}
else
{
lean_dec(v___x_1218_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1226_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v___x_1222_; lean_object* v___x_1224_; 
lean_inc(v_defValue_1212_);
v___x_1222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1222_, 0, v_name_1208_);
lean_ctor_set(v___x_1222_, 1, v_defValue_1212_);
if (v_isShared_1221_ == 0)
{
lean_ctor_set(v___x_1220_, 0, v___x_1222_);
v___x_1224_ = v___x_1220_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v___x_1222_);
v___x_1224_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1223_;
}
v_reusejp_1223_:
{
return v___x_1224_;
}
}
}
else
{
lean_object* v_a_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1235_; 
lean_dec(v_name_1208_);
v_a_1228_ = lean_ctor_get(v___x_1218_, 0);
v_isSharedCheck_1235_ = !lean_is_exclusive(v___x_1218_);
if (v_isSharedCheck_1235_ == 0)
{
v___x_1230_ = v___x_1218_;
v_isShared_1231_ = v_isSharedCheck_1235_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_a_1228_);
lean_dec(v___x_1218_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1235_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
lean_object* v___x_1233_; 
if (v_isShared_1231_ == 0)
{
v___x_1233_ = v___x_1230_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v_a_1228_);
v___x_1233_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
return v___x_1233_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_1236_, lean_object* v_decl_1237_, lean_object* v_ref_1238_, lean_object* v_a_1239_){
_start:
{
lean_object* v_res_1240_; 
v_res_1240_ = l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(v_name_1236_, v_decl_1237_, v_ref_1238_);
lean_dec_ref(v_decl_1237_);
return v_res_1240_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1259_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__2_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_));
v___x_1260_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_));
v___x_1261_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__6_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_));
v___x_1262_ = l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(v___x_1259_, v___x_1260_, v___x_1261_);
return v___x_1262_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4____boxed(lean_object* v_a_1263_){
_start:
{
lean_object* v_res_1264_; 
v_res_1264_ = l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4_();
return v_res_1264_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; 
v___x_1283_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__1_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_));
v___x_1284_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__3_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_));
v___x_1285_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_ResolveName_initFn___closed__4_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_));
v___x_1286_ = l_Lean_Option_register___at___00__private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_3045884420____hygCtx___hyg_4__spec__0(v___x_1283_, v___x_1284_, v___x_1285_);
return v___x_1286_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4____boxed(lean_object* v_a_1287_){
_start:
{
lean_object* v_res_1288_; 
v_res_1288_ = l___private_Lean_ResolveName_0__Lean_ResolveName_initFn_00___x40_Lean_ResolveName_2661638853____hygCtx___hyg_4_();
return v_res_1288_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1(lean_object* v_opts_1289_, lean_object* v_opt_1290_){
_start:
{
lean_object* v_name_1291_; lean_object* v_defValue_1292_; lean_object* v_map_1293_; lean_object* v___x_1294_; 
v_name_1291_ = lean_ctor_get(v_opt_1290_, 0);
v_defValue_1292_ = lean_ctor_get(v_opt_1290_, 1);
v_map_1293_ = lean_ctor_get(v_opts_1289_, 0);
v___x_1294_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1293_, v_name_1291_);
if (lean_obj_tag(v___x_1294_) == 0)
{
uint8_t v___x_1295_; 
v___x_1295_ = lean_unbox(v_defValue_1292_);
return v___x_1295_;
}
else
{
lean_object* v_val_1296_; 
v_val_1296_ = lean_ctor_get(v___x_1294_, 0);
lean_inc(v_val_1296_);
lean_dec_ref_known(v___x_1294_, 1);
if (lean_obj_tag(v_val_1296_) == 1)
{
uint8_t v_v_1297_; 
v_v_1297_ = lean_ctor_get_uint8(v_val_1296_, 0);
lean_dec_ref_known(v_val_1296_, 0);
return v_v_1297_;
}
else
{
uint8_t v___x_1298_; 
lean_dec(v_val_1296_);
v___x_1298_ = lean_unbox(v_defValue_1292_);
return v___x_1298_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1___boxed(lean_object* v_opts_1299_, lean_object* v_opt_1300_){
_start:
{
uint8_t v_res_1301_; lean_object* v_r_1302_; 
v_res_1301_ = l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1(v_opts_1299_, v_opt_1300_);
lean_dec_ref(v_opt_1300_);
lean_dec_ref(v_opts_1299_);
v_r_1302_ = lean_box(v_res_1301_);
return v_r_1302_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0(lean_object* v_declName_1306_, lean_object* v_env_1307_, lean_object* v_as_1308_, size_t v_sz_1309_, size_t v_i_1310_, lean_object* v_b_1311_){
_start:
{
uint8_t v___x_1312_; 
v___x_1312_ = lean_usize_dec_lt(v_i_1310_, v_sz_1309_);
if (v___x_1312_ == 0)
{
lean_dec_ref(v_env_1307_);
lean_dec(v_declName_1306_);
lean_inc_ref(v_b_1311_);
return v_b_1311_;
}
else
{
lean_object* v_a_1313_; lean_object* v_toImport_1314_; lean_object* v_module_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; uint8_t v___x_1318_; 
v_a_1313_ = lean_array_uget_borrowed(v_as_1308_, v_i_1310_);
v_toImport_1314_ = lean_ctor_get(v_a_1313_, 0);
v_module_1315_ = lean_ctor_get(v_toImport_1314_, 0);
v___x_1316_ = lean_box(0);
lean_inc(v_declName_1306_);
lean_inc(v_module_1315_);
v___x_1317_ = l_Lean_mkPrivateNameCore(v_module_1315_, v_declName_1306_);
lean_inc(v___x_1317_);
lean_inc_ref(v_env_1307_);
v___x_1318_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1307_, v___x_1317_);
if (v___x_1318_ == 0)
{
lean_object* v___x_1319_; size_t v___x_1320_; size_t v___x_1321_; 
lean_dec(v___x_1317_);
v___x_1319_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___closed__0));
v___x_1320_ = ((size_t)1ULL);
v___x_1321_ = lean_usize_add(v_i_1310_, v___x_1320_);
v_i_1310_ = v___x_1321_;
v_b_1311_ = v___x_1319_;
goto _start;
}
else
{
lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; 
lean_dec_ref(v_env_1307_);
lean_dec(v_declName_1306_);
v___x_1323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1317_);
v___x_1324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1323_);
v___x_1325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1324_);
lean_ctor_set(v___x_1325_, 1, v___x_1316_);
return v___x_1325_;
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
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(lean_object* v_env_1335_, lean_object* v_opts_1336_, lean_object* v_declName_1337_){
_start:
{
uint8_t v_isExporting_1353_; 
v_isExporting_1353_ = lean_ctor_get_uint8(v_env_1335_, sizeof(void*)*13);
if (v_isExporting_1353_ == 0)
{
goto v___jp_1338_;
}
else
{
lean_object* v___x_1354_; uint8_t v___x_1355_; 
v___x_1354_ = l_Lean_ResolveName_backward_privateInPublic;
v___x_1355_ = l_Lean_Option_get___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__1(v_opts_1336_, v___x_1354_);
if (v___x_1355_ == 0)
{
lean_object* v___x_1356_; 
lean_dec(v_declName_1337_);
lean_dec_ref(v_env_1335_);
v___x_1356_ = lean_box(0);
return v___x_1356_;
}
else
{
goto v___jp_1338_;
}
}
v___jp_1338_:
{
lean_object* v___x_1339_; uint8_t v___x_1340_; 
lean_inc(v_declName_1337_);
v___x_1339_ = l_Lean_mkPrivateName(v_env_1335_, v_declName_1337_);
lean_inc(v___x_1339_);
lean_inc_ref(v_env_1335_);
v___x_1340_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1335_, v___x_1339_);
if (v___x_1340_ == 0)
{
lean_object* v___x_1341_; uint8_t v_isModule_1342_; 
lean_dec(v___x_1339_);
v___x_1341_ = l_Lean_Environment_header(v_env_1335_);
v_isModule_1342_ = lean_ctor_get_uint8(v___x_1341_, sizeof(void*)*8 + 4);
if (v_isModule_1342_ == 0)
{
lean_object* v___x_1343_; 
lean_dec_ref(v___x_1341_);
lean_dec(v_declName_1337_);
lean_dec_ref(v_env_1335_);
v___x_1343_ = lean_box(0);
return v___x_1343_;
}
else
{
lean_object* v_importAllModules_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; size_t v_sz_1347_; size_t v___x_1348_; lean_object* v___x_1349_; lean_object* v_fst_1350_; 
v_importAllModules_1344_ = lean_ctor_get(v___x_1341_, 6);
lean_inc_ref(v_importAllModules_1344_);
lean_dec_ref(v___x_1341_);
v___x_1345_ = lean_box(0);
v___x_1346_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0___closed__0));
v_sz_1347_ = lean_array_size(v_importAllModules_1344_);
v___x_1348_ = ((size_t)0ULL);
v___x_1349_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName_spec__0(v_declName_1337_, v_env_1335_, v_importAllModules_1344_, v_sz_1347_, v___x_1348_, v___x_1346_);
lean_dec_ref(v_importAllModules_1344_);
v_fst_1350_ = lean_ctor_get(v___x_1349_, 0);
lean_inc(v_fst_1350_);
lean_dec_ref(v___x_1349_);
if (lean_obj_tag(v_fst_1350_) == 0)
{
return v___x_1345_;
}
else
{
lean_object* v_val_1351_; 
v_val_1351_ = lean_ctor_get(v_fst_1350_, 0);
lean_inc(v_val_1351_);
lean_dec_ref_known(v_fst_1350_, 1);
return v_val_1351_;
}
}
}
else
{
lean_object* v___x_1352_; 
lean_dec(v_declName_1337_);
lean_dec_ref(v_env_1335_);
v___x_1352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1339_);
return v___x_1352_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName___boxed(lean_object* v_env_1357_, lean_object* v_opts_1358_, lean_object* v_declName_1359_){
_start:
{
lean_object* v_res_1360_; 
v_res_1360_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(v_env_1357_, v_opts_1358_, v_declName_1359_);
lean_dec_ref(v_opts_1358_);
return v_res_1360_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(lean_object* v_env_1361_, lean_object* v_opts_1362_, lean_object* v_ns_1363_, lean_object* v_id_1364_){
_start:
{
lean_object* v_resolvedId_1365_; uint8_t v___x_1366_; lean_object* v_resolvedIds_1367_; 
lean_inc(v_id_1364_);
v_resolvedId_1365_ = l_Lean_Name_append(v_ns_1363_, v_id_1364_);
v___x_1366_ = l_Lean_Name_isAtomic(v_id_1364_);
lean_dec(v_id_1364_);
lean_inc_ref(v_env_1361_);
v_resolvedIds_1367_ = l_Lean_getAliases(v_env_1361_, v_resolvedId_1365_, v___x_1366_);
if (v___x_1366_ == 0)
{
goto v___jp_1368_;
}
else
{
uint8_t v___x_1374_; 
lean_inc(v_resolvedId_1365_);
lean_inc_ref(v_env_1361_);
v___x_1374_ = l_Lean_isProtected(v_env_1361_, v_resolvedId_1365_);
if (v___x_1374_ == 0)
{
goto v___jp_1368_;
}
else
{
lean_dec(v_resolvedId_1365_);
lean_dec_ref(v_env_1361_);
return v_resolvedIds_1367_;
}
}
v___jp_1368_:
{
uint8_t v___x_1369_; 
lean_inc(v_resolvedId_1365_);
lean_inc_ref(v_env_1361_);
v___x_1369_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1361_, v_resolvedId_1365_);
if (v___x_1369_ == 0)
{
lean_object* v___x_1370_; 
v___x_1370_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(v_env_1361_, v_opts_1362_, v_resolvedId_1365_);
if (lean_obj_tag(v___x_1370_) == 1)
{
lean_object* v_val_1371_; lean_object* v___x_1372_; 
v_val_1371_ = lean_ctor_get(v___x_1370_, 0);
lean_inc(v_val_1371_);
lean_dec_ref_known(v___x_1370_, 1);
v___x_1372_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1372_, 0, v_val_1371_);
lean_ctor_set(v___x_1372_, 1, v_resolvedIds_1367_);
return v___x_1372_;
}
else
{
lean_dec(v___x_1370_);
return v_resolvedIds_1367_;
}
}
else
{
lean_object* v___x_1373_; 
lean_dec_ref(v_env_1361_);
v___x_1373_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1373_, 0, v_resolvedId_1365_);
lean_ctor_set(v___x_1373_, 1, v_resolvedIds_1367_);
return v___x_1373_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName___boxed(lean_object* v_env_1375_, lean_object* v_opts_1376_, lean_object* v_ns_1377_, lean_object* v_id_1378_){
_start:
{
lean_object* v_res_1379_; 
v_res_1379_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(v_env_1375_, v_opts_1376_, v_ns_1377_, v_id_1378_);
lean_dec_ref(v_opts_1376_);
return v_res_1379_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace(lean_object* v_env_1380_, lean_object* v_opts_1381_, lean_object* v_id_1382_, lean_object* v_x_1383_){
_start:
{
if (lean_obj_tag(v_x_1383_) == 1)
{
lean_object* v_pre_1384_; lean_object* v___x_1385_; 
v_pre_1384_ = lean_ctor_get(v_x_1383_, 0);
lean_inc(v_pre_1384_);
lean_inc(v_id_1382_);
lean_inc_ref(v_env_1380_);
v___x_1385_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(v_env_1380_, v_opts_1381_, v_x_1383_, v_id_1382_);
if (lean_obj_tag(v___x_1385_) == 0)
{
v_x_1383_ = v_pre_1384_;
goto _start;
}
else
{
lean_dec(v_pre_1384_);
lean_dec(v_id_1382_);
lean_dec_ref(v_env_1380_);
return v___x_1385_;
}
}
else
{
lean_object* v___x_1387_; 
lean_dec(v_x_1383_);
lean_dec(v_id_1382_);
lean_dec_ref(v_env_1380_);
v___x_1387_ = lean_box(0);
return v___x_1387_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace___boxed(lean_object* v_env_1388_, lean_object* v_opts_1389_, lean_object* v_id_1390_, lean_object* v_x_1391_){
_start:
{
lean_object* v_res_1392_; 
v_res_1392_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace(v_env_1388_, v_opts_1389_, v_id_1390_, v_x_1391_);
lean_dec_ref(v_opts_1389_);
return v_res_1392_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact(lean_object* v_env_1393_, lean_object* v_opts_1394_, lean_object* v_id_1395_){
_start:
{
uint8_t v___x_1396_; 
v___x_1396_ = l_Lean_Name_isAtomic(v_id_1395_);
if (v___x_1396_ == 0)
{
lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v_resolvedId_1399_; uint8_t v___x_1400_; 
v___x_1397_ = l_Lean_rootNamespace;
v___x_1398_ = lean_box(0);
v_resolvedId_1399_ = l_Lean_Name_replacePrefix(v_id_1395_, v___x_1397_, v___x_1398_);
lean_inc(v_resolvedId_1399_);
lean_inc_ref(v_env_1393_);
v___x_1400_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1393_, v_resolvedId_1399_);
if (v___x_1400_ == 0)
{
lean_object* v___x_1401_; 
v___x_1401_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(v_env_1393_, v_opts_1394_, v_resolvedId_1399_);
return v___x_1401_;
}
else
{
lean_object* v___x_1402_; 
lean_dec_ref(v_env_1393_);
v___x_1402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1402_, 0, v_resolvedId_1399_);
return v___x_1402_;
}
}
else
{
lean_object* v___x_1403_; 
lean_dec(v_id_1395_);
lean_dec_ref(v_env_1393_);
v___x_1403_ = lean_box(0);
return v___x_1403_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact___boxed(lean_object* v_env_1404_, lean_object* v_opts_1405_, lean_object* v_id_1406_){
_start:
{
lean_object* v_res_1407_; 
v_res_1407_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact(v_env_1404_, v_opts_1405_, v_id_1406_);
lean_dec_ref(v_opts_1405_);
return v_res_1407_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls(lean_object* v_env_1408_, lean_object* v_opts_1409_, lean_object* v_id_1410_, lean_object* v_x_1411_, lean_object* v_x_1412_){
_start:
{
if (lean_obj_tag(v_x_1411_) == 0)
{
lean_dec(v_id_1410_);
lean_dec_ref(v_env_1408_);
return v_x_1412_;
}
else
{
lean_object* v_head_1413_; 
v_head_1413_ = lean_ctor_get(v_x_1411_, 0);
lean_inc(v_head_1413_);
if (lean_obj_tag(v_head_1413_) == 0)
{
lean_object* v_tail_1414_; lean_object* v_ns_1415_; lean_object* v_except_1416_; uint8_t v___x_1417_; 
v_tail_1414_ = lean_ctor_get(v_x_1411_, 1);
lean_inc(v_tail_1414_);
lean_dec_ref_known(v_x_1411_, 2);
v_ns_1415_ = lean_ctor_get(v_head_1413_, 0);
lean_inc(v_ns_1415_);
v_except_1416_ = lean_ctor_get(v_head_1413_, 1);
lean_inc(v_except_1416_);
lean_dec_ref_known(v_head_1413_, 2);
v___x_1417_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_id_1410_, v_except_1416_);
lean_dec(v_except_1416_);
if (v___x_1417_ == 0)
{
lean_object* v_newResolvedIds_1418_; lean_object* v___x_1419_; 
lean_inc(v_id_1410_);
lean_inc_ref(v_env_1408_);
v_newResolvedIds_1418_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveQualifiedName(v_env_1408_, v_opts_1409_, v_ns_1415_, v_id_1410_);
v___x_1419_ = l_List_appendTR___redArg(v_newResolvedIds_1418_, v_x_1412_);
v_x_1411_ = v_tail_1414_;
v_x_1412_ = v___x_1419_;
goto _start;
}
else
{
lean_dec(v_ns_1415_);
v_x_1411_ = v_tail_1414_;
goto _start;
}
}
else
{
lean_object* v_tail_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1442_; 
v_tail_1422_ = lean_ctor_get(v_x_1411_, 1);
v_isSharedCheck_1442_ = !lean_is_exclusive(v_x_1411_);
if (v_isSharedCheck_1442_ == 0)
{
lean_object* v_unused_1443_; 
v_unused_1443_ = lean_ctor_get(v_x_1411_, 0);
lean_dec(v_unused_1443_);
v___x_1424_ = v_x_1411_;
v_isShared_1425_ = v_isSharedCheck_1442_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_tail_1422_);
lean_dec(v_x_1411_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1442_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v_id_1426_; lean_object* v_declName_1427_; uint8_t v___x_1428_; 
v_id_1426_ = lean_ctor_get(v_head_1413_, 0);
lean_inc(v_id_1426_);
v_declName_1427_ = lean_ctor_get(v_head_1413_, 1);
lean_inc(v_declName_1427_);
lean_dec_ref_known(v_head_1413_, 2);
v___x_1428_ = lean_name_eq(v_id_1426_, v_id_1410_);
if (v___x_1428_ == 0)
{
uint8_t v___x_1429_; 
v___x_1429_ = l_Lean_Name_isPrefixOf(v_id_1426_, v_id_1410_);
if (v___x_1429_ == 0)
{
lean_dec(v_declName_1427_);
lean_dec(v_id_1426_);
lean_del_object(v___x_1424_);
v_x_1411_ = v_tail_1422_;
goto _start;
}
else
{
lean_object* v_candidate_1431_; uint8_t v___x_1432_; 
lean_inc(v_id_1410_);
v_candidate_1431_ = l_Lean_Name_replacePrefix(v_id_1410_, v_id_1426_, v_declName_1427_);
lean_dec(v_declName_1427_);
lean_dec(v_id_1426_);
lean_inc(v_candidate_1431_);
lean_inc_ref(v_env_1408_);
v___x_1432_ = l_Lean_Environment_contains(v_env_1408_, v_candidate_1431_, v___x_1429_);
if (v___x_1432_ == 0)
{
lean_dec(v_candidate_1431_);
lean_del_object(v___x_1424_);
v_x_1411_ = v_tail_1422_;
goto _start;
}
else
{
lean_object* v___x_1435_; 
if (v_isShared_1425_ == 0)
{
lean_ctor_set(v___x_1424_, 1, v_x_1412_);
lean_ctor_set(v___x_1424_, 0, v_candidate_1431_);
v___x_1435_ = v___x_1424_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1437_; 
v_reuseFailAlloc_1437_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1437_, 0, v_candidate_1431_);
lean_ctor_set(v_reuseFailAlloc_1437_, 1, v_x_1412_);
v___x_1435_ = v_reuseFailAlloc_1437_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
v_x_1411_ = v_tail_1422_;
v_x_1412_ = v___x_1435_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_1439_; 
lean_dec(v_id_1426_);
if (v_isShared_1425_ == 0)
{
lean_ctor_set(v___x_1424_, 1, v_x_1412_);
lean_ctor_set(v___x_1424_, 0, v_declName_1427_);
v___x_1439_ = v___x_1424_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v_declName_1427_);
lean_ctor_set(v_reuseFailAlloc_1441_, 1, v_x_1412_);
v___x_1439_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
v_x_1411_ = v_tail_1422_;
v_x_1412_ = v___x_1439_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls___boxed(lean_object* v_env_1444_, lean_object* v_opts_1445_, lean_object* v_id_1446_, lean_object* v_x_1447_, lean_object* v_x_1448_){
_start:
{
lean_object* v_res_1449_; 
v_res_1449_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls(v_env_1444_, v_opts_1445_, v_id_1446_, v_x_1447_, v_x_1448_);
lean_dec_ref(v_opts_1445_);
return v_res_1449_;
}
}
LEAN_EXPORT lean_object* l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0(lean_object* v_as_1451_){
_start:
{
lean_object* v___f_1452_; lean_object* v___x_1453_; 
v___f_1452_ = ((lean_object*)(l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0___closed__0));
v___x_1453_ = l_List_eraseDupsBy___redArg(v___f_1452_, v_as_1451_);
return v___x_1453_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__1(lean_object* v_projs_1454_, lean_object* v_a_1455_, lean_object* v_a_1456_){
_start:
{
if (lean_obj_tag(v_a_1455_) == 0)
{
lean_object* v___x_1457_; 
lean_dec(v_projs_1454_);
v___x_1457_ = l_List_reverse___redArg(v_a_1456_);
return v___x_1457_;
}
else
{
lean_object* v_head_1458_; lean_object* v_tail_1459_; lean_object* v___x_1461_; uint8_t v_isShared_1462_; uint8_t v_isSharedCheck_1468_; 
v_head_1458_ = lean_ctor_get(v_a_1455_, 0);
v_tail_1459_ = lean_ctor_get(v_a_1455_, 1);
v_isSharedCheck_1468_ = !lean_is_exclusive(v_a_1455_);
if (v_isSharedCheck_1468_ == 0)
{
v___x_1461_ = v_a_1455_;
v_isShared_1462_ = v_isSharedCheck_1468_;
goto v_resetjp_1460_;
}
else
{
lean_inc(v_tail_1459_);
lean_inc(v_head_1458_);
lean_dec(v_a_1455_);
v___x_1461_ = lean_box(0);
v_isShared_1462_ = v_isSharedCheck_1468_;
goto v_resetjp_1460_;
}
v_resetjp_1460_:
{
lean_object* v___x_1463_; lean_object* v___x_1465_; 
lean_inc(v_projs_1454_);
v___x_1463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1463_, 0, v_head_1458_);
lean_ctor_set(v___x_1463_, 1, v_projs_1454_);
if (v_isShared_1462_ == 0)
{
lean_ctor_set(v___x_1461_, 1, v_a_1456_);
lean_ctor_set(v___x_1461_, 0, v___x_1463_);
v___x_1465_ = v___x_1461_;
goto v_reusejp_1464_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v___x_1463_);
lean_ctor_set(v_reuseFailAlloc_1467_, 1, v_a_1456_);
v___x_1465_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1464_;
}
v_reusejp_1464_:
{
v_a_1455_ = v_tail_1459_;
v_a_1456_ = v___x_1465_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop(lean_object* v_env_1469_, lean_object* v_opts_1470_, lean_object* v_ns_1471_, lean_object* v_openDecls_1472_, lean_object* v_extractionResult_1473_, lean_object* v_id_1474_, lean_object* v_projs_1475_){
_start:
{
if (lean_obj_tag(v_id_1474_) == 1)
{
lean_object* v_pre_1476_; lean_object* v_str_1477_; lean_object* v_imported_1478_; lean_object* v_ctx_1479_; lean_object* v_scopes_1480_; lean_object* v___x_1481_; lean_object* v_id_1482_; lean_object* v___y_1484_; lean_object* v___x_1494_; lean_object* v___y_1496_; 
v_pre_1476_ = lean_ctor_get(v_id_1474_, 0);
lean_inc(v_pre_1476_);
v_str_1477_ = lean_ctor_get(v_id_1474_, 1);
lean_inc_ref(v_str_1477_);
v_imported_1478_ = lean_ctor_get(v_extractionResult_1473_, 1);
v_ctx_1479_ = lean_ctor_get(v_extractionResult_1473_, 2);
v_scopes_1480_ = lean_ctor_get(v_extractionResult_1473_, 3);
lean_inc(v_scopes_1480_);
lean_inc(v_ctx_1479_);
lean_inc(v_imported_1478_);
v___x_1481_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1481_, 0, v_id_1474_);
lean_ctor_set(v___x_1481_, 1, v_imported_1478_);
lean_ctor_set(v___x_1481_, 2, v_ctx_1479_);
lean_ctor_set(v___x_1481_, 3, v_scopes_1480_);
v_id_1482_ = l_Lean_MacroScopesView_review(v___x_1481_);
lean_inc(v_ns_1471_);
lean_inc(v_id_1482_);
lean_inc_ref(v_env_1469_);
v___x_1494_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveUsingNamespace(v_env_1469_, v_opts_1470_, v_id_1482_, v_ns_1471_);
if (lean_obj_tag(v___x_1494_) == 0)
{
lean_object* v___x_1501_; 
lean_inc(v_id_1482_);
lean_inc_ref(v_env_1469_);
v___x_1501_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveExact(v_env_1469_, v_opts_1470_, v_id_1482_);
if (lean_obj_tag(v___x_1501_) == 0)
{
uint8_t v___x_1502_; 
lean_inc(v_id_1482_);
lean_inc_ref(v_env_1469_);
v___x_1502_ = l___private_Lean_ResolveName_0__Lean_ResolveName_containsDeclOrReserved(v_env_1469_, v_id_1482_);
if (v___x_1502_ == 0)
{
v___y_1496_ = v___x_1494_;
goto v___jp_1495_;
}
else
{
lean_object* v___x_1503_; 
lean_inc(v_id_1482_);
v___x_1503_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1503_, 0, v_id_1482_);
lean_ctor_set(v___x_1503_, 1, v___x_1494_);
v___y_1496_ = v___x_1503_;
goto v___jp_1495_;
}
}
else
{
lean_object* v_val_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; 
lean_dec(v_id_1482_);
lean_dec_ref(v_str_1477_);
lean_dec(v_pre_1476_);
lean_dec(v_openDecls_1472_);
lean_dec(v_ns_1471_);
lean_dec_ref(v_env_1469_);
v_val_1504_ = lean_ctor_get(v___x_1501_, 0);
lean_inc(v_val_1504_);
lean_dec_ref_known(v___x_1501_, 1);
v___x_1505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1505_, 0, v_val_1504_);
lean_ctor_set(v___x_1505_, 1, v_projs_1475_);
v___x_1506_ = lean_box(0);
v___x_1507_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1507_, 0, v___x_1505_);
lean_ctor_set(v___x_1507_, 1, v___x_1506_);
return v___x_1507_;
}
}
else
{
lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; 
lean_dec(v_id_1482_);
lean_dec_ref(v_str_1477_);
lean_dec(v_pre_1476_);
lean_dec(v_openDecls_1472_);
lean_dec(v_ns_1471_);
lean_dec_ref(v_env_1469_);
v___x_1508_ = l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0(v___x_1494_);
v___x_1509_ = lean_box(0);
v___x_1510_ = l_List_mapTR_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__1(v_projs_1475_, v___x_1508_, v___x_1509_);
return v___x_1510_;
}
v___jp_1483_:
{
lean_object* v_resolvedIds_1485_; uint8_t v___x_1486_; lean_object* v___x_1487_; lean_object* v_resolvedIds_1488_; 
lean_inc(v_openDecls_1472_);
lean_inc(v_id_1482_);
lean_inc_ref_n(v_env_1469_, 2);
v_resolvedIds_1485_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveOpenDecls(v_env_1469_, v_opts_1470_, v_id_1482_, v_openDecls_1472_, v___y_1484_);
v___x_1486_ = l_Lean_Name_isAtomic(v_id_1482_);
v___x_1487_ = l_Lean_getAliases(v_env_1469_, v_id_1482_, v___x_1486_);
lean_dec(v_id_1482_);
v_resolvedIds_1488_ = l_List_appendTR___redArg(v___x_1487_, v_resolvedIds_1485_);
if (lean_obj_tag(v_resolvedIds_1488_) == 0)
{
lean_object* v___x_1489_; 
v___x_1489_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1489_, 0, v_str_1477_);
lean_ctor_set(v___x_1489_, 1, v_projs_1475_);
v_id_1474_ = v_pre_1476_;
v_projs_1475_ = v___x_1489_;
goto _start;
}
else
{
lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; 
lean_dec_ref(v_str_1477_);
lean_dec(v_pre_1476_);
lean_dec(v_openDecls_1472_);
lean_dec(v_ns_1471_);
lean_dec_ref(v_env_1469_);
v___x_1491_ = l_List_eraseDups___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__0(v_resolvedIds_1488_);
v___x_1492_ = lean_box(0);
v___x_1493_ = l_List_mapTR_loop___at___00__private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop_spec__1(v_projs_1475_, v___x_1491_, v___x_1492_);
return v___x_1493_;
}
}
v___jp_1495_:
{
lean_object* v___x_1497_; 
lean_inc(v_id_1482_);
lean_inc_ref(v_env_1469_);
v___x_1497_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolvePrivateName(v_env_1469_, v_opts_1470_, v_id_1482_);
if (lean_obj_tag(v___x_1497_) == 1)
{
lean_object* v_val_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; 
v_val_1498_ = lean_ctor_get(v___x_1497_, 0);
lean_inc(v_val_1498_);
lean_dec_ref_known(v___x_1497_, 1);
v___x_1499_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1499_, 0, v_val_1498_);
lean_ctor_set(v___x_1499_, 1, v___x_1494_);
v___x_1500_ = l_List_appendTR___redArg(v___x_1499_, v___y_1496_);
v___y_1484_ = v___x_1500_;
goto v___jp_1483_;
}
else
{
lean_dec(v___x_1497_);
lean_dec(v___x_1494_);
v___y_1484_ = v___y_1496_;
goto v___jp_1483_;
}
}
}
else
{
lean_object* v___x_1511_; 
lean_dec(v_projs_1475_);
lean_dec(v_id_1474_);
lean_dec(v_openDecls_1472_);
lean_dec(v_ns_1471_);
lean_dec_ref(v_env_1469_);
v___x_1511_ = lean_box(0);
return v___x_1511_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop___boxed(lean_object* v_env_1512_, lean_object* v_opts_1513_, lean_object* v_ns_1514_, lean_object* v_openDecls_1515_, lean_object* v_extractionResult_1516_, lean_object* v_id_1517_, lean_object* v_projs_1518_){
_start:
{
lean_object* v_res_1519_; 
v_res_1519_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop(v_env_1512_, v_opts_1513_, v_ns_1514_, v_openDecls_1515_, v_extractionResult_1516_, v_id_1517_, v_projs_1518_);
lean_dec_ref(v_extractionResult_1516_);
lean_dec_ref(v_opts_1513_);
return v_res_1519_;
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object* v_env_1520_, lean_object* v_opts_1521_, lean_object* v_ns_1522_, lean_object* v_openDecls_1523_, lean_object* v_id_1524_){
_start:
{
lean_object* v_extractionResult_1525_; lean_object* v_name_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; 
v_extractionResult_1525_ = l_Lean_extractMacroScopes(v_id_1524_);
v_name_1526_ = lean_ctor_get(v_extractionResult_1525_, 0);
lean_inc(v_name_1526_);
v___x_1527_ = lean_box(0);
v___x_1528_ = l___private_Lean_ResolveName_0__Lean_ResolveName_resolveGlobalName_loop(v_env_1520_, v_opts_1521_, v_ns_1522_, v_openDecls_1523_, v_extractionResult_1525_, v_name_1526_, v___x_1527_);
lean_dec_ref(v_extractionResult_1525_);
return v___x_1528_;
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveGlobalName___boxed(lean_object* v_env_1529_, lean_object* v_opts_1530_, lean_object* v_ns_1531_, lean_object* v_openDecls_1532_, lean_object* v_id_1533_){
_start:
{
lean_object* v_res_1534_; 
v_res_1534_ = l_Lean_ResolveName_resolveGlobalName(v_env_1529_, v_opts_1530_, v_ns_1531_, v_openDecls_1532_, v_id_1533_);
lean_dec_ref(v_opts_1530_);
return v_res_1534_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_ResolveName_resolveNamespaceUsingScope_x3f_spec__0(lean_object* v_msg_1535_){
_start:
{
lean_object* v___x_1536_; lean_object* v___x_1537_; 
v___x_1536_ = lean_box(0);
v___x_1537_ = lean_panic_fn_borrowed(v___x_1536_, v_msg_1535_);
return v___x_1537_;
}
}
static lean_object* _init_l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3(void){
_start:
{
lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; 
v___x_1541_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__2));
v___x_1542_ = lean_unsigned_to_nat(9u);
v___x_1543_ = lean_unsigned_to_nat(235u);
v___x_1544_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__1));
v___x_1545_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__0));
v___x_1546_ = l_mkPanicMessageWithDecl(v___x_1545_, v___x_1544_, v___x_1543_, v___x_1542_, v___x_1541_);
return v___x_1546_;
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespaceUsingScope_x3f(lean_object* v_env_1547_, lean_object* v_n_1548_, lean_object* v_ns_1549_){
_start:
{
switch(lean_obj_tag(v_ns_1549_))
{
case 1:
{
lean_object* v_pre_1550_; lean_object* v___x_1551_; uint8_t v___x_1552_; 
v_pre_1550_ = lean_ctor_get(v_ns_1549_, 0);
lean_inc(v_pre_1550_);
lean_inc(v_n_1548_);
v___x_1551_ = l_Lean_Name_append(v_ns_1549_, v_n_1548_);
lean_inc_ref(v_env_1547_);
v___x_1552_ = l_Lean_Environment_isNamespace(v_env_1547_, v___x_1551_);
if (v___x_1552_ == 0)
{
lean_dec(v___x_1551_);
v_ns_1549_ = v_pre_1550_;
goto _start;
}
else
{
lean_object* v___x_1554_; 
lean_dec(v_pre_1550_);
lean_dec(v_n_1548_);
lean_dec_ref(v_env_1547_);
v___x_1554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1554_, 0, v___x_1551_);
return v___x_1554_;
}
}
case 0:
{
lean_object* v___x_1555_; lean_object* v_n_1556_; uint8_t v___x_1557_; 
v___x_1555_ = l_Lean_rootNamespace;
v_n_1556_ = l_Lean_Name_replacePrefix(v_n_1548_, v___x_1555_, v_ns_1549_);
v___x_1557_ = l_Lean_Environment_isNamespace(v_env_1547_, v_n_1556_);
if (v___x_1557_ == 0)
{
lean_object* v___x_1558_; 
lean_dec(v_n_1556_);
v___x_1558_ = lean_box(0);
return v___x_1558_;
}
else
{
lean_object* v___x_1559_; 
v___x_1559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1559_, 0, v_n_1556_);
return v___x_1559_;
}
}
default: 
{
lean_object* v___x_1560_; lean_object* v___x_1561_; 
lean_dec(v_ns_1549_);
lean_dec(v_n_1548_);
lean_dec_ref(v_env_1547_);
v___x_1560_ = lean_obj_once(&l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3, &l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3_once, _init_l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__3);
v___x_1561_ = l_panic___at___00Lean_ResolveName_resolveNamespaceUsingScope_x3f_spec__0(v___x_1560_);
return v___x_1561_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespaceUsingOpenDecls(lean_object* v_env_1562_, lean_object* v_n_1563_, lean_object* v_x_1564_){
_start:
{
if (lean_obj_tag(v_x_1564_) == 0)
{
lean_object* v___x_1565_; 
lean_dec(v_n_1563_);
lean_dec_ref(v_env_1562_);
v___x_1565_ = lean_box(0);
return v___x_1565_;
}
else
{
lean_object* v_head_1566_; 
v_head_1566_ = lean_ctor_get(v_x_1564_, 0);
if (lean_obj_tag(v_head_1566_) == 0)
{
lean_object* v_tail_1567_; lean_object* v___x_1569_; uint8_t v_isShared_1570_; uint8_t v_isSharedCheck_1582_; 
lean_inc_ref(v_head_1566_);
v_tail_1567_ = lean_ctor_get(v_x_1564_, 1);
v_isSharedCheck_1582_ = !lean_is_exclusive(v_x_1564_);
if (v_isSharedCheck_1582_ == 0)
{
lean_object* v_unused_1583_; 
v_unused_1583_ = lean_ctor_get(v_x_1564_, 0);
lean_dec(v_unused_1583_);
v___x_1569_ = v_x_1564_;
v_isShared_1570_ = v_isSharedCheck_1582_;
goto v_resetjp_1568_;
}
else
{
lean_inc(v_tail_1567_);
lean_dec(v_x_1564_);
v___x_1569_ = lean_box(0);
v_isShared_1570_ = v_isSharedCheck_1582_;
goto v_resetjp_1568_;
}
v_resetjp_1568_:
{
lean_object* v_ns_1571_; lean_object* v_except_1572_; lean_object* v___x_1573_; uint8_t v___x_1574_; 
v_ns_1571_ = lean_ctor_get(v_head_1566_, 0);
lean_inc(v_ns_1571_);
v_except_1572_ = lean_ctor_get(v_head_1566_, 1);
lean_inc(v_except_1572_);
lean_dec_ref_known(v_head_1566_, 2);
lean_inc(v_n_1563_);
v___x_1573_ = l_Lean_Name_append(v_ns_1571_, v_n_1563_);
lean_inc_ref(v_env_1562_);
v___x_1574_ = l_Lean_Environment_isNamespace(v_env_1562_, v___x_1573_);
if (v___x_1574_ == 0)
{
lean_dec(v___x_1573_);
lean_dec(v_except_1572_);
lean_del_object(v___x_1569_);
v_x_1564_ = v_tail_1567_;
goto _start;
}
else
{
uint8_t v___x_1576_; 
v___x_1576_ = l_List_elem___at___00Lean_addAliasEntry_spec__2(v_n_1563_, v_except_1572_);
lean_dec(v_except_1572_);
if (v___x_1576_ == 0)
{
lean_object* v___x_1577_; lean_object* v___x_1579_; 
v___x_1577_ = l_Lean_ResolveName_resolveNamespaceUsingOpenDecls(v_env_1562_, v_n_1563_, v_tail_1567_);
if (v_isShared_1570_ == 0)
{
lean_ctor_set(v___x_1569_, 1, v___x_1577_);
lean_ctor_set(v___x_1569_, 0, v___x_1573_);
v___x_1579_ = v___x_1569_;
goto v_reusejp_1578_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v___x_1573_);
lean_ctor_set(v_reuseFailAlloc_1580_, 1, v___x_1577_);
v___x_1579_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1578_;
}
v_reusejp_1578_:
{
return v___x_1579_;
}
}
else
{
lean_dec(v___x_1573_);
lean_del_object(v___x_1569_);
v_x_1564_ = v_tail_1567_;
goto _start;
}
}
}
}
else
{
lean_object* v_tail_1584_; 
v_tail_1584_ = lean_ctor_get(v_x_1564_, 1);
lean_inc(v_tail_1584_);
lean_dec_ref_known(v_x_1564_, 2);
v_x_1564_ = v_tail_1584_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ResolveName_resolveNamespace(lean_object* v_env_1586_, lean_object* v_ns_1587_, lean_object* v_openDecls_1588_, lean_object* v_id_1589_){
_start:
{
lean_object* v___x_1590_; 
lean_inc(v_id_1589_);
lean_inc_ref(v_env_1586_);
v___x_1590_ = l_Lean_ResolveName_resolveNamespaceUsingScope_x3f(v_env_1586_, v_id_1589_, v_ns_1587_);
if (lean_obj_tag(v___x_1590_) == 0)
{
lean_object* v___x_1591_; 
v___x_1591_ = l_Lean_ResolveName_resolveNamespaceUsingOpenDecls(v_env_1586_, v_id_1589_, v_openDecls_1588_);
return v___x_1591_;
}
else
{
lean_object* v_val_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; 
v_val_1592_ = lean_ctor_get(v___x_1590_, 0);
lean_inc(v_val_1592_);
lean_dec_ref_known(v___x_1590_, 1);
v___x_1593_ = l_Lean_ResolveName_resolveNamespaceUsingOpenDecls(v_env_1586_, v_id_1589_, v_openDecls_1588_);
v___x_1594_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1594_, 0, v_val_1592_);
lean_ctor_set(v___x_1594_, 1, v___x_1593_);
return v___x_1594_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadResolveNameOfMonadLift___redArg(lean_object* v_inst_1595_, lean_object* v_inst_1596_){
_start:
{
lean_object* v_getCurrNamespace_1597_; lean_object* v_getOpenDecls_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1607_; 
v_getCurrNamespace_1597_ = lean_ctor_get(v_inst_1596_, 0);
v_getOpenDecls_1598_ = lean_ctor_get(v_inst_1596_, 1);
v_isSharedCheck_1607_ = !lean_is_exclusive(v_inst_1596_);
if (v_isSharedCheck_1607_ == 0)
{
v___x_1600_ = v_inst_1596_;
v_isShared_1601_ = v_isSharedCheck_1607_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_getOpenDecls_1598_);
lean_inc(v_getCurrNamespace_1597_);
lean_dec(v_inst_1596_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1607_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1605_; 
lean_inc(v_inst_1595_);
v___x_1602_ = lean_apply_2(v_inst_1595_, lean_box(0), v_getCurrNamespace_1597_);
v___x_1603_ = lean_apply_2(v_inst_1595_, lean_box(0), v_getOpenDecls_1598_);
if (v_isShared_1601_ == 0)
{
lean_ctor_set(v___x_1600_, 1, v___x_1603_);
lean_ctor_set(v___x_1600_, 0, v___x_1602_);
v___x_1605_ = v___x_1600_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v___x_1602_);
lean_ctor_set(v_reuseFailAlloc_1606_, 1, v___x_1603_);
v___x_1605_ = v_reuseFailAlloc_1606_;
goto v_reusejp_1604_;
}
v_reusejp_1604_:
{
return v___x_1605_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadResolveNameOfMonadLift(lean_object* v_m_1608_, lean_object* v_n_1609_, lean_object* v_inst_1610_, lean_object* v_inst_1611_){
_start:
{
lean_object* v___x_1612_; 
v___x_1612_ = l_Lean_instMonadResolveNameOfMonadLift___redArg(v_inst_1610_, v_inst_1611_);
return v___x_1612_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1614_; lean_object* v___x_1615_; 
v___x_1614_ = ((lean_object*)(l_Lean_checkPrivateInPublic___redArg___lam__0___closed__0));
v___x_1615_ = l_Lean_stringToMessageData(v___x_1614_);
return v___x_1615_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1617_; lean_object* v___x_1618_; 
v___x_1617_ = ((lean_object*)(l_Lean_checkPrivateInPublic___redArg___lam__0___closed__2));
v___x_1618_ = l_Lean_stringToMessageData(v___x_1617_);
return v___x_1618_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0(lean_object* v_____do__lift_1619_, lean_object* v_toPure_1620_, lean_object* v_id_1621_, lean_object* v_inst_1622_, lean_object* v_inst_1623_, lean_object* v_inst_1624_, lean_object* v_inst_1625_, uint8_t v_____do__lift_1626_){
_start:
{
uint8_t v_isExporting_1630_; 
v_isExporting_1630_ = lean_ctor_get_uint8(v_____do__lift_1619_, sizeof(void*)*13);
if (v_isExporting_1630_ == 0)
{
lean_dec_ref(v_inst_1625_);
lean_dec(v_inst_1624_);
lean_dec_ref(v_inst_1623_);
lean_dec_ref(v_inst_1622_);
lean_dec(v_id_1621_);
goto v___jp_1627_;
}
else
{
uint8_t v___x_1631_; 
v___x_1631_ = l_Lean_isPrivateName(v_id_1621_);
if (v___x_1631_ == 0)
{
lean_dec_ref(v_inst_1625_);
lean_dec(v_inst_1624_);
lean_dec_ref(v_inst_1623_);
lean_dec_ref(v_inst_1622_);
lean_dec(v_id_1621_);
goto v___jp_1627_;
}
else
{
if (v_____do__lift_1626_ == 0)
{
lean_dec_ref(v_inst_1625_);
lean_dec(v_inst_1624_);
lean_dec_ref(v_inst_1623_);
lean_dec_ref(v_inst_1622_);
lean_dec(v_id_1621_);
goto v___jp_1627_;
}
else
{
lean_object* v___x_1632_; uint8_t v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; 
lean_dec(v_toPure_1620_);
v___x_1632_ = lean_obj_once(&l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1, &l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1_once, _init_l_Lean_checkPrivateInPublic___redArg___lam__0___closed__1);
v___x_1633_ = 0;
v___x_1634_ = l_Lean_MessageData_ofConstName(v_id_1621_, v___x_1633_);
v___x_1635_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1635_, 0, v___x_1632_);
lean_ctor_set(v___x_1635_, 1, v___x_1634_);
v___x_1636_ = lean_obj_once(&l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3, &l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3_once, _init_l_Lean_checkPrivateInPublic___redArg___lam__0___closed__3);
v___x_1637_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1637_, 0, v___x_1635_);
lean_ctor_set(v___x_1637_, 1, v___x_1636_);
v___x_1638_ = l_Lean_logWarning___redArg(v_inst_1622_, v_inst_1623_, v_inst_1624_, v_inst_1625_, v___x_1637_);
return v___x_1638_;
}
}
}
v___jp_1627_:
{
lean_object* v___x_1628_; lean_object* v___x_1629_; 
v___x_1628_ = lean_box(0);
v___x_1629_ = lean_apply_2(v_toPure_1620_, lean_box(0), v___x_1628_);
return v___x_1629_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__0___boxed(lean_object* v_____do__lift_1639_, lean_object* v_toPure_1640_, lean_object* v_id_1641_, lean_object* v_inst_1642_, lean_object* v_inst_1643_, lean_object* v_inst_1644_, lean_object* v_inst_1645_, lean_object* v_____do__lift_1646_){
_start:
{
uint8_t v_____do__lift_199__boxed_1647_; lean_object* v_res_1648_; 
v_____do__lift_199__boxed_1647_ = lean_unbox(v_____do__lift_1646_);
v_res_1648_ = l_Lean_checkPrivateInPublic___redArg___lam__0(v_____do__lift_1639_, v_toPure_1640_, v_id_1641_, v_inst_1642_, v_inst_1643_, v_inst_1644_, v_inst_1645_, v_____do__lift_199__boxed_1647_);
lean_dec_ref(v_____do__lift_1639_);
return v_res_1648_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg___lam__1(lean_object* v_toPure_1649_, lean_object* v_id_1650_, lean_object* v_inst_1651_, lean_object* v_inst_1652_, lean_object* v_inst_1653_, lean_object* v_inst_1654_, lean_object* v___x_1655_, lean_object* v_toBind_1656_, lean_object* v_____do__lift_1657_){
_start:
{
lean_object* v___f_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; 
lean_inc_ref(v_inst_1654_);
lean_inc_ref(v_inst_1651_);
v___f_1658_ = lean_alloc_closure((void*)(l_Lean_checkPrivateInPublic___redArg___lam__0___boxed), 8, 7);
lean_closure_set(v___f_1658_, 0, v_____do__lift_1657_);
lean_closure_set(v___f_1658_, 1, v_toPure_1649_);
lean_closure_set(v___f_1658_, 2, v_id_1650_);
lean_closure_set(v___f_1658_, 3, v_inst_1651_);
lean_closure_set(v___f_1658_, 4, v_inst_1652_);
lean_closure_set(v___f_1658_, 5, v_inst_1653_);
lean_closure_set(v___f_1658_, 6, v_inst_1654_);
v___x_1659_ = l_Lean_ResolveName_backward_privateInPublic_warn;
v___x_1660_ = l_Lean_Option_getM___redArg(v_inst_1651_, v_inst_1654_, v___x_1655_, v___x_1659_);
v___x_1661_ = lean_apply_4(v_toBind_1656_, lean_box(0), lean_box(0), v___x_1660_, v___f_1658_);
return v___x_1661_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___redArg(lean_object* v_inst_1662_, lean_object* v_inst_1663_, lean_object* v_inst_1664_, lean_object* v_inst_1665_, lean_object* v_inst_1666_, lean_object* v_id_1667_){
_start:
{
lean_object* v___x_1668_; lean_object* v_toApplicative_1669_; lean_object* v_toBind_1670_; lean_object* v_getEnv_1671_; lean_object* v_toPure_1672_; lean_object* v___f_1673_; lean_object* v___x_1674_; 
v___x_1668_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1669_ = lean_ctor_get(v_inst_1662_, 0);
v_toBind_1670_ = lean_ctor_get(v_inst_1662_, 1);
lean_inc_n(v_toBind_1670_, 2);
v_getEnv_1671_ = lean_ctor_get(v_inst_1663_, 0);
lean_inc(v_getEnv_1671_);
lean_dec_ref(v_inst_1663_);
v_toPure_1672_ = lean_ctor_get(v_toApplicative_1669_, 1);
lean_inc(v_toPure_1672_);
v___f_1673_ = lean_alloc_closure((void*)(l_Lean_checkPrivateInPublic___redArg___lam__1), 9, 8);
lean_closure_set(v___f_1673_, 0, v_toPure_1672_);
lean_closure_set(v___f_1673_, 1, v_id_1667_);
lean_closure_set(v___f_1673_, 2, v_inst_1662_);
lean_closure_set(v___f_1673_, 3, v_inst_1665_);
lean_closure_set(v___f_1673_, 4, v_inst_1666_);
lean_closure_set(v___f_1673_, 5, v_inst_1664_);
lean_closure_set(v___f_1673_, 6, v___x_1668_);
lean_closure_set(v___f_1673_, 7, v_toBind_1670_);
v___x_1674_ = lean_apply_4(v_toBind_1670_, lean_box(0), lean_box(0), v_getEnv_1671_, v___f_1673_);
return v___x_1674_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic(lean_object* v_m_1675_, lean_object* v_inst_1676_, lean_object* v_inst_1677_, lean_object* v_inst_1678_, lean_object* v_inst_1679_, lean_object* v_inst_1680_, lean_object* v_id_1681_){
_start:
{
lean_object* v___x_1682_; 
v___x_1682_ = l_Lean_checkPrivateInPublic___redArg(v_inst_1676_, v_inst_1677_, v_inst_1678_, v_inst_1679_, v_inst_1680_, v_id_1681_);
return v___x_1682_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__0(lean_object* v_env_1683_, lean_object* v_n_1684_, lean_object* v_toPure_1685_, uint8_t v___y_1686_, uint8_t v___x_1687_, lean_object* v_____r_1688_){
_start:
{
lean_object* v___x_1689_; 
v___x_1689_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1683_, v_n_1684_);
if (lean_obj_tag(v___x_1689_) == 0)
{
lean_object* v___x_1690_; lean_object* v___x_1691_; 
v___x_1690_ = lean_box(v___y_1686_);
v___x_1691_ = lean_apply_2(v_toPure_1685_, lean_box(0), v___x_1690_);
return v___x_1691_;
}
else
{
lean_object* v_val_1692_; lean_object* v___x_1693_; uint8_t v_isModule_1694_; 
v_val_1692_ = lean_ctor_get(v___x_1689_, 0);
lean_inc(v_val_1692_);
lean_dec_ref_known(v___x_1689_, 1);
v___x_1693_ = l_Lean_Environment_header(v_env_1683_);
v_isModule_1694_ = lean_ctor_get_uint8(v___x_1693_, sizeof(void*)*8 + 4);
if (v_isModule_1694_ == 0)
{
lean_object* v___x_1695_; lean_object* v___x_1696_; 
lean_dec_ref(v___x_1693_);
lean_dec(v_val_1692_);
v___x_1695_ = lean_box(v___x_1687_);
v___x_1696_ = lean_apply_2(v_toPure_1685_, lean_box(0), v___x_1695_);
return v___x_1696_;
}
else
{
lean_object* v_modules_1697_; lean_object* v___x_1698_; uint8_t v___x_1699_; 
v_modules_1697_ = lean_ctor_get(v___x_1693_, 3);
lean_inc_ref(v_modules_1697_);
lean_dec_ref(v___x_1693_);
v___x_1698_ = lean_array_get_size(v_modules_1697_);
v___x_1699_ = lean_nat_dec_lt(v_val_1692_, v___x_1698_);
if (v___x_1699_ == 0)
{
lean_object* v___x_1700_; lean_object* v___x_1701_; 
lean_dec_ref(v_modules_1697_);
lean_dec(v_val_1692_);
v___x_1700_ = lean_box(v_isModule_1694_);
v___x_1701_ = lean_apply_2(v_toPure_1685_, lean_box(0), v___x_1700_);
return v___x_1701_;
}
else
{
lean_object* v___x_1702_; lean_object* v_toImport_1703_; uint8_t v_importAll_1704_; 
v___x_1702_ = lean_array_fget(v_modules_1697_, v_val_1692_);
lean_dec(v_val_1692_);
lean_dec_ref(v_modules_1697_);
v_toImport_1703_ = lean_ctor_get(v___x_1702_, 0);
lean_inc_ref(v_toImport_1703_);
lean_dec(v___x_1702_);
v_importAll_1704_ = lean_ctor_get_uint8(v_toImport_1703_, sizeof(void*)*1);
lean_dec_ref(v_toImport_1703_);
if (v_importAll_1704_ == 0)
{
lean_object* v___x_1705_; lean_object* v___x_1706_; 
v___x_1705_ = lean_box(v_isModule_1694_);
v___x_1706_ = lean_apply_2(v_toPure_1685_, lean_box(0), v___x_1705_);
return v___x_1706_;
}
else
{
lean_object* v___x_1707_; lean_object* v___x_1708_; 
v___x_1707_ = lean_box(v___y_1686_);
v___x_1708_ = lean_apply_2(v_toPure_1685_, lean_box(0), v___x_1707_);
return v___x_1708_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__0___boxed(lean_object* v_env_1709_, lean_object* v_n_1710_, lean_object* v_toPure_1711_, lean_object* v___y_1712_, lean_object* v___x_1713_, lean_object* v_____r_1714_){
_start:
{
uint8_t v___y_386__boxed_1715_; uint8_t v___x_387__boxed_1716_; lean_object* v_res_1717_; 
v___y_386__boxed_1715_ = lean_unbox(v___y_1712_);
v___x_387__boxed_1716_ = lean_unbox(v___x_1713_);
v_res_1717_ = l_Lean_isInaccessiblePrivateName___redArg___lam__0(v_env_1709_, v_n_1710_, v_toPure_1711_, v___y_386__boxed_1715_, v___x_387__boxed_1716_, v_____r_1714_);
lean_dec(v_n_1710_);
lean_dec_ref(v_env_1709_);
return v_res_1717_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__1(lean_object* v_env_1718_, lean_object* v_n_1719_, lean_object* v_toPure_1720_, uint8_t v___x_1721_, lean_object* v_inst_1722_, lean_object* v_inst_1723_, lean_object* v_inst_1724_, lean_object* v_inst_1725_, lean_object* v_inst_1726_, lean_object* v_toBind_1727_, uint8_t v___y_1728_, uint8_t v_____do__lift_1729_){
_start:
{
uint8_t v___y_1731_; uint8_t v_isExporting_1737_; 
v_isExporting_1737_ = lean_ctor_get_uint8(v_env_1718_, sizeof(void*)*13);
if (v_isExporting_1737_ == 0)
{
v___y_1731_ = v___y_1728_;
goto v___jp_1730_;
}
else
{
if (v_____do__lift_1729_ == 0)
{
lean_object* v___x_1738_; lean_object* v___x_1739_; 
lean_dec(v_toBind_1727_);
lean_dec(v_inst_1726_);
lean_dec_ref(v_inst_1725_);
lean_dec_ref(v_inst_1724_);
lean_dec_ref(v_inst_1723_);
lean_dec_ref(v_inst_1722_);
lean_dec(v_n_1719_);
lean_dec_ref(v_env_1718_);
v___x_1738_ = lean_box(v___x_1721_);
v___x_1739_ = lean_apply_2(v_toPure_1720_, lean_box(0), v___x_1738_);
return v___x_1739_;
}
else
{
v___y_1731_ = v___y_1728_;
goto v___jp_1730_;
}
}
v___jp_1730_:
{
lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___f_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1732_ = lean_box(v___y_1731_);
v___x_1733_ = lean_box(v___x_1721_);
lean_inc(v_n_1719_);
v___f_1734_ = lean_alloc_closure((void*)(l_Lean_isInaccessiblePrivateName___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1734_, 0, v_env_1718_);
lean_closure_set(v___f_1734_, 1, v_n_1719_);
lean_closure_set(v___f_1734_, 2, v_toPure_1720_);
lean_closure_set(v___f_1734_, 3, v___x_1732_);
lean_closure_set(v___f_1734_, 4, v___x_1733_);
v___x_1735_ = l_Lean_checkPrivateInPublic___redArg(v_inst_1722_, v_inst_1723_, v_inst_1724_, v_inst_1725_, v_inst_1726_, v_n_1719_);
v___x_1736_ = lean_apply_4(v_toBind_1727_, lean_box(0), lean_box(0), v___x_1735_, v___f_1734_);
return v___x_1736_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__1___boxed(lean_object* v_env_1740_, lean_object* v_n_1741_, lean_object* v_toPure_1742_, lean_object* v___x_1743_, lean_object* v_inst_1744_, lean_object* v_inst_1745_, lean_object* v_inst_1746_, lean_object* v_inst_1747_, lean_object* v_inst_1748_, lean_object* v_toBind_1749_, lean_object* v___y_1750_, lean_object* v_____do__lift_1751_){
_start:
{
uint8_t v___x_427__boxed_1752_; uint8_t v___y_433__boxed_1753_; uint8_t v_____do__lift_434__boxed_1754_; lean_object* v_res_1755_; 
v___x_427__boxed_1752_ = lean_unbox(v___x_1743_);
v___y_433__boxed_1753_ = lean_unbox(v___y_1750_);
v_____do__lift_434__boxed_1754_ = lean_unbox(v_____do__lift_1751_);
v_res_1755_ = l_Lean_isInaccessiblePrivateName___redArg___lam__1(v_env_1740_, v_n_1741_, v_toPure_1742_, v___x_427__boxed_1752_, v_inst_1744_, v_inst_1745_, v_inst_1746_, v_inst_1747_, v_inst_1748_, v_toBind_1749_, v___y_433__boxed_1753_, v_____do__lift_434__boxed_1754_);
return v_res_1755_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__2(lean_object* v_n_1756_, lean_object* v_toPure_1757_, uint8_t v___x_1758_, lean_object* v_inst_1759_, lean_object* v_inst_1760_, lean_object* v_inst_1761_, lean_object* v_inst_1762_, lean_object* v_inst_1763_, lean_object* v_toBind_1764_, uint8_t v___y_1765_, lean_object* v___x_1766_, lean_object* v_env_1767_){
_start:
{
lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___f_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1768_ = lean_box(v___x_1758_);
v___x_1769_ = lean_box(v___y_1765_);
lean_inc(v_toBind_1764_);
lean_inc_ref(v_inst_1761_);
lean_inc_ref(v_inst_1759_);
v___f_1770_ = lean_alloc_closure((void*)(l_Lean_isInaccessiblePrivateName___redArg___lam__1___boxed), 12, 11);
lean_closure_set(v___f_1770_, 0, v_env_1767_);
lean_closure_set(v___f_1770_, 1, v_n_1756_);
lean_closure_set(v___f_1770_, 2, v_toPure_1757_);
lean_closure_set(v___f_1770_, 3, v___x_1768_);
lean_closure_set(v___f_1770_, 4, v_inst_1759_);
lean_closure_set(v___f_1770_, 5, v_inst_1760_);
lean_closure_set(v___f_1770_, 6, v_inst_1761_);
lean_closure_set(v___f_1770_, 7, v_inst_1762_);
lean_closure_set(v___f_1770_, 8, v_inst_1763_);
lean_closure_set(v___f_1770_, 9, v_toBind_1764_);
lean_closure_set(v___f_1770_, 10, v___x_1769_);
v___x_1771_ = l_Lean_ResolveName_backward_privateInPublic;
v___x_1772_ = l_Lean_Option_getM___redArg(v_inst_1759_, v_inst_1761_, v___x_1766_, v___x_1771_);
v___x_1773_ = lean_apply_4(v_toBind_1764_, lean_box(0), lean_box(0), v___x_1772_, v___f_1770_);
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg___lam__2___boxed(lean_object* v_n_1774_, lean_object* v_toPure_1775_, lean_object* v___x_1776_, lean_object* v_inst_1777_, lean_object* v_inst_1778_, lean_object* v_inst_1779_, lean_object* v_inst_1780_, lean_object* v_inst_1781_, lean_object* v_toBind_1782_, lean_object* v___y_1783_, lean_object* v___x_1784_, lean_object* v_env_1785_){
_start:
{
uint8_t v___x_469__boxed_1786_; uint8_t v___y_475__boxed_1787_; lean_object* v_res_1788_; 
v___x_469__boxed_1786_ = lean_unbox(v___x_1776_);
v___y_475__boxed_1787_ = lean_unbox(v___y_1783_);
v_res_1788_ = l_Lean_isInaccessiblePrivateName___redArg___lam__2(v_n_1774_, v_toPure_1775_, v___x_469__boxed_1786_, v_inst_1777_, v_inst_1778_, v_inst_1779_, v_inst_1780_, v_inst_1781_, v_toBind_1782_, v___y_475__boxed_1787_, v___x_1784_, v_env_1785_);
return v_res_1788_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName___redArg(lean_object* v_inst_1789_, lean_object* v_inst_1790_, lean_object* v_inst_1791_, lean_object* v_inst_1792_, lean_object* v_inst_1793_, lean_object* v_n_1794_){
_start:
{
lean_object* v___x_1795_; uint8_t v___y_1797_; uint8_t v___x_1812_; 
v___x_1795_ = l_Lean_KVMap_instValueBool;
v___x_1812_ = l_Lean_isPrivateName(v_n_1794_);
if (v___x_1812_ == 0)
{
uint8_t v___x_1813_; 
v___x_1813_ = 1;
v___y_1797_ = v___x_1813_;
goto v___jp_1796_;
}
else
{
uint8_t v___x_1814_; 
v___x_1814_ = 0;
v___y_1797_ = v___x_1814_;
goto v___jp_1796_;
}
v___jp_1796_:
{
if (v___y_1797_ == 0)
{
lean_object* v_toApplicative_1798_; lean_object* v_toBind_1799_; lean_object* v_toPure_1800_; lean_object* v_getEnv_1801_; uint8_t v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___f_1805_; lean_object* v___x_1806_; 
v_toApplicative_1798_ = lean_ctor_get(v_inst_1791_, 0);
v_toBind_1799_ = lean_ctor_get(v_inst_1791_, 1);
lean_inc_n(v_toBind_1799_, 2);
v_toPure_1800_ = lean_ctor_get(v_toApplicative_1798_, 1);
lean_inc(v_toPure_1800_);
v_getEnv_1801_ = lean_ctor_get(v_inst_1792_, 0);
lean_inc(v_getEnv_1801_);
v___x_1802_ = 1;
v___x_1803_ = lean_box(v___x_1802_);
v___x_1804_ = lean_box(v___y_1797_);
v___f_1805_ = lean_alloc_closure((void*)(l_Lean_isInaccessiblePrivateName___redArg___lam__2___boxed), 12, 11);
lean_closure_set(v___f_1805_, 0, v_n_1794_);
lean_closure_set(v___f_1805_, 1, v_toPure_1800_);
lean_closure_set(v___f_1805_, 2, v___x_1803_);
lean_closure_set(v___f_1805_, 3, v_inst_1791_);
lean_closure_set(v___f_1805_, 4, v_inst_1792_);
lean_closure_set(v___f_1805_, 5, v_inst_1793_);
lean_closure_set(v___f_1805_, 6, v_inst_1789_);
lean_closure_set(v___f_1805_, 7, v_inst_1790_);
lean_closure_set(v___f_1805_, 8, v_toBind_1799_);
lean_closure_set(v___f_1805_, 9, v___x_1804_);
lean_closure_set(v___f_1805_, 10, v___x_1795_);
v___x_1806_ = lean_apply_4(v_toBind_1799_, lean_box(0), lean_box(0), v_getEnv_1801_, v___f_1805_);
return v___x_1806_;
}
else
{
lean_object* v_toApplicative_1807_; lean_object* v_toPure_1808_; uint8_t v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; 
v_toApplicative_1807_ = lean_ctor_get(v_inst_1791_, 0);
lean_inc_ref(v_toApplicative_1807_);
lean_dec(v_n_1794_);
lean_dec_ref(v_inst_1793_);
lean_dec_ref(v_inst_1792_);
lean_dec_ref(v_inst_1791_);
lean_dec(v_inst_1790_);
lean_dec_ref(v_inst_1789_);
v_toPure_1808_ = lean_ctor_get(v_toApplicative_1807_, 1);
lean_inc(v_toPure_1808_);
lean_dec_ref(v_toApplicative_1807_);
v___x_1809_ = 0;
v___x_1810_ = lean_box(v___x_1809_);
v___x_1811_ = lean_apply_2(v_toPure_1808_, lean_box(0), v___x_1810_);
return v___x_1811_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isInaccessiblePrivateName(lean_object* v_m_1815_, lean_object* v_inst_1816_, lean_object* v_inst_1817_, lean_object* v_inst_1818_, lean_object* v_inst_1819_, lean_object* v_inst_1820_, lean_object* v_n_1821_){
_start:
{
lean_object* v___x_1822_; 
v___x_1822_ = l_Lean_isInaccessiblePrivateName___redArg(v_inst_1816_, v_inst_1817_, v_inst_1818_, v_inst_1819_, v_inst_1820_, v_n_1821_);
return v___x_1822_;
}
}
LEAN_EXPORT uint8_t l_Lean_resolveGlobalName___redArg___lam__0(lean_object* v_x_1823_){
_start:
{
lean_object* v_fst_1824_; uint8_t v___x_1825_; 
v_fst_1824_ = lean_ctor_get(v_x_1823_, 0);
v___x_1825_ = l_Lean_isPrivateName(v_fst_1824_);
return v___x_1825_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__0___boxed(lean_object* v_x_1826_){
_start:
{
uint8_t v_res_1827_; lean_object* v_r_1828_; 
v_res_1827_ = l_Lean_resolveGlobalName___redArg___lam__0(v_x_1826_);
lean_dec_ref(v_x_1826_);
v_r_1828_ = lean_box(v_res_1827_);
return v_r_1828_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__1(lean_object* v_toPure_1829_, lean_object* v_res_1830_, lean_object* v_____r_1831_){
_start:
{
lean_object* v___x_1832_; 
v___x_1832_ = lean_apply_2(v_toPure_1829_, lean_box(0), v_res_1830_);
return v___x_1832_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__2(uint8_t v_enableLog_1833_, lean_object* v_toPure_1834_, lean_object* v_res_1835_, lean_object* v___f_1836_, lean_object* v_inst_1837_, lean_object* v_inst_1838_, lean_object* v_inst_1839_, lean_object* v_inst_1840_, lean_object* v_inst_1841_, lean_object* v_toBind_1842_, lean_object* v___f_1843_, lean_object* v_____do__lift_1844_){
_start:
{
if (v_enableLog_1833_ == 0)
{
lean_object* v___x_1845_; 
lean_dec(v___f_1843_);
lean_dec(v_toBind_1842_);
lean_dec(v_inst_1841_);
lean_dec_ref(v_inst_1840_);
lean_dec_ref(v_inst_1839_);
lean_dec_ref(v_inst_1838_);
lean_dec_ref(v_inst_1837_);
lean_dec_ref(v___f_1836_);
v___x_1845_ = lean_apply_2(v_toPure_1834_, lean_box(0), v_res_1835_);
return v___x_1845_;
}
else
{
uint8_t v_isExporting_1846_; 
v_isExporting_1846_ = lean_ctor_get_uint8(v_____do__lift_1844_, sizeof(void*)*13);
if (v_isExporting_1846_ == 0)
{
lean_object* v___x_1847_; 
lean_dec(v___f_1843_);
lean_dec(v_toBind_1842_);
lean_dec(v_inst_1841_);
lean_dec_ref(v_inst_1840_);
lean_dec_ref(v_inst_1839_);
lean_dec_ref(v_inst_1838_);
lean_dec_ref(v_inst_1837_);
lean_dec_ref(v___f_1836_);
v___x_1847_ = lean_apply_2(v_toPure_1834_, lean_box(0), v_res_1835_);
return v___x_1847_;
}
else
{
lean_object* v___x_1848_; 
lean_inc(v_res_1835_);
v___x_1848_ = l_List_find_x3f___redArg(v___f_1836_, v_res_1835_);
if (lean_obj_tag(v___x_1848_) == 1)
{
lean_object* v_val_1849_; lean_object* v_fst_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; 
lean_dec(v_res_1835_);
lean_dec(v_toPure_1834_);
v_val_1849_ = lean_ctor_get(v___x_1848_, 0);
lean_inc(v_val_1849_);
lean_dec_ref_known(v___x_1848_, 1);
v_fst_1850_ = lean_ctor_get(v_val_1849_, 0);
lean_inc(v_fst_1850_);
lean_dec(v_val_1849_);
v___x_1851_ = l_Lean_checkPrivateInPublic___redArg(v_inst_1837_, v_inst_1838_, v_inst_1839_, v_inst_1840_, v_inst_1841_, v_fst_1850_);
v___x_1852_ = lean_apply_4(v_toBind_1842_, lean_box(0), lean_box(0), v___x_1851_, v___f_1843_);
return v___x_1852_;
}
else
{
lean_object* v___x_1853_; 
lean_dec(v___x_1848_);
lean_dec(v___f_1843_);
lean_dec(v_toBind_1842_);
lean_dec(v_inst_1841_);
lean_dec_ref(v_inst_1840_);
lean_dec_ref(v_inst_1839_);
lean_dec_ref(v_inst_1838_);
lean_dec_ref(v_inst_1837_);
v___x_1853_ = lean_apply_2(v_toPure_1834_, lean_box(0), v_res_1835_);
return v___x_1853_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__2___boxed(lean_object* v_enableLog_1854_, lean_object* v_toPure_1855_, lean_object* v_res_1856_, lean_object* v___f_1857_, lean_object* v_inst_1858_, lean_object* v_inst_1859_, lean_object* v_inst_1860_, lean_object* v_inst_1861_, lean_object* v_inst_1862_, lean_object* v_toBind_1863_, lean_object* v___f_1864_, lean_object* v_____do__lift_1865_){
_start:
{
uint8_t v_enableLog_boxed_1866_; lean_object* v_res_1867_; 
v_enableLog_boxed_1866_ = lean_unbox(v_enableLog_1854_);
v_res_1867_ = l_Lean_resolveGlobalName___redArg___lam__2(v_enableLog_boxed_1866_, v_toPure_1855_, v_res_1856_, v___f_1857_, v_inst_1858_, v_inst_1859_, v_inst_1860_, v_inst_1861_, v_inst_1862_, v_toBind_1863_, v___f_1864_, v_____do__lift_1865_);
lean_dec_ref(v_____do__lift_1865_);
return v_res_1867_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__3(lean_object* v_____do__lift_1868_, lean_object* v_____do__lift_1869_, lean_object* v_____do__lift_1870_, lean_object* v_id_1871_, lean_object* v_toPure_1872_, uint8_t v_enableLog_1873_, lean_object* v___f_1874_, lean_object* v_inst_1875_, lean_object* v_inst_1876_, lean_object* v_inst_1877_, lean_object* v_inst_1878_, lean_object* v_inst_1879_, lean_object* v_toBind_1880_, lean_object* v_getEnv_1881_, lean_object* v_____do__lift_1882_){
_start:
{
lean_object* v_res_1883_; lean_object* v___f_1884_; lean_object* v___x_1885_; lean_object* v___f_1886_; lean_object* v___x_1887_; 
v_res_1883_ = l_Lean_ResolveName_resolveGlobalName(v_____do__lift_1868_, v_____do__lift_1869_, v_____do__lift_1870_, v_____do__lift_1882_, v_id_1871_);
lean_inc(v_res_1883_);
lean_inc(v_toPure_1872_);
v___f_1884_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1884_, 0, v_toPure_1872_);
lean_closure_set(v___f_1884_, 1, v_res_1883_);
v___x_1885_ = lean_box(v_enableLog_1873_);
lean_inc(v_toBind_1880_);
v___f_1886_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__2___boxed), 12, 11);
lean_closure_set(v___f_1886_, 0, v___x_1885_);
lean_closure_set(v___f_1886_, 1, v_toPure_1872_);
lean_closure_set(v___f_1886_, 2, v_res_1883_);
lean_closure_set(v___f_1886_, 3, v___f_1874_);
lean_closure_set(v___f_1886_, 4, v_inst_1875_);
lean_closure_set(v___f_1886_, 5, v_inst_1876_);
lean_closure_set(v___f_1886_, 6, v_inst_1877_);
lean_closure_set(v___f_1886_, 7, v_inst_1878_);
lean_closure_set(v___f_1886_, 8, v_inst_1879_);
lean_closure_set(v___f_1886_, 9, v_toBind_1880_);
lean_closure_set(v___f_1886_, 10, v___f_1884_);
v___x_1887_ = lean_apply_4(v_toBind_1880_, lean_box(0), lean_box(0), v_getEnv_1881_, v___f_1886_);
return v___x_1887_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__3___boxed(lean_object* v_____do__lift_1888_, lean_object* v_____do__lift_1889_, lean_object* v_____do__lift_1890_, lean_object* v_id_1891_, lean_object* v_toPure_1892_, lean_object* v_enableLog_1893_, lean_object* v___f_1894_, lean_object* v_inst_1895_, lean_object* v_inst_1896_, lean_object* v_inst_1897_, lean_object* v_inst_1898_, lean_object* v_inst_1899_, lean_object* v_toBind_1900_, lean_object* v_getEnv_1901_, lean_object* v_____do__lift_1902_){
_start:
{
uint8_t v_enableLog_boxed_1903_; lean_object* v_res_1904_; 
v_enableLog_boxed_1903_ = lean_unbox(v_enableLog_1893_);
v_res_1904_ = l_Lean_resolveGlobalName___redArg___lam__3(v_____do__lift_1888_, v_____do__lift_1889_, v_____do__lift_1890_, v_id_1891_, v_toPure_1892_, v_enableLog_boxed_1903_, v___f_1894_, v_inst_1895_, v_inst_1896_, v_inst_1897_, v_inst_1898_, v_inst_1899_, v_toBind_1900_, v_getEnv_1901_, v_____do__lift_1902_);
lean_dec_ref(v_____do__lift_1889_);
return v_res_1904_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__4(lean_object* v_____do__lift_1905_, lean_object* v_____do__lift_1906_, lean_object* v_id_1907_, lean_object* v_toPure_1908_, uint8_t v_enableLog_1909_, lean_object* v___f_1910_, lean_object* v_inst_1911_, lean_object* v_inst_1912_, lean_object* v_inst_1913_, lean_object* v_inst_1914_, lean_object* v_inst_1915_, lean_object* v_toBind_1916_, lean_object* v_getEnv_1917_, lean_object* v_getOpenDecls_1918_, lean_object* v_____do__lift_1919_){
_start:
{
lean_object* v___x_1920_; lean_object* v___f_1921_; lean_object* v___x_1922_; 
v___x_1920_ = lean_box(v_enableLog_1909_);
lean_inc(v_toBind_1916_);
v___f_1921_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__3___boxed), 15, 14);
lean_closure_set(v___f_1921_, 0, v_____do__lift_1905_);
lean_closure_set(v___f_1921_, 1, v_____do__lift_1906_);
lean_closure_set(v___f_1921_, 2, v_____do__lift_1919_);
lean_closure_set(v___f_1921_, 3, v_id_1907_);
lean_closure_set(v___f_1921_, 4, v_toPure_1908_);
lean_closure_set(v___f_1921_, 5, v___x_1920_);
lean_closure_set(v___f_1921_, 6, v___f_1910_);
lean_closure_set(v___f_1921_, 7, v_inst_1911_);
lean_closure_set(v___f_1921_, 8, v_inst_1912_);
lean_closure_set(v___f_1921_, 9, v_inst_1913_);
lean_closure_set(v___f_1921_, 10, v_inst_1914_);
lean_closure_set(v___f_1921_, 11, v_inst_1915_);
lean_closure_set(v___f_1921_, 12, v_toBind_1916_);
lean_closure_set(v___f_1921_, 13, v_getEnv_1917_);
v___x_1922_ = lean_apply_4(v_toBind_1916_, lean_box(0), lean_box(0), v_getOpenDecls_1918_, v___f_1921_);
return v___x_1922_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__4___boxed(lean_object* v_____do__lift_1923_, lean_object* v_____do__lift_1924_, lean_object* v_id_1925_, lean_object* v_toPure_1926_, lean_object* v_enableLog_1927_, lean_object* v___f_1928_, lean_object* v_inst_1929_, lean_object* v_inst_1930_, lean_object* v_inst_1931_, lean_object* v_inst_1932_, lean_object* v_inst_1933_, lean_object* v_toBind_1934_, lean_object* v_getEnv_1935_, lean_object* v_getOpenDecls_1936_, lean_object* v_____do__lift_1937_){
_start:
{
uint8_t v_enableLog_boxed_1938_; lean_object* v_res_1939_; 
v_enableLog_boxed_1938_ = lean_unbox(v_enableLog_1927_);
v_res_1939_ = l_Lean_resolveGlobalName___redArg___lam__4(v_____do__lift_1923_, v_____do__lift_1924_, v_id_1925_, v_toPure_1926_, v_enableLog_boxed_1938_, v___f_1928_, v_inst_1929_, v_inst_1930_, v_inst_1931_, v_inst_1932_, v_inst_1933_, v_toBind_1934_, v_getEnv_1935_, v_getOpenDecls_1936_, v_____do__lift_1937_);
return v_res_1939_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__5(lean_object* v_inst_1940_, lean_object* v_____do__lift_1941_, lean_object* v_id_1942_, lean_object* v_toPure_1943_, uint8_t v_enableLog_1944_, lean_object* v___f_1945_, lean_object* v_inst_1946_, lean_object* v_inst_1947_, lean_object* v_inst_1948_, lean_object* v_inst_1949_, lean_object* v_inst_1950_, lean_object* v_toBind_1951_, lean_object* v_getEnv_1952_, lean_object* v_____do__lift_1953_){
_start:
{
lean_object* v_getCurrNamespace_1954_; lean_object* v_getOpenDecls_1955_; lean_object* v___x_1956_; lean_object* v___f_1957_; lean_object* v___x_1958_; 
v_getCurrNamespace_1954_ = lean_ctor_get(v_inst_1940_, 0);
lean_inc(v_getCurrNamespace_1954_);
v_getOpenDecls_1955_ = lean_ctor_get(v_inst_1940_, 1);
lean_inc(v_getOpenDecls_1955_);
lean_dec_ref(v_inst_1940_);
v___x_1956_ = lean_box(v_enableLog_1944_);
lean_inc(v_toBind_1951_);
v___f_1957_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__4___boxed), 15, 14);
lean_closure_set(v___f_1957_, 0, v_____do__lift_1941_);
lean_closure_set(v___f_1957_, 1, v_____do__lift_1953_);
lean_closure_set(v___f_1957_, 2, v_id_1942_);
lean_closure_set(v___f_1957_, 3, v_toPure_1943_);
lean_closure_set(v___f_1957_, 4, v___x_1956_);
lean_closure_set(v___f_1957_, 5, v___f_1945_);
lean_closure_set(v___f_1957_, 6, v_inst_1946_);
lean_closure_set(v___f_1957_, 7, v_inst_1947_);
lean_closure_set(v___f_1957_, 8, v_inst_1948_);
lean_closure_set(v___f_1957_, 9, v_inst_1949_);
lean_closure_set(v___f_1957_, 10, v_inst_1950_);
lean_closure_set(v___f_1957_, 11, v_toBind_1951_);
lean_closure_set(v___f_1957_, 12, v_getEnv_1952_);
lean_closure_set(v___f_1957_, 13, v_getOpenDecls_1955_);
v___x_1958_ = lean_apply_4(v_toBind_1951_, lean_box(0), lean_box(0), v_getCurrNamespace_1954_, v___f_1957_);
return v___x_1958_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__5___boxed(lean_object* v_inst_1959_, lean_object* v_____do__lift_1960_, lean_object* v_id_1961_, lean_object* v_toPure_1962_, lean_object* v_enableLog_1963_, lean_object* v___f_1964_, lean_object* v_inst_1965_, lean_object* v_inst_1966_, lean_object* v_inst_1967_, lean_object* v_inst_1968_, lean_object* v_inst_1969_, lean_object* v_toBind_1970_, lean_object* v_getEnv_1971_, lean_object* v_____do__lift_1972_){
_start:
{
uint8_t v_enableLog_boxed_1973_; lean_object* v_res_1974_; 
v_enableLog_boxed_1973_ = lean_unbox(v_enableLog_1963_);
v_res_1974_ = l_Lean_resolveGlobalName___redArg___lam__5(v_inst_1959_, v_____do__lift_1960_, v_id_1961_, v_toPure_1962_, v_enableLog_boxed_1973_, v___f_1964_, v_inst_1965_, v_inst_1966_, v_inst_1967_, v_inst_1968_, v_inst_1969_, v_toBind_1970_, v_getEnv_1971_, v_____do__lift_1972_);
return v_res_1974_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__6(lean_object* v_inst_1975_, lean_object* v_inst_1976_, lean_object* v_id_1977_, lean_object* v_toPure_1978_, uint8_t v_enableLog_1979_, lean_object* v___f_1980_, lean_object* v_inst_1981_, lean_object* v_inst_1982_, lean_object* v_inst_1983_, lean_object* v_inst_1984_, lean_object* v_toBind_1985_, lean_object* v_getEnv_1986_, lean_object* v_____do__lift_1987_){
_start:
{
lean_object* v_getOptions_1988_; lean_object* v___x_1989_; lean_object* v___f_1990_; lean_object* v___x_1991_; 
v_getOptions_1988_ = lean_ctor_get(v_inst_1975_, 0);
lean_inc(v_getOptions_1988_);
v___x_1989_ = lean_box(v_enableLog_1979_);
lean_inc(v_toBind_1985_);
v___f_1990_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__5___boxed), 14, 13);
lean_closure_set(v___f_1990_, 0, v_inst_1976_);
lean_closure_set(v___f_1990_, 1, v_____do__lift_1987_);
lean_closure_set(v___f_1990_, 2, v_id_1977_);
lean_closure_set(v___f_1990_, 3, v_toPure_1978_);
lean_closure_set(v___f_1990_, 4, v___x_1989_);
lean_closure_set(v___f_1990_, 5, v___f_1980_);
lean_closure_set(v___f_1990_, 6, v_inst_1981_);
lean_closure_set(v___f_1990_, 7, v_inst_1982_);
lean_closure_set(v___f_1990_, 8, v_inst_1975_);
lean_closure_set(v___f_1990_, 9, v_inst_1983_);
lean_closure_set(v___f_1990_, 10, v_inst_1984_);
lean_closure_set(v___f_1990_, 11, v_toBind_1985_);
lean_closure_set(v___f_1990_, 12, v_getEnv_1986_);
v___x_1991_ = lean_apply_4(v_toBind_1985_, lean_box(0), lean_box(0), v_getOptions_1988_, v___f_1990_);
return v___x_1991_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___lam__6___boxed(lean_object* v_inst_1992_, lean_object* v_inst_1993_, lean_object* v_id_1994_, lean_object* v_toPure_1995_, lean_object* v_enableLog_1996_, lean_object* v___f_1997_, lean_object* v_inst_1998_, lean_object* v_inst_1999_, lean_object* v_inst_2000_, lean_object* v_inst_2001_, lean_object* v_toBind_2002_, lean_object* v_getEnv_2003_, lean_object* v_____do__lift_2004_){
_start:
{
uint8_t v_enableLog_boxed_2005_; lean_object* v_res_2006_; 
v_enableLog_boxed_2005_ = lean_unbox(v_enableLog_1996_);
v_res_2006_ = l_Lean_resolveGlobalName___redArg___lam__6(v_inst_1992_, v_inst_1993_, v_id_1994_, v_toPure_1995_, v_enableLog_boxed_2005_, v___f_1997_, v_inst_1998_, v_inst_1999_, v_inst_2000_, v_inst_2001_, v_toBind_2002_, v_getEnv_2003_, v_____do__lift_2004_);
return v_res_2006_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg(lean_object* v_inst_2008_, lean_object* v_inst_2009_, lean_object* v_inst_2010_, lean_object* v_inst_2011_, lean_object* v_inst_2012_, lean_object* v_inst_2013_, lean_object* v_id_2014_, uint8_t v_enableLog_2015_){
_start:
{
lean_object* v_toApplicative_2016_; lean_object* v_toBind_2017_; lean_object* v_getEnv_2018_; lean_object* v_toPure_2019_; lean_object* v___f_2020_; lean_object* v___x_2021_; lean_object* v___f_2022_; lean_object* v___x_2023_; 
v_toApplicative_2016_ = lean_ctor_get(v_inst_2008_, 0);
v_toBind_2017_ = lean_ctor_get(v_inst_2008_, 1);
lean_inc_n(v_toBind_2017_, 2);
v_getEnv_2018_ = lean_ctor_get(v_inst_2010_, 0);
lean_inc_n(v_getEnv_2018_, 2);
v_toPure_2019_ = lean_ctor_get(v_toApplicative_2016_, 1);
lean_inc(v_toPure_2019_);
v___f_2020_ = ((lean_object*)(l_Lean_resolveGlobalName___redArg___closed__0));
v___x_2021_ = lean_box(v_enableLog_2015_);
v___f_2022_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalName___redArg___lam__6___boxed), 13, 12);
lean_closure_set(v___f_2022_, 0, v_inst_2011_);
lean_closure_set(v___f_2022_, 1, v_inst_2009_);
lean_closure_set(v___f_2022_, 2, v_id_2014_);
lean_closure_set(v___f_2022_, 3, v_toPure_2019_);
lean_closure_set(v___f_2022_, 4, v___x_2021_);
lean_closure_set(v___f_2022_, 5, v___f_2020_);
lean_closure_set(v___f_2022_, 6, v_inst_2008_);
lean_closure_set(v___f_2022_, 7, v_inst_2010_);
lean_closure_set(v___f_2022_, 8, v_inst_2012_);
lean_closure_set(v___f_2022_, 9, v_inst_2013_);
lean_closure_set(v___f_2022_, 10, v_toBind_2017_);
lean_closure_set(v___f_2022_, 11, v_getEnv_2018_);
v___x_2023_ = lean_apply_4(v_toBind_2017_, lean_box(0), lean_box(0), v_getEnv_2018_, v___f_2022_);
return v___x_2023_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___redArg___boxed(lean_object* v_inst_2024_, lean_object* v_inst_2025_, lean_object* v_inst_2026_, lean_object* v_inst_2027_, lean_object* v_inst_2028_, lean_object* v_inst_2029_, lean_object* v_id_2030_, lean_object* v_enableLog_2031_){
_start:
{
uint8_t v_enableLog_boxed_2032_; lean_object* v_res_2033_; 
v_enableLog_boxed_2032_ = lean_unbox(v_enableLog_2031_);
v_res_2033_ = l_Lean_resolveGlobalName___redArg(v_inst_2024_, v_inst_2025_, v_inst_2026_, v_inst_2027_, v_inst_2028_, v_inst_2029_, v_id_2030_, v_enableLog_boxed_2032_);
return v_res_2033_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName(lean_object* v_m_2034_, lean_object* v_inst_2035_, lean_object* v_inst_2036_, lean_object* v_inst_2037_, lean_object* v_inst_2038_, lean_object* v_inst_2039_, lean_object* v_inst_2040_, lean_object* v_id_2041_, uint8_t v_enableLog_2042_){
_start:
{
lean_object* v___x_2043_; 
v___x_2043_ = l_Lean_resolveGlobalName___redArg(v_inst_2035_, v_inst_2036_, v_inst_2037_, v_inst_2038_, v_inst_2039_, v_inst_2040_, v_id_2041_, v_enableLog_2042_);
return v___x_2043_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___boxed(lean_object* v_m_2044_, lean_object* v_inst_2045_, lean_object* v_inst_2046_, lean_object* v_inst_2047_, lean_object* v_inst_2048_, lean_object* v_inst_2049_, lean_object* v_inst_2050_, lean_object* v_id_2051_, lean_object* v_enableLog_2052_){
_start:
{
uint8_t v_enableLog_boxed_2053_; lean_object* v_res_2054_; 
v_enableLog_boxed_2053_ = lean_unbox(v_enableLog_2052_);
v_res_2054_ = l_Lean_resolveGlobalName(v_m_2044_, v_inst_2045_, v_inst_2046_, v_inst_2047_, v_inst_2048_, v_inst_2049_, v_inst_2050_, v_id_2051_, v_enableLog_boxed_2053_);
return v_res_2054_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__0(lean_object* v_toPure_2055_, lean_object* v_nss_2056_, lean_object* v_____r_2057_){
_start:
{
lean_object* v___x_2058_; 
v___x_2058_ = lean_apply_2(v_toPure_2055_, lean_box(0), v_nss_2056_);
return v___x_2058_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__1(lean_object* v_____do__lift_2061_, lean_object* v_____do__lift_2062_, lean_object* v_id_2063_, uint8_t v_allowEmpty_2064_, lean_object* v_toPure_2065_, lean_object* v_inst_2066_, lean_object* v_inst_2067_, lean_object* v_toBind_2068_, lean_object* v_____do__lift_2069_){
_start:
{
lean_object* v_nss_2070_; 
lean_inc(v_id_2063_);
v_nss_2070_ = l_Lean_ResolveName_resolveNamespace(v_____do__lift_2061_, v_____do__lift_2062_, v_____do__lift_2069_, v_id_2063_);
if (v_allowEmpty_2064_ == 0)
{
uint8_t v___x_2071_; 
v___x_2071_ = l_List_isEmpty___redArg(v_nss_2070_);
if (v___x_2071_ == 0)
{
lean_object* v___x_2072_; 
lean_dec(v_toBind_2068_);
lean_dec_ref(v_inst_2067_);
lean_dec_ref(v_inst_2066_);
lean_dec(v_id_2063_);
v___x_2072_ = lean_apply_2(v_toPure_2065_, lean_box(0), v_nss_2070_);
return v___x_2072_;
}
else
{
lean_object* v___f_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; 
v___f_2073_ = lean_alloc_closure((void*)(l_Lean_resolveNamespaceCore___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2073_, 0, v_toPure_2065_);
lean_closure_set(v___f_2073_, 1, v_nss_2070_);
v___x_2074_ = ((lean_object*)(l_Lean_resolveNamespaceCore___redArg___lam__1___closed__0));
v___x_2075_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_id_2063_, v___x_2071_);
v___x_2076_ = lean_string_append(v___x_2074_, v___x_2075_);
lean_dec_ref(v___x_2075_);
v___x_2077_ = ((lean_object*)(l_Lean_resolveNamespaceCore___redArg___lam__1___closed__1));
v___x_2078_ = lean_string_append(v___x_2076_, v___x_2077_);
v___x_2079_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2079_, 0, v___x_2078_);
v___x_2080_ = l_Lean_MessageData_ofFormat(v___x_2079_);
v___x_2081_ = l_Lean_throwError___redArg(v_inst_2066_, v_inst_2067_, v___x_2080_);
v___x_2082_ = lean_apply_4(v_toBind_2068_, lean_box(0), lean_box(0), v___x_2081_, v___f_2073_);
return v___x_2082_;
}
}
else
{
lean_object* v___x_2083_; 
lean_dec(v_toBind_2068_);
lean_dec_ref(v_inst_2067_);
lean_dec_ref(v_inst_2066_);
lean_dec(v_id_2063_);
v___x_2083_ = lean_apply_2(v_toPure_2065_, lean_box(0), v_nss_2070_);
return v___x_2083_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__1___boxed(lean_object* v_____do__lift_2084_, lean_object* v_____do__lift_2085_, lean_object* v_id_2086_, lean_object* v_allowEmpty_2087_, lean_object* v_toPure_2088_, lean_object* v_inst_2089_, lean_object* v_inst_2090_, lean_object* v_toBind_2091_, lean_object* v_____do__lift_2092_){
_start:
{
uint8_t v_allowEmpty_boxed_2093_; lean_object* v_res_2094_; 
v_allowEmpty_boxed_2093_ = lean_unbox(v_allowEmpty_2087_);
v_res_2094_ = l_Lean_resolveNamespaceCore___redArg___lam__1(v_____do__lift_2084_, v_____do__lift_2085_, v_id_2086_, v_allowEmpty_boxed_2093_, v_toPure_2088_, v_inst_2089_, v_inst_2090_, v_toBind_2091_, v_____do__lift_2092_);
return v_res_2094_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__2(lean_object* v_____do__lift_2095_, lean_object* v_id_2096_, uint8_t v_allowEmpty_2097_, lean_object* v_toPure_2098_, lean_object* v_inst_2099_, lean_object* v_inst_2100_, lean_object* v_toBind_2101_, lean_object* v_getOpenDecls_2102_, lean_object* v_____do__lift_2103_){
_start:
{
lean_object* v___x_2104_; lean_object* v___f_2105_; lean_object* v___x_2106_; 
v___x_2104_ = lean_box(v_allowEmpty_2097_);
lean_inc(v_toBind_2101_);
v___f_2105_ = lean_alloc_closure((void*)(l_Lean_resolveNamespaceCore___redArg___lam__1___boxed), 9, 8);
lean_closure_set(v___f_2105_, 0, v_____do__lift_2095_);
lean_closure_set(v___f_2105_, 1, v_____do__lift_2103_);
lean_closure_set(v___f_2105_, 2, v_id_2096_);
lean_closure_set(v___f_2105_, 3, v___x_2104_);
lean_closure_set(v___f_2105_, 4, v_toPure_2098_);
lean_closure_set(v___f_2105_, 5, v_inst_2099_);
lean_closure_set(v___f_2105_, 6, v_inst_2100_);
lean_closure_set(v___f_2105_, 7, v_toBind_2101_);
v___x_2106_ = lean_apply_4(v_toBind_2101_, lean_box(0), lean_box(0), v_getOpenDecls_2102_, v___f_2105_);
return v___x_2106_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__2___boxed(lean_object* v_____do__lift_2107_, lean_object* v_id_2108_, lean_object* v_allowEmpty_2109_, lean_object* v_toPure_2110_, lean_object* v_inst_2111_, lean_object* v_inst_2112_, lean_object* v_toBind_2113_, lean_object* v_getOpenDecls_2114_, lean_object* v_____do__lift_2115_){
_start:
{
uint8_t v_allowEmpty_boxed_2116_; lean_object* v_res_2117_; 
v_allowEmpty_boxed_2116_ = lean_unbox(v_allowEmpty_2109_);
v_res_2117_ = l_Lean_resolveNamespaceCore___redArg___lam__2(v_____do__lift_2107_, v_id_2108_, v_allowEmpty_boxed_2116_, v_toPure_2110_, v_inst_2111_, v_inst_2112_, v_toBind_2113_, v_getOpenDecls_2114_, v_____do__lift_2115_);
return v_res_2117_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__3(lean_object* v_inst_2118_, lean_object* v_id_2119_, uint8_t v_allowEmpty_2120_, lean_object* v_toPure_2121_, lean_object* v_inst_2122_, lean_object* v_inst_2123_, lean_object* v_toBind_2124_, lean_object* v_____do__lift_2125_){
_start:
{
lean_object* v_getCurrNamespace_2126_; lean_object* v_getOpenDecls_2127_; lean_object* v___x_2128_; lean_object* v___f_2129_; lean_object* v___x_2130_; 
v_getCurrNamespace_2126_ = lean_ctor_get(v_inst_2118_, 0);
lean_inc(v_getCurrNamespace_2126_);
v_getOpenDecls_2127_ = lean_ctor_get(v_inst_2118_, 1);
lean_inc(v_getOpenDecls_2127_);
lean_dec_ref(v_inst_2118_);
v___x_2128_ = lean_box(v_allowEmpty_2120_);
lean_inc(v_toBind_2124_);
v___f_2129_ = lean_alloc_closure((void*)(l_Lean_resolveNamespaceCore___redArg___lam__2___boxed), 9, 8);
lean_closure_set(v___f_2129_, 0, v_____do__lift_2125_);
lean_closure_set(v___f_2129_, 1, v_id_2119_);
lean_closure_set(v___f_2129_, 2, v___x_2128_);
lean_closure_set(v___f_2129_, 3, v_toPure_2121_);
lean_closure_set(v___f_2129_, 4, v_inst_2122_);
lean_closure_set(v___f_2129_, 5, v_inst_2123_);
lean_closure_set(v___f_2129_, 6, v_toBind_2124_);
lean_closure_set(v___f_2129_, 7, v_getOpenDecls_2127_);
v___x_2130_ = lean_apply_4(v_toBind_2124_, lean_box(0), lean_box(0), v_getCurrNamespace_2126_, v___f_2129_);
return v___x_2130_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___lam__3___boxed(lean_object* v_inst_2131_, lean_object* v_id_2132_, lean_object* v_allowEmpty_2133_, lean_object* v_toPure_2134_, lean_object* v_inst_2135_, lean_object* v_inst_2136_, lean_object* v_toBind_2137_, lean_object* v_____do__lift_2138_){
_start:
{
uint8_t v_allowEmpty_boxed_2139_; lean_object* v_res_2140_; 
v_allowEmpty_boxed_2139_ = lean_unbox(v_allowEmpty_2133_);
v_res_2140_ = l_Lean_resolveNamespaceCore___redArg___lam__3(v_inst_2131_, v_id_2132_, v_allowEmpty_boxed_2139_, v_toPure_2134_, v_inst_2135_, v_inst_2136_, v_toBind_2137_, v_____do__lift_2138_);
return v_res_2140_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg(lean_object* v_inst_2141_, lean_object* v_inst_2142_, lean_object* v_inst_2143_, lean_object* v_inst_2144_, lean_object* v_id_2145_, uint8_t v_allowEmpty_2146_){
_start:
{
lean_object* v_toApplicative_2147_; lean_object* v_toBind_2148_; lean_object* v_getEnv_2149_; lean_object* v_toPure_2150_; lean_object* v___x_2151_; lean_object* v___f_2152_; lean_object* v___x_2153_; 
v_toApplicative_2147_ = lean_ctor_get(v_inst_2141_, 0);
v_toBind_2148_ = lean_ctor_get(v_inst_2141_, 1);
lean_inc_n(v_toBind_2148_, 2);
v_getEnv_2149_ = lean_ctor_get(v_inst_2143_, 0);
lean_inc(v_getEnv_2149_);
lean_dec_ref(v_inst_2143_);
v_toPure_2150_ = lean_ctor_get(v_toApplicative_2147_, 1);
lean_inc(v_toPure_2150_);
v___x_2151_ = lean_box(v_allowEmpty_2146_);
v___f_2152_ = lean_alloc_closure((void*)(l_Lean_resolveNamespaceCore___redArg___lam__3___boxed), 8, 7);
lean_closure_set(v___f_2152_, 0, v_inst_2142_);
lean_closure_set(v___f_2152_, 1, v_id_2145_);
lean_closure_set(v___f_2152_, 2, v___x_2151_);
lean_closure_set(v___f_2152_, 3, v_toPure_2150_);
lean_closure_set(v___f_2152_, 4, v_inst_2141_);
lean_closure_set(v___f_2152_, 5, v_inst_2144_);
lean_closure_set(v___f_2152_, 6, v_toBind_2148_);
v___x_2153_ = lean_apply_4(v_toBind_2148_, lean_box(0), lean_box(0), v_getEnv_2149_, v___f_2152_);
return v___x_2153_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___redArg___boxed(lean_object* v_inst_2154_, lean_object* v_inst_2155_, lean_object* v_inst_2156_, lean_object* v_inst_2157_, lean_object* v_id_2158_, lean_object* v_allowEmpty_2159_){
_start:
{
uint8_t v_allowEmpty_boxed_2160_; lean_object* v_res_2161_; 
v_allowEmpty_boxed_2160_ = lean_unbox(v_allowEmpty_2159_);
v_res_2161_ = l_Lean_resolveNamespaceCore___redArg(v_inst_2154_, v_inst_2155_, v_inst_2156_, v_inst_2157_, v_id_2158_, v_allowEmpty_boxed_2160_);
return v_res_2161_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore(lean_object* v_m_2162_, lean_object* v_inst_2163_, lean_object* v_inst_2164_, lean_object* v_inst_2165_, lean_object* v_inst_2166_, lean_object* v_id_2167_, uint8_t v_allowEmpty_2168_){
_start:
{
lean_object* v___x_2169_; 
v___x_2169_ = l_Lean_resolveNamespaceCore___redArg(v_inst_2163_, v_inst_2164_, v_inst_2165_, v_inst_2166_, v_id_2167_, v_allowEmpty_2168_);
return v___x_2169_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespaceCore___boxed(lean_object* v_m_2170_, lean_object* v_inst_2171_, lean_object* v_inst_2172_, lean_object* v_inst_2173_, lean_object* v_inst_2174_, lean_object* v_id_2175_, lean_object* v_allowEmpty_2176_){
_start:
{
uint8_t v_allowEmpty_boxed_2177_; lean_object* v_res_2178_; 
v_allowEmpty_boxed_2177_ = lean_unbox(v_allowEmpty_2176_);
v_res_2178_ = l_Lean_resolveNamespaceCore(v_m_2170_, v_inst_2171_, v_inst_2172_, v_inst_2173_, v_inst_2174_, v_id_2175_, v_allowEmpty_boxed_2177_);
return v_res_2178_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__0(lean_object* v_x_2179_){
_start:
{
if (lean_obj_tag(v_x_2179_) == 0)
{
lean_object* v_ns_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2187_; 
v_ns_2180_ = lean_ctor_get(v_x_2179_, 0);
v_isSharedCheck_2187_ = !lean_is_exclusive(v_x_2179_);
if (v_isSharedCheck_2187_ == 0)
{
v___x_2182_ = v_x_2179_;
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_ns_2180_);
lean_dec(v_x_2179_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v___x_2185_; 
if (v_isShared_2183_ == 0)
{
lean_ctor_set_tag(v___x_2182_, 1);
v___x_2185_ = v___x_2182_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v_ns_2180_);
v___x_2185_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
return v___x_2185_;
}
}
}
else
{
lean_object* v___x_2188_; 
lean_dec_ref(v_x_2179_);
v___x_2188_ = lean_box(0);
return v___x_2188_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__1(lean_object* v_x_2189_, lean_object* v_withRef_2190_, lean_object* v___x_2191_, lean_object* v_oldRef_2192_){
_start:
{
lean_object* v_ref_2193_; lean_object* v___x_2194_; 
v_ref_2193_ = l_Lean_replaceRef(v_x_2189_, v_oldRef_2192_);
v___x_2194_ = lean_apply_3(v_withRef_2190_, lean_box(0), v_ref_2193_, v___x_2191_);
return v___x_2194_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg___lam__1___boxed(lean_object* v_x_2195_, lean_object* v_withRef_2196_, lean_object* v___x_2197_, lean_object* v_oldRef_2198_){
_start:
{
lean_object* v_res_2199_; 
v_res_2199_ = l_Lean_resolveNamespace___redArg___lam__1(v_x_2195_, v_withRef_2196_, v___x_2197_, v_oldRef_2198_);
lean_dec(v_oldRef_2198_);
lean_dec(v_x_2195_);
return v_res_2199_;
}
}
static lean_object* _init_l_Lean_resolveNamespace___redArg___closed__4(void){
_start:
{
lean_object* v___x_2206_; lean_object* v___x_2207_; 
v___x_2206_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__3));
v___x_2207_ = l_Lean_MessageData_ofFormat(v___x_2206_);
return v___x_2207_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace___redArg(lean_object* v_inst_2208_, lean_object* v_inst_2209_, lean_object* v_inst_2210_, lean_object* v_inst_2211_, lean_object* v_x_2212_){
_start:
{
if (lean_obj_tag(v_x_2212_) == 3)
{
lean_object* v_toApplicative_2213_; lean_object* v_toBind_2214_; lean_object* v_toPure_2215_; lean_object* v_toMonadRef_2216_; lean_object* v_val_2217_; lean_object* v_preresolved_2218_; lean_object* v___f_2219_; lean_object* v___x_2220_; lean_object* v_pre_2221_; uint8_t v___x_2222_; 
v_toApplicative_2213_ = lean_ctor_get(v_inst_2208_, 0);
v_toBind_2214_ = lean_ctor_get(v_inst_2208_, 1);
lean_inc(v_toBind_2214_);
v_toPure_2215_ = lean_ctor_get(v_toApplicative_2213_, 1);
v_toMonadRef_2216_ = lean_ctor_get(v_inst_2211_, 1);
v_val_2217_ = lean_ctor_get(v_x_2212_, 2);
v_preresolved_2218_ = lean_ctor_get(v_x_2212_, 3);
v___f_2219_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__0));
v___x_2220_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__1));
lean_inc(v_preresolved_2218_);
v_pre_2221_ = l_List_filterMapTR_go___redArg(v___f_2219_, v_preresolved_2218_, v___x_2220_);
v___x_2222_ = l_List_isEmpty___redArg(v_pre_2221_);
if (v___x_2222_ == 0)
{
lean_object* v___x_2223_; 
lean_inc(v_toPure_2215_);
lean_dec_ref_known(v_x_2212_, 4);
lean_dec(v_toBind_2214_);
lean_dec_ref(v_inst_2211_);
lean_dec_ref(v_inst_2210_);
lean_dec_ref(v_inst_2209_);
lean_dec_ref(v_inst_2208_);
v___x_2223_ = lean_apply_2(v_toPure_2215_, lean_box(0), v_pre_2221_);
return v___x_2223_;
}
else
{
lean_object* v_getRef_2224_; lean_object* v_withRef_2225_; uint8_t v___x_2226_; lean_object* v___x_2227_; lean_object* v___f_2228_; lean_object* v___x_2229_; 
lean_dec(v_pre_2221_);
v_getRef_2224_ = lean_ctor_get(v_toMonadRef_2216_, 0);
lean_inc(v_getRef_2224_);
v_withRef_2225_ = lean_ctor_get(v_toMonadRef_2216_, 1);
lean_inc(v_withRef_2225_);
v___x_2226_ = 0;
lean_inc(v_val_2217_);
v___x_2227_ = l_Lean_resolveNamespaceCore___redArg(v_inst_2208_, v_inst_2209_, v_inst_2210_, v_inst_2211_, v_val_2217_, v___x_2226_);
v___f_2228_ = lean_alloc_closure((void*)(l_Lean_resolveNamespace___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2228_, 0, v_x_2212_);
lean_closure_set(v___f_2228_, 1, v_withRef_2225_);
lean_closure_set(v___f_2228_, 2, v___x_2227_);
v___x_2229_ = lean_apply_4(v_toBind_2214_, lean_box(0), lean_box(0), v_getRef_2224_, v___f_2228_);
return v___x_2229_;
}
}
else
{
lean_object* v___x_2230_; lean_object* v___x_2231_; 
lean_dec_ref(v_inst_2210_);
lean_dec_ref(v_inst_2209_);
v___x_2230_ = lean_obj_once(&l_Lean_resolveNamespace___redArg___closed__4, &l_Lean_resolveNamespace___redArg___closed__4_once, _init_l_Lean_resolveNamespace___redArg___closed__4);
v___x_2231_ = l_Lean_throwErrorAt___redArg(v_inst_2208_, v_inst_2211_, v_x_2212_, v___x_2230_);
return v___x_2231_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveNamespace(lean_object* v_m_2232_, lean_object* v_inst_2233_, lean_object* v_inst_2234_, lean_object* v_inst_2235_, lean_object* v_inst_2236_, lean_object* v_x_2237_){
_start:
{
lean_object* v___x_2238_; 
v___x_2238_ = l_Lean_resolveNamespace___redArg(v_inst_2233_, v_inst_2234_, v_inst_2235_, v_inst_2236_, v_x_2237_);
return v___x_2238_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg___lam__0(lean_object* v_id_2241_, lean_object* v___f_2242_, lean_object* v_inst_2243_, lean_object* v_inst_2244_, lean_object* v_toPure_2245_, lean_object* v_____do__lift_2246_){
_start:
{
if (lean_obj_tag(v_____do__lift_2246_) == 1)
{
lean_object* v_tail_2262_; 
v_tail_2262_ = lean_ctor_get(v_____do__lift_2246_, 1);
if (lean_obj_tag(v_tail_2262_) == 0)
{
lean_object* v_head_2263_; lean_object* v___x_2264_; 
lean_dec_ref(v_inst_2244_);
lean_dec_ref(v_inst_2243_);
lean_dec_ref(v___f_2242_);
v_head_2263_ = lean_ctor_get(v_____do__lift_2246_, 0);
lean_inc(v_head_2263_);
lean_dec_ref_known(v_____do__lift_2246_, 2);
v___x_2264_ = lean_apply_2(v_toPure_2245_, lean_box(0), v_head_2263_);
return v___x_2264_;
}
else
{
lean_dec(v_toPure_2245_);
goto v___jp_2247_;
}
}
else
{
lean_dec(v_toPure_2245_);
goto v___jp_2247_;
}
v___jp_2247_:
{
lean_object* v___x_2248_; lean_object* v___x_2249_; uint8_t v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; 
v___x_2248_ = ((lean_object*)(l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__0));
v___x_2249_ = l_Lean_TSyntax_getId(v_id_2241_);
v___x_2250_ = 1;
v___x_2251_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2249_, v___x_2250_);
v___x_2252_ = lean_string_append(v___x_2248_, v___x_2251_);
lean_dec_ref(v___x_2251_);
v___x_2253_ = ((lean_object*)(l_Lean_resolveUniqueNamespace___redArg___lam__0___closed__1));
v___x_2254_ = lean_string_append(v___x_2252_, v___x_2253_);
v___x_2255_ = l_List_toString___redArg(v___f_2242_, v_____do__lift_2246_);
v___x_2256_ = lean_string_append(v___x_2254_, v___x_2255_);
lean_dec_ref(v___x_2255_);
v___x_2257_ = ((lean_object*)(l_Lean_resolveNamespaceCore___redArg___lam__1___closed__1));
v___x_2258_ = lean_string_append(v___x_2256_, v___x_2257_);
v___x_2259_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2259_, 0, v___x_2258_);
v___x_2260_ = l_Lean_MessageData_ofFormat(v___x_2259_);
v___x_2261_ = l_Lean_throwError___redArg(v_inst_2243_, v_inst_2244_, v___x_2260_);
return v___x_2261_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg___lam__0___boxed(lean_object* v_id_2265_, lean_object* v___f_2266_, lean_object* v_inst_2267_, lean_object* v_inst_2268_, lean_object* v_toPure_2269_, lean_object* v_____do__lift_2270_){
_start:
{
lean_object* v_res_2271_; 
v_res_2271_ = l_Lean_resolveUniqueNamespace___redArg___lam__0(v_id_2265_, v___f_2266_, v_inst_2267_, v_inst_2268_, v_toPure_2269_, v_____do__lift_2270_);
lean_dec(v_id_2265_);
return v_res_2271_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace___redArg(lean_object* v_inst_2273_, lean_object* v_inst_2274_, lean_object* v_inst_2275_, lean_object* v_inst_2276_, lean_object* v_id_2277_){
_start:
{
lean_object* v_toApplicative_2278_; lean_object* v_toBind_2279_; lean_object* v_toPure_2280_; lean_object* v___f_2281_; lean_object* v___x_2282_; lean_object* v___f_2283_; lean_object* v___x_2284_; 
v_toApplicative_2278_ = lean_ctor_get(v_inst_2273_, 0);
v_toBind_2279_ = lean_ctor_get(v_inst_2273_, 1);
lean_inc(v_toBind_2279_);
v_toPure_2280_ = lean_ctor_get(v_toApplicative_2278_, 1);
lean_inc(v_toPure_2280_);
v___f_2281_ = ((lean_object*)(l_Lean_resolveUniqueNamespace___redArg___closed__0));
lean_inc(v_id_2277_);
lean_inc_ref(v_inst_2276_);
lean_inc_ref(v_inst_2273_);
v___x_2282_ = l_Lean_resolveNamespace___redArg(v_inst_2273_, v_inst_2274_, v_inst_2275_, v_inst_2276_, v_id_2277_);
v___f_2283_ = lean_alloc_closure((void*)(l_Lean_resolveUniqueNamespace___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_2283_, 0, v_id_2277_);
lean_closure_set(v___f_2283_, 1, v___f_2281_);
lean_closure_set(v___f_2283_, 2, v_inst_2273_);
lean_closure_set(v___f_2283_, 3, v_inst_2276_);
lean_closure_set(v___f_2283_, 4, v_toPure_2280_);
v___x_2284_ = lean_apply_4(v_toBind_2279_, lean_box(0), lean_box(0), v___x_2282_, v___f_2283_);
return v___x_2284_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveUniqueNamespace(lean_object* v_m_2285_, lean_object* v_inst_2286_, lean_object* v_inst_2287_, lean_object* v_inst_2288_, lean_object* v_inst_2289_, lean_object* v_id_2290_){
_start:
{
lean_object* v___x_2291_; 
v___x_2291_ = l_Lean_resolveUniqueNamespace___redArg(v_inst_2286_, v_inst_2287_, v_inst_2288_, v_inst_2289_, v_id_2290_);
return v___x_2291_;
}
}
LEAN_EXPORT uint8_t l_Lean_filterFieldList___redArg___lam__0(lean_object* v_x_2292_){
_start:
{
lean_object* v_snd_2293_; uint8_t v___x_2294_; 
v_snd_2293_ = lean_ctor_get(v_x_2292_, 1);
v___x_2294_ = l_List_isEmpty___redArg(v_snd_2293_);
return v___x_2294_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__0___boxed(lean_object* v_x_2295_){
_start:
{
uint8_t v_res_2296_; lean_object* v_r_2297_; 
v_res_2296_ = l_Lean_filterFieldList___redArg___lam__0(v_x_2295_);
lean_dec_ref(v_x_2295_);
v_r_2297_ = lean_box(v_res_2296_);
return v_r_2297_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__1(lean_object* v_x_2298_){
_start:
{
lean_object* v_fst_2299_; 
v_fst_2299_ = lean_ctor_get(v_x_2298_, 0);
lean_inc(v_fst_2299_);
return v_fst_2299_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__1___boxed(lean_object* v_x_2300_){
_start:
{
lean_object* v_res_2301_; 
v_res_2301_ = l_Lean_filterFieldList___redArg___lam__1(v_x_2300_);
lean_dec_ref(v_x_2300_);
return v_res_2301_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__2(lean_object* v___f_2302_, lean_object* v_cs_2303_, lean_object* v_toPure_2304_, lean_object* v_____r_2305_){
_start:
{
lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; 
v___x_2306_ = lean_box(0);
v___x_2307_ = l_List_mapTR_loop___redArg(v___f_2302_, v_cs_2303_, v___x_2306_);
v___x_2308_ = lean_apply_2(v_toPure_2304_, lean_box(0), v___x_2307_);
return v___x_2308_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__3(lean_object* v___f_2309_, lean_object* v_____r_2310_){
_start:
{
lean_object* v___x_2311_; 
v___x_2311_ = lean_apply_1(v___f_2309_, v_____r_2310_);
return v___x_2311_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg___lam__4(lean_object* v_inst_2312_, lean_object* v_inst_2313_, lean_object* v_inst_2314_, lean_object* v_n_2315_, lean_object* v_toBind_2316_, lean_object* v___f_2317_, lean_object* v_____do__lift_2318_){
_start:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2319_ = l_Lean_throwUnknownConstantAt___redArg(v_inst_2312_, v_inst_2313_, v_inst_2314_, v_____do__lift_2318_, v_n_2315_);
v___x_2320_ = lean_apply_4(v_toBind_2316_, lean_box(0), lean_box(0), v___x_2319_, v___f_2317_);
return v___x_2320_;
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___redArg(lean_object* v_inst_2323_, lean_object* v_inst_2324_, lean_object* v_inst_2325_, lean_object* v_n_2326_, lean_object* v_cs_2327_){
_start:
{
lean_object* v_toApplicative_2328_; lean_object* v_toBind_2329_; lean_object* v_toPure_2330_; lean_object* v_toMonadRef_2331_; lean_object* v___f_2332_; lean_object* v___f_2333_; lean_object* v___x_2334_; lean_object* v_cs_2335_; lean_object* v___f_2336_; uint8_t v___x_2337_; 
v_toApplicative_2328_ = lean_ctor_get(v_inst_2323_, 0);
v_toBind_2329_ = lean_ctor_get(v_inst_2323_, 1);
lean_inc(v_toBind_2329_);
v_toPure_2330_ = lean_ctor_get(v_toApplicative_2328_, 1);
v_toMonadRef_2331_ = lean_ctor_get(v_inst_2325_, 1);
v___f_2332_ = ((lean_object*)(l_Lean_filterFieldList___redArg___closed__0));
v___f_2333_ = ((lean_object*)(l_Lean_filterFieldList___redArg___closed__1));
v___x_2334_ = lean_box(0);
v_cs_2335_ = l_List_filterTR_loop___redArg(v___f_2332_, v_cs_2327_, v___x_2334_);
lean_inc(v_toPure_2330_);
lean_inc(v_cs_2335_);
v___f_2336_ = lean_alloc_closure((void*)(l_Lean_filterFieldList___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2336_, 0, v___f_2333_);
lean_closure_set(v___f_2336_, 1, v_cs_2335_);
lean_closure_set(v___f_2336_, 2, v_toPure_2330_);
v___x_2337_ = l_List_isEmpty___redArg(v_cs_2335_);
if (v___x_2337_ == 0)
{
lean_object* v___x_2338_; lean_object* v___x_2339_; 
lean_inc(v_toPure_2330_);
lean_dec_ref(v___f_2336_);
lean_dec(v_toBind_2329_);
lean_dec(v_n_2326_);
lean_dec_ref(v_inst_2325_);
lean_dec_ref(v_inst_2324_);
lean_dec_ref(v_inst_2323_);
v___x_2338_ = lean_box(0);
v___x_2339_ = l_Lean_filterFieldList___redArg___lam__2(v___f_2333_, v_cs_2335_, v_toPure_2330_, v___x_2338_);
return v___x_2339_;
}
else
{
lean_object* v_getRef_2340_; lean_object* v___f_2341_; lean_object* v___f_2342_; lean_object* v___x_2343_; 
lean_dec(v_cs_2335_);
v_getRef_2340_ = lean_ctor_get(v_toMonadRef_2331_, 0);
lean_inc(v_getRef_2340_);
v___f_2341_ = lean_alloc_closure((void*)(l_Lean_filterFieldList___redArg___lam__3), 2, 1);
lean_closure_set(v___f_2341_, 0, v___f_2336_);
lean_inc(v_toBind_2329_);
v___f_2342_ = lean_alloc_closure((void*)(l_Lean_filterFieldList___redArg___lam__4), 7, 6);
lean_closure_set(v___f_2342_, 0, v_inst_2323_);
lean_closure_set(v___f_2342_, 1, v_inst_2324_);
lean_closure_set(v___f_2342_, 2, v_inst_2325_);
lean_closure_set(v___f_2342_, 3, v_n_2326_);
lean_closure_set(v___f_2342_, 4, v_toBind_2329_);
lean_closure_set(v___f_2342_, 5, v___f_2341_);
v___x_2343_ = lean_apply_4(v_toBind_2329_, lean_box(0), lean_box(0), v_getRef_2340_, v___f_2342_);
return v___x_2343_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList(lean_object* v_m_2344_, lean_object* v_inst_2345_, lean_object* v_inst_2346_, lean_object* v_inst_2347_, lean_object* v_n_2348_, lean_object* v_cs_2349_){
_start:
{
lean_object* v___x_2350_; 
v___x_2350_ = l_Lean_filterFieldList___redArg(v_inst_2345_, v_inst_2346_, v_inst_2347_, v_n_2348_, v_cs_2349_);
return v___x_2350_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg___lam__0(lean_object* v_inst_2351_, lean_object* v_inst_2352_, lean_object* v_inst_2353_, lean_object* v_n_2354_, lean_object* v_cs_2355_){
_start:
{
lean_object* v___x_2356_; 
v___x_2356_ = l_Lean_filterFieldList___redArg(v_inst_2351_, v_inst_2352_, v_inst_2353_, v_n_2354_, v_cs_2355_);
return v___x_2356_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg(lean_object* v_inst_2357_, lean_object* v_inst_2358_, lean_object* v_inst_2359_, lean_object* v_inst_2360_, lean_object* v_inst_2361_, lean_object* v_inst_2362_, lean_object* v_inst_2363_, lean_object* v_n_2364_){
_start:
{
lean_object* v_toBind_2365_; lean_object* v___f_2366_; uint8_t v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; 
v_toBind_2365_ = lean_ctor_get(v_inst_2357_, 1);
lean_inc(v_toBind_2365_);
lean_inc(v_n_2364_);
lean_inc_ref(v_inst_2359_);
lean_inc_ref(v_inst_2357_);
v___f_2366_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg___lam__0), 5, 4);
lean_closure_set(v___f_2366_, 0, v_inst_2357_);
lean_closure_set(v___f_2366_, 1, v_inst_2359_);
lean_closure_set(v___f_2366_, 2, v_inst_2363_);
lean_closure_set(v___f_2366_, 3, v_n_2364_);
v___x_2367_ = 1;
v___x_2368_ = l_Lean_resolveGlobalName___redArg(v_inst_2357_, v_inst_2358_, v_inst_2359_, v_inst_2360_, v_inst_2361_, v_inst_2362_, v_n_2364_, v___x_2367_);
v___x_2369_ = lean_apply_4(v_toBind_2365_, lean_box(0), lean_box(0), v___x_2368_, v___f_2366_);
return v___x_2369_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore(lean_object* v_m_2370_, lean_object* v_inst_2371_, lean_object* v_inst_2372_, lean_object* v_inst_2373_, lean_object* v_inst_2374_, lean_object* v_inst_2375_, lean_object* v_inst_2376_, lean_object* v_inst_2377_, lean_object* v_n_2378_){
_start:
{
lean_object* v___x_2379_; 
v___x_2379_ = l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg(v_inst_2371_, v_inst_2372_, v_inst_2373_, v_inst_2374_, v_inst_2375_, v_inst_2376_, v_inst_2377_, v_n_2378_);
return v___x_2379_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload___redArg___lam__0(lean_object* v_declName_2380_){
_start:
{
lean_object* v___x_2381_; lean_object* v___x_2382_; 
v___x_2381_ = lean_box(0);
v___x_2382_ = l_Lean_mkConst(v_declName_2380_, v___x_2381_);
return v___x_2382_;
}
}
static lean_object* _init_l_Lean_ensureNoOverload___redArg___closed__2(void){
_start:
{
lean_object* v___x_2385_; lean_object* v___x_2386_; 
v___x_2385_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__1));
v___x_2386_ = l_Lean_stringToMessageData(v___x_2385_);
return v___x_2386_;
}
}
static lean_object* _init_l_Lean_ensureNoOverload___redArg___closed__4(void){
_start:
{
lean_object* v___x_2388_; lean_object* v___x_2389_; 
v___x_2388_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__3));
v___x_2389_ = l_Lean_stringToMessageData(v___x_2388_);
return v___x_2389_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload___redArg(lean_object* v_inst_2391_, lean_object* v_inst_2392_, lean_object* v_n_2393_, lean_object* v_cs_2394_){
_start:
{
lean_object* v_toApplicative_2395_; lean_object* v_toPure_2396_; lean_object* v___f_2397_; 
v_toApplicative_2395_ = lean_ctor_get(v_inst_2391_, 0);
v_toPure_2396_ = lean_ctor_get(v_toApplicative_2395_, 1);
v___f_2397_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__0));
if (lean_obj_tag(v_cs_2394_) == 1)
{
lean_object* v_tail_2411_; 
v_tail_2411_ = lean_ctor_get(v_cs_2394_, 1);
if (lean_obj_tag(v_tail_2411_) == 0)
{
lean_object* v_head_2412_; lean_object* v___x_2413_; 
lean_inc(v_toPure_2396_);
lean_dec(v_n_2393_);
lean_dec_ref(v_inst_2392_);
lean_dec_ref(v_inst_2391_);
v_head_2412_ = lean_ctor_get(v_cs_2394_, 0);
lean_inc(v_head_2412_);
lean_dec_ref_known(v_cs_2394_, 2);
v___x_2413_ = lean_apply_2(v_toPure_2396_, lean_box(0), v_head_2412_);
return v___x_2413_;
}
else
{
goto v___jp_2398_;
}
}
else
{
goto v___jp_2398_;
}
v___jp_2398_:
{
lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; 
v___x_2399_ = lean_obj_once(&l_Lean_ensureNoOverload___redArg___closed__2, &l_Lean_ensureNoOverload___redArg___closed__2_once, _init_l_Lean_ensureNoOverload___redArg___closed__2);
v___x_2400_ = l_Lean_MessageData_ofName(v_n_2393_);
v___x_2401_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2401_, 0, v___x_2399_);
lean_ctor_set(v___x_2401_, 1, v___x_2400_);
v___x_2402_ = lean_obj_once(&l_Lean_ensureNoOverload___redArg___closed__4, &l_Lean_ensureNoOverload___redArg___closed__4_once, _init_l_Lean_ensureNoOverload___redArg___closed__4);
v___x_2403_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2403_, 0, v___x_2401_);
lean_ctor_set(v___x_2403_, 1, v___x_2402_);
v___x_2404_ = lean_box(0);
v___x_2405_ = l_List_mapTR_loop___redArg(v___f_2397_, v_cs_2394_, v___x_2404_);
v___x_2406_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__5));
v___x_2407_ = l_List_mapTR_loop___redArg(v___x_2406_, v___x_2405_, v___x_2404_);
v___x_2408_ = l_Lean_MessageData_ofList(v___x_2407_);
v___x_2409_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2409_, 0, v___x_2403_);
lean_ctor_set(v___x_2409_, 1, v___x_2408_);
v___x_2410_ = l_Lean_throwError___redArg(v_inst_2391_, v_inst_2392_, v___x_2409_);
return v___x_2410_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNoOverload(lean_object* v_m_2414_, lean_object* v_inst_2415_, lean_object* v_inst_2416_, lean_object* v_n_2417_, lean_object* v_cs_2418_){
_start:
{
lean_object* v___x_2419_; 
v___x_2419_ = l_Lean_ensureNoOverload___redArg(v_inst_2415_, v_inst_2416_, v_n_2417_, v_cs_2418_);
return v___x_2419_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore___redArg___lam__0(lean_object* v_inst_2420_, lean_object* v_inst_2421_, lean_object* v_n_2422_, lean_object* v_____do__lift_2423_){
_start:
{
lean_object* v___x_2424_; 
v___x_2424_ = l_Lean_ensureNoOverload___redArg(v_inst_2420_, v_inst_2421_, v_n_2422_, v_____do__lift_2423_);
return v___x_2424_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore___redArg(lean_object* v_inst_2425_, lean_object* v_inst_2426_, lean_object* v_inst_2427_, lean_object* v_inst_2428_, lean_object* v_inst_2429_, lean_object* v_inst_2430_, lean_object* v_inst_2431_, lean_object* v_n_2432_){
_start:
{
lean_object* v_toBind_2433_; lean_object* v___f_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; 
v_toBind_2433_ = lean_ctor_get(v_inst_2425_, 1);
lean_inc(v_toBind_2433_);
lean_inc(v_n_2432_);
lean_inc_ref(v_inst_2431_);
lean_inc_ref(v_inst_2425_);
v___f_2434_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalConstNoOverloadCore___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2434_, 0, v_inst_2425_);
lean_closure_set(v___f_2434_, 1, v_inst_2431_);
lean_closure_set(v___f_2434_, 2, v_n_2432_);
v___x_2435_ = l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___redArg(v_inst_2425_, v_inst_2426_, v_inst_2427_, v_inst_2428_, v_inst_2429_, v_inst_2430_, v_inst_2431_, v_n_2432_);
v___x_2436_ = lean_apply_4(v_toBind_2433_, lean_box(0), lean_box(0), v___x_2435_, v___f_2434_);
return v___x_2436_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverloadCore(lean_object* v_m_2437_, lean_object* v_inst_2438_, lean_object* v_inst_2439_, lean_object* v_inst_2440_, lean_object* v_inst_2441_, lean_object* v_inst_2442_, lean_object* v_inst_2443_, lean_object* v_inst_2444_, lean_object* v_n_2445_){
_start:
{
lean_object* v___x_2446_; 
v___x_2446_ = l_Lean_resolveGlobalConstNoOverloadCore___redArg(v_inst_2438_, v_inst_2439_, v_inst_2440_, v_inst_2441_, v_inst_2442_, v_inst_2443_, v_inst_2444_, v_n_2445_);
return v___x_2446_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__0(lean_object* v_x_2447_){
_start:
{
if (lean_obj_tag(v_x_2447_) == 1)
{
lean_object* v_fields_2448_; 
v_fields_2448_ = lean_ctor_get(v_x_2447_, 1);
if (lean_obj_tag(v_fields_2448_) == 0)
{
lean_object* v_n_2449_; lean_object* v___x_2450_; 
v_n_2449_ = lean_ctor_get(v_x_2447_, 0);
lean_inc(v_n_2449_);
v___x_2450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2450_, 0, v_n_2449_);
return v___x_2450_;
}
else
{
lean_object* v___x_2451_; 
v___x_2451_ = lean_box(0);
return v___x_2451_;
}
}
else
{
lean_object* v___x_2452_; 
v___x_2452_ = lean_box(0);
return v___x_2452_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__0___boxed(lean_object* v_x_2453_){
_start:
{
lean_object* v_res_2454_; 
v_res_2454_ = l_Lean_preprocessSyntaxAndResolve___redArg___lam__0(v_x_2453_);
lean_dec_ref(v_x_2453_);
return v_res_2454_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__1(lean_object* v_stx_2455_, lean_object* v_withRef_2456_, lean_object* v___x_2457_, lean_object* v_oldRef_2458_){
_start:
{
lean_object* v_ref_2459_; lean_object* v___x_2460_; 
v_ref_2459_ = l_Lean_replaceRef(v_stx_2455_, v_oldRef_2458_);
v___x_2460_ = lean_apply_3(v_withRef_2456_, lean_box(0), v_ref_2459_, v___x_2457_);
return v___x_2460_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg___lam__1___boxed(lean_object* v_stx_2461_, lean_object* v_withRef_2462_, lean_object* v___x_2463_, lean_object* v_oldRef_2464_){
_start:
{
lean_object* v_res_2465_; 
v_res_2465_ = l_Lean_preprocessSyntaxAndResolve___redArg___lam__1(v_stx_2461_, v_withRef_2462_, v___x_2463_, v_oldRef_2464_);
lean_dec(v_oldRef_2464_);
lean_dec(v_stx_2461_);
return v_res_2465_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___redArg(lean_object* v_inst_2467_, lean_object* v_inst_2468_, lean_object* v_stx_2469_, lean_object* v_k_2470_){
_start:
{
if (lean_obj_tag(v_stx_2469_) == 3)
{
lean_object* v_toApplicative_2471_; lean_object* v_toBind_2472_; lean_object* v_toPure_2473_; lean_object* v_toMonadRef_2474_; lean_object* v_val_2475_; lean_object* v_preresolved_2476_; lean_object* v___f_2477_; lean_object* v___x_2478_; lean_object* v_pre_2479_; uint8_t v___x_2480_; 
v_toApplicative_2471_ = lean_ctor_get(v_inst_2467_, 0);
lean_inc_ref(v_toApplicative_2471_);
v_toBind_2472_ = lean_ctor_get(v_inst_2467_, 1);
lean_inc(v_toBind_2472_);
lean_dec_ref(v_inst_2467_);
v_toPure_2473_ = lean_ctor_get(v_toApplicative_2471_, 1);
lean_inc(v_toPure_2473_);
lean_dec_ref(v_toApplicative_2471_);
v_toMonadRef_2474_ = lean_ctor_get(v_inst_2468_, 1);
lean_inc_ref(v_toMonadRef_2474_);
lean_dec_ref(v_inst_2468_);
v_val_2475_ = lean_ctor_get(v_stx_2469_, 2);
v_preresolved_2476_ = lean_ctor_get(v_stx_2469_, 3);
v___f_2477_ = ((lean_object*)(l_Lean_preprocessSyntaxAndResolve___redArg___closed__0));
v___x_2478_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__1));
lean_inc(v_preresolved_2476_);
v_pre_2479_ = l_List_filterMapTR_go___redArg(v___f_2477_, v_preresolved_2476_, v___x_2478_);
v___x_2480_ = l_List_isEmpty___redArg(v_pre_2479_);
if (v___x_2480_ == 0)
{
lean_object* v___x_2481_; 
lean_dec_ref(v_toMonadRef_2474_);
lean_dec(v_toBind_2472_);
lean_dec_ref_known(v_stx_2469_, 4);
lean_dec(v_k_2470_);
v___x_2481_ = lean_apply_2(v_toPure_2473_, lean_box(0), v_pre_2479_);
return v___x_2481_;
}
else
{
lean_object* v_getRef_2482_; lean_object* v_withRef_2483_; lean_object* v___x_2484_; lean_object* v___f_2485_; lean_object* v___x_2486_; 
lean_dec(v_pre_2479_);
lean_dec(v_toPure_2473_);
v_getRef_2482_ = lean_ctor_get(v_toMonadRef_2474_, 0);
lean_inc(v_getRef_2482_);
v_withRef_2483_ = lean_ctor_get(v_toMonadRef_2474_, 1);
lean_inc(v_withRef_2483_);
lean_dec_ref(v_toMonadRef_2474_);
lean_inc(v_val_2475_);
v___x_2484_ = lean_apply_1(v_k_2470_, v_val_2475_);
v___f_2485_ = lean_alloc_closure((void*)(l_Lean_preprocessSyntaxAndResolve___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2485_, 0, v_stx_2469_);
lean_closure_set(v___f_2485_, 1, v_withRef_2483_);
lean_closure_set(v___f_2485_, 2, v___x_2484_);
v___x_2486_ = lean_apply_4(v_toBind_2472_, lean_box(0), lean_box(0), v_getRef_2482_, v___f_2485_);
return v___x_2486_;
}
}
else
{
lean_object* v___x_2487_; lean_object* v___x_2488_; 
lean_dec(v_k_2470_);
v___x_2487_ = lean_obj_once(&l_Lean_resolveNamespace___redArg___closed__4, &l_Lean_resolveNamespace___redArg___closed__4_once, _init_l_Lean_resolveNamespace___redArg___closed__4);
v___x_2488_ = l_Lean_throwErrorAt___redArg(v_inst_2467_, v_inst_2468_, v_stx_2469_, v___x_2487_);
return v___x_2488_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve(lean_object* v_m_2489_, lean_object* v_inst_2490_, lean_object* v_inst_2491_, lean_object* v_stx_2492_, lean_object* v_k_2493_){
_start:
{
lean_object* v___x_2494_; 
v___x_2494_ = l_Lean_preprocessSyntaxAndResolve___redArg(v_inst_2490_, v_inst_2491_, v_stx_2492_, v_k_2493_);
return v___x_2494_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst___redArg(lean_object* v_inst_2495_, lean_object* v_inst_2496_, lean_object* v_inst_2497_, lean_object* v_inst_2498_, lean_object* v_inst_2499_, lean_object* v_inst_2500_, lean_object* v_inst_2501_, lean_object* v_stx_2502_){
_start:
{
lean_object* v___x_2503_; lean_object* v___x_2504_; 
lean_inc_ref(v_inst_2501_);
lean_inc_ref(v_inst_2495_);
v___x_2503_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore), 9, 8);
lean_closure_set(v___x_2503_, 0, lean_box(0));
lean_closure_set(v___x_2503_, 1, v_inst_2495_);
lean_closure_set(v___x_2503_, 2, v_inst_2496_);
lean_closure_set(v___x_2503_, 3, v_inst_2497_);
lean_closure_set(v___x_2503_, 4, v_inst_2498_);
lean_closure_set(v___x_2503_, 5, v_inst_2499_);
lean_closure_set(v___x_2503_, 6, v_inst_2500_);
lean_closure_set(v___x_2503_, 7, v_inst_2501_);
v___x_2504_ = l_Lean_preprocessSyntaxAndResolve___redArg(v_inst_2495_, v_inst_2501_, v_stx_2502_, v___x_2503_);
return v___x_2504_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst(lean_object* v_m_2505_, lean_object* v_inst_2506_, lean_object* v_inst_2507_, lean_object* v_inst_2508_, lean_object* v_inst_2509_, lean_object* v_inst_2510_, lean_object* v_inst_2511_, lean_object* v_inst_2512_, lean_object* v_stx_2513_){
_start:
{
lean_object* v___x_2514_; 
v___x_2514_ = l_Lean_resolveGlobalConst___redArg(v_inst_2506_, v_inst_2507_, v_inst_2508_, v_inst_2509_, v_inst_2510_, v_inst_2511_, v_inst_2512_, v_stx_2513_);
return v___x_2514_;
}
}
static lean_object* _init_l_Lean_ensureNonAmbiguous___redArg___closed__1(void){
_start:
{
lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; 
v___x_2516_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__2));
v___x_2517_ = lean_unsigned_to_nat(11u);
v___x_2518_ = lean_unsigned_to_nat(434u);
v___x_2519_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___redArg___closed__0));
v___x_2520_ = ((lean_object*)(l_Lean_ResolveName_resolveNamespaceUsingScope_x3f___closed__0));
v___x_2521_ = l_mkPanicMessageWithDecl(v___x_2520_, v___x_2519_, v___x_2518_, v___x_2517_, v___x_2516_);
return v___x_2521_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous___redArg(lean_object* v_inst_2525_, lean_object* v_inst_2526_, lean_object* v_id_2527_, lean_object* v_cs_2528_){
_start:
{
if (lean_obj_tag(v_cs_2528_) == 0)
{
lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; 
lean_dec(v_id_2527_);
lean_dec_ref(v_inst_2526_);
v___x_2529_ = lean_box(0);
v___x_2530_ = l_instInhabitedOfMonad___redArg(v_inst_2525_, v___x_2529_);
v___x_2531_ = lean_obj_once(&l_Lean_ensureNonAmbiguous___redArg___closed__1, &l_Lean_ensureNonAmbiguous___redArg___closed__1_once, _init_l_Lean_ensureNonAmbiguous___redArg___closed__1);
v___x_2532_ = l_panic___redArg(v___x_2530_, v___x_2531_);
lean_dec(v___x_2530_);
return v___x_2532_;
}
else
{
lean_object* v_tail_2533_; 
v_tail_2533_ = lean_ctor_get(v_cs_2528_, 1);
if (lean_obj_tag(v_tail_2533_) == 0)
{
lean_object* v_toApplicative_2534_; lean_object* v_toPure_2535_; lean_object* v_head_2536_; lean_object* v___x_2537_; 
v_toApplicative_2534_ = lean_ctor_get(v_inst_2525_, 0);
lean_inc_ref(v_toApplicative_2534_);
lean_dec(v_id_2527_);
lean_dec_ref(v_inst_2526_);
lean_dec_ref(v_inst_2525_);
v_toPure_2535_ = lean_ctor_get(v_toApplicative_2534_, 1);
lean_inc(v_toPure_2535_);
lean_dec_ref(v_toApplicative_2534_);
v_head_2536_ = lean_ctor_get(v_cs_2528_, 0);
lean_inc(v_head_2536_);
lean_dec_ref_known(v_cs_2528_, 2);
v___x_2537_ = lean_apply_2(v_toPure_2535_, lean_box(0), v_head_2536_);
return v___x_2537_;
}
else
{
lean_object* v___f_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; uint8_t v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; 
v___f_2538_ = ((lean_object*)(l_Lean_ensureNoOverload___redArg___closed__0));
v___x_2539_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___redArg___closed__2));
v___x_2540_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___redArg___closed__3));
v___x_2541_ = lean_box(0);
v___x_2542_ = 0;
lean_inc(v_id_2527_);
v___x_2543_ = l_Lean_Syntax_formatStx(v_id_2527_, v___x_2541_, v___x_2542_);
v___x_2544_ = l_Std_Format_defWidth;
v___x_2545_ = lean_unsigned_to_nat(0u);
v___x_2546_ = l_Std_Format_pretty(v___x_2543_, v___x_2544_, v___x_2545_, v___x_2545_);
v___x_2547_ = lean_string_append(v___x_2540_, v___x_2546_);
lean_dec_ref(v___x_2546_);
v___x_2548_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___redArg___closed__4));
v___x_2549_ = lean_string_append(v___x_2547_, v___x_2548_);
v___x_2550_ = lean_box(0);
v___x_2551_ = l_List_mapTR_loop___redArg(v___f_2538_, v_cs_2528_, v___x_2550_);
v___x_2552_ = l_List_toString___redArg(v___x_2539_, v___x_2551_);
v___x_2553_ = lean_string_append(v___x_2549_, v___x_2552_);
lean_dec_ref(v___x_2552_);
v___x_2554_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2554_, 0, v___x_2553_);
v___x_2555_ = l_Lean_MessageData_ofFormat(v___x_2554_);
v___x_2556_ = l_Lean_throwErrorAt___redArg(v_inst_2525_, v_inst_2526_, v_id_2527_, v___x_2555_);
return v___x_2556_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous(lean_object* v_m_2557_, lean_object* v_inst_2558_, lean_object* v_inst_2559_, lean_object* v_id_2560_, lean_object* v_cs_2561_){
_start:
{
lean_object* v___x_2562_; 
v___x_2562_ = l_Lean_ensureNonAmbiguous___redArg(v_inst_2558_, v_inst_2559_, v_id_2560_, v_cs_2561_);
return v___x_2562_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___redArg___lam__0(lean_object* v_inst_2563_, lean_object* v_inst_2564_, lean_object* v_id_2565_, lean_object* v_____do__lift_2566_){
_start:
{
lean_object* v___x_2567_; 
v___x_2567_ = l_Lean_ensureNonAmbiguous___redArg(v_inst_2563_, v_inst_2564_, v_id_2565_, v_____do__lift_2566_);
return v___x_2567_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___redArg(lean_object* v_inst_2568_, lean_object* v_inst_2569_, lean_object* v_inst_2570_, lean_object* v_inst_2571_, lean_object* v_inst_2572_, lean_object* v_inst_2573_, lean_object* v_inst_2574_, lean_object* v_id_2575_){
_start:
{
lean_object* v_toBind_2576_; lean_object* v___f_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; 
v_toBind_2576_ = lean_ctor_get(v_inst_2568_, 1);
lean_inc(v_toBind_2576_);
lean_inc(v_id_2575_);
lean_inc_ref(v_inst_2574_);
lean_inc_ref(v_inst_2568_);
v___f_2577_ = lean_alloc_closure((void*)(l_Lean_resolveGlobalConstNoOverload___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2577_, 0, v_inst_2568_);
lean_closure_set(v___f_2577_, 1, v_inst_2574_);
lean_closure_set(v___f_2577_, 2, v_id_2575_);
v___x_2578_ = l_Lean_resolveGlobalConst___redArg(v_inst_2568_, v_inst_2569_, v_inst_2570_, v_inst_2571_, v_inst_2572_, v_inst_2573_, v_inst_2574_, v_id_2575_);
v___x_2579_ = lean_apply_4(v_toBind_2576_, lean_box(0), lean_box(0), v___x_2578_, v___f_2577_);
return v___x_2579_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload(lean_object* v_m_2580_, lean_object* v_inst_2581_, lean_object* v_inst_2582_, lean_object* v_inst_2583_, lean_object* v_inst_2584_, lean_object* v_inst_2585_, lean_object* v_inst_2586_, lean_object* v_inst_2587_, lean_object* v_id_2588_){
_start:
{
lean_object* v___x_2589_; 
v___x_2589_ = l_Lean_resolveGlobalConstNoOverload___redArg(v_inst_2581_, v_inst_2582_, v_inst_2583_, v_inst_2584_, v_inst_2585_, v_inst_2586_, v_inst_2587_, v_id_2588_);
return v___x_2589_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0(lean_object* v___f_2590_, lean_object* v___f_2591_, uint8_t v_globalDeclFoundNext_2592_, uint8_t v_globalDeclFound_2593_, lean_object* v_r_2594_){
_start:
{
lean_object* v___x_2595_; lean_object* v_r_2596_; uint8_t v___x_2597_; 
v___x_2595_ = lean_box(0);
v_r_2596_ = l_List_filterTR_loop___redArg(v___f_2590_, v_r_2594_, v___x_2595_);
v___x_2597_ = l_List_isEmpty___redArg(v_r_2596_);
lean_dec(v_r_2596_);
if (v___x_2597_ == 0)
{
lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; 
v___x_2598_ = lean_box(0);
v___x_2599_ = lean_box(v_globalDeclFoundNext_2592_);
v___x_2600_ = lean_apply_2(v___f_2591_, v___x_2598_, v___x_2599_);
return v___x_2600_;
}
else
{
lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; 
v___x_2601_ = lean_box(0);
v___x_2602_ = lean_box(v_globalDeclFound_2593_);
v___x_2603_ = lean_apply_2(v___f_2591_, v___x_2601_, v___x_2602_);
return v___x_2603_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0___boxed(lean_object* v___f_2604_, lean_object* v___f_2605_, lean_object* v_globalDeclFoundNext_2606_, lean_object* v_globalDeclFound_2607_, lean_object* v_r_2608_){
_start:
{
uint8_t v_globalDeclFoundNext_boxed_2609_; uint8_t v_globalDeclFound_boxed_2610_; lean_object* v_res_2611_; 
v_globalDeclFoundNext_boxed_2609_ = lean_unbox(v_globalDeclFoundNext_2606_);
v_globalDeclFound_boxed_2610_ = lean_unbox(v_globalDeclFound_2607_);
v_res_2611_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0(v___f_2604_, v___f_2605_, v_globalDeclFoundNext_boxed_2609_, v_globalDeclFound_boxed_2610_, v_r_2608_);
return v_res_2611_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1___boxed(lean_object* v_str_2612_, lean_object* v_projs_2613_, lean_object* v_inst_2614_, lean_object* v_inst_2615_, lean_object* v_inst_2616_, lean_object* v_inst_2617_, lean_object* v_inst_2618_, lean_object* v_inst_2619_, lean_object* v_view_2620_, lean_object* v_findLocalDecl_x3f_2621_, lean_object* v_pre_2622_, lean_object* v_____r_2623_, lean_object* v_globalDeclFoundNext_2624_){
_start:
{
uint8_t v_globalDeclFoundNext_boxed_2625_; lean_object* v_res_2626_; 
v_globalDeclFoundNext_boxed_2625_ = lean_unbox(v_globalDeclFoundNext_2624_);
v_res_2626_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1(v_str_2612_, v_projs_2613_, v_inst_2614_, v_inst_2615_, v_inst_2616_, v_inst_2617_, v_inst_2618_, v_inst_2619_, v_view_2620_, v_findLocalDecl_x3f_2621_, v_pre_2622_, v_____r_2623_, v_globalDeclFoundNext_boxed_2625_);
return v_res_2626_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(lean_object* v_inst_2627_, lean_object* v_inst_2628_, lean_object* v_inst_2629_, lean_object* v_inst_2630_, lean_object* v_inst_2631_, lean_object* v_inst_2632_, lean_object* v_view_2633_, lean_object* v_findLocalDecl_x3f_2634_, lean_object* v_n_2635_, lean_object* v_projs_2636_, uint8_t v_globalDeclFound_2637_){
_start:
{
lean_object* v_toApplicative_2638_; lean_object* v_imported_2639_; lean_object* v_ctx_2640_; lean_object* v_scopes_2641_; lean_object* v_toBind_2642_; lean_object* v_toPure_2643_; lean_object* v___f_2644_; lean_object* v_givenNameView_2645_; uint8_t v___y_2647_; 
v_toApplicative_2638_ = lean_ctor_get(v_inst_2627_, 0);
v_imported_2639_ = lean_ctor_get(v_view_2633_, 1);
v_ctx_2640_ = lean_ctor_get(v_view_2633_, 2);
v_scopes_2641_ = lean_ctor_get(v_view_2633_, 3);
v_toBind_2642_ = lean_ctor_get(v_inst_2627_, 1);
v_toPure_2643_ = lean_ctor_get(v_toApplicative_2638_, 1);
v___f_2644_ = ((lean_object*)(l_Lean_filterFieldList___redArg___closed__0));
lean_inc(v_scopes_2641_);
lean_inc(v_ctx_2640_);
lean_inc(v_imported_2639_);
lean_inc(v_n_2635_);
v_givenNameView_2645_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_givenNameView_2645_, 0, v_n_2635_);
lean_ctor_set(v_givenNameView_2645_, 1, v_imported_2639_);
lean_ctor_set(v_givenNameView_2645_, 2, v_ctx_2640_);
lean_ctor_set(v_givenNameView_2645_, 3, v_scopes_2641_);
if (v_globalDeclFound_2637_ == 0)
{
v___y_2647_ = v_globalDeclFound_2637_;
goto v___jp_2646_;
}
else
{
uint8_t v___x_2683_; 
v___x_2683_ = l_List_isEmpty___redArg(v_projs_2636_);
if (v___x_2683_ == 0)
{
v___y_2647_ = v_globalDeclFound_2637_;
goto v___jp_2646_;
}
else
{
uint8_t v___x_2684_; 
v___x_2684_ = 0;
v___y_2647_ = v___x_2684_;
goto v___jp_2646_;
}
}
v___jp_2646_:
{
lean_object* v___x_2648_; lean_object* v___x_2649_; 
v___x_2648_ = lean_box(v___y_2647_);
lean_inc_ref(v_findLocalDecl_x3f_2634_);
lean_inc_ref(v_givenNameView_2645_);
v___x_2649_ = lean_apply_2(v_findLocalDecl_x3f_2634_, v_givenNameView_2645_, v___x_2648_);
if (lean_obj_tag(v___x_2649_) == 0)
{
if (lean_obj_tag(v_n_2635_) == 1)
{
lean_object* v_pre_2650_; lean_object* v_str_2651_; lean_object* v___f_2652_; 
v_pre_2650_ = lean_ctor_get(v_n_2635_, 0);
lean_inc_n(v_pre_2650_, 2);
v_str_2651_ = lean_ctor_get(v_n_2635_, 1);
lean_inc_ref_n(v_str_2651_, 2);
lean_dec_ref_known(v_n_2635_, 2);
lean_inc_ref(v_findLocalDecl_x3f_2634_);
lean_inc_ref(v_view_2633_);
lean_inc(v_inst_2632_);
lean_inc_ref(v_inst_2631_);
lean_inc_ref(v_inst_2630_);
lean_inc_ref(v_inst_2629_);
lean_inc_ref(v_inst_2628_);
lean_inc_ref(v_inst_2627_);
lean_inc(v_projs_2636_);
v___f_2652_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1___boxed), 13, 11);
lean_closure_set(v___f_2652_, 0, v_str_2651_);
lean_closure_set(v___f_2652_, 1, v_projs_2636_);
lean_closure_set(v___f_2652_, 2, v_inst_2627_);
lean_closure_set(v___f_2652_, 3, v_inst_2628_);
lean_closure_set(v___f_2652_, 4, v_inst_2629_);
lean_closure_set(v___f_2652_, 5, v_inst_2630_);
lean_closure_set(v___f_2652_, 6, v_inst_2631_);
lean_closure_set(v___f_2652_, 7, v_inst_2632_);
lean_closure_set(v___f_2652_, 8, v_view_2633_);
lean_closure_set(v___f_2652_, 9, v_findLocalDecl_x3f_2634_);
lean_closure_set(v___f_2652_, 10, v_pre_2650_);
if (v_globalDeclFound_2637_ == 0)
{
uint8_t v_globalDeclFoundNext_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___f_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; 
lean_inc(v_toBind_2642_);
lean_dec_ref(v_str_2651_);
lean_dec(v_pre_2650_);
lean_dec(v_projs_2636_);
lean_dec_ref(v_findLocalDecl_x3f_2634_);
lean_dec_ref(v_view_2633_);
v_globalDeclFoundNext_2653_ = 1;
v___x_2654_ = lean_box(v_globalDeclFoundNext_2653_);
v___x_2655_ = lean_box(v_globalDeclFound_2637_);
v___f_2656_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2656_, 0, v___f_2644_);
lean_closure_set(v___f_2656_, 1, v___f_2652_);
lean_closure_set(v___f_2656_, 2, v___x_2654_);
lean_closure_set(v___f_2656_, 3, v___x_2655_);
v___x_2657_ = l_Lean_MacroScopesView_review(v_givenNameView_2645_);
v___x_2658_ = l_Lean_resolveGlobalName___redArg(v_inst_2627_, v_inst_2628_, v_inst_2629_, v_inst_2630_, v_inst_2631_, v_inst_2632_, v___x_2657_, v_globalDeclFound_2637_);
v___x_2659_ = lean_apply_4(v_toBind_2642_, lean_box(0), lean_box(0), v___x_2658_, v___f_2656_);
return v___x_2659_;
}
else
{
lean_object* v___x_2660_; lean_object* v___x_2661_; 
lean_dec_ref(v___f_2652_);
lean_dec_ref_known(v_givenNameView_2645_, 4);
v___x_2660_ = lean_box(0);
v___x_2661_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1(v_str_2651_, v_projs_2636_, v_inst_2627_, v_inst_2628_, v_inst_2629_, v_inst_2630_, v_inst_2631_, v_inst_2632_, v_view_2633_, v_findLocalDecl_x3f_2634_, v_pre_2650_, v___x_2660_, v_globalDeclFound_2637_);
return v___x_2661_;
}
}
else
{
lean_object* v___x_2662_; lean_object* v___x_2663_; 
lean_inc(v_toPure_2643_);
lean_dec_ref_known(v_givenNameView_2645_, 4);
lean_dec(v_projs_2636_);
lean_dec(v_n_2635_);
lean_dec_ref(v_findLocalDecl_x3f_2634_);
lean_dec_ref(v_view_2633_);
lean_dec(v_inst_2632_);
lean_dec_ref(v_inst_2631_);
lean_dec_ref(v_inst_2630_);
lean_dec_ref(v_inst_2629_);
lean_dec_ref(v_inst_2628_);
lean_dec_ref(v_inst_2627_);
v___x_2662_ = lean_box(0);
v___x_2663_ = lean_apply_2(v_toPure_2643_, lean_box(0), v___x_2662_);
return v___x_2663_;
}
}
else
{
lean_object* v___x_2665_; uint8_t v_isShared_2666_; uint8_t v_isSharedCheck_2680_; 
lean_inc(v_toPure_2643_);
lean_dec_ref_known(v_givenNameView_2645_, 4);
lean_dec(v_n_2635_);
lean_dec_ref(v_findLocalDecl_x3f_2634_);
lean_dec_ref(v_view_2633_);
lean_dec(v_inst_2632_);
lean_dec_ref(v_inst_2631_);
lean_dec_ref(v_inst_2630_);
lean_dec_ref(v_inst_2629_);
lean_dec_ref(v_inst_2628_);
v_isSharedCheck_2680_ = !lean_is_exclusive(v_inst_2627_);
if (v_isSharedCheck_2680_ == 0)
{
lean_object* v_unused_2681_; lean_object* v_unused_2682_; 
v_unused_2681_ = lean_ctor_get(v_inst_2627_, 1);
lean_dec(v_unused_2681_);
v_unused_2682_ = lean_ctor_get(v_inst_2627_, 0);
lean_dec(v_unused_2682_);
v___x_2665_ = v_inst_2627_;
v_isShared_2666_ = v_isSharedCheck_2680_;
goto v_resetjp_2664_;
}
else
{
lean_dec(v_inst_2627_);
v___x_2665_ = lean_box(0);
v_isShared_2666_ = v_isSharedCheck_2680_;
goto v_resetjp_2664_;
}
v_resetjp_2664_:
{
lean_object* v_val_2667_; lean_object* v___x_2669_; uint8_t v_isShared_2670_; uint8_t v_isSharedCheck_2679_; 
v_val_2667_ = lean_ctor_get(v___x_2649_, 0);
v_isSharedCheck_2679_ = !lean_is_exclusive(v___x_2649_);
if (v_isSharedCheck_2679_ == 0)
{
v___x_2669_ = v___x_2649_;
v_isShared_2670_ = v_isSharedCheck_2679_;
goto v_resetjp_2668_;
}
else
{
lean_inc(v_val_2667_);
lean_dec(v___x_2649_);
v___x_2669_ = lean_box(0);
v_isShared_2670_ = v_isSharedCheck_2679_;
goto v_resetjp_2668_;
}
v_resetjp_2668_:
{
lean_object* v___x_2671_; lean_object* v___x_2673_; 
v___x_2671_ = l_Lean_LocalDecl_toExpr(v_val_2667_);
if (v_isShared_2666_ == 0)
{
lean_ctor_set(v___x_2665_, 1, v_projs_2636_);
lean_ctor_set(v___x_2665_, 0, v___x_2671_);
v___x_2673_ = v___x_2665_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v___x_2671_);
lean_ctor_set(v_reuseFailAlloc_2678_, 1, v_projs_2636_);
v___x_2673_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
lean_object* v___x_2675_; 
if (v_isShared_2670_ == 0)
{
lean_ctor_set(v___x_2669_, 0, v___x_2673_);
v___x_2675_ = v___x_2669_;
goto v_reusejp_2674_;
}
else
{
lean_object* v_reuseFailAlloc_2677_; 
v_reuseFailAlloc_2677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2677_, 0, v___x_2673_);
v___x_2675_ = v_reuseFailAlloc_2677_;
goto v_reusejp_2674_;
}
v_reusejp_2674_:
{
lean_object* v___x_2676_; 
v___x_2676_ = lean_apply_2(v_toPure_2643_, lean_box(0), v___x_2675_);
return v___x_2676_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___lam__1(lean_object* v_str_2685_, lean_object* v_projs_2686_, lean_object* v_inst_2687_, lean_object* v_inst_2688_, lean_object* v_inst_2689_, lean_object* v_inst_2690_, lean_object* v_inst_2691_, lean_object* v_inst_2692_, lean_object* v_view_2693_, lean_object* v_findLocalDecl_x3f_2694_, lean_object* v_pre_2695_, lean_object* v_____r_2696_, uint8_t v_globalDeclFoundNext_2697_){
_start:
{
lean_object* v___x_2698_; lean_object* v___x_2699_; 
v___x_2698_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2698_, 0, v_str_2685_);
lean_ctor_set(v___x_2698_, 1, v_projs_2686_);
v___x_2699_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(v_inst_2687_, v_inst_2688_, v_inst_2689_, v_inst_2690_, v_inst_2691_, v_inst_2692_, v_view_2693_, v_findLocalDecl_x3f_2694_, v_pre_2695_, v___x_2698_, v_globalDeclFoundNext_2697_);
return v___x_2699_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg___boxed(lean_object* v_inst_2700_, lean_object* v_inst_2701_, lean_object* v_inst_2702_, lean_object* v_inst_2703_, lean_object* v_inst_2704_, lean_object* v_inst_2705_, lean_object* v_view_2706_, lean_object* v_findLocalDecl_x3f_2707_, lean_object* v_n_2708_, lean_object* v_projs_2709_, lean_object* v_globalDeclFound_2710_){
_start:
{
uint8_t v_globalDeclFound_boxed_2711_; lean_object* v_res_2712_; 
v_globalDeclFound_boxed_2711_ = lean_unbox(v_globalDeclFound_2710_);
v_res_2712_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(v_inst_2700_, v_inst_2701_, v_inst_2702_, v_inst_2703_, v_inst_2704_, v_inst_2705_, v_view_2706_, v_findLocalDecl_x3f_2707_, v_n_2708_, v_projs_2709_, v_globalDeclFound_boxed_2711_);
return v_res_2712_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop(lean_object* v_m_2713_, lean_object* v_inst_2714_, lean_object* v_inst_2715_, lean_object* v_inst_2716_, lean_object* v_inst_2717_, lean_object* v_inst_2718_, lean_object* v_inst_2719_, lean_object* v_view_2720_, lean_object* v_findLocalDecl_x3f_2721_, lean_object* v_n_2722_, lean_object* v_projs_2723_, uint8_t v_globalDeclFound_2724_){
_start:
{
lean_object* v___x_2725_; 
v___x_2725_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(v_inst_2714_, v_inst_2715_, v_inst_2716_, v_inst_2717_, v_inst_2718_, v_inst_2719_, v_view_2720_, v_findLocalDecl_x3f_2721_, v_n_2722_, v_projs_2723_, v_globalDeclFound_2724_);
return v___x_2725_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___boxed(lean_object* v_m_2726_, lean_object* v_inst_2727_, lean_object* v_inst_2728_, lean_object* v_inst_2729_, lean_object* v_inst_2730_, lean_object* v_inst_2731_, lean_object* v_inst_2732_, lean_object* v_view_2733_, lean_object* v_findLocalDecl_x3f_2734_, lean_object* v_n_2735_, lean_object* v_projs_2736_, lean_object* v_globalDeclFound_2737_){
_start:
{
uint8_t v_globalDeclFound_boxed_2738_; lean_object* v_res_2739_; 
v_globalDeclFound_boxed_2738_ = lean_unbox(v_globalDeclFound_2737_);
v_res_2739_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop(v_m_2726_, v_inst_2727_, v_inst_2728_, v_inst_2729_, v_inst_2730_, v_inst_2731_, v_inst_2732_, v_view_2733_, v_findLocalDecl_x3f_2734_, v_n_2735_, v_projs_2736_, v_globalDeclFound_boxed_2738_);
return v_res_2739_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(lean_object* v_localDecl_2740_, lean_object* v_givenNameView_2741_, lean_object* v_fullDeclName_2742_, lean_object* v_ns_2743_){
_start:
{
lean_object* v_name_2744_; lean_object* v_imported_2745_; lean_object* v_ctx_2746_; lean_object* v_scopes_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; uint8_t v___x_2751_; 
v_name_2744_ = lean_ctor_get(v_givenNameView_2741_, 0);
v_imported_2745_ = lean_ctor_get(v_givenNameView_2741_, 1);
v_ctx_2746_ = lean_ctor_get(v_givenNameView_2741_, 2);
v_scopes_2747_ = lean_ctor_get(v_givenNameView_2741_, 3);
lean_inc(v_name_2744_);
lean_inc(v_ns_2743_);
v___x_2748_ = l_Lean_Name_append(v_ns_2743_, v_name_2744_);
lean_inc(v_scopes_2747_);
lean_inc(v_ctx_2746_);
lean_inc(v_imported_2745_);
v___x_2749_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2749_, 0, v___x_2748_);
lean_ctor_set(v___x_2749_, 1, v_imported_2745_);
lean_ctor_set(v___x_2749_, 2, v_ctx_2746_);
lean_ctor_set(v___x_2749_, 3, v_scopes_2747_);
v___x_2750_ = l_Lean_MacroScopesView_review(v___x_2749_);
v___x_2751_ = lean_name_eq(v___x_2750_, v_fullDeclName_2742_);
lean_dec(v___x_2750_);
if (v___x_2751_ == 0)
{
if (lean_obj_tag(v_ns_2743_) == 1)
{
lean_object* v_pre_2752_; 
v_pre_2752_ = lean_ctor_get(v_ns_2743_, 0);
lean_inc(v_pre_2752_);
lean_dec_ref_known(v_ns_2743_, 2);
v_ns_2743_ = v_pre_2752_;
goto _start;
}
else
{
lean_object* v___x_2754_; 
lean_dec(v_ns_2743_);
lean_dec_ref(v_givenNameView_2741_);
lean_dec_ref(v_localDecl_2740_);
v___x_2754_ = lean_box(0);
return v___x_2754_;
}
}
else
{
lean_object* v___x_2755_; 
lean_dec(v_ns_2743_);
lean_dec_ref(v_givenNameView_2741_);
v___x_2755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2755_, 0, v_localDecl_2740_);
return v___x_2755_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_go___boxed(lean_object* v_localDecl_2756_, lean_object* v_givenNameView_2757_, lean_object* v_fullDeclName_2758_, lean_object* v_ns_2759_){
_start:
{
lean_object* v_res_2760_; 
v_res_2760_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(v_localDecl_2756_, v_givenNameView_2757_, v_fullDeclName_2758_, v_ns_2759_);
lean_dec(v_fullDeclName_2758_);
return v_res_2760_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__0(lean_object* v_localDecl_2761_, lean_object* v_givenName_2762_){
_start:
{
lean_object* v___x_2763_; uint8_t v___x_2764_; 
v___x_2763_ = l_Lean_LocalDecl_userName(v_localDecl_2761_);
v___x_2764_ = lean_name_eq(v___x_2763_, v_givenName_2762_);
lean_dec(v___x_2763_);
if (v___x_2764_ == 0)
{
lean_object* v___x_2765_; 
lean_dec_ref(v_localDecl_2761_);
v___x_2765_ = lean_box(0);
return v___x_2765_;
}
else
{
lean_object* v___x_2766_; 
v___x_2766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2766_, 0, v_localDecl_2761_);
return v___x_2766_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__0___boxed(lean_object* v_localDecl_2767_, lean_object* v_givenName_2768_){
_start:
{
lean_object* v_res_2769_; 
v_res_2769_ = l_Lean_resolveLocalName___redArg___lam__0(v_localDecl_2767_, v_givenName_2768_);
lean_dec(v_givenName_2768_);
return v_res_2769_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__1(lean_object* v_matchLocalDecl_x3f_2770_, lean_object* v_givenName_2771_, uint8_t v_skipAuxDecl_2772_, lean_object* v___f_2773_, lean_object* v_auxDeclToFullName_2774_, lean_object* v_currNamespace_2775_, lean_object* v_givenNameView_2776_, lean_object* v_x_2777_){
_start:
{
if (lean_obj_tag(v_x_2777_) == 0)
{
lean_dec_ref(v_givenNameView_2776_);
lean_dec(v_currNamespace_2775_);
lean_dec(v_auxDeclToFullName_2774_);
lean_dec_ref(v___f_2773_);
lean_dec(v_givenName_2771_);
lean_dec_ref(v_matchLocalDecl_x3f_2770_);
return v_x_2777_;
}
else
{
lean_object* v_val_2778_; uint8_t v___x_2779_; 
v_val_2778_ = lean_ctor_get(v_x_2777_, 0);
v___x_2779_ = l_Lean_LocalDecl_isAuxDecl(v_val_2778_);
if (v___x_2779_ == 0)
{
lean_object* v___x_2780_; 
lean_inc(v_val_2778_);
lean_dec_ref_known(v_x_2777_, 1);
lean_dec_ref(v_givenNameView_2776_);
lean_dec(v_currNamespace_2775_);
lean_dec(v_auxDeclToFullName_2774_);
lean_dec_ref(v___f_2773_);
v___x_2780_ = lean_apply_2(v_matchLocalDecl_x3f_2770_, v_val_2778_, v_givenName_2771_);
return v___x_2780_;
}
else
{
if (v_skipAuxDecl_2772_ == 0)
{
lean_object* v___x_2781_; lean_object* v___x_2782_; 
v___x_2781_ = l_Lean_LocalDecl_fvarId(v_val_2778_);
v___x_2782_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(v___f_2773_, v_auxDeclToFullName_2774_, v___x_2781_);
if (lean_obj_tag(v___x_2782_) == 1)
{
lean_object* v_val_2783_; lean_object* v_fullDeclView_2784_; lean_object* v_name_2785_; lean_object* v_imported_2786_; lean_object* v_ctx_2787_; lean_object* v_scopes_2788_; lean_object* v___x_2790_; uint8_t v_isShared_2791_; uint8_t v_isSharedCheck_2808_; 
lean_dec(v_givenName_2771_);
lean_dec_ref(v_matchLocalDecl_x3f_2770_);
v_val_2783_ = lean_ctor_get(v___x_2782_, 0);
lean_inc(v_val_2783_);
lean_dec_ref_known(v___x_2782_, 1);
v_fullDeclView_2784_ = l_Lean_extractMacroScopes(v_val_2783_);
v_name_2785_ = lean_ctor_get(v_fullDeclView_2784_, 0);
v_imported_2786_ = lean_ctor_get(v_fullDeclView_2784_, 1);
v_ctx_2787_ = lean_ctor_get(v_fullDeclView_2784_, 2);
v_scopes_2788_ = lean_ctor_get(v_fullDeclView_2784_, 3);
v_isSharedCheck_2808_ = !lean_is_exclusive(v_fullDeclView_2784_);
if (v_isSharedCheck_2808_ == 0)
{
v___x_2790_ = v_fullDeclView_2784_;
v_isShared_2791_ = v_isSharedCheck_2808_;
goto v_resetjp_2789_;
}
else
{
lean_inc(v_scopes_2788_);
lean_inc(v_ctx_2787_);
lean_inc(v_imported_2786_);
lean_inc(v_name_2785_);
lean_dec(v_fullDeclView_2784_);
v___x_2790_ = lean_box(0);
v_isShared_2791_ = v_isSharedCheck_2808_;
goto v_resetjp_2789_;
}
v_resetjp_2789_:
{
lean_object* v___y_2793_; lean_object* v___x_2806_; 
lean_inc(v_name_2785_);
v___x_2806_ = l_Lean_privateToUserName_x3f(v_name_2785_);
if (lean_obj_tag(v___x_2806_) == 0)
{
v___y_2793_ = v_name_2785_;
goto v___jp_2792_;
}
else
{
lean_object* v_val_2807_; 
lean_dec(v_name_2785_);
v_val_2807_ = lean_ctor_get(v___x_2806_, 0);
lean_inc(v_val_2807_);
lean_dec_ref_known(v___x_2806_, 1);
v___y_2793_ = v_val_2807_;
goto v___jp_2792_;
}
v___jp_2792_:
{
lean_object* v_fullDeclView_2795_; 
if (v_isShared_2791_ == 0)
{
lean_ctor_set(v___x_2790_, 0, v___y_2793_);
v_fullDeclView_2795_ = v___x_2790_;
goto v_reusejp_2794_;
}
else
{
lean_object* v_reuseFailAlloc_2805_; 
v_reuseFailAlloc_2805_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2805_, 0, v___y_2793_);
lean_ctor_set(v_reuseFailAlloc_2805_, 1, v_imported_2786_);
lean_ctor_set(v_reuseFailAlloc_2805_, 2, v_ctx_2787_);
lean_ctor_set(v_reuseFailAlloc_2805_, 3, v_scopes_2788_);
v_fullDeclView_2795_ = v_reuseFailAlloc_2805_;
goto v_reusejp_2794_;
}
v_reusejp_2794_:
{
lean_object* v_fullDeclName_2796_; uint8_t v___x_2797_; 
lean_inc_ref(v_fullDeclView_2795_);
v_fullDeclName_2796_ = l_Lean_MacroScopesView_review(v_fullDeclView_2795_);
v___x_2797_ = l_Lean_Name_isPrefixOf(v_currNamespace_2775_, v_fullDeclName_2796_);
if (v___x_2797_ == 0)
{
lean_object* v___x_2798_; 
lean_inc(v_val_2778_);
lean_dec_ref(v_fullDeclView_2795_);
lean_dec_ref_known(v_x_2777_, 1);
v___x_2798_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(v_val_2778_, v_givenNameView_2776_, v_fullDeclName_2796_, v_currNamespace_2775_);
lean_dec(v_fullDeclName_2796_);
return v___x_2798_;
}
else
{
lean_object* v___x_2799_; lean_object* v_localDeclNameView_2800_; uint8_t v___x_2801_; 
lean_dec(v_fullDeclName_2796_);
lean_dec(v_currNamespace_2775_);
v___x_2799_ = l_Lean_LocalDecl_userName(v_val_2778_);
v_localDeclNameView_2800_ = l_Lean_extractMacroScopes(v___x_2799_);
v___x_2801_ = l_Lean_MacroScopesView_isSuffixOf(v_localDeclNameView_2800_, v_givenNameView_2776_);
lean_dec_ref(v_localDeclNameView_2800_);
if (v___x_2801_ == 0)
{
lean_object* v___x_2802_; 
lean_dec_ref(v_fullDeclView_2795_);
lean_dec_ref_known(v_x_2777_, 1);
lean_dec_ref(v_givenNameView_2776_);
v___x_2802_ = lean_box(0);
return v___x_2802_;
}
else
{
uint8_t v___x_2803_; 
v___x_2803_ = l_Lean_MacroScopesView_isSuffixOf(v_givenNameView_2776_, v_fullDeclView_2795_);
lean_dec_ref(v_fullDeclView_2795_);
lean_dec_ref(v_givenNameView_2776_);
if (v___x_2803_ == 0)
{
lean_object* v___x_2804_; 
lean_dec_ref_known(v_x_2777_, 1);
v___x_2804_ = lean_box(0);
return v___x_2804_;
}
else
{
return v_x_2777_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2809_; 
lean_inc(v_val_2778_);
lean_dec(v___x_2782_);
lean_dec_ref_known(v_x_2777_, 1);
lean_dec_ref(v_givenNameView_2776_);
lean_dec(v_currNamespace_2775_);
v___x_2809_ = lean_apply_2(v_matchLocalDecl_x3f_2770_, v_val_2778_, v_givenName_2771_);
return v___x_2809_;
}
}
else
{
lean_object* v___x_2810_; 
lean_dec_ref_known(v_x_2777_, 1);
lean_dec_ref(v_givenNameView_2776_);
lean_dec(v_currNamespace_2775_);
lean_dec(v_auxDeclToFullName_2774_);
lean_dec_ref(v___f_2773_);
lean_dec(v_givenName_2771_);
lean_dec_ref(v_matchLocalDecl_x3f_2770_);
v___x_2810_ = lean_box(0);
return v___x_2810_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__1___boxed(lean_object* v_matchLocalDecl_x3f_2811_, lean_object* v_givenName_2812_, lean_object* v_skipAuxDecl_2813_, lean_object* v___f_2814_, lean_object* v_auxDeclToFullName_2815_, lean_object* v_currNamespace_2816_, lean_object* v_givenNameView_2817_, lean_object* v_x_2818_){
_start:
{
uint8_t v_skipAuxDecl_boxed_2819_; lean_object* v_res_2820_; 
v_skipAuxDecl_boxed_2819_ = lean_unbox(v_skipAuxDecl_2813_);
v_res_2820_ = l_Lean_resolveLocalName___redArg___lam__1(v_matchLocalDecl_x3f_2811_, v_givenName_2812_, v_skipAuxDecl_boxed_2819_, v___f_2814_, v_auxDeclToFullName_2815_, v_currNamespace_2816_, v_givenNameView_2817_, v_x_2818_);
return v_res_2820_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__2(lean_object* v_localDecl_x3f_2821_, lean_object* v_matchLocalDecl_x3f_2822_, lean_object* v_givenName_2823_, lean_object* v_x_2824_){
_start:
{
if (lean_obj_tag(v_x_2824_) == 0)
{
lean_dec(v_givenName_2823_);
lean_dec_ref(v_matchLocalDecl_x3f_2822_);
return v_x_2824_;
}
else
{
lean_object* v_val_2825_; uint8_t v___x_2826_; 
v_val_2825_ = lean_ctor_get(v_x_2824_, 0);
lean_inc(v_val_2825_);
lean_dec_ref_known(v_x_2824_, 1);
v___x_2826_ = l_Lean_LocalDecl_isAuxDecl(v_val_2825_);
if (v___x_2826_ == 0)
{
lean_dec(v_val_2825_);
lean_dec(v_givenName_2823_);
lean_dec_ref(v_matchLocalDecl_x3f_2822_);
lean_inc(v_localDecl_x3f_2821_);
return v_localDecl_x3f_2821_;
}
else
{
lean_object* v___x_2827_; 
v___x_2827_ = lean_apply_2(v_matchLocalDecl_x3f_2822_, v_val_2825_, v_givenName_2823_);
return v___x_2827_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__2___boxed(lean_object* v_localDecl_x3f_2828_, lean_object* v_matchLocalDecl_x3f_2829_, lean_object* v_givenName_2830_, lean_object* v_x_2831_){
_start:
{
lean_object* v_res_2832_; 
v_res_2832_ = l_Lean_resolveLocalName___redArg___lam__2(v_localDecl_x3f_2828_, v_matchLocalDecl_x3f_2829_, v_givenName_2830_, v_x_2831_);
lean_dec(v_localDecl_x3f_2828_);
return v_res_2832_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__3(lean_object* v_lctx_2852_, lean_object* v_matchLocalDecl_x3f_2853_, lean_object* v___f_2854_, lean_object* v_auxDeclToFullName_2855_, lean_object* v_currNamespace_2856_, lean_object* v_givenNameView_2857_, uint8_t v_skipAuxDecl_2858_){
_start:
{
lean_object* v_decls_2859_; lean_object* v_givenName_2860_; lean_object* v___x_2861_; lean_object* v___f_2862_; lean_object* v___x_2863_; lean_object* v_localDecl_x3f_2864_; 
v_decls_2859_ = lean_ctor_get(v_lctx_2852_, 1);
lean_inc_ref_n(v_decls_2859_, 2);
lean_dec_ref(v_lctx_2852_);
lean_inc_ref(v_givenNameView_2857_);
v_givenName_2860_ = l_Lean_MacroScopesView_review(v_givenNameView_2857_);
v___x_2861_ = lean_box(v_skipAuxDecl_2858_);
lean_inc(v_givenName_2860_);
lean_inc_ref(v_matchLocalDecl_x3f_2853_);
v___f_2862_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_2862_, 0, v_matchLocalDecl_x3f_2853_);
lean_closure_set(v___f_2862_, 1, v_givenName_2860_);
lean_closure_set(v___f_2862_, 2, v___x_2861_);
lean_closure_set(v___f_2862_, 3, v___f_2854_);
lean_closure_set(v___f_2862_, 4, v_auxDeclToFullName_2855_);
lean_closure_set(v___f_2862_, 5, v_currNamespace_2856_);
lean_closure_set(v___f_2862_, 6, v_givenNameView_2857_);
v___x_2863_ = ((lean_object*)(l_Lean_resolveLocalName___redArg___lam__3___closed__9));
v_localDecl_x3f_2864_ = l_Lean_PersistentArray_findSomeRevM_x3f___redArg(v___x_2863_, v_decls_2859_, v___f_2862_);
if (lean_obj_tag(v_localDecl_x3f_2864_) == 0)
{
if (v_skipAuxDecl_2858_ == 0)
{
lean_object* v___f_2865_; lean_object* v___x_2866_; 
v___f_2865_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_2865_, 0, v_localDecl_x3f_2864_);
lean_closure_set(v___f_2865_, 1, v_matchLocalDecl_x3f_2853_);
lean_closure_set(v___f_2865_, 2, v_givenName_2860_);
v___x_2866_ = l_Lean_PersistentArray_findSomeRevM_x3f___redArg(v___x_2863_, v_decls_2859_, v___f_2865_);
return v___x_2866_;
}
else
{
lean_dec(v_givenName_2860_);
lean_dec_ref(v_decls_2859_);
lean_dec_ref(v_matchLocalDecl_x3f_2853_);
return v_localDecl_x3f_2864_;
}
}
else
{
lean_dec(v_givenName_2860_);
lean_dec_ref(v_decls_2859_);
lean_dec_ref(v_matchLocalDecl_x3f_2853_);
return v_localDecl_x3f_2864_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__3___boxed(lean_object* v_lctx_2867_, lean_object* v_matchLocalDecl_x3f_2868_, lean_object* v___f_2869_, lean_object* v_auxDeclToFullName_2870_, lean_object* v_currNamespace_2871_, lean_object* v_givenNameView_2872_, lean_object* v_skipAuxDecl_2873_){
_start:
{
uint8_t v_skipAuxDecl_boxed_2874_; lean_object* v_res_2875_; 
v_skipAuxDecl_boxed_2874_ = lean_unbox(v_skipAuxDecl_2873_);
v_res_2875_ = l_Lean_resolveLocalName___redArg___lam__3(v_lctx_2867_, v_matchLocalDecl_x3f_2868_, v___f_2869_, v_auxDeclToFullName_2870_, v_currNamespace_2871_, v_givenNameView_2872_, v_skipAuxDecl_boxed_2874_);
return v_res_2875_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__4(lean_object* v_n_2876_, lean_object* v_lctx_2877_, lean_object* v_matchLocalDecl_x3f_2878_, lean_object* v___f_2879_, lean_object* v_auxDeclToFullName_2880_, lean_object* v_inst_2881_, lean_object* v_inst_2882_, lean_object* v_inst_2883_, lean_object* v_inst_2884_, lean_object* v_inst_2885_, lean_object* v_inst_2886_, lean_object* v_currNamespace_2887_){
_start:
{
lean_object* v_view_2888_; lean_object* v_name_2889_; lean_object* v_findLocalDecl_x3f_2890_; lean_object* v___x_2891_; uint8_t v___x_2892_; lean_object* v___x_2893_; 
v_view_2888_ = l_Lean_extractMacroScopes(v_n_2876_);
v_name_2889_ = lean_ctor_get(v_view_2888_, 0);
lean_inc(v_name_2889_);
v_findLocalDecl_x3f_2890_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__3___boxed), 7, 5);
lean_closure_set(v_findLocalDecl_x3f_2890_, 0, v_lctx_2877_);
lean_closure_set(v_findLocalDecl_x3f_2890_, 1, v_matchLocalDecl_x3f_2878_);
lean_closure_set(v_findLocalDecl_x3f_2890_, 2, v___f_2879_);
lean_closure_set(v_findLocalDecl_x3f_2890_, 3, v_auxDeclToFullName_2880_);
lean_closure_set(v_findLocalDecl_x3f_2890_, 4, v_currNamespace_2887_);
v___x_2891_ = lean_box(0);
v___x_2892_ = 0;
v___x_2893_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___redArg(v_inst_2881_, v_inst_2882_, v_inst_2883_, v_inst_2884_, v_inst_2885_, v_inst_2886_, v_view_2888_, v_findLocalDecl_x3f_2890_, v_name_2889_, v___x_2891_, v___x_2892_);
return v___x_2893_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__5(lean_object* v_inst_2894_, lean_object* v_n_2895_, lean_object* v_lctx_2896_, lean_object* v_matchLocalDecl_x3f_2897_, lean_object* v___f_2898_, lean_object* v_inst_2899_, lean_object* v_inst_2900_, lean_object* v_inst_2901_, lean_object* v_inst_2902_, lean_object* v_inst_2903_, lean_object* v_toBind_2904_, lean_object* v_____do__lift_2905_){
_start:
{
lean_object* v_auxDeclToFullName_2906_; lean_object* v_getCurrNamespace_2907_; lean_object* v___f_2908_; lean_object* v___x_2909_; 
v_auxDeclToFullName_2906_ = lean_ctor_get(v_____do__lift_2905_, 2);
lean_inc(v_auxDeclToFullName_2906_);
lean_dec_ref(v_____do__lift_2905_);
v_getCurrNamespace_2907_ = lean_ctor_get(v_inst_2894_, 0);
lean_inc(v_getCurrNamespace_2907_);
v___f_2908_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__4), 12, 11);
lean_closure_set(v___f_2908_, 0, v_n_2895_);
lean_closure_set(v___f_2908_, 1, v_lctx_2896_);
lean_closure_set(v___f_2908_, 2, v_matchLocalDecl_x3f_2897_);
lean_closure_set(v___f_2908_, 3, v___f_2898_);
lean_closure_set(v___f_2908_, 4, v_auxDeclToFullName_2906_);
lean_closure_set(v___f_2908_, 5, v_inst_2899_);
lean_closure_set(v___f_2908_, 6, v_inst_2894_);
lean_closure_set(v___f_2908_, 7, v_inst_2900_);
lean_closure_set(v___f_2908_, 8, v_inst_2901_);
lean_closure_set(v___f_2908_, 9, v_inst_2902_);
lean_closure_set(v___f_2908_, 10, v_inst_2903_);
v___x_2909_ = lean_apply_4(v_toBind_2904_, lean_box(0), lean_box(0), v_getCurrNamespace_2907_, v___f_2908_);
return v___x_2909_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg___lam__6(lean_object* v_inst_2910_, lean_object* v_n_2911_, lean_object* v_matchLocalDecl_x3f_2912_, lean_object* v___f_2913_, lean_object* v_inst_2914_, lean_object* v_inst_2915_, lean_object* v_inst_2916_, lean_object* v_inst_2917_, lean_object* v_inst_2918_, lean_object* v_toBind_2919_, lean_object* v_inst_2920_, lean_object* v_lctx_2921_){
_start:
{
lean_object* v___f_2922_; lean_object* v___x_2923_; 
lean_inc(v_toBind_2919_);
v___f_2922_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__5), 12, 11);
lean_closure_set(v___f_2922_, 0, v_inst_2910_);
lean_closure_set(v___f_2922_, 1, v_n_2911_);
lean_closure_set(v___f_2922_, 2, v_lctx_2921_);
lean_closure_set(v___f_2922_, 3, v_matchLocalDecl_x3f_2912_);
lean_closure_set(v___f_2922_, 4, v___f_2913_);
lean_closure_set(v___f_2922_, 5, v_inst_2914_);
lean_closure_set(v___f_2922_, 6, v_inst_2915_);
lean_closure_set(v___f_2922_, 7, v_inst_2916_);
lean_closure_set(v___f_2922_, 8, v_inst_2917_);
lean_closure_set(v___f_2922_, 9, v_inst_2918_);
lean_closure_set(v___f_2922_, 10, v_toBind_2919_);
v___x_2923_ = lean_apply_4(v_toBind_2919_, lean_box(0), lean_box(0), v_inst_2920_, v___f_2922_);
return v___x_2923_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___redArg(lean_object* v_inst_2926_, lean_object* v_inst_2927_, lean_object* v_inst_2928_, lean_object* v_inst_2929_, lean_object* v_inst_2930_, lean_object* v_inst_2931_, lean_object* v_inst_2932_, lean_object* v_n_2933_){
_start:
{
lean_object* v_toBind_2934_; lean_object* v___f_2935_; lean_object* v_matchLocalDecl_x3f_2936_; lean_object* v___f_2937_; lean_object* v___x_2938_; 
v_toBind_2934_ = lean_ctor_get(v_inst_2926_, 1);
lean_inc_n(v_toBind_2934_, 2);
v___f_2935_ = ((lean_object*)(l_Lean_resolveLocalName___redArg___closed__0));
v_matchLocalDecl_x3f_2936_ = ((lean_object*)(l_Lean_resolveLocalName___redArg___closed__1));
lean_inc(v_inst_2932_);
v___f_2937_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___redArg___lam__6), 12, 11);
lean_closure_set(v___f_2937_, 0, v_inst_2927_);
lean_closure_set(v___f_2937_, 1, v_n_2933_);
lean_closure_set(v___f_2937_, 2, v_matchLocalDecl_x3f_2936_);
lean_closure_set(v___f_2937_, 3, v___f_2935_);
lean_closure_set(v___f_2937_, 4, v_inst_2926_);
lean_closure_set(v___f_2937_, 5, v_inst_2928_);
lean_closure_set(v___f_2937_, 6, v_inst_2929_);
lean_closure_set(v___f_2937_, 7, v_inst_2930_);
lean_closure_set(v___f_2937_, 8, v_inst_2931_);
lean_closure_set(v___f_2937_, 9, v_toBind_2934_);
lean_closure_set(v___f_2937_, 10, v_inst_2932_);
v___x_2938_ = lean_apply_4(v_toBind_2934_, lean_box(0), lean_box(0), v_inst_2932_, v___f_2937_);
return v___x_2938_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName(lean_object* v_m_2939_, lean_object* v_inst_2940_, lean_object* v_inst_2941_, lean_object* v_inst_2942_, lean_object* v_inst_2943_, lean_object* v_inst_2944_, lean_object* v_inst_2945_, lean_object* v_inst_2946_, lean_object* v_n_2947_){
_start:
{
lean_object* v___x_2948_; 
v___x_2948_ = l_Lean_resolveLocalName___redArg(v_inst_2940_, v_inst_2941_, v_inst_2942_, v_inst_2943_, v_inst_2944_, v_inst_2945_, v_inst_2946_, v_n_2947_);
return v___x_2948_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0(lean_object* v_toPure_2949_, uint8_t v_____do__lift_2950_){
_start:
{
lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; 
v___x_2951_ = lean_box(v_____do__lift_2950_);
v___x_2952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2952_, 0, v___x_2951_);
v___x_2953_ = lean_apply_2(v_toPure_2949_, lean_box(0), v___x_2952_);
return v___x_2953_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0___boxed(lean_object* v_toPure_2954_, lean_object* v_____do__lift_2955_){
_start:
{
uint8_t v_____do__lift_1060__boxed_2956_; lean_object* v_res_2957_; 
v_____do__lift_1060__boxed_2956_ = lean_unbox(v_____do__lift_2955_);
v_res_2957_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0(v_toPure_2954_, v_____do__lift_1060__boxed_2956_);
return v_res_2957_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__1(lean_object* v_toPure_2958_, lean_object* v___y_2959_, lean_object* v_____do__lift_2960_){
_start:
{
if (lean_obj_tag(v_____do__lift_2960_) == 0)
{
lean_object* v___x_2961_; lean_object* v___x_2962_; 
lean_dec(v___y_2959_);
v___x_2961_ = lean_box(0);
v___x_2962_ = lean_apply_2(v_toPure_2958_, lean_box(0), v___x_2961_);
return v___x_2962_;
}
else
{
lean_object* v___x_2964_; uint8_t v_isShared_2965_; uint8_t v_isSharedCheck_2970_; 
v_isSharedCheck_2970_ = !lean_is_exclusive(v_____do__lift_2960_);
if (v_isSharedCheck_2970_ == 0)
{
lean_object* v_unused_2971_; 
v_unused_2971_ = lean_ctor_get(v_____do__lift_2960_, 0);
lean_dec(v_unused_2971_);
v___x_2964_ = v_____do__lift_2960_;
v_isShared_2965_ = v_isSharedCheck_2970_;
goto v_resetjp_2963_;
}
else
{
lean_dec(v_____do__lift_2960_);
v___x_2964_ = lean_box(0);
v_isShared_2965_ = v_isSharedCheck_2970_;
goto v_resetjp_2963_;
}
v_resetjp_2963_:
{
lean_object* v___x_2967_; 
if (v_isShared_2965_ == 0)
{
lean_ctor_set(v___x_2964_, 0, v___y_2959_);
v___x_2967_ = v___x_2964_;
goto v_reusejp_2966_;
}
else
{
lean_object* v_reuseFailAlloc_2969_; 
v_reuseFailAlloc_2969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2969_, 0, v___y_2959_);
v___x_2967_ = v_reuseFailAlloc_2969_;
goto v_reusejp_2966_;
}
v_reusejp_2966_:
{
lean_object* v___x_2968_; 
v___x_2968_ = lean_apply_2(v_toPure_2958_, lean_box(0), v___x_2967_);
return v___x_2968_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2(lean_object* v_toPure_2974_, lean_object* v_toBind_2975_, lean_object* v___f_2976_, lean_object* v_____do__lift_2977_){
_start:
{
if (lean_obj_tag(v_____do__lift_2977_) == 0)
{
lean_object* v___x_2978_; lean_object* v___x_2979_; 
lean_dec(v___f_2976_);
lean_dec(v_toBind_2975_);
v___x_2978_ = lean_box(0);
v___x_2979_ = lean_apply_2(v_toPure_2974_, lean_box(0), v___x_2978_);
return v___x_2979_;
}
else
{
lean_object* v_val_2980_; uint8_t v___x_2981_; 
v_val_2980_ = lean_ctor_get(v_____do__lift_2977_, 0);
v___x_2981_ = lean_unbox(v_val_2980_);
if (v___x_2981_ == 0)
{
lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; 
v___x_2982_ = lean_box(0);
v___x_2983_ = lean_apply_2(v_toPure_2974_, lean_box(0), v___x_2982_);
v___x_2984_ = lean_apply_4(v_toBind_2975_, lean_box(0), lean_box(0), v___x_2983_, v___f_2976_);
return v___x_2984_;
}
else
{
lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; 
v___x_2985_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0));
v___x_2986_ = lean_apply_2(v_toPure_2974_, lean_box(0), v___x_2985_);
v___x_2987_ = lean_apply_4(v_toBind_2975_, lean_box(0), lean_box(0), v___x_2986_, v___f_2976_);
return v___x_2987_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___boxed(lean_object* v_toPure_2988_, lean_object* v_toBind_2989_, lean_object* v___f_2990_, lean_object* v_____do__lift_2991_){
_start:
{
lean_object* v_res_2992_; 
v_res_2992_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2(v_toPure_2988_, v_toBind_2989_, v___f_2990_, v_____do__lift_2991_);
lean_dec(v_____do__lift_2991_);
return v_res_2992_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3(lean_object* v_toPure_2993_, lean_object* v_filter_2994_, lean_object* v___y_2995_, lean_object* v_toBind_2996_, lean_object* v___f_2997_, lean_object* v___f_2998_, lean_object* v_____do__lift_2999_){
_start:
{
if (lean_obj_tag(v_____do__lift_2999_) == 0)
{
lean_object* v___x_3000_; lean_object* v___x_3001_; 
lean_dec(v___f_2998_);
lean_dec(v___f_2997_);
lean_dec(v_toBind_2996_);
lean_dec(v___y_2995_);
lean_dec(v_filter_2994_);
v___x_3000_ = lean_box(0);
v___x_3001_ = lean_apply_2(v_toPure_2993_, lean_box(0), v___x_3000_);
return v___x_3001_;
}
else
{
lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; 
lean_dec(v_toPure_2993_);
v___x_3002_ = lean_apply_1(v_filter_2994_, v___y_2995_);
lean_inc(v_toBind_2996_);
v___x_3003_ = lean_apply_4(v_toBind_2996_, lean_box(0), lean_box(0), v___x_3002_, v___f_2997_);
v___x_3004_ = lean_apply_4(v_toBind_2996_, lean_box(0), lean_box(0), v___x_3003_, v___f_2998_);
return v___x_3004_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3___boxed(lean_object* v_toPure_3005_, lean_object* v_filter_3006_, lean_object* v___y_3007_, lean_object* v_toBind_3008_, lean_object* v___f_3009_, lean_object* v___f_3010_, lean_object* v_____do__lift_3011_){
_start:
{
lean_object* v_res_3012_; 
v_res_3012_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3(v_toPure_3005_, v_filter_3006_, v___y_3007_, v_toBind_3008_, v___f_3009_, v___f_3010_, v_____do__lift_3011_);
lean_dec(v_____do__lift_3011_);
return v_res_3012_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4(lean_object* v_toPure_3013_, lean_object* v_n_u2080_3014_, lean_object* v_toBind_3015_, lean_object* v___f_3016_, lean_object* v_____do__lift_3017_){
_start:
{
if (lean_obj_tag(v_____do__lift_3017_) == 0)
{
lean_object* v___x_3021_; lean_object* v___x_3022_; 
lean_dec(v___f_3016_);
lean_dec(v_toBind_3015_);
v___x_3021_ = lean_box(0);
v___x_3022_ = lean_apply_2(v_toPure_3013_, lean_box(0), v___x_3021_);
return v___x_3022_;
}
else
{
lean_object* v_val_3023_; 
v_val_3023_ = lean_ctor_get(v_____do__lift_3017_, 0);
if (lean_obj_tag(v_val_3023_) == 1)
{
lean_object* v_tail_3024_; 
v_tail_3024_ = lean_ctor_get(v_val_3023_, 1);
if (lean_obj_tag(v_tail_3024_) == 0)
{
lean_object* v_head_3025_; lean_object* v_fst_3026_; uint8_t v___x_3027_; 
v_head_3025_ = lean_ctor_get(v_val_3023_, 0);
v_fst_3026_ = lean_ctor_get(v_head_3025_, 0);
v___x_3027_ = lean_name_eq(v_fst_3026_, v_n_u2080_3014_);
if (v___x_3027_ == 0)
{
lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; 
v___x_3028_ = lean_box(0);
v___x_3029_ = lean_apply_2(v_toPure_3013_, lean_box(0), v___x_3028_);
v___x_3030_ = lean_apply_4(v_toBind_3015_, lean_box(0), lean_box(0), v___x_3029_, v___f_3016_);
return v___x_3030_;
}
else
{
lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; 
v___x_3031_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0));
v___x_3032_ = lean_apply_2(v_toPure_3013_, lean_box(0), v___x_3031_);
v___x_3033_ = lean_apply_4(v_toBind_3015_, lean_box(0), lean_box(0), v___x_3032_, v___f_3016_);
return v___x_3033_;
}
}
else
{
lean_dec(v___f_3016_);
lean_dec(v_toBind_3015_);
goto v___jp_3018_;
}
}
else
{
lean_dec(v___f_3016_);
lean_dec(v_toBind_3015_);
goto v___jp_3018_;
}
}
v___jp_3018_:
{
lean_object* v___x_3019_; lean_object* v___x_3020_; 
v___x_3019_ = lean_box(0);
v___x_3020_ = lean_apply_2(v_toPure_3013_, lean_box(0), v___x_3019_);
return v___x_3020_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4___boxed(lean_object* v_toPure_3034_, lean_object* v_n_u2080_3035_, lean_object* v_toBind_3036_, lean_object* v___f_3037_, lean_object* v_____do__lift_3038_){
_start:
{
lean_object* v_res_3039_; 
v_res_3039_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4(v_toPure_3034_, v_n_u2080_3035_, v_toBind_3036_, v___f_3037_, v_____do__lift_3038_);
lean_dec(v_____do__lift_3038_);
lean_dec(v_n_u2080_3035_);
return v_res_3039_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(lean_object* v_inst_3040_, lean_object* v_inst_3041_, lean_object* v_inst_3042_, lean_object* v_inst_3043_, lean_object* v_inst_3044_, lean_object* v_inst_3045_, lean_object* v_n_u2080_3046_, lean_object* v_filter_3047_, lean_object* v_view_x3f_3048_, lean_object* v_n_3049_){
_start:
{
lean_object* v___f_3050_; lean_object* v___f_3051_; lean_object* v___f_3052_; lean_object* v___f_3053_; lean_object* v___f_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v_toApplicative_3062_; lean_object* v_getEnv_3063_; lean_object* v_modifyEnv_3064_; lean_object* v___x_3066_; uint8_t v_isShared_3067_; uint8_t v_isSharedCheck_3102_; 
lean_inc_ref_n(v_inst_3040_, 8);
v___f_3050_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_3050_, 0, v_inst_3040_);
v___f_3051_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_3051_, 0, v_inst_3040_);
v___f_3052_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__6), 5, 1);
lean_closure_set(v___f_3052_, 0, v_inst_3040_);
v___f_3053_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_3053_, 0, v_inst_3040_);
v___f_3054_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__11), 5, 1);
lean_closure_set(v___f_3054_, 0, v_inst_3040_);
v___x_3055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3055_, 0, v___f_3050_);
lean_ctor_set(v___x_3055_, 1, v___f_3051_);
v___x_3056_ = lean_alloc_closure((void*)(l_OptionT_pure), 4, 2);
lean_closure_set(v___x_3056_, 0, lean_box(0));
lean_closure_set(v___x_3056_, 1, v_inst_3040_);
v___x_3057_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3057_, 0, v___x_3055_);
lean_ctor_set(v___x_3057_, 1, v___x_3056_);
lean_ctor_set(v___x_3057_, 2, v___f_3052_);
lean_ctor_set(v___x_3057_, 3, v___f_3053_);
lean_ctor_set(v___x_3057_, 4, v___f_3054_);
v___x_3058_ = lean_alloc_closure((void*)(l_OptionT_bind), 6, 2);
lean_closure_set(v___x_3058_, 0, lean_box(0));
lean_closure_set(v___x_3058_, 1, v_inst_3040_);
v___x_3059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3059_, 0, v___x_3057_);
lean_ctor_set(v___x_3059_, 1, v___x_3058_);
v___x_3060_ = lean_alloc_closure((void*)(l_OptionT_lift), 4, 2);
lean_closure_set(v___x_3060_, 0, lean_box(0));
lean_closure_set(v___x_3060_, 1, v_inst_3040_);
lean_inc_ref(v___x_3060_);
v___x_3061_ = l_Lean_instMonadResolveNameOfMonadLift___redArg(v___x_3060_, v_inst_3041_);
v_toApplicative_3062_ = lean_ctor_get(v_inst_3040_, 0);
lean_inc_ref(v_toApplicative_3062_);
v_getEnv_3063_ = lean_ctor_get(v_inst_3042_, 0);
v_modifyEnv_3064_ = lean_ctor_get(v_inst_3042_, 1);
v_isSharedCheck_3102_ = !lean_is_exclusive(v_inst_3042_);
if (v_isSharedCheck_3102_ == 0)
{
v___x_3066_ = v_inst_3042_;
v_isShared_3067_ = v_isSharedCheck_3102_;
goto v_resetjp_3065_;
}
else
{
lean_inc(v_modifyEnv_3064_);
lean_inc(v_getEnv_3063_);
lean_dec(v_inst_3042_);
v___x_3066_ = lean_box(0);
v_isShared_3067_ = v_isSharedCheck_3102_;
goto v_resetjp_3065_;
}
v_resetjp_3065_:
{
lean_object* v_toBind_3068_; lean_object* v_toPure_3069_; lean_object* v___f_3070_; lean_object* v___f_3071_; lean_object* v___f_3072_; lean_object* v___x_3073_; lean_object* v___x_3075_; 
v_toBind_3068_ = lean_ctor_get(v_inst_3040_, 1);
lean_inc_n(v_toBind_3068_, 2);
lean_dec_ref(v_inst_3040_);
v_toPure_3069_ = lean_ctor_get(v_toApplicative_3062_, 1);
lean_inc_n(v_toPure_3069_, 3);
lean_dec_ref(v_toApplicative_3062_);
lean_inc_ref(v___x_3060_);
v___f_3070_ = lean_alloc_closure((void*)(l_Lean_instMonadEnvOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3070_, 0, v_modifyEnv_3064_);
lean_closure_set(v___f_3070_, 1, v___x_3060_);
v___f_3071_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3071_, 0, v_toPure_3069_);
v___f_3072_ = lean_alloc_closure((void*)(l_OptionT_lift___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3072_, 0, v_toPure_3069_);
v___x_3073_ = lean_apply_4(v_toBind_3068_, lean_box(0), lean_box(0), v_getEnv_3063_, v___f_3072_);
if (v_isShared_3067_ == 0)
{
lean_ctor_set(v___x_3066_, 1, v___f_3070_);
lean_ctor_set(v___x_3066_, 0, v___x_3073_);
v___x_3075_ = v___x_3066_;
goto v_reusejp_3074_;
}
else
{
lean_object* v_reuseFailAlloc_3101_; 
v_reuseFailAlloc_3101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3101_, 0, v___x_3073_);
lean_ctor_set(v_reuseFailAlloc_3101_, 1, v___f_3070_);
v___x_3075_ = v_reuseFailAlloc_3101_;
goto v_reusejp_3074_;
}
v_reusejp_3074_:
{
lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___f_3078_; lean_object* v___y_3080_; 
lean_inc_ref_n(v___x_3060_, 2);
v___x_3076_ = l_Lean_instMonadOptionsOfMonadLift___redArg(v___x_3060_, v_inst_3043_);
v___x_3077_ = l_Lean_instMonadLogOfMonadLift___redArg(v___x_3060_, v_inst_3044_);
v___f_3078_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3078_, 0, v_inst_3045_);
lean_closure_set(v___f_3078_, 1, v___x_3060_);
if (lean_obj_tag(v_view_x3f_3048_) == 1)
{
lean_object* v_val_3088_; lean_object* v_imported_3089_; lean_object* v_ctx_3090_; lean_object* v_scopes_3091_; lean_object* v___x_3093_; uint8_t v_isShared_3094_; uint8_t v_isSharedCheck_3099_; 
v_val_3088_ = lean_ctor_get(v_view_x3f_3048_, 0);
lean_inc(v_val_3088_);
lean_dec_ref_known(v_view_x3f_3048_, 1);
v_imported_3089_ = lean_ctor_get(v_val_3088_, 1);
v_ctx_3090_ = lean_ctor_get(v_val_3088_, 2);
v_scopes_3091_ = lean_ctor_get(v_val_3088_, 3);
v_isSharedCheck_3099_ = !lean_is_exclusive(v_val_3088_);
if (v_isSharedCheck_3099_ == 0)
{
lean_object* v_unused_3100_; 
v_unused_3100_ = lean_ctor_get(v_val_3088_, 0);
lean_dec(v_unused_3100_);
v___x_3093_ = v_val_3088_;
v_isShared_3094_ = v_isSharedCheck_3099_;
goto v_resetjp_3092_;
}
else
{
lean_inc(v_scopes_3091_);
lean_inc(v_ctx_3090_);
lean_inc(v_imported_3089_);
lean_dec(v_val_3088_);
v___x_3093_ = lean_box(0);
v_isShared_3094_ = v_isSharedCheck_3099_;
goto v_resetjp_3092_;
}
v_resetjp_3092_:
{
lean_object* v___x_3096_; 
if (v_isShared_3094_ == 0)
{
lean_ctor_set(v___x_3093_, 0, v_n_3049_);
v___x_3096_ = v___x_3093_;
goto v_reusejp_3095_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v_n_3049_);
lean_ctor_set(v_reuseFailAlloc_3098_, 1, v_imported_3089_);
lean_ctor_set(v_reuseFailAlloc_3098_, 2, v_ctx_3090_);
lean_ctor_set(v_reuseFailAlloc_3098_, 3, v_scopes_3091_);
v___x_3096_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3095_;
}
v_reusejp_3095_:
{
lean_object* v___x_3097_; 
v___x_3097_ = l_Lean_MacroScopesView_review(v___x_3096_);
v___y_3080_ = v___x_3097_;
goto v___jp_3079_;
}
}
}
else
{
lean_dec(v_view_x3f_3048_);
v___y_3080_ = v_n_3049_;
goto v___jp_3079_;
}
v___jp_3079_:
{
lean_object* v___f_3081_; lean_object* v___f_3082_; lean_object* v___f_3083_; lean_object* v___f_3084_; uint8_t v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; 
lean_inc_n(v___y_3080_, 2);
lean_inc_n(v_toPure_3069_, 3);
v___f_3081_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__1), 3, 2);
lean_closure_set(v___f_3081_, 0, v_toPure_3069_);
lean_closure_set(v___f_3081_, 1, v___y_3080_);
lean_inc_n(v_toBind_3068_, 3);
v___f_3082_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_3082_, 0, v_toPure_3069_);
lean_closure_set(v___f_3082_, 1, v_toBind_3068_);
lean_closure_set(v___f_3082_, 2, v___f_3081_);
v___f_3083_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_3083_, 0, v_toPure_3069_);
lean_closure_set(v___f_3083_, 1, v_filter_3047_);
lean_closure_set(v___f_3083_, 2, v___y_3080_);
lean_closure_set(v___f_3083_, 3, v_toBind_3068_);
lean_closure_set(v___f_3083_, 4, v___f_3071_);
lean_closure_set(v___f_3083_, 5, v___f_3082_);
v___f_3084_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__4___boxed), 5, 4);
lean_closure_set(v___f_3084_, 0, v_toPure_3069_);
lean_closure_set(v___f_3084_, 1, v_n_u2080_3046_);
lean_closure_set(v___f_3084_, 2, v_toBind_3068_);
lean_closure_set(v___f_3084_, 3, v___f_3083_);
v___x_3085_ = 0;
v___x_3086_ = l_Lean_resolveGlobalName___redArg(v___x_3059_, v___x_3061_, v___x_3075_, v___x_3076_, v___x_3077_, v___f_3078_, v___y_3080_, v___x_3085_);
v___x_3087_ = lean_apply_4(v_toBind_3068_, lean_box(0), lean_box(0), v___x_3086_, v___f_3084_);
return v___x_3087_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve(lean_object* v_m_3103_, lean_object* v_inst_3104_, lean_object* v_inst_3105_, lean_object* v_inst_3106_, lean_object* v_inst_3107_, lean_object* v_inst_3108_, lean_object* v_inst_3109_, lean_object* v_n_u2080_3110_, lean_object* v_filter_3111_, lean_object* v_view_x3f_3112_, lean_object* v_n_3113_){
_start:
{
lean_object* v___x_3114_; 
v___x_3114_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(v_inst_3104_, v_inst_3105_, v_inst_3106_, v_inst_3107_, v_inst_3108_, v_inst_3109_, v_n_u2080_3110_, v_filter_3111_, v_view_x3f_3112_, v_n_3113_);
return v___x_3114_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0(lean_object* v_toPure_3119_, lean_object* v_____x_3120_){
_start:
{
if (lean_obj_tag(v_____x_3120_) == 0)
{
lean_object* v___x_3121_; lean_object* v___x_3122_; 
v___x_3121_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0___closed__1));
v___x_3122_ = lean_apply_2(v_toPure_3119_, lean_box(0), v___x_3121_);
return v___x_3122_;
}
else
{
lean_object* v___x_3123_; 
v___x_3123_ = lean_apply_2(v_toPure_3119_, lean_box(0), v_____x_3120_);
return v___x_3123_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__1(lean_object* v_toPure_3124_, lean_object* v_____do__lift_3125_){
_start:
{
if (lean_obj_tag(v_____do__lift_3125_) == 0)
{
lean_object* v___x_3126_; lean_object* v___x_3127_; 
v___x_3126_ = lean_box(0);
v___x_3127_ = lean_apply_2(v_toPure_3124_, lean_box(0), v___x_3126_);
return v___x_3127_;
}
else
{
lean_object* v_val_3128_; lean_object* v___x_3130_; uint8_t v_isShared_3131_; uint8_t v_isSharedCheck_3137_; 
v_val_3128_ = lean_ctor_get(v_____do__lift_3125_, 0);
v_isSharedCheck_3137_ = !lean_is_exclusive(v_____do__lift_3125_);
if (v_isSharedCheck_3137_ == 0)
{
v___x_3130_ = v_____do__lift_3125_;
v_isShared_3131_ = v_isSharedCheck_3137_;
goto v_resetjp_3129_;
}
else
{
lean_inc(v_val_3128_);
lean_dec(v_____do__lift_3125_);
v___x_3130_ = lean_box(0);
v_isShared_3131_ = v_isSharedCheck_3137_;
goto v_resetjp_3129_;
}
v_resetjp_3129_:
{
lean_object* v___x_3132_; lean_object* v___x_3134_; 
v___x_3132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3132_, 0, v_val_3128_);
if (v_isShared_3131_ == 0)
{
lean_ctor_set(v___x_3130_, 0, v___x_3132_);
v___x_3134_ = v___x_3130_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3136_; 
v_reuseFailAlloc_3136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3136_, 0, v___x_3132_);
v___x_3134_ = v_reuseFailAlloc_3136_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
lean_object* v___x_3135_; 
v___x_3135_ = lean_apply_2(v_toPure_3124_, lean_box(0), v___x_3134_);
return v___x_3135_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__2(lean_object* v_toPure_3138_, lean_object* v___x_3139_, lean_object* v_____do__lift_3140_){
_start:
{
if (lean_obj_tag(v_____do__lift_3140_) == 0)
{
lean_object* v___x_3141_; 
v___x_3141_ = lean_apply_2(v_toPure_3138_, lean_box(0), v___x_3139_);
return v___x_3141_;
}
else
{
lean_object* v_val_3142_; lean_object* v_fst_3143_; lean_object* v___x_3144_; 
lean_dec(v___x_3139_);
v_val_3142_ = lean_ctor_get(v_____do__lift_3140_, 0);
lean_inc(v_val_3142_);
lean_dec_ref_known(v_____do__lift_3140_, 1);
v_fst_3143_ = lean_ctor_get(v_val_3142_, 0);
lean_inc(v_fst_3143_);
lean_dec(v_val_3142_);
v___x_3144_ = lean_apply_2(v_toPure_3138_, lean_box(0), v_fst_3143_);
return v___x_3144_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__3(lean_object* v_toPure_3145_, lean_object* v___x_3146_, lean_object* v___x_3147_, lean_object* v_____do__lift_3148_){
_start:
{
if (lean_obj_tag(v_____do__lift_3148_) == 0)
{
lean_object* v___x_3149_; lean_object* v___x_3150_; 
lean_dec(v___x_3147_);
lean_dec(v___x_3146_);
v___x_3149_ = lean_box(0);
v___x_3150_ = lean_apply_2(v_toPure_3145_, lean_box(0), v___x_3149_);
return v___x_3150_;
}
else
{
lean_object* v_val_3151_; lean_object* v___x_3153_; uint8_t v_isShared_3154_; uint8_t v_isSharedCheck_3182_; 
v_val_3151_ = lean_ctor_get(v_____do__lift_3148_, 0);
v_isSharedCheck_3182_ = !lean_is_exclusive(v_____do__lift_3148_);
if (v_isSharedCheck_3182_ == 0)
{
v___x_3153_ = v_____do__lift_3148_;
v_isShared_3154_ = v_isSharedCheck_3182_;
goto v_resetjp_3152_;
}
else
{
lean_inc(v_val_3151_);
lean_dec(v_____do__lift_3148_);
v___x_3153_ = lean_box(0);
v_isShared_3154_ = v_isSharedCheck_3182_;
goto v_resetjp_3152_;
}
v_resetjp_3152_:
{
if (lean_obj_tag(v_val_3151_) == 0)
{
lean_object* v_a_3155_; lean_object* v___x_3157_; uint8_t v_isShared_3158_; uint8_t v_isSharedCheck_3168_; 
lean_dec(v___x_3147_);
v_a_3155_ = lean_ctor_get(v_val_3151_, 0);
v_isSharedCheck_3168_ = !lean_is_exclusive(v_val_3151_);
if (v_isSharedCheck_3168_ == 0)
{
v___x_3157_ = v_val_3151_;
v_isShared_3158_ = v_isSharedCheck_3168_;
goto v_resetjp_3156_;
}
else
{
lean_inc(v_a_3155_);
lean_dec(v_val_3151_);
v___x_3157_ = lean_box(0);
v_isShared_3158_ = v_isSharedCheck_3168_;
goto v_resetjp_3156_;
}
v_resetjp_3156_:
{
lean_object* v___x_3160_; 
if (v_isShared_3154_ == 0)
{
lean_ctor_set(v___x_3153_, 0, v_a_3155_);
v___x_3160_ = v___x_3153_;
goto v_reusejp_3159_;
}
else
{
lean_object* v_reuseFailAlloc_3167_; 
v_reuseFailAlloc_3167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3167_, 0, v_a_3155_);
v___x_3160_ = v_reuseFailAlloc_3167_;
goto v_reusejp_3159_;
}
v_reusejp_3159_:
{
lean_object* v___x_3161_; lean_object* v___x_3163_; 
v___x_3161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3161_, 0, v___x_3160_);
lean_ctor_set(v___x_3161_, 1, v___x_3146_);
if (v_isShared_3158_ == 0)
{
lean_ctor_set(v___x_3157_, 0, v___x_3161_);
v___x_3163_ = v___x_3157_;
goto v_reusejp_3162_;
}
else
{
lean_object* v_reuseFailAlloc_3166_; 
v_reuseFailAlloc_3166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3166_, 0, v___x_3161_);
v___x_3163_ = v_reuseFailAlloc_3166_;
goto v_reusejp_3162_;
}
v_reusejp_3162_:
{
lean_object* v___x_3164_; lean_object* v___x_3165_; 
v___x_3164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3164_, 0, v___x_3163_);
v___x_3165_ = lean_apply_2(v_toPure_3145_, lean_box(0), v___x_3164_);
return v___x_3165_;
}
}
}
}
else
{
lean_object* v___x_3170_; uint8_t v_isShared_3171_; uint8_t v_isSharedCheck_3180_; 
v_isSharedCheck_3180_ = !lean_is_exclusive(v_val_3151_);
if (v_isSharedCheck_3180_ == 0)
{
lean_object* v_unused_3181_; 
v_unused_3181_ = lean_ctor_get(v_val_3151_, 0);
lean_dec(v_unused_3181_);
v___x_3170_ = v_val_3151_;
v_isShared_3171_ = v_isSharedCheck_3180_;
goto v_resetjp_3169_;
}
else
{
lean_dec(v_val_3151_);
v___x_3170_ = lean_box(0);
v_isShared_3171_ = v_isSharedCheck_3180_;
goto v_resetjp_3169_;
}
v_resetjp_3169_:
{
lean_object* v___x_3172_; lean_object* v___x_3174_; 
v___x_3172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3172_, 0, v___x_3147_);
lean_ctor_set(v___x_3172_, 1, v___x_3146_);
if (v_isShared_3171_ == 0)
{
lean_ctor_set(v___x_3170_, 0, v___x_3172_);
v___x_3174_ = v___x_3170_;
goto v_reusejp_3173_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v___x_3172_);
v___x_3174_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3173_;
}
v_reusejp_3173_:
{
lean_object* v___x_3176_; 
if (v_isShared_3154_ == 0)
{
lean_ctor_set(v___x_3153_, 0, v___x_3174_);
v___x_3176_ = v___x_3153_;
goto v_reusejp_3175_;
}
else
{
lean_object* v_reuseFailAlloc_3178_; 
v_reuseFailAlloc_3178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3178_, 0, v___x_3174_);
v___x_3176_ = v_reuseFailAlloc_3178_;
goto v_reusejp_3175_;
}
v_reusejp_3175_:
{
lean_object* v___x_3177_; 
v___x_3177_ = lean_apply_2(v_toPure_3145_, lean_box(0), v___x_3176_);
return v___x_3177_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4(lean_object* v_toPure_3183_, lean_object* v___x_3184_, lean_object* v_inst_3185_, lean_object* v_inst_3186_, lean_object* v_inst_3187_, lean_object* v_inst_3188_, lean_object* v_inst_3189_, lean_object* v_inst_3190_, lean_object* v_n_u2080_3191_, lean_object* v_filter_3192_, lean_object* v_view_x3f_3193_, lean_object* v_toBind_3194_, lean_object* v___f_3195_, lean_object* v___f_3196_, lean_object* v_a_3197_, lean_object* v_x_3198_, lean_object* v___y_3199_){
_start:
{
lean_object* v_snd_3200_; lean_object* v___x_3201_; lean_object* v___f_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; 
v_snd_3200_ = lean_ctor_get(v___y_3199_, 1);
lean_inc(v_snd_3200_);
lean_dec_ref(v___y_3199_);
v___x_3201_ = l_Lean_Name_appendCore(v_a_3197_, v_snd_3200_);
lean_inc(v___x_3201_);
v___f_3202_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__3), 4, 3);
lean_closure_set(v___f_3202_, 0, v_toPure_3183_);
lean_closure_set(v___f_3202_, 1, v___x_3201_);
lean_closure_set(v___f_3202_, 2, v___x_3184_);
v___x_3203_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(v_inst_3185_, v_inst_3186_, v_inst_3187_, v_inst_3188_, v_inst_3189_, v_inst_3190_, v_n_u2080_3191_, v_filter_3192_, v_view_x3f_3193_, v___x_3201_);
lean_inc_n(v_toBind_3194_, 2);
v___x_3204_ = lean_apply_4(v_toBind_3194_, lean_box(0), lean_box(0), v___x_3203_, v___f_3195_);
v___x_3205_ = lean_apply_4(v_toBind_3194_, lean_box(0), lean_box(0), v___x_3204_, v___f_3196_);
v___x_3206_ = lean_apply_4(v_toBind_3194_, lean_box(0), lean_box(0), v___x_3205_, v___f_3202_);
return v___x_3206_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4___boxed(lean_object** _args){
lean_object* v_toPure_3207_ = _args[0];
lean_object* v___x_3208_ = _args[1];
lean_object* v_inst_3209_ = _args[2];
lean_object* v_inst_3210_ = _args[3];
lean_object* v_inst_3211_ = _args[4];
lean_object* v_inst_3212_ = _args[5];
lean_object* v_inst_3213_ = _args[6];
lean_object* v_inst_3214_ = _args[7];
lean_object* v_n_u2080_3215_ = _args[8];
lean_object* v_filter_3216_ = _args[9];
lean_object* v_view_x3f_3217_ = _args[10];
lean_object* v_toBind_3218_ = _args[11];
lean_object* v___f_3219_ = _args[12];
lean_object* v___f_3220_ = _args[13];
lean_object* v_a_3221_ = _args[14];
lean_object* v_x_3222_ = _args[15];
lean_object* v___y_3223_ = _args[16];
_start:
{
lean_object* v_res_3224_; 
v_res_3224_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4(v_toPure_3207_, v___x_3208_, v_inst_3209_, v_inst_3210_, v_inst_3211_, v_inst_3212_, v_inst_3213_, v_inst_3214_, v_n_u2080_3215_, v_filter_3216_, v_view_x3f_3217_, v_toBind_3218_, v___f_3219_, v___f_3220_, v_a_3221_, v_x_3222_, v___y_3223_);
lean_dec(v_a_3221_);
return v_res_3224_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5(lean_object* v_toPure_3228_, lean_object* v_n_3229_, lean_object* v_inst_3230_, lean_object* v_inst_3231_, lean_object* v_inst_3232_, lean_object* v_inst_3233_, lean_object* v_inst_3234_, lean_object* v_inst_3235_, lean_object* v_n_u2080_3236_, lean_object* v_filter_3237_, lean_object* v_view_x3f_3238_, lean_object* v_toBind_3239_, lean_object* v___f_3240_, lean_object* v___f_3241_, lean_object* v___x_3242_, lean_object* v_____do__lift_3243_){
_start:
{
if (lean_obj_tag(v_____do__lift_3243_) == 0)
{
lean_object* v___x_3244_; lean_object* v___x_3245_; 
lean_dec_ref(v___x_3242_);
lean_dec(v___f_3241_);
lean_dec(v___f_3240_);
lean_dec(v_toBind_3239_);
lean_dec(v_view_x3f_3238_);
lean_dec(v_filter_3237_);
lean_dec(v_n_u2080_3236_);
lean_dec(v_inst_3235_);
lean_dec_ref(v_inst_3234_);
lean_dec_ref(v_inst_3233_);
lean_dec_ref(v_inst_3232_);
lean_dec_ref(v_inst_3231_);
lean_dec_ref(v_inst_3230_);
lean_dec(v_n_3229_);
v___x_3244_ = lean_box(0);
v___x_3245_ = lean_apply_2(v_toPure_3228_, lean_box(0), v___x_3244_);
return v___x_3245_;
}
else
{
lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___f_3249_; lean_object* v___f_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; 
v___x_3246_ = l_Lean_privateToUserName(v_n_3229_);
v___x_3247_ = l_Lean_Name_componentsRev(v___x_3246_);
v___x_3248_ = lean_box(0);
lean_inc(v_toPure_3228_);
v___f_3249_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__2), 3, 2);
lean_closure_set(v___f_3249_, 0, v_toPure_3228_);
lean_closure_set(v___f_3249_, 1, v___x_3248_);
lean_inc(v_toBind_3239_);
v___f_3250_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__4___boxed), 17, 14);
lean_closure_set(v___f_3250_, 0, v_toPure_3228_);
lean_closure_set(v___f_3250_, 1, v___x_3248_);
lean_closure_set(v___f_3250_, 2, v_inst_3230_);
lean_closure_set(v___f_3250_, 3, v_inst_3231_);
lean_closure_set(v___f_3250_, 4, v_inst_3232_);
lean_closure_set(v___f_3250_, 5, v_inst_3233_);
lean_closure_set(v___f_3250_, 6, v_inst_3234_);
lean_closure_set(v___f_3250_, 7, v_inst_3235_);
lean_closure_set(v___f_3250_, 8, v_n_u2080_3236_);
lean_closure_set(v___f_3250_, 9, v_filter_3237_);
lean_closure_set(v___f_3250_, 10, v_view_x3f_3238_);
lean_closure_set(v___f_3250_, 11, v_toBind_3239_);
lean_closure_set(v___f_3250_, 12, v___f_3240_);
lean_closure_set(v___f_3250_, 13, v___f_3241_);
v___x_3251_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___closed__0));
v___x_3252_ = l_List_forIn_x27_loop___redArg(v___x_3242_, v___f_3250_, v___x_3247_, v___x_3251_);
lean_dec(v___x_3247_);
v___x_3253_ = lean_apply_4(v_toBind_3239_, lean_box(0), lean_box(0), v___x_3252_, v___f_3249_);
return v___x_3253_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___boxed(lean_object* v_toPure_3254_, lean_object* v_n_3255_, lean_object* v_inst_3256_, lean_object* v_inst_3257_, lean_object* v_inst_3258_, lean_object* v_inst_3259_, lean_object* v_inst_3260_, lean_object* v_inst_3261_, lean_object* v_n_u2080_3262_, lean_object* v_filter_3263_, lean_object* v_view_x3f_3264_, lean_object* v_toBind_3265_, lean_object* v___f_3266_, lean_object* v___f_3267_, lean_object* v___x_3268_, lean_object* v_____do__lift_3269_){
_start:
{
lean_object* v_res_3270_; 
v_res_3270_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5(v_toPure_3254_, v_n_3255_, v_inst_3256_, v_inst_3257_, v_inst_3258_, v_inst_3259_, v_inst_3260_, v_inst_3261_, v_n_u2080_3262_, v_filter_3263_, v_view_x3f_3264_, v_toBind_3265_, v___f_3266_, v___f_3267_, v___x_3268_, v_____do__lift_3269_);
lean_dec(v_____do__lift_3269_);
return v_res_3270_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg(lean_object* v_inst_3271_, lean_object* v_inst_3272_, lean_object* v_inst_3273_, lean_object* v_inst_3274_, lean_object* v_inst_3275_, lean_object* v_inst_3276_, lean_object* v_n_u2080_3277_, lean_object* v_filter_3278_, lean_object* v_view_x3f_3279_, lean_object* v_n_3280_){
_start:
{
lean_object* v___f_3281_; lean_object* v___f_3282_; lean_object* v___f_3283_; lean_object* v___f_3284_; lean_object* v___f_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___y_3292_; uint8_t v___x_3300_; 
lean_inc_ref_n(v_inst_3271_, 7);
v___f_3281_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_3281_, 0, v_inst_3271_);
v___f_3282_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_3282_, 0, v_inst_3271_);
v___f_3283_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__6), 5, 1);
lean_closure_set(v___f_3283_, 0, v_inst_3271_);
v___f_3284_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_3284_, 0, v_inst_3271_);
v___f_3285_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__11), 5, 1);
lean_closure_set(v___f_3285_, 0, v_inst_3271_);
v___x_3286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3286_, 0, v___f_3281_);
lean_ctor_set(v___x_3286_, 1, v___f_3282_);
v___x_3287_ = lean_alloc_closure((void*)(l_OptionT_pure), 4, 2);
lean_closure_set(v___x_3287_, 0, lean_box(0));
lean_closure_set(v___x_3287_, 1, v_inst_3271_);
v___x_3288_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3288_, 0, v___x_3286_);
lean_ctor_set(v___x_3288_, 1, v___x_3287_);
lean_ctor_set(v___x_3288_, 2, v___f_3283_);
lean_ctor_set(v___x_3288_, 3, v___f_3284_);
lean_ctor_set(v___x_3288_, 4, v___f_3285_);
v___x_3289_ = lean_alloc_closure((void*)(l_OptionT_bind), 6, 2);
lean_closure_set(v___x_3289_, 0, lean_box(0));
lean_closure_set(v___x_3289_, 1, v_inst_3271_);
v___x_3290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3290_, 0, v___x_3288_);
lean_ctor_set(v___x_3290_, 1, v___x_3289_);
v___x_3300_ = l_Lean_Name_hasMacroScopes(v_n_3280_);
if (v___x_3300_ == 0)
{
lean_object* v_toApplicative_3301_; lean_object* v_toPure_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; 
v_toApplicative_3301_ = lean_ctor_get(v_inst_3271_, 0);
v_toPure_3302_ = lean_ctor_get(v_toApplicative_3301_, 1);
v___x_3303_ = ((lean_object*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg___lam__2___closed__0));
lean_inc(v_toPure_3302_);
v___x_3304_ = lean_apply_2(v_toPure_3302_, lean_box(0), v___x_3303_);
v___y_3292_ = v___x_3304_;
goto v___jp_3291_;
}
else
{
lean_object* v_toApplicative_3305_; lean_object* v_toPure_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; 
v_toApplicative_3305_ = lean_ctor_get(v_inst_3271_, 0);
v_toPure_3306_ = lean_ctor_get(v_toApplicative_3305_, 1);
v___x_3307_ = lean_box(0);
lean_inc(v_toPure_3306_);
v___x_3308_ = lean_apply_2(v_toPure_3306_, lean_box(0), v___x_3307_);
v___y_3292_ = v___x_3308_;
goto v___jp_3291_;
}
v___jp_3291_:
{
lean_object* v_toApplicative_3293_; lean_object* v_toBind_3294_; lean_object* v_toPure_3295_; lean_object* v___f_3296_; lean_object* v___f_3297_; lean_object* v___f_3298_; lean_object* v___x_3299_; 
v_toApplicative_3293_ = lean_ctor_get(v_inst_3271_, 0);
v_toBind_3294_ = lean_ctor_get(v_inst_3271_, 1);
lean_inc_n(v_toBind_3294_, 2);
v_toPure_3295_ = lean_ctor_get(v_toApplicative_3293_, 1);
lean_inc_n(v_toPure_3295_, 3);
v___f_3296_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3296_, 0, v_toPure_3295_);
v___f_3297_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__1), 2, 1);
lean_closure_set(v___f_3297_, 0, v_toPure_3295_);
v___f_3298_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg___lam__5___boxed), 16, 15);
lean_closure_set(v___f_3298_, 0, v_toPure_3295_);
lean_closure_set(v___f_3298_, 1, v_n_3280_);
lean_closure_set(v___f_3298_, 2, v_inst_3271_);
lean_closure_set(v___f_3298_, 3, v_inst_3272_);
lean_closure_set(v___f_3298_, 4, v_inst_3273_);
lean_closure_set(v___f_3298_, 5, v_inst_3274_);
lean_closure_set(v___f_3298_, 6, v_inst_3275_);
lean_closure_set(v___f_3298_, 7, v_inst_3276_);
lean_closure_set(v___f_3298_, 8, v_n_u2080_3277_);
lean_closure_set(v___f_3298_, 9, v_filter_3278_);
lean_closure_set(v___f_3298_, 10, v_view_x3f_3279_);
lean_closure_set(v___f_3298_, 11, v_toBind_3294_);
lean_closure_set(v___f_3298_, 12, v___f_3297_);
lean_closure_set(v___f_3298_, 13, v___f_3296_);
lean_closure_set(v___f_3298_, 14, v___x_3290_);
v___x_3299_ = lean_apply_4(v_toBind_3294_, lean_box(0), lean_box(0), v___y_3292_, v___f_3298_);
return v___x_3299_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore(lean_object* v_m_3309_, lean_object* v_inst_3310_, lean_object* v_inst_3311_, lean_object* v_inst_3312_, lean_object* v_inst_3313_, lean_object* v_inst_3314_, lean_object* v_inst_3315_, lean_object* v_n_u2080_3316_, lean_object* v_filter_3317_, lean_object* v_view_x3f_3318_, lean_object* v_n_3319_){
_start:
{
lean_object* v___x_3320_; 
v___x_3320_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg(v_inst_3310_, v_inst_3311_, v_inst_3312_, v_inst_3313_, v_inst_3314_, v_inst_3315_, v_n_u2080_3316_, v_filter_3317_, v_view_x3f_3318_, v_n_3319_);
return v___x_3320_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__0(lean_object* v_n_u2081_3321_, lean_object* v_x1_3322_, lean_object* v_x2_3323_){
_start:
{
lean_object* v___x_3324_; lean_object* v___x_3325_; uint8_t v___x_3326_; 
v___x_3324_ = l_Lean_Name_getPrefix(v_x2_3323_);
v___x_3325_ = l_Lean_Name_getPrefix(v_n_u2081_3321_);
v___x_3326_ = l_Lean_Name_isPrefixOf(v___x_3324_, v___x_3325_);
lean_dec(v___x_3325_);
lean_dec(v___x_3324_);
if (v___x_3326_ == 0)
{
lean_dec(v_x2_3323_);
return v_x1_3322_;
}
else
{
lean_object* v___x_3327_; 
v___x_3327_ = lean_array_push(v_x1_3322_, v_x2_3323_);
return v___x_3327_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__0___boxed(lean_object* v_n_u2081_3328_, lean_object* v_x1_3329_, lean_object* v_x2_3330_){
_start:
{
lean_object* v_res_3331_; 
v_res_3331_ = l_Lean_unresolveNameGlobal_x3f___redArg___lam__0(v_n_u2081_3328_, v_x1_3329_, v_x2_3330_);
lean_dec(v_n_u2081_3328_);
return v_res_3331_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__1(lean_object* v_view_3332_, lean_object* v_n_u2081_3333_, lean_object* v_inst_3334_, lean_object* v_inst_3335_, lean_object* v_inst_3336_, lean_object* v_inst_3337_, lean_object* v_inst_3338_, lean_object* v_inst_3339_, lean_object* v_n_u2080_3340_, lean_object* v_filter_3341_, lean_object* v_toPure_3342_, lean_object* v_____do__lift_3343_){
_start:
{
if (lean_obj_tag(v_____do__lift_3343_) == 0)
{
lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; 
lean_dec(v_toPure_3342_);
v___x_3344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3344_, 0, v_view_3332_);
v___x_3345_ = l_Lean_rootNamespace;
v___x_3346_ = l_Lean_Name_append(v___x_3345_, v_n_u2081_3333_);
v___x_3347_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore___redArg(v_inst_3334_, v_inst_3335_, v_inst_3336_, v_inst_3337_, v_inst_3338_, v_inst_3339_, v_n_u2080_3340_, v_filter_3341_, v___x_3344_, v___x_3346_);
return v___x_3347_;
}
else
{
lean_object* v___x_3348_; 
lean_dec(v_filter_3341_);
lean_dec(v_n_u2080_3340_);
lean_dec(v_inst_3339_);
lean_dec_ref(v_inst_3338_);
lean_dec_ref(v_inst_3337_);
lean_dec_ref(v_inst_3336_);
lean_dec_ref(v_inst_3335_);
lean_dec_ref(v_inst_3334_);
lean_dec(v_n_u2081_3333_);
lean_dec_ref(v_view_3332_);
v___x_3348_ = lean_apply_2(v_toPure_3342_, lean_box(0), v_____do__lift_3343_);
return v___x_3348_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__2(lean_object* v_toPure_3349_, lean_object* v_inst_3350_, lean_object* v_inst_3351_, lean_object* v_inst_3352_, lean_object* v_inst_3353_, lean_object* v_inst_3354_, lean_object* v_inst_3355_, lean_object* v_n_u2080_3356_, lean_object* v_filter_3357_, lean_object* v___x_3358_, lean_object* v_toBind_3359_, lean_object* v___f_3360_, uint8_t v_allowHorizAliases_3361_, lean_object* v___f_3362_, lean_object* v_____do__lift_3363_){
_start:
{
lean_object* v_aliases_3365_; 
if (lean_obj_tag(v_____do__lift_3363_) == 0)
{
lean_object* v___x_3371_; lean_object* v___x_3372_; 
lean_dec_ref(v___f_3362_);
lean_dec(v___f_3360_);
lean_dec(v_toBind_3359_);
lean_dec_ref(v___x_3358_);
lean_dec(v_filter_3357_);
lean_dec(v_n_u2080_3356_);
lean_dec(v_inst_3355_);
lean_dec_ref(v_inst_3354_);
lean_dec_ref(v_inst_3353_);
lean_dec_ref(v_inst_3352_);
lean_dec_ref(v_inst_3351_);
lean_dec_ref(v_inst_3350_);
v___x_3371_ = lean_box(0);
v___x_3372_ = lean_apply_2(v_toPure_3349_, lean_box(0), v___x_3371_);
return v___x_3372_;
}
else
{
lean_object* v_val_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; 
lean_dec(v_toPure_3349_);
v_val_3373_ = lean_ctor_get(v_____do__lift_3363_, 0);
lean_inc(v_val_3373_);
lean_dec_ref_known(v_____do__lift_3363_, 1);
lean_inc(v_n_u2080_3356_);
v___x_3374_ = l_Lean_getRevAliases(v_val_3373_, v_n_u2080_3356_);
v___x_3375_ = lean_array_mk(v___x_3374_);
if (v_allowHorizAliases_3361_ == 0)
{
lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; uint8_t v___x_3380_; 
v___x_3376_ = lean_unsigned_to_nat(0u);
v___x_3377_ = lean_array_get_size(v___x_3375_);
v___x_3378_ = ((lean_object*)(l_Lean_resolveNamespace___redArg___closed__1));
v___x_3379_ = ((lean_object*)(l_Lean_resolveLocalName___redArg___lam__3___closed__9));
v___x_3380_ = lean_nat_dec_lt(v___x_3376_, v___x_3377_);
if (v___x_3380_ == 0)
{
lean_dec_ref(v___x_3375_);
lean_dec_ref(v___f_3362_);
v_aliases_3365_ = v___x_3378_;
goto v___jp_3364_;
}
else
{
size_t v___x_3381_; size_t v___x_3382_; lean_object* v___x_3383_; 
v___x_3381_ = ((size_t)0ULL);
v___x_3382_ = lean_usize_of_nat(v___x_3377_);
v___x_3383_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3379_, v___f_3362_, v___x_3375_, v___x_3381_, v___x_3382_, v___x_3378_);
v_aliases_3365_ = v___x_3383_;
goto v___jp_3364_;
}
}
else
{
lean_dec_ref(v___f_3362_);
v_aliases_3365_ = v___x_3375_;
goto v___jp_3364_;
}
}
v___jp_3364_:
{
lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; 
v___x_3366_ = lean_box(0);
v___x_3367_ = lean_alloc_closure((void*)(l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_unresolveNameCore), 11, 10);
lean_closure_set(v___x_3367_, 0, lean_box(0));
lean_closure_set(v___x_3367_, 1, v_inst_3350_);
lean_closure_set(v___x_3367_, 2, v_inst_3351_);
lean_closure_set(v___x_3367_, 3, v_inst_3352_);
lean_closure_set(v___x_3367_, 4, v_inst_3353_);
lean_closure_set(v___x_3367_, 5, v_inst_3354_);
lean_closure_set(v___x_3367_, 6, v_inst_3355_);
lean_closure_set(v___x_3367_, 7, v_n_u2080_3356_);
lean_closure_set(v___x_3367_, 8, v_filter_3357_);
lean_closure_set(v___x_3367_, 9, v___x_3366_);
v___x_3368_ = lean_unsigned_to_nat(0u);
v___x_3369_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go(lean_box(0), lean_box(0), lean_box(0), v___x_3358_, v___x_3367_, v_aliases_3365_, v___x_3368_);
v___x_3370_ = lean_apply_4(v_toBind_3359_, lean_box(0), lean_box(0), v___x_3369_, v___f_3360_);
return v___x_3370_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__2___boxed(lean_object* v_toPure_3384_, lean_object* v_inst_3385_, lean_object* v_inst_3386_, lean_object* v_inst_3387_, lean_object* v_inst_3388_, lean_object* v_inst_3389_, lean_object* v_inst_3390_, lean_object* v_n_u2080_3391_, lean_object* v_filter_3392_, lean_object* v___x_3393_, lean_object* v_toBind_3394_, lean_object* v___f_3395_, lean_object* v_allowHorizAliases_3396_, lean_object* v___f_3397_, lean_object* v_____do__lift_3398_){
_start:
{
uint8_t v_allowHorizAliases_boxed_3399_; lean_object* v_res_3400_; 
v_allowHorizAliases_boxed_3399_ = lean_unbox(v_allowHorizAliases_3396_);
v_res_3400_ = l_Lean_unresolveNameGlobal_x3f___redArg___lam__2(v_toPure_3384_, v_inst_3385_, v_inst_3386_, v_inst_3387_, v_inst_3388_, v_inst_3389_, v_inst_3390_, v_n_u2080_3391_, v_filter_3392_, v___x_3393_, v_toBind_3394_, v___f_3395_, v_allowHorizAliases_boxed_3399_, v___f_3397_, v_____do__lift_3398_);
return v_res_3400_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__3(lean_object* v_toPure_3401_, lean_object* v_____do__lift_3402_){
_start:
{
lean_object* v___x_3403_; lean_object* v___x_3404_; 
v___x_3403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3403_, 0, v_____do__lift_3402_);
v___x_3404_ = lean_apply_2(v_toPure_3401_, lean_box(0), v___x_3403_);
return v___x_3404_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___lam__4(lean_object* v_n_u2081_3405_, lean_object* v_inst_3406_, lean_object* v_inst_3407_, lean_object* v_inst_3408_, lean_object* v_inst_3409_, lean_object* v_inst_3410_, lean_object* v_inst_3411_, lean_object* v_n_u2080_3412_, lean_object* v_filter_3413_, lean_object* v___x_3414_, lean_object* v_toPure_3415_, lean_object* v_____do__lift_3416_){
_start:
{
if (lean_obj_tag(v_____do__lift_3416_) == 0)
{
lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; 
lean_dec(v_toPure_3415_);
v___x_3417_ = l_Lean_rootNamespace;
v___x_3418_ = l_Lean_Name_append(v___x_3417_, v_n_u2081_3405_);
v___x_3419_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(v_inst_3406_, v_inst_3407_, v_inst_3408_, v_inst_3409_, v_inst_3410_, v_inst_3411_, v_n_u2080_3412_, v_filter_3413_, v___x_3414_, v___x_3418_);
return v___x_3419_;
}
else
{
lean_object* v___x_3420_; 
lean_dec(v___x_3414_);
lean_dec(v_filter_3413_);
lean_dec(v_n_u2080_3412_);
lean_dec(v_inst_3411_);
lean_dec_ref(v_inst_3410_);
lean_dec_ref(v_inst_3409_);
lean_dec_ref(v_inst_3408_);
lean_dec_ref(v_inst_3407_);
lean_dec_ref(v_inst_3406_);
lean_dec(v_n_u2081_3405_);
v___x_3420_ = lean_apply_2(v_toPure_3415_, lean_box(0), v_____do__lift_3416_);
return v___x_3420_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg(lean_object* v_inst_3421_, lean_object* v_inst_3422_, lean_object* v_inst_3423_, lean_object* v_inst_3424_, lean_object* v_inst_3425_, lean_object* v_inst_3426_, lean_object* v_n_u2080_3427_, uint8_t v_fullNames_3428_, uint8_t v_allowHorizAliases_3429_, lean_object* v_filter_3430_){
_start:
{
lean_object* v_view_3431_; lean_object* v_name_3432_; lean_object* v_n_u2081_3433_; lean_object* v___x_3434_; 
lean_inc(v_n_u2080_3427_);
v_view_3431_ = l_Lean_extractMacroScopes(v_n_u2080_3427_);
v_name_3432_ = lean_ctor_get(v_view_3431_, 0);
lean_inc(v_name_3432_);
v_n_u2081_3433_ = l_Lean_privateToUserName(v_name_3432_);
lean_inc_ref(v_inst_3421_);
v___x_3434_ = l_OptionT_instAlternative___redArg(v_inst_3421_);
if (v_fullNames_3428_ == 0)
{
lean_object* v_toApplicative_3435_; lean_object* v_getEnv_3436_; lean_object* v_toBind_3437_; lean_object* v_toPure_3438_; lean_object* v___f_3439_; lean_object* v___f_3440_; lean_object* v___x_3441_; lean_object* v___f_3442_; lean_object* v___f_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; 
v_toApplicative_3435_ = lean_ctor_get(v_inst_3421_, 0);
v_getEnv_3436_ = lean_ctor_get(v_inst_3423_, 0);
lean_inc(v_getEnv_3436_);
v_toBind_3437_ = lean_ctor_get(v_inst_3421_, 1);
lean_inc_n(v_toBind_3437_, 3);
v_toPure_3438_ = lean_ctor_get(v_toApplicative_3435_, 1);
lean_inc_n(v_toPure_3438_, 3);
lean_inc(v_n_u2081_3433_);
v___f_3439_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3439_, 0, v_n_u2081_3433_);
lean_inc(v_filter_3430_);
lean_inc(v_n_u2080_3427_);
lean_inc(v_inst_3426_);
lean_inc_ref(v_inst_3425_);
lean_inc_ref(v_inst_3424_);
lean_inc_ref(v_inst_3423_);
lean_inc_ref(v_inst_3422_);
lean_inc_ref(v_inst_3421_);
v___f_3440_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__1), 12, 11);
lean_closure_set(v___f_3440_, 0, v_view_3431_);
lean_closure_set(v___f_3440_, 1, v_n_u2081_3433_);
lean_closure_set(v___f_3440_, 2, v_inst_3421_);
lean_closure_set(v___f_3440_, 3, v_inst_3422_);
lean_closure_set(v___f_3440_, 4, v_inst_3423_);
lean_closure_set(v___f_3440_, 5, v_inst_3424_);
lean_closure_set(v___f_3440_, 6, v_inst_3425_);
lean_closure_set(v___f_3440_, 7, v_inst_3426_);
lean_closure_set(v___f_3440_, 8, v_n_u2080_3427_);
lean_closure_set(v___f_3440_, 9, v_filter_3430_);
lean_closure_set(v___f_3440_, 10, v_toPure_3438_);
v___x_3441_ = lean_box(v_allowHorizAliases_3429_);
v___f_3442_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__2___boxed), 15, 14);
lean_closure_set(v___f_3442_, 0, v_toPure_3438_);
lean_closure_set(v___f_3442_, 1, v_inst_3421_);
lean_closure_set(v___f_3442_, 2, v_inst_3422_);
lean_closure_set(v___f_3442_, 3, v_inst_3423_);
lean_closure_set(v___f_3442_, 4, v_inst_3424_);
lean_closure_set(v___f_3442_, 5, v_inst_3425_);
lean_closure_set(v___f_3442_, 6, v_inst_3426_);
lean_closure_set(v___f_3442_, 7, v_n_u2080_3427_);
lean_closure_set(v___f_3442_, 8, v_filter_3430_);
lean_closure_set(v___f_3442_, 9, v___x_3434_);
lean_closure_set(v___f_3442_, 10, v_toBind_3437_);
lean_closure_set(v___f_3442_, 11, v___f_3440_);
lean_closure_set(v___f_3442_, 12, v___x_3441_);
lean_closure_set(v___f_3442_, 13, v___f_3439_);
v___f_3443_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__3), 2, 1);
lean_closure_set(v___f_3443_, 0, v_toPure_3438_);
v___x_3444_ = lean_apply_4(v_toBind_3437_, lean_box(0), lean_box(0), v_getEnv_3436_, v___f_3443_);
v___x_3445_ = lean_apply_4(v_toBind_3437_, lean_box(0), lean_box(0), v___x_3444_, v___f_3442_);
return v___x_3445_;
}
else
{
lean_object* v_toApplicative_3446_; lean_object* v_toBind_3447_; lean_object* v_toPure_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___f_3451_; lean_object* v___x_3452_; 
lean_dec_ref(v___x_3434_);
v_toApplicative_3446_ = lean_ctor_get(v_inst_3421_, 0);
v_toBind_3447_ = lean_ctor_get(v_inst_3421_, 1);
lean_inc(v_toBind_3447_);
v_toPure_3448_ = lean_ctor_get(v_toApplicative_3446_, 1);
lean_inc(v_toPure_3448_);
v___x_3449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3449_, 0, v_view_3431_);
lean_inc(v_n_u2081_3433_);
lean_inc_ref(v___x_3449_);
lean_inc(v_filter_3430_);
lean_inc(v_n_u2080_3427_);
lean_inc(v_inst_3426_);
lean_inc_ref(v_inst_3425_);
lean_inc_ref(v_inst_3424_);
lean_inc_ref(v_inst_3423_);
lean_inc_ref(v_inst_3422_);
lean_inc_ref(v_inst_3421_);
v___x_3450_ = l___private_Lean_ResolveName_0__Lean_unresolveNameGlobal_x3f_tryResolve___redArg(v_inst_3421_, v_inst_3422_, v_inst_3423_, v_inst_3424_, v_inst_3425_, v_inst_3426_, v_n_u2080_3427_, v_filter_3430_, v___x_3449_, v_n_u2081_3433_);
v___f_3451_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal_x3f___redArg___lam__4), 12, 11);
lean_closure_set(v___f_3451_, 0, v_n_u2081_3433_);
lean_closure_set(v___f_3451_, 1, v_inst_3421_);
lean_closure_set(v___f_3451_, 2, v_inst_3422_);
lean_closure_set(v___f_3451_, 3, v_inst_3423_);
lean_closure_set(v___f_3451_, 4, v_inst_3424_);
lean_closure_set(v___f_3451_, 5, v_inst_3425_);
lean_closure_set(v___f_3451_, 6, v_inst_3426_);
lean_closure_set(v___f_3451_, 7, v_n_u2080_3427_);
lean_closure_set(v___f_3451_, 8, v_filter_3430_);
lean_closure_set(v___f_3451_, 9, v___x_3449_);
lean_closure_set(v___f_3451_, 10, v_toPure_3448_);
v___x_3452_ = lean_apply_4(v_toBind_3447_, lean_box(0), lean_box(0), v___x_3450_, v___f_3451_);
return v___x_3452_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___redArg___boxed(lean_object* v_inst_3453_, lean_object* v_inst_3454_, lean_object* v_inst_3455_, lean_object* v_inst_3456_, lean_object* v_inst_3457_, lean_object* v_inst_3458_, lean_object* v_n_u2080_3459_, lean_object* v_fullNames_3460_, lean_object* v_allowHorizAliases_3461_, lean_object* v_filter_3462_){
_start:
{
uint8_t v_fullNames_boxed_3463_; uint8_t v_allowHorizAliases_boxed_3464_; lean_object* v_res_3465_; 
v_fullNames_boxed_3463_ = lean_unbox(v_fullNames_3460_);
v_allowHorizAliases_boxed_3464_ = lean_unbox(v_allowHorizAliases_3461_);
v_res_3465_ = l_Lean_unresolveNameGlobal_x3f___redArg(v_inst_3453_, v_inst_3454_, v_inst_3455_, v_inst_3456_, v_inst_3457_, v_inst_3458_, v_n_u2080_3459_, v_fullNames_boxed_3463_, v_allowHorizAliases_boxed_3464_, v_filter_3462_);
return v_res_3465_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f(lean_object* v_m_3466_, lean_object* v_inst_3467_, lean_object* v_inst_3468_, lean_object* v_inst_3469_, lean_object* v_inst_3470_, lean_object* v_inst_3471_, lean_object* v_inst_3472_, lean_object* v_n_u2080_3473_, uint8_t v_fullNames_3474_, uint8_t v_allowHorizAliases_3475_, lean_object* v_filter_3476_){
_start:
{
lean_object* v___x_3477_; 
v___x_3477_ = l_Lean_unresolveNameGlobal_x3f___redArg(v_inst_3467_, v_inst_3468_, v_inst_3469_, v_inst_3470_, v_inst_3471_, v_inst_3472_, v_n_u2080_3473_, v_fullNames_3474_, v_allowHorizAliases_3475_, v_filter_3476_);
return v___x_3477_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal_x3f___boxed(lean_object* v_m_3478_, lean_object* v_inst_3479_, lean_object* v_inst_3480_, lean_object* v_inst_3481_, lean_object* v_inst_3482_, lean_object* v_inst_3483_, lean_object* v_inst_3484_, lean_object* v_n_u2080_3485_, lean_object* v_fullNames_3486_, lean_object* v_allowHorizAliases_3487_, lean_object* v_filter_3488_){
_start:
{
uint8_t v_fullNames_boxed_3489_; uint8_t v_allowHorizAliases_boxed_3490_; lean_object* v_res_3491_; 
v_fullNames_boxed_3489_ = lean_unbox(v_fullNames_3486_);
v_allowHorizAliases_boxed_3490_ = lean_unbox(v_allowHorizAliases_3487_);
v_res_3491_ = l_Lean_unresolveNameGlobal_x3f(v_m_3478_, v_inst_3479_, v_inst_3480_, v_inst_3481_, v_inst_3482_, v_inst_3483_, v_inst_3484_, v_n_u2080_3485_, v_fullNames_boxed_3489_, v_allowHorizAliases_boxed_3490_, v_filter_3488_);
return v_res_3491_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg___lam__0(lean_object* v_toPure_3492_, lean_object* v_n_u2080_3493_, lean_object* v_n_x3f_3494_){
_start:
{
if (lean_obj_tag(v_n_x3f_3494_) == 0)
{
lean_object* v___x_3495_; 
v___x_3495_ = lean_apply_2(v_toPure_3492_, lean_box(0), v_n_u2080_3493_);
return v___x_3495_;
}
else
{
lean_object* v_val_3496_; lean_object* v___x_3497_; 
lean_dec(v_n_u2080_3493_);
v_val_3496_ = lean_ctor_get(v_n_x3f_3494_, 0);
lean_inc(v_val_3496_);
lean_dec_ref_known(v_n_x3f_3494_, 1);
v___x_3497_ = lean_apply_2(v_toPure_3492_, lean_box(0), v_val_3496_);
return v___x_3497_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg(lean_object* v_inst_3498_, lean_object* v_inst_3499_, lean_object* v_inst_3500_, lean_object* v_inst_3501_, lean_object* v_inst_3502_, lean_object* v_inst_3503_, lean_object* v_n_u2080_3504_, uint8_t v_fullNames_3505_, uint8_t v_allowHorizAliases_3506_, lean_object* v_filter_3507_){
_start:
{
lean_object* v_toApplicative_3508_; lean_object* v_toBind_3509_; lean_object* v_toPure_3510_; lean_object* v___x_3511_; lean_object* v___f_3512_; lean_object* v___x_3513_; 
v_toApplicative_3508_ = lean_ctor_get(v_inst_3498_, 0);
v_toBind_3509_ = lean_ctor_get(v_inst_3498_, 1);
lean_inc(v_toBind_3509_);
v_toPure_3510_ = lean_ctor_get(v_toApplicative_3508_, 1);
lean_inc(v_toPure_3510_);
lean_inc(v_n_u2080_3504_);
v___x_3511_ = l_Lean_unresolveNameGlobal_x3f___redArg(v_inst_3498_, v_inst_3499_, v_inst_3500_, v_inst_3501_, v_inst_3502_, v_inst_3503_, v_n_u2080_3504_, v_fullNames_3505_, v_allowHorizAliases_3506_, v_filter_3507_);
v___f_3512_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3512_, 0, v_toPure_3510_);
lean_closure_set(v___f_3512_, 1, v_n_u2080_3504_);
v___x_3513_ = lean_apply_4(v_toBind_3509_, lean_box(0), lean_box(0), v___x_3511_, v___f_3512_);
return v___x_3513_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___redArg___boxed(lean_object* v_inst_3514_, lean_object* v_inst_3515_, lean_object* v_inst_3516_, lean_object* v_inst_3517_, lean_object* v_inst_3518_, lean_object* v_inst_3519_, lean_object* v_n_u2080_3520_, lean_object* v_fullNames_3521_, lean_object* v_allowHorizAliases_3522_, lean_object* v_filter_3523_){
_start:
{
uint8_t v_fullNames_boxed_3524_; uint8_t v_allowHorizAliases_boxed_3525_; lean_object* v_res_3526_; 
v_fullNames_boxed_3524_ = lean_unbox(v_fullNames_3521_);
v_allowHorizAliases_boxed_3525_ = lean_unbox(v_allowHorizAliases_3522_);
v_res_3526_ = l_Lean_unresolveNameGlobal___redArg(v_inst_3514_, v_inst_3515_, v_inst_3516_, v_inst_3517_, v_inst_3518_, v_inst_3519_, v_n_u2080_3520_, v_fullNames_boxed_3524_, v_allowHorizAliases_boxed_3525_, v_filter_3523_);
return v_res_3526_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal(lean_object* v_m_3527_, lean_object* v_inst_3528_, lean_object* v_inst_3529_, lean_object* v_inst_3530_, lean_object* v_inst_3531_, lean_object* v_inst_3532_, lean_object* v_inst_3533_, lean_object* v_n_u2080_3534_, uint8_t v_fullNames_3535_, uint8_t v_allowHorizAliases_3536_, lean_object* v_filter_3537_){
_start:
{
lean_object* v___x_3538_; 
v___x_3538_ = l_Lean_unresolveNameGlobal___redArg(v_inst_3528_, v_inst_3529_, v_inst_3530_, v_inst_3531_, v_inst_3532_, v_inst_3533_, v_n_u2080_3534_, v_fullNames_3535_, v_allowHorizAliases_3536_, v_filter_3537_);
return v___x_3538_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobal___boxed(lean_object* v_m_3539_, lean_object* v_inst_3540_, lean_object* v_inst_3541_, lean_object* v_inst_3542_, lean_object* v_inst_3543_, lean_object* v_inst_3544_, lean_object* v_inst_3545_, lean_object* v_n_u2080_3546_, lean_object* v_fullNames_3547_, lean_object* v_allowHorizAliases_3548_, lean_object* v_filter_3549_){
_start:
{
uint8_t v_fullNames_boxed_3550_; uint8_t v_allowHorizAliases_boxed_3551_; lean_object* v_res_3552_; 
v_fullNames_boxed_3550_ = lean_unbox(v_fullNames_3547_);
v_allowHorizAliases_boxed_3551_ = lean_unbox(v_allowHorizAliases_3548_);
v_res_3552_ = l_Lean_unresolveNameGlobal(v_m_3539_, v_inst_3540_, v_inst_3541_, v_inst_3542_, v_inst_3543_, v_inst_3544_, v_inst_3545_, v_n_u2080_3546_, v_fullNames_boxed_3550_, v_allowHorizAliases_boxed_3551_, v_filter_3549_);
return v_res_3552_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0(lean_object* v_toFunctor_3554_, lean_object* v_inst_3555_, lean_object* v_inst_3556_, lean_object* v_inst_3557_, lean_object* v_inst_3558_, lean_object* v_inst_3559_, lean_object* v_inst_3560_, lean_object* v_inst_3561_, lean_object* v_n_3562_){
_start:
{
lean_object* v_map_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; 
v_map_3563_ = lean_ctor_get(v_toFunctor_3554_, 0);
lean_inc(v_map_3563_);
lean_dec_ref(v_toFunctor_3554_);
v___x_3564_ = ((lean_object*)(l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0___closed__0));
v___x_3565_ = l_Lean_resolveLocalName___redArg(v_inst_3555_, v_inst_3556_, v_inst_3557_, v_inst_3558_, v_inst_3559_, v_inst_3560_, v_inst_3561_, v_n_3562_);
v___x_3566_ = lean_apply_4(v_map_3563_, lean_box(0), lean_box(0), v___x_3564_, v___x_3565_);
return v___x_3566_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(lean_object* v_inst_3567_, lean_object* v_inst_3568_, lean_object* v_inst_3569_, lean_object* v_inst_3570_, lean_object* v_inst_3571_, lean_object* v_inst_3572_, lean_object* v_inst_3573_, lean_object* v_n_u2080_3574_, uint8_t v_fullNames_3575_){
_start:
{
lean_object* v_toApplicative_3576_; lean_object* v_toFunctor_3577_; uint8_t v___x_3578_; lean_object* v___f_3579_; lean_object* v___x_3580_; 
v_toApplicative_3576_ = lean_ctor_get(v_inst_3567_, 0);
v_toFunctor_3577_ = lean_ctor_get(v_toApplicative_3576_, 0);
v___x_3578_ = 0;
lean_inc(v_inst_3572_);
lean_inc_ref(v_inst_3571_);
lean_inc_ref(v_inst_3570_);
lean_inc_ref(v_inst_3569_);
lean_inc_ref(v_inst_3568_);
lean_inc_ref(v_inst_3567_);
lean_inc_ref(v_toFunctor_3577_);
v___f_3579_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___lam__0), 9, 8);
lean_closure_set(v___f_3579_, 0, v_toFunctor_3577_);
lean_closure_set(v___f_3579_, 1, v_inst_3567_);
lean_closure_set(v___f_3579_, 2, v_inst_3568_);
lean_closure_set(v___f_3579_, 3, v_inst_3569_);
lean_closure_set(v___f_3579_, 4, v_inst_3570_);
lean_closure_set(v___f_3579_, 5, v_inst_3571_);
lean_closure_set(v___f_3579_, 6, v_inst_3572_);
lean_closure_set(v___f_3579_, 7, v_inst_3573_);
v___x_3580_ = l_Lean_unresolveNameGlobal_x3f___redArg(v_inst_3567_, v_inst_3568_, v_inst_3569_, v_inst_3570_, v_inst_3571_, v_inst_3572_, v_n_u2080_3574_, v_fullNames_3575_, v___x_3578_, v___f_3579_);
return v___x_3580_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg___boxed(lean_object* v_inst_3581_, lean_object* v_inst_3582_, lean_object* v_inst_3583_, lean_object* v_inst_3584_, lean_object* v_inst_3585_, lean_object* v_inst_3586_, lean_object* v_inst_3587_, lean_object* v_n_u2080_3588_, lean_object* v_fullNames_3589_){
_start:
{
uint8_t v_fullNames_boxed_3590_; lean_object* v_res_3591_; 
v_fullNames_boxed_3590_ = lean_unbox(v_fullNames_3589_);
v_res_3591_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(v_inst_3581_, v_inst_3582_, v_inst_3583_, v_inst_3584_, v_inst_3585_, v_inst_3586_, v_inst_3587_, v_n_u2080_3588_, v_fullNames_boxed_3590_);
return v_res_3591_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f(lean_object* v_m_3592_, lean_object* v_inst_3593_, lean_object* v_inst_3594_, lean_object* v_inst_3595_, lean_object* v_inst_3596_, lean_object* v_inst_3597_, lean_object* v_inst_3598_, lean_object* v_inst_3599_, lean_object* v_n_u2080_3600_, uint8_t v_fullNames_3601_){
_start:
{
lean_object* v___x_3602_; 
v___x_3602_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(v_inst_3593_, v_inst_3594_, v_inst_3595_, v_inst_3596_, v_inst_3597_, v_inst_3598_, v_inst_3599_, v_n_u2080_3600_, v_fullNames_3601_);
return v___x_3602_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals_x3f___boxed(lean_object* v_m_3603_, lean_object* v_inst_3604_, lean_object* v_inst_3605_, lean_object* v_inst_3606_, lean_object* v_inst_3607_, lean_object* v_inst_3608_, lean_object* v_inst_3609_, lean_object* v_inst_3610_, lean_object* v_n_u2080_3611_, lean_object* v_fullNames_3612_){
_start:
{
uint8_t v_fullNames_boxed_3613_; lean_object* v_res_3614_; 
v_fullNames_boxed_3613_ = lean_unbox(v_fullNames_3612_);
v_res_3614_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f(v_m_3603_, v_inst_3604_, v_inst_3605_, v_inst_3606_, v_inst_3607_, v_inst_3608_, v_inst_3609_, v_inst_3610_, v_n_u2080_3611_, v_fullNames_boxed_3613_);
return v_res_3614_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___redArg(lean_object* v_inst_3615_, lean_object* v_inst_3616_, lean_object* v_inst_3617_, lean_object* v_inst_3618_, lean_object* v_inst_3619_, lean_object* v_inst_3620_, lean_object* v_inst_3621_, lean_object* v_n_u2080_3622_, uint8_t v_fullNames_3623_){
_start:
{
lean_object* v_toApplicative_3624_; lean_object* v_toBind_3625_; lean_object* v_toPure_3626_; lean_object* v___x_3627_; lean_object* v___f_3628_; lean_object* v___x_3629_; 
v_toApplicative_3624_ = lean_ctor_get(v_inst_3615_, 0);
v_toBind_3625_ = lean_ctor_get(v_inst_3615_, 1);
lean_inc(v_toBind_3625_);
v_toPure_3626_ = lean_ctor_get(v_toApplicative_3624_, 1);
lean_inc(v_toPure_3626_);
lean_inc(v_n_u2080_3622_);
v___x_3627_ = l_Lean_unresolveNameGlobalAvoidingLocals_x3f___redArg(v_inst_3615_, v_inst_3616_, v_inst_3617_, v_inst_3618_, v_inst_3619_, v_inst_3620_, v_inst_3621_, v_n_u2080_3622_, v_fullNames_3623_);
v___f_3628_ = lean_alloc_closure((void*)(l_Lean_unresolveNameGlobal___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3628_, 0, v_toPure_3626_);
lean_closure_set(v___f_3628_, 1, v_n_u2080_3622_);
v___x_3629_ = lean_apply_4(v_toBind_3625_, lean_box(0), lean_box(0), v___x_3627_, v___f_3628_);
return v___x_3629_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___redArg___boxed(lean_object* v_inst_3630_, lean_object* v_inst_3631_, lean_object* v_inst_3632_, lean_object* v_inst_3633_, lean_object* v_inst_3634_, lean_object* v_inst_3635_, lean_object* v_inst_3636_, lean_object* v_n_u2080_3637_, lean_object* v_fullNames_3638_){
_start:
{
uint8_t v_fullNames_boxed_3639_; lean_object* v_res_3640_; 
v_fullNames_boxed_3639_ = lean_unbox(v_fullNames_3638_);
v_res_3640_ = l_Lean_unresolveNameGlobalAvoidingLocals___redArg(v_inst_3630_, v_inst_3631_, v_inst_3632_, v_inst_3633_, v_inst_3634_, v_inst_3635_, v_inst_3636_, v_n_u2080_3637_, v_fullNames_boxed_3639_);
return v_res_3640_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals(lean_object* v_m_3641_, lean_object* v_inst_3642_, lean_object* v_inst_3643_, lean_object* v_inst_3644_, lean_object* v_inst_3645_, lean_object* v_inst_3646_, lean_object* v_inst_3647_, lean_object* v_inst_3648_, lean_object* v_n_u2080_3649_, uint8_t v_fullNames_3650_){
_start:
{
lean_object* v___x_3651_; 
v___x_3651_ = l_Lean_unresolveNameGlobalAvoidingLocals___redArg(v_inst_3642_, v_inst_3643_, v_inst_3644_, v_inst_3645_, v_inst_3646_, v_inst_3647_, v_inst_3648_, v_n_u2080_3649_, v_fullNames_3650_);
return v___x_3651_;
}
}
LEAN_EXPORT lean_object* l_Lean_unresolveNameGlobalAvoidingLocals___boxed(lean_object* v_m_3652_, lean_object* v_inst_3653_, lean_object* v_inst_3654_, lean_object* v_inst_3655_, lean_object* v_inst_3656_, lean_object* v_inst_3657_, lean_object* v_inst_3658_, lean_object* v_inst_3659_, lean_object* v_n_u2080_3660_, lean_object* v_fullNames_3661_){
_start:
{
uint8_t v_fullNames_boxed_3662_; lean_object* v_res_3663_; 
v_fullNames_boxed_3662_ = lean_unbox(v_fullNames_3661_);
v_res_3663_ = l_Lean_unresolveNameGlobalAvoidingLocals(v_m_3652_, v_inst_3653_, v_inst_3654_, v_inst_3655_, v_inst_3656_, v_inst_3657_, v_inst_3658_, v_inst_3659_, v_n_u2080_3660_, v_fullNames_boxed_3662_);
return v_res_3663_;
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
